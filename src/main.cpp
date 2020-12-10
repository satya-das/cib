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
#include "cibhelper.h"
#include "cibidmgr.h"
#include "ciboptionparser.h"
#include "cibutil.h"

#include "cppast.h"

#include "boost-helper/bfs.h"

#include <boost/program_options.hpp>

#include <iostream>
#include <map>
#include <sstream>
#include <tuple>
#include <unordered_set>

//////////////////////////////////////////////////////////////////////////

typedef boost::filesystem::path::value_type chartype;
#ifndef _T
#  define _T(x) L##x
#endif //#ifndef _T

namespace bfs = boost::filesystem;

void ensureDirectoriesExist(const CibParams& cibParams)
{
  bfs::create_directories(cibParams.libGlueDir);
  bfs::create_directories(cibParams.outputPath);
  bfs::create_directories(cibParams.cibInternalDir());
  bfs::create_directories(cibParams.libGlueDir / cibParams.stlHelperDirName);
  bfs::create_directories(cibParams.cibInternalDir() / cibParams.stlHelperDirName);
}

static void emitLibraryGatewayFunction(const CppCompoundArray& fileAsts,
                                       const CibParams&        cibParams,
                                       const CibIdMgr&         cibIdMgr)
{
  std::ofstream stm((cibParams.libGlueDir / ("__zz_cib_" + cibParams.moduleName + "-gateway.cpp")).string(),
                    std::ios_base::out);

  stm << "#include \"__zz_cib_" << cibParams.moduleName << "-decl.h\"\n";
  stm << "#include \"__zz_cib_" << cibParams.moduleName << "-export.h\"\n";
  stm << "#include \"" << cibParams.cibIdFilename() << "\"\n";
  stm << "#include \"__zz_cib_" << cibParams.moduleName << "-mtable.h\"\n\n";

  CppIndent indentation;
  cibIdMgr.forEachCompound([&](const CibFullClassName&, const CibFullClassNsName& nsName, const CibIdData&) {
    stm << "namespace __zz_cib_ { " << expandNs(nsName.begin(), nsName.end());
    stm << " const __zz_cib_MethodTable* __zz_cib_GetMethodTable(); ";
    stm << --indentation << closingNs(nsName.begin(), nsName.end()) << "}\n";
  });

  stm << '\n';
  stm << indentation << "extern \"C\" __zz_cib_export\n"
      << "const __zz_cib_::__zz_cib_MethodTable* __zz_cib_decl __zz_cib_" << cibParams.moduleName
      << "GetMethodTable(std::uint32_t classId)\n";
  stm << indentation << "{\n";
  stm << ++indentation << "switch(classId) {\n";
  cibIdMgr.forEachCompound([&](const CibFullClassName&, const CibFullClassNsName& nsName, const CibIdData&) {
    stm << indentation << "case __zz_cib_::__zz_cib_ids::" << nsName << "::__zz_cib_classId:\n";
    stm << ++indentation << "return __zz_cib_::" << nsName << "::__zz_cib_GetMethodTable();\n";
    --indentation;
  });
  stm << indentation << "default:\n";
  stm << ++indentation << "return nullptr;\n";
  stm << --indentation << "}\n";
  stm << --indentation << "}\n";
}

