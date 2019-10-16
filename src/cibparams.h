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

namespace bfs = boost::filesystem;

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
  std::string  moduleName;
  bfs::path    inputPath;
  bfs::path    outputPath;
  bfs::path    binderPath;
  bfs::path    resDir;
  bfs::path    inputCibIdFile;
  std::string  cibInternalDirName;
  std::string  copyCtorCAPIPrefix;
  std::string  ctorCAPIPrefix;
  std::string  dtorCAPIPrefix;
  std::string  castToBasePrefix;
  bool         noExactDelegation{false};
  bool         libraryManagedProxies;
  bool         alwaysUseNsName{false};
  bool         noRtti{false};
  bool         noException{false};
  StringVector noProxyClasses;

public:
  CibParams(std::string  m,
            bfs::path    i,
            bfs::path    o,
            bfs::path    b,
            bfs::path    r,
            bfs::path    c,
            bool         d,
            bool         p,
            bool         u,
            bool         t,
            bool         e,
            StringVector n)
    : moduleName(std::move(m))
    , inputPath(std::move(i))
    , outputPath(std::move(o))
    , binderPath(std::move(b))
    , resDir(std::move(r))
    , inputCibIdFile(std::move(c))
    , cibInternalDirName(CIBPREFIX "internal")
    , copyCtorCAPIPrefix(CIBPREFIX "copy")
    , ctorCAPIPrefix(CIBPREFIX "new")
    , dtorCAPIPrefix(CIBPREFIX "delete")
    , castToBasePrefix(CIBPREFIX "cast_to_")
    , noExactDelegation(d)
    , libraryManagedProxies(p)
    , alwaysUseNsName(u)
    , noRtti(t)
    , noException(e)
    , noProxyClasses(std::move(n))
  {
  }
  CibParams(CibParams&&) = default;

public:
  bfs::path cibInternalDir() const
  {
    return outputPath / cibInternalDirName;
  }
  std::string cibIdFilename() const
  {
    return "__zz_cib_" + moduleName + "-ids.h";
  }
  std::string globalNsName() const
  {
    return "__zz_cib_" + moduleName + "_Global";
  }

private:
  CibParams(const CibParams&) = delete;
  const CibParams& operator=(const CibParams&) = delete;
};

#endif //__CIB_PARAMS_H__
