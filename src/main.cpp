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
#include "res_template.h"

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

static bfs::path getResDir(const char* progPath)
{
  auto      progDir = bfs::path(progPath).parent_path();
  bfs::path resDir  = progDir / "cibres";
  return resDir;
}

CibParams parseCmdLine(int argc, char* argv[])
{
  namespace po = boost::program_options;
  // Declare the supported options.
  po::options_description desc("Allowed options");
  // clang-format off
  desc.add_options()
    ("help,h", "produce help message")
    ("input-folder,i", po::value<std::string>()->required(), "Input folder from where the headers and source files will be parsed.")
    ("output-folder,o", po::value<std::string>()->required(), "Output folder for emitting files for client.")
    ("bind-folder,b", po::value<std::string>()->required(), "Folder where binding code will be emitted for library.")
    ("module,m", po::value<std::string>()->required(), "Name of module/library.")
    ("cib-ids-file,c", po::value<std::string>()->default_value(""), "Previously created cib-ids-file.")
    ("macro,M", po::value<std::string>(), "List of comma separated known macro names.")
    ("apidecor,A", po::value<std::string>(), "List of comma separated known api decoration names.")
    ("no-exact-delegation,d", "Whether the delegation for non pure virtual function should be exact. Default is to use exact delegation")
    ;
  // clang-format on
  po::variables_map vm;
  po::store(po::parse_command_line(argc, argv, desc), vm);

  if (vm.count("help"))
  {
    std::cout << desc << "\n";
    exit(0);
  }
  try
  {
    po::notify(vm);
  }
  catch (std::exception& e)
  {
    std::cerr << "Error: " << e.what() << "\n";
    std::cout << desc << "\n";
    exit(-1);
  }

  bfs::path   inputPath  = vm["input-folder"].as<std::string>();
  bfs::path   outputPath = vm["output-folder"].as<std::string>();
  bfs::path   binderPath = vm["bind-folder"].as<std::string>();
  std::string moduleName = vm["module"].as<std::string>();
  bfs::path   cibIdFile  = vm["cib-ids-file"].as<std::string>();
  bool        d          = vm.count("no-exact-delegation") != 0;

  if (!bfs::is_directory(inputPath) || (bfs::exists(outputPath) && !bfs::is_directory(outputPath))
      || (bfs::exists(binderPath) && !bfs::is_directory(binderPath)))
  {
    std::cerr << "Error in input.\n";
    exit(-1);
  }

  bfs::path resDir = getResDir(argv[0]);
  make_preferred_dir_format(inputPath);
  make_preferred_dir_format(outputPath);
  make_preferred_dir_format(binderPath);

  return CibParams(moduleName, inputPath, outputPath, binderPath, resDir, cibIdFile, d);
}

void ensureDirectoriesExist(const CibParams& cibParams)
{
  bfs::create_directories(cibParams.binderPath.string());
  bfs::create_directories(cibParams.outputPath.string());
  bfs::create_directories(cibParams.cibInternalDir().string());
}

