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

#pragma once

#include "cibparams.h"
#include "cppparseroptions.h"

#include <boost/filesystem.hpp>

#include <string>
#include <vector>

using StringVector = std::vector<std::string>;

class CibOptionParser
{
public:
  CibOptionParser(int argc, const char* argv[]);
  CppParserOptions getCppParserOptions();
  CibParams        getCibParams();

private:
  using path = boost::filesystem::path;

  std::string  moduleName;
  path         inputPath;
  path         outputPath;
  path         libGlueDir;
  path         resourcePath;
  path         cibIdFile;
  bool         noExactDelegation{false};
  bool         alwaysUseNsName{true};
  bool         noRtti{false};
  bool         handleException{false};
  bool         wxStyleHeaderDependency{false};
  StringVector valueClasses;
  StringVector interfaceClasses;
  StringVector exceptionClasses;
  StringVector noCopyClasses;
  // C++ parser options.
  StringVector knownMacros;
  StringVector knownApiDecor;
  StringVector undefinedMacros;
  StringVector definedMacros;
  StringVector ignorableMacros;
  StringVector renamedKeywords;
};

inline CppParserOptions CibOptionParser::getCppParserOptions()
{
  return {std::move(knownMacros),
          std::move(knownApiDecor),
          std::move(undefinedMacros),
          std::move(definedMacros),
          std::move(ignorableMacros),
          std::move(renamedKeywords)};
}

inline CibParams CibOptionParser::getCibParams()
{
  return {std::move(moduleName),
          std::move(inputPath),
          std::move(outputPath),
          std::move(libGlueDir),
          std::move(resourcePath),
          std::move(cibIdFile),
          noExactDelegation,
          alwaysUseNsName,
          noRtti,
          handleException || !exceptionClasses.empty(),
          wxStyleHeaderDependency,
          valueClasses,
          interfaceClasses,
          exceptionClasses,
          noCopyClasses};
}
