/*
   The MIT License (MIT)

   Copyright (c) 2018 Satya Das

   Permission is hereby granted, free of charge, to any person obtaining a copy of
   this software and associated documentation files (the "Software"), to deal in
   the Software without restriction, including without limitation the rights to
   use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
   the Software, and to permit persons to whom the Software is furnished to do so,
   subject to the following conditions:

   The above copyright notice and this permission notice shall be included in all
   copies or substantial portions of the Software.

   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
   FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
   COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
   IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
   CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#include "cibcompound.h"
#include "cibfunction_helper.h"
#include "cibhelper.h"
#include "cibidmgr.h"
#include "cibutil.h"

#include "cppcompound-accessor.h"
#include "cppfunc-accessor.h"
#include "cppobj-accessor.h"
#include "cppvar-accessor.h"

#include "cppwriter.h"

#include "boost-helper/bfs.h"

#include <unordered_map>
#include <unordered_set>

//////////////////////////////////////////////////////////////////////////

static CppWriter gCppWriter;

static void emitType(std::ostream&      stm,
                     const CppVarType*  origTypeObj,
                     FuncProtoPurpose   purpose,
                     const CibHelper&   helper,
                     const CibCompound* typeResolver = nullptr)
{
  if (origTypeObj == nullptr)
    return;

  const auto& typeObj = [&]() -> CppVarType {
    if (purpose == kPurposeProxyDecl)
      return *origTypeObj;
    auto* resolvedCppObj =
      (typeResolver
         ? typeResolver->resolveTypename(origTypeObj->baseType(), helper, TypeResolvingFlag::IgnoreStlHelpers)
         : nullptr);
    if (resolvedCppObj == nullptr)
      return *origTypeObj;
    const auto* resolvedType = isClassLike(resolvedCppObj) ? static_cast<const CibCompound*>(resolvedCppObj) : nullptr;
    if (resolvedType && resolvedType->isTemplated())
      resolvedType = typeResolver;
    CppVarType varType(longName(resolvedType ? resolvedType : resolvedCppObj), origTypeObj->typeModifier());
    varType.typeAttr(origTypeObj->typeAttr());
    return varType;
  }();

  switch (purpose)
  {
    case kPurposeCApi:
    case kPurposeProxyCApi:
    case kPurposeProxyProcType:
    case kPurposeGenericProxyProcType:
      stm << "__zz_cib_AbiType_t<";
      gCppWriter.emit(&typeObj, stm);
      stm << ">";
      return;

    case kPurposeProxyDefnReturnType:
      gCppWriter.emit(&typeObj, stm);
      return;

    case kPurposeSignature:
    case kPurposeSigForVirtualFuncMatch:
    case kPurposeProxyDecl:
    case kPurposeProxyDefn:
    case kPurposeGenericProxy:
    case kPurposeGeneric:
      gCppWriter.emit(&typeObj, stm);
      return;

    default:
      // assert(false);
      break;
  }
}

static void emitType(std::ostream&      stm,
                     const CppVar*      varObj,
                     FuncProtoPurpose   purpose,
                     const CibHelper&   helper,
                     const CibCompound* typeResolver = nullptr)
{
  if ((purpose == kPurposeProxyProcType) || (purpose == kPurposeGenericProxyProcType))
  {
    stm << "__zz_cib_AbiType_t<decltype(";
    stm << varObj->name();
    stm << ")>";
    return;
  }
  else
  {
    if ((purpose == kPurposeCApi) || (purpose == kPurposeProxyCApi))
    {
      stm << "__zz_cib_AbiType_t<";
      emitType(stm, varObj->varType(), kPurposeSignature, helper, typeResolver);
    }
    else
    {
      emitType(stm, varObj->varType(), purpose, helper, typeResolver);
    }

    if ((purpose == kPurposeSignature) || (purpose == kPurposeSigForVirtualFuncMatch) || (purpose == kPurposeCApi)
        || (purpose == kPurposeProxyCApi))
    {
      for (auto& arrSize : varObj->varDecl().arraySizes())
      {
        stm << '[';
        if (arrSize)
          gCppWriter.emitExpr(arrSize.get(), stm);
        stm << ']';
      }
    }

    if ((purpose == kPurposeCApi) || (purpose == kPurposeProxyCApi))
    {
      stm << ">";
    }
  }
}

inline void emitParamName(std::ostream& stm, const CppVar* var, size_t paramName, bool makeNameIfMissing = true)
{
  if (!var->name().empty())
  {
    stm << var->name();
  }
  else if (makeNameIfMissing)
  { // Parameter name is missing. Provide our own.
    stm << "__zz_cib_param" << paramName;
  }
}

void CibFunctionHelper::emitArgsForDecl(std::ostream& stm, FuncProtoPurpose purpose, const CibHelper& helper) const
{
  if (!hasParams())
    return;
  auto        params = getParams();
  const char* sep    = "";
  for (size_t i = 0; i < params->size(); ++i)
  {
    const auto& param = params->at(i);
    CppVarEPtr  var   = param;
    stm << sep;
    sep = ", ";

    if ((purpose == kPurposeGenericProxyProcType) || (purpose == kPurposeProxyProcType))
    {
      stm << "__zz_cib_AbiType_t<decltype(";
      emitParamName(stm, var, i, !(purpose & kPurposeProxyDecl));
      stm << ")>";

      continue;
    }

    emitType(stm, var.get(), purpose, helper, getOwner());
    if ((purpose != kPurposeSignature) && (purpose != kPurposeSigForVirtualFuncMatch))
    {
      if (!(purpose & kPurposeProxyDecl) || !var->name().empty())
      {
        stm << ' ';
        emitParamName(stm, var, i);
      }
    }
    if ((purpose != kPurposeSignature) && (purpose != kPurposeSigForVirtualFuncMatch) && (purpose != kPurposeCApi)
        && (purpose != kPurposeProxyCApi))
    {
      if (param->objType_ == CppObjType::kVar)
      {
        if (!var->varDecl().arraySizes().empty())
        {
          // FIXME: Emit error if the parameter type is not of basic types
          // for (const auto& idx : var->varDecl_.arraySizes_)
          {
            for (const auto& arSize : var->varDecl().arraySizes())
            {
              stm << "[";
              gCppWriter.emitExpr(arSize.get(), stm);
              stm << ']';
            }
          }
        }
      }
    }
    if ((purpose == kPurposeProxyDecl) && var->varDecl().assignValue())
    {
      stm << " = ";
      gCppWriter.emitExpr(var->varDecl().assignValue(), stm);
    }
  }
}

void CibFunctionHelper::emitArgsForCall(std::ostream&    stm,
                                        const CibHelper& helper,
                                        const CibParams& cibParams,
                                        FuncProtoPurpose purpose,
                                        CppIndent        indentation) const
{
  if (!hasParams())
    return;
  const auto* params = getParams();

  const auto emitArgForProxyDefn = [&](const CppConstVarEPtr& var, size_t i) {
    stm << "decltype(";
    emitParamName(stm, var, i);
    stm << ")>(";
    if (!isByRef(var))
      stm << "std::move(";
    emitParamName(stm, var, i);
    if (!isByRef(var))
      stm << ')';
    stm << ')';
  };

  for (size_t i = 0; i < params->size(); ++i)
  {
    if (i != 0)
      stm << ",\n";
    stm << indentation;

    const auto&     param = params->at(i);
    CppConstVarEPtr var   = param;
    switch (purpose)
    {
      case kPurposeCApi:
      case kPurposeProxyCApi:
        stm << "__zz_cib_::__zz_cib_FromAbiType<";
        emitType(stm, var.get(), kPurposeSignature, helper, getOwner());
        stm << ">(";
        emitParamName(stm, var, i);
        stm << ")";
        break;

      case kPurposeGeneric:
      case kPurposeProxyDefn:
      case kPurposeGenericProxy:
        stm << "__zz_cib_::__zz_cib_ToAbiType<";
        emitArgForProxyDefn(var, i);
        break;

      case kPurposeTemplateSpecialization:
        stm << "__zz_cib_::__zz_cib_LazyAbiType<__zz_cib_Dummy, ";
        emitArgForProxyDefn(var, i);
        break;

      case kPurposeInvokeHelper:
        emitParamName(stm, var, i);
        break;

      case kPurposeGenericProxyCtorInit:
        if (!isByRef(var))
          stm << "std::move(";
        emitParamName(stm, var, i);
        if (!isByRef(var))
          stm << ')';
        break;

      default:
        assert(false && "Should never happen");
    }
  }
}

void CibFunctionHelper::emitSignature(std::ostream& stm, const CibHelper& helper, FuncProtoPurpose purpose) const
{
  if (isTypeConverter())
    stm << "operator ";
  if ((purpose != kPurposeSigForVirtualFuncMatch) && returnType())
  {
    emitType(stm, returnType(), purpose, helper, getOwner());
    stm << ' ';
  }

  if (!isTypeConverter())
  {
    stm << funcName() << '(';
    emitArgsForDecl(stm, purpose, helper);
    stm << ')';
    if (isDeleted())
      stm << " = delete";
  }
  else
  {
    stm << "()";
  }

  if (isConst())
    stm << " const";
}

void CibFunctionHelper::emitOrigDecl(std::ostream&    stm,
                                     const CibHelper& helper,
                                     const CibParams& cibParams,
                                     FuncProtoPurpose purpose,
                                     CppIndent        indentation /* = CppIndent */) const
{
  stm << indentation;
  if (isStatic())
    stm << "static ";
  else if (isFriend())
    stm << "friend ";
  else if (isVirtual())
    stm << "virtual ";
  /* inline will not remain inline.
  else if (isInline())
    stm << "inline ";
  */
  emitSignature(stm, helper, purpose);
  if (isPureVirtual())
    stm << " = 0";
  stm << ";\n";
}

void CibFunctionHelper::emitCAPIDecl(std::ostream&      stm,
                                     const CibHelper&   helper,
                                     const CibParams&   cibParams,
                                     const CibCompound* callingOwner,
                                     const std::string& capiName,
                                     FuncProtoPurpose   purpose) const
{
  emitCAPIReturnType(stm, helper);
  stm << " __zz_cib_decl ";
  stm << capiName << '(';
  if ((purpose != kPurposeSignature) && isConstructor() && callingOwner->needsGenericProxyDefinition())
  {
    stm << "__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_GetMethodTable";
    if (hasParams())
      stm << ", ";
  }
  else if (isConstructorLike() && callingOwner->needsNoProxy())
  {
    stm << callingOwner->longName() << "* __zz_cib_this";
    if (hasParams())
      stm << ", ";
  }
  else if (!isStatic() && !isFriend() && (isMethod() || isDestructor() || isTypeConverter()))
  {
    if (isConst())
      stm << "const ";
    if (callingOwner->isOverridable() && (purpose == kPurposeCApi))
      stm << "__zz_cib_Delegatee*";
    else
      stm << callingOwner->longName() << "*";
    if (purpose != kPurposeSignature)
      stm << " __zz_cib_obj";
    if (hasParams())
      stm << ", ";
  }
  if ((purpose == kPurposeCApi) && isCopyConstructor() && getOwner()->isOverridable())
  {
    stm << "const __zz_cib_Delegatee* __zz_cib_obj)";
  }
  else if ((purpose == kPurposeCApi) && isMoveConstructor() && getOwner()->isOverridable())
  {
    stm << "__zz_cib_Delegatee* __zz_cib_obj)";
  }
  else
  {
    emitArgsForDecl(stm, purpose, helper);
    stm << ')';
  }
}

void CibFunctionHelper::emitCAPIDefn(std::ostream&      stm,
                                     const CibHelper&   helper,
                                     const CibParams&   cibParams,
                                     const CibCompound* callingOwner,
                                     const std::string& capiName,
                                     FuncProtoPurpose   purpose,
                                     CppIndent          indentation /* = CppIndent */) const
{
  bool forProxy = ((purpose & kPurposeProxyCApi) == kPurposeProxyCApi);

  if (!forProxy)
  {
    if (isConstructorLike() && callingOwner->isAbstract() && !callingOwner->needsGenericProxyDefinition())
      return;
  }
  stm << indentation << "static ";
  emitCAPIDecl(stm, helper, cibParams, callingOwner, capiName, purpose);
  stm << " {\n";
  if (isConstructor())
  {
    stm << ++indentation << "return new ";
    if (callingOwner->needsNoProxy())
    {
      stm << "(__zz_cib_this) ";
    }
    if (callingOwner->needsGenericProxyDefinition())
    {
      stm << "__zz_cib_::__zz_cib_Generic<" << callingOwner->longName() << ">(__zz_cib_proxy, __zz_cib_GetMethodTable";
      if (hasParams())
        stm << ", ";
    }
    else if (callingOwner->isOverridable())
    {
      stm << "__zz_cib_Delegatee(";
    }
    else
    {
      stm << callingOwner->longName() << '(';
    }
    if (!forProxy && isCopyConstructor() && getOwner()->isOverridable())
    {
      stm << "*__zz_cib_obj";
    }
    else if (!forProxy && isMoveConstructor() && getOwner()->isOverridable())
    {
      stm << "std::move(*__zz_cib_obj)";
    }
    else
    {
      emitArgsForCall(stm, helper, cibParams, purpose, indentation);
    }
    stm << ");\n";
  }
  else if (isDestructor())
  {
    stm << ++indentation;
    if (callingOwner->needsNoProxy())
    {
      stm << "__zz_cib_obj->~";
      if (callingOwner->isOverridable())
        stm << "__zz_cib_Delegator<" << callingOwner->name() << ">";
      else
        stm << callingOwner->name();
      stm << "();\n";
    }
    else
    {
      if (forProxy)
        stm << "__zz_cib_Helper<" << longName(callingOwner) << ">::__zz_cib_ReleaseHandle(__zz_cib_obj);\n";
      stm << indentation << "delete __zz_cib_obj;\n";
    }
  }
  else
  {
    if (!isVoid(returnType()))
    {
      stm << ++indentation << "return __zz_cib_ToAbiType<";
      emitType(stm, returnType(), kPurposeSignature, helper, getOwner());
      stm << ">(\n";
    }
    stm << ++indentation;
    if (isClassLike(callingOwner) && !isStatic() && !isFriend())
      stm << "__zz_cib_obj->";

    if (isCppFile(callingOwner))
    {
      stm << "::";
    }
    else if (!forProxy && !isFriend()
             && (isStatic()
                 || ((!cibParams.noExactDelegation || callingOwner->isInterfaceLike()) && !isPureVirtual()
                     && (accessType() != CppAccessType::kPrivate))))
    {
      stm << callingOwner->longName() << "::";
    }
    if (!isTypeConverter())
      stm << funcName();
    else
    {
      stm << "operator ";
      emitType(stm, returnType(), FuncProtoPurpose::kPurposeSignature, helper, getOwner());
    }
    stm << "(";
    if (hasParams())
    {
      stm << '\n';
      ++indentation;
    }
    emitArgsForCall(stm, helper, cibParams, purpose, indentation);
    if (hasParams())
      stm << '\n' << --indentation;
    stm << ")";
    if (!isVoid(returnType()))
      stm << '\n' << --indentation << ")";
    stm << ";\n";
  }
  stm << --indentation << "}\n";
}

