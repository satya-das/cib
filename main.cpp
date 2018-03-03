#include "cppprogex.h"
#include "cibcompound.h"
#include "cib.h"
#include "cibidmgr.h"
#include "res_template.h"

#include "cppdom.h"

#include "boost-helper/bfs.h"

#include <boost/program_options.hpp>

#include <map>
#include <strstream>
#include <iostream>
#include <tuple>

//////////////////////////////////////////////////////////////////////////

typedef boost::filesystem::path::value_type chartype;
#ifndef _T
#  define _T(x)       L ## x
#endif //#ifndef _T

namespace bfs = boost::filesystem;

static bfs::path getResDir(const char* progPath)
{
  auto progDir = bfs::path(progPath).parent_path();
  bfs::path resDir = progDir / "cibres";
  return resDir;
}

auto parseCmdLine(int argc, char* argv[])
{
  namespace po = boost::program_options;
  // Declare the supported options.
  po::options_description desc("Allowed options");
  desc.add_options()
    ("help,h", "produce help message")
    ("input-folder,i", po::value<std::string>()->required(), "Input folder from where the headers and source files will be parsed.")
    ("output-folder,o", po::value<std::string>()->required(), "Output folder for emitting files for client.")
    ("bind-folder,b", po::value<std::string>()->required(), "Folder where binding code will be emitted for library.")
    ("module,m", po::value<std::string>()->required(), "Name of module/library.")
    ;

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
  catch(std::exception& e)
  {
    std::cerr << "Error: " << e.what() << "\n";
    std::cout << desc << "\n";
    exit(-1);
  }

  bfs::path inputPath   = vm["input-folder"].as<std::string>();
  bfs::path outputPath  = vm["output-folder"].as<std::string>();
  bfs::path binderPath  = vm["bind-folder"].as<std::string>();
  std::string moduleName= vm["module"].as<std::string>();

  bool recurse = true;

  if (!bfs::is_directory(inputPath) || (bfs::exists(outputPath) && !bfs::is_directory(outputPath)) || (bfs::exists(binderPath) && !bfs::is_directory(binderPath)))
  {
    std::cerr << "Error in input.\n";
    exit(-1);
  }

  bfs::path resDir = getResDir(argv[0]);
  make_preferred_dir_format(inputPath);
  make_preferred_dir_format(outputPath);
  make_preferred_dir_format(binderPath);

  return std::make_tuple(moduleName, inputPath, outputPath, binderPath, resDir);
}

std::string generateCibIds(const CppProgramEx& cppProgram, const CibParams& cibParams, CibIdMgr& cibIdMgr)
{
  std::string cibIdFileName = cibParams.cibIdFilename();
  cibIdMgr.loadIds((cibParams.binderPath / cibIdFileName).string(), cibParams);
  cibIdMgr.assignIds(cppProgram, cibParams);
  cibIdMgr.saveIds((cibParams.binderPath / cibIdFileName).string(), cibParams);
  cibIdMgr.saveIds((cibParams.outputPath / bfs::path(cibParams.cibInternalDirName) / cibIdFileName).string(), cibParams);

  return cibIdFileName;
}

void ensureDirectoriesExist(const CibParams& cibParams)
{
  bfs::create_directories(cibParams.binderPath.string());
  bfs::create_directories(cibParams.outputPath.string());
  bfs::create_directories(cibParams.cibInternalDir().string());
}

static void emitMethodTableGetter(std::ostream& stm, const CppCompoundArray& fileDOMs, const CibParams& cibParams, const CibIdMgr& cibIdMgr)
{
  CppIndent indentation;
  std::vector<const CibCppCompound*> compounds;
  for (auto cppDom : fileDOMs)
  {
    auto cibCppCompound = static_cast<const CibCppCompound*>(cppDom);
    cibCppCompound->collectPublicCompounds(compounds);
  }
  for (auto compound : compounds)
  {
    stm << indentation << compound->wrappingNamespaceDeclarations(cibParams);
    stm << " namespace " << compound->name() << " { ";
    stm << "MethodTable GetMethodTable(); ";
    stm << compound->closingBracesForWrappingNamespaces() << "}\n";
  }
  stm << '\n';
  stm << indentation << "extern \"C\" __zz_cib_export ";
  stm << "__zz_cib_::MethodTable __zz_cib_" << cibParams.moduleName << "Lib_GetMethodTable(std::uint32_t classId)\n";
  stm << indentation << "{\n";
  stm << ++indentation << "switch(classId) {\n";
  auto classIdOwnerSpace = cibParams.classIdOwnerSpace();
  for (auto compound : compounds)
  {
    auto cibIdData = cibIdMgr.getCibIdData(compound->longName());
    stm << indentation << "case " << classIdOwnerSpace << cibIdData->getIdName() << ":\n";
    stm << ++indentation << "return __zz_cib_" << compound->longName() << "::GetMethodTable();\n";
    --indentation;
  }
  stm << indentation << "default:\n";
  stm << ++indentation << "return nullptr;\n";
  stm << --indentation << "}\n";
  stm << --indentation << "}\n";
}

