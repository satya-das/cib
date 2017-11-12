#include "cib.h"
#include "cibfunction_helper.h"
#include "cppprogex.h"
#include "cibcompound.h"
#include "cibfunction.h"
#include "cibutil.h"
#include "cppwriter.h"

#include "boost-helper/bfs.h"
#include <filesystem>

//////////////////////////////////////////////////////////////////////////

static CppWriter gCppWriter;

inline void emitType(std::ostream& stm, const CppVarType* typeObj, const CibCppCompound* typeResolver, const CppProgramEx& cppProgram, const CibParams& cibParams, bool emitHandle = false)
{
  if (typeObj == NULL) return;
  if (typeObj->typeAttr_&kConst)
    stm << "const ";
  // FIXME: We are assuming that all types will be of some sort of compound object.
  // This will break when there will be some typedefed or enum type is used.
  CibCppCompound* resolvedType = (CibCppCompound*)(typeResolver ? typeResolver->resolveTypeName(typeObj->baseType_, cppProgram) : NULL);
  if (resolvedType != NULL)
    stm << (emitHandle ? "__zz_cib_::HANDLE" : resolvedType->fullName());
  else
    stm << typeObj->baseType_;
  for (unsigned short i = 0; i < typeObj->ptrLevel_; ++i)
    stm << '*';
  if (typeObj->typeAttr_&kByRef)
    stm << '&';
}

inline void emitVar(std::ostream& stm, const CppVar* varObj, const CibCppCompound* typeResolver, const CppProgramEx& cppProgram, const CibParams& cibParams, bool emitHandle = false)
{
  if (varObj == NULL) return;
  emitType(stm, varObj, typeResolver, cppProgram, cibParams, emitHandle);
  stm << ' ' << varObj->name_;
}

void CibFunctionHelper::emitArgsForDecl(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, bool resolveTypes /*= false*/, bool emitHandle /*= false*/) const
{
  //FIXME for function pointer type params, it currently handles only functions whose parameter is not function-pointer type.

  if (!hasParams())
    return;
  const CibCppCompound* typeResolver = resolveTypes ? getOwner() : NULL;
  auto params = getParams();
  emitVar(stm, params->front().varObj, typeResolver, cppProgram, cibParams, emitHandle);
  for (CppParamList::const_iterator paramIter = params->begin(); (++paramIter) != params->end(); )
  {
    stm << ", ";
    emitVar(stm, paramIter->varObj, typeResolver, cppProgram, cibParams, emitHandle);
  }
}

void CibFunctionHelper::emitArgsForCall(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, bool emitHandle /*= false*/) const
{
  //FIXME for function pointer type params, it currently handles only functions whose parameter is not function-pointer type.

  if (!hasParams())
    return;
  auto params = getParams();

  for (auto& param : *params)
  {
    if (params->front() != param)
      stm << ", ";
    //FIXME for enum and other non compound types.
    CibCppCompound* resolvedType = (CibCppCompound*)((getOwner() && emitHandle) ? getOwner()->resolveTypeName(param.varObj->baseType_, cppProgram) : NULL);
    if (resolvedType)
    {
      stm << cibParams.cibInternalNamespace << resolvedType->fullName() << "::__zz_cib_Helper::__zz_cib_handle(";
      stm << param.varObj->name_ << ")";
    }
    else
    {
      stm << param.varObj->name_;
    }
  }
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
  if (isFunction() && func_->retType_)
  {
    emitType(stm, func_->retType_, NULL, cppProgram, cibParams, false);
    stm << ' ';
  }
  stm << funcName() << '(';
  emitArgsForDecl(stm, cppProgram, cibParams);
  stm << ')';
  if (isConst())
    stm << " const";
  if (isPureVirtual())
    stm << " = 0";
  stm << ";\n";
}

