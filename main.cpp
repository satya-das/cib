#include "cppprogex.h"
#include "cib.h"
#include "idmgr.h"
#include "res_template.h"

#include "cppdom.h"

#include "boost-helper/bfs.h"

#include <boost/program_options.hpp>

#include <map>
#include <strstream>
#include <ostream>
#include <tuple>

//////////////////////////////////////////////////////////////////////////

typedef boost::filesystem::path::value_type chartype;
#ifndef _T
#  define _T(x)       L ## x
#endif //#ifndef _T

namespace bfs = boost::filesystem;

auto parseCmdLine(int argc, char* argv[])
{
  namespace po = boost::program_options;
  // Declare the supported options.
  po::options_description desc("Allowed options");
  desc.add_options()
    ("help,h", "produce help message")
    ("input-folder,i", po::value<std::string>(), "Input folder from where the headers and source files will be parsed.")
    ("output-folder,o", po::value<std::string>(), "Output folder for emitting files for client.")
    ("bind-folder,b", po::value<std::string>(), "Folder where binding code will be emitted for library.")
    ("module,m", po::value<std::string>(), "Name of module/library.")
    ;

  po::variables_map vm;
  po::store(po::parse_command_line(argc, argv, desc), vm);
  po::notify(vm);

  if (vm.count("help"))
  {
    std::cout << desc << "\n";
    exit(0);
  }

  if (vm.find("module") == vm.end())
  {
    std::cerr << "Error: Module parameter is a must.\n\n";
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

  bfs::path resDir = bfs::system_complete(argv[0]).parent_path() / "cibres";
  make_preferred_dir_format(inputPath);
  make_preferred_dir_format(outputPath);
  make_preferred_dir_format(binderPath);

  bfs::create_directories(binderPath);
  bfs::create_directories(outputPath);

  return std::make_tuple(inputPath, outputPath, binderPath, moduleName, resDir);
}

std::string generateCibIds(const CppProgramEx& cppProgram, const CibParams& cibParams, const bfs::path& outputPath, const bfs::path& binderPath)
{
  std::string cibIdFileName = cibParams.moduleName + "Lib_cibids.h";
  CibIdMgr idMgr(cibParams.moduleName);
  idMgr.loadIds((binderPath / cibIdFileName).string());
  idMgr.assignIds(cppProgram, cibParams);
  idMgr.saveIds((binderPath / cibIdFileName).string());
  idMgr.saveIds((outputPath / cibIdFileName).string());

  return cibIdFileName;
}

int main(int argc, char* argv[])
{
  CibParams cibParams;
  bfs::path inputPath, outputPath, binderPath, resDir;
  std::tie(inputPath, outputPath, binderPath, cibParams.moduleName, resDir) = parseCmdLine(argc, argv);
  
  // First load all files as DOM.
  CppProgramEx cppProgram(inputPath.string().c_str());
  auto cibIdFileName = generateCibIds(cppProgram, cibParams, outputPath, binderPath);
  StringToStringMap substituteInfo;
  substituteInfo["MODULE"]    = cibParams.moduleName;
  substituteInfo["CIBEXPAPI"] = "__declspec(dllexport)";
  substituteInfo["CIBIDHDR"]  = cibIdFileName;
  // Now emit declarations.
  {
    // Emit cib.h for library.
    std::strstreambuf tmpbuf;
    std::ifstream((resDir / "lib_cib.h").native(), std::ios_base::in) >> &tmpbuf;
    auto cibcode = replacePlaceholdersInTemplate(tmpbuf.str(), tmpbuf.str()+tmpbuf.pcount(), substituteInfo);
    std::ofstream cibLibIncStm((binderPath / ("cib_" + cibParams.moduleName + "Lib.h")).native(), std::ios_base::out);
    cibLibIncStm << cibcode;
  }
  {
    // Emit cib.h for client.
    std::strstreambuf tmpbuf;
    std::ifstream((resDir / "usr_cib.h").native(), std::ios_base::in) >> &tmpbuf;
    auto cibcode = replacePlaceholdersInTemplate(tmpbuf.str(), tmpbuf.str()+tmpbuf.pcount(), substituteInfo);
    std::ofstream cibUsrIncStm((outputPath / ("cib_" + cibParams.moduleName + "Lib.h")).native(), std::ios_base::out);
    cibUsrIncStm << cibcode;
  }
  // Emit cib.cpp for library.
  std::ofstream cibLibSrcStm((binderPath / ("cib_" + cibParams.moduleName + "Lib.cpp")).native(), std::ios_base::out);
  {
    // Emit boiler plate code for cib.cpp of library
    std::strstreambuf tmpbuf;
    std::ifstream((resDir / "lib_cib.cpp").native(), std::ios_base::in) >> &tmpbuf;
    auto cibcode = replacePlaceholdersInTemplate(tmpbuf.str(), tmpbuf.str()+tmpbuf.pcount(), substituteInfo);
    cibLibSrcStm << cibcode;
  }

  const CppCompoundArray& fileDOMs = cppProgram.getFileDOMs();
  for (CppCompoundArray::const_iterator domItr = fileDOMs.begin(); domItr != fileDOMs.end(); ++domItr)
  {
    CppCompound*    cppDom         = *domItr;
    CibCppCompound* cibCppCompound = (CibCppCompound*) cppProgram.CibCppObjFromCppObj(cppDom);
    if (cibCppCompound == NULL)
      continue;
    bfs::path usrIncPath     = outputPath / cppDom->name_.substr(inputPath.native().length());
    std::ofstream incStm(usrIncPath.native(), std::ios_base::out);
    cibCppCompound->emitDecl(incStm, cppProgram, cibParams);
    bfs::path usrSrcPath     = usrIncPath;
    usrSrcPath.replace_extension(usrIncPath.extension().string() + ".cpp");
    std::ofstream srcStm(usrSrcPath.native(), std::ios_base::out);
    srcStm << "#include \"" << cibIdFileName << "\"\n\n";
    cibCppCompound->emitUsrGlueCode(srcStm, cppProgram, cibParams);
    bfs::path bndSrcPath = binderPath / usrSrcPath.filename().native();
    std::ofstream bindSrcStm(bndSrcPath.native(), std::ios_base::out);
    bindSrcStm << "#include \"" << cibIdFileName << "\"\n\n";
    cibCppCompound->emitLibGlueCode(bindSrcStm, cppProgram, cibParams);
  }

  CibIndent indentation;
  cibLibSrcStm << '\n';
  for (CppCompoundArray::const_iterator domItr = fileDOMs.begin(); domItr != fileDOMs.end(); ++domItr)
  {
    CppCompound*    cppDom         = *domItr;
    CibCppCompound* cibCppCompound = (CibCppCompound*)cppProgram.CibCppObjFromCppObj(cppDom);
    cibCppCompound->emitMetaInterfaceFactoryDecl(cibLibSrcStm, cppProgram, cibParams, indentation);
  }

  cibLibSrcStm << '\n';
  cibLibSrcStm << indentation << "namespace _cib_ { namespace " << cibParams.moduleName << "Lib {\n";
  ++indentation;
  cibLibSrcStm << indentation << "void InitMetaInterfaceRepository() {\n";
  ++indentation;
  for (CppCompoundArray::const_iterator domItr = fileDOMs.begin(); domItr != fileDOMs.end(); ++domItr)
  {
    CppCompound*    cppDom         = *domItr;
    CibCppCompound* cibCppCompound = (CibCppCompound*)cppProgram.CibCppObjFromCppObj(cppDom);
    cibCppCompound->emitCodeToPopulateMetaInterfaceRepository(cibLibSrcStm, cppProgram, cibParams, indentation);
  }
  cibLibSrcStm << --indentation << "}\n";
  cibLibSrcStm << --indentation << "}}\n";

  return 0;
}
