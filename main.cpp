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

  bfs::path resDir = bfs::system_complete(argv[0]).parent_path() / "cibres";
  make_preferred_dir_format(inputPath);
  make_preferred_dir_format(outputPath);
  make_preferred_dir_format(binderPath);

  bfs::create_directories(binderPath);
  bfs::create_directories(outputPath);

  return std::make_tuple(moduleName, inputPath, outputPath, binderPath, resDir);
}

std::string generateCibIds(const CppProgramEx& cppProgram, const CibParams& cibParams)
{
  std::string cibIdFileName = cibParams.moduleName + "Lib_cibids.h";
  CibIdMgr idMgr(cibParams.moduleName);
  idMgr.loadIds((cibParams.binderPath / cibIdFileName).string());
  idMgr.assignIds(cppProgram, cibParams);
  idMgr.saveIds((cibParams.binderPath / cibIdFileName).string());
  idMgr.saveIds((cibParams.outputPath / cibIdFileName).string());

  return cibIdFileName;
}

int main(int argc, char* argv[])
{
  CibParams cibParams(parseCmdLine(argc, argv));
  
  // First load all files as DOM.
  CppProgramEx cppProgram(cibParams.inputPath.string().c_str());
  auto cibIdFileName = generateCibIds(cppProgram, cibParams);
  StringToStringMap substituteInfo;
  substituteInfo["MODULE"]    = cibParams.moduleName;
  substituteInfo["CIBEXPAPI"] = "__declspec(dllexport)";
  substituteInfo["CIBIDHDR"]  = cibIdFileName;
  // Now emit declarations.
  {
    // Emit cib.h for library.
    std::strstreambuf tmpbuf;
    std::ifstream((cibParams.resDir / "lib_cib.h").native(), std::ios_base::in) >> &tmpbuf;
    auto cibcode = replacePlaceholdersInTemplate(tmpbuf.str(), tmpbuf.str()+tmpbuf.pcount(), substituteInfo);
    std::ofstream cibLibIncStm((cibParams.binderPath / ("cib_" + cibParams.moduleName + "Lib.h")).native(), std::ios_base::out);
    cibLibIncStm << cibcode;
  }
  {
    // Emit cib.h for client.
    std::strstreambuf tmpbuf;
    std::ifstream((cibParams.resDir / "usr_cib.h").native(), std::ios_base::in) >> &tmpbuf;
    auto cibcode = replacePlaceholdersInTemplate(tmpbuf.str(), tmpbuf.str()+tmpbuf.pcount(), substituteInfo);
    std::ofstream cibUsrIncStm((cibParams.outputPath / ("cib_" + cibParams.moduleName + "Lib.h")).native(), std::ios_base::out);
    cibUsrIncStm << cibcode;
  }
  // Emit cib.cpp for library.
  std::ofstream cibLibSrcStm((cibParams.binderPath / ("cib_" + cibParams.moduleName + "Lib.cpp")).native(), std::ios_base::out);
  {
    // Emit boiler plate code for cib.cpp of library
    std::strstreambuf tmpbuf;
    std::ifstream((cibParams.resDir / "lib_cib.cpp").native(), std::ios_base::in) >> &tmpbuf;
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
    bfs::path usrIncPath     = cibParams.outputPath / cppDom->name_.substr(cibParams.inputPath.native().length());
    std::ofstream incStm(usrIncPath.native(), std::ios_base::out);
    cibCppCompound->emitDecl(incStm, cppProgram, cibParams);
    bfs::path usrSrcPath     = usrIncPath;
    usrSrcPath.replace_extension(usrIncPath.extension().string() + ".cpp");
    std::ofstream srcStm(usrSrcPath.native(), std::ios_base::out);
    srcStm << "#include \"" << cibIdFileName << "\"\n\n";
    cibCppCompound->emitUsrGlueCode(srcStm, cppProgram, cibParams);
    bfs::path bndSrcPath = cibParams.binderPath / usrSrcPath.filename().native();
    std::ofstream bindSrcStm(bndSrcPath.native(), std::ios_base::out);
    bindSrcStm << "#include \"" << cibIdFileName << "\"\n\n";
    cibCppCompound->emitLibGlueCode(bindSrcStm, cppProgram, cibParams);

  }

  CppIndent indentation;
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