void CibFunctionHelper::emitDefn(std::ostream&      stm,
                                 bool               asInline,
                                 const CibHelper&   helper,
                                 const CibParams&   cibParams,
                                 const CibCompound* callingOwner,
                                 const CibIdData*   cibIdData,
                                 CppIndent          indentation) const
{
  if (callingOwner->isTemplateInstance() && (isMethod() || (isConstructor() && !isCopyConstructor())))
  {
    stm << indentation;
    stm << "template <typename __zz_cib_Dummy = std::pair<" << callingOwner->name() << ", " << callingOwner->name()
        << ">>\n";
  }

  stm << indentation;
  if (isTypeConverter())
  {
    stm << fullName(callingOwner) << "::operator ";
    emitType(stm, returnType(), kPurposeProxyDefnReturnType, helper, callingOwner);
    stm << "()";
  }
  else
  {
    if (asInline && isFriend())
      stm << "friend ";

    if (isFunction())
    {
      emitType(stm, returnType(), kPurposeProxyDefnReturnType, helper, callingOwner);
      stm << ' ';
    }
    if (!asInline && !isFriend() && isNamespaceLike(callingOwner))
      stm << fullName(callingOwner) << "::";
    stm << funcName() << '(';
    emitArgsForDecl(stm, kPurposeProxyDefn, helper);
    stm << ")";
  }
  auto capiName = cibIdData->getMethodCApiName(signature(helper));
  if (isConstructor())
  {
    stm << '\n';
    if (callingOwner->needsNoProxy())
    {
      stm << --indentation << "{\n";
      stm << ++indentation;
    }
    else
    {
      stm << ++indentation << ": " << fullName(callingOwner) << '(';
    }

    stm << "__zz_cib_MyHelper::" << capiName;
    stm << "(\n";
    stm << ++indentation;
    if (callingOwner->needsNoProxy() || callingOwner->needsGenericProxyDefinition())
    {
      stm << "this";
      if (hasParams())
        stm << ", \n";
    }
    auto const argPurpose =
      (callingOwner->isTemplateInstance() && !isCopyConstructor()) ? kPurposeTemplateSpecialization : kPurposeProxyDefn;
    emitArgsForCall(stm, helper, cibParams, argPurpose, indentation);

    if (callingOwner->needsNoProxy())
    {
      stm << '\n' << --indentation << ");\n";
      stm << --indentation << "}\n";
    }
    else
    {
      stm << "))\n";
      stm << --indentation << "{}\n";
    }
  }
  else
  {
    if (isConst())
    {
      stm << " const";
    }
    stm << " {\n";
    if (isDestructor())
    {
      if (callingOwner->needsGenericProxyDefinition())
      {
        stm << indentation << "__zz_cib_MyHelper::__zz_cib_ReleaseProxy(this);\n";
      }
      if (!callingOwner->needsNoProxy())
      {
        stm << indentation << "auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);\n";
      }
    }
    else
    {
      ++indentation;
    }

    if (returnType() && !isVoid(returnType()))
    {
      stm << indentation << "return __zz_cib_::__zz_cib_FromAbiType<";
      emitType(stm, returnType(), kPurposeProxyDefnReturnType, helper, callingOwner);
      stm << ">(\n";
    }
    stm << ++indentation;
    if (!isClassLike(callingOwner))
    {
      stm << "__zz_cib_";
      if (isNamespaceLike(callingOwner))
        stm << callingOwner->longName();
      else
        stm << "::__zz_cib_" << cibParams.moduleName << "Global";

      stm << "::__zz_cib_Helper::";
    }
    else
    {
      stm << "__zz_cib_MyHelper::";
    }
    stm << capiName;
    if (!isDestructor())
    {
      if (callingOwner->isTemplateInstance())
        stm << "<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, ";
      else
        stm << "<__zz_cib_::__zz_cib_AbiType_t<";

      emitType(stm, returnType(), kPurposeProxyDefnReturnType, helper, callingOwner);
      stm << ">>";
    }
    stm << "(\n";
    ++indentation;
    if (isDestructor() && !callingOwner->needsNoProxy())
    {
      stm << indentation << "h";
    }
    else if (isClassLike(callingOwner) && !isStatic() && !isFriend())
    {
      stm << indentation << "__zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)";
      if (hasParams())
        stm << ",\n";
    }
    auto const argPurpose = callingOwner->isTemplateInstance() ? kPurposeTemplateSpecialization : kPurposeProxyDefn;
    emitArgsForCall(stm, helper, cibParams, argPurpose, indentation);
    stm << '\n' << --indentation << ")";
    if (returnType() && !isVoid(returnType()))
      stm << '\n' << --indentation << ')';
    stm << ";\n";
    stm << --indentation << "}\n";
  }
}

void CibFunctionHelper::emitGenericProxyDefn(std::ostream&      stm,
                                             const CibHelper&   helper,
                                             const CibParams&   cibParams,
                                             const std::string& capiName,
                                             CppIndent          indentation /* = CppIndent */) const
{
  if (isVirtual())
  {
    emitGenericDefn(stm, helper, cibParams, capiName, kPurposeGenericProxy, indentation);
  }
  else if (isConstructor() && (!isCopyConstructor() || getOwner()->isCopyCtorCallable()))
  {
    stm << indentation
        << "__zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_GetMethodTable";
    if (hasParams())
      stm << ", ";
    emitArgsForDecl(stm, kPurposeGenericProxy, helper);
    stm << ")\n";
    ++indentation;
    stm << indentation << ": " << getOwner()->longName() << "::" << funcName() << '(';
    emitArgsForCall(stm, helper, cibParams, kPurposeGenericProxyCtorInit, indentation);
    stm << ")\n";
    stm << indentation << ", __zz_cib_h_(__zz_cib_proxy)\n";
    stm << indentation << ", __zz_cib_methodTableHelper(__zz_cib_GetMethodTable)\n";
    --indentation;
    stm << indentation << "{}\n";
  }
}

void CibFunctionHelper::emitGenericDefn(std::ostream&      stm,
                                        const CibHelper&   helper,
                                        const CibParams&   cibParams,
                                        const std::string& capiName,
                                        FuncProtoPurpose   purpose,
                                        CppIndent          indentation /* = CppIndent */) const
{
  if (!isVirtual())
    return;

  stm << indentation;
  if (isDestructor())
    stm << "~__zz_cib_Generic()";
  else
    emitSignature(stm, helper, purpose);
  stm << " override";
  stm << " {\n";
  ++indentation;
  bool genericProxy = (purpose == kPurposeGenericProxy);
  if (isDestructor())
  {
    stm << indentation << "if (!__zz_cib_h_) return;\n";
    if (!genericProxy)
      stm << indentation << "auto __zz_cib_h = __zz_cib_Helper<" << longName(getOwner())
          << ">::__zz_cib_ReleaseHandle(this);\n";
    else
      stm << indentation << "auto __zz_cib_h = __zz_cib_h_;\n";
  }
  else
  {
    stm << indentation << "auto __zz_cib_h = __zz_cib_h_;\n";
  }

  emitProcType(
    stm, helper, cibParams, genericProxy ? kPurposeGenericProxyProcType : kPurposeProxyProcType, indentation);
  if (returnType() && !isVoid(returnType()))
  {
    stm << indentation << "return __zz_cib_FromAbiType<";
    emitType(stm, returnType(), kPurposeSignature, helper, getOwner());
    stm << ">(\n";
    ++indentation;
  }
  stm << indentation << "__zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::";
  stm << capiName << ">(\n";
  stm << ++indentation << "__zz_cib_h";
  if (hasParams())
  {
    stm << ",\n";
    emitArgsForCall(stm, helper, cibParams, genericProxy ? kPurposeGenericProxy : kPurposeGeneric, indentation);
  }
  if (returnType() && !isVoid(returnType()))
    stm << '\n' << --indentation << ")";
  stm << '\n' << --indentation << ");\n";
  stm << --indentation << "}\n";
}

void CibFunctionHelper::emitProcType(std::ostream&    stm,
                                     const CibHelper& helper,
                                     const CibParams& cibParams,
                                     FuncProtoPurpose purpose,
                                     CppIndent        indentation /* = CppIndent */) const
{
  stm << indentation << "using __zz_cib_ProcType = ";
  if (purpose == kPurposeInvokeHelper)
  {
    if (isConstructorLike())
      stm << "__zz_cib_AbiType ";
    else if (isDestructor())
      stm << "void ";
    else
      stm << "_RT ";
  }
  else
  {
    emitCAPIReturnType(stm, helper);
  }

  stm << "(__zz_cib_decl *) (";
  if ((!isStatic() && !isFriend() && (isDestructor() || isMethod() || isTypeConverter()))
      || (isConstructor() && getOwner()->needsNoProxy()))
  {
    if (isConst())
      stm << "const ";
    if (purpose != kPurposeGenericProxyProcType)
      stm << "__zz_cib_AbiType";
    else
      stm << "__zz_cib_Proxy";
    if (hasParams())
      stm << ", ";
  }
  else if (isConstructor() && (purpose == kPurposeInvokeHelper) && getOwner()->needsGenericProxyDefinition())
  {
    stm << getOwner()->longName() << "*, const __zz_cib_MethodTable*";
    if (hasParams())
      stm << ", ";
  }

  if (purpose == kPurposeInvokeHelper)
  {
    if (hasParams())
      stm << "_Args...";
  }
  else
  {
    emitArgsForDecl(stm, purpose, helper);
  }

  stm << ");\n";
}

void CibFunctionHelper::emitCAPIReturnType(std::ostream&    stm,
                                           const CibHelper& helper,
                                           CppIndent        indentation /* = CppIndent */) const
{
  stm << indentation;
  if (isConstructor())
    stm << "__zz_cib_AbiType";
  else if (isDestructor())
    stm << "void";
  else
  {
    stm << "__zz_cib_AbiType_t<";
    emitType(stm, returnType(), kPurposeSignature, helper, getOwner());
    stm << '>';
  }
}

///////////////////////////////////////////////////////////////////////////////////////////////////

void emitInheritanceList(std::ostream& stm, const CibCompoundArray& inhList, CppAccessType accessType, char& sep)
{
  if (inhList.empty())
    return;
  stm << ' ' << sep << ' ' << accessType << ' ' << inhList.front()->longName();
  sep = ',';
  for (CibCompoundArray::const_iterator itr = inhList.begin() + 1; itr != inhList.end(); ++itr)
    stm << sep << accessType << ' ' << (*itr)->longName();
}

CppObj* CibCompound::resolveTypename(const std::string& typeName,
                                     const CibHelper&   helper,
                                     TypeResolvingFlag  typeResolvingFlag) const
{
  const auto key = std::make_pair(typeName, typeResolvingFlag);
  auto       itr = typeNameToCibCppObj_.find(key);
  if (itr != typeNameToCibCppObj_.end())
    return itr->second;
  auto* resolvedType        = helper.resolveTypename(typeName, this, typeResolvingFlag);
  typeNameToCibCppObj_[key] = resolvedType;

  return resolvedType;
}

static const CppHashIf* hasHeaderGuard(const CppObjPtrArray& members)
{
  auto firstNonCommentItr = std::find_if(members.begin(), members.end(), [](const CppObjPtr& mem) {
    return (mem->objType_ > CppObjType::kCPreProcessorTypeStarts);
  });
  if (firstNonCommentItr == members.end())
    return nullptr;

  const CppHashIfEPtr hashIf = *firstNonCommentItr;
  if (!hashIf)
    return nullptr;

  if (hashIf->condType_ != CppHashIf::kIfNDef)
    return nullptr;

  auto lastNonCommentItr = std::find_if(members.rbegin(), members.rend(), [](const CppObjPtr& mem) {
    return (mem->objType_ > CppObjType::kCPreProcessorTypeStarts);
  });

  const CppHashIfEPtr lastHashIf = *lastNonCommentItr;
  if (!lastHashIf)
    return nullptr;

  if (lastHashIf->condType_ != CppHashIf::kEndIf)
    return nullptr;

  return lastHashIf;
}

void CibCompound::emitValueClassNames(std::ostream& stm, const CibHelper& helper, const CibParams& cibParams) const
{
  std::vector<const CibCompound*> layoutSharingClasses;
  forEachNested(CppAccessType::kPublic, [&layoutSharingClasses](const CibCompound* compound) {
    if (compound->needsNoProxy() && !compound->name().empty())
      layoutSharingClasses.push_back(compound);
  });

  if (layoutSharingClasses.empty())
    return;

  stm << "\n#include \"" << bfs::relative(name(), cibParams.inputPath).string() << "\"\n";

  for (const auto* compound : layoutSharingClasses)
    stm << "__ZZ_CIB_DECLARE_VALUE_CLASS(" << compound->longName() << ")\n";
}

void CibCompound::emitUserHeader(const CibHelper& helper, const CibParams& cibParams, const CibIdMgr& cibIdMgr) const
{
  if (!isCppFile(this) || isUnusedStl())
    return;

  const auto usrIncPath = [&]() {
    if (isStlClass())
      return bfs::temp_directory_path() / bfs::unique_path();
    if (isStlHelpereClass())
      return cibParams.outputPath / cibParams.stlHelperDirName / bfs::path(name()).filename();

    return cibParams.outputPath / name().substr(cibParams.inputPath.string().length());
  }();
  bfs::create_directories(usrIncPath.parent_path());
  std::ofstream stm(usrIncPath.string(), std::ios_base::out);

  auto firstStatementItr      = std::find_if(members().begin(), members().end(), [](const CppObjPtr& mem) {
    return (mem->objType_ > CppObjType::kCppStatementObjectTypeStarts);
  });
  auto lastPreProcessorRevItr = std::find_if(std::reverse_iterator<decltype(firstStatementItr)>(firstStatementItr),
                                             members().rend(),
                                             [](const CppObjPtr& mem) -> bool { return (isPreProcessorType(mem)); });
  auto memItr                 = members().begin();
  if (lastPreProcessorRevItr != members().rend())
  {
    std::for_each(memItr, lastPreProcessorRevItr.base(), [&stm](const CppObjPtr& mem) {
      // Emit everything other than cib-hooks in library code
      if (mem->objType_ == CppObjType::kHashInclude)
      {
        auto* inc = static_cast<const CppInclude*>(mem.get());
        if (strstr(inc->name_.c_str(), "__zz_cib_") != nullptr)
          return;
      }
      gCppWriter.emit(mem.get(), stm);
    });
    memItr = lastPreProcessorRevItr.base();

    stm << "\n";
  }
  auto* headerGuardEndIf = hasHeaderGuard(members());
  stm << "#include \"" << implIncludeName(cibParams) << "-predef.h\"\n\n";
  for (; memItr != members().end(); ++memItr)
  {
    const CppObj* mem = memItr->get();
    if (mem == headerGuardEndIf)
      stm << "#include \"" << implIncludeName(cibParams) << "-postdef.h\"\n";
    emitDecl(mem, stm, helper, cibParams, cibIdMgr);
    if (isCompound(mem))
      stm << '\n';
  }

  if (!headerGuardEndIf)
    stm << "#include \"" << implIncludeName(cibParams) << "-postdef.h\"\n";
}

