#ifndef __CIB_PARAMS_H__
#define __CIB_PARAMS_H__

#include <boost/filesystem.hpp>

#include <string>
#include <tuple>

#define CIBPREFIX "__zz_cib_"

//////////////////////////////////////////////////////////////////////////

namespace bfs = boost::filesystem;

/**
 * Contains values of CIB Parameters.
 *
 * Some values are hardcoded and others are configurable
 * by means of program options.
 */
struct CibParams
{
public:
  std::string moduleName;
  bfs::path   inputPath;
  bfs::path   outputPath;
  bfs::path   binderPath;
  bfs::path   resDir;
  bfs::path   inputCibIdFile;
  std::string cibInternalDirName;
  std::string cibdefFileName;
  std::string helperFileName;
  std::string cibInternalNamespace;
  std::string handleGetterMethod;
  std::string copyCtorCAPIPrefix;
  std::string ctorCAPIPrefix;
  std::string dtorCAPIPrefix;
  std::string castToBasePrefix;
  std::string fromHandle;
  int         globalFuncCibClassId; // All global functions of all headers belong to only one MetaInterface.

public:
  CibParams(std::string m, bfs::path i, bfs::path o, bfs::path b, bfs::path r, bfs::path c)
    : moduleName(std::move(m))
    , inputPath(std::move(i))
    , outputPath(std::move(o))
    , binderPath(std::move(b))
    , resDir(std::move(r))
    , inputCibIdFile(std::move(c))
    , cibInternalDirName(CIBPREFIX "internal")
    , cibdefFileName(CIBPREFIX + moduleName + "-def.h")
    , helperFileName(CIBPREFIX + moduleName + "-helper.h")
    , cibInternalNamespace(CIBPREFIX)
    , handleGetterMethod(CIBPREFIX "handle")
    , copyCtorCAPIPrefix(CIBPREFIX "copy")
    , ctorCAPIPrefix(CIBPREFIX "new")
    , dtorCAPIPrefix(CIBPREFIX "delete")
    , castToBasePrefix(CIBPREFIX "cast_to_")
    , fromHandle(CIBPREFIX "from_handle")
    , globalFuncCibClassId(1)
  {
  }
  CibParams(CibParams&&) = default;

public:
  bfs::path cibdefFilePath() const
  {
    return outputPath / cibInternalDirName / cibdefFileName;
  }
  bfs::path helperFilePath() const
  {
    return outputPath / cibInternalDirName / helperFileName;
  }
  bfs::path cibInternalDir() const
  {
    return outputPath / cibInternalDirName;
  }
  std::string cibIdFilename() const
  {
    return "__zz_cib_" + moduleName + "-ids.h";
  }
  std::string classIdOwnerSpace() const
  {
    return "__zz_cib_::__zz_cib_classid::";
  }

private:
  CibParams(const CibParams&) = delete;
  const CibParams& operator=(const CibParams&) = delete;
};

#endif //__CIB_PARAMS_H__
