#include "cib.h"
#include "cibfunction_helper.h"
#include "cppprogex.h"
#include "cibcompound.h"
#include "cibfunction.h"
#include "cibidmgr.h"
#include "cibutil.h"
#include "cppwriter.h"

#include "boost-helper/bfs.h"

//////////////////////////////////////////////////////////////////////////

static CppWriter gCppWriter;

inline void emitType(std::ostream& stm, const CppVarType* typeObj, const CibCppCompound* typeResolver, const CppProgramEx& cppProgram, EmitPurpose purpose)
{
  if (typeObj == NULL) return;
  // FIXME: We are assuming that all types will be of some sort of compound object.
  // This will break when there will be some typedefed or enum type is used.
  auto* resolvedCppObj = (typeResolver ? typeResolver->resolveTypeName(typeObj->baseType(), cppProgram) : NULL);
  auto* resolvedType = resolvedCppObj && resolvedCppObj->isClassLike() ? static_cast<const CibCppCompound*>(resolvedCppObj) : nullptr;

  bool isConst = typeObj->typeAttr_&kConst;
  bool emitHandle = resolvedType &&
                    ((purpose  == kProxyProcTypeParam)  ||
                     (purpose  == kProxyProcTypeReturn) ||
                     (purpose  == kProxyCApiParam)      ||
                     (purpose  == kProxyCApiReturn));
  bool byValToPtr = resolvedType && (purpose & kPurposeGlueCode) && typeObj->isByValue();
  if (byValToPtr && !emitHandle)
    isConst = true;

  if (isConst)
    stm << "const ";
  if (resolvedType != nullptr)
  {
    if (emitHandle)
    {
      stm << "__zz_cib_::HANDLE";
    }
    else
    {
      stm << resolvedType->longName();
    }
  }
  else
  {
    stm << typeObj->baseType();
  }
  for (unsigned short i = 0; i < typeObj->ptrLevel(); ++i)
    stm << '*';
  if (typeObj->refType() == kByRef)
  {
    stm << '&';
  }
  else if (typeObj->refType() == kRValRef)
  {
    if (emitHandle)
      stm << '&';
    else
      stm << "&&";
  }
  if (byValToPtr)
    stm << '*';
}

inline void emitVar(std::ostream& stm, const CppVar* varObj, const CibCppCompound* typeResolver, const CppProgramEx& cppProgram, EmitPurpose purpose)
{
  if (varObj == NULL) return;
  emitType(stm, varObj->varType_, typeResolver, cppProgram, purpose);
  stm << ' ' << varObj->name();
}

void CibFunctionHelper::emitArgsForDecl(std::ostream& stm, const CppProgramEx& cppProgram, bool resolveTypes, EmitPurpose purpose) const
{
  //FIXME for function pointer type params, it currently handles only functions whose parameter is not function-pointer type.

  if (!hasParams())
    return;
  const CibCppCompound* typeResolver = resolveTypes ? getOwner() : NULL;
  auto params = getParams();
  emitVar(stm, params->front().varObj, typeResolver, cppProgram, purpose);
  for (CppParamList::const_iterator paramIter = params->begin(); (++paramIter) != params->end(); )
  {
    stm << ", ";
    emitVar(stm, paramIter->varObj, typeResolver, cppProgram, purpose);
  }
}

void CibFunctionHelper::emitArgsForCall(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, CallType callType) const
{
  //FIXME for function pointer type params, it currently handles only functions whose parameter is not function-pointer type.

  if (!hasParams())
    return;
  const auto* params = getParams();

  for (auto& param : *params)
  {
    if (params->front() != param)
      stm << ", ";
    //FIXME for enum and other non compound types.
    auto* resolvedCppObj = getOwner()->resolveTypeName(param.varObj->baseType(), cppProgram);
    auto* resolvedType = resolvedCppObj && resolvedCppObj->isClassLike() ? static_cast<const CibCppCompound*>(resolvedCppObj) : nullptr;
    if (resolvedType)
    {
      assert(!param.varObj->name().empty());
      switch (callType)
      {
      case CallType::kFromHandle:
        stm << cibParams.cibInternalNamespace << resolvedType->longName() << "::__zz_cib_Helper::__zz_cib_from_handle(";
        stm << param.varObj->name() << ")";
        break;
      case CallType::kToHandle:
        if (param.varObj->isByRef() || param.varObj->isByRValueRef())
          stm << '*';
        stm << cibParams.cibInternalNamespace << resolvedType->longName() << "::__zz_cib_Helper::__zz_cib_handle(";
        stm << param.varObj->name() << ")";
        break;
      case CallType::kDerefIfByVal:
        if (param.varObj->isByValue())
          stm << '*';
        stm << param.varObj->name();
        break;
      case CallType::kAsIs:
        stm << param.varObj->name();
        break;
      }
    }
    else
    {
      stm << param.varObj->name();
    }
  }
}

void CibFunctionHelper::emitSignature(std::ostream& stm, const CppProgramEx& cppProgram) const
{
  if (isFunction() && func_->retType_)
  {
    emitType(stm, func_->retType_, NULL, cppProgram, kSignature);
    stm << ' ';
  }
  stm << funcName() << '(';
  emitArgsForDecl(stm, cppProgram, true, kSignature);
  stm << ')';
  if (isConst())
    stm << " const";
}

void CibFunctionHelper::emitOrigDecl(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, CppIndent indentation /* = CppIndent */) const
{
  stm << indentation;
  if (isStatic())
    stm << "static ";
  else if (isVirtual())
    stm << "virtual ";
  else if (isInline())
    stm << "inline ";
  emitSignature(stm, cppProgram);
  if (isPureVirtual())
    stm << " = 0";
  stm << ";\n";
}

