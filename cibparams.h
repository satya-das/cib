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
  const std::string moduleName;
  const bfs::path   inputPath;
  const bfs::path   outputPath;
  const bfs::path   binderPath;
  const bfs::path   resDir;
  const std::string cibInternalDirName;
  const std::string cibdefFileName;
  const std::string cibInternalNamespace;
  const std::string handleGetterMethod;
  const std::string copyCtorCAPIPrefix;
  const std::string ctorCAPIPrefix;
  const std::string dtorCAPIPrefix;
  const std::string castToBasePrefix;
  const std::string fromHandle;
  const int         globalFuncCibClassId; // All global functions of all headers belong to only one MetaInterface.

public:
  template <typename OptionTuple>
  CibParams(OptionTuple options)
    : moduleName(std::get<0>(options))
    , inputPath(std::get<1>(options))
    , outputPath(std::get<2>(options))
    , binderPath(std::get<3>(options))
    , resDir(std::get<4>(options))
    , cibInternalDirName(CIBPREFIX "internal")
    , cibdefFileName(moduleName + "_cibdef.h")
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

public:
  bfs::path cibdefFilePath() const
  {
    return outputPath / cibInternalDirName / cibdefFileName;
  }
  bfs::path cibInternalDir() const
  {
    return outputPath / cibInternalDirName;
  }
  std::string cibIdFilename() const
  {
    return "__zz_cib_" + moduleName + "_ids.h";
  }
  std::string classIdOwnerSpace() const
  {
    return "__zz_cib_::" + moduleName + "Lib::__zz_cib_classid::";
  }

private:
  CibParams(const CibParams&) = delete;
  CibParams(CibParams&&)      = delete;
  const CibParams& operator=(const CibParams&) = delete;
};

#endif //__CIB_PARAMS_H__