void CibCompound::emitPredefHeader(const CibHelper& helper, const CibParams& cibParams) const
{
  if (!isCppFile(this) || isStlClass())
    return;

  auto implPath = cibParams.outputPath / (getImplPath(cibParams) + "-predef.h");
  bfs::create_directories(implPath.parent_path());
  std::ofstream stm(implPath.string(), std::ios_base::out);
  stm << "#pragma once\n";
  stm << "#include \"__zz_cib_internal/__zz_cib_" << cibParams.moduleName << "-class-internal-def.h\"\n";

  if (isStlHelpereClass())
    return;
  std::set<const CppObj*> cppObjs;
  collectTypeDependencies(helper, cppObjs, TypeResolvingFlag::IgnoreStlHelpers);
  for (auto cppObj : cppObjs)
  {
    CibConstCompoundEPtr compound = cppObj;
    if (!compound)
      continue;
    compound->emitDependentTemplateSpecilizationHeaders(stm, true);
  }
}

static std::set<const CppObj*> extractFwdDeclarations(std::set<const CppObj*>& dependencies)
{
  std::set<const CppObj*> fwdDecls;
  for (auto cppObj : dependencies)
  {
    if (cppObj->objType_ == CppObjType::kFwdClsDecl)
      fwdDecls.insert(cppObj);
  }
  for (auto cppObj : fwdDecls)
    dependencies.erase(cppObj);

  return fwdDecls;
}

static void emitFwdDecl(std::ostream& stm, const CibCompound* compound)
{
  if (compound->isStlRelated())
    return;
  if (compound->isTemplated())
    return;
  if (!isClassLike(compound))
    return;
  if (compound->name().empty())
    return;
  if (isClassLike(compound->outer()))
    return;

  stm << '\n';
  const auto enclosingNamespaceDecls = compound->wrappingNamespaceDeclarations();
  if (!enclosingNamespaceDecls.empty())
    stm << enclosingNamespaceDecls << ' ';
  stm << compound->compoundType() << ' ' << compound->name() << ";";
  if (!enclosingNamespaceDecls.empty())
    stm << compound->closingBracesForWrappingNamespaces();
}

static void emitFwdDeclarations(std::ostream& stm, const std::set<const CppObj*>& dependencies)
{
  for (auto cppObj : dependencies)
  {
    CibConstCompoundEPtr compound = cppObj;
    if (!compound)
      continue;
    emitFwdDecl(stm, compound);
  }
}

void CibCompound::emitUserImplDependencyHeaders(std::ostream&                  stm,
                                                const CibHelper&               helper,
                                                const CibParams&               cibParams,
                                                const std::set<const CppObj*>& dependencies) const
{
  auto asts    = collectAstDependencies(dependencies);
  auto thisAst = getFileAstObj(this);
  if (!isStlClass() && !isStlHelpereClass())
    asts.insert(thisAst);
  else
    asts.erase(thisAst);
  for (auto itr = asts.begin(); itr != asts.end();)
  {
    const auto ast = *itr;
    if (ast->isStlHelpereClass())
      itr = asts.erase(itr);
    else
      ++itr;
  }
  auto headers = collectHeaderDependencies(asts, cibParams, true);
  if (!headers.empty())
  {
    stm << '\n';
    for (const auto& header : headers)
      stm << "#include " << header << "\n";
  }

  for (const auto dependent : dependencies)
  {
    CibConstCompoundEPtr dependentCompound = dependent;
    if (!dependentCompound || !dependentCompound->isStlHelpereClass() || !dependentCompound->isTemplateInstance())
      continue;
    stm << "#include \"__zz_cib_internal/" << dependentCompound->nsName() << ".h\"\n";
  }
}

bool CibCompound::usedReferenceInTemplateInstance(const CibCompound* compound) const
{
  const auto itr = usedInTemplateInstaces_.find(compound);
  if (itr == usedInTemplateInstaces_.end())
    return false;
  return itr->second == TemplateArgType::kAsReference;
}

void CibCompound::extractTemplateArgumentHardDependencies(std::set<const CppObj*>& argDependencies,
                                                          std::set<const CppObj*>& dependencies) const
{
  assert(isTemplateInstance());

  for (auto itr = argDependencies.begin(); itr != argDependencies.end();)
  {
    CibConstCompoundEPtr compound = *itr;
    if (compound && !compound->usedReferenceInTemplateInstance(this))
    {
      dependencies.insert(*itr);
      itr = argDependencies.erase(itr);
    }
    else
    {
      dependencies.erase(*itr);
      ++itr;
    }
  }
}

void CibCompound::emitTemplateInstanceSpecializations(std::ostream&    stm,
                                                      const CibHelper& helper,
                                                      const CibParams& cibParams,
                                                      const CibIdMgr&  cibIdMgr) const
{
  forEachNested(CppAccessType::kPublic, [&](const CibCompound* compound) {
    if (!compound->isTemplated() || compound->templateInstances_.empty())
      return;
    compound->forEachTemplateInstance([&](CibCompound* templCompound) {
      auto          specializationFilename = templCompound->nsName() + ".h";
      auto          specializationFilepath = cibParams.outputPath / getImplDir(cibParams) / specializationFilename;
      std::ofstream tmplStm(specializationFilepath.string(), std::ios_base::out);
      tmplStm << "#pragma once\n\n";
      std::set<const CppObj*> dependencies, argDependencies;
      templCompound->collectTypeDependencies(helper, dependencies, TypeResolvingFlag::ResolveTillLast);
      templCompound->collectTemplateArgumentsTypeDependencies(
        helper, argDependencies, TypeResolvingFlag::ResolveTillLast);
      templCompound->extractTemplateArgumentHardDependencies(argDependencies, dependencies);
      auto fwdDecls = extractFwdDeclarations(dependencies);
      emitUserImplDependencyHeaders(tmplStm, helper, cibParams, dependencies);
      if (isStlClass())
        tmplStm << "#include <" << bfs::path(name()).filename().string() << ">\n";
      else if (isStlHelpereClass())
        tmplStm << "#include \"" << cibParams.stlHelperDirName << '/' << bfs::path(name()).filename().string()
                << "\"\n";
      for (auto cppObj : fwdDecls)
        gCppWriter.emit(cppObj, tmplStm);
      emitFwdDeclarations(tmplStm, argDependencies);
      templCompound->emitHelperDefn(tmplStm, helper, cibParams, cibIdMgr);
      templCompound->emitDecl(tmplStm, helper, cibParams, cibIdMgr);
      templCompound->emitDependentTemplateSpecilizationHeaders(tmplStm, false);
      if (!templCompound->isCompositeTemplate())
        stm << "#include \"" << specializationFilename << "\"\n";
    });
  });
}

void CibCompound::emitDependentTemplateSpecilizationHeaders(std::ostream& stm, bool onlyWhenUsedAsReference) const
{
  std::map<CibClassId, std::string> dependentSpecializations;
  for (const auto& usedAsArgIn : usedInTemplateInstaces_)
  {
    auto const usedAsReference = (usedAsArgIn.second == TemplateArgType::kAsReference);
    if (onlyWhenUsedAsReference && !usedAsReference)
      continue;
    if (usedAsArgIn.first->isStlHelpereClass())
      continue;
    auto headerName = usedAsArgIn.first->nsName() + ".h";
    assert(headerName.find('<') == std::string::npos);
    dependentSpecializations.emplace(std::make_pair(usedAsArgIn.first->classId(), std::move(headerName)));
  }

  for (const auto& dependent : dependentSpecializations)
  {
    const auto& specializationFilename = dependent.second;
    stm << "#include \"" << specializationFilename << "\"\n";
  }
}

void CibCompound::emitImplHeader(const CibHelper& helper, const CibParams& cibParams, const CibIdMgr& cibIdMgr) const
{
  if (!isCppFile(this) || isUnusedStl())
    return;

  auto          implPath = cibParams.outputPath / (getImplPath(cibParams) + "-postdef.h");
  std::ofstream stm(implPath.string(), std::ios_base::out);
  stm << "#pragma once\n\n";
  emitCommonExpHeaders(stm, cibParams);

  forEachNested(CppAccessType::kPublic, [&](const CibCompound* nested) {
    if (isClassLike(nested))
      nested->emitHelperDefn(stm, helper, cibParams, cibIdMgr);
  });

  emitTemplateInstanceSpecializations(stm, helper, cibParams, cibIdMgr);

  forEachNested(CppAccessType::kPublic,
                [&](const CibCompound* compound) { compound->emitDependentTemplateSpecilizationHeaders(stm, false); });
  emitDependentTemplateSpecilizationHeaders(stm, false);
}

void CibCompound::emitCommonExpHeaders(std::ostream& stm, const CibParams& cibParams)
{
  stm << "#include \"__zz_cib_internal/__zz_cib_" << cibParams.moduleName << "-type-converters.h\"\n";
  stm << "#include \"__zz_cib_internal/__zz_cib_" << cibParams.moduleName << "-def.h\"\n";
  stm << "#include \"__zz_cib_internal/__zz_cib_" << cibParams.moduleName << "-ids.h\"\n";
  stm << "#include \"__zz_cib_internal/__zz_cib_" << cibParams.moduleName << "-handle-proxy-map.h\"\n";
  stm << "#include \"__zz_cib_internal/__zz_cib_" << cibParams.moduleName << "-mtable-helper.h\"\n";
}

std::ostream& CibCompound::emitWrappingNsNamespacesForHelper(std::ostream&    stm,
                                                             const CibParams& cibParams,
                                                             CppIndent        indentation) const
{
  if (outer() == nullptr || isCppFile(outer()))
  {
    stm << "namespace __zz_cib_ {\n";
    if (isNamespace(this))
      stm << "using namespace " << longName() << ";\n";
  }
  else
  {
    outer()->emitWrappingNsNamespacesForHelper(stm, cibParams, indentation);
    if (isNamespace(this))
      stm << "using namespace " << longName() << ";\n";
  }

  return stm;
}

std::ostream& CibCompound::emitWrappingNsNamespacesForGlueCode(std::ostream&    stm,
                                                               const CibParams& cibParams,
                                                               CppIndent        indentation) const
{
  if (outer() == nullptr || isCppFile(outer()))
    stm << "namespace __zz_cib_ {\n";
  else
    outer()->emitWrappingNsNamespacesForGlueCode(stm, cibParams, indentation);

  stm << "namespace " << nsName() << " {\n";
  if (isNamespace(this))
    stm << "using namespace " << longName() << ";\n";

  return stm;
}

std::ostream& CibCompound::emitWrappingNamespacesForProxyDefn(std::ostream&    stm,
                                                              const CibParams& cibParams,
                                                              CppIndent        indentation) const
{
  if (outer())
    outer()->emitWrappingNamespacesForProxyDefn(stm, cibParams, indentation);
  if (isNamespace(this))
    stm << "namespace " << name() << " {\n";

  return stm;
}

std::ostream& CibCompound::emitWrappingNamespacesClosingBracesForProxyDefn(std::ostream&    stm,
                                                                           const CibParams& cibParams,
                                                                           CppIndent        indentation) const
{
  if (outer())
    outer()->emitWrappingNamespacesClosingBracesForProxyDefn(stm, cibParams, indentation);
  if (isNamespace(this))
    stm << '}';

  return stm;
}

void CibCompound::emitImplSource(std::ostream&    stm,
                                 const CibHelper& helper,
                                 const CibParams& cibParams,
                                 const CibIdMgr&  cibIdMgr,
                                 CppIndent        indentation) const
{
  for (const auto& mem : members())
  {
    if (isNamespaceLike(mem) && (accessType(mem) == CppAccessType::kPublic))
    {
      auto compound = static_cast<const CibCompound*>(mem.get());
      compound->emitImplSource(stm, helper, cibParams, cibIdMgr);
    }
  }

  if (isFacadeLike())
  {
    emitGenericDefn(stm, helper, cibParams, cibIdMgr, indentation);
    emitFromHandleDefn(stm, cibParams, cibIdMgr, indentation);
  }
  auto cibIdData = cibIdMgr.getCibIdData(longName() + "::__zz_cib_Generic");
  if (needsGenericProxyDefinition() && cibIdData)
  {
    emitWrappingNsNamespacesForHelper(stm, cibParams, indentation);
    stm << indentation << "template <>\n";
    stm << indentation++ << "struct __zz_cib_Delegator<" << longName() << "> {\n";
    stm << indentation << "using __zz_cib_Delegatee = " << longName() << ";\n";

    const CppHashIf* lastUsedConditional = nullptr;
    for (auto func : allVirtuals_)
    {
      if (func.isFinal() || isPrivate(func))
        continue;

      const auto* conditional = getMemConditional(func);
      if (lastUsedConditional && (lastUsedConditional != conditional)
          && (!conditional || (conditional->condType_ < CppHashIf::kElse)))
        gCppWriter.emitEndIf(stm);

      if (conditional && (conditional != lastUsedConditional))
        gCppWriter.emit(conditional, stm);
      lastUsedConditional = conditional;
      func.emitCAPIDefn(stm,
                        helper,
                        cibParams,
                        this,
                        cibIdData->getMethodCApiName(func.signature(helper)),
                        kPurposeProxyCApi,
                        indentation);
    }
    if (lastUsedConditional)
      gCppWriter.emitEndIf(stm);

    CibFunctionHelper func = dtor();
    func.emitCAPIDefn(stm,
                      helper,
                      cibParams,
                      this,
                      cibIdData->getMethodCApiName(func.signature(helper)),
                      kPurposeProxyCApi,
                      indentation);
    stm << --indentation << "};\n";
    stm << indentation << "};\n\n";
    emitMethodTableGetterDefn(stm, helper, cibParams, cibIdMgr, true, indentation);
    stm << '\n';

    stm << indentation << "namespace __zz_cib_ {\n";
    stm << indentation << "template<>\n";
    stm << indentation << "const __zz_cib_MethodTable* "
        << "__zz_cib_Helper<" << longName() << ">::__zz_cib_GetProxyMethodTable() {\n";
    ++indentation;
    stm << indentation << "return __zz_cib_" << longNsName() << "::__zz_cib_GetMethodTable();\n";
    --indentation;
    stm << indentation << "}\n";
    stm << indentation << "}\n\n";
  }
}

void CibCompound::emitImplSource(const CibHelper& helper, const CibParams& cibParams, const CibIdMgr& cibIdMgr) const
{
  if (!isCppFile(this) || isUnusedStl())
    return;
  bfs::path usrSrcFile = isStlClass() || isStlHelpereClass()
                           ? bfs::temp_directory_path() / bfs::unique_path()
                           : cibParams.outputPath / name().substr(cibParams.inputPath.string().length());
  bfs::path usrSrcPath = usrSrcFile.replace_extension(".cpp");
  {
    std::ofstream stm(usrSrcPath.string(), std::ios_base::out);
    emitFacadeAndInterfaceDependecyHeaders(stm, helper, cibParams, cibIdMgr, true, CppIndent());
    forEachNested(CppAccessType::kPublic, [&](const CibCompound* compound) {
      if (isClassLike(compound) && !compound->isTemplated() && (!compound->isInline() || compound->isShared()))
        compound->emitDefn(stm, false, helper, cibParams, cibIdMgr);
    });
    emitImplSource(stm, helper, cibParams, cibIdMgr);
  }
  if (bfs::file_size(usrSrcPath) == 0)
    bfs::remove(usrSrcPath);
}