void CibFunctionHelper::emitCAPIDefn(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, const std::string& capiName, bool forProxy, CppIndent indentation /* = CppIndent */) const
{
  if (forProxy && !isVirtual())
    return;
  if (!forProxy && isPureVirtual() && !isDestructor())
    return;
  auto callType = forProxy ? CallType::kFromHandle : CallType::kDerefIfByVal;
  stm << indentation;
  if (isConstructor())
    stm << getOwner()->longName() << "*";
  else if (isDestructor())
    stm << "void";
  else
    emitType(stm, func_->retType_, getOwner(), cppProgram, forProxy ? kProxyReturn : kCApiReturn);
  stm << " __zz_cib_decl ";
  stm << capiName << '(';
  if (isConstructor() && getOwner()->needsUnknownProxyDefinition())
  {
    stm << "__zz_cib_::PROXY* proxy, __zz_cib_::MethodTable mtbl";
    if (hasParams())
      stm << ", ";
  }
  else if (!isStatic() && (isMethod() || isDestructor()))
  {
    if (isConst())
      stm << "const ";
    stm << getOwner()->longName() << "* __zz_cib_obj";
    if (hasParams())
      stm << ", ";
  }
  emitArgsForDecl(stm, cppProgram, true, forProxy ? kProxyCApiParam : kCApiParam);
  stm << ") {\n";
  stm << ++indentation;
  if (isConstructor())
  {
    stm << "return new ";
    if (getOwner()->needsUnknownProxyDefinition())
    {
      stm << "__zz_cib_" << getOwner()->longName() << "::__zz_cib_UnknownProxy::" << getOwner()->name() << "(proxy, mtbl";
      if (hasParams())
        stm << ", ";
    }
    else
    {
      stm << getOwner()->longName();
      stm << '(';
    }
    emitArgsForCall(stm, cppProgram, cibParams, callType);
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
        auto* resolvedCppObj = getOwner()->resolveTypeName(func_->retType_->baseType(), cppProgram);
        auto* resolvedType = resolvedCppObj && resolvedCppObj->isClassLike() ? static_cast<const CibCppCompound*>(resolvedCppObj) : nullptr;
        convertFromValue = (resolvedType != nullptr);
        if (convertFromValue)
        {
          auto retTypeCompound = static_cast<const CppCompound*>(resolvedType);
          stm << "new ::" << retTypeCompound->fullName() << '(';
        }
      }
    }
    if (!isStatic())
      stm << "__zz_cib_obj->";
    if (!forProxy && !isPureVirtual())
      stm << getOwner()->longName() << "::";
    stm << funcName();
    stm << '(';
    emitArgsForCall(stm, cppProgram, cibParams, callType);
    if (convertFromValue)
      stm << ')';
    stm << ");\n";
  }
  stm << --indentation << "}\n";
}

void CibFunctionHelper::emitUnknownProxyDefn(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, const std::string& capiName, CppIndent indentation /* = CppIndent */) const
{
  if (isVirtual())
  {
    stm << indentation;
    emitSignature(stm, cppProgram);
    stm << " override";
    stm << " {\n";
    ++indentation;
    if (isDestructor())
    {
      stm << indentation << "if (__zz_cib_proxy) {\n";
      ++indentation;
    }
    emitProcType(stm, cppProgram, cibParams, true, indentation);
    stm << indentation << "auto proc = getProc<" << procType(cibParams) << ">(";
    stm << "__zz_cib_" << getOwner()->longName() << "::__zz_cib_UnknownProxy::__zz_cib_methodid::";
    stm << capiName << ");\n";
    stm << indentation;
    if (!isDestructor())
      stm << "return ";
    stm << "proc(";
    stm << "__zz_cib_proxy";
    if (hasParams())
      stm << ", ";
    emitArgsForCall(stm, cppProgram, cibParams, CallType::kAsIs);
    stm << ");\n";
    if (isDestructor())
    {
      --indentation;
      stm<< indentation << "}\n";
    }
    stm << --indentation << "}\n";
  }
  else if (isConstructor() && !isCopyConstructor())
  {
    stm << indentation << funcName() << "(__zz_cib_::PROXY* proxy, __zz_cib_::MethodTable mtbl";
    if (hasParams())
      stm << ", ";
    emitArgsForDecl(stm, cppProgram, true, kUnknownProxyMethodParam);
    stm << ")\n";
    ++indentation;
    stm << indentation << ": " << getOwner()->longName() << "::" << funcName() << '(';
    emitArgsForCall(stm, cppProgram, cibParams, CallType::kAsIs);
    stm << ")\n";
    stm << indentation << ", __zz_cib_proxy(proxy)\n";
    stm << indentation << ", __zz_cib_mtbl(mtbl)\n";
    --indentation;
    stm << indentation << "{}\n";
  }
}

void CibFunctionHelper::emitProcType(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, bool forUnknownProxy, CppIndent indentation /* = CppIndent */) const
{
  stm << indentation;
  stm << "using " << procType(cibParams) << " = ";
  emitCAPIReturnType(stm, cppProgram);
  stm << " (__zz_cib_decl *) (";
  if (!isStatic() && (isDestructor() || isMethod()))
  {
    if (forUnknownProxy)
      stm << "__zz_cib_::PROXY*";
    else
      stm << "__zz_cib_::HANDLE*";
    if (hasParams())
      stm << ", ";
  }
  else if (isConstructor() && !forUnknownProxy && getOwner()->needsUnknownProxyDefinition())
  {
    stm << getOwner()->longName() << "*, __zz_cib_::MethodTable";
    if (hasParams())
      stm << ", ";
  }
  emitArgsForDecl(stm, cppProgram, true, forUnknownProxy ? kUnknownProxyProcTypeParam : kProxyProcTypeParam);
  stm << ");\n";
}

void CibFunctionHelper::emitCAPIReturnType(std::ostream& stm, const CppProgramEx& cppProgram, CppIndent indentation /* = CppIndent */) const
{
  stm << indentation;
  if (isConstructor())
    stm << "__zz_cib_::HANDLE*";
  else if (isDestructor())
    stm << "void";
  else
    emitType(stm, func_->retType_, getOwner(), cppProgram, kProxyProcTypeReturn);
}

///////////////////////////////////////////////////////////////////////////////////////////////////

std::ostream& operator <<(std::ostream& stm, CppDocComment* cmnt)
{
  stm << cmnt->doc_;
  return stm;
}

void emitInheritanceList(std::ostream& stm, const CibCppCompoundArray& inhList, CppObjProtLevel prot, char& sep)
{
  if (inhList.empty()) return;
  stm << ' ' << sep << ' ' << prot << ' ' << inhList.front()->longName();
  sep = ',';
  for (CibCppCompoundArray::const_iterator itr = inhList.begin()+1; itr != inhList.end(); ++itr)
    stm << sep << prot << ' ' << (*itr)->longName();
}