static void emitExceptionToErrorConverter(const CibHelper& helper, const CibParams& cibParams, const CibIdMgr& cibIdMgr)
{
  if (!cibParams.handleException)
    return;

  std::ofstream stm(
    (cibParams.libGlueDir / ("__zz_cib_" + cibParams.moduleName + "-exception-convert-to-error.cpp")).string(),
    std::ios_base::out);

  stm << "#include \"__zz_cib_" << cibParams.moduleName << "-exception-convert-to-error.h\"\n";
  stm << "#include \"__zz_cib_" << cibParams.moduleName << "-ids.h\"\n\n";

  const auto& exceptionHeaders = collectHeaderDependencies(cibParams.exceptionClasses, helper, cibParams, false);
  for (const auto& header : exceptionHeaders)
    stm << "#include " << header << "\n";
  stm << '\n';

  CppIndent indentation;
  stm << "namespace __zz_cib_ {\n\n";
  stm << "__zz_cib_AbiException* __zz_cib_ConvertException() {\n";

  stm << ++indentation << "try { throw;\n";

  const auto convertToError = [&stm, &indentation](const CibCompound* compound) {
    stm << indentation << "} catch (const " << fullName(compound) << "& e) {\n";
    stm << ++indentation << "return __zz_cib_AbiExceptionNew("
        << "__zz_cib_ids::" << compound->fullNsName() << "::__zz_cib_classId"
        << ", new " << fullName(compound) << "(e));\n";
    --indentation;
  };

  for (const auto& ex : cibParams.exceptionClasses)
  {
    auto* cppObj = helper.getCppObjFromTypeName(ex);
    assert(cppObj->objType_ == CppCompound::kObjectType);
    auto* compound = static_cast<CibCompound*>(cppObj);

    compound->forEachDescendent([&convertToError](auto* descendent) { convertToError(descendent); });
    convertToError(compound);
  }

  stm << indentation << "} catch (...) {\n";
  stm << ++indentation << "return __zz_cib_AbiExceptionNew(0, nullptr);\n";
  stm << --indentation << "}\n";
  stm << indentation << "return nullptr;\n";
  stm << --indentation << "}\n";
  stm << --indentation << "\n}\n";
}

static void emitThrowOnError(const CibHelper& helper, const CibParams& cibParams, const CibIdMgr& cibIdMgr)
{
  if (!cibParams.handleException)
    return;

  std::ofstream stm(
    (cibParams.cibInternalDir() / ("__zz_cib_" + cibParams.moduleName + "-exception-throw-on-error.cpp")).string(),
    std::ios_base::out);

  stm << "#include \"__zz_cib_" << cibParams.moduleName << "-exception-throw-on-error.h\"\n";
  stm << "#include \"__zz_cib_" << cibParams.moduleName << "-ids.h\"\n\n";

  const auto& exceptionHeaders = collectHeaderDependencies(cibParams.exceptionClasses, helper, cibParams, false);
  for (const auto& header : exceptionHeaders)
    stm << "#include " << header << "\n";
  stm << '\n';

  CppIndent indentation;
  stm << "namespace __zz_cib_ {\n\n";
  stm << "void __zz_cib_ThrowExceptionOnError(__zz_cib_AbiException* __zz_cib_exception) {\n";
  stm << ++indentation << "const auto classId = __zz_cib_exception->classId;\n";
  stm << indentation << "const auto handle = __zz_cib_exception->handle;\n";
  stm << indentation << "__zz_cib_AbiExceptionDelete(__zz_cib_exception);\n";

  const auto throwOnError = [&stm, &indentation](const CibCompound* compound) {
    stm << indentation << "case "
        << "__zz_cib_ids::" << compound->fullNsName() << "::__zz_cib_classId: {\n";
    stm << ++indentation << "auto __zz_cib_obj = reinterpret_cast<__zz_cib_AbiType_t<" << fullName(compound)
        << ">>(handle);\n";
    stm << indentation << "throw __zz_cib_AbiTypeToCoreType<" << fullName(compound) << ">(__zz_cib_obj).Convert();\n";
    stm << --indentation << "}\n";
  };

  if (!cibParams.exceptionClasses.empty())
  {
    stm << indentation << "switch(classId) {\n";
    ++indentation;
    for (const auto& ex : cibParams.exceptionClasses)
    {
      auto* cppObj = helper.getCppObjFromTypeName(ex);
      assert(cppObj->objType_ == CppCompound::kObjectType);
      auto* compound = static_cast<CibCompound*>(cppObj);

      compound->forEachDescendent([&throwOnError](auto* descendent) { throwOnError(descendent); });
      throwOnError(compound);
    }
    stm << --indentation << "}\n";
  }
  stm << indentation << "throw __zz_cib_UnknownException();\n";
  stm << --indentation << "}\n";
  stm << --indentation << "\n}\n";
}

using BridgableNamespaces = std::map<CibFullClassName, std::set<const CibCompound*> >;

