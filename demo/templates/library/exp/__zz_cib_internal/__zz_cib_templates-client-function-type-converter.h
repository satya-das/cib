/*
    Generated by cib for ABI compatibility and stability.
    For copyright details refer to the copyright statement of library that contains this file.
*/

#pragma once

/**
 * @file Solution to support passing function object across component boundary.
 *
 * @note There is inherent limitation of supporting function object.
 * It is recommended to use virtual function based interface rather using function object.
 */

#include "__zz_cib_templates-client-default-type-converter.h"
#include "__zz_cib_templates-decl.h"

#include <map>
#include <assert.h>

namespace __zz_cib_ {

/**
 * Supporting passing of function object across component boundary for types that accepts arguments
 * whose core type and ABI type differ is a bit complicated.
 * If the function object's parameter and return types do not need any conversion then there is no limitation.
 * But for other kind of function objects will need conversion.
 * Since the glue code cannot anticipate how many such function objects will be used
 * it assumes some maximum number per signature. Anything else above that will be fatal.
 */
constexpr static int MaxFuncObjAllowed()
{
  return 10;
}

template <typename R, typename... Args>
class FuncObjRepo
{
public:
  using OrigFuncType = R (*)(Args...);
  using AbiFuncType  = __zz_cib_AbiType_t<R>(__zz_cib_decl*)(__zz_cib_AbiType_t<Args>...);

  void registerObj(OrigFuncType origFuncObj, AbiFuncType abiFuncObj)
  {
    mOrigToAbiMap.insert(std::make_pair(origFuncObj, abiFuncObj));
  }

  AbiFuncType getAbiFunc(OrigFuncType origFuncObj) const
  {
    auto itr = mOrigToAbiMap.find(origFuncObj);
    return (itr == mOrigToAbiMap.end()) ? nullptr : itr->second;
  }

  OrigFuncType getOrigFunc(AbiFuncType abiFuncObj) const
  {
    const auto itr = mAbiToOrigMap.find(abiFuncObj);
    return (itr == mAbiToOrigMap.end()) ? nullptr : itr->second;
  }

  static FuncObjRepo& instance()
  {
    static FuncObjRepo funcObjRepo;
    return funcObjRepo;
  }

private:
  FuncObjRepo() {}

  using OrigToAbiMap = std::map<OrigFuncType, AbiFuncType>;
  using AbiToOrigMap = std::map<AbiFuncType, OrigFuncType>;

  OrigToAbiMap mOrigToAbiMap;
  AbiToOrigMap mAbiToOrigMap;
};

/////////////////////////////////////////////////////////////////////////////////////////////

/**
 * Helps in invoking ABI function objects
 */
template <typename R, typename... Args>
struct AbiFuncObjCallHelper
{
  using OrigFuncType = R (*)(Args...);

  static __zz_cib_AbiType_t<R> invoke(OrigFuncType funcObj, __zz_cib_AbiType_t<Args>... args)
  {
    return __zz_cib_ToAbiType<R>(funcObj(__zz_cib_FromAbiType<Args>(args)...));
  }
};

template <typename... Args>
struct AbiFuncObjCallHelper<void, Args...>
{
  using OrigFuncType = void (*)(Args...);

  static void invoke(OrigFuncType funcObj, __zz_cib_AbiType_t<Args>... args)
  {
    return funcObj(__zz_cib_FromAbiType<Args>(args)...);
  }
};

template <int kID, typename R, typename... Args>
class __zz_cib_ClientTypeToAbiTypeImpl
{
  using OrigFuncType = void (*)(Args...);
  using AbiFuncType  = __zz_cib_AbiType_t<R>(__zz_cib_decl*)(__zz_cib_AbiType_t<Args>...);

public:
  static __zz_cib_AbiType_t<R> __zz_cib_decl AbiFunc(__zz_cib_AbiType_t<Args>... args)
  {
    const auto& funcObjRepo = FuncObjRepo<R, Args...>::instance();
    const auto  funcObj     = funcObjRepo.getOrigFunc(&AbiFunc);
    assert(funcObj != nullptr);

    return AbiFuncObjCallHelper<R, Args...>::invoke(args...);
  }