const CppObj* CibCppCompound::resolveTypeName(const std::string& typeName, const CppProgramEx& cppProgram) const
{
  auto itr = typeNameToCibCppObj_.find(typeName);
  if (itr != typeNameToCibCppObj_.end())
    return itr->second;
  const CppObj* resolvedType = cppProgram.getCppObjFromTypeName(typeName, this);
  typeNameToCibCppObj_[typeName] = resolvedType;
  return resolvedType;
}

void CibCppCompound::emitUserHeader(const CppProgramEx& cppProgram, const CibParams& cibParams) const
{
  if (!isCppFile())
    return;

  bfs::path usrIncPath = cibParams.outputPath / name().substr(cibParams.inputPath.string().length());
  std::ofstream stm(usrIncPath.string(), std::ios_base::out);

  auto firstStatementItr = std::find_if(members_.begin(), members_.end(), [](const CppObj* mem)->bool {
    return (mem->objType_ > kCppStatementObjectTypeStarts);
  });
  auto lastPreProcessorRevItr = std::find_if(std::reverse_iterator<decltype(firstStatementItr)>(firstStatementItr), members_.rend(), [](const CppObj* mem)->bool {
    return (mem->isPreProcessorType());
  });
  auto memItr = members_.begin();
  if (lastPreProcessorRevItr != members_.rend())
  {
    std::for_each(memItr, lastPreProcessorRevItr.base(), [&stm](const CppObj* mem) {
      gCppWriter.emit(mem, stm);
    });
    memItr = lastPreProcessorRevItr.base();

    stm << "\n";
  }

  stm << "#include \"" << implIncludeName(cibParams) << "_impl1.h\"\n";
  for (; memItr != members_.end(); ++memItr)
  {
    emitDecl(*memItr, stm, cppProgram, cibParams);
  }
  stm << "\n\n#include \"" << implIncludeName(cibParams) << "_impl2.h\"\n";
}

void CibCppCompound::emitImpl1Header(const CppProgramEx& cppProgram, const CibParams& cibParams) const
{
  if (!isCppFile())
    return;

  auto implPath = cibParams.outputPath / (getImplPath(cibParams) + "_impl1.h");
  std::ofstream stm(implPath.string(), std::ios_base::out);

  stm << "#include \"" << cibParams.cibInternalDirName << "/" << cibParams.cibdefFileName << "\"\n";

  emitHelperDecl(stm, cppProgram, cibParams);
}

void CibCppCompound::emitImpl2Header(const CppProgramEx& cppProgram, const CibParams& cibParams, const CibIdMgr& cibIdMgr) const
{
  if (!isCppFile())
    return;
  auto implPath = cibParams.outputPath / (getImplPath(cibParams) + "_impl2.h");
  std::ofstream stm(implPath.string(), std::ios_base::out);
  stm << "#include \"" << cibParams.cibIdFilename() << "\"\n";
  stm << "#include <cassert>\n";
  emitHelperDefn(stm, cppProgram, cibParams, cibIdMgr);
  emitDefn(stm, cppProgram, cibParams, cibIdMgr);
}

void CibCppCompound::emitImplSource(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, const CibIdMgr& cibIdMgr, CppIndent indentation) const
{
  auto cibIdData = cibIdMgr.getCibIdData(longName() + "::__zz_cib_UnknownProxy");
  for (auto mem : members_)
  {
    if (mem->isNamespaceLike() && isMemberPublic(mem->prot_, compoundType_))
    {
      auto compound = static_cast<CibCppCompound*>(mem);
      compound->emitImplSource(stm, cppProgram, cibParams, cibIdMgr);
    }
  }

  if (isFacadeLike())
    emitFromHandleDefn(stm, cibParams, cibIdMgr, indentation);
  if (needsUnknownProxyDefinition())
  {
    stm << indentation << wrappingNamespaceDeclarations(cibParams) << " namespace " << name() << " {\n";
    ++indentation;
    for (auto func : needsBridging_)
    {
      if (func.isVirtual())
        func.emitCAPIDefn(stm, cppProgram, cibParams, cibIdData->getMethodCApiName(func.signature()), true, indentation);
    }
    --indentation;
    stm << indentation << '}' << closingBracesForWrappingNamespaces() << "\n\n";
    emitMethodTableGetterDefn(stm, cppProgram, cibParams, cibIdMgr, true, indentation);
    stm << '\n';
    stm << indentation << wrappingNamespaceDeclarations(cibParams) << " namespace " << name() << " {\n";
    ++indentation;
    stm << indentation << "__zz_cib_::MethodTable " << "__zz_cib_Helper::__zz_cib_get_proxy_method_table() {\n";
    ++indentation;
    stm << indentation << "return GetMethodTable();\n";
    --indentation;
    stm << indentation << "}\n";
    --indentation;
    stm << indentation << '}' << closingBracesForWrappingNamespaces() << "\n\n";
  }
}

void CibCppCompound::emitImplSource(const CppProgramEx& cppProgram, const CibParams& cibParams, const CibIdMgr& cibIdMgr) const
{
  if (!isCppFile())
    return;
  bfs::path headerPath = name_;
  bfs::path usrSrcPath = cibParams.outputPath / name_.substr(cibParams.inputPath.string().length());
  usrSrcPath.replace_extension(".cpp");
  std::ofstream stm(usrSrcPath.string(), std::ios_base::out);

  emitFacadeDependecyHeaders(stm, cppProgram, cibParams, cibIdMgr, true, CppIndent());
  emitImplSource(stm, cppProgram, cibParams, cibIdMgr);
}

void CibCppCompound::collectFacades(std::set<const CibCppCompound*>& facades) const
{
  for (auto mem : members_)
  {
    if (!isMemberPublic(mem->prot_, compoundType_))
      continue;
    if (mem->isNamespaceLike())
    {
      auto compound = static_cast<CibCppCompound*>(mem);
      compound->collectFacades(facades);
      if (compound->isFacadeLike())
        facades.insert(compound);
    }
  }
}