static BridgableNamespaces collectBridgableNamespaces(const CppCompoundArray& fileAsts)
{
  BridgableNamespaces bridgableNamespaces;
  for (auto& fileAst : fileAsts)
  {
    CibConstCompoundEPtr ast = fileAst;
    ast->forEachNested([&](const CibCompound* nested) {
      if (isNamespace(nested) && nested->needsBridging())
        bridgableNamespaces[fullName(nested)].insert(nested);
    });
    if (ast->needsBridging())
      bridgableNamespaces[fullName((const CppCompound*) ast)].insert(ast);
  }

  return bridgableNamespaces;
}

static std::string replaceString(std::string s, const std::string& p, const std::string& q)
{
  for (auto loc = s.find(p.c_str(), 0, p.length()); loc < s.size(); loc = s.find(p.c_str(), loc, p.length()))
    s.replace(loc, p.length(), q.c_str());
  return s;
}

using FunctionRepo = std::unordered_set<std::string>;

static void emitHelperDefinitionForNamespace(std::ostream&                       stm,
                                             const std::set<const CibCompound*>& nameSpaceCompounds,
                                             const CibHelper&                    cibHelper,
                                             const CibParams&                    cibParams,
                                             const CibIdData*                    cibIdData,
                                             CppIndent                           indentation = CppIndent())
{
  FunctionRepo funcRepo;
  auto*        compound = *(nameSpaceCompounds.begin());
  compound->emitHelperDefnStart(stm, cibParams, indentation++);
  for (auto* comp : nameSpaceCompounds)
  {
    const auto& functions = comp->getNeedsBridgingMethods();
    for (auto func : functions)
    {
      if (funcRepo.insert(func.signature(cibHelper)).second)
        comp->emitFunctionInvokeHelper(stm, func, cibHelper, cibParams, cibIdData, indentation);
    }
  }
  compound->emitHelperDefnEnd(stm, indentation);
}

static void emitGlueCodeForNamespaces(const CppCompoundArray& fileAsts,
                                      const CibHelper&        helper,
                                      const CibParams&        cibParams,
                                      const CibIdMgr&         cibIdMgr)
{
  auto bridgableNamespaces = collectBridgableNamespaces(fileAsts);
  for (auto& bridgableNamespace : bridgableNamespaces)
  {
    const auto& name      = bridgableNamespace.first;
    const auto& compounds = bridgableNamespace.second;
    auto fileName   = (name.empty() ? cibParams.globalNsName() : "__zz_cib_" + replaceString(name, "::", "-")) + ".cpp";
    auto bndSrcPath = cibParams.libGlueDir / fileName;
    auto gluSrcPath = cibParams.outputPath / fileName;

    auto* cmp = *(compounds.begin());

    std::ofstream bindSrcStm(bndSrcPath.string(), std::ios_base::out);

    CibCompound::emitCommonCibHeaders(bindSrcStm, cibParams);
    for (auto* compound : compounds)
    {
      auto* ast = root(compound);
      compound->emitFacadeAndInterfaceDependecyHeaders(bindSrcStm, helper, cibParams, cibIdMgr, false, CppIndent());
      bindSrcStm << "#include \"" << bfs::relative(ast->name(), cibParams.inputPath).string() << "\"\n";
    }
    bindSrcStm << '\n';
    for (auto* compound : compounds)
    {
      compound->emitDelegators(bindSrcStm, helper, cibParams, cibIdMgr);
    }
    cmp->emitMethodTableGetterDefn(bindSrcStm, helper, cibParams, cibIdMgr, false);

    std::ofstream glueSrcStm(gluSrcPath.string(), std::ios_base::out);
    CibCompound::emitCommonExpHeaders(glueSrcStm, cibParams);
    glueSrcStm << '\n';
    for (auto* compound : compounds)
    {
      auto* ast = root(compound);
      glueSrcStm << "#include \"" << bfs::relative(ast->name(), cibParams.inputPath).string() << "\"\n";
    }
    glueSrcStm << '\n';
    auto cibIdData = cibIdMgr.getCibIdData(cmp->longName());
    emitHelperDefinitionForNamespace(glueSrcStm, compounds, helper, cibParams, cibIdData);
    FunctionRepo funcRepo;
    for (auto* compound : compounds)
    {
      for (auto func : compound->getNeedsBridgingMethods())
      {
        if (funcRepo.insert(func.signature(helper)).second)
        {
          glueSrcStm << '\n'; // Start in new line.
          func.emitDefn(glueSrcStm, false, helper, cibParams, compound, cibIdData);
        }
      }
    }
  }
}

