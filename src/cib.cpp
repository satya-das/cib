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

static CppTypeModifier convertRefToPtr(const CppTypeModifier& typeModifier)
{
  if (typeModifier.refType_ == CppRefType::kNoRef)
    return typeModifier;
  auto ret = resolveTypeModifier(CppTypeModifier{CppRefType::kNoRef, 1, 0},
                                 CppTypeModifier{CppRefType::kNoRef, typeModifier.ptrLevel_, typeModifier.constBits_});

  if ((ret.ptrLevel_ > 1) && (typeModifier.constBits_ & 0x1))
  {
    // The following gives error:
    /*
      int i = 0;
      int* pi = &i;
      int** ppi = &pi;
      const int** cppi = ppi; // error: cannot initialize a variable of type 'const int **' with an lvalue of type 'int
      **'
    */
    // See https://stackoverflow.com/questions/27447220/invalid-conversion-from-const-int-to-int,
    // https://stackoverflow.com/questions/16390294/conversion-from-int-to-const-int, and also
    // http://c-faq.com/ansi/constmismatch.html
    // ret.constBits_ |= 0x02;
  }

  return ret;
}

static std::uint8_t effectivePtrLevel(const CppVarType* varType)
{
  return (isByRef(varType) || isByRValueRef(varType)) ? 1 + ptrLevel(varType) : ptrLevel(varType);
}

static void emitStars(std::ostream& stm, std::uint8_t numStars)
{
  while (numStars--)
    stm << '*';
}