void CibCppCompound::collectTypeDependencies(const CppProgramEx& cppProgram, std::set<const CppObj*>& cppObjs) const
{
  for (auto mem : members_)
  {
    if (!isMemberPublic(mem->prot_, compoundType_))
      continue;
    if (mem->isNamespaceLike())
    {
      auto compound = static_cast<CibCppCompound*>(mem);
      compound->collectTypeDependencies(cppProgram, cppObjs);
    }
    else if (mem->isFunctionLike())
    {
      auto addDependency = [&](const std::string& typeName) {
        auto* resolvedCppObj = resolveTypeName(typeName, cppProgram);
        auto* resolvedType = resolvedCppObj && resolvedCppObj->isClassLike() ? static_cast<const CibCppCompound*>(resolvedCppObj) : nullptr;
        if (resolvedType)
          cppObjs.insert(resolvedType);
      };
      CibFunctionHelper func(mem);
      if (func.retType() && !func.retType()->isVoid())
        addDependency(func.retType()->baseType());
      if (func.getParams())
      {
        for (auto param : *func.getParams())
        {
          if (param.cppObj->objType_ == kVarType)
            addDependency(param.varObj->baseType());
        }
      }
    }
  }
}

std::set<std::string> CibCppCompound::collectHeaderDependencies(const CppProgramEx& cppProgram) const
{
  std::set<const CppObj*> cppObjs;
  collectTypeDependencies(cppProgram, cppObjs);
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

std::set<std::string> CibCppCompound::collectHeaderDependencies(const std::set<const CppObj*>& cppObjs, const std::string& dependentPath)
{
  std::set<std::string> headers;
  std::string parentPath = bfs::path(dependentPath).parent_path().string();

  for (auto obj : cppObjs)
  {
    auto fileDom = getFileDomObj(obj);
    headers.emplace(fileDom->name().substr(parentPath.length() + 1));
  }
  return headers;
}

std::string CibCppCompound::getImplPath(const CibParams& cibParams) const
{
  bfs::path impl = name();
  auto implFilename = impl.stem().string();
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

void CibCppCompound::emitDecl(const CppObj* obj, std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, CppIndent indentation /* = CppIndent */) const
{
  if (obj->isFunctionLike())
  {
    if (objNeedingBridge_.count(obj))
    {
      CibFunctionHelper func = obj;
      func.emitOrigDecl(stm, cppProgram, cibParams, indentation);
    }
    return;
  }
  if (obj->objType_ == CppObj::kCompound)
  {
    auto compound = static_cast<const CibCppCompound*>(obj);
    compound->emitDecl(stm, cppProgram, cibParams, indentation);
  }
  else
  {
    gCppWriter.emit(obj, stm);
  }
}

void CibCppCompound::emitDecl(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, CppIndent indentation /* = CppIndent */) const
{
  if (isInline())
  {
    gCppWriter.emit(this, stm, indentation);
    return;
  }
  if (isNamespaceLike())
  {
    stm << indentation;
    stm << compoundType_;
    stm << ' ' << name();
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

  CppObjProtLevel lastProt = kUnknownProt;
  std::set<const CppObj*> memDeclared;
  for (auto mem : members_)
  {
    if (!isInline() && !isMemberPublic(mem->prot_, compoundType_)) // We will emit only public members unless class is inline.
      continue;
    if (isClassLike() && lastProt != mem->prot_)
    {
      if (mem->prot_ != kUnknownProt)
        stm << --indentation << mem->prot_ << ":\n";
      ++indentation;
      lastProt = mem->prot_;
    }
    emitDecl(mem, stm, cppProgram, cibParams, indentation);
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
    func.emitOrigDecl(stm, cppProgram, cibParams, indentation);
  }

  if (isClassLike())
  {
    if (!isInline())
    {
      // Everything below this is for glue code
      stm << '\n';
      stm << --indentation << "private:\n";
      stm << ++indentation << "__ZZ_CIB_CLASS_INTERNAL_DEF(" << name() << ", " << longName() << ");\n";
    }
    stm     << --indentation << "};\n";
  }
  else if (isNamespaceLike())
  {
    stm   << --indentation << "}\n";
  }
}

void CibCppCompound::emitFromHandleDefn(std::ostream& stm, const CibParams& cibParams, const CibIdMgr& cibIdMgr, CppIndent indentation) const
{
  stm << indentation << longName() << "* __zz_cib_" << longName() << "::__zz_cib_Helper::__zz_cib_from_handle(__zz_cib_::HANDLE* h) {\n";;
  ++indentation;
  stm << indentation << "switch(__zz_cib_get_class_id(h)) {\n";
  forEachDescendent(kPublic, [&](const CibCppCompound* derived) {
    auto cibIdData = cibIdMgr.getCibIdData(derived->longName());
    if (cibIdData)
    {
      stm << indentation << "case __zz_cib_::" << cibParams.moduleName << "Lib::__zz_cib_classid::" << cibIdData->getIdName() << ":\n";
      ++indentation;
      stm << indentation << "return __zz_cib_" << derived->longName() << "::__zz_cib_Helper::__zz_cib_from_handle(h);\n";
      --indentation;
    }
  });
  stm << indentation << "}\n";
  stm << indentation << "return nullptr;\n";
  --indentation;
  stm << indentation << "}\n";
}

void CibCppCompound::emitFromHandleDecl(std::ostream& stm, const CibParams& cibParams, CppIndent indentation) const
{
  if (!isFacadeLike() && isAbstract())
    return;
  stm << indentation << "static " << longName() << "* " << cibParams.fromHandle << "(__zz_cib_::HANDLE* h)";
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

  // Emit __zz_cib_from_handle() definition for references.
  stm << indentation << longName() << "& __zz_cib_from_handle(__zz_cib_::HANDLE& h) {\n";;
  stm << ++indentation << "return *__zz_cib_from_handle(&h);\n";
  stm << --indentation << "}\n";
  // Emit methods for const handle ptr and ref.
  stm << indentation << longName() << " const * __zz_cib_from_handle(const __zz_cib_::HANDLE* h) {\n";;
  stm << ++indentation << "return __zz_cib_from_handle(const_cast<__zz_cib_::HANDLE*>(h));\n";
  stm << --indentation << "}\n";
  stm << indentation << longName() << " const & __zz_cib_from_handle(const __zz_cib_::HANDLE& h) {\n";;
  stm << ++indentation << "return *__zz_cib_from_handle(const_cast<__zz_cib_::HANDLE*>(&h));\n";
  stm << --indentation << "}\n";
}

void CibCppCompound::identifyMethodsToBridge()
{
  for (auto mem : members_)
  {
    if (!isInline() && !isMemberPublic(mem->prot_, compoundType_))    // We will emit only public members unless class is inline.
      continue;
    if (mem->isFunctionLike())
    {
      CibFunctionHelper func(mem);
      if (func.funcName().find(':') != std::string::npos)
        continue; // Skip out of class definitions.
      if (func.isTemplated())
        continue;
      if (func.isDestructor())
        setHasDtor();
      else if (func.isCopyConstructor())
        setHasCopyCtor();
      else if (func.isMoveConstructor())
        continue;
      else if (func.isConstructor())
        setHasCtor();
      if (isInline()) // If class is inline
      {
        if (func.isStatic() && !func.isInline()) // only non-inline static methods need bridging.
        {
          needsBridging_.push_back(func);
          objNeedingBridge_.insert(mem);
        }
      }
      else if (!func.isPureVirtual() || needsUnknownProxyDefinition() || func.isDestructor())
      {
        needsBridging_.push_back(func);
        objNeedingBridge_.insert(mem);
      }
    }
    else if (mem->isNamespaceLike())
    {
      auto compound = static_cast<CibCppCompound*>(mem);
      compound->identifyMethodsToBridge();
    }
  }
  if (!isClassLike())
    return;
  if (!hasDtor() && needsUnknownProxyDefinition())
  {
    auto defaultDtor = CibFunctionHelper::CreateDestructor(kPublic, "~" + name(), 0);
    defaultDtor->owner_ = this;
    addMember(defaultDtor);
    CibFunctionHelper func(defaultDtor);
    needsBridging_.push_back(func);
    objNeedingBridge_.insert(defaultDtor);
  }
  if (!hasCtor())
  {
    auto ctorProtection = isAbstract() ? kProtected : kPublic;
    auto defaultCtor = CibFunctionHelper::CreateConstructor(ctorProtection, name(), nullptr, nullptr, 0);
    defaultCtor->owner_ = this;
    addMember(defaultCtor);
    CibFunctionHelper func(defaultCtor);
    needsBridging_.push_back(func);
    objNeedingBridge_.insert(defaultCtor);
  }
}

void CibCppCompound::emitHelperDecl(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, CppIndent indentation /* = CppIndent */) const
{
  if (isNamespaceLike() && !needsBridging_.empty())
  {
    stm << '\n';        // Start in new line.
    if (!wrappingNamespaceDeclarations(cibParams).empty())
      stm << indentation << wrappingNamespaceDeclarations(cibParams);
    stm << "namespace " << name() << " { class __zz_cib_Helper; }\n";
    if (!wrappingNamespaceDeclarations(cibParams).empty())
      stm << indentation << closingBracesForWrappingNamespaces() << '\n';
  }

  for (auto mem : members_)
  {
    if (mem->isNamespaceLike())
      static_cast<const CibCppCompound*>(mem)->emitHelperDecl(stm, cppProgram, cibParams);
  }
}

void CibCppCompound::emitHelperDefn(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, const CibIdMgr& cibIdMgr, CppIndent indentation /* = CppIndent */) const
{
  if (isNamespaceLike() && !needsBridging_.empty())
  {
    stm << '\n';        // Start in new line.
    if (!wrappingNamespaceDeclarations(cibParams).empty())
      stm << ++indentation << wrappingNamespaceDeclarations(cibParams) << '\n';
    stm << ++indentation << "namespace " << name() << " {\n";
    stm << ++indentation << "class __zz_cib_Helper {\n";
    stm << ++indentation << "friend " << compoundType_ << ' ' << longName() << ";\n";
    if (needsUnknownProxyDefinition())
      stm << indentation << "static __zz_cib_::MethodTable __zz_cib_get_proxy_method_table();\n";
    stm << '\n'; // Start in new line.
    auto cibIdData = cibIdMgr.getCibIdData(longName());
    for (auto func : needsBridging_)
    {
      if (func.isPureVirtual() && !func.isDestructor())
        continue;
      stm << indentation << "static ";
      func.emitCAPIReturnType(stm, cppProgram);
      stm << ' ' << cibIdData->getMethodCApiName(func.signature()) << "(";
      if (!func.isStatic() && (!func.isConstructor() || func.isCopyConstructor()))
      {
        stm << "__zz_cib_::HANDLE* __zz_cib_obj";
        if (func.hasParams())
          stm << ", ";
      }
      else if (needsUnknownProxyDefinition() && func.isConstructor())
      {
        stm << longName() << "* __zz_cib_proxy";
        if (func.hasParams())
          stm << ", ";
      }
      func.emitArgsForDecl(stm, cppProgram, true, kProxyProcTypeParam);
      stm <<") {\n";
      ++indentation;
      if (func.isDestructor())
      {
        stm << indentation << "if (__zz_cib_obj) {\n";
        ++indentation;
      }
      func.emitProcType(stm, cppProgram, cibParams, false, indentation);
      stm << indentation << "auto proc = getProc<" << func.procType(cibParams) << ">(";
      stm << "__zz_cib_" << longName() << "::__zz_cib_methodid::";
      stm << cibIdData->getMethodCApiName(func.signature()) << ");\n";
      stm << indentation << "return proc(";
      if (!func.isStatic() && (!func.isConstructor() || func.isCopyConstructor()))
      {
        stm << "__zz_cib_obj";
        if (func.hasParams())
          stm << ", ";
      }
      else if (needsUnknownProxyDefinition() && func.isConstructor())
      {
        stm << "__zz_cib_proxy, __zz_cib_get_proxy_method_table()";
        if (func.hasParams())
          stm << ", ";
      }
      func.emitArgsForCall(stm, cppProgram, cibParams, CallType::kAsIs);
      stm << ");\n";
      if (func.isDestructor())
      {
        --indentation;
        stm << indentation << "}\n";
      }
      stm << --indentation << "}\n";
    }
    forEachAncestor(kPublic, [&](const CibCppCompound* pubParent) {
      auto castProcName = castToBaseName(pubParent, cibParams);
      auto capiName = cibIdData->getMethodCApiName(castProcName);
      stm << indentation << "static __zz_cib_::HANDLE* " << capiName << "(__zz_cib_::HANDLE* __zz_cib_obj) {\n";
      stm << ++indentation << "using " << castProcName << "Proc = __zz_cib_::HANDLE* (__zz_cib_decl *) (__zz_cib_::HANDLE* h);\n";
      stm << indentation << "auto proc = (" << castProcName << "Proc) instance().mtbl[";
      stm << "__zz_cib_" << longName() << "::__zz_cib_methodid::";
      stm << capiName << "];\n";
      stm << indentation << "return proc(__zz_cib_obj);\n";
      stm << --indentation << "}\n";
    });
    if (!needsBridging_.empty())
    {
      stm << --indentation << "private:\n";
      stm << ++indentation << "__zz_cib_::MethodTable mtbl;\n";
      stm << indentation << "__zz_cib_Helper() {\n";
      stm << ++indentation << "mtbl = __zz_cib_" << cibParams.moduleName << "Lib_GetMethodTable(";
      auto classIdName = longName();
      std::transform(classIdName.begin(), classIdName.end(), classIdName.begin(), [](char c)->char {
        return c == ':' ? '_' : c;
      });
      stm << cibParams.classIdOwnerSpace() << classIdName << ");\n";
      stm << --indentation << "}\n";
      stm << indentation << "static const __zz_cib_Helper& instance() {\n";
      stm << ++indentation << "static __zz_cib_Helper helper;\n";
      stm << indentation << "return helper;\n";
      stm << --indentation << "}\n";
      stm << indentation << "template<typename _ProcType> static _ProcType getProc(std::uint32_t procId) {\n";
      stm << ++indentation << "return reinterpret_cast<_ProcType>(__zz_cib_GetMethodEntry(instance().mtbl, procId));\n";
      stm << --indentation << "}\n";
    }
    stm << '\n';        // Start in new line.
    if (isFacadeLike())
    {
      stm << indentation << "static std::uint32_t __zz_cib_get_class_id(__zz_cib_::HANDLE* __zz_cib_obj) {\n";
      stm << ++indentation << "using __zz_cib_get_class_idProc = std::uint32_t (__zz_cib_decl *) (__zz_cib_::HANDLE*);\n";
      stm << indentation << "auto proc = (__zz_cib_get_class_idProc) instance().mtbl[";
      stm << "__zz_cib_" << longName() << "::__zz_cib_methodid::" << cibIdData->getMethodCApiName("__zz_cib_get_class_id") << "];\n";
      stm << indentation << "return proc(__zz_cib_obj);\n";
      stm << --indentation << "}\n";
    }
    stm << --indentation << "public:\n";
    stm << ++indentation << "static __zz_cib_::HANDLE* __zz_cib_handle(const " << longName() << "* __zz_cib_obj) {\n";
    stm << ++indentation << "return __zz_cib_obj->__zz_cib_h_;\n";
    stm << --indentation << "}\n";
    stm << indentation   << "static __zz_cib_::HANDLE* __zz_cib_handle(const " << longName() << "& __zz_cib_obj) {\n";
    stm << ++indentation << "return __zz_cib_obj.__zz_cib_h_;\n";
    stm << --indentation << "}\n";
    emitFromHandleDecl(stm, cibParams, indentation);
    stm << indentation << "static __zz_cib_::HANDLE* __zz_cib_release_handle(" << longName() << "* __zz_cib_obj) {\n";
    ++indentation;
    stm << indentation << "auto h = __zz_cib_obj->__zz_cib_h_;\n";
    stm << indentation << "__zz_cib_obj->__zz_cib_h_ = nullptr;\n";
    forEachParent(kPublic, [&stm, &indentation](const CibCppCompound* baseCompound) {
      stm << indentation << "__zz_cib_" << baseCompound->longName() << "::__zz_cib_Helper::__zz_cib_release_handle(__zz_cib_obj);\n";
    });
    stm << indentation << "return h;\n";
    stm << --indentation << "}\n";
    if (needsUnknownProxyDefinition())
    {
      stm << indentation << "static void __zz_cib_release_proxy(" << longName() << "* __zz_cib_obj) {\n";
      ++indentation;
      stm << indentation << "if (__zz_cib_obj->__zz_cib_h_) {\n";
      ++indentation;
      stm << indentation << "using __zz_cib_release_proxyProc = void (__zz_cib_decl *) (__zz_cib_::HANDLE*);\n";
      stm << indentation << "auto proc = (__zz_cib_release_proxyProc) instance().mtbl[";
      stm << "__zz_cib_" << longName() << "::__zz_cib_methodid::" << cibIdData->getMethodCApiName("__zz_cib_release_proxy") << "];\n";
      stm << indentation << "proc(__zz_cib_obj->__zz_cib_h_);\n";
      stm << --indentation << "}\n";
      stm << --indentation << "}\n";
    }
    stm << --indentation << "};\n";

    if (!wrappingNamespaceDeclarations(cibParams).empty())
      stm << --indentation << closingBracesForWrappingNamespaces() << '\n';
    stm << --indentation << "}\n";
  }

  for (auto mem : members_)
  {
    if (mem->isNamespaceLike())
      static_cast<const CibCppCompound*>(mem)->emitHelperDefn(stm, cppProgram, cibParams, cibIdMgr);
  }
}

void CibCppCompound::emitHandleConstructorDefn(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, const CibIdMgr& cibIdMgr, CppIndent indentation /* = CppIndent */) const
{
  auto cibIdData = cibIdMgr.getCibIdData(longName());

  stm     << '\n'; // Start in new line.
  stm     << indentation << "inline " << fullName() << "::" << name() << "(__zz_cib_::HANDLE* h)\n";
  ++indentation;
  char sep = ':';
  forEachParent(kPublic, [&](const CibCppCompound* pubParent) {
    auto capiName = cibIdData->getMethodCApiName(castToBaseName(pubParent, cibParams));
    stm << indentation << sep << ' ' << pubParent->longName() << "::" << pubParent->name() << "(__zz_cib_"<< longName() << "::__zz_cib_Helper::" << capiName << "(h))\n";
    sep = ',';
  });
  stm << indentation << sep << " __zz_cib_h_(h)";
  stm << --indentation << "\n{}\n";
}

void CibCppCompound::emitMoveConstructorDecl(std::ostream& stm, CppIndent indentation /* = CppIndent */) const
{
  stm << --indentation << "public:\n";
  stm << ++indentation << name() << '(' << name() << "&& rhs);\n";
}

void CibCppCompound::emitMoveConstructorDefn(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, const CibIdMgr& cibIdMgr, CppIndent indentation /* = CppIndent */) const
{
  auto cibIdData = cibIdMgr.getCibIdData(longName());

  stm     << '\n'; // Start in new line.
  stm     << indentation << "inline " << fullName() << "::" << name() << '(' << name() << "&& rhs)\n";
  ++indentation;
  char sep = ':';
  forEachParent(kPublic, [&](const CibCppCompound* pubParent) {
    auto capiName = cibIdData->getMethodCApiName(castToBaseName(pubParent, cibParams));
    stm << indentation << sep << ' ' << pubParent->longName() << "::" << pubParent->name() << "(std::move(rhs))\n";
    sep = ',';
  });
  stm << indentation << sep << " __zz_cib_h_(rhs.__zz_cib_h_)";
  stm << --indentation << "\n{";
  stm << ++indentation << "rhs.__zz_cib_h_ = nullptr;\n";
  stm << --indentation << "}\n";
}

void CibCppCompound::emitDefn(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, const CibIdMgr& cibIdMgr, CppIndent indentation /* = CppIndent */) const
{
  for (CppObjArray::const_iterator memItr = members_.begin(); memItr != members_.end(); ++memItr)
  {
    CppObj* mem = *memItr;
    if (mem->objType_ == CppObj::kCompound)
      static_cast<CibCppCompound*>(mem)->emitDefn(stm, cppProgram, cibParams, cibIdMgr, indentation);
  }

  auto cibIdData = cibIdMgr.getCibIdData(longName());
  if (isClassLike() && !needsBridging_.empty())
  {
    // Emit the ctor to construct from HANDLE.
    emitHandleConstructorDefn(stm, cppProgram, cibParams, cibIdMgr, indentation);
    emitMoveConstructorDefn(stm, cppProgram, cibParams, cibIdMgr, indentation);
  }
  for (auto func : needsBridging_)
  {
    if (func.isPureVirtual() && !func.isDestructor())
      continue;
    stm     << '\n'; // Start in new line.
    stm     << indentation << "inline ";
    if (func.isFunction())
    {
      emitType(stm, func.retType(), this, cppProgram, kProxyReturn);
      stm << ' ';
    }
    stm     << fullName() << "::" << func.funcName() << '(';
    func.emitArgsForDecl(stm, cppProgram, true, kProxyMethodParam);
    stm     << ")";
    auto capiName = cibIdData->getMethodCApiName(func.signature());
    if (func.isConstructor())
    {
      stm << '\n';
      stm << ++indentation << ": " << name() << "(__zz_cib_" << longName() << "::__zz_cib_Helper::" << capiName << '(';
      if (needsUnknownProxyDefinition())
      {
        stm << "this";
        if (func.hasParams())
          stm << ", ";
      }
      func.emitArgsForCall(stm, cppProgram, cibParams, CallType::kToHandle);
      stm << "))\n";
      stm << --indentation << "{}\n";
    }
    else
    {
      if (func.isConst())
      {
        stm << " const";
      }
      stm << " {\n";
      ++indentation;
      if (func.isDestructor())
      {
        stm << indentation << "__zz_cib_" << longName() << "::__zz_cib_Helper::__zz_cib_release_proxy(this);\n";
        stm << indentation << "auto h = __zz_cib_" << longName() << "::__zz_cib_Helper::__zz_cib_release_handle(this);\n";
      }

      stm << indentation;
      const CibCppCompound* retType = NULL;
      if (func.isFunction() && func.retType() && !func.retType()->isVoid())
      {
        stm << "return ";
        auto* resolvedCppObj = resolveTypeName(func.retType()->baseType(), cppProgram);
        retType = resolvedCppObj && resolvedCppObj->isClassLike() ? static_cast<const CibCppCompound*>(resolvedCppObj) : nullptr;
        if (retType)
        {
          if (func.retType()->isByValue())
          {
            stm << retType->longName() << "(\n";
          }
          else
          {
            stm << "__zz_cib_" << retType->longName() << "::__zz_cib_Helper::__zz_cib_from_handle(\n";
          }
          stm << ++indentation;
        }
      }
      stm << "__zz_cib_" << longName() << "::__zz_cib_Helper::" << capiName << "(";
      if (func.isDestructor())
      {
        stm << "h";
      }
      else if (!func.isStatic())
      {
        stm << "__zz_cib_h_";
        if (func.hasParams())
          stm << ", ";
      }
      func.emitArgsForCall(stm, cppProgram, cibParams, CallType::kToHandle);
      stm << ')';
      if (retType)
        stm << '\n' << --indentation << ")";
      stm << ";\n";
      stm << --indentation << "}\n";
    }
  }
}

void CibCppCompound::emitUnknownProxyDefn(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, const CibIdMgr& cibIdMgr, CppIndent indentation) const
{
  if (!needsUnknownProxyDefinition())
    return;

  stm << indentation << "namespace " << name() << " { namespace __zz_cib_UnknownProxy {\n";
  ++indentation;
  stm << indentation << "class " << name() << " : public " << longName() << " {\n";
  ++indentation;
  stm << indentation << "__zz_cib_::PROXY* __zz_cib_proxy;\n";
  stm << indentation << "__zz_cib_::MethodTable __zz_cib_mtbl;\n\n";
  stm << indentation << "template<typename _ProcType> _ProcType getProc(std::uint32_t procId) const {\n";
  stm << ++indentation << "return reinterpret_cast<_ProcType>(__zz_cib_GetMethodEntry(__zz_cib_mtbl, procId));\n";
  stm << --indentation << "}\n";
  --indentation;
  stm << indentation << "public:\n";
  ++indentation;
  for (auto func : needsBridging_)
  {
    auto cibIdData = cibIdMgr.getCibIdData(longName() + "::__zz_cib_UnknownProxy");
    func.emitUnknownProxyDefn(stm, cppProgram, cibParams, cibIdData->getMethodCApiName(func.signature()), indentation);
  }
  stm<< indentation << "void __zz_cib_release_proxy() { __zz_cib_proxy = nullptr; }\n";
  --indentation;
  stm << indentation << "};\n";
  --indentation;
  stm << indentation << "}}\n";
}

void CibCppCompound::emitFacadeDependecyHeaders(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, const CibIdMgr& cibIdMgr, bool forProxy, CppIndent indentation /* = CppIndent */) const
{
  std::set<const CibCppCompound*> facades;
  collectFacades(facades);
  std::set<const CppObj*> dependencies;
  collectTypeDependencies(cppProgram, dependencies);
  dependencies.insert(this);
  for (auto facade : facades)
  {
    dependencies.insert(facade);
    facade->forEachDescendent(kPublic, [&dependencies](const CibCppCompound* obj) {
      dependencies.insert(obj);
    });
  }
  for (const auto& header : collectHeaderDependencies(dependencies, getFileDomObj(this)->name()))
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

void CibCppCompound::emitLibGlueCode(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, const CibIdMgr& cibIdMgr, CppIndent indentation /* = CppIndent */) const
{
  if (isCppFile())
  {
    stm     << "#include \"cib_" << cibParams.moduleName << "Lib.h\"\n";
    emitFacadeDependecyHeaders(stm, cppProgram, cibParams, cibIdMgr, false, indentation);
    stm     << indentation << "namespace __zz_cib_ {\n";
    ++indentation;
  }
  for (CppObjArray::const_iterator memItr = members_.begin(); memItr != members_.end(); ++memItr)
  {
    CppObj* mem = *memItr;
    if (mem->objType_ == CppObj::kCompound)
    {
      if (isNamespaceLike())
        stm << indentation++ << "namespace " << name() << " {\n";
      static_cast<CibCppCompound*>(mem)->emitLibGlueCode(stm, cppProgram, cibParams, cibIdMgr, indentation);
      if (isNamespaceLike())
        stm << --indentation << "}\n";
    }
  }
  auto cibIdData = cibIdMgr.getCibIdData(longName());
  if (isNamespaceLike() && !needsBridging_.empty())
  {
    if (needsUnknownProxyDefinition())
      emitUnknownProxyDefn(stm, cppProgram, cibParams, cibIdMgr, indentation);
    stm << indentation++ << "namespace " << name() << " {\n";
    for (auto func : needsBridging_)
    {
      func.emitCAPIDefn(stm, cppProgram, cibParams, cibIdData->getMethodCApiName(func.signature()), false, indentation);
    }

    forEachAncestor(kPublic, [&](const CibCppCompound* pubParent) {
      auto castApiName = castToBaseName(pubParent, cibParams);
      stm << indentation << pubParent->longName() << "* __zz_cib_decl " << cibIdData->getMethodCApiName(castApiName) << "(" << longName() << "* __zz_cib_obj) {\n";
      stm << ++indentation << "return __zz_cib_obj;\n";
      stm << --indentation << "}\n";
    });

    if (isFacadeLike())
    {
      stm << indentation << "std::uint32_t __zz_cib_decl " << cibIdData->getMethodCApiName("__zz_cib_get_class_id") << "(" << longName() << "* __zz_cib_obj) {\n";
      ++indentation;
      stm << indentation << "static bool classIdRepoPopulated = false;\n";
      stm << indentation << "if (!classIdRepoPopulated) {\n";
      ++indentation;
      forEachDescendent(kPublic, [&](const CibCppCompound* compound) {
        auto cibIdData = cibIdMgr.getCibIdData(compound->longName());
        stm << indentation << "__zz_cib_gClassIdRepo[std::type_index(typeid(" << compound->longName() << "))] = ";
        stm << " __zz_cib_::" << cibParams.moduleName << "Lib::__zz_cib_classid::" << cibIdData->getIdName() << ";\n";
      });
      stm << indentation << "classIdRepoPopulated = true;\n";
      --indentation;
      stm << indentation << "}\n";
      stm << indentation << "return __zz_cib_gClassIdRepo[std::type_index(typeid(*__zz_cib_obj))];\n";
      stm << --indentation << "}\n";
    }
    if (needsUnknownProxyDefinition())
    {
      stm << indentation << "void __zz_cib_decl " << cibIdData->getMethodCApiName("__zz_cib_release_proxy") << "(" << longName() << "* __zz_cib_obj) {\n";
      ++indentation;
      stm << indentation << "auto unknownProxy = dynamic_cast<__zz_cib_" << longName() << "::__zz_cib_UnknownProxy::" << name() << "*>(__zz_cib_obj);\n";
      stm << indentation << "if (unknownProxy)\n";
      ++indentation;
      stm << indentation << "unknownProxy->__zz_cib_release_proxy();\n";
      --indentation;
      --indentation;
      stm << indentation << "}\n";
    }
    stm << --indentation << "}\n";
  }
  if (isCppFile())
  {
    stm << --indentation << "}\n";
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
  }
  if (isNamespaceLike() && !needsBridging_.empty())
  {
    compounds.push_back(this);
  }
}

void CibCppCompound::emitMethodTableGetterDefn(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, const CibIdMgr& cibIdMgr, bool forProxy, CppIndent indentation /* = CppIndent */) const
{
  for (CppObjArray::const_iterator memItr = members_.begin(); memItr != members_.end(); ++memItr)
  {
    CppObj* mem = *memItr;
    if (mem->objType_ == CppObj::kCompound)
      static_cast<CibCppCompound*>(mem)->emitMethodTableGetterDefn(stm, cppProgram, cibParams, cibIdMgr, forProxy, indentation);
  }
  if (isNamespaceLike() && !needsBridging_.empty())
  {
    stm << indentation << wrappingNamespaceDeclarations(cibParams) << " namespace " << name() << " {\n";
    stm << ++indentation << "using MethodEntry = void(*)();\n";
    stm << indentation << "using MethodTable = const MethodEntry*;\n";
    stm << indentation;
    if (forProxy)
      stm << "static ";
    stm << "MethodTable GetMethodTable()\n";
    stm << indentation << "{\n";
    const auto& className = forProxy ? longName() + "::__zz_cib_UnknownProxy" : longName();
    stm << ++indentation << "static const MethodTableHeader tableHeader = { sizeof(MethodTableHeader), " << cibIdMgr.numMethods(className) << " };\n";
    stm << indentation << "static const MethodEntry methodTable[] = {\n";
    stm << ++indentation << "(MethodEntry) &tableHeader";
    CibMethodId nextMethodId = 1;
    nextMethodId = cibIdMgr.forEachMethod(className, [&](CibMethodId methodId, const CibMethodCAPIName& methodName, const CibMethodSignature& methodSig) {
      if (methodId == nextMethodId++) {
        stm << ",\n" << indentation << "(MethodEntry) &" << methodName;
      } else {
        stm << ",\n" << indentation << "(MethodEntry) nullptr";
      }
    });
    stm << '\n';
    stm << --indentation << "};\n";
    stm << indentation << "return methodTable;\n";
    stm << --indentation << "}\n";
    stm << --indentation << '}' << closingBracesForWrappingNamespaces() << '\n';;
  }
}