  AbiFuncType convert() const
  {
    return AbiFunc;
  }

public:
  __zz_cib_ClientTypeToAbiTypeImpl(OrigFuncType origFuncObj)
  {
    auto&      funcObjRepo = FuncObjRepo<R, Args...>::instance();
    const auto abiFuncObj  = funcObjRepo.getAbiFunc(origFuncObj);
    if (abiFuncObj == nullptr)
      funcObjRepo.registerObj(origFuncObj, &AbiFunc);
  }

  operator AbiFuncType() const
  {
    return convert();
  }
};

/////////////////////////////////////////////////////////////////////////////////////////////

template <typename R, typename... Args>
class __zz_cib_ClientTypeToAbiType<R(Args...)>
{
  using OrigFuncType = R (*)(Args...);
  using AbiFuncType  = __zz_cib_AbiType_t<R>(__zz_cib_decl*)(__zz_cib_AbiType_t<Args>...);

  static int& getNumFuncObjUsed()
  {
    static int numFuncObjUsed = 0;
    return numFuncObjUsed;
  }

  const OrigFuncType mFuncObj;

public:
  AbiFuncType convert() const
  {
    const auto& funcObjRepo = FuncObjRepo<R, Args...>::instance();
    const auto  abiFuncObj  = funcObjRepo.getAbiFunc(mFuncObj);
    if (abiFuncObj)
      return abiFuncObj;

    const int numFuncObjUsed = getNumFuncObjUsed();
    assert(numFuncObjUsed < MaxFuncObjAllowed());
    ++getNumFuncObjUsed();
    switch (numFuncObjUsed)
    {
      case 0:
      {
        __zz_cib_ClientTypeToAbiTypeImpl<0, R, Args...> impl(mFuncObj);
        return impl.convert();
      }
      case 1:
      {
        __zz_cib_ClientTypeToAbiTypeImpl<1, R, Args...> impl(mFuncObj);
        return impl.convert();
      }
      case 2:
      {
        __zz_cib_ClientTypeToAbiTypeImpl<2, R, Args...> impl(mFuncObj);
        return impl.convert();
      }
      case 3:
      {
        __zz_cib_ClientTypeToAbiTypeImpl<3, R, Args...> impl(mFuncObj);
        return impl.convert();
      }
      case 4:
      {
        __zz_cib_ClientTypeToAbiTypeImpl<4, R, Args...> impl(mFuncObj);
        return impl.convert();
      }
      case 5:
      {
        __zz_cib_ClientTypeToAbiTypeImpl<5, R, Args...> impl(mFuncObj);
        return impl.convert();
      }
      case 6:
      {
        __zz_cib_ClientTypeToAbiTypeImpl<6, R, Args...> impl(mFuncObj);
        return impl.convert();
      }
      case 7:
      {
        __zz_cib_ClientTypeToAbiTypeImpl<7, R, Args...> impl(mFuncObj);
        return impl.convert();
      }
      case 8:
      {
        __zz_cib_ClientTypeToAbiTypeImpl<8, R, Args...> impl(mFuncObj);
        return impl.convert();
      }
      case 9:
      {
        __zz_cib_ClientTypeToAbiTypeImpl<9, R, Args...> impl(mFuncObj);
        return impl.convert();
      }

      default:
        assert(false && "More than MaxFuncObjAllowed() is being used");
        return nullptr;
    }
  }

public:
  __zz_cib_ClientTypeToAbiType(OrigFuncType funcObj)
    : mFuncObj(funcObj)
  {
  }

  operator AbiFuncType() const
  {
    return convert();
  }
};

/////////////////////////////////////////////////////////////////////////////////////////////

/**
 * Helps in invoking Original function objects
 */
template <typename R, typename... Args>
struct FuncObjCallHelper
{
  using AbiFuncType = __zz_cib_AbiType_t<R>(__zz_cib_decl*)(__zz_cib_AbiType_t<Args>...);

  static R invoke(AbiFuncType funcObj, std::add_lvalue_reference_t<Args>... args)
  {
    return __zz_cib_FromAbiType<R>(funcObj(__zz_cib_ToAbiType<Args>(args)...));
  }
};

template <typename... Args>
struct FuncObjCallHelper<void, Args...>
{
  using AbiFuncType = void(__zz_cib_decl*)(__zz_cib_AbiType_t<Args>...);