void CibCompound::collectFacades(std::set<const CibCompound*>& facades) const
{
  for (const auto& mem : members())
  {
    if (!isPublic(mem))
      continue;
    CibCompoundEPtr compound = mem;
    if (compound)
    {
      compound->collectFacades(facades);
      if (compound->isFacadeLike())
        facades.insert(compound);
    }
  }
}

void CibCompound::collectTemplateArgumentsTypeDependencies(const CibHelper&         helper,
                                                           std::set<const CppObj*>& cppObjs,
                                                           TypeResolvingFlag        typeResolvingFlag) const
{
  // TODO addDependency is duplicated in another function.
  // Remove duplication, may be by having dependecy collector as another class.
  const auto addDependency = [&](const std::string& typeName) {
    auto* resolvedCppObj = resolveTypename(typeName, helper, typeResolvingFlag);
    if (!resolvedCppObj && helper.isSmartPtr(typeName))
      resolvedCppObj = resolveTypename(helper.convertSmartPtr(typeName), helper, typeResolvingFlag);
    if (resolvedCppObj)
      cppObjs.insert(resolvedCppObj);
  };
  for (auto& arg : templateArgValues_)
  {
    if (arg.second->objType_ == CppExpr::kObjectType)
      continue;
    const auto* cppVarType = static_cast<const CppVarType*>(arg.second.get());
    addDependency(baseType(cppVarType));
  }
}

void CibCompound::collectTemplateInstanceTypeDependencies(const CibHelper&         helper,
                                                          std::set<const CppObj*>& cppObjs,
                                                          TypeResolvingFlag        typeResolvingFlag) const
{
  if (!isTemplateInstance())
    return;

  collectTypeDependencies(helper, cppObjs, typeResolvingFlag);
  collectTemplateArgumentsTypeDependencies(helper, cppObjs, typeResolvingFlag);
}

void CibCompound::collectTemplateInstancesTypeDependencies(const CibHelper&         helper,
                                                           std::set<const CppObj*>& cppObjs,
                                                           TypeResolvingFlag        typeResolvingFlag) const
{
  if (!isTemplated())
    return;
  forEachTemplateInstance([&](CibCompound* tmplInstance) {
    tmplInstance->collectTemplateInstanceTypeDependencies(helper, cppObjs, typeResolvingFlag);
  });
}

void CibCompound::collectTypeDependenciesInner(const CibHelper&         helper,
                                               std::set<const CppObj*>& cppObjs,
                                               std::set<const CppObj*>& excludeList,
                                               TypeResolvingFlag        typeResolvingFlag) const
{
  // TODO: We still would like to collect dependencies that are not related to template arguments.
  if (isTemplated())
    return;

  auto addDependency = [&](const std::string& typeName) {
    auto* resolvedCppObj = resolveTypename(typeName, helper, typeResolvingFlag);
    if (!resolvedCppObj && helper.isSmartPtr(typeName))
      resolvedCppObj = resolveTypename(helper.convertSmartPtr(typeName), helper, typeResolvingFlag);
    if (resolvedCppObj && !excludeList.count(resolvedCppObj))
      cppObjs.insert(resolvedCppObj);
  };

  for (const auto& mem : members())
  {
    if (CibCompoundEPtr compound = mem)
    {
      excludeList.insert(compound);
      compound->collectTypeDependenciesInner(helper, cppObjs, excludeList, typeResolvingFlag);
      compound->collectTemplateInstancesTypeDependencies(helper, cppObjs, typeResolvingFlag);
    }
    else if (isFunctionLike(mem))
    {
      CibFunctionHelper func(mem);
      if (!func.isOutOfClassDefinition())
      {
        if (func.returnType() && !isVoid(func.returnType()))
          addDependency(baseType(func.returnType()));
        if (func.hasParams())
        {
          for (const auto& param : *func.getParams())
          {
            if (CppVarEPtr var = param)
              addDependency(baseType(var));
            else if (CppVarTypeEPtr varType = param)
              addDependency(baseType(varType));
          }
        }
      }
    }
    else if (CppVarEPtr var = mem)
    {
      if (isPublic(mem))
        addDependency(baseType(var));
    }
    else if (CppFwdClsDeclEPtr fwdDecl = mem)
    {
      addDependency(fwdDecl->name_);
    }
  }
}

void CibCompound::collectTypeDependencies(const CibHelper&         helper,
                                          std::set<const CppObj*>& cppObjs,
                                          TypeResolvingFlag        typeResolvingFlag) const
{
  std::set<const CppObj*> excludeList;
  excludeList.insert(this);
  collectTypeDependenciesInner(helper, cppObjs, excludeList, typeResolvingFlag);
}

const CibCompound* CibCompound::getFileAstObj(const CppObj* obj)
{
  const CppCompound* parent =
    obj->objType_ == CppObjType::kCompound ? static_cast<const CppCompound*>(obj) : obj->owner();
  while (parent->owner())
    parent = parent->owner();
  return static_cast<const CibCompound*>(parent);
}

std::set<const CibCompound*> CibCompound::collectAstDependencies(const std::set<const CppObj*>& cppObjs)
{
  std::set<const CibCompound*> asts;
  for (auto obj : cppObjs)
  {
    auto* ast = getFileAstObj(obj);
    asts.insert(ast);
  }
  return asts;
}

std::set<std::string> CibCompound::collectHeaderDependencies(const std::set<const CibCompound*>& compoundObjs,
                                                             const CibParams&                    cibParams,
                                                             bool                                forProxy)
{
  const auto&           dependentPath = cibParams.inputPath;
  std::set<std::string> headers;
  for (auto compound : compoundObjs)
  {
    assert(isCppFile(compound));
    if (compound->isStlClass())
      headers.emplace('<' + bfs::path(compound->name()).filename().string() + '>');
    else if (compound->isStlHelpereClass())
      headers.emplace('"' + cibParams.stlHelperDirName + '/' + bfs::path(compound->name()).filename().string() + '"');
    else
    {
#if EMIT_HELPER_HEADER
      auto helperHeaderPath = bfs::relative(compound->name(), dependentPath);
      if (!forProxy)
        helperHeaderPath = bfs::path("__zz_cib_helpers") / helperHeaderPath.parent_path()
                           / ("__zz_cib_helper-" + helperHeaderPath.filename().string());
      headers.emplace('"' + helperHeaderPath.string() + '"');
#else
      headers.emplace('"' + bfs::relative(compound->name(), dependentPath).string() + '"');
#endif
    }
  }
  return headers;
}

bfs::path CibCompound::getImplDir(const CibParams& cibParams) const
{
  if (isStlClass() || isStlHelpereClass())
    return cibParams.cibInternalDirName;
  bfs::path impl = name();
  return bfs::path(cibParams.cibInternalDirName) / bfs::relative(impl, cibParams.inputPath).remove_filename();
}

std::string CibCompound::getImplPath(const CibParams& cibParams) const
{
  bfs::path impl         = name();
  auto      implFilename = impl.stem().string();
  return (getImplDir(cibParams) / implFilename).string();
}

std::string CibCompound::implIncludeName(const CibParams& cibParams) const
{
  auto implIncludeName = getImplPath(cibParams);
  std::replace(implIncludeName.begin(), implIncludeName.end(), '\\', '/');

  return implIncludeName;
}

static void emitDocComment(std::ostream& stm, const CppDocComment* docComment, CppIndent indentation)
{
  const auto& comment  = docComment->doc_;
  auto        startPos = comment.find('/');
  for (auto prevPos = startPos; prevPos < comment.size();)
  {
    auto newLinePos = comment.find('\n', prevPos);
    if ((newLinePos == comment.npos) || ((newLinePos + startPos) > comment.size()))
      newLinePos = comment.size();

    stm << indentation;
    stm.write(comment.c_str() + prevPos, newLinePos - prevPos);
    stm << '\n';
    for (size_t i = 0; i <= startPos; ++i)
    {
      prevPos = newLinePos + i + 1;
      if (!(prevPos < comment.size()) || !isspace(comment[prevPos]))
        break;
    }
  }
}

void CibCompound::emitDecl(const CppObj*    obj,
                           std::ostream&    stm,
                           const CibHelper& helper,
                           const CibParams& cibParams,
                           const CibIdMgr&  cibIdMgr,
                           CppIndent        indentation /* = CppIndent */) const
{
  if (isFunctionLike(obj))
  {
    CibFunctionHelper func = obj;
    if (objNeedingBridge_.count(obj) || func.isDeleted())
      func.emitOrigDecl(stm, helper, cibParams, kPurposeProxyDecl, indentation);
    else if (func.isTemplated() && (strstr(func.funcName().c_str(), "::") == nullptr))
      gCppWriter.emit(obj, stm);
  }
  else if (isCompound(obj))
  {
    auto compound = static_cast<const CibCompound*>(obj);
    compound->emitDecl(stm, helper, cibParams, cibIdMgr, indentation);
  }
  else if (obj->objType_ == CppObjType::kDocComment)
  {
    emitDocComment(stm, static_cast<const CppDocComment*>(obj), indentation);
  }
  else
  {
    gCppWriter.emit(obj, stm, indentation);
  }
}

void CibCompound::emitDecl(std::ostream&    stm,
                           const CibHelper& helper,
                           const CibParams& cibParams,
                           const CibIdMgr&  cibIdMgr,
                           CppIndent        indentation /* = CppIndent */) const
{
  if (isInline() && (!isShared() || isTemplated()))
  {
    if (!isStlHelpereClass())
    {
      gCppWriter.emit(this, stm, indentation);
    }
    else
    {
      gCppWriter.emitTemplSpec(templateParamList(), stm, indentation);
      stm << indentation << compoundType() << ' ';
      stm << name() << "{};\n";
    }

    return;
  }

  auto* cibIdData = cibIdMgr.getCibIdData(longName());
  if (isNamespaceLike(this))
  {
    if (isTemplateInstance())
    {
      stm << wrappingNamespaceDeclarations() << '\n';
      stm << indentation << "template<>\n";
    }
    stm << indentation << compoundType() << ' ';
    stm << name();
    if (hasAttr(kFinal))
      stm << " final";
    if (isClassLike(this))
    {
      auto emitInheritance = [this, &stm](CppAccessType accessType, char& sep) {
        auto itr = parents_.find(accessType);
        if (itr != parents_.end())
          emitInheritanceList(stm, itr->second, accessType, sep);
      };
      char sep = ':';
      emitInheritance(CppAccessType::kPublic, sep);
    }
    stm << '\n' << indentation++ << "{\n";
  }

  if (isClassLike(this) && needsBridging() && !moveCtor() && !needsNoProxy() && !isTemplateInstance())
    emitMoveConstructorDecl(stm, indentation);

  CppAccessType lastProt = CppAccessType::kUnknown;
  if (!isClassLike(this) || needsBridging() || needsNoProxy())
  {
    const CppHashIf* lastUsedConditional = nullptr;
    for (auto& mem : members())
    {
      const auto* conditional = getMemConditional(mem.get());

      if (!needsNoProxy() && (isVar(mem) || isVarList(mem)))
        continue;
      if (!needsNoProxy() && isPrivate(mem))
      {
        if (!isFunctionLike(mem))
          continue;
        CibFunctionHelper func(mem);
        if (!func.isOveriddable())
          continue;
      }
      if (lastUsedConditional && (lastUsedConditional != conditional)
          && (!conditional || (conditional->condType_ < CppHashIf::kElse)))
        gCppWriter.emitEndIf(stm);
      if (conditional && (conditional != lastUsedConditional))
        gCppWriter.emit(conditional, stm);
      lastUsedConditional = conditional;

      if (isClassLike(this) && lastProt != mem->accessType_)
      {
        if (mem->accessType_ != CppAccessType::kUnknown)
          stm << --indentation << mem->accessType_ << ":\n";
        ++indentation;
        lastProt = mem->accessType_;
      }

      CibFunctionHelper func = mem.get();
      if (func & isTemplateInstance())
      {
        func.emitDefn(stm, true, helper, cibParams, this, cibIdData, indentation);
      }
      else
      {
        emitDecl(mem.get(), stm, helper, cibParams, cibIdMgr, indentation);
        if (func && objNeedingBridge_.count(mem.get()))
          needsClientDefinition_.emplace_back(mem);
      }
    }
    if (lastUsedConditional)
      gCppWriter.emitEndIf(stm);
  }

  if (isClassLike(this))
  {
    if (needsBridging())
    {
      // Everything below this is for glue code
      stm << '\n';
      stm << --indentation << "private:\n";
      if (!needsNoProxy())
      {
        if (isTemplateInstance())
          stm << ++indentation << "__ZZ_CIB_TEMPLATE_CLASS_INTERNALS(";
        else if (isFacadeLike())
          stm << ++indentation << "__ZZ_CIB_FACADE_CLASS_INTERNALS(";
        else
          stm << ++indentation << "__ZZ_CIB_PROXY_CLASS_INTERNALS(";
      }
      else
      {
        stm << ++indentation << "__ZZ_CIB_LAYOUT_SHARING_CLASS_INTERNALS(";
      }

      if (isTemplateInstance())
        stm << "__ZZ_CIB_CLASS_NAME(" << name() << "), __ZZ_CIB_CLASS_NAME(" << fullName(this) << ")";
      else
        stm << name() << ", " << fullName(this);
      stm << ");\n";
    }
    stm << --indentation << "};\n";
    if (isTemplateInstance())
    {
      stm << closingBracesForWrappingNamespaces() << '\n';
    }
  }
  else if (isNamespaceLike(this))
  {
    stm << --indentation << "}\n";
  }
}

