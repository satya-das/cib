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
#include "cibfunction.h"
#include "cibfunction_helper.h"
#include "cibhelper.h"
#include "cibidmgr.h"
#include "cibutil.h"
#include "cppwriter.h"

#include "boost-helper/bfs.h"

#include <unordered_set>

//////////////////////////////////////////////////////////////////////////

static CppWriter gCppWriter;

static CppTypeModifier convertRefToPtr(const CppTypeModifier& typeModifier)
{
  if (typeModifier.refType_ == kNoRef)
    return typeModifier;
  auto ret = resolveTypeModifier(CppTypeModifier{kNoRef, 1, 0},
                                 CppTypeModifier{kNoRef, typeModifier.ptrLevel_, typeModifier.constBits_});

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
  return (varType->isByRef() || varType->isByRValueRef()) ? 1 + varType->ptrLevel() : varType->ptrLevel();
}

static void emitStars(std::ostream& stm, std::uint8_t numStars)
{
  while (numStars--)
    stm << '*';
}

static void emitType(std::ostream&         stm,
                     const CppVarType*     typeObj,
                     const CibCppCompound* typeResolver,
                     const CibHelper&      helper,
                     EmitPurpose           purpose)
{
  if (typeObj == nullptr)
    return;
  // FIXME: We are assuming that all types will be of some sort of compound object.
  // This will break when there will be some typedefed or enum type is used.
  auto* resolvedCppObj = (typeResolver ? typeResolver->resolveTypeName(typeObj->baseType(), helper) : nullptr);
  auto* resolvedType =
    resolvedCppObj && resolvedCppObj->isClassLike() ? static_cast<const CibCppCompound*>(resolvedCppObj) : nullptr;
  if (resolvedType && resolvedType->isPodStruct())
    resolvedType = nullptr;

  bool emitHandle   = resolvedType && ((purpose == kPurposeProxyProcType) || (purpose == kPurposeProxyCApi));
  bool convertToPtr = (purpose & kPurposeGlueCode) && (purpose != kPurposeGenericProxy);
  bool byValToPtr   = resolvedType && convertToPtr && typeObj->isByValue();

  auto typeModifier = convertToPtr ? convertRefToPtr(typeObj->typeModifier_) : typeObj->typeModifier_;
  if (resolvedType != nullptr)
  {
    if (emitHandle)
    {
      stm << "__zz_cib_HANDLE";
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
  if (typeModifier.refType_ == kByRef)
  {
    stm << '&';
  }
  else if (typeModifier.refType_ == kRValRef)
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
                                        EmitPurpose      purpose) const
{
  // FIXME for function pointer type params, it currently handles only functions whose parameter is
  // not function-pointer type.

  if (!hasParams())
    return;
  const CibCppCompound* typeResolver = resolveTypes ? getOwner() : nullptr;
  auto                  params       = getParams();
  const char*           sep          = "";
  for (size_t i = 0; i < params->size(); ++i)
  {
    const auto& param = params->at(i);
    stm << sep;
    emitType(stm, param.varObj->varType_, typeResolver, helper, purpose);
    if (purpose != kPurposeSignature)
    {
      stm << ' ';
      emitParamName(stm, param.varObj, i, !(purpose & kPurposeProxyDecl));
    }
    if (param.cppObj->objType_ == CppObj::kVar)
    {
      if (!param.varObj->varDecl_.arraySizes_.empty())
      {
        // FIXME: Emit error if the parameter type is not of basic types
        for (const auto& idx : param.varObj->varDecl_.arraySizes_)
        {
          // FIXME use index values.
          stm << "[]";
        }
      }
    }
    if ((purpose == kPurposeProxyDecl) && param.varObj->varDecl_.assign_)
    {
      stm << " = ";
      gCppWriter.emitExpr(param.varObj->varDecl_.assign_.get(), stm);
    }
    sep = ", ";
  }
}

void CibFunctionHelper::emitArgsForCall(std::ostream&    stm,
                                        const CibHelper& helper,
                                        const CibParams& cibParams,
                                        CallType         callType) const
{
  // FIXME for function pointer type params, it currently handles only functions whose parameter is
  // not function-pointer type.

  if (!hasParams())
    return;
  const auto* params = getParams();

  for (size_t i = 0; i < params->size(); ++i)
  {
    const auto& param = params->at(i);
    if (params->front() != param)
      stm << ", ";
    // FIXME for enum and other non compound types.
    auto* resolvedCppObj = getOwner()->resolveTypeName(param.varObj->baseType(), helper);
    auto* resolvedType =
      resolvedCppObj && resolvedCppObj->isClassLike() ? static_cast<const CibCppCompound*>(resolvedCppObj) : nullptr;
    if (resolvedType && resolvedType->isPodStruct())
      resolvedType = nullptr;
    switch (callType)
    {
      case CallType::kFromHandle:
        if (resolvedType)
        {
          if (param.varObj->isByValue())
            stm << "__zz_cib_" << resolvedType->longNsName() << "::__zz_cib_Helper::__zz_cib_obj_from_handle(";
          else
            stm << "__zz_cib_" << resolvedType->longNsName() << "::__zz_cib_Helper::__zz_cib_from_handle(";
        }
        if (param.varObj->isByRef())
          stm << '*';
        emitParamName(stm, param.varObj, i);
        if (resolvedType)
          stm << ")";
        break;
      case CallType::kToHandle:
        if (resolvedType)
        {
          stm << "__zz_cib_" << resolvedType->longNsName() << "::__zz_cib_Helper::__zz_cib_handle(";
          if ((effectivePtrLevel(param.varObj->varType_) > 1) && (param.varObj->refType() != CppRefType::kNoRef))
            stm << '&';
        }
        else if (param.varObj->isByRef() || param.varObj->isByRValueRef())
        {
          stm << '&';
        }
        emitParamName(stm, param.varObj, i);
        if (resolvedType)
          stm << ")";
        break;
      case CallType::kDerefIfByVal:
        if (resolvedType && param.varObj->isByValue())
        {
          stm << '*';
        }
        else
        {
          if (param.varObj->isByRef())
            stm << '*';
          else if (param.varObj->isByRValueRef())
            stm << "std::move(*";
        }
        emitParamName(stm, param.varObj, i);
        if (param.varObj->isByRValueRef())
          stm << ')';
        break;
      case CallType::kRefIfByVal:
        if ((resolvedType && param.varObj->isByValue()) || param.varObj->isByRef())
          stm << '&';
        emitParamName(stm, param.varObj, i);
        break;
      case CallType::kAsIs:
        emitParamName(stm, param.varObj, i);
        break;
    }
  }
}

void CibFunctionHelper::emitSignature(std::ostream& stm, const CibHelper& helper, EmitPurpose purpose) const
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
                                     EmitPurpose      purpose,
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

void CibFunctionHelper::emitCAPIDecl(std::ostream&         stm,
                                     const CibHelper&      helper,
                                     const CibParams&      cibParams,
                                     const CibCppCompound* callingOwner,
                                     const std::string&    capiName,
                                     EmitPurpose           purpose) const
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

void CibFunctionHelper::emitCAPIDefn(std::ostream&         stm,
                                     const CibHelper&      helper,
                                     const CibParams&      cibParams,
                                     const CibCppCompound* callingOwner,
                                     const std::string&    capiName,
                                     bool                  forProxy,
                                     CppIndent             indentation /* = CppIndent */) const
{
  if (forProxy && !isVirtual() && !isDestructor())
    return;
  if (!forProxy)
  {
    if (isConstructorLike() && callingOwner->isAbstract() && !callingOwner->needsGenericProxyDefinition())
      return;
  }
  auto callType = forProxy ? CallType::kFromHandle : CallType::kDerefIfByVal;
  stm << indentation << "static ";
  emitCAPIDecl(stm, helper, cibParams, callingOwner, capiName, forProxy ? kPurposeProxyCApi : kPurposeCApi);
  stm << " {\n";
  stm << ++indentation;
  if (isConstructor())
  {
    stm << "return new ";
    if (callingOwner->needsGenericProxyDefinition())
    {
      stm << "__zz_cib_" << callingOwner->longName() << "::__zz_cib_GenericProxy::" << callingOwner->name()
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
      emitArgsForCall(stm, helper, cibParams, callType);
    }
    stm << ");\n";
  }
  else if (isDestructor())
  {
    stm << "delete __zz_cib_obj;\n";
  }
  else
  {
    bool                  convertFromValue = false;
    const CibCppCompound* resolvedType     = nullptr;
    if (returnType() && !returnType()->isVoid())
    {
      auto* resolvedCppObj = callingOwner->resolveTypeName(returnType()->baseType(), helper);
      resolvedType =
        resolvedCppObj && resolvedCppObj->isClassLike() ? static_cast<const CibCppCompound*>(resolvedCppObj) : nullptr;
      if (resolvedType && resolvedType->isPodStruct())
        resolvedType = nullptr;

      stm << "return ";
      if (resolvedType && forProxy)
      {
        stm << "__zz_cib_" << resolvedType->longNsName() << "::__zz_cib_Helper::__zz_cib_handle(\n";
        stm << ++indentation;
      }
      if (returnType()->isByValue())
      {
        convertFromValue = (resolvedType != nullptr);
        if (convertFromValue)
        {
          auto retTypeCompound = static_cast<const CppCompound*>(resolvedType);
          stm << "new ::" << retTypeCompound->fullName() << '(';
        }
      }
      else if (returnType()->isByRef())
      {
        stm << '&';
      }
    }
    if (callingOwner->isClassLike() && !isStatic())
      stm << "__zz_cib_obj->";
    if (!callingOwner->isCppFile()
        && (isStatic()
            || (!cibParams.noExactDelegation && !isPureVirtual() && (forProxy || (protectionLevel() != kPrivate)))))
      stm << "__zz_cib_Delegatee::";

    if (!isTypeConverter())
      stm << funcName();
    else
    {
      stm << "operator ";
      emitType(stm, returnType(), getOwner(), helper, EmitPurpose::kPurposeSignature);
    }
    stm << '(';
    emitArgsForCall(stm, helper, cibParams, callType);
    if (convertFromValue)
      stm << ')';
    if (resolvedType && forProxy)
    {
      stm << ")";
      --indentation;
    }
    stm << ");\n";
  }
  stm << --indentation << "}\n";
}

void CibFunctionHelper::emitDefn(std::ostream&         stm,
                                 bool                  asInline,
                                 const CibHelper&      helper,
                                 const CibParams&      cibParams,
                                 const CibCppCompound* callingOwner,
                                 const CibIdData*      cibIdData,
                                 CppIndent             indentation) const
{
  stm << indentation;
  if (asInline)
    stm << "inline ";
  if (isTypeConverter())
  {
    stm << callingOwner->fullName() << "::operator ";
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
    if (callingOwner->isNamespaceLike())
      stm << callingOwner->fullName() << "::";
    stm << funcName() << '(';
    emitArgsForDecl(stm, helper, true, kPurposeProxyDefn);
    stm << ")";
  }
  auto capiName = cibIdData->getMethodCApiName(signature(helper));
  if (isConstructor())
  {
    stm << '\n';
    stm << ++indentation << ": " << callingOwner->fullName() << "(__zz_cib_" << callingOwner->longNsName()
        << "::__zz_cib_Helper::" << capiName << '(';
    if (callingOwner->needsGenericProxyDefinition())
    {
      stm << "this";
      if (hasParams())
        stm << ", ";
    }
    emitArgsForCall(stm, helper, cibParams, CallType::kToHandle);
    stm << "))\n";
    stm << --indentation << "{}\n";
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
      stm << indentation << "auto h = __zz_cib_" << callingOwner->longNsName()
          << "::__zz_cib_Helper::__zz_cib_release_handle(this);\n";
    }

    stm << indentation;
    const CibCppCompound* retType = nullptr;
    if (returnType() && !returnType()->isVoid())
    {
      stm << "return ";
      auto* resolvedCppObj = callingOwner->resolveTypeName(returnType()->baseType(), helper);
      retType =
        resolvedCppObj && resolvedCppObj->isClassLike() ? static_cast<const CibCppCompound*>(resolvedCppObj) : nullptr;
      if (retType && retType->isPodStruct())
        retType = nullptr;
      if (retType && returnType()->isByValue())
      {
        stm << "__zz_cib_" << retType->longNsName() << "::__zz_cib_Helper::__zz_cib_obj_from_handle(\n";
      }
      else
      {
        if (returnType()->isByRef())
        {
          if ((returnType()->ptrLevel() == 0) || (retType == nullptr))
            stm << '*';
        }
        if (retType)
        {
          stm << "__zz_cib_" << retType->longNsName() << "::__zz_cib_Helper::__zz_cib_from_handle(\n";
          stm << ++indentation;
          emitStars(stm, effectivePtrLevel(returnType()) - 1);
        }
      }
    }
    stm << "__zz_cib_" << callingOwner->longNsName() << "::__zz_cib_Helper::" << capiName << "(";
    if (isDestructor())
    {
      stm << "h";
    }
    else if (callingOwner->isClassLike() && !isStatic())
    {
      stm << "__zz_cib_h_";
      if (hasParams())
        stm << ", ";
    }
    emitArgsForCall(stm, helper, cibParams, CallType::kToHandle);
    stm << ')';
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
    emitArgsForCall(stm, helper, cibParams, CallType::kAsIs);
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
                                        EmitPurpose        purpose,
                                        CppIndent          indentation /* = CppIndent */) const
{
  if (!isVirtual())
    return;

  stm << indentation;
  emitSignature(stm, helper, kPurposeGenericProxy);
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
  auto* resolvedCppObj =
    (getOwner() && returnType() ? getOwner()->resolveTypeName(returnType()->baseType(), helper) : nullptr);
  auto* resolvedType =
    (resolvedCppObj && resolvedCppObj->isClassLike()) ? static_cast<const CibCppCompound*>(resolvedCppObj) : nullptr;
  if (resolvedType && resolvedType->isPodStruct())
    resolvedType = nullptr;
  if (resolvedType && !genericProxy)
  {
    if (returnType()->isByValue())
      stm << "__zz_cib_" << resolvedType->longNsName() << "::__zz_cib_Helper::__zz_cib_obj_from_handle(\n";
    else
      stm << "__zz_cib_" << resolvedType->longNsName() << "::__zz_cib_Helper::__zz_cib_from_handle(";
  }

  bool byValueObj = (genericProxy && resolvedType && returnType() && returnType()->isByValue());
  if (byValueObj || (returnType() && returnType()->isByRef()))
    stm << "*";

  stm << "__zz_cib_get_mtable_helper().invoke<" << procType() << ", ";
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
    emitArgsForCall(stm, helper, cibParams, genericProxy ? CallType::kRefIfByVal : CallType::kToHandle);
  }
  if (resolvedType && !genericProxy)
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
  stm << "using " << procType() << " = ";
  emitCAPIReturnType(stm, helper, forGenericProxy);
  stm << " (__zz_cib_decl *) (";
  if (!isStatic() && (isDestructor() || isMethod() || isTypeConverter()))
  {
    if (forGenericProxy)
      stm << "__zz_cib_PROXY*";
    else
      stm << "__zz_cib_HANDLE*";
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
    stm << "__zz_cib_HANDLE*";
  else if (isDestructor())
    stm << "void";
  else
    emitType(
      stm, returnType(), getOwner(), helper, forGenericProxy ? kPurposeGenericProxyProcType : kPurposeProxyProcType);
}

///////////////////////////////////////////////////////////////////////////////////////////////////

void emitInheritanceList(std::ostream& stm, const CibCppCompoundArray& inhList, CppObjProtLevel prot, char& sep)
{
  if (inhList.empty())
    return;
  stm << ' ' << sep << ' ' << prot << ' ' << inhList.front()->longName();
  sep = ',';
  for (CibCppCompoundArray::const_iterator itr = inhList.begin() + 1; itr != inhList.end(); ++itr)
    stm << sep << prot << ' ' << (*itr)->longName();
}

const CppObj* CibCppCompound::resolveTypeName(const std::string& typeName, const CibHelper& helper) const
{
  auto itr = typeNameToCibCppObj_.find(typeName);
  if (itr != typeNameToCibCppObj_.end())
    return itr->second;
  const CppObj* resolvedType = helper.getCppObjFromTypeName(typeName, this);
  if (resolvedType == nullptr)
  {
    forEachParent(kPublic, [&](const CibCppCompound* parent) {
      resolvedType = parent->resolveTypeName(typeName, helper);
      return resolvedType == nullptr;
    });
  }

  typeNameToCibCppObj_[typeName] = resolvedType;
  return resolvedType;
}

static const CppHashIf* hasHeaderGuard(const CppObjArray& members)
{
  auto firstNonCommentItr = std::find_if(members.begin(), members.end(), [](const CppObj* mem) {
    return (mem->objType_ > CppObj::kCPreProcessorTypeStarts);
  });
  if (firstNonCommentItr == members.end())
    return nullptr;

  const CppObj* firstNonCommentObj = *firstNonCommentItr;
  if (firstNonCommentObj->objType_ != CppObj::kHashIf)
    return nullptr;

  auto* hashIf = static_cast<const CppHashIf*>(firstNonCommentObj);
  if (hashIf->condType_ != CppHashIf::kIfNDef)
    return nullptr;

  auto lastNonCommentItr = std::find_if(members.rbegin(), members.rend(), [](const CppObj* mem) {
    return (mem->objType_ > CppObj::kCPreProcessorTypeStarts);
  });

  const CppObj* lastNonCommentObj = *lastNonCommentItr;
  if (lastNonCommentObj->objType_ != CppObj::kHashIf)
    return nullptr;

  auto* lastHashIf = static_cast<const CppHashIf*>(lastNonCommentObj);
  return (lastHashIf->condType_ == CppHashIf::kEndIf) ? lastHashIf : nullptr;
}

void CibCppCompound::emitUserHeader(const CibHelper& helper, const CibParams& cibParams) const
{
  if (!isCppFile())
    return;

  bfs::path usrIncPath = cibParams.outputPath / name().substr(cibParams.inputPath.string().length());
  bfs::create_directories(usrIncPath.parent_path());
  std::ofstream stm(usrIncPath.string(), std::ios_base::out);

  auto firstStatementItr      = std::find_if(members_.begin(), members_.end(), [](const CppObj* mem) {
    return (mem->objType_ > kCppStatementObjectTypeStarts);
  });
  auto lastPreProcessorRevItr = std::find_if(std::reverse_iterator<decltype(firstStatementItr)>(firstStatementItr),
                                             members_.rend(),
                                             [](const CppObj* mem) -> bool { return (mem->isPreProcessorType()); });
  auto memItr                 = members_.begin();
  if (lastPreProcessorRevItr != members_.rend())
  {
    std::for_each(memItr, lastPreProcessorRevItr.base(), [&stm](const CppObj* mem) { gCppWriter.emit(mem, stm); });
    memItr = lastPreProcessorRevItr.base();

    stm << "\n";
  }
  auto* headerGuardEndIf = hasHeaderGuard(members_);
  stm << "#include \"" << implIncludeName(cibParams) << "-predef.h\"\n\n";
  for (; memItr != members_.end(); ++memItr)
  {
    const CppObj* mem = *memItr;
    if (mem == headerGuardEndIf)
      stm << "\n#include \"" << implIncludeName(cibParams) << "-impl.h\"\n";
    emitDecl(*memItr, stm, helper, cibParams);
  }

  if (!headerGuardEndIf)
    stm << "\n#include \"" << implIncludeName(cibParams) << "-impl.h\"\n";
}

void CibCppCompound::emitPredefHeader(const CibHelper& helper, const CibParams& cibParams) const
{
  if (!isCppFile())
    return;

  auto implPath = cibParams.outputPath / (getImplPath(cibParams) + "-predef.h");
  bfs::create_directories(implPath.parent_path());
  std::ofstream stm(implPath.string(), std::ios_base::out);

  stm << "#include \"__zz_cib_internal/__zz_cib_" << cibParams.moduleName << "-class-internal-def.h\"\n";

  emitHelperDecl(stm, helper, cibParams);
}

void CibCppCompound::emitTemplateInstanceForwardDeclarations(std::ostream&    stm,
                                                             const CibHelper& helper,
                                                             const CibParams& cibParams,
                                                             const CibIdMgr&  cibIdMgr) const
{
  auto addDependency = [&](std::set<const CppObj*>& cppObjs, const std::string& typeName) {
    auto* resolvedCppObj = resolveTypeName(typeName, helper);
    if (resolvedCppObj)
      cppObjs.insert(resolvedCppObj);
  };
  auto emitFwdDeclaration = [&](const CppObj* cppObj) {
    if (cppObj->objType_ == CppObj::kFwdClsDecl)
    {
      gCppWriter.emitFwdDecl(static_cast<const CppFwdClsDecl*>(cppObj), stm);
    }
    else if (cppObj->isClassLike())
    {
      auto* compound = static_cast<const CibCppCompound*>(cppObj);
      if (compound->isTemplateInstance())
        stm << "template <>\n";
      stm << compound->compoundType_ << ' ' << compound->fullName() << ";\n";
    }
  };
  auto emitFwdDeclarations = [&](const std::set<const CppObj*>& cppObjs) {
    for (auto* cppObj : cppObjs)
      emitFwdDeclaration(cppObj);
  };
  forEachNested([&](const CibCppCompound* compound) {
    if (compound->isTemplated())
    {
      compound->forEachTemplateInstance([&](CibCppCompound* tmplInstance) {
        std::set<const CppObj*> cppObjs;
        for (auto& arg : tmplInstance->templateArgValues_)
          addDependency(cppObjs, arg.second->baseType());
        emitFwdDeclarations(cppObjs);
        emitFwdDeclaration(tmplInstance);
      });
    }
  });
}

static std::set<const CppObj*> extractFwdDeclarations(std::set<const CppObj*>& dependencies)
{
  std::set<const CppObj*> fwdDecls;
  for (auto cppObj : dependencies)
  {
    if (cppObj->objType_ == CppObj::kFwdClsDecl)
      fwdDecls.insert(cppObj);
  }
  for (auto cppObj : fwdDecls)
    dependencies.erase(cppObj);

  return fwdDecls;
}

void CibCppCompound::emitTemplateInstanceSpecializations(std::ostream&    stm,
                                                         const CibHelper& helper,
                                                         const CibParams& cibParams,
                                                         const CibIdMgr&  cibIdMgr) const
{
  forEachNested([&](const CibCppCompound* compound) {
    if (!compound->isTemplated() || compound->templateInstances_.empty())
      return;
    compound->forEachTemplateInstance([&](CibCppCompound* templCompound) {
      auto          specializationFilename = templCompound->nsName() + ".h";
      auto          specializationFilepath = cibParams.outputPath / getImplDir(cibParams) / specializationFilename;
      std::ofstream tmplStm(specializationFilepath.string(), std::ios_base::out);
      tmplStm << "#pragma once\n\n";
      std::set<const CppObj*> dependencies;
      templCompound->collectTemplateInstanceTypeDependencies(helper, dependencies);
      auto fwdDecls = extractFwdDeclarations(dependencies);
      auto asts     = collectAstDependencies(dependencies);
      asts.insert(getFileDomObj(this));
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

void CibCppCompound::emitDependentTemplateSpecilizationHeaders(std::ostream& stm) const
{
  for (auto* usedAsArgIn : usedInTemplArg)
  {
    auto headerName = usedAsArgIn->nsName() + ".h";
    assert(headerName.find('<') == std::string::npos);
    stm << "#include \"" << headerName << "\"\n";
  }
}

void CibCppCompound::emitImplHeader(const CibHelper& helper, const CibParams& cibParams, const CibIdMgr& cibIdMgr) const
{
  if (!isCppFile())
    return;

  auto          implPath = cibParams.outputPath / (getImplPath(cibParams) + "-impl.h");
  std::ofstream stm(implPath.string(), std::ios_base::out);
  stm << "#pragma once\n\n";
  emitCommonExpHeaders(stm, cibParams);

  forEachNested([&](const CibCppCompound* nested) {
    if (nested->isClassLike())
      nested->emitHelperDefn(stm, helper, cibParams, cibIdMgr);
  });

  emitTemplateInstanceSpecializations(stm, helper, cibParams, cibIdMgr);

  forEachNested([&](const CibCppCompound* compound) { compound->emitDependentTemplateSpecilizationHeaders(stm); });
  emitDependentTemplateSpecilizationHeaders(stm);
}

void CibCppCompound::emitCommonExpHeaders(std::ostream& stm, const CibParams& cibParams)
{
  stm << "#include \"__zz_cib_internal/__zz_cib_" << cibParams.moduleName << "-def.h\"\n";
  stm << "#include \"__zz_cib_internal/__zz_cib_" << cibParams.moduleName << "-ids.h\"\n";
  stm << "#include \"__zz_cib_internal/__zz_cib_" << cibParams.moduleName << "-mtable-helper.h\"\n";
  stm << "#include \"__zz_cib_internal/__zz_cib_" << cibParams.moduleName << "-handle-helper.h\"\n";
}

void CibCppCompound::emitImplSource(std::ostream&    stm,
                                    const CibHelper& helper,
                                    const CibParams& cibParams,
                                    const CibIdMgr&  cibIdMgr,
                                    CppIndent        indentation) const
{
  auto cibIdData = cibIdMgr.getCibIdData(longName() + "::__zz_cib_GenericProxy");
  for (auto mem : members_)
  {
    if (mem->isNamespaceLike() && isMemberPublic(mem->prot_, compoundType_))
    {
      auto compound = static_cast<const CibCppCompound*>(mem);
      compound->emitImplSource(stm, helper, cibParams, cibIdMgr);
    }
  }

  if (isFacadeLike())
  {
    emitGenericDefn(stm, helper, cibParams, cibIdMgr, indentation);
    emitFromHandleDefn(stm, cibParams, cibIdMgr, indentation);
  }
  if (needsGenericProxyDefinition())
  {
    stm << indentation << wrappingNsNamespaceDeclarations(cibParams) << " namespace " << nsName() << " {\n";
    stm << indentation++ << "struct __zz_cib_Delegator {\n";
    stm << indentation << "using __zz_cib_Delegatee = " << longName() << ";\n";

    for (auto func : allVirtuals_)
      func.emitCAPIDefn(
        stm, helper, cibParams, this, cibIdData->getMethodCApiName(func.signature(helper)), true, indentation);
    CibFunctionHelper func = dtor();
    func.emitCAPIDefn(
      stm, helper, cibParams, this, cibIdData->getMethodCApiName(func.signature(helper)), true, indentation);
    stm << --indentation << "};\n";
    stm << indentation << "}" << closingBracesForWrappingNsNamespaces() << "\n\n";
    emitMethodTableGetterDefn(stm, helper, cibParams, cibIdMgr, true, indentation);
    stm << '\n';
    stm << indentation << wrappingNsNamespaceDeclarations(cibParams) << " namespace " << nsName() << " {\n";
    stm << indentation << "const __zz_cib_MethodTable* "
        << "__zz_cib_Helper::__zz_cib_get_proxy_method_table() {\n";
    ++indentation;
    stm << indentation << "return __zz_cib_GetMethodTable();\n";
    --indentation;
    stm << indentation << "}\n";
    stm << indentation << '}' << closingBracesForWrappingNsNamespaces() << "\n\n";
  }
}

void CibCppCompound::emitImplSource(const CibHelper& helper, const CibParams& cibParams, const CibIdMgr& cibIdMgr) const
{
  if (!isCppFile())
    return;
  bfs::path headerPath = name_;
  auto      headerName = name_.substr(cibParams.inputPath.string().length());
  bfs::path usrSrcPath = (cibParams.outputPath / headerName).replace_extension(".cpp");
  {
    std::ofstream stm(usrSrcPath.string(), std::ios_base::out);
    emitFacadeAndInterfaceDependecyHeaders(stm, helper, cibParams, cibIdMgr, true, CppIndent());
    forEachNested([&](const CibCppCompound* compound) {
      if (!compound->isTemplated() && (!compound->isInline() || compound->isShared()) && !compound->isPodStruct())
        compound->emitDefn(stm, false, helper, cibParams, cibIdMgr);
    });
    emitImplSource(stm, helper, cibParams, cibIdMgr);
  }
  if (bfs::file_size(usrSrcPath) == 0)
    bfs::remove(usrSrcPath);
}

void CibCppCompound::collectFacades(std::set<const CibCppCompound*>& facades) const
{
  for (auto mem : members_)
  {
    if (!isMemberPublic(mem->prot_, compoundType_))
      continue;
    if (mem->isNamespaceLike())
    {
      auto compound = static_cast<const CibCppCompound*>(mem);
      compound->collectFacades(facades);
      if (compound->isFacadeLike())
        facades.insert(compound);
    }
  }
}

bool CibCppCompound::hasClassThatNeedsGenericProxyDefn() const
{
  for (auto mem : members_)
  {
    if (!isMemberPublic(mem->prot_, compoundType_))
      continue;
    if (mem->isNamespaceLike())
    {
      auto compound = static_cast<const CibCppCompound*>(mem);
      if (compound->needsGenericProxyDefinition() || compound->hasClassThatNeedsGenericProxyDefn())
        return true;
    }
  }

  return false;
}

void CibCppCompound::collectTemplateInstanceTypeDependencies(const CibHelper&         helper,
                                                             std::set<const CppObj*>& cppObjs) const
{
  if (!isTemplateInstance())
    return;
  // TODO addDependency is duplicated in another function.
  // Remove duplication, may be by having dependecy collector as another class.
  auto addDependency = [&](const std::string& typeName) {
    auto* resolvedCppObj = resolveTypeName(typeName, helper);
    if (resolvedCppObj)
      cppObjs.insert(resolvedCppObj);
  };

  collectTypeDependencies(helper, cppObjs);
  for (auto& arg : templateArgValues_)
    addDependency(arg.second->baseType());
}

void CibCppCompound::collectTemplateInstancesTypeDependencies(const CibHelper&         helper,
                                                              std::set<const CppObj*>& cppObjs) const
{
  if (!isTemplated())
    return;
  forEachTemplateInstance(
    [&](CibCppCompound* tmplInstance) { tmplInstance->collectTemplateInstanceTypeDependencies(helper, cppObjs); });
}

void CibCppCompound::collectTypeDependencies(const CibHelper& helper, std::set<const CppObj*>& cppObjs) const
{
  // TODO: We still would like to collect dependencies that are not related to template arguments.
  if (isTemplated())
    return;

  auto addDependency = [&](const std::string& typeName) {
    auto* resolvedCppObj = resolveTypeName(typeName, helper);
    if (resolvedCppObj)
      cppObjs.insert(resolvedCppObj);
  };

  for (auto mem : members_)
  {
    if (!isMemberPublic(mem->prot_, compoundType_))
      continue;
    if (mem->isNamespaceLike())
    {
      auto compound = static_cast<const CibCppCompound*>(mem);
      compound->collectTypeDependencies(helper, cppObjs);
      compound->collectTemplateInstancesTypeDependencies(helper, cppObjs);
    }
    else if (mem->isFunctionLike())
    {
      CibFunctionHelper func(mem);
      if (!func.isOutOfClassDefinition())
      {
        if (func.returnType() && !func.returnType()->isVoid())
          addDependency(func.returnType()->baseType());
        if (func.hasParams())
        {
          for (auto param : *func.getParams())
          {
            if ((param.cppObj->objType_ == kVarType) || (param.cppObj->objType_ == kVar))
              addDependency(param.varObj->baseType());
          }
        }
      }
    }
  }
}

const CibCppCompound* CibCppCompound::getFileDomObj(const CppObj* obj)
{
  const CppCompound* parent = obj->objType_ == kCompound ? static_cast<const CppCompound*>(obj) : obj->owner_;
  while (parent->owner_)
    parent = parent->owner_;
  return static_cast<const CibCppCompound*>(parent);
}

std::set<const CibCppCompound*> CibCppCompound::collectAstDependencies(const std::set<const CppObj*>& cppObjs)
{
  std::set<const CibCppCompound*> asts;
  for (auto obj : cppObjs)
  {
    auto* ast = getFileDomObj(obj);
    asts.insert(ast);
  }
  return asts;
}

std::set<std::string> CibCppCompound::collectHeaderDependencies(const std::set<const CibCppCompound*>& compoundObjs,
                                                                const bfs::path&                       dependentPath)
{
  std::set<std::string> headers;
  for (auto compound : compoundObjs)
  {
    assert(compound->isCppFile());
    headers.emplace(bfs::relative(compound->name(), dependentPath).string());
  }
  return headers;
}

bfs::path CibCppCompound::getImplDir(const CibParams& cibParams) const
{
  bfs::path impl = name();
  return bfs::path(cibParams.cibInternalDirName) / bfs::relative(impl, cibParams.inputPath).remove_filename();
}

std::string CibCppCompound::getImplPath(const CibParams& cibParams) const
{
  bfs::path impl         = name();
  auto      implFilename = impl.stem().string();
  return (getImplDir(cibParams) / implFilename).string();
}

std::string CibCppCompound::implIncludeName(const CibParams& cibParams) const
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

void CibCppCompound::emitDecl(const CppObj*    obj,
                              std::ostream&    stm,
                              const CibHelper& helper,
                              const CibParams& cibParams,
                              CppIndent        indentation /* = CppIndent */) const
{
  if (obj->isFunctionLike())
  {
    CibFunctionHelper func = obj;
    if (objNeedingBridge_.count(obj))
      func.emitOrigDecl(stm, helper, cibParams, kPurposeProxyDecl, indentation);
    else if (func.isTemplated())
      gCppWriter.emit(obj, stm);
  }
  else if (obj->objType_ == CppObj::kCompound)
  {
    auto compound = static_cast<const CibCppCompound*>(obj);
    compound->emitDecl(stm, helper, cibParams, indentation);
  }
  else if (obj->objType_ == CppObj::kDocComment)
  {
    emitDocComment(stm, static_cast<const CppDocComment*>(obj), indentation);
  }
  else
  {
    gCppWriter.emit(obj, stm);
  }
}

void CibCppCompound::emitDecl(std::ostream&    stm,
                              const CibHelper& helper,
                              const CibParams& cibParams,
                              CppIndent        indentation /* = CppIndent */) const
{
  if (isPodStruct() || (isInline() && !isShared()))
  {
    gCppWriter.emit(this, stm, indentation);
    return;
  }
  if (isNamespaceLike())
  {
    if (isTemplateInstance())
    {
      stm << wrappingNamespaceDeclarations(cibParams) << '\n';
      stm << indentation << "template<>\n";
    }
    stm << indentation << compoundType_ << ' ';
    stm << name();
    if (isClassLike())
    {
      auto emitInheritance = [this, &stm](CppObjProtLevel prot, char& sep) {
        auto itr = parents_.find(prot);
        if (itr != parents_.end())
          emitInheritanceList(stm, itr->second, prot, sep);
      };
      char sep = ':';
      emitInheritance(kPublic, sep);
    }
    stm << '\n' << indentation++ << "{\n";
  }

  if (isClassLike() && needsBridging() && !moveCtor())
    emitMoveConstructorDecl(stm, indentation);

  CppObjProtLevel lastProt = kUnknownProt;
  if (!isClassLike() || needsBridging())
  {
    for (auto mem : members_)
    {
      if ((mem->objType_ == CppObj::kVar) || (mem->objType_ == CppObj::kVarList))
        continue;
      if (isMemberPrivate(mem->prot_, compoundType_))
      {
        if (!mem->isFunctionLike())
          continue;
        CibFunctionHelper func(mem);
        if (!func.isOveriddable())
          continue;
      }
      if (isClassLike() && lastProt != mem->prot_)
      {
        if (mem->prot_ != kUnknownProt)
          stm << --indentation << mem->prot_ << ":\n";
        ++indentation;
        lastProt = mem->prot_;
      }
      emitDecl(mem, stm, helper, cibParams, indentation);
      if (mem->isFunctionLike() && objNeedingBridge_.count(mem))
        needsClientDefinition_.emplace_back(mem);
    }
  }

  if (isClassLike())
  {
    if (needsBridging())
    {
      // Everything below this is for glue code
      stm << '\n';
      stm << --indentation << "private:\n";
      stm << ++indentation << "__ZZ_CIB_CLASS_INTERNAL_DEF(" << ctorName() << ", " << fullNsName() << ");\n";
    }
    stm << --indentation << "};\n";
    if (isTemplateInstance())
    {
      stm << closingBracesForWrappingNamespaces() << '\n';
    }
  }
  else if (isNamespaceLike())
  {
    stm << --indentation << "}\n";
  }
}

void CibCppCompound::emitFromHandleDefn(std::ostream&    stm,
                                        const CibParams& cibParams,
                                        const CibIdMgr&  cibIdMgr,
                                        CppIndent        indentation) const
{
  if (!isShared() || isEmpty())
    return;
  stm << indentation << longName() << "* __zz_cib_" << longName()
      << "::__zz_cib_Helper::__zz_cib_create_proxy(__zz_cib_HANDLE* h) {\n";
  ++indentation;
  stm << indentation << "switch(__zz_cib_get_class_id(&h)) {\n";
  auto emitCaseStmt = [&](const CibCppCompound* compound) {
    auto cibIdData = cibIdMgr.getCibIdData(compound->longName());
    if (cibIdData)
    {
      stm << indentation << "case __zz_cib_::" << compound->fullNsName() << "::__zz_cib_classid:\n";
      stm << ++indentation << "return __zz_cib_" << compound->longName()
          << "::__zz_cib_Helper::__zz_cib_from_handle(h);\n";
      --indentation;
    }
  };
  forEachDescendent(kPublic, [&](const CibCppCompound* derived) { emitCaseStmt(derived); });
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
  stm << indentation << "default:\n";
  stm << ++indentation << "return ::__zz_cib_" << longName() << "::__zz_cib_Generic::" << name()
      << "::__zz_cib_from_handle(h);\n";
  stm << --indentation << "}\n";

  stm << --indentation << "}\n";
}

void CibCppCompound::emitFromHandleDecl(std::ostream& stm, const CibParams& cibParams, CppIndent indentation) const
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

bool CibCppCompound::collectAllVirtuals(const CibHelper& helper, CibFunctionHelperArray& allVirtuals) const
{
  std::unordered_set<std::string> allVirtSigs;
  std::unordered_set<std::string> unresolvedPureVirtSigs;

  auto processClass = [&](const auto* ancestor) {
    for (auto mem : ancestor->members_)
    {
      if (!mem->isFunctionLike())
        continue;
      CibFunctionHelper func(mem);
      auto              sig = func.isDestructor() ? std::string("__zz_cib_dtor") : func.signature(helper);
      if (func.isPureVirtual())
      {
        if (!func.isDestructor() || (ancestor == this))
        {
          // A class is abstract even when it's dtor is pure virtual.
          // But the pure virtual dtor of parent class doesn't affect abstractness of a class.
          unresolvedPureVirtSigs.insert(sig);
          if (allVirtSigs.insert(sig).second)
            allVirtuals.push_back(func);
        }
      }
      else if (!unresolvedPureVirtSigs.erase(sig) && func.isOveriddable() && !func.isDestructor()
               && !allVirtSigs.count(sig))
      {
        allVirtSigs.insert(sig);
        if (!func.hasAttr(kOverride))
          allVirtuals.push_back(func);
      }
    }

    return false;
  };
  forEachAncestor(kPublic, processClass);
  processClass(this);

  return !unresolvedPureVirtSigs.empty();
}

void CibCppCompound::identifyAbstract(const CibHelper& helper)
{
  if (!isInline() && isClassLike() && collectAllVirtuals(helper, allVirtuals_))
    setAbstract();
}

void CibCppCompound::identifyMethodsToBridge(const CibHelper& helper)
{
  if (isTemplated())
  {
    forEachTemplateInstance([&](CibCppCompound* templateInstace) { templateInstace->identifyMethodsToBridge(helper); });
    return;
  }
  // A class that is inline and not shared don't need any bridging.
  // An inline class that is shared should be treated same as non-inline class.
  if (isInline() && !isShared())
    return;
  if (isPodStruct())
    return;
  if (name().empty())
    return;
  for (auto mem : members_)
  {
    if (isMemberPrivate(mem->protectionLevel(), compoundType_))
      continue;
    if (mem->isFunctionLike())
    {
      CibFunctionHelper func(mem);
      if (func.isCopyConstructor() && !isCopyCtorCallable())
        continue;
      if (func.funcName().find(':') != std::string::npos)
        continue; // Skip out-of-class function definitions.
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
      if (isMemberProtected(mem->protectionLevel(), compoundType_))
        setHasProtectedMethods();

      needsBridging_.push_back(func);
      objNeedingBridge_.insert(mem);
    }
    else if (mem->isNamespaceLike())
    {
      auto compound = static_cast<CibCppCompound*>(mem);
      compound->identifyMethodsToBridge(helper);
    }
  }
  if (!isClassLike() || (isEmpty() && !isShared()))
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
      if (objNeedingBridge_.count(func) == 0)
      {
        if (virtSigs.count(func.signature(helper)) == 0)
        {
          objNeedingBridge_.insert(func);
          needsBridging_.push_back(func);
        }
      }
      if (isMemberProtected(func.protectionLevel(), compoundType_))
        setHasProtectedMethods();
    }
  }
  if (!hasDtor() && (!isAbstract() || isFacadeLike() || needsGenericProxyDefinition()))
  {
    auto defaultDtor = CibFunctionHelper::CreateDestructor(kPublic, "~" + ctorName(), 0);
    addMemberAtFront(defaultDtor);
    CibFunctionHelper func(defaultDtor);
    needsBridging_.insert(needsBridging_.begin(), func);
    objNeedingBridge_.insert(defaultDtor);
  }
  if (!hasCopyCtor() && !hasMoveCtor() && !isAbstract() && isCopyCtorCallable())
  {
    auto ctorProtection = kPublic;
    auto paramType      = new CppVarType(name(), CppTypeModifier{kByRef});
    paramType->typeModifier_.constBits_ |= 1;
    auto param     = new CppVar(paramType, CppVarDecl{std::string()});
    auto paramList = new CppParamList;
    paramList->push_back({param});
    auto copyCtor = CibFunctionHelper::CreateConstructor(ctorProtection, ctorName(), paramList, nullptr, 0);
    addMemberAtFront(copyCtor);
    CibFunctionHelper func(copyCtor);
    needsBridging_.insert(needsBridging_.begin(), func);
    objNeedingBridge_.insert(copyCtor);
  }
  if (!hasCtor() && (!isAbstract() || needsGenericProxyDefinition()))
  {
    auto ctorProtection = isAbstract() ? kProtected : kPublic;
    auto defaultCtor    = CibFunctionHelper::CreateConstructor(ctorProtection, ctorName(), nullptr, nullptr, 0);
    if (isAbstract())
      addMember(defaultCtor);
    else
      addMemberAtFront(defaultCtor);
    CibFunctionHelper func(defaultCtor);
    needsBridging_.insert(needsBridging_.begin(), func);
    objNeedingBridge_.insert(defaultCtor);
  }
}

void CibCppCompound::emitHelperDecl(std::ostream&    stm,
                                    const CibHelper& helper,
                                    const CibParams& cibParams,
                                    CppIndent        indentation /* = CppIndent */) const
{
  if (isNamespaceLike() && !needsBridging_.empty())
  {
    stm << '\n'; // Start in new line.
    if (!wrappingNsNamespaceDeclarations(cibParams).empty())
      stm << indentation << wrappingNsNamespaceDeclarations(cibParams);
    stm << " namespace " << nsName() << " {\n";
    stm << indentation << "class __zz_cib_Helper;\n";
    stm << indentation << "struct __zz_cib_Delegator;\n";
    stm << indentation << "}";
    if (!wrappingNsNamespaceDeclarations(cibParams).empty())
      stm << indentation << closingBracesForWrappingNsNamespaces() << '\n';
  }

  for (auto mem : members_)
  {
    if (mem->isNamespaceLike())
      static_cast<const CibCppCompound*>(mem)->emitHelperDecl(stm, helper, cibParams);
  }
}

void CibCppCompound::emitFunctionInvokeHelper(std::ostream&           stm,
                                              const CibFunctionHelper func,
                                              const CibHelper&        helper,
                                              const CibParams&        cibParams,
                                              const CibIdData*        cibIdData,
                                              CppIndent               indentation /* = CppIndent */) const
{
  if (func.isPureVirtual() && !func.isDestructor())
    return;
  stm << indentation << "static ";
  func.emitCAPIReturnType(stm, helper, false);
  stm << ' ' << cibIdData->getMethodCApiName(func.signature(helper)) << "(";
  if (isClassLike() && !func.isStatic() && !func.isConstructor() && !func.isCopyConstructor())
  {
    stm << "__zz_cib_HANDLE* __zz_cib_obj";
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
  stm << indentation++ << "return instance().invoke<" << func.procType()
      << ", __zz_cib_methodid::" << cibIdData->getMethodCApiName(func.signature(helper)) << ">(";
  if (isClassLike() && !func.isStatic() && !func.isConstructor() && !func.isCopyConstructor())
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
  func.emitArgsForCall(stm, helper, cibParams, CallType::kAsIs);
  stm << ");\n";
  --indentation;
  if (func.isDestructor())
  {
    --indentation;
    stm << indentation << "}\n";
  }
  stm << --indentation << "}\n";
}

void CibCppCompound::emitHelperDefnStart(std::ostream&    stm,
                                         const CibParams& cibParams,
                                         CppIndent        indentation /* = CppIndent */) const
{
  stm << indentation << wrappingNsNamespaceDeclarations(cibParams) << " namespace " << nsName() << " {\n";
  stm << indentation << "class __zz_cib_Helper : public __zz_cib_::__zz_cib_MethodTableHelper";
  if (!isClassLike())
  {
    stm << " {\n";
    stm << indentation++ << "public:\n";
  }
  else
  {
    std::string handleHelperParentName = "__zz_cib_::__zz_cib_HandleHelper<" + longName() + ", __zz_cib_Helper>";
    stm << '\n' << ++indentation << ", public " << handleHelperParentName << " {\n";
    stm << --indentation << "private:\n";
    stm << ++indentation << "friend " << compoundType_ << ' ' << longName() << ";\n";
    stm << indentation << "friend class " << handleHelperParentName << ";\n";
    if (needsGenericProxyDefinition())
      stm << indentation << "static const __zz_cib_MethodTable* __zz_cib_get_proxy_method_table();\n";
    stm << '\n'; // Start in new line.
  }

  stm << indentation << "__zz_cib_Helper()\n";
  stm << ++indentation << ": __zz_cib_::__zz_cib_MethodTableHelper(\n";
  stm << ++indentation << "__zz_cib_" << cibParams.moduleName << "_GetMethodTable(__zz_cib_classid))\n";
  --indentation;
  stm << --indentation << "{}\n";
  stm << indentation << "static __zz_cib_Helper& instance() {\n";
  stm << ++indentation << "static __zz_cib_Helper helper;\n";
  stm << indentation << "return helper;\n";
  stm << --indentation << "}\n";
  stm << '\n'; // Start in new line.
}

void CibCppCompound::emitCastingHelpers(std::ostream&    stm,
                                        const CibParams& cibParams,
                                        const CibIdData* cibIdData,
                                        CppIndent        indentation /* = CppIndent */) const
{
  forEachAncestor(kPublic, [&](const CibCppCompound* pubParent) {
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

void CibCppCompound::emitFacadeHelpers(std::ostream&    stm,
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

void CibCppCompound::emitHandleHelpers(std::ostream&    stm,
                                       const CibParams& cibParams,
                                       const CibIdData* cibIdData,
                                       CppIndent        indentation) const
{
  emitFromHandleDecl(stm, cibParams, indentation);
  stm << --indentation << "public:\n";
  ++indentation;
  if (!isAbstract())
  {
    stm << ++indentation << "static " << longName() << " __zz_cib_obj_from_handle(__zz_cib_HANDLE* h) {\n";
    stm << ++indentation << "return " << longName() << "(h);\n";
    stm << --indentation << "}\n";
  }
  stm << indentation << "static __zz_cib_HANDLE*& __zz_cib_get_handle(" << longName() << "* __zz_cib_obj) {\n";
  stm << ++indentation << "return __zz_cib_obj->__zz_cib_h_;\n";
  stm << --indentation << "}\n";
  stm << indentation << "static __zz_cib_HANDLE* const& __zz_cib_get_handle(const " << longName() << "* __zz_cib_obj) {\n";
  stm << ++indentation << "return __zz_cib_obj->__zz_cib_h_;\n";
  stm << --indentation << "}\n";
  stm << indentation << "static __zz_cib_HANDLE* __zz_cib_release_handle(" << longName() << "* __zz_cib_obj) {\n";
  ++indentation;
  if (isShared())
    stm << indentation << "__zz_cib_remove_proxy(__zz_cib_obj->__zz_cib_h_);\n";
  stm << indentation << "auto h = __zz_cib_obj->__zz_cib_h_;\n";
  stm << indentation << "__zz_cib_obj->__zz_cib_h_ = nullptr;\n";
  forEachParent(kPublic, [&stm, &indentation](const CibCppCompound* baseCompound) {
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
    --indentation;
    stm << --indentation << "}\n";
    stm << --indentation << "}\n";
  }
}

void CibCppCompound::emitHelperDefn(std::ostream&    stm,
                                    const CibHelper& helper,
                                    const CibParams& cibParams,
                                    const CibIdMgr&  cibIdMgr,
                                    CppIndent        indentation /* = CppIndent */) const
{
  if (!needsBridging())
    return;

  stm << '\n';
  emitHelperDefnStart(stm, cibParams, indentation++);
  auto cibIdData = cibIdMgr.getCibIdData(longName());
  for (auto func : needsBridging_)
    emitFunctionInvokeHelper(stm, func, helper, cibParams, cibIdData, indentation);
  emitCastingHelpers(stm, cibParams, cibIdData, indentation);

  if (isFacadeLike())
    emitFacadeHelpers(stm, cibIdData, indentation);

  if (isClassLike() && (isShared() || !isEmpty()))
    emitHandleHelpers(stm, cibParams, cibIdData, indentation);
  emitHelperDefnEnd(stm, indentation);
}

void CibCppCompound::emitHelperDefnEnd(std::ostream& stm, CppIndent indentation) const
{
  stm << --indentation << "};\n";
  stm << indentation << closingBracesForWrappingNsNamespaces() << "}\n";
}

void CibCppCompound::emitHandleConstructorDefn(std::ostream&    stm,
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
  stm << fullName() << "::" << ctorName() << "(__zz_cib_::__zz_cib_HANDLE* h)\n";
  ++indentation;
  char sep = ':';
  forEachParent(kPublic, [&](const CibCppCompound* pubParent) {
    if (pubParent->isShared() || !pubParent->isEmpty())
    {
      auto capiName = cibIdData->getMethodCApiName(castToBaseName(pubParent, cibParams));
      stm << indentation << sep << " ::" << pubParent->fullName() << "(__zz_cib_" << longName()
          << "::__zz_cib_Helper::" << capiName << "(h))\n";
      sep = ',';
    }
    return true;
  });
  stm << indentation << sep << " __zz_cib_h_(h)\n";
  stm << --indentation << '{';
  if (isShared())
  {
    stm << '\n'
        << ++indentation << "__zz_cib_" << longNsName()
        << "::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);\n";
    stm << --indentation;
  }
  stm << "}\n";
}

void CibCppCompound::emitMoveConstructorDecl(std::ostream& stm, CppIndent indentation /* = CppIndent */) const
{
  stm << --indentation << "public:\n";
  stm << ++indentation << ctorName() << '(' << name() << "&& rhs);\n";
}

void CibCppCompound::emitMoveConstructorDefn(std::ostream&    stm,
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
  stm << fullName() << "::" << ctorName() << '(' << name() << "&& rhs)\n";
  ++indentation;
  char sep = ':';
  forEachParent(kPublic, [&](const CibCppCompound* pubParent) {
    if (pubParent->isShared() || !pubParent->isEmpty())
    {
      auto capiName = cibIdData->getMethodCApiName(castToBaseName(pubParent, cibParams));
      stm << indentation << sep << " ::" << pubParent->fullName() << "(std::move(rhs))\n";
      sep = ',';
    }
    return true;
  });
  stm << indentation << sep << " __zz_cib_h_(rhs.__zz_cib_h_)";
  stm << --indentation << "\n{\n";
  stm << ++indentation << "rhs.__zz_cib_h_ = nullptr;\n";
  if (isShared())
  {
    stm << indentation << "__zz_cib_" << longNsName() << "::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);\n";
  }
  stm << --indentation << "}\n";
}

void CibCppCompound::emitDefn(std::ostream&    stm,
                              bool             asInline,
                              const CibHelper& helper,
                              const CibParams& cibParams,
                              const CibIdMgr&  cibIdMgr,
                              CppIndent        indentation /* = CppIndent */) const
{
  auto cibIdData = cibIdMgr.getCibIdData(longName());
  if (isClassLike() && (isShared() || needsBridging()))
  {
    // Emit the ctor to construct from __zz_cib_HANDLE.
    emitHandleConstructorDefn(stm, asInline, helper, cibParams, cibIdMgr, indentation);
    if (!moveCtor())
      emitMoveConstructorDefn(stm, asInline, helper, cibParams, cibIdMgr, indentation);
  }
  for (auto func : needsClientDefinition_)
  {
    if (func.isPureVirtual() && !func.isDestructor())
      continue;
    stm << '\n'; // Start in new line.
    func.emitDefn(stm, asInline, helper, cibParams, this, cibIdData, indentation);
  }
}

void CibCppCompound::emitGenericProxyDefn(std::ostream&    stm,
                                          const CibHelper& helper,
                                          const CibParams& cibParams,
                                          const CibIdMgr&  cibIdMgr,
                                          CppIndent        indentation) const
{
  if (!needsGenericProxyDefinition())
    return;

  stm << indentation << wrappingNsNamespaceDeclarations(cibParams) << " namespace " << nsName() << " {\n";
  stm << "namespace __zz_cib_GenericProxy {\n";
  stm << indentation << "class " << name() << " : public " << longName() << " {\n";
  stm << ++indentation << "__zz_cib_PROXY* __zz_cib_proxy;\n";
  stm << indentation << "const __zz_cib_MethodTableHelper __zz_cib_mtbl_helper;\n\n";
  stm << indentation << "const __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() const {\n";
  stm << ++indentation << "return __zz_cib_mtbl_helper;\n";
  stm << --indentation << "}\n";

  --indentation;
  stm << indentation << "public:\n";
  stm << ++indentation << "__ZZ_CIB_DELEGATOR_MEMBERS(" << name() << ", " << longName() << ")\n\n";
  auto cibIdData = cibIdMgr.getCibIdData(longName() + "::__zz_cib_GenericProxy");
  for (auto ctor : ctors())
  {
    CibFunctionHelper func = ctor;
    if (!isMemberPrivate(ctor->prot_, compoundType_))
    {
      func.emitGenericProxyDefn(
        stm, helper, cibParams, cibIdData->getMethodCApiName(func.signature(helper)), indentation);
    }
  }
  for (auto func : allVirtuals_)
    func.emitGenericProxyDefn(
      stm, helper, cibParams, cibIdData->getMethodCApiName(func.signature(helper)), indentation);
  CibFunctionHelper func = dtor();
  func.emitGenericProxyDefn(stm, helper, cibParams, cibIdData->getMethodCApiName(func.signature(helper)), indentation);
  stm << indentation << "void __zz_cib_release_proxy() { __zz_cib_proxy = nullptr; }\n";
  --indentation;
  stm << indentation << "};\n";
  stm << indentation << closingBracesForWrappingNsNamespaces() << "}}\n";
}

void CibCppCompound::emitGenericDefn(std::ostream&    stm,
                                     const CibHelper& helper,
                                     const CibParams& cibParams,
                                     const CibIdMgr&  cibIdMgr,
                                     CppIndent        indentation) const
{
  if (!isFacadeLike())
    return;

  stm << indentation << wrappingNsNamespaceDeclarations(cibParams) << " namespace " << nsName()
      << " { namespace __zz_cib_Generic {\n";
  stm << indentation << "class " << name() << " : public " << longName() << " {\n";
  stm << ++indentation << "__zz_cib_HANDLE* __zz_cib_h_;\n\n";
  stm << indentation << "static __zz_cib_::__zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() {\n";
  stm << ++indentation << "static __zz_cib_::__zz_cib_MethodTableHelper mtableHelper(__zz_cib_" << cibParams.moduleName
      << "_GetMethodTable(\n";
  stm << ++indentation << "__zz_cib_classid));\n";
  stm << --indentation << "return mtableHelper;\n";
  stm << --indentation << "}\n";
  stm << indentation << name() << "(__zz_cib_HANDLE* h) : " << longNsName() << "(h), __zz_cib_h_(h) {}\n";
  stm << --indentation << "public:\n";
  stm << ++indentation << "static " << longName() << "* __zz_cib_from_handle(__zz_cib_HANDLE* h) {\n";
  stm << ++indentation << "return new " << name() << "(h);\n";
  stm << --indentation << "}\n";

  auto* cibIdData = cibIdMgr.getCibIdData(longName());
  for (auto func : allVirtuals_)
    func.emitGenericDefn(
      stm, helper, cibParams, cibIdData->getMethodCApiName(func.signature(helper)), kPurposeGeneric, indentation);
  CibFunctionHelper func = dtor();
  func.emitGenericDefn(
    stm, helper, cibParams, cibIdData->getMethodCApiName(func.signature(helper)), kPurposeGeneric, indentation);
  --indentation;
  stm << indentation << "};\n";
  stm << indentation << closingBracesForWrappingNsNamespaces() << "}}\n";
}

// TODO: Rename this function as now it doesn't only emit facade/interface headers.
void CibCppCompound::emitFacadeAndInterfaceDependecyHeaders(std::ostream&    stm,
                                                            const CibHelper& helper,
                                                            const CibParams& cibParams,
                                                            const CibIdMgr&  cibIdMgr,
                                                            bool             forProxy,
                                                            CppIndent        indentation /* = CppIndent */) const
{
  std::set<const CibCppCompound*> facades;
  collectFacades(facades);
  std::set<const CppObj*> dependencies;
  collectTypeDependencies(helper, dependencies);
  dependencies.insert(this);
  for (auto facade : facades)
  {
    dependencies.insert(facade);
    facade->forEachDescendent(kPublic, [&dependencies](const CibCppCompound* obj) { dependencies.insert(obj); });
  }
  if (!dependencies.empty())
  {
    auto asts = collectAstDependencies(dependencies);
    asts.insert(getFileDomObj(this));
    for (const auto& header : collectHeaderDependencies(asts, cibParams.inputPath))
      stm << indentation << "#include \"" << header << "\"\n";
  }
  stm << '\n'; // Start in new line.
  if (!facades.empty() && !forProxy)
  {
    // Assuming there is a facade like class in this file
    stm << "#include <typeinfo>\n";
    stm << "#include <typeindex>\n";
    stm << "#include <cstdint>\n";
    stm << "#include <unordered_map>\n\n";
    stm << "extern std::unordered_map<std::type_index, std::uint32_t> __zz_cib_gClassIdRepo;\n\n";
  }
}

void CibCppCompound::emitLibGlueCode(std::ostream&    stm,
                                     const CibHelper& helper,
                                     const CibParams& cibParams,
                                     const CibIdMgr&  cibIdMgr,
                                     CppIndent        indentation /* = CppIndent */) const
{
  if (!isCppFile())
    return;

  emitDependecyHeaders(stm, helper, cibParams, cibIdMgr, indentation);

  auto processCompoundForDelegators = [&](const CibCppCompound* compound) {
    if (compound->isTemplated())
    {
      compound->forEachTemplateInstance([&](CibCppCompound* templateInstace) {
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

  forEachNested([&](const CibCppCompound* nested) {
    if (nested->isClassLike())
      processCompoundForDelegators(nested);
  });
}

void CibCppCompound::emitDependecyHeaders(std::ostream&    stm,
                                          const CibHelper& helper,
                                          const CibParams& cibParams,
                                          const CibIdMgr&  cibIdMgr,
                                          CppIndent        indentation /* = CppIndent */) const
{
  emitFacadeAndInterfaceDependecyHeaders(stm, helper, cibParams, cibIdMgr, false, indentation);
  emitCommonCibHeaders(stm, cibParams);
}

void CibCppCompound::emitCommonCibHeaders(std::ostream& stm, const CibParams& cibParams)
{
  stm << "#include \"__zz_cib_" << cibParams.moduleName << "-ids.h\"\n";
  stm << "#include \"__zz_cib_" << cibParams.moduleName << "-mtable-helper.h\"\n";
  stm << "#include \"__zz_cib_" << cibParams.moduleName << "-delegate-helper.h\"\n";
  stm << "#include \"__zz_cib_" << cibParams.moduleName << "-proxy.h\"\n";
  stm << '\n';
}

void CibCppCompound::emitDelegators(std::ostream&    stm,
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
  stm << indentation << wrappingNsNamespaceDeclarations(cibParams) << " namespace " << nsName() << " {\n";
  auto parentClass =
    needsGenericProxyDefinition() ? "__zz_cib_" + longName() + "::__zz_cib_GenericProxy::" + name() : longName();
  std::string delegatee;
  if (needsDelagatorClass())
  {
    stm << indentation++ << "struct __zz_cib_Delegator : public " << parentClass << " {\n";
    stm << indentation << "using __zz_cib_ParentClass = " << parentClass << ";\n";
    stm << indentation << "using __zz_cib_ParentClass::__zz_cib_ParentClass;\n";
    stm << indentation << "__ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib_Delegator, __zz_cib_ParentClass)\n";
    delegatee = "__zz_cib_Delegator";
  }
  else
  {
    stm << indentation << "namespace __zz_cib_Delegator {\n";
    delegatee = parentClass;
  }
  if (isClassLike())
    stm << indentation << "using __zz_cib_Delegatee = " << delegatee << ";\n";
  else if (isNamespace())
    stm << indentation << "namespace __zz_cib_Delegatee = " << delegatee << ";\n";

  std::unordered_set<std::string> funcSignatures;
  for (auto func : needsBridging_)
  {
    if (funcSignatures.insert(func.signature(helper)).second)
      func.emitCAPIDefn(
        stm, helper, cibParams, this, cibIdData->getMethodCApiName(func.signature(helper)), false, indentation);
  }

  forEachAncestor(kPublic, [&](const CibCppCompound* pubParent) {
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

  if (isFacadeLike())
  {
    stm << indentation << "static std::uint32_t __zz_cib_decl " << cibIdData->getMethodCApiName("__zz_cib_get_class_id")
        << "(" << longName() << "** __zz_cib_obj) {\n";
    ++indentation;
    stm << indentation << "static bool classIdRepoPopulated = false;\n";
    stm << indentation << "if (!classIdRepoPopulated) {\n";
    ++indentation;
    forEachDescendent(kPublic, [&](const CibCppCompound* compound) {
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
    forEachDescendent(kPublic, [&](const CibCppCompound* compound) {
      stm << indentation++ << "{\n";
      stm << indentation << "auto* obj = dynamic_cast<"<< compound->longNsName() << "*>(*__zz_cib_obj);\n";
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
        << longName() << "* __zz_cib_obj) {\n";
    ++indentation;
    stm << indentation << "auto unknownProxy = dynamic_cast<__zz_cib_" << longName()
        << "::__zz_cib_GenericProxy::" << name() << "*>(__zz_cib_obj);\n";
    stm << indentation << "if (unknownProxy)\n";
    ++indentation;
    stm << indentation << "unknownProxy->__zz_cib_release_proxy();\n";
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

void CibCppCompound::collectPublicCompounds(std::vector<const CibCppCompound*>& compounds) const
{
  for (auto mem : members_)
  {
    if (!mem->isNamespaceLike())
      continue;
    auto compound = static_cast<const CibCppCompound*>(mem);
    if (!isMemberPublic(mem->prot_, compoundType_))
      continue;
    compound->collectPublicCompounds(compounds);
    compound->forEachTemplateInstance(
      [&](CibCppCompound* templateIns) { templateIns->collectPublicCompounds(compounds); });
  }
  if (isNamespaceLike() && !needsBridging_.empty())
  {
    compounds.push_back(this);
  }
}

void CibCppCompound::emitMethodTableGetterDefn(std::ostream&    stm,
                                               const CibHelper& helper,
                                               const CibParams& cibParams,
                                               const CibIdMgr&  cibIdMgr,
                                               bool             forProxy,
                                               CppIndent        indentation /* = CppIndent */) const
{
  if (forProxy) // TODO: simplify this.
  {
    for (CppObjArray::const_iterator memItr = members_.begin(); memItr != members_.end(); ++memItr)
    {
      CppObj* mem = *memItr;
      if (mem->objType_ == CppObj::kCompound)
      {
        auto* nested = static_cast<const CibCppCompound*>(mem);
        if (nested->needsGenericProxyDefinition())
          nested->emitMethodTableGetterDefn(stm, helper, cibParams, cibIdMgr, forProxy, indentation);
      }
    }
  }

  if (needsBridging())
  {
    stm << indentation << wrappingNsNamespaceDeclarations(cibParams) << " namespace " << nsName() << " {\n";
    if (forProxy)
      stm << "static ";
    stm << "const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {\n";
    const auto& className = forProxy ? longName() + "::__zz_cib_GenericProxy" : longName();
    stm << ++indentation << "static const __zz_cib_MTableEntry methodArray[] = {\n";
    ++indentation;
    CibMethodId nextMethodId = 0;
    const char* sep          = "";
    nextMethodId             = cibIdMgr.forEachMethod(
      className, [&](CibMethodId methodId, const CibMethodCAPIName& methodName, const CibMethodSignature& methodSig) {
        if (methodId == nextMethodId++)
        {
          stm << sep << indentation << "reinterpret_cast<__zz_cib_MTableEntry> (&";
          stm << "__zz_cib_Delegator::";
          stm << methodName << ')';
        }
        else
        {
          stm << sep << indentation << "reinterpret_cast<__zz_cib_MTableEntry> (nullptr)";
        }
        sep = ",\n";
      });
    stm << '\n';
    stm << --indentation << "};\n";
    stm << indentation << "static const __zz_cib_MethodTable methodTable = { "
        << "methodArray, " << cibIdMgr.numMethods(className) << " };\n";
    stm << indentation << "return &methodTable;\n";
    stm << --indentation << "}\n";
    stm << indentation << '}' << closingBracesForWrappingNsNamespaces() << '\n';
  }
}