  static void invoke(AbiFuncType funcObj, std::add_lvalue_reference_t<Args>... args)
  {
    return funcObj(__zz_cib_ToAbiType<Args>(args)...);
  }
};

template <int kID, typename R, typename... Args>
class __zz_cib_AbiTypeToClientTypeImpl
{
  using OrigFuncType = R (*)(Args...);
  using AbiFuncType  = void(__zz_cib_decl*)(__zz_cib_AbiType_t<Args>...);

public:
  static R OrigFunc(Args... args)
  {
    const auto& funcObjRepo = FuncObjRepo<R, Args...>::instance();
    const auto  abiFuncObj  = funcObjRepo.getAbiFunc(&OrigFunc);
    assert(abiFuncObj != nullptr);

    return FuncObjCallHelper<R, Args...>::invoke(abiFuncObj, args...);
  }

  OrigFuncType convert() const
  {
    return OrigFunc;
  }

public:
  __zz_cib_AbiTypeToClientTypeImpl(AbiFuncType abiFuncObj)
  {
    auto&      funcObjRepo = FuncObjRepo<R, Args...>::instance();
    const auto funcObj     = funcObjRepo.getOrigFunc(abiFuncObj);
    if (funcObj == nullptr)
      funcObjRepo.registerObj(&OrigFunc, abiFuncObj);
  }

  operator OrigFuncType() const
  {
    return convert();
  }
};

template <typename R, typename... Args>
class __zz_cib_AbiTypeToClientType<R(Args...)>
{
  using OrigFuncType = R (*)(Args...);
  using AbiFuncType  = void(__zz_cib_decl*)(__zz_cib_AbiType_t<Args>...);

  static int& getNumFuncObjUsed()
  {
    static int numFuncObjUsed = 0;
    return numFuncObjUsed;
  }

  const AbiFuncType mAbiFuncObj;

public:
  OrigFuncType convert() const
  {
    const auto& funcObjRepo = FuncObjRepo<R, Args...>::instance();
    const auto  funcObj     = funcObjRepo.getOrigFunc(mAbiFuncObj);
    if (funcObj)
      return funcObj;

    const int numFuncObjUsed = getNumFuncObjUsed();
    assert(numFuncObjUsed < MaxFuncObjAllowed());
    ++getNumFuncObjUsed();
    switch (numFuncObjUsed)
    {
      case 0:
      {
        __zz_cib_AbiTypeToClientTypeImpl<0, R, Args...> impl(mAbiFuncObj);
        return impl.convert();
      }
      case 1:
      {
        __zz_cib_AbiTypeToClientTypeImpl<1, R, Args...> impl(mAbiFuncObj);
        return impl.convert();
      }
      case 2:
      {
        __zz_cib_AbiTypeToClientTypeImpl<2, R, Args...> impl(mAbiFuncObj);
        return impl.convert();
      }
      case 3:
      {
        __zz_cib_AbiTypeToClientTypeImpl<3, R, Args...> impl(mAbiFuncObj);
        return impl.convert();
      }
      case 4:
      {
        __zz_cib_AbiTypeToClientTypeImpl<4, R, Args...> impl(mAbiFuncObj);
        return impl.convert();
      }
      case 5:
      {
        __zz_cib_AbiTypeToClientTypeImpl<5, R, Args...> impl(mAbiFuncObj);
        return impl.convert();
      }
      case 6:
      {
        __zz_cib_AbiTypeToClientTypeImpl<6, R, Args...> impl(mAbiFuncObj);
        return impl.convert();
      }
      case 7:
      {
        __zz_cib_AbiTypeToClientTypeImpl<7, R, Args...> impl(mAbiFuncObj);
        return impl.convert();
      }
      case 8:
      {
        __zz_cib_AbiTypeToClientTypeImpl<8, R, Args...> impl(mAbiFuncObj);
        return impl.convert();
      }
      case 9:
      {
        __zz_cib_AbiTypeToClientTypeImpl<9, R, Args...> impl(mAbiFuncObj);
        return impl.convert();
      }

      default:
        assert(false && "More than MaxFuncObjAllowed() is being used");
        return nullptr;
    }
  }

public:
  __zz_cib_AbiTypeToClientType(AbiFuncType abiFuncObj)
    : mAbiFuncObj(abiFuncObj)
  {
  }

  operator OrigFuncType() const
  {
    return convert();
  }
};

} // namespace __zz_cib_
