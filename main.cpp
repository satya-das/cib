#include "cppprogex.h"
#include "cib.h"
#include "idmgr.h"

#include "cppdom.h"

#include <boost/program_options.hpp>

#include <map>
#include <strstream>
#include <ostream>

//////////////////////////////////////////////////////////////////////////

template <typename stringType>
inline size_t num_of_same_strating_chars(const stringType& s1, const stringType& s2) {
   if(s1.length() > s2.length()) return num_of_same_strating_chars(s2, s1);
   if(s1.empty()) return 0;
   stringType::size_type i = 0;
   for(; i < s1.length(); ++i)
      if(s1[i] != s2[i]) break;
   return i;
}
/**
 * Assumes both paths uses preferred slashes.
 * \warning If the relative path cannot be computed then it returns empty path.
 */
inline boost::filesystem::path relative_path(const boost::filesystem::path& from, const boost::filesystem::path& to) {
   if(from.is_relative() && !to.is_relative()) return relative_path(boost::filesystem::absolute(from), to);
   if(to.is_relative() && !from.is_relative()) return relative_path(from, boost::filesystem::absolute(to));
   if(boost::filesystem::is_regular_file(from)) return relative_path(from.parent_path(), to);
   typedef boost::filesystem::path::string_type bfs_string;
   bfs_string::size_type n = num_of_same_strating_chars(from.native(), to.native());
   if(n == 0) return boost::filesystem::path();
   bfs_string f = from.native().substr(n);
   bfs_string::size_type nUp = std::count(f.begin(), f.end(), from.preferred_separator);
   boost::filesystem::path relPath;
   for(bfs_string::size_type i = 0; i < nUp; ++i) {
      relPath /= "::";
   }
   relPath /= to.native().substr(n);
   return relPath;
}

/**
 * Makes sure \a path uses preferred slash and it ends with slash
 */
inline void make_preferred_dir_format(boost::filesystem::path& path) {
   path.make_preferred();
   if(path.native().back() != path.preferred_separator)
      path = path.native() + path.preferred_separator;
}

//////////////////////////////////////////////////////////////////////////

typedef std::map<std::string, std::string> StringToStringMap;

template<typename _FwdIterType>
void replacePlaceholdersInTemplate(_FwdIterType beg, _FwdIterType end, const StringToStringMap& substitionInfo, std::string& outstr)
{
	_FwdIterType i = beg;
	for(; i != end; ++i)
	{
		_FwdIterType s = std::find(i, end, '$');
		if(s == end) break;
		outstr.append(i, s);
		++s;
		_FwdIterType e = std::find(s, end, '$');
		i = e;
		if(e == end) break;
		std::string placeholderToken(s, e);
		StringToStringMap::const_iterator itr = substitionInfo.find(placeholderToken);
		if(itr == substitionInfo.end())
			continue;
		outstr.append(itr->second.begin(), itr->second.end());
	}
	outstr.append(i, end);
}

typedef boost::filesystem::path::value_type chartype;
#ifndef _T
#  define _T(x)       L ## x
#endif //#ifndef _T

namespace bfs = boost::filesystem;

