#ifndef __CPPAPI_CONFIG_H__
#define __CPPAPI_CONFIG_H__

#include <string>
#include <list>

//////////////////////////////////////////////////////////////////////////

typedef std::list<std::string> stringlist;

struct Config
{
   std::string    inputPath;
   std::string    outputPath;
   bool           recurse; // true when input directory should be recursively processed.
   stringlist     excludePaths;
   stringlist     extList; // List of file extensions that should be processed.
   stringlist     excExtList; // List of file extensions that should not be processed.
   std::string    libGlueSrcPath; // Path for library side glue code.
   std::string    usrGlueSrcPath; // Path for client side glue code.
};

#endif //__CPPAPI_CONFIG_H__