std::string replaceModuleNameInTemplate(const std::string& resBuf, const std::string& moduleName)
{
  std::string       ret;
  const std::string kStrToReplace = "Module";
  const auto*       s             = resBuf.data();
  for (const auto* p = strstr(s, kStrToReplace.data()); p; p = strstr(s, kStrToReplace.data()))
  {
    ret.append(s, p);
    ret.append(moduleName);
    s = p + kStrToReplace.length();
  }

  ret.append(s, resBuf.data() + resBuf.length());

  return ret;
}

static void processResourceFile(const bfs::path& filepath, const bfs::path& outDir, const CibParams& cibParams)
{
  {
    const auto     filename = filepath.filename().string();
    std::stringbuf tmpbuf;
    std::ifstream((cibParams.resDir / filename).string(), std::ios_base::in) >> &tmpbuf;
    auto          buf         = tmpbuf.str();
    auto          outFilename = "__zz_cib_" + cibParams.moduleName + filename.substr(15);
    auto          cibcode     = replaceModuleNameInTemplate(buf.data(), cibParams.moduleName);
    std::ofstream cibLibIncStm((outDir / filepath.parent_path() / outFilename).string(), std::ios_base::out);
    cibLibIncStm << cibcode;
  }
}

static void copyResourceFile(const bfs::path& filepath, const bfs::path& outDir, const CibParams& cibParams)
{
  bfs::copy_file(cibParams.resDir / filepath, outDir / filepath, bfs::copy_option::overwrite_if_exists);
}

static void emitLibBoilerPlateCode(const CibParams& cibParams)
{
  const char* filesToProcessForBinder[] = {"__zz_cib_Module-class-proxy-detection.h",
                                           "__zz_cib_Module-class-types.h",
                                           "__zz_cib_Module-class-helper.h",
                                           "__zz_cib_Module-class-down-cast.h",
                                           "__zz_cib_Module-exception-abi-type.h",
                                           "__zz_cib_Module-exception-convert-to-error.h",
                                           "__zz_cib_Module-exception-throw-on-error.h",
                                           "__zz_cib_Module-smart-ptr-detection.h",
                                           "__zz_cib_Module-smart-ptr-input.h",
                                           "__zz_cib_Module-mtable.h",
                                           "__zz_cib_Module-mtable-helper.h",
                                           "__zz_cib_Module-delegate-helper.h",
                                           "__zz_cib_Module-decl.h",
                                           "__zz_cib_Module-export.h",
                                           "__zz_cib_Module-generic.h",
                                           "__zz_cib_Module-delegator.h",
                                           "__zz_cib_Module-proxy-mgr.h",
                                           "__zz_cib_Module-proxy-mgr.cpp",
                                           "__zz_cib_Module-proxy-types.h",
                                           "__zz_cib_Module-internal.h",
                                           "__zz_cib_Module-classId-repo.cpp",
                                           "__zz_cib_Module-type-converters.h",
                                           "__zz_cib_Module-type-converter-proxied-class.h",
                                           "__zz_cib_Module-type-converter-proxy-class.h",
                                           "__zz_cib_Module-type-converter-base.h",
                                           "__zz_cib_Module-type-converter-smart-ptr.h",
                                           "__zz_cib_Module-type-converter-function-object.h",
                                           "__zz_cib_Module-type-converter-basic.h",
                                           "__zz_cib_Module-type-converter-std-function.h",
                                           "__zz_cib_Module-std-function-converter-base.h",
                                           "__zz_cib_Module-value-types.h",
                                           "__zz_cib_Module-type-traits.h",
                                           nullptr};
  const char* filesToCopyForBinder[]    = {"__zz_cib_stl-helpers/__zz_cib_vector-iterator.h",
                                        "__zz_cib_stl-helpers/__zz_cib_vector-reverse_iterator.h",
                                        "__zz_cib_stl-helpers/__zz_cib_bidirectional_iterator.h",
                                        "__zz_cib_stl-helpers/__zz_cib_bidirectional_reverse_iterator.h",
                                        nullptr};

  for (int i = 0; filesToProcessForBinder[i] != nullptr; ++i)
    processResourceFile(filesToProcessForBinder[i], cibParams.libGlueDir, cibParams);

  for (int i = 0; filesToCopyForBinder[i] != nullptr; ++i)
    copyResourceFile(filesToCopyForBinder[i], cibParams.libGlueDir, cibParams);
}

