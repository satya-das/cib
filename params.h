#ifndef __CIB_PARAMS_H__
#define __CIB_PARAMS_H__

#include <boost/filesystem.hpp>

#include <string>
#include <tuple>

//////////////////////////////////////////////////////////////////////////

namespace bfs = boost::filesystem;

/**
 * Parameter that contains values of CIB options.
 */
struct CibParams
{
public:
  const std::string classHandlePrefix;
  const std::string handleGetterMethod;
  const std::string copyCtorCAPIPrefix;
  const std::string ctorCAPIPrefix;
  const std::string dtorCAPIPrefix;
  const std::string castToBasePrefix;
  const std::string fromHandle;
  const int globalFuncCibClassId;    // All global functions of all headers belong to only one MetaInterface.

  const std::string moduleName;
  const bfs::path inputPath;
  const bfs::path outputPath;
  const bfs::path binderPath;
  const bfs::path resDir;

public:
  template<typename OptionTuple>
  CibParams(OptionTuple options)
    : classHandlePrefix     ("_h_")
    , handleGetterMethod    ("__handle")
    , copyCtorCAPIPrefix    ("__copy")
    , ctorCAPIPrefix        ("__new")
    , dtorCAPIPrefix        ("__delete")
    , castToBasePrefix      ("__cast_to_")
    , fromHandle            ("__from_handle")
    , globalFuncCibClassId  (1)
    , moduleName            (std::get<0>(options))
    , inputPath             (std::get<1>(options))
    , outputPath            (std::get<2>(options))
    , binderPath            (std::get<3>(options))
    , resDir                (std::get<4>(options))
  {
  }
};

#endif //__CIB_PARAMS_H__