void CibCompound::emitFromHandleDefn(std::ostream&    stm,
                                     const CibParams& cibParams,
                                     const CibIdMgr&  cibIdMgr,
                                     CppIndent        indentation) const
{
  if (!isShared())
    return;
  stm << indentation << "namespace __zz_cib_ {\n";
  stm << indentation << "template<>\n";
  stm << indentation << longName() << "* __zz_cib_Helper<" << longName()
      << ">::__zz_cib_CreateProxy(__zz_cib_AbiType h) {\n";
  ++indentation;
  if (!cibParams.noRtti)
  {
    stm << indentation << "switch(__zz_cib_GetClassId(&h)) {\n";
    auto emitCaseStmt = [&](const CibCompound* compound) {
      auto cibIdData = cibIdMgr.getCibIdData(compound->longName());
      if (cibIdData)
      {
        const auto castFromMethodName = compound->castFromBaseName(this, cibParams);
        const auto capiName           = cibIdData->getMethodCApiName(castFromMethodName);
        stm << indentation << "case __zz_cib_::__zz_cib_ids::" << compound->fullNsName() << "::__zz_cib_classId:\n";
        stm << ++indentation << "return __zz_cib_Helper<" << fullName(compound) << ">::__zz_cib_FromHandle(\n";
        stm << ++indentation << "__zz_cib_Helper<" << fullName(compound) << ">::" << capiName << "(h)\n";
        stm << --indentation << ");\n";
        --indentation;
      }
    };
    forEachDescendent(CppAccessType::kPublic, [&](const CibCompound* derived) { emitCaseStmt(derived); });
    if (!isAbstract())
    {
      auto cibIdData = cibIdMgr.getCibIdData(longName());
      if (cibIdData)
      {
        stm << indentation << "case __zz_cib_::__zz_cib_ids::" << fullNsName() << "::__zz_cib_classId: {\n";
        stm << ++indentation << "auto* const __zz_cib_obj = new " << longName() << "(h);\n";
        if (isSharedProxy() && libraryManagesProxy())
          stm << indentation << "__zz_cib_RegisterProxy(h, __zz_cib_obj);\n";
        stm << indentation << "return __zz_cib_obj;\n";
        stm << --indentation << "}\n";
      }
    }
    stm << indentation << "default: break;\n";
    stm << indentation << "}\n";
  }

  stm << indentation << "auto* const __zz_cib_obj = ::__zz_cib_::__zz_cib_Generic<" << longName()
      << ">::__zz_cib_FromHandle(h);\n";
  if (isSharedProxy() && libraryManagesProxy())
    stm << indentation << "__zz_cib_RegisterProxy(h, __zz_cib_obj);\n";
  stm << indentation << "return __zz_cib_obj;\n";
  stm << --indentation << "}\n}\n";
}

void CibCompound::emitFromHandleDecl(std::ostream& stm, const CibParams& cibParams, CppIndent indentation) const
{
  if (!isFacadeLike() && isAbstract())
    return;
  if (!isSharedProxy())
    return;
  stm << indentation << "static T* __zz_cib_CreateProxy(__zz_cib_AbiType h)";
  if (isFacadeLike())
  {
    // For Facade classes definition of fromHandle() will be more elaborative.
    // So, it will be defined in cpp file.
    stm << ";\n";
  }
  else if (!isAbstract())
  {
    stm << " {\n";
    ++indentation;
    stm << indentation << "auto* const __zz_cib_obj = new T(h);\n";
    if (isSharedProxy() && libraryManagesProxy())
      stm << indentation << "__zz_cib_RegisterProxy(h, __zz_cib_obj);\n";
    stm << indentation << "return __zz_cib_obj;\n";
    stm << --indentation << "}\n";
  }
}

bool CibCompound::collectAllVirtuals(const CibHelper& helper, CibFunctionHelperArray& allVirtuals) const
{
  std::unordered_map<std::string, CibFunctionHelper> virtSigToFunc;
  std::unordered_set<std::string>                    unresolvedPureVirtSigs;

  auto processClass = [&](const CibCompound* ancestor) {
    const CppHashIf* lastUsedConditional = nullptr;
    for (auto& mem : ancestor->members())
    {
      if (mem->objType_ == CppObjType::kHashIf)
      {
        lastUsedConditional = static_cast<const CppHashIf*>(mem.get());
        if (lastUsedConditional->condType_ == CppHashIf::kEndIf)
          lastUsedConditional = nullptr;
        continue;
      }
      if (!isFunctionLike(mem))
        continue;
      CibFunctionHelper func(mem);
      if ((isTemplated() || isTemplateInstance()) && !func.isDestructor())
        continue;
      auto sig =
        func.isDestructor() ? std::string("__zz_cib_dtor") : func.signature(helper, kPurposeSigForVirtualFuncMatch);
      if (func.isPureVirtual())
      {
        if (!func.isDestructor() || (ancestor == this))
        {
          // A class is abstract even when it's dtor is pure virtual.
          // But the pure virtual dtor of parent class doesn't affect abstractness of a class.
          unresolvedPureVirtSigs.insert(sig);
          virtSigToFunc.insert(std::make_pair(std::move(sig), func));
        }
      }
      else if (!func.isDestructor())
      {
        if (unresolvedPureVirtSigs.erase(sig) || func.isVirtual())
        {
          const auto itr = virtSigToFunc.insert(std::make_pair(std::move(sig), func));
          if (itr.second == false)
            itr.first->second = func;
        }
      }

      if (lastUsedConditional)
        this->memberConditionalMap_[mem.get()] = lastUsedConditional;
    }

    return false;
  };
  forEachAncestor(CppAccessType::kPublic, processClass);
  processClass(this);

  for (const auto& virtItr : virtSigToFunc)
    allVirtuals.push_back(virtItr.second);
  return !unresolvedPureVirtSigs.empty();
}

void CibCompound::identifyAbstract(const CibHelper& helper)
{
  if (isClassLike(this) && collectAllVirtuals(helper, allVirtuals_))
    setAbstract();
}

static bool shallAddCopyCtor(CibCompound* compound)
{
  if (compound->isTemplateInstance() && !shallAddCopyCtor(compound->templateClass()))
    return false;
  return compound->isCopyCtorCallable() && !compound->hasCopyCtor() && !compound->hasMoveCtor()
         && !compound->isAbstract();
}

static bool shallAddDefaultCtor(CibCompound* compound)
{
  if (compound->isTemplateInstance())
    return shallAddDefaultCtor(compound->templateClass());

  return !compound->cantHaveDefaultCtor() && !compound->hasCtor()
         && (!compound->isAbstract() || compound->needsGenericProxyDefinition());
}

void CibCompound::identifyMethodsToBridge(const CibHelper& helper)
{
  if (isTemplated())
  {
    forEachTemplateInstance([&](CibCompound* templateInstace) {
      if (templateInstace->isShared())
        templateInstace->identifyMethodsToBridge(helper);
    });
    return;
  }
  // A class that is inline and not shared don't need any bridging.
  // An inline class that is shared should be treated same as non-inline class.
  if (isInline() && !isShared())
    return;
  if (needsNoProxy())
    return;
  if (name().empty())
    return;
  const CppHashIf* lastUsedConditional = nullptr;
  for (auto& mem : members())
  {
    if (mem->objType_ == CppObjType::kHashIf)
    {
      lastUsedConditional = static_cast<const CppHashIf*>(mem.get());
      if (lastUsedConditional->condType_ == CppHashIf::kEndIf)
        lastUsedConditional = nullptr;
      continue;
    }
    if (isPrivate(mem))
      continue;
    if (isFunctionLike(mem))
    {
      CibFunctionHelper func(mem);
      if (func.isCopyConstructor() && !isCopyCtorCallable())
        continue;
      if (func.funcName().find(':') != std::string::npos)
        continue;
      if (func.isTemplated())
        continue;
      if (func.isDeleted())
        continue;
      if (func.isFriend() && !(func.hasDefinition() || isTemplateInstance()))
        continue;
      if (func.isConstructorLike() && isAbstract() && !needsGenericProxyDefinition())
        continue;
      if (func.isPureVirtual() && !isFacadeLike() && !isInterfaceLike() && !isAncestorFacadeLike()
          && !func.isDestructor())
        continue;
      if (func.hasVariadicParam())
        continue;
      if (isProtected(mem))
      {
        if (!isOverridable())
          continue;
        setHasProtectedMethods();
        if (hasNonDefaultConstructableVirtualAncestor() && !defaultConstructable())
          continue;
      }

      needsBridging_.push_back(func);
      if (lastUsedConditional)
        memberConditionalMap_[func] = lastUsedConditional;
      objNeedingBridge_.insert(mem.get());
    }
    else if (isNamespaceLike(mem))
    {
      CibCompoundEPtr compound = mem;
      compound->identifyMethodsToBridge(helper);
    }
  };

  if (!isClassLike(this) || (isEmpty() && !isShared()))
    return;
  if (isFacadeLike())
  {
    std::unordered_set<std::string> funcSigs;
    for (auto obj : objNeedingBridge_)
    {
      CibFunctionHelper func(obj);
      if (func.isFunction())
        funcSigs.insert(func.signature(helper, kPurposeSigForVirtualFuncMatch));
    }
    for (auto func : allVirtuals_)
    {
      if (isPrivate(func))
        continue;
      if (!isPublic(func) && !isOverridable())
        continue;
      if ((objNeedingBridge_.count(func) == 0))
      {
        if (funcSigs.count(func.signature(helper, kPurposeSigForVirtualFuncMatch)) == 0)
        {
          objNeedingBridge_.insert(func);
          needsBridging_.push_back(func);
        }
      }
      if (isProtected(func))
        setHasProtectedMethods();
    }
  }
  if (!hasDtor() && (!isAbstract() || isFacadeLike() || needsGenericProxyDefinition()))
  {
    auto defaultDtor = new CppDestructor(CppAccessType::kPublic, "~" + ctorName(), 0);
    addMemberAtFront(defaultDtor);
    CibFunctionHelper func(defaultDtor);
    needsBridging_.insert(needsBridging_.begin(), func);
    objNeedingBridge_.insert(defaultDtor);
  }
  if (shallAddCopyCtor(this))
  {
    auto ctorProtection = CppAccessType::kPublic;
    auto paramType      = new CppVarType(name(), CppTypeModifier{CppRefType::kByRef});
    paramType->typeModifier().constBits_ |= 1;
    auto param     = new CppVar(paramType, CppVarDecl{std::string()});
    auto paramList = new CppParamVector;
    paramList->emplace_back(param);
    auto copyCtor = new CppConstructor(ctorProtection, ctorName(), paramList, nullptr, 0);
    addMemberAtFront(copyCtor);
    CibFunctionHelper func(copyCtor);
    needsBridging_.insert(needsBridging_.begin(), func);
    objNeedingBridge_.insert(copyCtor);
  }
  if (shallAddDefaultCtor(this))
  {
    auto ctorProtection = isAbstract() ? CppAccessType::kProtected : CppAccessType::kPublic;
    auto defaultCtor    = new CppConstructor(ctorProtection, ctorName(), nullptr, nullptr, 0);
    if (isAbstract())
      addMember(defaultCtor);
    else
      addMemberAtFront(defaultCtor);
    CibFunctionHelper func(defaultCtor);
    needsBridging_.insert(needsBridging_.begin(), func);
    objNeedingBridge_.insert(defaultCtor);
  }
}

void CibCompound::emitFunctionInvokeHelper(std::ostream&            stm,
                                           const CibFunctionHelper& func,
                                           const CibHelper&         helper,
                                           const CibParams&         cibParams,
                                           const CibIdData*         cibIdData,
                                           CppIndent                indentation /* = CppIndent */) const
{
  if (func.isPureVirtual() && !func.isDestructor())
    return;

  if (!func.isDestructor() && (!func.isConstructorLike() || func.hasParams()))
  {
    stm << indentation << "template <";
    if (!func.isConstructorLike())
    {
      stm << "typename _RT";
      if (func.hasParams())
        stm << ", ";
    }
    if (func.hasParams())
      stm << "typename ..._Args";
    stm << ">\n";
  }

  stm << indentation << "static ";
  if (func.isConstructorLike())
    stm << "__zz_cib_AbiType ";
  else
    stm << "auto ";

  stm << cibIdData->getMethodCApiName(func.signature(helper)) << "(";
  if (isClassLike(this) && !func.isStatic() && !func.isFriend() && (!func.isConstructor() || needsNoProxy()))
  {
    if (func.isConst())
      stm << "const ";
    stm << "__zz_cib_AbiType __zz_cib_obj";
    if (func.hasParams())
      stm << ", ";
  }
  else if (needsGenericProxyDefinition() && func.isConstructor())
  {
    stm << longName() << "* __zz_cib_h_";
    if (func.hasParams())
      stm << ", ";
  }
  if (func.hasParams())
    stm << "_Args... __zz_cib_args";
  stm << ") {\n";
  ++indentation;
  if (func.isDestructor())
  {
    stm << indentation << "if (__zz_cib_obj) {\n";
    ++indentation;
  }
  func.emitProcType(stm, helper, cibParams, kPurposeInvokeHelper, indentation);
  stm << indentation++ << "return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::"
      << cibIdData->getMethodCApiName(func.signature(helper)) << ">(";
  if (isClassLike(this) && !func.isStatic() && !func.isFriend() && (!func.isConstructor() || needsNoProxy()))
  {
    stm << '\n' << indentation << "__zz_cib_obj";
    if (func.hasParams())
      stm << ",";
  }
  else if (needsGenericProxyDefinition() && func.isConstructor())
  {
    stm << '\n' << indentation << "__zz_cib_h_, __zz_cib_GetProxyMethodTable()";
    if (func.hasParams())
      stm << ",";
  }
  stm << '\n' << indentation;
  if (func.hasParams())
    stm << "__zz_cib_args...";
  stm << ");\n";
  --indentation;
  if (func.isDestructor())
  {
    --indentation;
    stm << indentation << "}\n";
  }
  stm << --indentation << "}\n";
}

void CibCompound::emitRemoteProxyMethods(std::ostream& stm, CppIndent indentation) const
{
  stm << indentation << "using __zz_cib_ProxyDeleter = void (__zz_cib_decl*) (_ProxyClass* proxy);\n";

  stm << indentation << "static void __zz_cib_RegisterProxy(__zz_cib_AbiType obj, _ProxyClass* proxy) {\n";
  stm << ++indentation
      << "using __zz_cib_RegisterProxyProc = void (__zz_cib_decl *)(__zz_cib_AbiType, "
         "_ProxyClass*, __zz_cib_ProxyDeleter);\n";
  stm << indentation
      << "return __zz_cib_GetMethodTable().Invoke<__zz_cib_RegisterProxyProc, "
         "__zz_cib_Methodid::__zz_cib_RegisterProxy>(obj,\n";
  stm << ++indentation << "proxy, [](_ProxyClass* obj) {\n";
  stm << ++indentation << "if (obj && obj->__zz_cib_h_) {\n";
  stm << ++indentation << "__zz_cib_ReleaseHandle(obj);\n";
  stm << indentation << "delete obj;\n";
  stm << --indentation << "}\n";
  stm << --indentation << "}\n";
  stm << --indentation << ");\n";
  stm << indentation << "}\n";
}

