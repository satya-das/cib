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

#ifndef __CIB_PARAMS_H__
#define __CIB_PARAMS_H__

#include <boost/filesystem.hpp>

#include <string>
#include <tuple>
#include <vector>

#define CIBPREFIX "__zz_cib_"

//////////////////////////////////////////////////////////////////////////

using StringVector = std::vector<std::string>;

/**
 * Contains values of CIB Parameters.
 *
 * Some values are hardcoded and others are configurable
 * by means of program options.
 */
struct CibParams
{
public:
  using path = boost::filesystem::path;

  std::string  cibInternalDirName;
  std::string  stlHelperDirName;
  std::string  copyCtorCAPIPrefix;
  std::string  ctorCAPIPrefix;
  std::string  dtorCAPIPrefix;
  std::string  castToBasePrefix;
  std::string  castFromBasePrefix;
  std::string  moduleName;
  path         inputPath;
  path         outputPath;
  path         libGlueDir;
  path         resDir;
  path         stlInterfacePath;
  path         stlHelpersPath;
  path         inputCibIdFile;
  bool         noExactDelegation;
  bool         alwaysUseNsName;
  bool         noRtti;
  bool         handleException;
  bool         wxStyleHeaderDependency;
  StringVector layoutSharingClasses;
  StringVector interfaceClasses;
  StringVector exceptionClasses;
  StringVector noCopyClasses;

public:
  CibParams(std::string  m,
            path         i,
            path         o,
            path         b,
            path         r,
            path         c,
            bool         d,
            bool         u,
            bool         t,
            bool         e,
            bool         w,
            StringVector n,
            StringVector F,
            StringVector E,
            StringVector C)
    : cibInternalDirName("__zz_cib_internal")
    , stlHelperDirName("__zz_cib_stl-helpers")
    , copyCtorCAPIPrefix("__zz_cib_Copy")
    , ctorCAPIPrefix("__zz_cib_New")
    , dtorCAPIPrefix("__zz_cib_Delete")
    , castToBasePrefix("__zz_cib_CastTo")
    , castFromBasePrefix("__zz_cib_CastFrom")
    , moduleName(std::move(m))
    , inputPath(std::move(i))
    , outputPath(std::move(o))
    , libGlueDir(std::move(b))
    , resDir(std::move(r))
    , stlInterfacePath(resDir / "__zz_cib_stl-interface")
    , stlHelpersPath(resDir / stlHelperDirName)
    , inputCibIdFile(std::move(c))
    , noExactDelegation(d)
    , alwaysUseNsName(u)
    , noRtti(t)
    , handleException(e)
    , wxStyleHeaderDependency(w)
    , layoutSharingClasses(std::move(n))
    , interfaceClasses(std::move(F))
    , exceptionClasses(std::move(E))
    , noCopyClasses(std::move(C))
  {
  }
  CibParams(CibParams&&) = default;

public:
  path cibInternalDir() const
  {
    return outputPath / cibInternalDirName;
  }
  std::string cibIdFilename() const
  {
    return "__zz_cib_" + moduleName + "-ids.h";
  }
  std::string globalNsName() const
  {
    return "__zz_cib_" + moduleName + "Global";
  }

private:
  CibParams(const CibParams&) = delete;
  const CibParams& operator=(const CibParams&) = delete;
};

#endif //__CIB_PARAMS_H__