void CibFunctionHelper::emitCAPIDefn(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, CppIndent indentation /* = CppIndent */) const
{
  stm << indentation;
  if (isConstructor())
    stm << getOwner()->fullName() << "*";
  else if (isDestructor())
    stm << "void";
  else
    emitType(stm, func_->retType_, getOwner(), cppProgram, cibParams);
  stm << " __stdcall ";
  stm << capiName(cibParams) << '(';
  if (!isStatic() && (isMethod() || isDestructor()))
  {
    stm << getOwner()->fullName() << "* __zz_cib_obj";
    if (hasParams())
      stm << ", ";
  }
  emitArgsForDecl(stm, cppProgram, cibParams, true);
  stm << ") {\n";
  stm << ++indentation;
  if (isConstructor())
  {
    stm << "return new " << getOwner()->fullName();
    stm << '(';
    emitArgsForCall(stm, cppProgram, cibParams);
    stm << ");\n";
  }
  else if (isDestructor())
  {
    stm << "delete __zz_cib_obj;\n";
  }
  else
  {
    if (func_->retType_ && !func_->retType_->isVoid())
      stm << "return ";
    if (!isStatic())
      stm << "__zz_cib_obj->";
    stm << getOwner()->fullName() << "::";
    stm << funcName();
    stm << '(';
    emitArgsForCall(stm, cppProgram, cibParams);
    stm << ");\n";
  }
  stm << --indentation << "}\n";
}

void CibFunctionHelper::emitProcType(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, CppIndent indentation /* = CppIndent */) const
{
  stm << indentation;
  stm << "using " << procType(cibParams) << " = ";
  emitCAPIReturnType(stm, cppProgram, cibParams);
  stm << " (__stdcall *) (";
  if (!isStatic() && (isDestructor() || isMethod()))
  {
    stm << "__zz_cib_::HANDLE*";
    if (hasParams())
      stm << ", ";
  }
  emitArgsForDecl(stm, cppProgram, cibParams, true, true);
  stm << ");\n";
}