void CibCompound::emitHelperDefnStart(std::ostream&    stm,
                                      const CibParams& cibParams,
                                      CppIndent        indentation /* = CppIndent */) const
{
  if (!isClassLike(this))
  {
    stm << indentation << "namespace __zz_cib_ { " << wrappingNamespaceDeclarations();
    if (isNamespaceLike(this))
      stm << indentation << "namespace " << name();
    else
      stm << indentation << "namespace __zz_cib_" << cibParams.moduleName << "Global";
    stm << " {\n";
    stm << indentation << "struct __zz_cib_Helper : public __zz_cib_MethodTableHelper";
    stm << " {\n";
  }
  else
  {
    emitWrappingNsNamespacesForHelper(stm, cibParams, indentation);
    stm << indentation << "template <typename T>\n";
    stm << indentation << "struct __zz_cib_Helper<" << longName() << ", T> : public __zz_cib_MethodTableHelper";
    stm << " {\n";
    stm << ++indentation << "static_assert(std::is_same_v<T, " << longName() << ">);\n";
    stm << indentation << "using __zz_cib_AbiType = typename T::__zz_cib_AbiType;\n";

    std::string proxyMgr;
    if (!needsNoProxy())
    {
      stm << indentation << "using _ProxyClass = T;\n";
      if (isSharedProxy())
        proxyMgr = cibParams.moduleName + "::__zz_cib_HandleProxyMap<_ProxyClass>";

      if (needsGenericProxyDefinition())
        stm << indentation << "static const __zz_cib_MethodTable* __zz_cib_GetProxyMethodTable();\n";
    }

    stm << indentation << "friend " << compoundType() << ' ' << longName() << ";\n";
    if (!proxyMgr.empty())
    {
      stm << indentation << "static bool instanceDeleted_;\n";
      stm << indentation << proxyMgr << " proxyMgr;\n";
    }
  }
  stm << indentation << "using __zz_cib_Methodid = __zz_cib_::__zz_cib_ids::" << fullNsName()
      << "::__zz_cib_Methodid;\n";
  stm << '\n'; // Start in new line.

  stm << indentation << "__zz_cib_Helper()\n";
  stm << ++indentation << ": __zz_cib_MethodTableHelper(\n";
  stm << ++indentation << "__zz_cib_" << cibParams.moduleName << "GetMethodTable("
      << "__zz_cib_ids::" << fullNsName() << "::__zz_cib_classId))\n";
  --indentation;
  stm << --indentation << "{}\n";
  if (isSharedProxy() && !needsNoProxy())
  {
    stm << indentation << "~__zz_cib_Helper() {\n";
    stm << ++indentation << "instanceDeleted_ = true;\n";
    stm << --indentation << "}\n";
  }
  stm << indentation << "static __zz_cib_Helper& __zz_cib_Instance() {\n";
  stm << ++indentation << "static __zz_cib_Helper helper;\n";
  stm << indentation << "return helper;\n";
  stm << --indentation << "}\n";
  stm << indentation << "static __zz_cib_MethodTableHelper& __zz_cib_GetMethodTable() {\n";
  stm << ++indentation << "return __zz_cib_Instance();\n";
  stm << --indentation << "}\n";
  stm << '\n'; // Start in new line.
}

void CibCompound::emitCastingHelpers(std::ostream&    stm,
                                     const CibParams& cibParams,
                                     const CibIdData* cibIdData,
                                     CppIndent        indentation /* = CppIndent */) const
{
  const auto emitCastToParent = [&](const CibCompound* pubParent) {
    auto castProcName = castToBaseName(pubParent, cibParams);
    auto capiName     = cibIdData->getMethodCApiName(castProcName);
    stm << indentation << "static " << fullName(pubParent) << "::__zz_cib_AbiType " << capiName
        << "(__zz_cib_AbiType __zz_cib_obj) {\n";
    stm << ++indentation << "using __zz_cib_ProcType = " << fullName(pubParent)
        << "::__zz_cib_AbiType (__zz_cib_decl *) (__zz_cib_AbiType);\n";
    stm << indentation << "return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::" << capiName
        << ">(__zz_cib_obj);\n";
    stm << --indentation << "}\n";
  };

  const auto emitCastFromParent = [&](const CibCompound* pubParent) {
    auto castProcName = castFromBaseName(pubParent, cibParams);
    auto capiName     = cibIdData->getMethodCApiName(castProcName);
    stm << indentation << "static __zz_cib_AbiType " << capiName << "(" << fullName(pubParent)
        << "::__zz_cib_AbiType  __zz_cib_obj) {\n";
    stm << ++indentation << "using __zz_cib_ProcType = __zz_cib_AbiType (__zz_cib_decl *) (" << fullName(pubParent)
        << "::__zz_cib_AbiType);\n";
    stm << indentation << "return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::" << capiName
        << ">(__zz_cib_obj);\n";
    stm << --indentation << "}\n";
  };

  std::set<const CibCompound*> processedAncestor;
  forEachAncestor(CppAccessType::kPublic, [&](const CibCompound* pubParent) {
    if ((pubParent->isShared() || !pubParent->isEmpty()) && !processedAncestor.count(pubParent))
    {
      emitCastToParent(pubParent);
      if (!cibParams.noRtti)
        emitCastFromParent(pubParent);
      processedAncestor.insert(pubParent);
    }
    return false;
  });
}

void CibCompound::emitFacadeHelpers(std::ostream&    stm,
                                    const CibIdData* cibIdData,
                                    CppIndent        indentation /* = CppIndent */) const
{
  stm << indentation << "static std::uint32_t __zz_cib_GetClassId(__zz_cib_AbiType* __zz_cib_obj) {\n";
  stm << ++indentation
      << "using __zz_cib_GetClassIdProc = std::uint32_t (__zz_cib_decl *) "
         "(__zz_cib_AbiType*);\n";
  stm << indentation << "return __zz_cib_GetMethodTable().Invoke<__zz_cib_GetClassIdProc, __zz_cib_Methodid::"
      << cibIdData->getMethodCApiName("__zz_cib_GetClassId") << ">(__zz_cib_obj);\n";
  stm << --indentation << "}\n";
}

void CibCompound::emitHandleHelpers(std::ostream&    stm,
                                    const CibParams& cibParams,
                                    const CibIdData* cibIdData,
                                    CppIndent        indentation) const
{
  if (needsNoProxy())
    return;
  emitFromHandleDecl(stm, cibParams, indentation);
  if (!isAbstract())
  {
    stm << indentation << "static T __zz_cib_ObjectFromHandle(__zz_cib_AbiType h) {\n";
    stm << ++indentation << "return T(h);\n";
    stm << --indentation << "}\n";
  }
  stm << indentation << "static __zz_cib_AbiType& __zz_cib_GetHandle(T* __zz_cib_obj) {\n";
  stm << ++indentation << "return __zz_cib_obj->__zz_cib_h_;\n";
  stm << --indentation << "}\n";
  stm << indentation << "static __zz_cib_AbiType const& __zz_cib_GetHandle(const T* __zz_cib_obj) {\n";
  stm << ++indentation << "return __zz_cib_obj->__zz_cib_h_;\n";
  stm << --indentation << "}\n";
  stm << indentation << "static __zz_cib_AbiType __zz_cib_ReleaseHandle(T* __zz_cib_obj) {\n";
  stm << ++indentation << "if (__zz_cib_obj->__zz_cib_h_ == nullptr) return nullptr;\n";
  if (isSharedProxy())
    stm << indentation << "__zz_cib_RemoveProxy(__zz_cib_obj->__zz_cib_h_);\n";
  stm << indentation << "auto h = __zz_cib_obj->__zz_cib_h_;\n";
  stm << indentation << "__zz_cib_obj->__zz_cib_h_ = nullptr;\n";
  forEachParent(CppAccessType::kPublic, [&stm, &indentation](const CibCompound* baseCompound) {
    if (baseCompound->needsBridging())
    {
      stm << indentation << "__zz_cib_::__zz_cib_Helper<" << baseCompound->longName()
          << ">::__zz_cib_ReleaseHandle(__zz_cib_obj);\n";
    }
    return true;
  });
  stm << indentation << "return h;\n";
  stm << --indentation << "}\n";
  if (needsGenericProxyDefinition())
  {
    stm << indentation << "static void __zz_cib_ReleaseProxy(" << longName() << "* __zz_cib_obj) {\n";
    ++indentation;
    stm << indentation << "if (__zz_cib_obj->__zz_cib_h_) {\n";
    ++indentation;
    stm << indentation << "using __zz_cib_ReleaseProxyProc = void (__zz_cib_decl *) (__zz_cib_AbiType);\n";
    stm << indentation << "return __zz_cib_GetMethodTable().Invoke<__zz_cib_ReleaseProxyProc, __zz_cib_Methodid::"
        << cibIdData->getMethodCApiName("__zz_cib_ReleaseProxy") << ">(\n";
    stm << indentation << "__zz_cib_obj->__zz_cib_h_);\n";
    stm << --indentation << "}\n";
    stm << --indentation << "}\n";
  }

  if (isSharedProxy())
  {
    stm << indentation << "static _ProxyClass* __zz_cib_FromHandle(__zz_cib_AbiType h) {\n";
    stm << ++indentation << "if (h == nullptr)\n";
    stm << ++indentation << "return nullptr;\n";
    stm << --indentation << "auto&  dis   = __zz_cib_Instance();\n";
    stm << indentation << "auto* proxy = dis.proxyMgr.FindProxy(h);\n";
    if (!isAbstract() || isFacadeLike())
    {
      stm << indentation << "if (proxy == nullptr)\n";
      stm << ++indentation << "proxy = __zz_cib_CreateProxy(h);\n";
      --indentation;
    }
    stm << indentation << "return proxy;\n";
    stm << --indentation << "}\n";
    stm << indentation << "static void __zz_cib_AddProxy(_ProxyClass* __zz_cib_obj, __zz_cib_AbiType h) {\n";
    stm << ++indentation << "auto& dis = __zz_cib_Instance();\n";
    stm << indentation << "dis.proxyMgr.AddProxy(__zz_cib_obj, h);\n";
    stm << --indentation << "}\n";
    stm << indentation << "static void __zz_cib_RemoveProxy(__zz_cib_AbiType h) {\n";
    stm << ++indentation << "if (instanceDeleted_) return;\n";
    stm << indentation << "auto& dis = __zz_cib_Instance();\n";
    stm << indentation << "  dis.proxyMgr.RemoveProxy(h);\n";
    stm << --indentation << "}\n";
  }
  else if (isFacadeLike())
  {
    stm << indentation << "static _ProxyClass* __zz_cib_FromHandle(__zz_cib_AbiType h) {\n";
    stm << ++indentation << "return __zz_cib_CreateProxy(h);\n";
    stm << --indentation << "}\n";
  }
}

void CibCompound::emitHelperDefn(std::ostream&    stm,
                                 const CibHelper& helper,
                                 const CibParams& cibParams,
                                 const CibIdMgr&  cibIdMgr,
                                 CppIndent        indentation /* = CppIndent */) const
{
  if (!needsBridging())
    return;

  stm << '\n';
  emitHelperDefnStart(stm, cibParams, indentation++);
  auto             cibIdData           = cibIdMgr.getCibIdData(longName());
  const CppHashIf* lastUsedConditional = nullptr;
  for (auto func : needsBridging_)
  {
    const auto* conditional = getMemConditional(func);
    if (lastUsedConditional && (lastUsedConditional != conditional)
        && (!conditional || (conditional->condType_ < CppHashIf::kElse)))
      gCppWriter.emitEndIf(stm);

    if (conditional && (conditional != lastUsedConditional))
      gCppWriter.emit(conditional, stm);
    lastUsedConditional = conditional;
    emitFunctionInvokeHelper(stm, func, helper, cibParams, cibIdData, indentation);
  }
  if (lastUsedConditional)
    gCppWriter.emitEndIf(stm);

  emitCastingHelpers(stm, cibParams, cibIdData, indentation);

  if (isFacadeLike() && !cibParams.noRtti)
    emitFacadeHelpers(stm, cibIdData, indentation);

  if (isClassLike(this) && (isShared() || !isEmpty()))
    emitHandleHelpers(stm, cibParams, cibIdData, indentation);
  if (isSharedProxy() && libraryManagesProxy())
    emitRemoteProxyMethods(stm, indentation);
  emitHelperDefnEnd(stm, indentation);
}

void CibCompound::emitHelperDefnEnd(std::ostream& stm, CppIndent indentation) const
{
  stm << --indentation << "};\n";

  if (isSharedProxy() && !needsNoProxy())
  {
    stm << indentation << "template <typename T>\n";
    stm << indentation << "bool __zz_cib_Helper<" << longName() << ", T>::instanceDeleted_ = false;\n";
  }
  if (!isClassLike(this))
    stm << indentation << closingBracesForWrappingNamespaces() << '}';
  stm << indentation << "}\n";
}

void CibCompound::emitHandleConstructorDefn(std::ostream&    stm,
                                            bool             asInline,
                                            const CibHelper& helper,
                                            const CibParams& cibParams,
                                            const CibIdMgr&  cibIdMgr,
                                            CppIndent        indentation /* = CppIndent */) const
{
  auto cibIdData = cibIdMgr.getCibIdData(longName());

  stm << '\n'; // Start in new line.
  stm << indentation;
  if (asInline)
    stm << "inline ";
  stm << fullName(this) << "::" << ctorName() << "(__zz_cib_AbiType h)\n";
  ++indentation;
  char sep = ':';
  forEachParent(CppAccessType::kPublic, [&](const CibCompound* pubParent) {
    if (pubParent->isShared() || !pubParent->isEmpty())
    {
      auto capiName = cibIdData->getMethodCApiName(castToBaseName(pubParent, cibParams));
      stm << indentation << sep << " ::" << fullName(pubParent) << "(__zz_cib_MyHelper::" << capiName << "(h))\n";
      sep = ',';
    }
    return true;
  });
  stm << indentation << sep << " __zz_cib_h_(h)\n";
  stm << --indentation << '{';
  if (isSharedProxy())
  {
    stm << '\n' << ++indentation << "__zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);\n";
    stm << --indentation;
  }
  stm << "}\n";
}

void CibCompound::emitMoveConstructorDecl(std::ostream& stm, CppIndent indentation /* = CppIndent */) const
{
  stm << --indentation << "public:\n";
  stm << ++indentation << ctorName() << '(' << name() << "&& rhs);\n";
}

void CibCompound::emitMoveConstructorDefn(std::ostream&    stm,
                                          bool             asInline,
                                          const CibHelper& helper,
                                          const CibParams& cibParams,
                                          const CibIdMgr&  cibIdMgr,
                                          CppIndent        indentation /* = CppIndent */) const
{
  auto cibIdData = cibIdMgr.getCibIdData(longName());

  stm << '\n'; // Start in new line.
  stm << indentation;
  if (!asInline)
    stm << fullName(this) << "::";
  stm << ctorName() << '(' << name() << "&& rhs)\n";
  ++indentation;
  char sep = ':';
  forEachParent(CppAccessType::kPublic, [&](const CibCompound* pubParent) {
    if (pubParent->isShared() || !pubParent->isEmpty())
    {
      auto capiName = cibIdData->getMethodCApiName(castToBaseName(pubParent, cibParams));
      stm << indentation << sep << " ::" << fullName(pubParent) << "(std::move(rhs))\n";
      sep = ',';
    }
    return true;
  });
  stm << indentation << sep << " __zz_cib_h_(rhs.__zz_cib_h_)";
  stm << --indentation << "\n{\n";
  stm << ++indentation << "rhs.__zz_cib_h_ = nullptr;\n";
  if (isSharedProxy())
  {
    stm << indentation << "__zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);\n";
  }
  stm << --indentation << "}\n";
}

