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
  return resolveTypeModifier(CppTypeModifier{kNoRef, 1, 0},
                             CppTypeModifier{kNoRef, typeModifier.ptrLevel_, typeModifier.constBits_});
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
  for (unsigned short i = 0; i <= typeModifier.ptrLevel_; ++i)
  {
    if (typeModifier.constBits_ & (1 << i))
      stm << " const ";
    if (i != typeModifier.ptrLevel_)
      stm << '*';
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
    if (!param.varObj->varDecl_.arraySizes_.empty())
    {
      // FIXME: Emit error if the parameter type is not of basic types
      for (const auto& idx : param.varObj->varDecl_.arraySizes_)
      {
        // FIXME use index values.
        stm << "[]";
      }
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
    switch (callType)
    {
      case CallType::kFromHandle:
        if (resolvedType)
          stm << "__zz_cib_" << resolvedType->longNsName() << "::__zz_cib_Helper::__zz_cib_from_handle(";
        emitParamName(stm, param.varObj, i);
        if (resolvedType)
          stm << ")";
        break;
      case CallType::kToHandle:
        if (resolvedType)
          stm << "__zz_cib_" << resolvedType->longNsName() << "::__zz_cib_Helper::__zz_cib_handle(";
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
  if (isFunction() && func_->retType_)
  {
    emitType(stm, func_->retType_, getOwner(), helper, purpose);
    stm << ' ';
  }
  stm << funcName() << '(';
  emitArgsForDecl(stm, helper, true, purpose);
  stm << ')';
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
  else if (isInline())
    stm << "inline ";
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
    emitType(stm, func_->retType_, callingOwner, helper, purpose);
  stm << " __zz_cib_decl ";
  stm << capiName << '(';
  if ((purpose != kPurposeSignature) && isConstructor() && callingOwner->needsGenericProxyDefinition())
  {
    stm << "__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl";
    if (hasParams())
      stm << ", ";
  }
  else if (!isStatic() && (isMethod() || isDestructor()))
  {
    if (isConst())
      stm << "const ";
    stm << callingOwner->longName() << "*";
    if (purpose != kPurposeSignature)
      stm << " __zz_cib_obj";
    if (hasParams())
      stm << ", ";
  }
  emitArgsForDecl(stm, helper, true, purpose);
  stm << ')';
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
    else
    {
      stm << callingOwner->longName();
      stm << '(';
    }
    emitArgsForCall(stm, helper, cibParams, callType);
    stm << ");\n";
  }
  else if (isDestructor())
  {
    stm << "delete __zz_cib_obj;\n";
  }
  else
  {
    bool convertFromValue = false;
    if (func_->retType_ && !func_->retType_->isVoid())
    {
      stm << "return ";
      if (func_->retType_->isByValue())
      {
        auto* resolvedCppObj = callingOwner->resolveTypeName(func_->retType_->baseType(), helper);
        auto* resolvedType   = resolvedCppObj && resolvedCppObj->isClassLike()
                               ? static_cast<const CibCppCompound*>(resolvedCppObj)
                               : nullptr;
        convertFromValue = (resolvedType != nullptr);
        if (convertFromValue)
        {
          auto retTypeCompound = static_cast<const CppCompound*>(resolvedType);
          stm << "new ::" << retTypeCompound->fullName() << '(';
        }
      }
      else if (func_->retType_->isByRef())
      {
        stm << '&';
      }
    }
    if (callingOwner->isClassLike() && !isStatic())
      stm << "__zz_cib_obj->";
    if (!forProxy && !isPureVirtual())
      stm << callingOwner->longName() << "::";
    stm << funcName();
    stm << '(';
    emitArgsForCall(stm, helper, cibParams, callType);
    if (convertFromValue)
      stm << ')';
    stm << ");\n";
  }
  stm << --indentation << "}\n";
}

void CibFunctionHelper::emitDefn(std::ostream&         stm,
                                 const CibHelper&      helper,
                                 const CibParams&      cibParams,
                                 const CibCppCompound* callingOwner,
                                 const CibIdData*      cibIdData,
                                 CppIndent             indentation) const
{
  stm << indentation << "inline ";
  if (isFunction())
  {
    emitType(stm, returnType(), callingOwner, helper, kPurposeProxyDefn);
    stm << ' ';
  }
  stm << callingOwner->fullName() << "::" << funcName() << '(';
  emitArgsForDecl(stm, helper, true, kPurposeProxyDefn);
  stm << ")";
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
    if (isFunction() && returnType() && !returnType()->isVoid())
    {
      stm << "return ";
      auto* resolvedCppObj = callingOwner->resolveTypeName(returnType()->baseType(), helper);
      retType =
        resolvedCppObj && resolvedCppObj->isClassLike() ? static_cast<const CibCppCompound*>(resolvedCppObj) : nullptr;
      if (retType && returnType()->isByValue())
      {
        stm << "__zz_cib_" << retType->longNsName() << "::__zz_cib_Helper::__zz_cib_obj_from_handle(\n";
      }
      else
      {
        if (returnType()->isByRef())
        {
          stm << '*';
        }
        if (retType)
          stm << "__zz_cib_" << retType->longNsName() << "::__zz_cib_Helper::__zz_cib_from_handle(\n";
      }
      stm << ++indentation;
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
  bool byValueObj = [&]() {
    if (genericProxy && returnType() && returnType()->isByValue())
    {
      auto* resolvedCppObj = (getOwner() ? getOwner()->resolveTypeName(returnType()->baseType(), helper) : nullptr);
      return (resolvedCppObj && resolvedCppObj->isClassLike());
    }
    return false;
  }();
  if (byValueObj || (genericProxy && returnType() && returnType()->isByRef()))
    stm << "*";
  stm << "__zz_cib_get_mtable_helper().invoke<" << procType() << ">(\n";
  stm << ++indentation;
  if (genericProxy)
  {
    stm << "__zz_cib_GenericProxy::__zz_cib_methodid::";
  }
  else
  {
    stm << "__zz_cib_methodid::";
  }
  stm << capiName << ",\n";
  if (genericProxy)
    stm << indentation << "__zz_cib_proxy";
  else
    stm << indentation << "__zz_cib_h_";
  if (hasParams())
  {
    stm << ",\n";
    stm << indentation;
    emitArgsForCall(stm, helper, cibParams, genericProxy ? CallType::kRefIfByVal : CallType::kToHandle);
  }
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
  if (!isStatic() && (isDestructor() || isMethod()))
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
      stm, func_->retType_, getOwner(), helper, forGenericProxy ? kPurposeGenericProxyProcType : kPurposeProxyProcType);
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

void CibCppCompound::emitUserHeader(const CibHelper& helper, const CibParams& cibParams) const
{
  if (!isCppFile())
    return;

  bfs::path usrIncPath = cibParams.outputPath / name().substr(cibParams.inputPath.string().length());
  bfs::create_directories(usrIncPath.parent_path());
  std::ofstream stm(usrIncPath.string(), std::ios_base::out);

  auto firstStatementItr      = std::find_if(members_.begin(), members_.end(), [](const CppObj* mem) -> bool {
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

  stm << "#include \"" << implIncludeName(cibParams) << "-predef.h\"\n\n";
  for (; memItr != members_.end(); ++memItr)
  {
    emitDecl(*memItr, stm, helper, cibParams);
  }
  stm << "\n#include \"" << implIncludeName(cibParams) << "-impl.h\"\n";
}

void CibCppCompound::emitPredefHeader(const CibHelper& helper, const CibParams& cibParams) const
{
  if (!isCppFile())
    return;

  auto implPath = cibParams.outputPath / (getImplPath(cibParams) + "-predef.h");
  bfs::create_directories(implPath.parent_path());
  std::ofstream stm(implPath.string(), std::ios_base::out);

  stm << "#include \"" << cibParams.cibInternalDirName << "/__zz_cib_" << cibParams.moduleName
      << "-class-internal-def.h\"\n";

  emitHelperDecl(stm, helper, cibParams);
}

void CibCppCompound::emitImplHeader(const CibHelper& helper, const CibParams& cibParams, const CibIdMgr& cibIdMgr) const
{
  if (!isCppFile())
    return;

  auto          implPath = cibParams.outputPath / (getImplPath(cibParams) + "-impl.h");
  std::ofstream stm(implPath.string(), std::ios_base::out);
  stm << "#include \"__zz_cib_" << cibParams.moduleName << "-def.h\"\n";
  stm << "#include \"__zz_cib_" << cibParams.moduleName << "-ids.h\"\n";
  stm << "#include \"__zz_cib_" << cibParams.moduleName << "-mtable-helper.h\"\n";
  stm << "#include \"__zz_cib_" << cibParams.moduleName << "-handle-helper.h\"\n";

  emitHelperDefn(stm, helper, cibParams, cibIdMgr);
  emitDefn(stm, helper, cibParams, cibIdMgr);
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
    for (auto func : allVirtuals_)
      func.emitCAPIDefn(
        stm, helper, cibParams, this, cibIdData->getMethodCApiName(func.signature(helper)), true, indentation);
    CibFunctionHelper func = dtor();
    func.emitCAPIDefn(
      stm, helper, cibParams, this, cibIdData->getMethodCApiName(func.signature(helper)), true, indentation);
    stm << indentation << '}' << closingBracesForWrappingNsNamespaces() << "\n\n";
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
  bfs::path usrSrcPath = cibParams.outputPath / name_.substr(cibParams.inputPath.string().length());
  usrSrcPath.replace_extension(".cpp");
  {
    std::ofstream stm(usrSrcPath.string(), std::ios_base::out);

    emitFacadeAndInterfaceDependecyHeaders(stm, helper, cibParams, cibIdMgr, true, CppIndent());
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

void CibCppCompound::collectTypeDependencies(const CibHelper& helper, std::set<const CppObj*>& cppObjs) const
{
  for (auto mem : members_)
  {
    if (!isMemberPublic(mem->prot_, compoundType_))
      continue;
    if (mem->isNamespaceLike())
    {
      auto compound = static_cast<const CibCppCompound*>(mem);
      compound->collectTypeDependencies(helper, cppObjs);
      if (compound->isTemplated())
      {
        compound->forEachTemplateInstance([&](const TemplateArgs&, CibCppCompound* tmplInstance) {
          tmplInstance->collectTypeDependencies(helper, cppObjs);
        });
      }
    }
    else if (mem->isFunctionLike())
    {
      auto addDependency = [&](const std::string& typeName) {
        auto* resolvedCppObj = resolveTypeName(typeName, helper);
        auto* resolvedType   = resolvedCppObj && resolvedCppObj->isClassLike()
                               ? static_cast<const CibCppCompound*>(resolvedCppObj)
                               : nullptr;
        if (resolvedType)
          cppObjs.insert(resolvedType);
      };
      CibFunctionHelper func(mem);
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

std::set<std::string> CibCppCompound::collectHeaderDependencies(const CibHelper& helper) const
{
  std::set<const CppObj*> cppObjs;
  collectTypeDependencies(helper, cppObjs);
  bfs::path path = getFileDomObj(this)->name();
  return collectHeaderDependencies(cppObjs, path.parent_path().string());
}

const CibCppCompound* CibCppCompound::getFileDomObj(const CppObj* obj)
{
  const CppCompound* parent = obj->objType_ == kCompound ? static_cast<const CppCompound*>(obj) : obj->owner_;
  while (parent->owner_)
    parent = parent->owner_;
  return static_cast<const CibCppCompound*>(parent);
}

std::set<std::string> CibCppCompound::collectHeaderDependencies(const std::set<const CppObj*>& cppObjs,
                                                                const std::string&             dependentPath)
{
  std::set<std::string> headers;
  // std::string           parentPath = bfs::path(dependentPath).parent_path().string();

  for (auto obj : cppObjs)
  {
    auto fileDom = getFileDomObj(obj);
    headers.emplace(fileDom->name().substr(dependentPath.length()));
  }
  return headers;
}

std::string CibCppCompound::getImplPath(const CibParams& cibParams) const
{
  bfs::path impl         = name();
  auto      implFilename = impl.stem().string();
  impl.remove_filename();
  impl /= implFilename;
  return (bfs::path(cibParams.cibInternalDirName) / bfs::relative(impl, cibParams.inputPath)).string();
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
    prevPos = newLinePos + startPos + 1;
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
    if (objNeedingBridge_.count(obj))
    {
      CibFunctionHelper func = obj;
      func.emitOrigDecl(stm, helper, cibParams, kPurposeProxyDecl, indentation);
    }
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
  if (isInline())
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
      if (isInline())
      {
        emitInheritance(kProtected, sep);
        emitInheritance(kPrivate, sep);
      }
    }
    stm << '\n' << indentation++ << "{\n";
  }

  if (isClassLike() && !isInline() && !needsBridging_.empty())
    emitMoveConstructorDecl(stm, indentation);

  CppObjProtLevel         lastProt = kUnknownProt;
  std::set<const CppObj*> memDeclared;
  for (auto mem : members_)
  {
    if (!isInline()
        && !isMemberPublic(mem->prot_, compoundType_)) // We will emit only public members unless class is inline.
      continue;
    if (isClassLike() && lastProt != mem->prot_)
    {
      if (mem->prot_ != kUnknownProt)
        stm << --indentation << mem->prot_ << ":\n";
      ++indentation;
      lastProt = mem->prot_;
    }
    emitDecl(mem, stm, helper, cibParams, indentation);
    memDeclared.insert(mem);
  }
  for (auto func : needsBridging_)
  {
    if (memDeclared.count(func))
      continue;
    if (func.protectionLevel() != lastProt)
    {
      stm << --indentation << func.protectionLevel() << ":\n";
      ++indentation;
    }
    func.emitOrigDecl(stm, helper, cibParams, kPurposeProxyDecl, indentation);
  }

  if (isClassLike())
  {
    if (!isInline())
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
  stm << indentation << longName() << "* __zz_cib_" << longName()
      << "::__zz_cib_Helper::__zz_cib_create_proxy(__zz_cib_HANDLE* h) {\n";
  ++indentation;
  stm << indentation << "switch(__zz_cib_get_class_id(h)) {\n";
  forEachDescendent(kPublic, [&](const CibCppCompound* derived) {
    auto cibIdData = cibIdMgr.getCibIdData(derived->longName());
    if (cibIdData)
    {
      stm << indentation << "case __zz_cib_::" << derived->fullNsName() << "::__zz_cib_classid:\n";
      ++indentation;
      stm << indentation << "return __zz_cib_" << derived->longName()
          << "::__zz_cib_Helper::__zz_cib_from_handle(h);\n";
      --indentation;
    }
  });
  stm << indentation << "default:\n";
  stm << ++indentation << "return ::__zz_cib_" << longName() << "::__zz_cib_Generic::" << name()
      << "::__zz_cib_from_handle(h);\n";
  stm << --indentation << "}\n";
  --indentation;
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
  };
  forEachAncestor(kPublic, processClass);
  processClass(this);

  return !unresolvedPureVirtSigs.empty();
}

void CibCppCompound::identifyMethodsToBridge(const CibHelper& helper)
{
  if (isTemplated())
  {
    for (auto& templateInstace : templateInstances_)
      templateInstace.second->identifyMethodsToBridge(helper);
    return;
  }
  // A class that is inline and not shared don't need any bridging.
  // An inline class that is shared should be treated same as non-inline class.
  if (isInline() && !isShared())
    return;
  if (name().empty())
    return;
  if (isClassLike() && collectAllVirtuals(helper, allVirtuals_))
    setAbstract();
  for (auto mem : members_)
  {
    if (!mem->isPublic())
      continue;
    if (mem->isFunctionLike())
    {
      CibFunctionHelper func(mem);
      if (func.isMoveConstructor())
        continue;
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
      if (func.isPureVirtual() && !needsGenericProxyDefinition() && !func.isDestructor())
        continue;
      if (func.hasVariadicParam())
        continue;
      needsBridging_.push_back(func);
      objNeedingBridge_.insert(mem);
    }
    else if (mem->isNamespaceLike())
    {
      auto compound = static_cast<CibCppCompound*>(mem);
      compound->identifyMethodsToBridge(helper);
    }
  }
  if (!isClassLike())
    return;

  if (!hasDtor() && (!isAbstract() || needsGenericProxyDefinition()))
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

void CibCppCompound::emitHelperDefn(std::ostream&    stm,
                                    const CibHelper& helper,
                                    const CibParams& cibParams,
                                    const CibIdMgr&  cibIdMgr,
                                    CppIndent        indentation /* = CppIndent */) const
{
  if (templSpec_ && templateInstances_.empty())
    return;

  if (isNamespaceLike() && !needsBridging_.empty())
  {
    stm << '\n'; // Start in new line.
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
    }
    if (needsGenericProxyDefinition())
      stm << indentation << "static const __zz_cib_MethodTable* __zz_cib_get_proxy_method_table();\n";
    stm << '\n'; // Start in new line.
    auto cibIdData = cibIdMgr.getCibIdData(longName());
    for (auto func : needsBridging_)
    {
      if (func.isPureVirtual() && !func.isDestructor())
        continue;
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
      stm << indentation << "return instance().invoke<" << func.procType() << ">(\n";
      stm << ++indentation << "__zz_cib_methodid::";
      stm << cibIdData->getMethodCApiName(func.signature(helper));
      if (isClassLike() && !func.isStatic() && !func.isConstructor() && !func.isCopyConstructor())
      {
        stm << ",\n" << indentation << "__zz_cib_obj";
      }
      else if (needsGenericProxyDefinition() && func.isConstructor())
      {
        stm << ",\n" << indentation;
        stm << "__zz_cib_proxy, __zz_cib_get_proxy_method_table()";
      }
      if (func.hasParams())
      {
        stm << ",\n";
        stm << indentation;
      }
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
    forEachAncestor(kPublic, [&](const CibCppCompound* pubParent) {
      auto castProcName = castToBaseName(pubParent, cibParams);
      auto capiName     = cibIdData->getMethodCApiName(castProcName);
      stm << indentation << "static __zz_cib_HANDLE* " << capiName << "(__zz_cib_HANDLE* __zz_cib_obj) {\n";
      stm << ++indentation << "using " << castProcName
          << "Proc = __zz_cib_HANDLE* (__zz_cib_decl *) (__zz_cib_HANDLE* h);\n";
      stm << indentation << "return instance().invoke<" << castProcName << "Proc>(\n";
      stm << ++indentation << "__zz_cib_methodid::";
      stm << capiName << ",\n";
      stm << indentation << "__zz_cib_obj);\n";
      --indentation;
      stm << --indentation << "}\n";
    });
    if (!needsBridging_.empty())
    {
      stm << indentation << "__zz_cib_Helper()\n";
      stm << ++indentation << ": __zz_cib_::__zz_cib_MethodTableHelper(\n";
      stm << ++indentation << "__zz_cib_" << cibParams.moduleName << "_GetMethodTable(__zz_cib_classid))\n";
      --indentation;
      stm << --indentation << "{}\n";
      stm << indentation << "static const __zz_cib_Helper& instance() {\n";
      stm << ++indentation << "static __zz_cib_Helper helper;\n";
      stm << indentation << "return helper;\n";
      stm << --indentation << "}\n";
    }
    stm << '\n'; // Start in new line.
    if (isFacadeLike())
    {
      stm << indentation << "static std::uint32_t __zz_cib_get_class_id(__zz_cib_HANDLE* __zz_cib_obj) {\n";
      stm << ++indentation
          << "using __zz_cib_get_class_idProc = std::uint32_t (__zz_cib_decl *) "
             "(__zz_cib_HANDLE*);\n";
      stm << indentation << "return instance().invoke<__zz_cib_get_class_idProc>(\n";
      stm << ++indentation << "__zz_cib_methodid::" << cibIdData->getMethodCApiName("__zz_cib_get_class_id") << ",\n";
      stm << indentation-- << "__zz_cib_obj);\n";
      stm << --indentation << "}\n";
    }
    if (isClassLike())
    {
      emitFromHandleDecl(stm, cibParams, indentation);
      stm << --indentation << "public:\n";
      if (!isAbstract())
      {
        stm << ++indentation << "static " << longName() << " __zz_cib_obj_from_handle(__zz_cib_HANDLE* h) {\n";
        stm << ++indentation << "return " << longName() << "(h);\n";
        stm << --indentation << "}\n";
      }
      stm << "static __zz_cib_HANDLE* __zz_cib_handle(const " << longName() << "* __zz_cib_obj) {\n";
      stm << ++indentation << "return __zz_cib_obj->__zz_cib_h_;\n";
      stm << --indentation << "}\n";
      stm << "static __zz_cib_HANDLE* __zz_cib_handle(const " << longName() << "& __zz_cib_obj) {\n";
      stm << ++indentation << "return __zz_cib_obj.__zz_cib_h_;\n";
      stm << --indentation << "}\n";
      stm << indentation << "static __zz_cib_HANDLE* __zz_cib_release_handle(" << longName() << "* __zz_cib_obj) {\n";
      ++indentation;
      stm << indentation << "auto h = __zz_cib_obj->__zz_cib_h_;\n";
      stm << indentation << "__zz_cib_obj->__zz_cib_h_ = nullptr;\n";
      forEachParent(kPublic, [&stm, &indentation](const CibCppCompound* baseCompound) {
        stm << indentation << "__zz_cib_" << baseCompound->longName()
            << "::__zz_cib_Helper::__zz_cib_release_handle(__zz_cib_obj);\n";
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
        stm << indentation << "return instance().invoke<__zz_cib_release_proxyProc>(\n";
        stm << ++indentation << "__zz_cib_methodid::" << cibIdData->getMethodCApiName("__zz_cib_release_proxy")
            << ",\n";
        stm << indentation << "__zz_cib_obj->__zz_cib_h_);\n";
        --indentation;
        stm << --indentation << "}\n";
        stm << --indentation << "}\n";
      }
    }
    stm << --indentation << "};\n";

    stm << indentation << closingBracesForWrappingNsNamespaces() << "}\n";
  }

  for (auto mem : members_)
  {
    if (mem->isNamespaceLike())
      static_cast<const CibCppCompound*>(mem)->emitHelperDefn(stm, helper, cibParams, cibIdMgr);
  }
}

void CibCppCompound::emitHandleConstructorDefn(std::ostream&    stm,
                                               const CibHelper& helper,
                                               const CibParams& cibParams,
                                               const CibIdMgr&  cibIdMgr,
                                               CppIndent        indentation /* = CppIndent */) const
{
  auto cibIdData = cibIdMgr.getCibIdData(longName());

  stm << '\n'; // Start in new line.
  stm << indentation << "inline " << fullName() << "::" << ctorName() << "(__zz_cib_::__zz_cib_HANDLE* h)\n";
  ++indentation;
  char sep = ':';
  forEachParent(kPublic, [&](const CibCppCompound* pubParent) {
    auto capiName = cibIdData->getMethodCApiName(castToBaseName(pubParent, cibParams));
    stm << indentation << sep << ' ' << pubParent->longName() << "::" << pubParent->name() << "(__zz_cib_" << longName()
        << "::__zz_cib_Helper::" << capiName << "(h))\n";
    sep = ',';
    return true;
  });
  stm << indentation << sep << " __zz_cib_h_(h)";
  stm << --indentation << "\n{}\n";
}

void CibCppCompound::emitMoveConstructorDecl(std::ostream& stm, CppIndent indentation /* = CppIndent */) const
{
  stm << --indentation << "public:\n";
  stm << ++indentation << ctorName() << '(' << name() << "&& rhs);\n";
}

void CibCppCompound::emitMoveConstructorDefn(std::ostream&    stm,
                                             const CibHelper& helper,
                                             const CibParams& cibParams,
                                             const CibIdMgr&  cibIdMgr,
                                             CppIndent        indentation /* = CppIndent */) const
{
  auto cibIdData = cibIdMgr.getCibIdData(longName());

  stm << '\n'; // Start in new line.
  stm << indentation << "inline " << fullName() << "::" << ctorName() << '(' << name() << "&& rhs)\n";
  ++indentation;
  char sep = ':';
  forEachParent(kPublic, [&](const CibCppCompound* pubParent) {
    auto capiName = cibIdData->getMethodCApiName(castToBaseName(pubParent, cibParams));
    stm << indentation << sep << ' ' << pubParent->longName() << "::" << pubParent->name() << "(std::move(rhs))\n";
    sep = ',';
    return true;
  });
  stm << indentation << sep << " __zz_cib_h_(rhs.__zz_cib_h_)";
  stm << --indentation << "\n{\n";
  stm << ++indentation << "rhs.__zz_cib_h_ = nullptr;\n";
  stm << --indentation << "}\n";
}

void CibCppCompound::emitDefn(std::ostream&    stm,
                              const CibHelper& helper,
                              const CibParams& cibParams,
                              const CibIdMgr&  cibIdMgr,
                              CppIndent        indentation /* = CppIndent */) const
{
  if (templSpec_ && templateInstances_.empty())
    return;
  for (auto mem : members_)
  {
    if (mem->isNamespaceLike() && isMemberPublic(mem->prot_, compoundType_))
    {
      auto compound = static_cast<const CibCppCompound*>(mem);
      if (compound->isTemplated())
      {
        compound->forEachTemplateInstance([&](const TemplateArgs& args, CibCppCompound* templCompound) {
          templCompound->emitHelperDecl(stm, helper, cibParams);
          templCompound->emitDecl(stm, helper, cibParams);
          templCompound->emitHelperDefn(stm, helper, cibParams, cibIdMgr);
          templCompound->emitDefn(stm, helper, cibParams, cibIdMgr);
        });
      }
    }
  }

  for (auto mem : members_)
  {
    if (mem->objType_ == CppObj::kCompound)
      static_cast<const CibCppCompound*>(mem)->emitDefn(stm, helper, cibParams, cibIdMgr, indentation);
  }

  auto cibIdData = cibIdMgr.getCibIdData(longName());
  if (isClassLike() && !needsBridging_.empty())
  {
    // Emit the ctor to construct from __zz_cib_HANDLE.
    emitHandleConstructorDefn(stm, helper, cibParams, cibIdMgr, indentation);
    emitMoveConstructorDefn(stm, helper, cibParams, cibIdMgr, indentation);
  }
  for (auto func : needsBridging_)
  {
    if (func.isPureVirtual() && !func.isDestructor())
      continue;
    stm << '\n'; // Start in new line.
    func.emitDefn(stm, helper, cibParams, this, cibIdData, indentation);
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

  stm << indentation << wrappingNsNamespaceDeclarations(cibParams) << " namespace " << nsName()
      << " { namespace __zz_cib_GenericProxy {\n";
  stm << indentation << "class " << name() << " : public " << longName() << " {\n";
  ++indentation;
  stm << indentation << "__zz_cib_PROXY* __zz_cib_proxy;\n";
  stm << indentation << "const __zz_cib_MethodTableHelper __zz_cib_mtbl_helper;\n\n";
  stm << indentation << "const __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() const {\n";
  stm << ++indentation << "return __zz_cib_mtbl_helper;\n";
  stm << --indentation << "}\n";
  --indentation;
  stm << indentation << "public:\n";
  ++indentation;
  auto cibIdData = cibIdMgr.getCibIdData(longName() + "::__zz_cib_GenericProxy");
  for (auto ctor : ctors())
  {
    CibFunctionHelper func = ctor;
    func.emitGenericProxyDefn(
      stm, helper, cibParams, cibIdData->getMethodCApiName(func.signature(helper)), indentation);
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
  stm << indentation << name() << "(__zz_cib_HANDLE* h) : __zz_cib_h_(h) {}\n";
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

void CibCppCompound::emitFacadeAndInterfaceDependecyHeaders(std::ostream&    stm,
                                                            const CibHelper& helper,
                                                            const CibParams& cibParams,
                                                            const CibIdMgr&  cibIdMgr,
                                                            bool             forProxy,
                                                            CppIndent        indentation /* = CppIndent */) const
{
  std::set<const CibCppCompound*> facades;
  collectFacades(facades);
  if (facades.empty() && forProxy && !hasClassThatNeedsGenericProxyDefn())
    return;
  std::set<const CppObj*> dependencies;
  collectTypeDependencies(helper, dependencies);
  dependencies.insert(this);
  for (auto facade : facades)
  {
    dependencies.insert(facade);
    facade->forEachDescendent(kPublic, [&dependencies](const CibCppCompound* obj) { dependencies.insert(obj); });
  }
  for (const auto& header : collectHeaderDependencies(dependencies, cibParams.inputPath.string()))
    stm << indentation << "#include \"" << header << "\"\n";
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
  if (isCppFile())
  {
    emitFacadeAndInterfaceDependecyHeaders(stm, helper, cibParams, cibIdMgr, false, indentation);
    stm << "#include \"__zz_cib_" << cibParams.moduleName << "-ids.h\"\n";
    stm << "#include \"__zz_cib_" << cibParams.moduleName << "-mtable-helper.h\"\n";
    stm << "#include \"__zz_cib_" << cibParams.moduleName << "-proxy.h\"\n";
    stm << '\n';
  }
  if (isTemplated())
  {
    for (auto& templateInstace : templateInstances_)
      templateInstace.second->emitLibGlueCode(stm, helper, cibParams, cibIdMgr, indentation);
    return;
  }
  for (auto mem : members_)
  {
    if (mem->objType_ == CppObj::kCompound)
    {
      static_cast<const CibCppCompound*>(mem)->emitLibGlueCode(stm, helper, cibParams, cibIdMgr, indentation);
    }
  }
  auto cibIdData = cibIdMgr.getCibIdData(longName());
  if (isNamespaceLike() && !needsBridging_.empty())
  {
    if (needsGenericProxyDefinition())
      emitGenericProxyDefn(stm, helper, cibParams, cibIdMgr, indentation);
    stm << indentation << wrappingNsNamespaceDeclarations(cibParams) << " namespace " << nsName() << " {\n";
    for (auto func : needsBridging_)
    {
      func.emitCAPIDefn(
        stm, helper, cibParams, this, cibIdData->getMethodCApiName(func.signature(helper)), false, indentation);
    }

    forEachAncestor(kPublic, [&](const CibCppCompound* pubParent) {
      auto castApiName = castToBaseName(pubParent, cibParams);
      stm << indentation << "static " << pubParent->longName() << "* __zz_cib_decl "
          << cibIdData->getMethodCApiName(castApiName) << "(" << longName() << "* __zz_cib_obj) {\n";
      stm << ++indentation << "return __zz_cib_obj;\n";
      stm << --indentation << "}\n";
    });

    if (isFacadeLike())
    {
      stm << indentation << "std::uint32_t __zz_cib_decl " << cibIdData->getMethodCApiName("__zz_cib_get_class_id")
          << "(" << longName() << "* __zz_cib_obj) {\n";
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
      stm << indentation << "classIdRepoPopulated = true;\n";
      --indentation;
      stm << indentation << "}\n";
      stm << indentation << "return __zz_cib_gClassIdRepo[std::type_index(typeid(*__zz_cib_obj))];\n";
      stm << --indentation << "}\n";
    }
    if (needsGenericProxyDefinition())
    {
      stm << indentation << "static void __zz_cib_decl " << cibIdData->getMethodCApiName("__zz_cib_release_proxy")
          << "(" << longName() << "* __zz_cib_obj) {\n";
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
    stm << indentation << closingBracesForWrappingNsNamespaces() << "}\n\n";
  }
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
      [&](const TemplateArgs&, CibCppCompound* templateIns) { templateIns->collectPublicCompounds(compounds); });
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
  if (isTemplated())
  {
    for (auto& templateInstace : templateInstances_)
      templateInstace.second->emitMethodTableGetterDefn(stm, helper, cibParams, cibIdMgr, forProxy, indentation);
    return;
  }
  for (CppObjArray::const_iterator memItr = members_.begin(); memItr != members_.end(); ++memItr)
  {
    CppObj* mem = *memItr;
    if (mem->objType_ == CppObj::kCompound)
      static_cast<const CibCppCompound*>(mem)->emitMethodTableGetterDefn(
        stm, helper, cibParams, cibIdMgr, forProxy, indentation);
  }
  if (isNamespaceLike() && !needsBridging_.empty())
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
          stm << sep << indentation << "reinterpret_cast<__zz_cib_MTableEntry> (&" << methodName << ')';
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