static void emitLibraryGatewayFunction(std::ostream&           stm,
                                       const CppCompoundArray& fileAsts,
                                       const CibParams&        cibParams,
                                       const CibIdMgr&         cibIdMgr)
{
  CppIndent indentation;
  cibIdMgr.forEachCompound([&](const CibFullClassName&, const CibFullClassNsName& nsName, const CibIdData&) {
    stm << "namespace __zz_cib_ { " << expandNs(nsName.begin(), nsName.end());
    stm << " const __zz_cib_MethodTable* __zz_cib_GetMethodTable(); ";
    stm << --indentation << closingNs(nsName.begin(), nsName.end()) << "}\n";
  });

  stm << '\n';
  stm << indentation << "extern \"C\" __zz_cib_export\n"
      << "const __zz_cib_::__zz_cib_MethodTable* __zz_cib_decl __zz_cib_" << cibParams.moduleName
      << "_GetMethodTable(std::uint32_t classId)\n";
  stm << indentation << "{\n";
  stm << ++indentation << "switch(classId) {\n";
  cibIdMgr.forEachCompound([&](const CibFullClassName&, const CibFullClassNsName& nsName, const CibIdData&) {
    stm << indentation << "case __zz_cib_::" << nsName << "::__zz_cib_classid:\n";
    stm << ++indentation << "return __zz_cib_::" << nsName << "::__zz_cib_GetMethodTable();\n";
    --indentation;
  });
  stm << indentation << "default:\n";
  stm << ++indentation << "return nullptr;\n";
  stm << --indentation << "}\n";
  stm << --indentation << "}\n";
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
    auto bndSrcPath = cibParams.binderPath / fileName;
    auto gluSrcPath = cibParams.outputPath / fileName;

    auto* cmp = *(compounds.begin());

    std::ofstream bindSrcStm(bndSrcPath.string(), std::ios_base::out);

    CibCompound::emitCommonCibHeaders(bindSrcStm, cibParams);
    for (auto* compound : compounds)
    {
      auto* ast = root(compound);
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

static void processResourceFile(const std::string&       filename,
                                const bfs::path&         outDir,
                                const CibParams&         cibParams,
                                const StringToStringMap& substituteInfo)
{
  {
    std::stringbuf tmpbuf;
    std::ifstream((cibParams.resDir / filename).string(), std::ios_base::in) >> &tmpbuf;
    auto          buf         = tmpbuf.str();
    auto          outFilename = "__zz_cib_" + cibParams.moduleName + filename.substr(15);
    auto          cibcode     = replacePlaceholdersInTemplate(buf.begin(), buf.end(), substituteInfo);
    std::ofstream cibLibIncStm((outDir / outFilename).string(), std::ios_base::out);
    cibLibIncStm << cibcode;
  }
}

static void emitLibBoilerPlateCode(const CibParams& cibParams, const StringToStringMap& substituteInfo)
{
  const char* filesToProcessForBinder[] = {"__zz_cib_Module-mtable.h",
                                           "__zz_cib_Module-mtable-helper.h",
                                           "__zz_cib_Module-delegate-helper.h",
                                           "__zz_cib_Module-decl.h",
                                           "__zz_cib_Module-export.h",
                                           "__zz_cib_Module-proxy.h",
                                           "__zz_cib_Module-classId-repo.cpp",
                                           nullptr};
  for (int i = 0; filesToProcessForBinder[i] != nullptr; ++i)
  {
    processResourceFile(filesToProcessForBinder[i], cibParams.binderPath, cibParams, substituteInfo);
  }
}

static void emitClientBoilerPlateCode(const CibParams& cibParams, const StringToStringMap& substituteInfo)
{
  const char* filesToProcessForClient[] = {"__zz_cib_Module-def.h",
                                           "__zz_cib_Module-mtable.h",
                                           "__zz_cib_Module-mtable-helper.h",
                                           "__zz_cib_Module-handle.h",
                                           "__zz_cib_Module-handle-helper.h",
                                           "__zz_cib_Module-decl.h",
                                           "__zz_cib_Module-import.h",
                                           "__zz_cib_Module-class-internal-def.h",
                                           nullptr};
  for (int i = 0; filesToProcessForClient[i] != nullptr; ++i)
  {
    processResourceFile(
      filesToProcessForClient[i], cibParams.outputPath / "__zz_cib_internal", cibParams, substituteInfo);
  }
}

int main(int argc, char* argv[])
{
  const CibParams& cibParams(parseCmdLine(argc, argv));
  ensureDirectoriesExist(cibParams);

  CibIdMgr  cibIdMgr(cibParams);
  CibHelper helper(cibParams.inputPath.string().c_str(), cibIdMgr);
  cibIdMgr.assignIds(helper, cibParams);
  StringToStringMap substituteInfo;
  substituteInfo["Module"] = cibParams.moduleName;

  emitLibBoilerPlateCode(cibParams, substituteInfo);
  emitClientBoilerPlateCode(cibParams, substituteInfo);

  const CppCompoundArray& fileAsts = helper.getProgram().getFileAsts();
  for (auto& cppAst : fileAsts)
  {
    CibConstCompoundEPtr cibCppCompound = cppAst;
    cibCppCompound->emitUserHeader(helper, cibParams);
    cibCppCompound->emitPredefHeader(helper, cibParams);
    cibCppCompound->emitImplHeader(helper, cibParams, cibIdMgr);
    bfs::path usrSrcPath = cibParams.outputPath / cppAst->name().substr(cibParams.inputPath.string().length());
    usrSrcPath.replace_extension(usrSrcPath.extension().string() + ".cpp");
    cibCppCompound->emitImplSource(helper, cibParams, cibIdMgr);
    bfs::path bndSrcPath = cibParams.binderPath / usrSrcPath.filename().string();
    bfs::create_directories(bndSrcPath.parent_path());
    std::ofstream bindSrcStm(bndSrcPath.string(), std::ios_base::out);
    cibCppCompound->emitLibGlueCode(bindSrcStm, helper, cibParams, cibIdMgr);
  }
  emitGlueCodeForNamespaces(fileAsts, helper, cibParams, cibIdMgr);

  std::ofstream cibLibSrcStm((cibParams.binderPath / ("__zz_cib_" + cibParams.moduleName + "-gateway.cpp")).string(),
                             std::ios_base::out);
  cibLibSrcStm << "#include \"__zz_cib_" << cibParams.moduleName << "-decl.h\"\n";
  cibLibSrcStm << "#include \"__zz_cib_" << cibParams.moduleName << "-export.h\"\n";
  cibLibSrcStm << "#include \"" << cibParams.cibIdFilename() << "\"\n";
  cibLibSrcStm << "#include \"__zz_cib_" << cibParams.moduleName << "-mtable.h\"\n\n";
  emitLibraryGatewayFunction(cibLibSrcStm, fileAsts, cibParams, cibIdMgr);

  return 0;
}
