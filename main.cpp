#include "cib.h"
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
    ("apidecor,A", po::value<std::string>(), "List of comma separated known api decoration names.");
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

std::string generateCibIds(const CibHelper& helper, const CibParams& cibParams, CibIdMgr& cibIdMgr)
{
  std::string cibIdFileName = cibParams.cibIdFilename();
  if (!cibParams.inputCibIdFile.empty() && bfs::exists(cibParams.inputCibIdFile))
    cibIdMgr.loadIds(cibParams.inputCibIdFile.string(), cibParams);
  cibIdMgr.assignIds(helper, cibParams);
  cibIdMgr.saveIds((cibParams.binderPath / cibIdFileName).string(), cibParams);
  cibIdMgr.saveIds((cibParams.outputPath / bfs::path(cibParams.cibInternalDirName) / cibIdFileName).string(),
                   cibParams);

  return cibIdFileName;
}

void ensureDirectoriesExist(const CibParams& cibParams)
{
  bfs::create_directories(cibParams.binderPath.string());
  bfs::create_directories(cibParams.outputPath.string());
  bfs::create_directories(cibParams.cibInternalDir().string());
}

static void emitMethodTableGetter(std::ostream&           stm,
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
    stm << indentation << compound->wrappingNamespaceDeclarations(cibParams);
    stm << " namespace " << compound->name() << " { ";
    stm << "__zz_cib_MethodTable __zz_cib_GetMethodTable(); ";
    stm << compound->closingBracesForWrappingNamespaces() << "}\n";
  }
  stm << '\n';
  stm << indentation << "extern \"C\" __zz_cib_export ";
  stm << "__zz_cib_::__zz_cib_MethodTable __zz_cib_" << cibParams.moduleName
      << "_GetMethodTable(std::uint32_t classId)\n";
  stm << indentation << "{\n";
  stm << ++indentation << "switch(classId) {\n";
  auto classIdOwnerSpace = cibParams.classIdOwnerSpace();
  for (auto compound : compounds)
  {
    auto cibIdData = cibIdMgr.getCibIdData(compound->longName());
    stm << indentation << "case " << classIdOwnerSpace << cibIdData->getIdName() << ":\n";
    stm << ++indentation << "return __zz_cib_" << compound->longName() << "::__zz_cib_GetMethodTable();\n";
    --indentation;
  }
  stm << indentation << "default:\n";
  stm << ++indentation << "return nullptr;\n";
  stm << --indentation << "}\n";
  stm << --indentation << "}\n";
}

static void emitLibBoilerPlateCode(const CibParams& cibParams, const StringToStringMap& substituteInfo)
{
  {
    std::strstreambuf tmpbuf;
    std::ifstream((cibParams.resDir / "__zz_cib_$Module$.h").string(), std::ios_base::in) >> &tmpbuf;
    auto          cibcode = replacePlaceholdersInTemplate(tmpbuf.str(), tmpbuf.str() + tmpbuf.pcount(), substituteInfo);
    std::ofstream cibLibIncStm((cibParams.binderPath / ("__zz_cib_" + cibParams.moduleName + ".h")).string(),
                               std::ios_base::out);
    cibLibIncStm << cibcode;
  }
  {
    std::string   mtableFileName = "__zz_cib_" + cibParams.moduleName + "-mtable.h";
    std::ofstream mtableStm((cibParams.binderPath / mtableFileName).string(), std::ios_base::out);
    // Emit boiler plate code for cib.cpp of library
    std::strstreambuf tmpbuf;
    std::ifstream((cibParams.resDir / "__zz_cib_$Module$-mtable.h").string(), std::ios_base::in) >> &tmpbuf;
    auto mtableCode = replacePlaceholdersInTemplate(tmpbuf.str(), tmpbuf.str() + tmpbuf.pcount(), substituteInfo);
    mtableStm << mtableCode;
  }
  {
    std::string declFileName = "__zz_cib_" + cibParams.moduleName + "-decl.h";
    bfs::copy_file(cibParams.resDir / "__zz_cib_$Module$-decl.h",
                   cibParams.binderPath / declFileName,
                   bfs::copy_option::overwrite_if_exists);
    std::string exportFileName = "__zz_cib_" + cibParams.moduleName + "-export.h";
    bfs::copy_file(cibParams.resDir / "__zz_cib_$Module$-export.h",
                   cibParams.binderPath / exportFileName,
                   bfs::copy_option::overwrite_if_exists);
    std::string classIdRepoFileName = "__zz_cib_" + cibParams.moduleName + "-classId-repo.cpp";
    bfs::copy_file(cibParams.resDir / "__zz_cib_$Module$-classId-repo.cpp",
                   cibParams.binderPath / classIdRepoFileName,
                   bfs::copy_option::overwrite_if_exists);
  }
}