int main(int argc, char* argv[])
{
   namespace po = boost::program_options;
   // Declare the supported options.
   po::options_description desc("Allowed options");
   desc.add_options()
      ("help,h",           "produce help message")
      ("input-folder,i",   po::value<std::string>(), "Input folder from where the headers and source files will be parsed.")
      ("output-folder,o",  po::value<std::string>(), "Output folder for emitting files for client.")
      ("bind-folder,b",    po::value<std::string>(), "Folder where binding code will be emitted for library.")
	  ("module,m",         po::value<std::string>(), "Name of module/library.")
      ;

   po::variables_map vm;
   po::store(po::parse_command_line(argc, argv, desc), vm);
   po::notify(vm);

   if(vm.count("help")) {
      std::cout << desc << "\n";
      return 0;
   }

   if(vm.find("module") == vm.end())
   {
	   std::cerr << "Error: Module parameter is a must.\n\n";
	   std::cout << desc << "\n";
	   return -1;
   }
   bfs::path inputPath;
   bfs::path outputPath;
   bfs::path binderPath;

   CibParams cibParams;
   if(vm.count("input-folder"))
      inputPath = vm["input-folder"].as<std::string>();
   if(vm.count("output-folder"))
      outputPath = vm["output-folder"].as<std::string>();
   if(vm.count("bind-folder"))
      binderPath = vm["bind-folder"].as<std::string>();
   if(vm.count("module") == 1)
	   cibParams.moduleName = vm["module"].as<std::string>();

   bool recurse    = true;

   if(!bfs::is_directory(inputPath) || (bfs::exists(outputPath) && !bfs::is_directory(outputPath)) || (bfs::exists(binderPath) && !bfs::is_directory(binderPath)))
   {
      std::cerr << "Error in input.\n";
      return -1;
   }

   bfs::path resDir = bfs::system_complete(argv[0]).parent_path() / "cibres";
   make_preferred_dir_format(inputPath);
   make_preferred_dir_format(outputPath);
   make_preferred_dir_format(binderPath);

   bfs::create_directories(binderPath);
   bfs::create_directories(outputPath);
   // First load all files as DOM.
   CppProgramEx cppProgram(inputPath.string().c_str());
   std::string cibIdFileName = cibParams.moduleName + "Lib_cibids.h";
   CibIdMgr idMgr(cibParams.moduleName);
   idMgr.loadIds((binderPath / cibIdFileName).string());
   idMgr.assignIds(cppProgram, cibParams);
   idMgr.saveIds((binderPath / cibIdFileName).string());
   idMgr.saveIds((outputPath / cibIdFileName).string());
   StringToStringMap substituteInfo;
   substituteInfo["MODULE"]		= cibParams.moduleName;
   substituteInfo["CIBEXPAPI"]	= "__declspec(dllexport)";
   substituteInfo["CIBIDHDR"]	= cibIdFileName;
   // Now emit declarations.
   { // Emit cib.h for library.
      std::strstreambuf tmpbuf;
      std::ifstream((resDir / "lib_cib.h").native(), std::ios_base::in) >> &tmpbuf;
	  std::string cibcode;
	  replacePlaceholdersInTemplate(tmpbuf.str(), tmpbuf.str()+tmpbuf.pcount(), substituteInfo, cibcode);
      std::ofstream cibLibIncStm((binderPath / ("cib_" + cibParams.moduleName + "Lib.h")).native(), std::ios_base::out);
      cibLibIncStm << cibcode;
   }
   { // Emit cib.h for client.
      std::strstreambuf tmpbuf;
      std::ifstream((resDir / "usr_cib.h").native(), std::ios_base::in) >> &tmpbuf;
	  std::string cibcode;
	  replacePlaceholdersInTemplate(tmpbuf.str(), tmpbuf.str()+tmpbuf.pcount(), substituteInfo, cibcode);
      std::ofstream cibUsrIncStm((outputPath / ("cib_" + cibParams.moduleName + "Lib.h")).native(), std::ios_base::out);
      cibUsrIncStm << cibcode;
   }
   // Emit cib.cpp for library.
   std::ofstream cibLibSrcStm((binderPath / ("cib_" + cibParams.moduleName + "Lib.cpp")).native(), std::ios_base::out);
   { // Emit boiler plate code for cib.cpp of library
	   std::strstreambuf tmpbuf;
	   std::ifstream((resDir / "lib_cib.cpp").native(), std::ios_base::in) >> &tmpbuf;
	   std::string cibcode;
	   replacePlaceholdersInTemplate(tmpbuf.str(), tmpbuf.str()+tmpbuf.pcount(), substituteInfo, cibcode);
	   cibLibSrcStm << cibcode;
   }

   std::ofstream allLibCibSources((binderPath / "cib_all_sources.cpp").native(), std::ios_base::out);
   std::ofstream allUsrCibSources((outputPath / "cib_all_sources.cpp").native(), std::ios_base::out);
   const CppCompoundArray& fileDOMs = cppProgram.getFileDOMs();
   for(CppCompoundArray::const_iterator domItr = fileDOMs.begin(); domItr != fileDOMs.end(); ++domItr)
   {
       CppCompound* cppDom = *domItr;
       CibCppCompound* cibCppCompound = (CibCppCompound*) cppProgram.CibCppObjFromCppObj(cppDom);
	   if(cibCppCompound == NULL)
		   continue;
       bfs::path usrIncPath = outputPath / cppDom->name_.substr(inputPath.native().length());
       std::ofstream incStm(usrIncPath.native(), std::ios_base::out);
       cibCppCompound->emitDecl(incStm, cppProgram, cibParams);
       bfs::path usrSrcPath = usrIncPath; usrSrcPath.replace_extension(".cpp");
       std::ofstream srcStm(usrSrcPath.native(), std::ios_base::out);
	   srcStm << "#include \"" << cibIdFileName << "\"\n\n";
       cibCppCompound->emitUsrGlueCode(srcStm, cppProgram, cibParams);
       bfs::path bndSrcPath = binderPath / (_T("cib_") + usrSrcPath.filename().native());
       std::ofstream bindSrcStm(bndSrcPath.native(), std::ios_base::out);
	   bindSrcStm << "#include \"" << cibIdFileName << "\"\n\n";
       cibCppCompound->emitLibGlueCode(bindSrcStm, cppProgram, cibParams);

       // Emit #include in cib_all_sources.cpp.
       allUsrCibSources << "#include \"" << relative_path(outputPath, usrSrcPath).string() << "\"\n";
       allLibCibSources << "#include \"" << relative_path(binderPath, bndSrcPath).string() << "\"\n";
   }

   CibIndent indentation;
   cibLibSrcStm << '\n';
   for(CppCompoundArray::const_iterator domItr = fileDOMs.begin(); domItr != fileDOMs.end(); ++domItr)
   {
      CppCompound* cppDom = *domItr;
      CibCppCompound* cibCppCompound = (CibCppCompound*)cppProgram.CibCppObjFromCppObj(cppDom);
      cibCppCompound->emitMetaInterfaceFactoryDecl(cibLibSrcStm, cppProgram, cibParams, indentation);
   }

   cibLibSrcStm << '\n';
   cibLibSrcStm << indentation << "namespace _cib_ { namespace " << cibParams.moduleName << "Lib {\n";
   ++indentation;
   cibLibSrcStm << indentation << "void InitMetaInterfaceRepository() {\n";
   ++indentation;
   for(CppCompoundArray::const_iterator domItr = fileDOMs.begin(); domItr != fileDOMs.end(); ++domItr)
   {
       CppCompound* cppDom = *domItr;
       CibCppCompound* cibCppCompound = (CibCppCompound*)cppProgram.CibCppObjFromCppObj(cppDom);
       cibCppCompound->emitCodeToPopulateMetaInterfaceRepository(cibLibSrcStm, cppProgram, cibParams, indentation);
   }
   cibLibSrcStm << --indentation << "}\n";
   cibLibSrcStm << --indentation << "}}\n";

   return 0;
}