void CibCompound::emitDefn(std::ostream&    stm,
                           bool             asInline,
                           const CibHelper& helper,
                           const CibParams& cibParams,
                           const CibIdMgr&  cibIdMgr,
                           CppIndent        indentation /* = CppIndent */) const
{
  emitWrappingNamespacesForProxyDefn(stm, cibParams, indentation);
  auto cibIdData = cibIdMgr.getCibIdData(longName());
  if (isClassLike(this) && !needsNoProxy() && (isShared() || needsBridging()))
  {
    emitHandleConstructorDefn(stm, asInline, helper, cibParams, cibIdMgr, indentation);
    if (!moveCtor())
      emitMoveConstructorDefn(stm, asInline, helper, cibParams, cibIdMgr, indentation);
  }

  const CppHashIf* lastUsedConditional = nullptr;
  for (auto func : needsClientDefinition_)
  {
    if (func.isPureVirtual() && !func.isDestructor())
      continue;
    const auto* conditional = getMemConditional(func);
    if (lastUsedConditional && (lastUsedConditional != conditional)
        && (!conditional || (conditional->condType_ < CppHashIf::kElse)))
      gCppWriter.emitEndIf(stm);

    stm << '\n'; // Start in new line.

    if (conditional && (conditional != lastUsedConditional))
      gCppWriter.emit(conditional, stm);
    lastUsedConditional = conditional;
    func.emitDefn(stm, asInline, helper, cibParams, this, cibIdData, indentation);
  }
  if (lastUsedConditional)
    gCppWriter.emitEndIf(stm);

  emitWrappingNamespacesClosingBracesForProxyDefn(stm, cibParams, indentation) << '\n';
}

void CibCompound::emitGenericProxyDefn(std::ostream&    stm,
                                       const CibHelper& helper,
                                       const CibParams& cibParams,
                                       const CibIdMgr&  cibIdMgr,
                                       CppIndent        indentation) const
{
  if (!needsGenericProxyDefinition() || getAllVirtualMethods().empty())
    return;

  emitWrappingNsNamespacesForHelper(stm, cibParams, indentation);
  if (needsDelagatorClass())
    stm << "template<> struct __zz_cib_Delegator<" << longName() << ">;\n";

  stm << indentation << "template <>\n";
  stm << indentation-- << "class __zz_cib_Generic<" << longName() << "> : public " << longName() << " {\n";
  stm << indentation++ << "public:\n";
  stm << indentation << "using __zz_cib_Proxy = __zz_cib_Proxy_t<" << longName() << ">;\n\n";
  stm << indentation << "using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<" << longName() << ">;\n\n";

  auto cibIdData = cibIdMgr.getCibIdData(longName() + "::__zz_cib_Generic");
  for (auto ctor : ctors())
  {
    CibFunctionHelper func = ctor;
    if (!isPrivate(ctor) && !func.isDeleted())
    {
      func.emitGenericProxyDefn(stm, helper, cibParams, "__zz_cib", indentation);
    }
  }

  const CppHashIf* lastUsedConditional = nullptr;
  bool             dtorEmitted         = false;
  for (auto func : allVirtuals_)
  {
    if (func.isFinal() || (isPrivate(func)))
      continue;

    const auto* conditional = getMemConditional(func);
    if (lastUsedConditional && (lastUsedConditional != conditional)
        && (!conditional || (conditional->condType_ < CppHashIf::kElse)))
      gCppWriter.emitEndIf(stm);

    if (conditional && (conditional != lastUsedConditional))
      gCppWriter.emit(conditional, stm);
    lastUsedConditional = conditional;
    func.emitGenericProxyDefn(
      stm, helper, cibParams, cibIdData->getMethodCApiName(func.signature(helper)), indentation);
    dtorEmitted = dtorEmitted || func.isDestructor();
  }
  if (lastUsedConditional)
    gCppWriter.emitEndIf(stm);
  if (!dtorEmitted)
  {
    CibFunctionHelper func = dtor();
    func.emitGenericProxyDefn(
      stm, helper, cibParams, cibIdData->getMethodCApiName(func.signature(helper)), indentation);
  }
  stm << indentation << "void __zz_cib_ReleaseProxy() { __zz_cib_h_ = nullptr; }\n";
  stm << indentation << "__ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib_Generic, " << longName() << ")\n\n";
  stm << --indentation << "private:\n";
  stm << ++indentation << "__zz_cib_Proxy __zz_cib_h_;\n";
  stm << indentation << "const __zz_cib_MethodTableHelper __zz_cib_methodTableHelper;\n\n";
  stm << indentation << "const __zz_cib_MethodTableHelper& __zz_cib_GetMethodTableHelper() const {\n";
  stm << ++indentation << "return __zz_cib_methodTableHelper;\n";
  stm << --indentation << "}\n";
  if (needsDelagatorClass())
    stm << indentation << "friend struct __zz_cib_::__zz_cib_Delegator<" << longName() << ">;\n";
  stm << indentation << "using __zz_cib_Methodid = __zz_cib_::__zz_cib_ids::" << fullNsName()
      << "::__zz_cib_Generic::__zz_cib_Methodid;\n";
  stm << --indentation << "};\n";
  stm << indentation << "}\n";
}

void CibCompound::emitGenericDefn(std::ostream&    stm,
                                  const CibHelper& helper,
                                  const CibParams& cibParams,
                                  const CibIdMgr&  cibIdMgr,
                                  CppIndent        indentation) const
{
  if (!isFacadeLike())
    return;

  emitWrappingNsNamespacesForHelper(stm, cibParams, indentation);
  stm << indentation << "template<>\n";
  stm << indentation << "class __zz_cib_Generic<" << longName() << "> : public " << longName() << " {\n";
  stm << ++indentation << "using __zz_cib_Methodid = __zz_cib_::__zz_cib_ids::" << fullNsName()
      << "::__zz_cib_Methodid;\n";
  stm << indentation << "static __zz_cib_MethodTableHelper& __zz_cib_GetMethodTableHelper() {\n";
  stm << ++indentation << "static __zz_cib_MethodTableHelper mtableHelper(__zz_cib_" << cibParams.moduleName
      << "GetMethodTable(\n";
  stm << ++indentation << "__zz_cib_ids::" << fullNsName() << "::__zz_cib_classId));\n";
  stm << --indentation << "return mtableHelper;\n";
  stm << --indentation << "}\n";
  stm << indentation << "explicit __zz_cib_Generic(__zz_cib_AbiType h) : " << longName() << "(h) {}\n";
  stm << --indentation << "public:\n";
  stm << ++indentation << "static " << longName() << "* __zz_cib_FromHandle(__zz_cib_AbiType h) {\n";
  stm << ++indentation << "return new __zz_cib_Generic(h);\n";
  stm << --indentation << "}\n";

  auto* cibIdData   = cibIdMgr.getCibIdData(longName());
  bool  dtorEmitted = false;
  for (auto func : allVirtuals_)
  {
    if (func.isFinal() || isPrivate(func))
      continue;
    func.emitGenericDefn(
      stm, helper, cibParams, cibIdData->getMethodCApiName(func.signature(helper)), kPurposeGeneric, indentation);
    dtorEmitted = dtorEmitted || func.isDestructor();
  }
  if (!dtorEmitted)
  {
    CibFunctionHelper func = dtor();
    func.emitGenericDefn(
      stm, helper, cibParams, cibIdData->getMethodCApiName(func.signature(helper)), kPurposeGeneric, indentation);
  }
  --indentation;
  stm << indentation << "};\n";
  stm << indentation << "}\n\n";
}

// TODO: Rename this function as now it doesn't only emit facade/interface headers.
void CibCompound::emitFacadeAndInterfaceDependecyHeaders(std::ostream&    stm,
                                                         const CibHelper& helper,
                                                         const CibParams& cibParams,
                                                         const CibIdMgr&  cibIdMgr,
                                                         bool             forProxy,
                                                         CppIndent        indentation /* = CppIndent */) const
{
  std::set<const CibCompound*> facades;
  collectFacades(facades);
  std::set<const CppObj*> dependencies;
  collectTypeDependencies(helper, dependencies, TypeResolvingFlag::IgnoreStlHelpers);
  dependencies.insert(this);
  if (!cibParams.noRtti)
  {
    for (auto facade : facades)
    {
      dependencies.insert(facade);
      facade->forEachDescendent(CppAccessType::kPublic,
                                [&dependencies](const CibCompound* obj) { dependencies.insert(obj); });
    }
  }

  auto asts = collectAstDependencies(dependencies);
  asts.insert(getFileAstObj(this));
  for (const auto& header : collectHeaderDependencies(asts, cibParams, forProxy))
    stm << indentation << "#include " << header << "\n";

  stm << '\n'; // Start in new line.
  if (!facades.empty() && !cibParams.noRtti)
  {
    if (!forProxy)
    {
      // Assuming there is a facade like class in this file
      stm << "#include <typeinfo>\n";
      stm << "#include <typeindex>\n";
      stm << "#include <cstdint>\n";
      stm << "#include <unordered_map>\n\n";
      stm << "extern std::unordered_map<std::type_index, std::uint32_t> __zz_cib_gClassIdRepo;\n\n";
    }
    else
    {
      stm << "#include \"__zz_cib_internal/__zz_cib_" << cibParams.moduleName << "-generic.h\"\n\n";
    }
  }
}

void CibCompound::emitHelperHeader(const CibHelper& helper,
                                   const CibParams& cibParams,
                                   CppIndent        indentation /* = CppIndent */) const
{
  if (isStlClass() || isStlHelpereClass())
    return;

  const auto headerPath = bfs::relative(name(), cibParams.inputPath);

  auto helperHeaderPath = cibParams.libGlueDir / "__zz_cib_helpers" / headerPath;
  helperHeaderPath      = helperHeaderPath.parent_path() / ("__zz_cib_helper-" + helperHeaderPath.filename().string());
  bfs::create_directories(helperHeaderPath.parent_path());
  std::ofstream stm(helperHeaderPath.string(), std::ios_base::out);

  stm << "#pragma once\n\n";
  stm << "#include \"" << headerPath.string() << "\"\n";
  stm << "#include \"__zz_cib_" << cibParams.moduleName << "-class-types.h\"\n\n";

  // forEachNested([&stm](const CibCompound* compound) {
  //   if (!isClassLike(compound) || compound->needsNoProxy() || compound->isTemplated())
  //     return;

  //   stm << "namespace __zz_cib_ {\n";
  //   stm << "template <> struct __zz_cib_IsProxiedClass<" << fullName(compound) << "> : std::true_type {};\n";
  //   stm << "}\n";
  // });
}

void CibCompound::emitLibGlueCode(const CibHelper& helper,
                                  const CibParams& cibParams,
                                  const CibIdMgr&  cibIdMgr,
                                  CppIndent        indentation /* = CppIndent */) const
{
  if (!isCppFile(this) || isUnusedStl())
    return;

#if EMIT_HELPER_HEADER
  emitHelperHeader(helper, cibParams, indentation);
#endif

  const auto libGlueSrcPath = [&]() {
    bfs::path binderSrc = [&]() {
      if (isStlClass())
        return bfs::relative(name(), cibParams.stlInterfacePath);
      else if (isStlHelpereClass())
        return bfs::relative(name(), cibParams.stlHelpersPath);
      else
        return bfs::relative(name(), cibParams.inputPath);
    }();
    binderSrc.replace_extension(binderSrc.extension().string() + ".cpp");

    return cibParams.libGlueDir / binderSrc;
  }();
  bfs::create_directories(libGlueSrcPath.parent_path());
  std::ofstream stm(libGlueSrcPath.string(), std::ios_base::out);

  emitDependecyHeaders(stm, helper, cibParams, cibIdMgr, indentation);

  auto processCompoundForDelegators = [&](const CibCompound* compound) {
    if (compound->isTemplated())
    {
      compound->forEachTemplateInstance([&](CibCompound* templateInstace) {
        if (templateInstace->isShared())
        {
          templateInstace->emitDelegators(stm, helper, cibParams, cibIdMgr, indentation);
          templateInstace->emitMethodTableGetterDefn(stm, helper, cibParams, cibIdMgr, false);
        }
      });
    }
    else
    {
      compound->emitDelegators(stm, helper, cibParams, cibIdMgr, indentation);
      compound->emitMethodTableGetterDefn(stm, helper, cibParams, cibIdMgr, false);
    }
  };

  forEachNested(CppAccessType::kPublic, [&](const CibCompound* nested) {
    if (isClassLike(nested))
      processCompoundForDelegators(nested);
  });
}

void CibCompound::emitDependecyHeaders(std::ostream&    stm,
                                       const CibHelper& helper,
                                       const CibParams& cibParams,
                                       const CibIdMgr&  cibIdMgr,
                                       CppIndent        indentation /* = CppIndent */) const
{
  emitFacadeAndInterfaceDependecyHeaders(stm, helper, cibParams, cibIdMgr, false, indentation);
  emitCommonCibHeaders(stm, cibParams);
}

void CibCompound::emitCommonCibHeaders(std::ostream& stm, const CibParams& cibParams)
{
  if (!cibParams.noRtti)
    stm << "#include \"__zz_cib_" << cibParams.moduleName << "-class-down-cast.h\"\n";

  stm << "#include \"__zz_cib_" << cibParams.moduleName << "-delegate-helper.h\"\n";
  stm << "#include \"__zz_cib_" << cibParams.moduleName << "-generic.h\"\n";
  stm << "#include \"__zz_cib_" << cibParams.moduleName << "-ids.h\"\n";
  stm << "#include \"__zz_cib_" << cibParams.moduleName << "-type-converters.h\"\n";

  stm << "#include \"__zz_cib_" << cibParams.moduleName << "-mtable-helper.h\"\n";
  stm << "#include \"__zz_cib_" << cibParams.moduleName << "-proxy-mgr.h\"\n";
  stm << '\n';
}

void CibCompound::emitProxyMgrDelegators(std::ostream&    stm,
                                         const CibParams& cibParams,
                                         CppIndent        indentation /* = CppIndent */) const
{
  if (!isSharedProxy() || !libraryManagesProxy())
    return;

  stm << indentation << "static void __zz_cib_decl __zz_cib_RegisterProxy(" << longName()
      << "* obj, __zz_cib_Proxy proxy, __zz_cib_ProxyDeleter deleter) {\n";
  stm << indentation << "  __zz_cib_ProxyManagerDelegator::__zz_cib_RegisterProxy(obj, proxy, deleter);\n";
  stm << indentation << "}\n";
}

