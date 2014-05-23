#include "cppprogex.h"
#include "cppapi.h"
#include "config.h"

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

typedef boost::filesystem::path::value_type chartype;
#ifndef _T
#  define _T(x)       L ## x
#endif //#ifndef _T

/*
TODO:
   # Better parsing of enum.
   # Also parse and store function definition.
ALGO:
   Scan each DOM and mark what all functions for which definition is found.
      Make sure to mark it inline if definition is found in a header file.
   For each DOM start emitting objects from top to bottom.
      For class whose all non-static methods are inline we will emit the definition as-is except for static methods unless they too are inline.
      If its comment/preprocessor/typedef/enum/namespace-alias emit them as-is with/without altered formatting.
*/

Config gConfig;
CppProgramEx gCppProgram;

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
      ;

   po::variables_map vm;
   po::store(po::parse_command_line(argc, argv, desc), vm);
   po::notify(vm);

   if(vm.count("help")) {
      std::cout << desc << "\n";
      return 0;
   }

   bfs::path inputPath;
   bfs::path outputPath;
   bfs::path binderPath;

   if(vm.count("input-folder"))
      inputPath = vm["input-folder"].as<std::string>();
   if(vm.count("output-folder"))
      outputPath = vm["output-folder"].as<std::string>();
   if(vm.count("bind-folder"))
      binderPath = vm["bind-folder"].as<std::string>();
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
   gCppProgram.loadProgramEx(inputPath);
   // Now emit declarations.
   { // Emit cib.h for library.
      std::strstreambuf tmpbuf;
      std::ifstream((resDir / "lib_cib.h").native(), std::ios_base::in) >> &tmpbuf;
      tmpbuf.str()[tmpbuf.pcount()] = '\0';
      std::ofstream cibLibIncStm((binderPath / "cib.h").native(), std::ios_base::out);
      cibLibIncStm << tmpbuf.str();
   }
   { // Emit cib.h for client.
      std::strstreambuf tmpbuf;
      std::ifstream((resDir / "usr_cib.h").native(), std::ios_base::in) >> &tmpbuf;
      tmpbuf.str()[tmpbuf.pcount()] = '\0';
      std::ofstream cibUsrIncStm((outputPath / "cib.h").native(), std::ios_base::out);
      cibUsrIncStm << tmpbuf.str();
   }
   std::strstreambuf tmpbuf;
   std::ifstream((resDir / "lib_cib.cpp").native(), std::ios_base::in) >> &tmpbuf;
   tmpbuf.str()[tmpbuf.pcount()] = '\0';
   std::ofstream cibLibSrcStm((binderPath / "cib.cpp").native(), std::ios_base::out);
   cibLibSrcStm << tmpbuf.str();

   std::ofstream allLibCibSources((binderPath / "cib_all_sources.cpp").native(), std::ios_base::out);
   std::ofstream allUsrCibSources((outputPath / "cib_all_sources.cpp").native(), std::ios_base::out);
   const CppCompoundArray& fileDOMs = gCppProgram.getFileDOMs();
   for(CppCompoundArray::const_iterator domItr = fileDOMs.begin(); domItr != fileDOMs.end(); ++domItr)
   {
       CppCompound* cppDom = *domItr;
       CppApiCompound* cppapiCompound = (CppApiCompound*) gCppProgram.CppApiObjFromCppObj(cppDom);
	   if(cppapiCompound == NULL)
		   continue;
       bfs::path usrIncPath = outputPath / cppDom->name_.substr(inputPath.native().length());
       std::ofstream incStm(usrIncPath.native(), std::ios_base::out);
       cppapiCompound->emitDecl(incStm);
       bfs::path usrSrcPath = usrIncPath; usrSrcPath.replace_extension(".cpp");
       std::ofstream srcStm(usrSrcPath.native(), std::ios_base::out);
       cppapiCompound->emitUsrGlueCode(srcStm);
       bfs::path bndSrcPath = binderPath / (_T("cib_") + usrSrcPath.filename().native());
       std::ofstream bindSrcStm(bndSrcPath.native(), std::ios_base::out);
       cppapiCompound->emitLibGlueCode(bindSrcStm);

       // Emit #include in cib_all_sources.cpp.
       allUsrCibSources << "#include \"" << relative_path(outputPath, usrSrcPath).string() << "\"\n";
       allLibCibSources << "#include \"" << relative_path(binderPath, bndSrcPath).string() << "\"\n";
   }

   CppApiIndent indentation;
   cibLibSrcStm << '\n';
   for(CppCompoundArray::const_iterator domItr = fileDOMs.begin(); domItr != fileDOMs.end(); ++domItr)
   {
      CppCompound* cppDom = *domItr;
      CppApiCompound* cppapiCompound = (CppApiCompound*)gCppProgram.CppApiObjFromCppObj(cppDom);
      cppapiCompound->emitMetaInterfaceFactoryDecl(cibLibSrcStm, indentation);
   }

   cibLibSrcStm << '\n';
   cibLibSrcStm << indentation << "namespace _cib_ {\n";
   ++indentation;
   cibLibSrcStm << indentation << "void InitMetaInterfaceRepository() {\n";
   ++indentation;
   for(CppCompoundArray::const_iterator domItr = fileDOMs.begin(); domItr != fileDOMs.end(); ++domItr)
   {
       CppCompound* cppDom = *domItr;
       CppApiCompound* cppapiCompound = (CppApiCompound*)gCppProgram.CppApiObjFromCppObj(cppDom);
       cppapiCompound->emitCodeToPopulateMetaInterfaceRepository(cibLibSrcStm, indentation);
   }
   cibLibSrcStm << --indentation << "}\n";
   cibLibSrcStm << --indentation << "}\n";

   return 0;
}