static void emitClientBoilerPlateCode(const CibParams& cibParams, const StringToStringMap& substituteInfo)
{
  {
    std::ofstream cibdefStm(cibParams.cibdefFilePath().string(), std::ios_base::out);
    // Emit boiler plate code for cib.cpp of library
    std::strstreambuf tmpbuf;
    std::ifstream((cibParams.resDir / "__zz_cib_$Module$-def.h").string(), std::ios_base::in) >> &tmpbuf;
    auto cibcode = replacePlaceholdersInTemplate(tmpbuf.str(), tmpbuf.str() + tmpbuf.pcount(), substituteInfo);
    cibdefStm << cibcode;
  }
  {
    std::ofstream mtableStm(cibParams.mtableHelperFilePath().string(), std::ios_base::out);
    // Emit boiler plate code for cib.cpp of library
    std::strstreambuf tmpbuf;
    std::ifstream((cibParams.resDir / "__zz_cib_$Module$-mtable-helper.h").string(), std::ios_base::in) >> &tmpbuf;
    auto mtableCode = replacePlaceholdersInTemplate(tmpbuf.str(), tmpbuf.str() + tmpbuf.pcount(), substituteInfo);
    mtableStm << mtableCode;
  }
  {
    std::string   mtableFileName = "__zz_cib_" + cibParams.moduleName + "-mtable.h";
    std::ofstream helperStm((cibParams.cibInternalDir() / mtableFileName).string(), std::ios_base::out);
    // Emit boiler plate code for cib.cpp of library
    std::strstreambuf tmpbuf;
    std::ifstream((cibParams.resDir / "__zz_cib_$Module$-mtable.h").string(), std::ios_base::in) >> &tmpbuf;
    auto helperCode = replacePlaceholdersInTemplate(tmpbuf.str(), tmpbuf.str() + tmpbuf.pcount(), substituteInfo);
    helperStm << helperCode;
  }
  {
    std::string filename = "__zz_cib_" + cibParams.moduleName + "-decl.h";
    bfs::copy_file(cibParams.resDir / "__zz_cib_$Module$-decl.h",
                   cibParams.cibInternalDir() / filename,
                   bfs::copy_option::overwrite_if_exists);
  }
  {
    std::string filename = "__zz_cib_" + cibParams.moduleName + "-import.h";
    bfs::copy_file(cibParams.resDir / "__zz_cib_$Module$-import.h",
                   cibParams.cibInternalDir() / filename,
                   bfs::copy_option::overwrite_if_exists);
  }
  {
    std::string filename = "__zz_cib_" + cibParams.moduleName + "-class-internal-def.h";
    bfs::copy_file(cibParams.resDir / "__zz_cib_$Module$-class-internal-def.h",
                   cibParams.cibInternalDir() / filename,
                   bfs::copy_option::overwrite_if_exists);
  }
  {
    std::string filename = "__zz_cib_" + cibParams.moduleName + "-handle-helper.h";
    bfs::copy_file(cibParams.resDir / "__zz_cib_$Module$-handle-helper.h",
                   cibParams.cibInternalDir() / filename,
                   bfs::copy_option::overwrite_if_exists);
  }
}

int main(int argc, char* argv[])
{
  const CibParams& cibParams(parseCmdLine(argc, argv));
  ensureDirectoriesExist(cibParams);

  // First load all files as DOM.
  CibHelper         helper(cibParams.inputPath.string().c_str());
  CibIdMgr          cibIdMgr;
  auto              cibIdFileName = generateCibIds(helper, cibParams, cibIdMgr);
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
    bfs::path     bndSrcPath = cibParams.binderPath / usrSrcPath.filename().string();
    std::ofstream bindSrcStm(bndSrcPath.string(), std::ios_base::out);
    bindSrcStm << "#include \"" << cibIdFileName << "\"\n";
    cibCppCompound->emitLibGlueCode(bindSrcStm, helper, cibParams, cibIdMgr);
    cibCppCompound->emitMethodTableGetterDefn(bindSrcStm, helper, cibParams, cibIdMgr, false);
  }

  std::ofstream cibLibSrcStm((cibParams.binderPath / ("__zz_cib_" + cibParams.moduleName + ".cpp")).string(),
                             std::ios_base::out);
  cibLibSrcStm << "#include \"__zz_cib_" << cibParams.moduleName << ".h\"\n";
  cibLibSrcStm << "#include \"" << cibIdFileName << "\"\n\n";
  emitMethodTableGetter(cibLibSrcStm, fileDOMs, cibParams, cibIdMgr);

  return 0;
}