static void emitClientBoilerPlateCode(const CibParams& cibParams)
{
  const char* filesToProcessForClient[] = {"__zz_cib_Module-class-proxy-detection.h",
                                           "__zz_cib_Module-class-helper.h",
                                           "__zz_cib_Module-class-types.h",
                                           "__zz_cib_Module-exception-abi-type.h",
                                           "__zz_cib_Module-exception-convert-to-error.h",
                                           "__zz_cib_Module-exception-throw-on-error.h",
                                           "__zz_cib_Module-type-converters.h",
                                           "__zz_cib_Module-type-converter-base.h",
                                           "__zz_cib_Module-type-converter-function-object.h",
                                           "__zz_cib_Module-type-converter-basic.h",
                                           "__zz_cib_Module-type-converter-proxy-class.h",
                                           "__zz_cib_Module-type-converter-proxied-class.h",
                                           "__zz_cib_Module-type-converter-smart-ptr.h",
                                           "__zz_cib_Module-type-converter-std-function.h",
                                           "__zz_cib_Module-std-function-converter-base.h",
                                           "__zz_cib_Module-delegator.h",
                                           "__zz_cib_Module-generic.h",
                                           "__zz_cib_Module-smart-ptr-detection.h",
                                           "__zz_cib_Module-smart-ptr-input.h",
                                           "__zz_cib_Module-def.h",
                                           "__zz_cib_Module-mtable.h",
                                           "__zz_cib_Module-mtable-helper.h",
                                           "__zz_cib_Module-decl.h",
                                           "__zz_cib_Module-import.h",
                                           "__zz_cib_Module-handle-proxy-map.h",
                                           "__zz_cib_Module-class-internal-def.h",
                                           "__zz_cib_Module-type-traits.h",
                                           nullptr};

  for (int i = 0; filesToProcessForClient[i] != nullptr; ++i)
    processResourceFile(filesToProcessForClient[i], cibParams.cibInternalDir(), cibParams);
}

int main(int argc, const char* argv[])
{
  CibOptionParser optionParser(argc, argv);
  auto            cibParams = optionParser.getCibParams();
  auto            cppParams = optionParser.getCppParserOptions();

  ensureDirectoriesExist(cibParams);

  CibIdMgr  cibIdMgr(cibParams);
  CibHelper helper(cibParams, cppParams, cibIdMgr);
  cibIdMgr.assignIds(helper, cibParams);

  emitLibBoilerPlateCode(cibParams);
  emitClientBoilerPlateCode(cibParams);

  std::ofstream valueClassStm((cibParams.libGlueDir / ("__zz_cib_" + cibParams.moduleName + "-value-types.h")).string(),
                              std::ios_base::app);

  const CppCompoundArray& fileAsts = helper.getProgram().getFileAsts();
  for (auto& cppAst : fileAsts)
  {
    CibConstCompoundEPtr cibCppCompound = cppAst;
    cibCppCompound->emitValueClassNames(valueClassStm, helper, cibParams);
    cibCppCompound->emitUserHeader(helper, cibParams, cibIdMgr);
    cibCppCompound->emitPredefHeader(helper, cibParams);
    cibCppCompound->emitImplHeader(helper, cibParams, cibIdMgr);
    cibCppCompound->emitImplSource(helper, cibParams, cibIdMgr);
    cibCppCompound->emitLibGlueCode(helper, cibParams, cibIdMgr);
  }
  emitGlueCodeForNamespaces(fileAsts, helper, cibParams, cibIdMgr);

  emitExceptionToErrorConverter(helper, cibParams, cibIdMgr);
  emitThrowOnError(helper, cibParams, cibIdMgr);

  emitLibraryGatewayFunction(fileAsts, cibParams, cibIdMgr);

  return 0;
}