static void emitGlobalHelpers(std::ostream& stm, const CppCompoundArray& fileDOMs, const CibParams& cibParams, const CibIdMgr& cibIdMgr)
{
  stm << "#include <typeinfo>\n";
  stm << "#include <typeindex>\n";
  stm << "#include <cstdint>\n";
  stm << "#include <unordered_map>\n\n";

  stm << "std::unordered_map<std::type_index, std::uint32_t> __zz_cib_gClassIdRepo;\n";
  emitMethodTableGetter(stm, fileDOMs, cibParams, cibIdMgr);
}

int main(int argc, char* argv[])
{
  CibParams cibParams(parseCmdLine(argc, argv));
  ensureDirectoriesExist(cibParams);

  // First load all files as DOM.
  CppProgramEx cppProgram(cibParams.inputPath.string().c_str());
  CibIdMgr cibIdMgr;
  auto cibIdFileName = generateCibIds(cppProgram, cibParams, cibIdMgr);
  StringToStringMap substituteInfo;
  substituteInfo["MODULE"]    = cibParams.moduleName;
  substituteInfo["CIBEXPAPI"] = "__declspec(dllexport)";
  substituteInfo["CIBIDHDR"]  = cibIdFileName;
  // Now emit declarations.
  {
    // Emit cib.h for library.
    std::strstreambuf tmpbuf;
    std::ifstream((cibParams.resDir / "lib_cib.h").string(), std::ios_base::in) >> &tmpbuf;
    auto cibcode = replacePlaceholdersInTemplate(tmpbuf.str(), tmpbuf.str()+tmpbuf.pcount(), substituteInfo);
    std::ofstream cibLibIncStm((cibParams.binderPath / ("cib_" + cibParams.moduleName + "Lib.h")).string(), std::ios_base::out);
    cibLibIncStm << cibcode;
  }

  std::ofstream cibdefStm(cibParams.cibdefFilePath().string(), std::ios_base::out);
  {
    // Emit boiler plate code for cib.cpp of library
    std::strstreambuf tmpbuf;
    std::ifstream((cibParams.resDir / "cibdef.h").string(), std::ios_base::in) >> &tmpbuf;
    auto cibcode = replacePlaceholdersInTemplate(tmpbuf.str(), tmpbuf.str() + tmpbuf.pcount(), substituteInfo);
    cibdefStm << cibcode;
  }
  const CppCompoundArray& fileDOMs = cppProgram.getProgram().getFileDOMs();
  for (auto cppDom : fileDOMs)
  {
    CibCppCompound* cibCppCompound = static_cast<CibCppCompound*>(cppDom);
    cibCppCompound->emitUserHeader(cppProgram, cibParams);
    cibCppCompound->emitImpl1Header(cppProgram, cibParams);
    cibCppCompound->emitImpl2Header(cppProgram, cibParams, cibIdMgr);
    bfs::path usrSrcPath = cibParams.outputPath / cppDom->name_.substr(cibParams.inputPath.string().length());
    usrSrcPath.replace_extension(usrSrcPath.extension().string() + ".cpp");
    cibCppCompound->emitImplSource(cppProgram, cibParams, cibIdMgr);
    bfs::path bndSrcPath = cibParams.binderPath / usrSrcPath.filename().string();
    std::ofstream bindSrcStm(bndSrcPath.string(), std::ios_base::out);
    bindSrcStm << "#include \"" << cibIdFileName << "\"\n\n";
    cibCppCompound->emitLibGlueCode(bindSrcStm, cppProgram, cibParams, cibIdMgr);
    cibCppCompound->emitMethodTableGetterDefn(bindSrcStm, cppProgram, cibParams, cibIdMgr, false);
  }

  std::ofstream cibLibSrcStm((cibParams.binderPath / ("cib_" + cibParams.moduleName + "Lib.cpp")).string(), std::ios_base::out);
  cibLibSrcStm << "#include \"cib_" << cibParams.moduleName << "Lib.h\"\n\n";
  cibLibSrcStm << "#include \"" << cibIdFileName << "\"\n";
  emitGlobalHelpers(cibLibSrcStm, fileDOMs, cibParams, cibIdMgr);

  return 0;
}