static void emitType(std::ostream&      stm,
                     const CppVarType*  typeObj,
                     const CibCompound* typeResolver,
                     const CibHelper&   helper,
                     FuncProtoPurpose   purpose)
{
  if (typeObj == nullptr)
    return;
  if ((purpose & kPurposeAbiLayer) && (purpose != kPurposeGeneric) && (purpose != kPurposeGenericProxy)
      && helper.isSmartPtr(typeObj))
  {
    return emitType(stm, helper.convertSmartPtr(typeObj).get(), typeResolver, helper, purpose);
  }

  // FIXME: We are assuming that all types will be of some sort of compound object.
  // This will break when there will be some typedefed or enum type is used.
  auto* resolvedCppObj = (typeResolver ? typeResolver->resolveTypeName(typeObj->baseType(), helper) : nullptr);
  auto* resolvedType =
    resolvedCppObj && isClassLike(resolvedCppObj) ? static_cast<const CibCompound*>(resolvedCppObj) : nullptr;
  if (resolvedType && resolvedType->needsNoProxy())
    resolvedType = nullptr;

  bool emitHandle   = resolvedType && ((purpose == kPurposeProxyProcType) || (purpose == kPurposeProxyCApi));
  bool convertToPtr = (purpose & kPurposeGlueCode) && (purpose != kPurposeGenericProxy);
  bool byValToPtr   = resolvedType && convertToPtr && isByValue(typeObj);

  auto typeModifier = convertToPtr ? convertRefToPtr(typeObj->typeModifier()) : typeObj->typeModifier();
  if (resolvedType != nullptr)
  {
    if (emitHandle)
    {
      stm << "__zz_cib_HANDLE";
    }
    else if (resolvedType->isTemplated() && (purpose != kPurposeProxyDecl))
    {
      stm << "__zz_cib_ThisClass";
    }
    else if (!(purpose & kPurposeProxyDecl))
    {
      stm << resolvedType->longName();
    }
    else
    {
      stm << typeObj->baseType();
    }
  }
  else
  {
    if (resolvedCppObj)
    {
      stm << longName(resolvedCppObj);
    }
    else
    {
      stm << typeObj->baseType();
    }
  }
  if (!resolvedType || effectivePtrLevel(typeObj))
  {
    for (unsigned short i = 0; i <= typeModifier.ptrLevel_; ++i)
    {
      if (typeModifier.constBits_ & (1 << i))
        stm << " const ";
      if (i != typeModifier.ptrLevel_)
        stm << '*';
    }
  }
  else if (isConst(typeObj))
  {
    stm << " const ";
  }
  if (typeModifier.refType_ == CppRefType::kByRef)
  {
    stm << '&';
  }
  else if (typeModifier.refType_ == CppRefType::kRValRef)
  {
    stm << "&&";
  }
  if (byValToPtr)
    stm << '*';
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

void CibFunctionHelper::emitArgsForDecl(std::ostream&    stm,
                                        const CibHelper& helper,
                                        bool             resolveTypes,
                                        FuncProtoPurpose purpose) const
{
  // FIXME for function pointer type params, it currently handles only functions whose parameter is
  // not function-pointer type.

  if (!hasParams())
    return;
  const CibCompound* typeResolver = resolveTypes ? getOwner() : nullptr;
  auto               params       = getParams();
  const char*        sep          = "";
  for (size_t i = 0; i < params->size(); ++i)
  {
    const auto& param = params->at(i);
    CppVarEPtr  var   = param;
    stm << sep;
    emitType(stm, var->varType(), typeResolver, helper, purpose);
    if (purpose != kPurposeSignature)
    {
      stm << ' ';
      emitParamName(stm, var, i, !(purpose & kPurposeProxyDecl));
    }
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
    if ((purpose == kPurposeProxyDecl) && var->varDecl().assignValue())
    {
      stm << " = ";
      gCppWriter.emitExpr(var->varDecl().assignValue(), stm);
    }
    sep = ", ";
  }
}

void CibFunctionHelper::emitArgsForCall(std::ostream&    stm,
                                        const CibHelper& helper,
                                        const CibParams& cibParams,
                                        FuncProtoPurpose purpose) const
{
  // FIXME for function pointer type params, it currently handles only functions whose parameter is
  // not function-pointer type.

  if (!hasParams())
    return;
  const auto* params = getParams();

  for (size_t i = 0; i < params->size(); ++i)
  {
    if (i != 0)
      stm << ", ";

    const auto&     param = params->at(i);
    CppConstVarEPtr var   = param;
    // FIXME for enum and other non compound types.
    auto  varBaseType    = baseType(var);
    auto* resolvedCppObj = getOwner()->resolveTypeName(varBaseType, helper);
    if ((resolvedCppObj == nullptr) && helper.isSmartPtr(var.get()))
    {
      resolvedCppObj = getOwner()->resolveTypeName(helper.convertSmartPtr(baseType(var)), helper);
    }
    auto* resolvedType =
      resolvedCppObj && isClassLike(resolvedCppObj) ? static_cast<const CibCompound*>(resolvedCppObj) : nullptr;
    if (resolvedType && resolvedType->needsNoProxy())
      resolvedType = nullptr;
    switch (purpose)
    {
      case kPurposeProxyCApi:
        if (resolvedType)
        {
          if (isByValue(var))
            stm << "__zz_cib_" << resolvedType->longNsName() << "::__zz_cib_Helper::__zz_cib_obj_from_handle(";
          else
            stm << "__zz_cib_" << resolvedType->longNsName() << "::__zz_cib_Helper::__zz_cib_from_handle(";
        }
        if (isByRef(var))
          stm << '*';
        emitParamName(stm, var, i);
        if (resolvedType)
          stm << ")";
        break;
      case kPurposeGeneric:
      case kPurposeProxyDefn:
        if (resolvedType)
        {
          if (resolvedType->isTemplated())
            stm << "__zz_cib_" << getOwner()->longNsName() << "::__zz_cib_Helper::__zz_cib_handle(";
          else
            stm << "__zz_cib_" << resolvedType->longNsName() << "::__zz_cib_Helper::__zz_cib_handle(";
          if ((effectivePtrLevel(var->varType()) > 1) && (refType(var) != CppRefType::kNoRef))
            stm << '&';
        }
        else if (isByRef(var) || isByRValueRef(var))
        {
          stm << '&';
        }
        emitParamName(stm, var, i);
        if (helper.isSmartPtr(var.get()))
          stm << ".release()";
        if (resolvedType)
          stm << ')';
        break;
      case kPurposeCApi:
        if (helper.isSmartPtr(var.get()))
        {
          if (resolvedType)
            stm << varBaseType << "(" << var->name() << ")";
          else
            stm << var->varType()->baseType() << "(" << var->name() << ")";
          break;
        }
        else if (resolvedType && isByValue(var))
        {
          stm << '*';
        }
        else
        {
          if (isByRef(var))
            stm << '*';
          else if (isByRValueRef(var))
            stm << "std::move(*";
        }
        emitParamName(stm, var, i);
        if (isByRValueRef(var))
          stm << ')';
        break;
      case kPurposeGenericProxy:
        if (isByRValueRef(var))
          stm << "&";
        else if (!helper.isSmartPtr(var.get()) && ((resolvedType && isByValue(var)) || isByRef(var)))
          stm << '&';
        emitParamName(stm, var, i);
        if (helper.isSmartPtr(var.get()))
          stm << ".release()";
        break;
      case kPurposeInvokeHelper:
      case kPurposeGenericProxyCtorInit:
        if (helper.isSmartPtr(var.get()) || isByRValueRef(var))
          stm << "std::move(";
        emitParamName(stm, var, i);
        if (helper.isSmartPtr(var.get()) || isByRValueRef(var))
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
  if (returnType())
  {
    emitType(stm, returnType(), getOwner(), helper, purpose);
    stm << ' ';
  }

  if (!isTypeConverter())
  {
    stm << funcName() << '(';
    emitArgsForDecl(stm, helper, true, purpose);
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
  if (isConstructor())
    stm << callingOwner->longName() << "*";
  else if (isDestructor())
    stm << "void";
  else
    emitType(stm, returnType(), callingOwner, helper, purpose);
  stm << " __zz_cib_decl ";
  stm << capiName << '(';
  if ((purpose != kPurposeSignature) && isConstructor() && callingOwner->needsGenericProxyDefinition())
  {
    stm << "__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl";
    if (hasParams())
      stm << ", ";
  }
  else if (isConstructorLike() && callingOwner->needsNoProxy())
  {
    stm << callingOwner->longName() << "* __zz_cib_this";
    if (hasParams())
      stm << ", ";
  }
  else if (!isStatic() && (isMethod() || isDestructor() || isTypeConverter()))
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
  else
  {
    emitArgsForDecl(stm, helper, true, purpose);
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

  if (forProxy && !isVirtual() && !isDestructor())
    return;
  if (!forProxy)
  {
    if (isConstructorLike() && callingOwner->isAbstract() && !callingOwner->needsGenericProxyDefinition())
      return;
  }
  stm << indentation << "static ";
  emitCAPIDecl(stm, helper, cibParams, callingOwner, capiName, purpose);
  stm << " {\n";
  stm << ++indentation;
  if (isConstructor())
  {
    stm << "return new ";
    if (callingOwner->needsNoProxy())
    {
      stm << "(__zz_cib_this) ";
    }
    if (callingOwner->needsGenericProxyDefinition())
    {
      stm << "__zz_cib_" << callingOwner->longNsName() << "::__zz_cib_GenericProxy::" << callingOwner->name()
          << "(proxy, mtbl";
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
    else
    {
      emitArgsForCall(stm, helper, cibParams, purpose);
    }
    stm << ");\n";
  }
  else if (isDestructor())
  {
    if (callingOwner->needsNoProxy())
    {
      stm << "__zz_cib_obj->~" << callingOwner->name() << "();\n";
    }
    else
    {
      if (forProxy)
        stm << "__zz_cib_Helper::__zz_cib_release_handle(__zz_cib_obj);\n" << indentation;
      stm << "delete __zz_cib_obj;\n";
    }
  }
  else
  {
    bool               convertFromValue = false;
    const CibCompound* resolvedType     = nullptr;
    if (returnType() && !isVoid(returnType()))
    {
      auto* resolvedCppObj = callingOwner->resolveTypeName(returnType()->baseType(), helper);
      resolvedType =
        resolvedCppObj && isClassLike(resolvedCppObj) ? static_cast<const CibCompound*>(resolvedCppObj) : nullptr;
      if (resolvedType && resolvedType->needsNoProxy())
        resolvedType = nullptr;

      stm << "return ";
      if (resolvedType && forProxy)
      {
        if (resolvedType->isTemplated())
          stm << "__zz_cib_" << callingOwner->longNsName() << "::__zz_cib_Helper::__zz_cib_handle(";
        else
          stm << "__zz_cib_" << resolvedType->longNsName() << "::__zz_cib_Helper::__zz_cib_handle(\n";
        stm << ++indentation;
      }
      if (isByValue(returnType()))
      {
        convertFromValue = (resolvedType != nullptr);
        if (convertFromValue)
        {
          auto retTypeCompound = static_cast<const CibCompound*>(resolvedType);
          if (retTypeCompound->isTemplated())
            stm << "new __zz_cib_ThisClass(";
          else
            stm << "new ::" << fullName(retTypeCompound) << '(';
        }
      }
      else if (isByRef(returnType()))
      {
        stm << '&';
      }
    }
    if (isClassLike(callingOwner) && !isStatic())
      stm << "__zz_cib_obj->";
    if (isCppFile(callingOwner))
    {
      stm << "::";
    }
    else if (!forProxy
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
      emitType(stm, returnType(), getOwner(), helper, FuncProtoPurpose::kPurposeSignature);
    }
    stm << '(';
    emitArgsForCall(stm, helper, cibParams, purpose);
    if (convertFromValue)
      stm << ')';
    if (resolvedType && forProxy)
    {
      stm << ")";
      --indentation;
    }
    stm << ")";
    if (helper.isSmartPtr(returnType()))
      stm << ".release()";
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
  stm << indentation;
  if (asInline)
    stm << "inline ";
  if (isTypeConverter())
  {
    stm << fullName(callingOwner) << "::operator ";
    emitType(stm, returnType(), callingOwner, helper, kPurposeProxyDefn);
    stm << "()";
  }
  else
  {
    if (isFunction())
    {
      emitType(stm, returnType(), callingOwner, helper, kPurposeProxyDefn);
      stm << ' ';
    }
    if (isNamespaceLike(callingOwner))
      stm << fullName(callingOwner) << "::";
    stm << funcName() << '(';
    emitArgsForDecl(stm, helper, true, kPurposeProxyDefn);
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

    stm << "__zz_cib_" << callingOwner->longNsName() << "::__zz_cib_Helper::" << capiName << '(';
    if (callingOwner->needsNoProxy() || callingOwner->needsGenericProxyDefinition())
    {
      stm << "this";
      if (hasParams())
        stm << ", ";
    }
    emitArgsForCall(stm, helper, cibParams, kPurposeProxyDefn);

    if (callingOwner->needsNoProxy())
    {
      stm << ");\n";
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
    ++indentation;
    if (isDestructor())
    {
      if (callingOwner->needsGenericProxyDefinition())
      {
        stm << indentation << "__zz_cib_" << callingOwner->longNsName()
            << "::__zz_cib_Helper::__zz_cib_release_proxy(this);\n";
      }
      if (!callingOwner->needsNoProxy())
      {
        stm << indentation << "auto h = __zz_cib_" << callingOwner->longNsName()
            << "::__zz_cib_Helper::__zz_cib_release_handle(this);\n";
      }
    }

    stm << indentation;
    const CibCompound* retType        = nullptr;
    bool               isRetUniquePtr = false;
    if (returnType() && !isVoid(returnType()))
    {
      stm << "return ";
      isRetUniquePtr       = helper.isSmartPtr(returnType());
      auto* resolvedCppObj = callingOwner->resolveTypeName(returnType()->baseType(), helper);
      if (!resolvedCppObj && isRetUniquePtr)
      {
        resolvedCppObj = callingOwner->resolveTypeName(helper.convertSmartPtr(returnType())->baseType(), helper);
      }
      retType =
        resolvedCppObj && isClassLike(resolvedCppObj) ? static_cast<const CibCompound*>(resolvedCppObj) : nullptr;
      if (retType && retType->needsNoProxy())
        retType = nullptr;
      if (isRetUniquePtr)
        stm << returnType()->baseType() << "(";
      if (retType && isByValue(returnType()) && !isRetUniquePtr)
      {
        stm << "__zz_cib_" << retType->longNsName() << "::__zz_cib_Helper::__zz_cib_obj_from_handle(\n";
      }
      else
      {
        if (isByRef(returnType()))
        {
          if ((ptrLevel(returnType()) == 0) || (retType == nullptr))
            stm << '*';
        }
        if (retType)
        {
          stm << "__zz_cib_" << retType->longNsName() << "::__zz_cib_Helper::__zz_cib_from_handle(\n";
          stm << ++indentation;
          if (!isRetUniquePtr)
            emitStars(stm, effectivePtrLevel(returnType()) - 1);
        }
      }
    }
    stm << "__zz_cib_" << callingOwner->longNsName() << "::__zz_cib_Helper::" << capiName << "(";
    if (isDestructor() && !callingOwner->needsNoProxy())
    {
      stm << "h";
    }
    else if (isClassLike(callingOwner) && !isStatic())
    {
      if (!callingOwner->needsNoProxy())
        stm << "__zz_cib_h_";
      else
        stm << "this";
      if (hasParams())
        stm << ", ";
    }
    emitArgsForCall(stm, helper, cibParams, kPurposeProxyDefn);
    stm << ')';
    if (isRetUniquePtr)
      stm << ")";
    if (retType)
      stm << '\n' << --indentation << ")";
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
    stm << indentation << funcName() << "(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl";
    if (hasParams())
      stm << ", ";
    emitArgsForDecl(stm, helper, true, kPurposeGenericProxy);
    stm << ")\n";
    ++indentation;
    stm << indentation << ": " << getOwner()->longName() << "::" << funcName() << '(';
    emitArgsForCall(stm, helper, cibParams, kPurposeGenericProxyCtorInit);
    stm << ")\n";
    stm << indentation << ", __zz_cib_proxy(proxy)\n";
    stm << indentation << ", __zz_cib_mtbl_helper(mtbl)\n";
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
  if ((purpose == kPurposeGeneric) && isDestructor())
    return; // base class dtor takes care of everything.

  stm << indentation;
  emitSignature(stm, helper, purpose);
  stm << " override";
  stm << " {\n";
  ++indentation;
  bool genericProxy = (purpose == kPurposeGenericProxy);
  if (isDestructor())
  {
    if (genericProxy)
      stm << indentation << "if (!__zz_cib_proxy) return;\n";
    else
      stm << indentation << "if (!__zz_cib_h_) return;\n";
  }
  emitProcType(stm, helper, cibParams, genericProxy, indentation);
  stm << indentation;
  if (!isDestructor())
    stm << "return ";

  auto               retTypeIsUniquePtr = false;
  const CibCompound* resolvedType       = nullptr;
  if (returnType())
  {
    const auto& retTypeBaseName = returnType()->baseType();
    auto*       resolvedCppObj =
      (getOwner() && returnType() ? getOwner()->resolveTypeName(retTypeBaseName, helper) : nullptr);
    auto isRetSmartPtr = helper.isSmartPtr(retTypeBaseName);
    if ((resolvedCppObj == nullptr) && isRetSmartPtr)
    {
      retTypeIsUniquePtr = true;
      resolvedCppObj =
        (getOwner() && returnType() ? getOwner()->resolveTypeName(helper.convertSmartPtr(retTypeBaseName), helper)
                                    : nullptr);
    }
    resolvedType =
      (resolvedCppObj && isClassLike(resolvedCppObj)) ? static_cast<const CibCompound*>(resolvedCppObj) : nullptr;
    if (resolvedType && resolvedType->needsNoProxy())
      resolvedType = nullptr;
    if (retTypeIsUniquePtr)
    {
      stm << retTypeBaseName;
      stm << '(';
    }
    if (resolvedType && !genericProxy)
    {
      if (isByValue(returnType()))
        stm << "__zz_cib_" << resolvedType->longNsName() << "::__zz_cib_Helper::__zz_cib_obj_from_handle(\n";
      else
        stm << "__zz_cib_" << resolvedType->longNsName() << "::__zz_cib_Helper::__zz_cib_from_handle(";
    }

    bool byValueObj = (genericProxy && resolvedType && returnType() && !isRetSmartPtr && isByValue(returnType()));
    if (byValueObj || (returnType() && isByRef(returnType())))
      stm << "*";
  }
  stm << "__zz_cib_get_mtable_helper().invoke<__zz_cib_proc, ";
  if (genericProxy)
  {
    stm << "__zz_cib_GenericProxy::__zz_cib_methodid::";
  }
  else
  {
    stm << "__zz_cib_methodid::";
  }
  stm << capiName << ">(\n";
  if (genericProxy)
    stm << ++indentation << "__zz_cib_proxy";
  else
    stm << ++indentation << "__zz_cib_h_";
  if (hasParams())
  {
    stm << ",\n";
    stm << indentation;
    emitArgsForCall(stm, helper, cibParams, genericProxy ? kPurposeGenericProxy : kPurposeGeneric);
  }
  if (resolvedType && !genericProxy)
    stm << ')';
  if (retTypeIsUniquePtr)
    stm << ')';
  stm << ");\n";
  --indentation;
  stm << --indentation << "}\n";
}

void CibFunctionHelper::emitProcType(std::ostream&    stm,
                                     const CibHelper& helper,
                                     const CibParams& cibParams,
                                     bool             forGenericProxy,
                                     CppIndent        indentation /* = CppIndent */) const
{
  stm << indentation;
  stm << "using __zz_cib_proc = ";
  emitCAPIReturnType(stm, helper, forGenericProxy);
  stm << " (__zz_cib_decl *) (";
  if (!isStatic() && (isDestructor() || isMethod() || isTypeConverter()))
  {
    if (isConst())
      stm << "const ";
    if (forGenericProxy)
      stm << "__zz_cib_PROXY*";
    else
      stm << "__zz_cib_TYPE*";
    if (hasParams())
      stm << ", ";
  }
  else if (isConstructor() && getOwner()->needsNoProxy())
  {
    if (isConst())
      stm << "const ";
    stm << "__zz_cib_TYPE*";
    if (hasParams())
      stm << ", ";
  }
  else if (isConstructor() && !forGenericProxy && getOwner()->needsGenericProxyDefinition())
  {
    stm << getOwner()->longName() << "*, const __zz_cib_MethodTable*";
    if (hasParams())
      stm << ", ";
  }
  emitArgsForDecl(stm, helper, true, forGenericProxy ? kPurposeGenericProxyProcType : kPurposeProxyProcType);
  stm << ");\n";
}

void CibFunctionHelper::emitCAPIReturnType(std::ostream&    stm,
                                           const CibHelper& helper,
                                           bool             forGenericProxy,
                                           CppIndent        indentation /* = CppIndent */) const
{
  stm << indentation;
  if (isConstructor())
    stm << "__zz_cib_TYPE*";
  else if (isDestructor())
    stm << "void";
  else
    emitType(
      stm, returnType(), getOwner(), helper, forGenericProxy ? kPurposeGenericProxyProcType : kPurposeProxyProcType);
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

const CppObj* CibCompound::resolveTypeName(const std::string& typeName, const CibHelper& helper) const
{
  auto itr = typeNameToCibCppObj_.find(typeName);
  if (itr != typeNameToCibCppObj_.end())
    return itr->second;

  const CppObj* resolvedType = helper.getCppObjFromTypeName(typeName, this);
  if (resolvedType == nullptr)
  {
    forEachParent(CppAccessType::kPublic, [&](const CibCompound* parent) {
      resolvedType = parent->resolveTypeName(typeName, helper);
      return resolvedType == nullptr;
    });
  }

  typeNameToCibCppObj_[typeName] = resolvedType;
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

void CibCompound::emitUserHeader(const CibHelper& helper, const CibParams& cibParams) const
{
  if (!isCppFile(this))
    return;

  bfs::path usrIncPath = cibParams.outputPath / name().substr(cibParams.inputPath.string().length());
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
    emitDecl(mem, stm, helper, cibParams);
    if (isCompound(mem))
      stm << '\n';
  }

  if (!headerGuardEndIf)
    stm << "#include \"" << implIncludeName(cibParams) << "-postdef.h\"\n";
}

void CibCompound::emitPredefHeader(const CibHelper& helper, const CibParams& cibParams) const
{
  if (!isCppFile(this))
    return;

  auto implPath = cibParams.outputPath / (getImplPath(cibParams) + "-predef.h");
  bfs::create_directories(implPath.parent_path());
  std::ofstream stm(implPath.string(), std::ios_base::out);

  stm << "#include \"__zz_cib_internal/__zz_cib_" << cibParams.moduleName << "-class-internal-def.h\"\n";

  emitHelperDecl(stm, helper, cibParams);
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
      std::set<const CppObj*> dependencies;
      templCompound->collectTemplateInstanceTypeDependencies(helper, dependencies);
      auto fwdDecls = extractFwdDeclarations(dependencies);
      auto asts     = collectAstDependencies(dependencies);
      asts.insert(getFileAstObj(this));
      auto headers = collectHeaderDependencies(asts, cibParams.inputPath);
      if (!headers.empty())
      {
        tmplStm << '\n';
        for (const auto& header : headers)
          tmplStm << "#include \"" << header << "\"\n";
      }
      for (auto cppObj : fwdDecls)
        gCppWriter.emit(cppObj, tmplStm);
      templCompound->emitHelperDecl(tmplStm, helper, cibParams);
      templCompound->emitDecl(tmplStm, helper, cibParams);
      templCompound->emitHelperDefn(tmplStm, helper, cibParams, cibIdMgr);
      templCompound->emitDefn(tmplStm, true, helper, cibParams, cibIdMgr);
      templCompound->emitDependentTemplateSpecilizationHeaders(tmplStm);
      if (!templCompound->isCompositeTemplate())
        stm << "#include \"" << specializationFilename << "\"\n";
    });
  });
}

void CibCompound::emitDependentTemplateSpecilizationHeaders(std::ostream& stm) const
{
  for (auto* usedAsArgIn : usedInTemplArg)
  {
    auto headerName = usedAsArgIn->nsName() + ".h";
    assert(headerName.find('<') == std::string::npos);
    stm << "#include \"" << headerName << "\"\n";
  }
}

void CibCompound::emitImplHeader(const CibHelper& helper, const CibParams& cibParams, const CibIdMgr& cibIdMgr) const
{
  if (!isCppFile(this))
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
                [&](const CibCompound* compound) { compound->emitDependentTemplateSpecilizationHeaders(stm); });
  emitDependentTemplateSpecilizationHeaders(stm);
}

void CibCompound::emitCommonExpHeaders(std::ostream& stm, const CibParams& cibParams)
{
  stm << "#include \"__zz_cib_internal/__zz_cib_" << cibParams.moduleName << "-def.h\"\n";
  stm << "#include \"__zz_cib_internal/__zz_cib_" << cibParams.moduleName << "-ids.h\"\n";
  stm << "#include \"__zz_cib_internal/__zz_cib_" << cibParams.moduleName << "-local-proxy-mgr.h\"\n";
  stm << "#include \"__zz_cib_internal/__zz_cib_" << cibParams.moduleName << "-remote-proxy-mgr.h\"\n";
  stm << "#include \"__zz_cib_internal/__zz_cib_" << cibParams.moduleName << "-mtable-helper.h\"\n";
  stm << "#include \"__zz_cib_internal/__zz_cib_" << cibParams.moduleName << "-handle-helper.h\"\n";
}

std::ostream& CibCompound::emitWrappingNsNamespacesForGlueCode(std::ostream&    stm,
                                                               const CibParams& cibParams,
                                                               CppIndent        indentation) const
{
  if (outer() == nullptr || isCppFile(outer()))
  {
    stm << "namespace __zz_cib_ {\n";
  }
  else
  {
    outer()->emitWrappingNsNamespacesForGlueCode(stm, cibParams, indentation);
    if (isNamespace(outer()))
    {
      stm << "using namespace " << outer()->longName() << ";\n";
    }
  }
  stm << "namespace " << nsName() << " {\n";

  return stm;
}

std::ostream& CibCompound::emitWrappingNamespacesForProxyDefn(std::ostream&    stm,
                                                              const CibParams& cibParams,
                                                              CppIndent        indentation) const
{
  if (outer())
    outer()->emitWrappingNamespacesForProxyDefn(stm, cibParams, indentation);
  if (isNamespace(this))
    stm << "namespace " << nsName() << " {\n";

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
  auto cibIdData = cibIdMgr.getCibIdData(longName() + "::__zz_cib_GenericProxy");
  if (needsGenericProxyDefinition() && cibIdData)
  {
    emitWrappingNsNamespacesForGlueCode(stm, cibParams, indentation);
    // stm << indentation << wrappingNsNamespaceDeclarations(cibParams) << " namespace " << nsName() << " {\n";
    stm << indentation++ << "struct __zz_cib_Delegator {\n";
    stm << indentation << "using __zz_cib_Delegatee = " << longName() << ";\n";

    for (auto func : allVirtuals_)
      func.emitCAPIDefn(stm,
                        helper,
                        cibParams,
                        this,
                        cibIdData->getMethodCApiName(func.signature(helper)),
                        kPurposeProxyCApi,
                        indentation);
    CibFunctionHelper func = dtor();
    func.emitCAPIDefn(stm,
                      helper,
                      cibParams,
                      this,
                      cibIdData->getMethodCApiName(func.signature(helper)),
                      kPurposeProxyCApi,
                      indentation);
    stm << --indentation << "};\n";
    stm << indentation << "}" << closingBracesForWrappingNsNamespaces() << "\n\n";
    emitMethodTableGetterDefn(stm, helper, cibParams, cibIdMgr, true, indentation);
    stm << '\n';
    emitWrappingNsNamespacesForGlueCode(stm, cibParams, indentation);
    // stm << indentation << wrappingNsNamespaceDeclarations(cibParams) << " namespace " << nsName() << " {\n";
    stm << indentation << "const __zz_cib_MethodTable* "
        << "__zz_cib_Helper::__zz_cib_get_proxy_method_table() {\n";
    ++indentation;
    stm << indentation << "return __zz_cib_GetMethodTable();\n";
    --indentation;
    stm << indentation << "}\n";
    stm << indentation << '}' << closingBracesForWrappingNsNamespaces() << "\n\n";
  }
}

void CibCompound::emitImplSource(const CibHelper& helper, const CibParams& cibParams, const CibIdMgr& cibIdMgr) const
{
  if (!isCppFile(this))
    return;
  bfs::path headerPath = name();
  auto      headerName = name().substr(cibParams.inputPath.string().length());
  bfs::path usrSrcPath = (cibParams.outputPath / headerName).replace_extension(".cpp");
  {
    std::ofstream stm(usrSrcPath.string(), std::ios_base::out);
    emitFacadeAndInterfaceDependecyHeaders(stm, helper, cibParams, cibIdMgr, true, CppIndent());
    forEachNested(CppAccessType::kPublic, [&](const CibCompound* compound) {
      if (!compound->isTemplated() && (!compound->isInline() || compound->isShared()))
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

void CibCompound::collectTemplateInstanceTypeDependencies(const CibHelper&         helper,
                                                          std::set<const CppObj*>& cppObjs) const
{
  if (!isTemplateInstance())
    return;
  // TODO addDependency is duplicated in another function.
  // Remove duplication, may be by having dependecy collector as another class.
  auto addDependency = [&](const std::string& typeName) {
    auto* resolvedCppObj = resolveTypeName(typeName, helper);
    if (!resolvedCppObj && helper.isSmartPtr(typeName))
      resolvedCppObj = resolveTypeName(helper.convertSmartPtr(typeName), helper);
    if (resolvedCppObj)
      cppObjs.insert(resolvedCppObj);
  };

  collectTypeDependencies(helper, cppObjs);
  for (auto& arg : templateArgValues_)
  {
    if (arg.second->objType_ == CppExpr::kObjectType)
      continue;
    const auto* cppVarType = static_cast<const CppVarType*>(arg.second.get());
    addDependency(baseType(cppVarType));
  }
}

void CibCompound::collectTemplateInstancesTypeDependencies(const CibHelper&         helper,
                                                           std::set<const CppObj*>& cppObjs) const
{
  if (!isTemplated())
    return;
  forEachTemplateInstance(
    [&](CibCompound* tmplInstance) { tmplInstance->collectTemplateInstanceTypeDependencies(helper, cppObjs); });
}

void CibCompound::collectTypeDependencies(const CibHelper& helper, std::set<const CppObj*>& cppObjs) const
{
  // TODO: We still would like to collect dependencies that are not related to template arguments.
  if (isTemplated())
    return;

  auto addDependency = [&](const std::string& typeName) {
    auto* resolvedCppObj = resolveTypeName(typeName, helper);
    if (!resolvedCppObj && helper.isSmartPtr(typeName))
      resolvedCppObj = resolveTypeName(helper.convertSmartPtr(typeName), helper);
    if (resolvedCppObj)
      cppObjs.insert(resolvedCppObj);
  };

  for (const auto& mem : members())
  {
    if (!isPublic(mem))
      continue;

    if (CibCompoundEPtr compound = mem)
    {
      compound->collectTypeDependencies(helper, cppObjs);
      compound->collectTemplateInstancesTypeDependencies(helper, cppObjs);
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
  }
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
                                                             const bfs::path&                    dependentPath)
{
  std::set<std::string> headers;
  for (auto compound : compoundObjs)
  {
    assert(isCppFile(compound));
    headers.emplace(bfs::relative(compound->name(), dependentPath).string());
  }
  return headers;
}

bfs::path CibCompound::getImplDir(const CibParams& cibParams) const
{
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
                           CppIndent        indentation /* = CppIndent */) const
{
  if (isFunctionLike(obj))
  {
    CibFunctionHelper func = obj;
    if (objNeedingBridge_.count(obj) || func.isDeleted())
      func.emitOrigDecl(stm, helper, cibParams, kPurposeProxyDecl, indentation);
    else if (func.isTemplated())
      gCppWriter.emit(obj, stm);
  }
  else if (isCompound(obj))
  {
    auto compound = static_cast<const CibCompound*>(obj);
    compound->emitDecl(stm, helper, cibParams, indentation);
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
                           CppIndent        indentation /* = CppIndent */) const
{
  if (isInline() && (!isShared() || isTemplated()))
  {
    gCppWriter.emit(this, stm, indentation);
    return;
  }
  if (isNamespaceLike(this))
  {
    if (isTemplateInstance())
    {
      stm << wrappingNamespaceDeclarations(cibParams) << '\n';
      stm << indentation << "template<>\n";
    }
    stm << indentation << compoundType() << ' ';
    stm << name();
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

  if (isClassLike(this) && needsBridging() && !moveCtor() && !needsNoProxy())
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
      emitDecl(mem.get(), stm, helper, cibParams, indentation);
      if (isFunctionLike(mem) && objNeedingBridge_.count(mem.get()))
        needsClientDefinition_.emplace_back(mem);
    }
    if (lastUsedConditional)
      gCppWriter.emitEndIf(stm);
  }

  if (isClassLike(this))
  {
    if (needsBridging() && !needsNoProxy())
    {
      // Everything below this is for glue code
      stm << '\n';
      stm << --indentation << "private:\n";
      stm << ++indentation << "__ZZ_CIB_CLASS_INTERNAL_DEF(" << name() << ", " << fullNsName() << ");\n";
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
  if (!isShared() || isEmpty() || needsNoProxy())
    return;
  stm << indentation << longName() << "* __zz_cib_" << longNsName()
      << "::__zz_cib_Helper::__zz_cib_create_proxy(__zz_cib_HANDLE* h) {\n";
  ++indentation;
  if (!cibParams.noRtti)
  {
    stm << indentation << "switch(__zz_cib_get_class_id(&h)) {\n";
    auto emitCaseStmt = [&](const CibCompound* compound) {
      auto cibIdData = cibIdMgr.getCibIdData(compound->longName());
      if (cibIdData)
      {
        stm << indentation << "case __zz_cib_::" << compound->fullNsName() << "::__zz_cib_classid:\n";
        stm << ++indentation << "return __zz_cib_" << compound->longNsName()
            << "::__zz_cib_Helper::__zz_cib_from_handle(h);\n";
        --indentation;
      }
    };
    forEachDescendent(CppAccessType::kPublic, [&](const CibCompound* derived) { emitCaseStmt(derived); });
    if (!isAbstract())
    {
      auto cibIdData = cibIdMgr.getCibIdData(longName());
      if (cibIdData)
      {
        stm << indentation << "case __zz_cib_::" << fullNsName() << "::__zz_cib_classid:\n";
        stm << ++indentation << "return new " << longName() << "(h);\n";
        --indentation;
      }
    }
    stm << indentation << "default: break;\n";
    stm << indentation << "}\n";
  }

  stm << indentation << "return ::__zz_cib_" << longNsName() << "::__zz_cib_Generic::" << name()
      << "::__zz_cib_from_handle(h);\n";
  stm << --indentation << "}\n";
}

void CibCompound::emitFromHandleDecl(std::ostream& stm, const CibParams& cibParams, CppIndent indentation) const
{
  if (!isFacadeLike() && isAbstract())
    return;
  stm << indentation << "static " << longName() << "* __zz_cib_create_proxy(__zz_cib_HANDLE* h)";
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
    stm << indentation << "return new " << longName() << "(h);\n";
    --indentation;
    stm << indentation << "}\n";
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
      if (!func.isVirtual() && !func.isDestructor())
        continue;
      auto sig = func.isDestructor() ? std::string("__zz_cib_dtor") : func.signature(helper);
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
        unresolvedPureVirtSigs.erase(sig);
        auto itr = virtSigToFunc.insert(std::make_pair(std::move(sig), func));
        if (itr.second == false)
          itr.first->second = func;
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
  if (compound->isTemplateInstance())
    return shallAddCopyCtor(compound->templateClass());
  for (const auto& ctor : compound->ctors())
  {
    if (!isPublic(ctor))
      return false;
  }
  return (!compound->cantHaveDefaultCopyCtor() && !compound->hasCopyCtor() && !compound->hasMoveCtor()
          && !compound->isAbstract() && compound->isCopyCtorCallable());
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
    forEachTemplateInstance([&](CibCompound* templateInstace) { templateInstace->identifyMethodsToBridge(helper); });
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
      if (func.hasAttr(kFriend))
        continue;
      if (func.isConstructorLike() && isAbstract() && !needsGenericProxyDefinition())
        continue;
      if (func.isPureVirtual() && !isFacadeLike() && !isInterfaceLike() && !isAncestorFacadeLike()
          && !func.isDestructor())
        continue;
      if (func.hasVariadicParam())
        continue;
      if (isProtected(mem))
        setHasProtectedMethods();

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
    std::unordered_set<std::string> virtSigs;
    for (auto obj : objNeedingBridge_)
    {
      CibFunctionHelper func(obj);
      if (func.isFunction() && func.isVirtual())
        virtSigs.insert(func.signature(helper));
    }
    for (auto func : allVirtuals_)
    {
      if ((objNeedingBridge_.count(func) == 0))
      {
        if (virtSigs.count(func.signature(helper)) == 0)
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

void CibCompound::emitHelperDecl(std::ostream&    stm,
                                 const CibHelper& helper,
                                 const CibParams& cibParams,
                                 CppIndent        indentation /* = CppIndent */) const
{
  if (isNamespaceLike(this) && !needsBridging_.empty())
  {
    stm << '\n'; // Start in new line.
    if (!wrappingNsNamespaceDeclarations(cibParams).empty())
    {
      // emitWrappingNsNamespacesForGlueCode(stm, cibParams, indentation);
      stm << indentation << wrappingNsNamespaceDeclarations(cibParams);
      stm << " namespace " << nsName() << " {\n";
    }
    stm << indentation << "class __zz_cib_Helper;\n";
    stm << indentation << "struct __zz_cib_Delegator;\n";
    stm << indentation << "}";
    if (!wrappingNsNamespaceDeclarations(cibParams).empty())
      stm << indentation << closingBracesForWrappingNsNamespaces() << '\n';
  }

  for (auto& mem : members())
  {
    if (isNamespaceLike(mem))
      static_cast<const CibCompound*>(mem.get())->emitHelperDecl(stm, helper, cibParams);
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

  stm << indentation << "static ";
  func.emitCAPIReturnType(stm, helper, false);
  stm << ' ' << cibIdData->getMethodCApiName(func.signature(helper)) << "(";
  if (isClassLike(this) && !func.isStatic() && (!func.isConstructor() || needsNoProxy()))
  {
    if (func.isConst())
      stm << "const ";
    stm << "__zz_cib_TYPE* __zz_cib_obj";
    if (func.hasParams())
      stm << ", ";
  }
  else if (needsGenericProxyDefinition() && func.isConstructor())
  {
    stm << longName() << "* __zz_cib_proxy";
    if (func.hasParams())
      stm << ", ";
  }
  func.emitArgsForDecl(stm, helper, true, kPurposeProxyProcType);
  stm << ") {\n";
  ++indentation;
  if (func.isDestructor())
  {
    stm << indentation << "if (__zz_cib_obj) {\n";
    ++indentation;
  }
  func.emitProcType(stm, helper, cibParams, false, indentation);
  stm << indentation++ << "return instance().invoke<__zz_cib_proc, __zz_cib_methodid::"
      << cibIdData->getMethodCApiName(func.signature(helper)) << ">(";
  if (isClassLike(this) && !func.isStatic() && (!func.isConstructor() || needsNoProxy()))
  {
    stm << '\n' << indentation << "__zz_cib_obj";
    if (func.hasParams())
      stm << ",";
  }
  else if (needsGenericProxyDefinition() && func.isConstructor())
  {
    stm << '\n' << indentation << "__zz_cib_proxy, __zz_cib_get_proxy_method_table()";
    if (func.hasParams())
      stm << ",";
  }
  stm << '\n' << indentation;
  func.emitArgsForCall(stm, helper, cibParams, kPurposeInvokeHelper);
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
  stm << indentation << "using __zz_cib_proxy_deleter    = void (__zz_cib_decl *) (_ProxyClass* proxy);\n";

  stm << indentation
      << "static _ProxyClass* __zz_cib_find_proxy(__zz_cib_HANDLE* obj, __zz_cib_client_id clientId) {\n";
  stm << indentation
      << "  using __zz_cib_find_proxyProc = _ProxyClass* (__zz_cib_decl *)(__zz_cib_HANDLE*, __zz_cib_client_id);\n";
  stm
    << indentation
    << "  return instance().invoke<__zz_cib_find_proxyProc, __zz_cib_methodid::__zz_cib_find_proxy>(obj, clientId);\n";
  stm << indentation << "}\n";

  stm << indentation
      << "static void __zz_cib_register_proxy(__zz_cib_HANDLE* obj, __zz_cib_client_id clientId, _ProxyClass* proxy, "
         "__zz_cib_proxy_deleter deleter) {\n";
  stm << indentation
      << "  using __zz_cib_register_proxyProc = void (__zz_cib_decl *)(__zz_cib_HANDLE*, __zz_cib_client_id, "
         "_ProxyClass*, __zz_cib_proxy_deleter);\n";
  stm << indentation
      << "  return instance().invoke<__zz_cib_register_proxyProc, __zz_cib_methodid::__zz_cib_register_proxy>(obj, "
         "clientId, proxy, deleter);\n";
  stm << indentation << "}\n";

  stm << indentation << "static void __zz_cib_unregister_proxy(__zz_cib_HANDLE* obj, __zz_cib_client_id clientId) {\n";
  stm << indentation
      << "  using __zz_cib_unregister_proxyProc = void (__zz_cib_decl *)(__zz_cib_HANDLE*, __zz_cib_client_id);\n";
  stm << indentation
      << "  return instance().invoke<__zz_cib_unregister_proxyProc, __zz_cib_methodid::__zz_cib_unregister_proxy>(obj, "
         "clientId);\n";
  stm << indentation << "}\n";

  stm << indentation << "static void __zz_cib_delete_only_proxy(_ProxyClass* obj) {\n";
  stm << indentation << "  obj->__zz_cib_h_ = nullptr;\n";
  stm << indentation << "  delete obj;\n";
  stm << indentation << "}\n";
}

void CibCompound::emitHelperDefnStart(std::ostream&    stm,
                                      const CibParams& cibParams,
                                      CppIndent        indentation /* = CppIndent */) const
{
  emitWrappingNsNamespacesForGlueCode(stm, cibParams, indentation);
  // stm << indentation << wrappingNsNamespaceDeclarations(cibParams) << " namespace " << nsName() << " {\n";
  stm << indentation << "class __zz_cib_Helper : public __zz_cib_MethodTableHelper";
  if (!isClassLike(this))
  {
    stm << " {\n";
    stm << indentation++ << "public:\n";
  }
  else
  {
    std::string proxyMgr;
    if (!needsNoProxy())
    {
      if (isClassLike(this) && isShared())
        proxyMgr = cibParams.moduleName
                   + (cibParams.libraryManagedProxies ? "::__zz_cib_remote_proxy_mgr<_ProxyClass, __zz_cib_Helper>"
                                                      : "::__zz_cib_local_proxy_mgr<_ProxyClass>");

      std::string handleHelperParentName = "__zz_cib_HandleHelper<" + longName() + ", __zz_cib_Helper>";
      stm << '\n' << ++indentation << ", public " << handleHelperParentName << " {\n";
      stm << --indentation << "private:\n";
      stm << ++indentation << "using __zz_cib_TYPE = __zz_cib_HANDLE;\n";
      stm << indentation << "friend class " << handleHelperParentName << ";\n";
      if (needsGenericProxyDefinition())
        stm << indentation << "static const __zz_cib_MethodTable* __zz_cib_get_proxy_method_table();\n";
    }
    else
    {
      stm << " {\n";
      stm << indentation++ << "private:\n";
      stm << indentation << "using __zz_cib_TYPE = " << longName() << ";\n";
    }

    stm << indentation << "using _ProxyClass = " << longName() << ";\n";
    stm << indentation << "friend " << compoundType() << ' ' << longName() << ";\n";
    if (!proxyMgr.empty())
      stm << indentation << proxyMgr << " proxyMgr;\n";
    stm << '\n'; // Start in new line.
  }

  stm << indentation << "__zz_cib_Helper()\n";
  stm << ++indentation << ": __zz_cib_MethodTableHelper(\n";
  stm << ++indentation << "__zz_cib_" << cibParams.moduleName << "_GetMethodTable(__zz_cib_classid))\n";
  --indentation;
  stm << --indentation << "{}\n";
  stm << indentation << "static __zz_cib_Helper& instance() {\n";
  stm << ++indentation << "static __zz_cib_Helper helper;\n";
  stm << indentation << "return helper;\n";
  stm << --indentation << "}\n";
  stm << '\n'; // Start in new line.
}

void CibCompound::emitCastingHelpers(std::ostream&    stm,
                                     const CibParams& cibParams,
                                     const CibIdData* cibIdData,
                                     CppIndent        indentation /* = CppIndent */) const
{
  forEachAncestor(CppAccessType::kPublic, [&](const CibCompound* pubParent) {
    if (pubParent->isShared() || !pubParent->isEmpty())
    {
      auto castProcName = castToBaseName(pubParent, cibParams);
      auto capiName     = cibIdData->getMethodCApiName(castProcName);
      stm << indentation << "static __zz_cib_HANDLE* " << capiName << "(__zz_cib_HANDLE* __zz_cib_obj) {\n";
      stm << ++indentation << "using " << castProcName
          << "Proc = __zz_cib_HANDLE* (__zz_cib_decl *) (__zz_cib_HANDLE* h);\n";
      stm << indentation << "return instance().invoke<" << castProcName << "Proc, __zz_cib_methodid::" << capiName
          << ">(__zz_cib_obj);\n";
      stm << --indentation << "}\n";
    }
    return false;
  });
}

void CibCompound::emitFacadeHelpers(std::ostream&    stm,
                                    const CibIdData* cibIdData,
                                    CppIndent        indentation /* = CppIndent */) const
{
  stm << indentation << "static std::uint32_t __zz_cib_get_class_id(__zz_cib_HANDLE** __zz_cib_obj) {\n";
  stm << ++indentation
      << "using __zz_cib_get_class_idProc = std::uint32_t (__zz_cib_decl *) "
         "(__zz_cib_HANDLE**);\n";
  stm << indentation << "return instance().invoke<__zz_cib_get_class_idProc, __zz_cib_methodid::"
      << cibIdData->getMethodCApiName("__zz_cib_get_class_id") << ">(__zz_cib_obj);\n";
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
  stm << --indentation << "public:\n";
  if (!isAbstract())
  {
    stm << ++indentation << "static " << longName() << " __zz_cib_obj_from_handle(__zz_cib_HANDLE* h) {\n";
    stm << ++indentation << "return " << longName() << "(h);\n";
    stm << --indentation << "}\n";
    --indentation;
  }
  stm << ++indentation << "static __zz_cib_HANDLE*& __zz_cib_get_handle(" << longName() << "* __zz_cib_obj) {\n";
  stm << ++indentation << "return __zz_cib_obj->__zz_cib_h_;\n";
  stm << --indentation << "}\n";
  stm << indentation << "static __zz_cib_HANDLE* const& __zz_cib_get_handle(const " << longName()
      << "* __zz_cib_obj) {\n";
  stm << ++indentation << "return __zz_cib_obj->__zz_cib_h_;\n";
  stm << --indentation << "}\n";
  stm << indentation << "static __zz_cib_HANDLE* __zz_cib_release_handle(" << longName() << "* __zz_cib_obj) {\n";
  stm << ++indentation << "if (__zz_cib_obj->__zz_cib_h_ == nullptr) return nullptr;\n";
  if (needsProxyManager())
    stm << indentation << "__zz_cib_remove_proxy(__zz_cib_obj->__zz_cib_h_);\n";
  stm << indentation << "auto h = __zz_cib_obj->__zz_cib_h_;\n";
  stm << indentation << "__zz_cib_obj->__zz_cib_h_ = nullptr;\n";
  forEachParent(CppAccessType::kPublic, [&stm, &indentation](const CibCompound* baseCompound) {
    if (baseCompound->needsBridging())
    {
      stm << indentation << "__zz_cib_" << baseCompound->longNsName()
          << "::__zz_cib_Helper::__zz_cib_release_handle(__zz_cib_obj);\n";
    }
    return true;
  });
  stm << indentation << "return h;\n";
  stm << --indentation << "}\n";
  if (needsGenericProxyDefinition())
  {
    stm << indentation << "static void __zz_cib_release_proxy(" << longName() << "* __zz_cib_obj) {\n";
    ++indentation;
    stm << indentation << "if (__zz_cib_obj->__zz_cib_h_) {\n";
    ++indentation;
    stm << indentation << "using __zz_cib_release_proxyProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*);\n";
    stm << indentation << "return instance().invoke<__zz_cib_release_proxyProc, __zz_cib_methodid::"
        << cibIdData->getMethodCApiName("__zz_cib_release_proxy") << ">(\n";
    stm << indentation << "__zz_cib_obj->__zz_cib_h_);\n";
    stm << --indentation << "}\n";
    stm << --indentation << "}\n";
  }

  if (needsProxyManager())
  {
    stm << indentation << "static _ProxyClass* __zz_cib_get_or_create_proxy(__zz_cib_HANDLE* h) {\n";
    stm << ++indentation << "auto&  dis   = instance();\n";
    stm << indentation << "auto* proxy = dis.proxyMgr.findProxy(h);\n";
    if (!isAbstract() || isFacadeLike())
    {
      stm << indentation << "if (proxy == nullptr)\n";
      stm << ++indentation << "proxy = __zz_cib_create_proxy(h);\n";
      --indentation;
    }
    stm << indentation << "return proxy;\n";
    stm << --indentation << "}\n";
    stm << indentation << "static void __zz_cib_add_proxy(_ProxyClass* __zz_cib_obj, __zz_cib_HANDLE* h) {\n";
    stm << ++indentation << "auto& dis = instance();\n";
    stm << indentation << "dis.proxyMgr.addProxy(__zz_cib_obj, h);\n";
    stm << --indentation << "}\n";
    stm << indentation << "static void __zz_cib_remove_proxy(__zz_cib_HANDLE* h) {\n";
    stm << ++indentation << "auto& dis = instance();\n";
    stm << indentation << "  dis.proxyMgr.removeProxy(h);\n";
    stm << --indentation << "}\n";
  }
  else if (isFacadeLike() || !isAbstract())
  {
    stm << indentation << "static _ProxyClass* __zz_cib_get_or_create_proxy(__zz_cib_HANDLE* h) {\n";
    stm << ++indentation << "return __zz_cib_create_proxy(h);\n";
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
  if (isShared() && cibParams.libraryManagedProxies)
    emitRemoteProxyMethods(stm, indentation);
  emitHelperDefnEnd(stm, indentation);
}

void CibCompound::emitHelperDefnEnd(std::ostream& stm, CppIndent indentation) const
{
  stm << --indentation << "};\n";
  stm << indentation << closingBracesForWrappingNsNamespaces() << "}\n";
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
  stm << fullName(this) << "::" << ctorName() << "(__zz_cib_::__zz_cib_HANDLE* h)\n";
  ++indentation;
  char sep = ':';
  forEachParent(CppAccessType::kPublic, [&](const CibCompound* pubParent) {
    if (pubParent->isShared() || !pubParent->isEmpty())
    {
      auto capiName = cibIdData->getMethodCApiName(castToBaseName(pubParent, cibParams));
      stm << indentation << sep << " ::" << fullName(pubParent) << "(__zz_cib_" << longNsName()
          << "::__zz_cib_Helper::" << capiName << "(h))\n";
      sep = ',';
    }
    return true;
  });
  stm << indentation << sep << " __zz_cib_h_(h)\n";
  stm << --indentation << '{';
  if (needsProxyManager())
  {
    stm << '\n'
        << ++indentation << "__zz_cib_" << longNsName()
        << "::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);\n";
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
  if (asInline)
    stm << "inline ";
  stm << fullName(this) << "::" << ctorName() << '(' << name() << "&& rhs)\n";
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
  if (needsProxyManager())
  {
    stm << indentation << "__zz_cib_" << longNsName() << "::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);\n";
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
    // Emit the ctor to construct from __zz_cib_HANDLE.
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

  emitWrappingNsNamespacesForGlueCode(stm, cibParams, indentation);
  // stm << indentation << wrappingNsNamespaceDeclarations(cibParams) << " namespace " << nsName() << " {\n";
  if (needsDelagatorClass())
    stm << "struct __zz_cib_Delegator;\n";
  stm << "namespace __zz_cib_GenericProxy {\n";
  stm << indentation << "class " << name() << " : public " << longName() << " {\n";
  stm << ++indentation << "__zz_cib_PROXY* __zz_cib_proxy;\n";
  stm << indentation << "const __zz_cib_MethodTableHelper __zz_cib_mtbl_helper;\n\n";
  stm << indentation << "const __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() const {\n";
  stm << ++indentation << "return __zz_cib_mtbl_helper;\n";
  stm << --indentation << "}\n";
  if (needsDelagatorClass())
    stm << indentation << "friend struct __zz_cib_" << longNsName() << "::__zz_cib_Delegator;\n";
  --indentation;
  stm << indentation << "public:\n";
  stm << ++indentation << "__ZZ_CIB_DELEGATOR_MEMBERS(" << name() << ", " << longName() << ")\n\n";
  auto cibIdData = cibIdMgr.getCibIdData(longName() + "::__zz_cib_GenericProxy");
  for (auto ctor : ctors())
  {
    CibFunctionHelper func = ctor;
    if (!isPrivate(ctor))
    {
      func.emitGenericProxyDefn(
        stm, helper, cibParams, cibIdData->getMethodCApiName(func.signature(helper)), indentation);
    }
  }
  for (auto func : allVirtuals_)
  {
    if (!func.isFinal())
    {
      func.emitGenericProxyDefn(
        stm, helper, cibParams, cibIdData->getMethodCApiName(func.signature(helper)), indentation);
    }
  }
  CibFunctionHelper func = dtor();
  func.emitGenericProxyDefn(stm, helper, cibParams, cibIdData->getMethodCApiName(func.signature(helper)), indentation);
  stm << indentation << "void __zz_cib_release_proxy() { __zz_cib_proxy = nullptr; }\n";
  --indentation;
  stm << indentation << "};\n";
  stm << indentation << closingBracesForWrappingNsNamespaces() << "}}\n";
}

void CibCompound::emitProtectedAccessor(std::ostream&    stm,
                                        const CibHelper& helper,
                                        const CibParams& cibParams,
                                        const CibIdMgr&  cibIdMgr,
                                        CppIndent        indentation) const
{
  if (!needsDelagatorClass())
    return;

  emitWrappingNsNamespacesForGlueCode(stm, cibParams, indentation);
  // stm << indentation << wrappingNsNamespaceDeclarations(cibParams) << " namespace " << nsName() << " {\n";
  stm << "struct __zz_cib_Delegator;\n";
  stm << "namespace __zz_cib_ProtectedAccessor {\n";
  stm << indentation << "class " << name() << " : public " << longName() << " {\n";
  stm << ++indentation << "friend struct __zz_cib_" << longNsName() << "::__zz_cib_Delegator;\n";
  stm << --indentation << "public:\n";
  stm << ++indentation << "using " << longName() << "::" << name() << ";\n";
  stm << --indentation << "};\n";
  stm << indentation << closingBracesForWrappingNsNamespaces() << "}}\n";
}

void CibCompound::emitGenericDefn(std::ostream&    stm,
                                  const CibHelper& helper,
                                  const CibParams& cibParams,
                                  const CibIdMgr&  cibIdMgr,
                                  CppIndent        indentation) const
{
  if (!isFacadeLike())
    return;

  emitWrappingNsNamespacesForGlueCode(stm, cibParams, indentation);
  // stm << indentation << wrappingNsNamespaceDeclarations(cibParams) << " namespace " << nsName()
  stm << "namespace __zz_cib_Generic {\n";
  stm << indentation << "class " << name() << " : public " << longName() << " {\n";
  stm << ++indentation << "__zz_cib_HANDLE* __zz_cib_h_;\n\n";
  stm << indentation << "using __zz_cib_TYPE = __zz_cib_HANDLE;\n";
  stm << indentation << "static __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() {\n";
  stm << ++indentation << "static __zz_cib_MethodTableHelper mtableHelper(__zz_cib_" << cibParams.moduleName
      << "_GetMethodTable(\n";
  stm << ++indentation << "__zz_cib_classid));\n";
  stm << --indentation << "return mtableHelper;\n";
  stm << --indentation << "}\n";
  stm << indentation << "explicit " << name() << "(__zz_cib_HANDLE* h) : " << longName() << "(h), __zz_cib_h_(h) {}\n";
  stm << --indentation << "public:\n";
  stm << ++indentation << "static " << longName() << "* __zz_cib_from_handle(__zz_cib_HANDLE* h) {\n";
  stm << ++indentation << "return new " << name() << "(h);\n";
  stm << --indentation << "}\n";

  auto* cibIdData = cibIdMgr.getCibIdData(longName());
  for (auto func : allVirtuals_)
  {
    if (!func.isFinal())
      func.emitGenericDefn(
        stm, helper, cibParams, cibIdData->getMethodCApiName(func.signature(helper)), kPurposeGeneric, indentation);
  }
  CibFunctionHelper func = dtor();
  func.emitGenericDefn(
    stm, helper, cibParams, cibIdData->getMethodCApiName(func.signature(helper)), kPurposeGeneric, indentation);
  --indentation;
  stm << indentation << "};\n";
  stm << indentation << closingBracesForWrappingNsNamespaces() << "}}\n";
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
  collectTypeDependencies(helper, dependencies);
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
  if (!dependencies.empty())
  {
    auto asts = collectAstDependencies(dependencies);
    asts.insert(getFileAstObj(this));
    for (const auto& header : collectHeaderDependencies(asts, cibParams.inputPath))
      stm << indentation << "#include \"" << header << "\"\n";
  }
  stm << '\n'; // Start in new line.
  if (!facades.empty() && !forProxy && !cibParams.noRtti)
  {
    // Assuming there is a facade like class in this file
    stm << "#include <typeinfo>\n";
    stm << "#include <typeindex>\n";
    stm << "#include <cstdint>\n";
    stm << "#include <unordered_map>\n\n";
    stm << "extern std::unordered_map<std::type_index, std::uint32_t> __zz_cib_gClassIdRepo;\n\n";
  }
}

void CibCompound::emitLibGlueCode(std::ostream&    stm,
                                  const CibHelper& helper,
                                  const CibParams& cibParams,
                                  const CibIdMgr&  cibIdMgr,
                                  CppIndent        indentation /* = CppIndent */) const
{
  if (!isCppFile(this))
    return;

  emitDependecyHeaders(stm, helper, cibParams, cibIdMgr, indentation);

  auto processCompoundForDelegators = [&](const CibCompound* compound) {
    if (compound->isTemplated())
    {
      compound->forEachTemplateInstance([&](CibCompound* templateInstace) {
        templateInstace->emitDelegators(stm, helper, cibParams, cibIdMgr, indentation);
        templateInstace->emitMethodTableGetterDefn(stm, helper, cibParams, cibIdMgr, false);
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
  stm << "#include \"__zz_cib_" << cibParams.moduleName << "-ids.h\"\n";
  stm << "#include \"__zz_cib_" << cibParams.moduleName << "-mtable-helper.h\"\n";
  stm << "#include \"__zz_cib_" << cibParams.moduleName << "-delegate-helper.h\"\n";
  stm << "#include \"__zz_cib_" << cibParams.moduleName << "-proxy.h\"\n";
  if (cibParams.libraryManagedProxies)
    stm << "#include \"__zz_cib_" << cibParams.moduleName << "-proxy-mgr.h\"\n";
  stm << '\n';
}

void CibCompound::emitProxyMgrDelegators(std::ostream&    stm,
                                         const CibParams& cibParams,
                                         CppIndent        indentation /* = CppIndent */) const
{
  if (!cibParams.libraryManagedProxies || !needsProxyManager())
    return;

  stm << indentation << "static __zz_cib_PROXY* __zz_cib_decl __zz_cib_find_proxy(" << longName()
      << "* obj, __zz_cib_client_id clientId) {\n";
  stm << indentation << "  return __zz_cib_proxy_manager_delegator::__zz_cib_find_proxy(obj, clientId);\n";
  stm << indentation << "}\n";

  stm << indentation << "static void __zz_cib_decl __zz_cib_register_proxy(" << longName()
      << "* obj, __zz_cib_client_id clientId, __zz_cib_PROXY* proxy, __zz_cib_proxy_deleter deleter) {\n";
  stm << indentation << "  __zz_cib_proxy_manager_delegator::__zz_cib_register_proxy(obj, clientId, proxy, deleter);\n";
  stm << indentation << "}\n";

  stm << indentation << "static void __zz_cib_decl __zz_cib_unregister_proxy(" << longName()
      << "* obj, __zz_cib_client_id clientId) {\n";
  stm << indentation << "  __zz_cib_proxy_manager_delegator::__zz_cib_unregister_proxy(obj, clientId);\n";
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
  else if (needsDelagatorClass())
    emitProtectedAccessor(stm, helper, cibParams, cibIdMgr, indentation);
  emitWrappingNsNamespacesForGlueCode(stm, cibParams, indentation);
  // stm << indentation << wrappingNsNamespaceDeclarations(cibParams) << " namespace " << nsName() << " {\n";
  auto delegatee = [&]() {
    if (needsGenericProxyDefinition())
      return "__zz_cib_" + longNsName() + "::__zz_cib_GenericProxy::" + name();
    else if (needsDelagatorClass())
      return "__zz_cib_ProtectedAccessor::" + name();
    else
      return longName();
  }();

  if (needsDelagatorClass())
    stm << indentation++ << "struct __zz_cib_Delegator {\n";
  else
    stm << indentation << "namespace __zz_cib_Delegator {\n";

  if (isClassLike(this))
  {
    stm << indentation << "using __zz_cib_Delegatee = " << delegatee << ";\n";
    stm << indentation << "using __zz_cib_ThisClass = __zz_cib_Delegatee;\n";
  }
  else if (isNamespace(this))
  {
    stm << indentation << "namespace __zz_cib_Delegatee = " << delegatee << ";\n";
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

  forEachAncestor(CppAccessType::kPublic, [&](const CibCompound* pubParent) {
    if (pubParent->isShared() || !pubParent->isEmpty())
    {
      auto castApiName = castToBaseName(pubParent, cibParams);
      stm << indentation << "static " << pubParent->longName() << "* __zz_cib_decl "
          << cibIdData->getMethodCApiName(castApiName) << "(" << longName() << "* __zz_cib_obj) {\n";
      stm << ++indentation << "return __zz_cib_obj;\n";
      stm << --indentation << "}\n";
    }
    return false;
  });

  if (isFacadeLike() && !cibParams.noRtti)
  {
    stm << indentation << "static std::uint32_t __zz_cib_decl " << cibIdData->getMethodCApiName("__zz_cib_get_class_id")
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
        stm << "__zz_cib_::" << compound->fullNsName() << "::__zz_cib_classid;\n";
      }
    });
    stm << indentation << "__zz_cib_gClassIdRepo[std::type_index(typeid(" << longName() << "))] = ";
    stm << "__zz_cib_::" << fullNsName() << "::__zz_cib_classid;\n";
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
          << "__zz_cib_::" << compound->fullNsName() << "::__zz_cib_classid;\n";
      stm << --indentation << "}\n";
      stm << --indentation << "}\n";
    });

    stm << indentation << "return __zz_cib_::" << fullNsName() << "::__zz_cib_classid;\n";
    stm << --indentation << "}\n";
  }
  if (needsGenericProxyDefinition())
  {
    stm << indentation << "static void __zz_cib_decl " << cibIdData->getMethodCApiName("__zz_cib_release_proxy") << "("
        << "__zz_cib_Delegatee* __zz_cib_obj) {\n";
    ++indentation;
    // stm << indentation << "auto unknownProxy = dynamic_cast<__zz_cib_" << longNsName()
    //     << "::__zz_cib_GenericProxy::" << name() << "*>(__zz_cib_obj);\n";
    // stm << indentation << "if (unknownProxy)\n";
    // ++indentation;
    stm << indentation << "__zz_cib_obj->__zz_cib_release_proxy();\n";
    --indentation;
    --indentation;
    stm << indentation << "}\n";
  }
  if (needsDelagatorClass())
    stm << --indentation << "};\n";
  else
    stm << --indentation << "}\n";
  stm << indentation << closingBracesForWrappingNsNamespaces() << "}\n\n";
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
  void computeOffsetAndPadding()
  {
    const CppHashIf*    lastUsedConditional = nullptr;
    std::vector<size_t> subgroupStartIndices;
    for (size_t i = 0; i < numEntry(); ++i)
    {
      const auto& mtableEntry = getEntry(i);
      const auto* conditional = mtableEntry.cond;
      const auto  nextGroupStarts =
        (conditional && (conditional != lastUsedConditional) && (conditional->condType_ < CppHashIf::kElse));
      const auto nextSubGroupStarts =
        (conditional != lastUsedConditional) && (conditional && (conditional->condType_ != CppHashIf::kEndIf));
      const auto prevGroupEnded = (lastUsedConditional && !conditional);
      if (lastUsedConditional && (nextGroupStarts || prevGroupEnded))
      {
        if (lastUsedConditional && (lastUsedConditional->condType_ != CppHashIf::kElse))
        {
          missingHashElses.emplace_back(std::make_unique<CppHashIf>(CppHashIf::kElse));
          data.emplace(data.begin() + i, missingHashElses.back().get(), std::string());
          subgroupStartIndices.push_back(i);
          ++i;
        }
        const auto currentGroupNumMembers  = i - subgroupStartIndices.front();
        auto       prevSubgroupsNumMembers = 0;
        subgroupStartIndices.push_back(i); // Only to cater for last subgroup
        for (size_t j = 0; j < subgroupStartIndices.size() - 1; ++j)
        {
          const auto currentSubgroupNumMember               = (subgroupStartIndices[j + 1] - subgroupStartIndices[j]);
          data[subgroupStartIndices[j]].subGroupStartOffset = prevSubgroupsNumMembers;
          data[subgroupStartIndices[j]].subGroupEndPadding =
            currentGroupNumMembers - currentSubgroupNumMember - data[subgroupStartIndices[j]].subGroupStartOffset;
          prevSubgroupsNumMembers += currentSubgroupNumMember;
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
    // stm << indentation << wrappingNsNamespaceDeclarations(cibParams) << " namespace " << nsName() << " {\n";
    if (forProxy)
      stm << "static ";
    stm << "const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {\n";
    const auto& className = forProxy ? longName() + "::__zz_cib_GenericProxy" : longName();
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
          stm << sep << indentation << "reinterpret_cast<__zz_cib_MTableEntry> (nullptr)";
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
        stm << "__zz_cib_Delegator::";
        stm << mtableEntry.name << ')';
      }
      else
      {
        stm << indentation << "reinterpret_cast<__zz_cib_MTableEntry> (0)";
      }
      sep = ",\n";
    }
    if (lastUsedConditional)
      gCppWriter.emitEndIf(stm);

    stm << '\n';
    stm << --indentation << "};\n";
    stm << indentation << "static const __zz_cib_MethodTable methodTable = { "
        << "methodArray, " << cibIdMgr.numMethods(className) << " };\n";
    stm << indentation << "return &methodTable;\n";
    stm << --indentation << "}\n";
    stm << indentation << '}' << closingBracesForWrappingNsNamespaces() << '\n';
  }
}
