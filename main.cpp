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

#include "cppdom.h"

#include "boost-helper/bfs.h"

#include <boost/program_options.hpp>

#include <iostream>
#include <map>
#include <strstream>
#include <tuple>

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

  bool recurse = true;

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

  return CibParams(moduleName, inputPath, outputPath, binderPath, resDir, cibIdFile);
}

void ensureDirectoriesExist(const CibParams& cibParams)
{
  bfs::create_directories(cibParams.binderPath.string());
  bfs::create_directories(cibParams.outputPath.string());
  bfs::create_directories(cibParams.cibInternalDir().string());
}

static void emitLibraryGatewayFunction(std::ostream&           stm,
                                       const CppCompoundArray& fileDOMs,
                                       const CibParams&        cibParams,
                                       const CibIdMgr&         cibIdMgr)
{
  std::vector<const CibCppCompound*> compounds;
  for (auto cppDom : fileDOMs)
  {
    auto cibCppCompound = static_cast<const CibCppCompound*>(cppDom);
    cibCppCompound->collectPublicCompounds(compounds);
  }
  CppIndent indentation;
  for (auto compound : compounds)
  {
    stm << indentation << compound->wrappingNsNamespaceDeclarations(cibParams);
    stm << " namespace " << compound->nsName() << " { ";
    stm << "const __zz_cib_MethodTable* __zz_cib_GetMethodTable(); ";
    stm << compound->closingBracesForWrappingNsNamespaces() << "}\n";
  }
  stm << '\n';
  stm << indentation << "extern \"C\" __zz_cib_export\n"
      << "const __zz_cib_::__zz_cib_MethodTable* __zz_cib_decl __zz_cib_" << cibParams.moduleName
      << "_GetMethodTable(std::uint32_t classId)\n";
  stm << indentation << "{\n";
  stm << ++indentation << "switch(classId) {\n";
  for (auto compound : compounds)
  {
    auto cibIdData = cibIdMgr.getCibIdData(compound->longName());
    stm << indentation << "case __zz_cib_::" << compound->fullNsName() << "::__zz_cib_classid:\n";
    stm << ++indentation << "return __zz_cib_::" << compound->fullNsName() << "::__zz_cib_GetMethodTable();\n";
    --indentation;
  }
  stm << indentation << "default:\n";
  stm << ++indentation << "return nullptr;\n";
  stm << --indentation << "}\n";
  stm << --indentation << "}\n";
}

static void processResourceFile(const std::string&       filename,
                                const bfs::path&         outDir,
                                const CibParams&         cibParams,
                                const StringToStringMap& substituteInfo)
{
  {
    std::strstreambuf tmpbuf;
    std::ifstream((cibParams.resDir / filename).string(), std::ios_base::in) >> &tmpbuf;
    auto          outFilename = "__zz_cib_" + cibParams.moduleName + filename.substr(15);
    auto          cibcode = replacePlaceholdersInTemplate(tmpbuf.str(), tmpbuf.str() + tmpbuf.pcount(), substituteInfo);
    std::ofstream cibLibIncStm((outDir / outFilename).string(), std::ios_base::out);
    cibLibIncStm << cibcode;
  }
}

static void emitLibBoilerPlateCode(const CibParams& cibParams, const StringToStringMap& substituteInfo)
{
  const char* filesToProcessForBinder[] = {"__zz_cib_Module-mtable.h",
                                           "__zz_cib_Module-mtable-helper.h",
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

  const CppCompoundArray& fileDOMs = helper.getProgram().getFileDOMs();
  for (auto cppDom : fileDOMs)
  {
    auto* cibCppCompound = static_cast<const CibCppCompound*>(cppDom);
    cibCppCompound->emitUserHeader(helper, cibParams);
    cibCppCompound->emitPredefHeader(helper, cibParams);
    cibCppCompound->emitImplHeader(helper, cibParams, cibIdMgr);
    bfs::path usrSrcPath = cibParams.outputPath / cppDom->name_.substr(cibParams.inputPath.string().length());
    usrSrcPath.replace_extension(usrSrcPath.extension().string() + ".cpp");
    cibCppCompound->emitImplSource(helper, cibParams, cibIdMgr);
    bfs::path bndSrcPath = cibParams.binderPath / usrSrcPath.filename().string();
    bfs::create_directories(bndSrcPath.parent_path());
    std::ofstream bindSrcStm(bndSrcPath.string(), std::ios_base::out);
    cibCppCompound->emitLibGlueCode(bindSrcStm, helper, cibParams, cibIdMgr);
    cibCppCompound->emitMethodTableGetterDefn(bindSrcStm, helper, cibParams, cibIdMgr, false);
  }

  std::ofstream cibLibSrcStm((cibParams.binderPath / ("__zz_cib_" + cibParams.moduleName + ".cpp")).string(),
                             std::ios_base::out);
  cibLibSrcStm << "#include \"__zz_cib_" << cibParams.moduleName << "-decl.h\"\n";
  cibLibSrcStm << "#include \"__zz_cib_" << cibParams.moduleName << "-export.h\"\n";
  cibLibSrcStm << "#include \"" << cibParams.cibIdFilename() << "\"\n";
  cibLibSrcStm << "#include \"__zz_cib_" << cibParams.moduleName << "-mtable.h\"\n\n";
  emitLibraryGatewayFunction(cibLibSrcStm, fileDOMs, cibParams, cibIdMgr);

  return 0;
}