void CibFunctionHelper::emitCAPIReturnType(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, CppIndent indentation /* = CppIndent */) const
{
  stm << indentation;
  if (isConstructor())
    stm << "__zz_cib_::HANDLE*";
  else if (isDestructor())
    stm << "void";
  else
    emitType(stm, func_->retType_, getOwner(), cppProgram, cibParams, true);
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
  stm << ' ' << sep << ' ' << prot << ' ' << inhList.front()->fullName();
  sep = ',';
  for (CibCppCompoundArray::const_iterator itr = inhList.begin()+1; itr != inhList.end(); ++itr)
    stm << sep << prot << ' ' << (*itr)->fullName();
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

  bfs::path usrIncPath = cibParams.outputPath / name().substr(cibParams.inputPath.native().length());
  std::ofstream stm(usrIncPath.native(), std::ios_base::out);

  auto firstStatementItr = std::find_if(members_.begin(), members_.end(), [](auto mem)->bool {
    return (mem->objType_ > kCppStatementObjectTypeStarts);
  });
  auto lastPreProcessorRevItr = std::find_if(std::reverse_iterator<decltype(firstStatementItr)>(firstStatementItr), members_.rend(), [](auto mem)->bool {
    return (mem->isPreProcessorType());
  });
  auto memItr = members_.begin();
  if (lastPreProcessorRevItr != members_.rend())
  {
    std::for_each(memItr, lastPreProcessorRevItr.base(), [&stm](auto mem) {
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
  std::ofstream stm(implPath.native(), std::ios_base::out);

  stm << "#include \"" << cibParams.cibInternalDirName << "/" << cibParams.cibdefFileName << "\"\n";

  emitHelperDecl(stm, cppProgram, cibParams);
}

void CibCppCompound::emitImpl2Header(const CppProgramEx& cppProgram, const CibParams& cibParams) const
{
  if (!isCppFile())
    return;
  auto implPath = cibParams.outputPath / (getImplPath(cibParams) + "_impl2.h");
  std::ofstream stm(implPath.native(), std::ios_base::out);
  stm << "#include \"" << cibParams.cibIdFilename() << "\"\n";
  stm << "#include <cassert>\n";
  emitHelperDefn(stm, cppProgram, cibParams);
  emitDefn(stm, cppProgram, cibParams);
}

void CibCppCompound::emitImplSource(const CppProgramEx& cppProgram, const CibParams& cibParams) const
{
  if (!isCppFile())
    return;
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

void CibCppCompound::emitDecl(const CppObj* obj, std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, CppIndent indentation /* = CppIndent */)
{
  if (obj->objType_ == CppObj::kCompound)
  {
    auto compound = static_cast<const CibCppCompound*>(obj);
    compound->emitDecl(stm, cppProgram, cibParams, indentation);
  }
  else if (obj->isFunctionLike())
  {
    CibFunctionHelper func(obj);
    func.emitOrigDecl(stm, cppProgram, cibParams, indentation);
  }
  else
  {
    gCppWriter.emit(obj, stm);
  }
}

void CibCppCompound::emitDecl(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, CppIndent indentation /* = CppIndent */) const
{
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
      if (inline_)
      {
        emitInheritance(kProtected, sep);
        emitInheritance(kPrivate, sep);
      }
    }
    stm << '\n' << indentation++ << "{\n";
  }
  CppObjProtLevel lastProt = kUnknownProt;

  for (auto mem : members_)
  {
    if (!inline_ && !isMemberPublic(mem->prot_, compoundType_)) // We will emit only public members unless class is inline.
      continue;
    if (isClassLike() && lastProt != mem->prot_)
    {
      stm << --indentation << mem->prot_ << ":\n";
      ++indentation;
      lastProt = mem->prot_;
    }
    emitDecl(mem, stm, cppProgram, cibParams, indentation);
  }
  if (isClassLike())
  {
    if (!inline_)
    {
      // Everything below this is for glue code
      stm << '\n';
      stm << --indentation << "private:\n";
      stm << ++indentation << "__ZZ_CIB_CLASS_INTERNAL_DEF(" << name() << ", " << fullName() << ");\n";
    }
    stm     << --indentation << "};\n";
  }
  else if (isNamespaceLike())
  {
    stm   << --indentation << "}\n";
  }
}

void CibCppCompound::emitFromHandleDecl(std::ostream& stm, const CibParams& cibParams, CppIndent indentation) const
{
  if (!isFacadeLike() && isAbstract())
    return; // Nothing to do for abstract class that isn't a facade.
  stm << indentation << "static " << name() << "* " << cibParams.fromHandle << "(__zz_cib_::HANDLE* h)";
  if (isFacadeLike())
  {
    stm << ";\n"; // For Facade classes definition of __fromHandle() will be more elaborative.
  }
  else
  {
    stm << "\n" << indentation++ << "{\n";
    stm << indentation << "return new " << name() << "(h);\n";
    stm << --indentation << "}";
  }
}

void CibCppCompound::identifyMethodsToBridge()
{
  for (auto mem : members_)
  {
    if (!inline_ && !isMemberPublic(mem->prot_, compoundType_))    // We will emit only public members unless class is inline.
      continue;
    if (mem->isFunctionLike())
    {
      CibFunctionHelper func(mem);
      if (inline_) // If class is inline
      {
        if (func.isStatic() && !func.isInline()) // only non-inline static methods need bridging.
          needsBridging_.push_back(func);
      }
      else if (!func.isPureVirtual() || func.isDestructor())
      {
        needsBridging_.push_back(func);
      }
    }
    else if (mem->isNamespaceLike())
    {
      auto compound = static_cast<CibCppCompound*>(mem);
      compound->identifyMethodsToBridge();
    }
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

void CibCppCompound::emitHelperDefn(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, CppIndent indentation /* = CppIndent */) const
{
  if (isNamespaceLike() && !needsBridging_.empty())
  {
    stm << '\n';        // Start in new line.
    if (!wrappingNamespaceDeclarations(cibParams).empty())
      stm << ++indentation << wrappingNamespaceDeclarations(cibParams) << '\n';
    stm << ++indentation << "namespace " << name() << " { class __zz_cib_Helper {\n";
    stm << ++indentation << "friend " << compoundType_ << ' ' << fullName() << ";\n";

    for (auto func : needsBridging_)
    {
      func.emitProcType(stm, cppProgram, cibParams, indentation);
    }
    forEachParent(kPublic, [this, &cibParams, &stm, indentation](const CibCppCompound* pubParent) {
      stm << indentation << "using " << castToBaseName(pubParent, cibParams) << "Proc = __zz_cib_::HANDLE* (__stdcall *) (__zz_cib_::HANDLE* h);\n";
    });

    stm << '\n'; // Start in new line.
    for (auto func : needsBridging_)
    {
      stm << indentation << "static ";
      func.emitCAPIReturnType(stm, cppProgram, cibParams);
      stm << ' ' << func.procName(cibParams) << "(";
      if (!func.isStatic() && (!func.isConstructor() || func.isCopyConstructor()))
      {
        stm << "__zz_cib_::HANDLE* __zz_cib_obj";
        if (func.hasParams())
          stm << ", ";
      }
      func.emitArgsForDecl(stm, cppProgram, cibParams, true, true);
      stm <<") {\n";
      stm << ++indentation << "auto proc = (" << func.procType(cibParams) << ") instance().mtbl[";
      stm << "__zz_cib_" << fullName() << "::__zz_cib_methodid::";
      stm << func.capiName(cibParams) << "];\n";
      stm << indentation << "return proc(";
      if (!func.isStatic() && (!func.isConstructor() || func.isCopyConstructor()))
      {
        stm << "__zz_cib_obj";
        if (func.hasParams())
          stm << ", ";
      }
      func.emitArgsForCall(stm, cppProgram, cibParams, false);
      stm << ");\n";
      stm << --indentation << "}\n";
    }
    forEachParent(kPublic, [this, &cibParams, &stm, &indentation](const CibCppCompound* pubParent) {
      auto castProcName = castToBaseName(pubParent, cibParams);
      stm << indentation << "static __zz_cib_::HANDLE* " << castProcName << "(__zz_cib_::HANDLE* __zz_cib_obj) {\n";
      stm << ++indentation << "auto proc = (" << castProcName << "Proc) instance().mtbl[";
      stm << "__zz_cib_" << fullName() << "::__zz_cib_methodid::";
      stm << castProcName << "];\n";
      stm << indentation << "return proc(__zz_cib_obj);\n";
      stm << --indentation << "}\n";
    });
    if (!needsBridging_.empty())
    {
      stm << --indentation << "private:\n";
      stm << ++indentation << "__zz_cib_::MethodTable mtbl;\n";
      stm << indentation << "__zz_cib_Helper() {\n";
      stm << ++indentation << "size_t mnum = 0;\n";
      stm << indentation << cibParams.moduleName << "Lib_GetMethodTable(";
      auto classIdName = fullName();
      std::transform(classIdName.begin(), classIdName.end(), classIdName.begin(), [](char c)->char {
        return c == ':' ? '_' : c;
      });
      stm << cibParams.classIdOwnerSpace() << classIdName << ", &mtbl, &mnum);\n";
      stm << indentation << "assert(mnum >= __zz_cib_" << fullName() << "::__zz_cib_methodid::__zz_cib_next_method_id);\n";
      stm << --indentation << "}\n";
      stm << indentation << "static const __zz_cib_Helper& instance() {\n";
      stm << ++indentation << "static __zz_cib_Helper bridgeIns;\n";
      stm << indentation << "return bridgeIns;\n";
      stm << --indentation << "}\n";
    }
    stm << '\n';        // Start in new line.
    stm << --indentation << "public:\n";
    stm << ++indentation << "static __zz_cib_::HANDLE* __zz_cib_handle(" << fullName() << "* __zz_cib_obj) {\n";
    stm << ++indentation << "return __zz_cib_obj->__zz_cib_h_;\n";
    stm << --indentation << "}\n";
    stm << indentation << "static void __zz_cib_release_handle(" << fullName() << "* __zz_cib_obj) {\n";
    stm << ++indentation << "__zz_cib_obj->__zz_cib_h_ = nullptr;\n";
    stm << --indentation << "}\n";
    stm << --indentation << "};\n";

    if (!wrappingNamespaceDeclarations(cibParams).empty())
      stm << --indentation << closingBracesForWrappingNamespaces() << '\n';
    stm << --indentation << "}\n";
  }

  for (auto mem : members_)
  {
    if (mem->isNamespaceLike())
      static_cast<const CibCppCompound*>(mem)->emitHelperDefn(stm, cppProgram, cibParams);
  }
}

void CibCppCompound::emitDefn(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, CppIndent indentation /* = CppIndent */) const
{
  for (CppObjArray::const_iterator memItr = members_.begin(); memItr != members_.end(); ++memItr)
  {
    CppObj* mem = *memItr;
    if (mem->objType_ == CppObj::kCompound)
      static_cast<CibCppCompound*>(mem)->emitDefn(stm, cppProgram, cibParams, indentation);
  }

  if (isClassLike())
  {
    // Emit the ctor to construct from HANDLE.
    stm     << '\n'; // Start in new line.
    stm     << indentation << "inline " << fullName() << "::" << name() << "(__zz_cib_::HANDLE* h)\n";
    ++indentation;
    char sep = ':';
    forEachParent(kPublic, [this, &cibParams, &stm, &indentation, &sep](const CibCppCompound* pubParent) {
      stm << indentation << sep << ' ' << pubParent->fullName() << "::" << pubParent->name() << "(__zz_cib_"<< fullName() << "::__zz_cib_Helper::" << castToBaseName(pubParent, cibParams) << "(h))\n";
      sep = ',';
    });
    stm << indentation << sep << " __zz_cib_h_(h)";
    stm << --indentation << "\n{}\n";
  }
  for (auto func : needsBridging_)
  {
    stm     << '\n'; // Start in new line.
    stm     << indentation << "inline ";
    if (func.isFunction())
    {
      emitType(stm, func.retType(), this, cppProgram, cibParams);
      stm << ' ';
    }
    stm     << fullName() << "::" << func.funcName() << '(';
    func.emitArgsForDecl(stm, cppProgram, cibParams);
    stm     << ")";
    if (func.isConstructor())
    {
      stm << '\n';
      stm << ++indentation << ": " << name() << "(__zz_cib_" << fullName() << "::__zz_cib_Helper::" << func.procName(cibParams) << '(';
      func.emitArgsForCall(stm, cppProgram, cibParams);
      stm << "))\n";
      stm << --indentation << "{}\n";
    }
    else
    {
      if (func.isConst())
      {
        stm << " const";
      }
      stm << "{\n";
      stm << ++indentation;
      CibCppCompound* retType = NULL;
      if (func.isFunction() && func.retType() && !func.retType()->isVoid())
      {
        stm << "return ";
        retType = (CibCppCompound*)resolveTypeName(func.retType()->baseType_, cppProgram);
        if (retType)
        {
          stm << retType->fullName() << "::" << cibParams.fromHandle << "(\n";
          stm << ++indentation;
        }
      }
      stm << "__zz_cib_" << fullName() << "::__zz_cib_Helper::" << func.procName(cibParams) << "(";
      if (!func.isStatic())
      {
        stm << "__zz_cib_h_";
        if (func.hasParams())
          stm << ", ";
      }
      func.emitArgsForCall(stm, cppProgram, cibParams, true);
      stm << ')';
      if (retType)
        stm << '\n' << --indentation << ")";
      stm << ";\n";
      if (func.isDestructor())
      {
        forEachParent(kPublic, [&stm, &indentation](const CibCppCompound* baseCompound) {
          stm << indentation << "__zz_cib_" << baseCompound->fullName() << "::__zz_cib_Helper::__zz_cib_release_handle(this);\n";
        });
      }
      stm << --indentation << "}\n";
    }
  }
}

void CibCppCompound::emitLibGlueCode(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, CppIndent indentation /* = CppIndent */)
{
  if (isCppFile())
  {
    stm     << "#include \"cib_" << cibParams.moduleName << "Lib.h\"\n";
    std::string incName = name();
    std::string::size_type sepPos  = incName.rfind('/');
    if (sepPos == incName.npos)
      sepPos = incName.rfind('\\');
    if (sepPos != incName.npos)
      incName = incName.substr(sepPos+1);
    stm     << indentation << "#include \"" << incName << "\"\n";
    stm     << '\n'; // Start in new line.
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
      static_cast<CibCppCompound*>(mem)->emitLibGlueCode(stm, cppProgram, cibParams, indentation);
      if (isNamespaceLike())
        stm << --indentation << "}\n";
    }
  }
  if (isNamespaceLike() && !needsBridging_.empty())
  {
    stm     << indentation++ << "namespace " << name() << " {\n";
    for (size_t idxFunc = 0; idxFunc < needsBridging_.size(); ++idxFunc)
    {
      CibFunctionHelper func = needsBridging_[idxFunc];
      func.emitCAPIDefn(stm, cppProgram, cibParams, indentation);
      stm << '\n'; // Start in new line.
    }

    CibCppCompoundArray& pubParents = parents_[kPublic];
    for (CibCppCompoundArray::const_iterator parentItr = pubParents.begin(); parentItr != pubParents.end(); ++parentItr)
    {
      const CibCppCompound* pubParent = *parentItr;
      stm << indentation << pubParent->fullName() << "* __stdcall " << castToBaseName(pubParent, cibParams) << "(" << fullName() << "* __zz_cib_obj) {\n";
      stm << ++indentation << "return __zz_cib_obj;\n";
      stm << --indentation << "}\n";
    }
    stm << --indentation << "}\n";
  }
  if (isCppFile())
  {
    stm << --indentation << "}\n";
  }
}

void CibCppCompound::emitMethodTableGetterDecl(std::ostream& stm, const CibParams& cibParams, CppIndent indentation /* = CppIndent */)
{
  for (auto mem : members_)
  {
    if (mem->objType_ == CppObj::kCompound)
      static_cast<CibCppCompound*>(mem)->emitMethodTableGetterDecl(stm, cibParams, indentation);
  }
  if (isNamespaceLike() && !needsBridging_.empty())
  {
    stm << indentation << wrappingNamespaceDeclarations(cibParams) << " namespace " << name() << " {";
    stm << " void GetMethodTable(MethodTable*, size_t*); }";
    stm << closingBracesForWrappingNamespaces() << '\n';
  }
}

void CibCppCompound::emitMethodTableGetterDefn(std::ostream& stm, const CppProgramEx& cppProgram, const CibParams& cibParams, CppIndent indentation /* = CppIndent */)
{
  for (CppObjArray::const_iterator memItr = members_.begin(); memItr != members_.end(); ++memItr)
  {
    CppObj* mem = *memItr;
    if (mem->objType_ == CppObj::kCompound)
      static_cast<CibCppCompound*>(mem)->emitMethodTableGetterDefn(stm, cppProgram, cibParams, indentation);
  }
  if (isNamespaceLike() && !needsBridging_.empty())
  {
    stm << indentation << wrappingNamespaceDeclarations(cibParams) << " namespace " << name() << " {\n";
    stm << ++indentation << "using MethodEntry = void(*)();\n";
    stm << indentation << "using MethodTable = const MethodEntry*;\n";
    stm << indentation << "void GetMethodTable(MethodTable* pMethodTable, size_t* pLen)\n";
    stm << indentation << "{\n";
    stm << ++indentation << "static const MethodEntry methodTable[] = {\n";
    stm << ++indentation << "(MethodEntry) nullptr"; // This slot in method table is reserved for maybe some future use.
    for (const auto& func : needsBridging_)
    {
      stm << ",\n" << indentation << "(MethodEntry) &" << func.capiName(cibParams);
    }
    stm << '\n';
    stm << --indentation << "};\n";
    stm << indentation << "*pMethodTable = methodTable;\n";
    stm << indentation << "*pLen = " << 1+needsBridging_.size() << ";\n";
    stm << --indentation << "}\n";
    stm << --indentation << '}' << closingBracesForWrappingNamespaces() << '\n';;
  }
}