void CibCompound::emitDelegators(std::ostream&    stm,
                                 const CibHelper& helper,
                                 const CibParams& cibParams,
                                 const CibIdMgr&  cibIdMgr,
                                 CppIndent        indentation /* = CppIndent */) const
{
  if (needsBridging_.empty())
    return;

  auto cibIdData = cibIdMgr.getCibIdData(longName());
  if (needsGenericProxyDefinition())
    emitGenericProxyDefn(stm, helper, cibParams, cibIdMgr, indentation);

  if (isClassLike(this))
  {
    const auto delegatee = [&]() -> std::string {
      if (needsGenericProxyDefinition())
        return "__zz_cib_::__zz_cib_Generic<" + longName() + ">";
      else if (isOverridable())
        return "__zz_cib_::__zz_cib_Delegator<" + longName() + ">";
      else
        return longName();
    }();

    emitWrappingNsNamespacesForHelper(stm, cibParams, indentation);
    stm << indentation << "template <>\n";
    stm << indentation++ << "struct __zz_cib_Delegator<";
    stm << longName() << ">";
    if (isOverridable())
      stm << " : public " << longName();
    stm << " {\n";
    stm << indentation << "using __zz_cib_Delegatee = " << delegatee << ";\n";
    stm << indentation << "using __zz_cib_AbiType = __zz_cib_Delegatee*;\n";
    if (needsGenericProxyDefinition() || libraryManagesProxy())
      stm << indentation << "using __zz_cib_Proxy = __zz_cib_Proxy_t<" << longName() << ">;\n";
    if (isSharedProxy() && libraryManagesProxy())
      stm << indentation << "using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<" << longName() << ">;\n";

    if (isOverridable())
    {
      stm << '\n';
      stm << indentation << "using " << longName() << "::" << ctorName() << ";\n";
    }
    stm << '\n';
  }
  else
  {
    emitWrappingNsNamespacesForGlueCode(stm, cibParams, indentation);
    stm << indentation << "namespace __zz_cib_NsDelegator {\n";
  }

  std::unordered_set<std::string> funcSignatures;
  const CppHashIf*                lastUsedConditional = nullptr;
  for (auto func : needsBridging_)
  {
    const auto* conditional = getMemConditional(func);
    if (lastUsedConditional && (lastUsedConditional != conditional)
        && (!conditional || (conditional->condType_ < CppHashIf::kElse)))
      gCppWriter.emitEndIf(stm);

    if (conditional && (conditional != lastUsedConditional))
      gCppWriter.emit(conditional, stm);
    lastUsedConditional = conditional;
    if (funcSignatures.insert(func.signature(helper)).second)
      func.emitCAPIDefn(
        stm, helper, cibParams, this, cibIdData->getMethodCApiName(func.signature(helper)), kPurposeCApi, indentation);
  }
  if (lastUsedConditional)
    gCppWriter.emitEndIf(stm);

  emitProxyMgrDelegators(stm, cibParams, indentation);

  std::set<const CibCompound*> processedAncestor;
  forEachAncestor(CppAccessType::kPublic, [&](const CibCompound* pubParent) {
    if ((pubParent->isShared() || !pubParent->isEmpty()) && !processedAncestor.count(pubParent))
    {
      {
        auto castApiName = castToBaseName(pubParent, cibParams);
        stm << indentation << "static " << pubParent->longName() << "* __zz_cib_decl "
            << cibIdData->getMethodCApiName(castApiName) << "(" << longName() << "* __zz_cib_obj) {\n";
        stm << ++indentation << "return __zz_cib_obj;\n";
        stm << --indentation << "}\n";
      }
      if (!cibParams.noRtti)
      {
        auto castApiName = castFromBaseName(pubParent, cibParams);
        stm << indentation << "static " << longName() << "* __zz_cib_decl " << cibIdData->getMethodCApiName(castApiName)
            << "(" << pubParent->longName() << "* __zz_cib_obj) {\n";
        stm << ++indentation << "return __zz_cib_DownCast<" << longName() << "*>(__zz_cib_obj);\n";
        stm << --indentation << "}\n";
      }

      processedAncestor.insert(pubParent);
    }
    return false;
  });

  if (isFacadeLike() && !cibParams.noRtti)
  {
    stm << indentation << "static std::uint32_t __zz_cib_decl " << cibIdData->getMethodCApiName("__zz_cib_GetClassId")
        << "(" << longName() << "** __zz_cib_obj) {\n";
    ++indentation;
    stm << indentation << "static bool classIdRepoPopulated = false;\n";
    stm << indentation << "if (!classIdRepoPopulated) {\n";
    ++indentation;
    forEachDescendent(CppAccessType::kPublic, [&](const CibCompound* compound) {
      auto cibIdData = cibIdMgr.getCibIdData(compound->longName());
      if (cibIdData)
      {
        stm << indentation << "__zz_cib_gClassIdRepo[std::type_index(typeid(" << compound->longName() << "))] = ";
        stm << "__zz_cib_::__zz_cib_ids::" << compound->fullNsName() << "::__zz_cib_classId;\n";
      }
    });
    stm << indentation << "__zz_cib_gClassIdRepo[std::type_index(typeid(" << longName() << "))] = ";
    stm << "__zz_cib_::__zz_cib_ids::" << fullNsName() << "::__zz_cib_classId;\n";
    stm << indentation << "classIdRepoPopulated = true;\n";
    --indentation;
    stm << indentation << "}\n";
    stm << indentation << "auto tdx = std::type_index(typeid(**__zz_cib_obj));\n";
    stm << indentation << "auto itr = __zz_cib_gClassIdRepo.find(tdx);\n";
    stm << indentation << "if (itr != __zz_cib_gClassIdRepo.end()) return itr->second;\n";
    forEachDescendent(CppAccessType::kPublic, [&](const CibCompound* compound) {
      if (!isPublic(compound))
        return;
      stm << indentation++ << "{\n";
      stm << indentation << "auto* obj = dynamic_cast<" << compound->longName() << "*>(*__zz_cib_obj);\n";
      stm << indentation << "if (obj) {\n";
      stm << ++indentation << "*__zz_cib_obj = obj;\n";
      stm << indentation << "return __zz_cib_gClassIdRepo[tdx] = "
          << "__zz_cib_::__zz_cib_ids::" << compound->fullNsName() << "::__zz_cib_classId;\n";
      stm << --indentation << "}\n";
      stm << --indentation << "}\n";
    });

    stm << indentation << "return __zz_cib_::__zz_cib_ids::" << fullNsName() << "::__zz_cib_classId;\n";
    stm << --indentation << "}\n";
  }
  if (needsGenericProxyDefinition())
  {
    stm << indentation << "static void __zz_cib_decl " << cibIdData->getMethodCApiName("__zz_cib_ReleaseProxy") << "("
        << "__zz_cib_Delegatee* __zz_cib_obj) {\n";
    ++indentation;
    stm << indentation << "__zz_cib_obj->__zz_cib_ReleaseProxy();\n";
    --indentation;
    --indentation;
    stm << indentation << "}\n";
  }
  if (!isClassLike(this))
  {
    stm << '}' << closingBracesForWrappingNsNamespaces();
  }
  else
  {
    stm << --indentation << "};\n";
  }
  stm << indentation << "}\n\n";
}

/**
For conditional APIs declared like below:
<code>
int f0();
#if COND // Start of a conditional group, also start of 1st subgroup
int f1();
int f2();
...
#elif COND2 // OPTIONAL. Start of 2nd subgroup
int f3();
...
#else // OPTIONAL. Start of 3rd subgroup
int f4();
int f5();
int f6();
...
#endif // REQUIRED
int f7();
</code>

We would like to create a method table like:
<code>
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::f0),
#if COND
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::f1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::f2),
    reinterpret_cast<__zz_cib_MTableEntry> (nullptr),
    reinterpret_cast<__zz_cib_MTableEntry> (nullptr),
    reinterpret_cast<__zz_cib_MTableEntry> (nullptr),
    reinterpret_cast<__zz_cib_MTableEntry> (nullptr),
#elif COND2
    reinterpret_cast<__zz_cib_MTableEntry> (nullptr),
    reinterpret_cast<__zz_cib_MTableEntry> (nullptr),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::f3),
    reinterpret_cast<__zz_cib_MTableEntry> (nullptr),
    reinterpret_cast<__zz_cib_MTableEntry> (nullptr),
    reinterpret_cast<__zz_cib_MTableEntry> (nullptr),
#else
    reinterpret_cast<__zz_cib_MTableEntry> (nullptr),
    reinterpret_cast<__zz_cib_MTableEntry> (nullptr),
    reinterpret_cast<__zz_cib_MTableEntry> (nullptr),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::f4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::f5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::f6),
#endif
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::f7)
  };
</code>

The aim is that each method will have unique method-id, irrespective of the fact
whether they are part of enabled code or not.

So, to make method table like above we need to know total number of methods in such a conditional group
and also number of methods in each subgroup.
For example below are the statistics of above mentioned conditional API group:
Total number of group member     = 6.
Number of members in subgroup #1 = 2.
Number of members in subgroup #2 = 1.
Number of members in subgroup #3 = 3.

@Note: If there is no #else part then an #else with zero number of methods will be assumed.
*/
struct MethodTableEntryInfo
{
  MethodTableEntryInfo(const CppHashIf*  _cond,
                       CibMethodCAPIName _name,
                       size_t            _subGroupStartOffset = 0,
                       size_t            _prevSubGroupPadding = 0)
    : cond(_cond)
    , name(std::move(_name))
    , subGroupStartOffset(_subGroupStartOffset)
    , subGroupEndPadding(_prevSubGroupPadding)
  {
  }

  const CppHashIf*  cond{nullptr};
  CibMethodCAPIName name;

  size_t subGroupStartOffset{0};
  size_t subGroupEndPadding{0};
};

class MethodTableBuilder
{
public:
  MethodTableBuilder(const CibCompound* compound, const CibIdData* idData)
  {
    if (idData == nullptr)
      return;

    CibMethodId nextMethodId = 0;
    nextMethodId             = idData->forEachMethod([&](const CibMethodIdTableEntry& methodIdEntry) {
      if (methodIdEntry.id == nextMethodId++)
        data.emplace_back(compound->getMemConditional(methodIdEntry.obj), methodIdEntry.name);
      else
        data.emplace_back(nullptr, CibMethodCAPIName());
    });

    computeOffsetAndPadding();
  }

public:
  size_t numEntry() const
  {
    return data.size();
  }

  const MethodTableEntryInfo& getEntry(size_t i) const
  {
    return data[i];
  }

private:
  const CppHashIf* getConditionalAt(size_t i) const
  {
    return (i < data.size()) ? getEntry(i).cond : nullptr;
  }
  void computeOffsetAndPadding()
  {
    const CppHashIf*    lastUsedConditional = nullptr;
    std::vector<size_t> subgroupStartIndices;
    for (size_t i = 0; i < numEntry() + 1; ++i)
    {
      const auto* conditional = getConditionalAt(i);
      const auto  nextGroupStarts =
        (conditional && (conditional != lastUsedConditional) && (conditional->condType_ < CppHashIf::kElse));
      const auto nextSubGroupStarts =
        (conditional != lastUsedConditional) && (conditional && (conditional->condType_ != CppHashIf::kEndIf));
      const auto prevGroupEnded = (lastUsedConditional && !conditional);
      if (lastUsedConditional && (nextGroupStarts || prevGroupEnded))
      {
        const auto currentGroupNumMembers  = i - subgroupStartIndices.front();
        size_t     prevSubgroupsNumMembers = 0;
        for (size_t j = 0; j < subgroupStartIndices.size(); ++j)
        {
          const auto subgroupEndIndex = ((j == (subgroupStartIndices.size() - 1)) ? i : subgroupStartIndices[j + 1]);
          const auto currentSubgroupNumMember               = (subgroupEndIndex - subgroupStartIndices[j]);
          data[subgroupStartIndices[j]].subGroupStartOffset = prevSubgroupsNumMembers;
          data[subgroupStartIndices[j]].subGroupEndPadding =
            currentGroupNumMembers - currentSubgroupNumMember - data[subgroupStartIndices[j]].subGroupStartOffset;
          prevSubgroupsNumMembers += currentSubgroupNumMember;
        }
        const auto groupHasOnlyOneSubgroup = (subgroupStartIndices.size() == 1);
        if (groupHasOnlyOneSubgroup)
        {
          missingHashElses.emplace_back(std::make_unique<CppHashIf>(CppHashIf::kElse));
          data.emplace(data.begin() + i++, missingHashElses.back().get(), "", prevSubgroupsNumMembers - 1);
        }

        subgroupStartIndices.clear();
      }

      if (nextSubGroupStarts)
        subgroupStartIndices.push_back(i);

      lastUsedConditional = conditional;
    }
  }

private:
  std::vector<MethodTableEntryInfo>       data;
  std::vector<std::unique_ptr<CppHashIf>> missingHashElses;
};

void CibCompound::emitMethodTableGetterDefn(std::ostream&    stm,
                                            const CibHelper& helper,
                                            const CibParams& cibParams,
                                            const CibIdMgr&  cibIdMgr,
                                            bool             forProxy,
                                            CppIndent        indentation /* = CppIndent */) const
{
  if (forProxy) // TODO: simplify this.
  {
    for (auto& mem : members())
    {
      if (CibCompoundEPtr nested = mem)
      {
        if (nested->needsGenericProxyDefinition())
          nested->emitMethodTableGetterDefn(stm, helper, cibParams, cibIdMgr, forProxy, indentation);
      }
    }
  }

  if (needsBridging())
  {
    emitWrappingNsNamespacesForGlueCode(stm, cibParams, indentation);
    if (forProxy)
      stm << "static ";
    stm << "const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {\n";
    const auto& className = forProxy ? longName() + "::__zz_cib_Generic" : longName();
    stm << ++indentation << "static const __zz_cib_MTableEntry methodArray[] = {\n";
    ++indentation;

    const char*        sep = "";
    MethodTableBuilder methodTableBuilder(this, cibIdMgr.getCibIdData(className));
    const CppHashIf*   lastUsedConditional    = nullptr;
    size_t             prevSubgroupEndPadding = 0;
    for (size_t i = 0; i < methodTableBuilder.numEntry(); ++i)
    {
      const auto& mtableEntry = methodTableBuilder.getEntry(i);
      const auto* conditional = mtableEntry.cond;
      if (lastUsedConditional != conditional)
      {
        for (size_t j = 0; j < prevSubgroupEndPadding; ++j)
          stm << sep << indentation << "reinterpret_cast<__zz_cib_MTableEntry> (0)";
        prevSubgroupEndPadding = mtableEntry.subGroupEndPadding;
      }
      stm << sep;
      if (lastUsedConditional && (lastUsedConditional != conditional)
          && (!conditional || (conditional->condType_ < CppHashIf::kElse)))
        gCppWriter.emitEndIf(stm);

      if (conditional && (conditional != lastUsedConditional))
      {
        gCppWriter.emit(conditional, stm);
        sep = "";
        for (size_t j = 0; j < mtableEntry.subGroupStartOffset; ++j)
        {
          stm << sep << indentation << "reinterpret_cast<__zz_cib_MTableEntry> (0)";
          sep = ",\n";
        }
        stm << sep;
      }
      lastUsedConditional = conditional;

      if (!mtableEntry.name.empty())
      {
        stm << indentation << "reinterpret_cast<__zz_cib_MTableEntry> (&";
        if (isClassLike(this))
        {
          stm << "__zz_cib_::__zz_cib_Delegator<";
          stm << longName();
          stm << ">::";
        }
        else
        {
          if (isNamespaceLike(this))
            stm << fullNsName() << "::";
          stm << "__zz_cib_NsDelegator::";
        }
        stm << mtableEntry.name << ')';
      }
      else
      {
        stm << indentation << "reinterpret_cast<__zz_cib_MTableEntry> (0)";
      }
      sep = ",\n";
    }
    if (lastUsedConditional)
    {
      stm << '\n';
      gCppWriter.emitEndIf(stm);
    }

    stm << '\n';
    stm << --indentation << "};\n";
    stm << indentation << "static const __zz_cib_MethodTable methodTable = { "
        << "methodArray, " << cibIdMgr.numMethods(className) << " };\n";
    stm << indentation << "return &methodTable;\n";
    stm << --indentation << "}\n";
    stm << indentation << '}' << closingBracesForWrappingNsNamespaces() << '\n';
  }
}
