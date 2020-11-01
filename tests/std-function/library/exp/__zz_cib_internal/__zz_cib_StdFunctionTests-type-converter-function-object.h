/*
    Generated by cib for ABI compatibility and stability.
*/

#pragma once

/**
 * @file Solution to support passing function object across component boundary.
 *
 * @note There is inherent limitation of supporting function object.
 * It is recommended to use virtual function based interface rather using function object.
 */

#include "__zz_cib_StdFunctionTests-type-converter-base.h"

#include "__zz_cib_StdFunctionTests-decl.h"

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
    mAbiToOrigMap.insert(std::make_pair(abiFuncObj, origFuncObj));
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

  static __zz_cib_AbiType_t<R> Invoke(OrigFuncType funcObj, __zz_cib_AbiType_t<Args>... args)
  {
    return __zz_cib_ToAbiType<R>(funcObj(__zz_cib_FromAbiType<Args>(args)...));
  }
};

template <typename... Args>
struct AbiFuncObjCallHelper<void, Args...>
{
  using OrigFuncType = void (*)(Args...);

  static void Invoke(OrigFuncType funcObj, __zz_cib_AbiType_t<Args>... args)
  {
    return funcObj(__zz_cib_FromAbiType<Args>(args)...);
  }
};

template <int kID, typename R, typename... Args>
class __zz_cib_CoreTypeToAbiTypeImpl
{
  using OrigFuncType = R (*)(Args...);
  using AbiFuncType  = __zz_cib_AbiType_t<R>(__zz_cib_decl*)(__zz_cib_AbiType_t<Args>...);

public:
  static __zz_cib_AbiType_t<R> __zz_cib_decl AbiFunc(__zz_cib_AbiType_t<Args>... args)
  {
    const auto& funcObjRepo = FuncObjRepo<R, Args...>::instance();
    const auto  funcObj     = funcObjRepo.getOrigFunc(&AbiFunc);
    assert(funcObj != nullptr);

    return AbiFuncObjCallHelper<R, Args...>::Invoke(funcObj, args...);
  }

  AbiFuncType Convert() const
  {
    return AbiFunc;
  }

public:
  __zz_cib_CoreTypeToAbiTypeImpl(OrigFuncType origFuncObj)
  {
    auto&      funcObjRepo = FuncObjRepo<R, Args...>::instance();
    const auto abiFuncObj  = funcObjRepo.getAbiFunc(origFuncObj);
    if (abiFuncObj == nullptr)
      funcObjRepo.registerObj(origFuncObj, &AbiFunc);
  }

  operator AbiFuncType() const
  {
    return Convert();
  }
};

/////////////////////////////////////////////////////////////////////////////////////////////

template <typename R, typename... Args>
class __zz_cib_CoreTypeToAbiType<R (*)(Args...)>
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
  AbiFuncType Convert() const
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
        __zz_cib_CoreTypeToAbiTypeImpl<0, R, Args...> impl(mFuncObj);
        return impl.Convert();
      }
      case 1:
      {
        __zz_cib_CoreTypeToAbiTypeImpl<1, R, Args...> impl(mFuncObj);
        return impl.Convert();
      }
      case 2:
      {
        __zz_cib_CoreTypeToAbiTypeImpl<2, R, Args...> impl(mFuncObj);
        return impl.Convert();
      }
      case 3:
      {
        __zz_cib_CoreTypeToAbiTypeImpl<3, R, Args...> impl(mFuncObj);
        return impl.Convert();
      }
      case 4:
      {
        __zz_cib_CoreTypeToAbiTypeImpl<4, R, Args...> impl(mFuncObj);
        return impl.Convert();
      }
      case 5:
      {
        __zz_cib_CoreTypeToAbiTypeImpl<5, R, Args...> impl(mFuncObj);
        return impl.Convert();
      }
      case 6:
      {
        __zz_cib_CoreTypeToAbiTypeImpl<6, R, Args...> impl(mFuncObj);
        return impl.Convert();
      }
      case 7:
      {
        __zz_cib_CoreTypeToAbiTypeImpl<7, R, Args...> impl(mFuncObj);
        return impl.Convert();
      }
      case 8:
      {
        __zz_cib_CoreTypeToAbiTypeImpl<8, R, Args...> impl(mFuncObj);
        return impl.Convert();
      }
      case 9:
      {
        __zz_cib_CoreTypeToAbiTypeImpl<9, R, Args...> impl(mFuncObj);
        return impl.Convert();
      }

      default:
        assert(false && "More than MaxFuncObjAllowed() is being used");
        return nullptr;
    }
  }

public:
  __zz_cib_CoreTypeToAbiType(OrigFuncType funcObj)
    : mFuncObj(funcObj)
  {
  }

  operator AbiFuncType() const
  {
    return Convert();
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

  static R Invoke(AbiFuncType funcObj, std::add_lvalue_reference_t<Args>... args)
  {
    return __zz_cib_FromAbiType<R>(funcObj(__zz_cib_ToAbiType<Args>(args)...));
  }
};

template <typename... Args>
struct FuncObjCallHelper<void, Args...>
{
  using AbiFuncType = void(__zz_cib_decl*)(__zz_cib_AbiType_t<Args>...);

  static void Invoke(AbiFuncType funcObj, std::add_lvalue_reference_t<Args>... args)
  {
    return funcObj(__zz_cib_ToAbiType<Args>(args)...);
  }
};

template <int kID, typename R, typename... Args>
class __zz_cib_AbiTypeToCoreTypeImpl
{
  using OrigFuncType = R (*)(Args...);
  using AbiFuncType  = R(__zz_cib_decl*)(__zz_cib_AbiType_t<Args>...);

public:
  static R OrigFunc(Args... args)
  {
    const auto& funcObjRepo = FuncObjRepo<R, Args...>::instance();
    const auto  abiFuncObj  = funcObjRepo.getAbiFunc(&OrigFunc);
    assert(abiFuncObj != nullptr);

    return FuncObjCallHelper<R, Args...>::Invoke(abiFuncObj, args...);
  }

  OrigFuncType Convert() const
  {
    return OrigFunc;
  }

public:
  __zz_cib_AbiTypeToCoreTypeImpl(AbiFuncType abiFuncObj)
  {
    auto&      funcObjRepo = FuncObjRepo<R, Args...>::instance();
    const auto funcObj     = funcObjRepo.getOrigFunc(abiFuncObj);
    if (funcObj == nullptr)
      funcObjRepo.registerObj(&OrigFunc, abiFuncObj);
  }

  operator OrigFuncType() const
  {
    return Convert();
  }
};

template <typename R, typename... Args>
class __zz_cib_AbiTypeToCoreType<R (*)(Args...)>
{
  using OrigFuncType = R (*)(Args...);
  using AbiFuncType  = __zz_cib_AbiType_t<R>(__zz_cib_decl*)(__zz_cib_AbiType_t<Args>...);

  static int& getNumFuncObjUsed()
  {
    static int numFuncObjUsed = 0;
    return numFuncObjUsed;
  }

  const AbiFuncType mAbiFuncObj;

public:
  OrigFuncType Convert() const
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
        __zz_cib_AbiTypeToCoreTypeImpl<0, R, Args...> impl(mAbiFuncObj);
        return impl.Convert();
      }
      case 1:
      {
        __zz_cib_AbiTypeToCoreTypeImpl<1, R, Args...> impl(mAbiFuncObj);
        return impl.Convert();
      }
      case 2:
      {
        __zz_cib_AbiTypeToCoreTypeImpl<2, R, Args...> impl(mAbiFuncObj);
        return impl.Convert();
      }
      case 3:
      {
        __zz_cib_AbiTypeToCoreTypeImpl<3, R, Args...> impl(mAbiFuncObj);
        return impl.Convert();
      }
      case 4:
      {
        __zz_cib_AbiTypeToCoreTypeImpl<4, R, Args...> impl(mAbiFuncObj);
        return impl.Convert();
      }
      case 5:
      {
        __zz_cib_AbiTypeToCoreTypeImpl<5, R, Args...> impl(mAbiFuncObj);
        return impl.Convert();
      }
      case 6:
      {
        __zz_cib_AbiTypeToCoreTypeImpl<6, R, Args...> impl(mAbiFuncObj);
        return impl.Convert();
      }
      case 7:
      {
        __zz_cib_AbiTypeToCoreTypeImpl<7, R, Args...> impl(mAbiFuncObj);
        return impl.Convert();
      }
      case 8:
      {
        __zz_cib_AbiTypeToCoreTypeImpl<8, R, Args...> impl(mAbiFuncObj);
        return impl.Convert();
      }
      case 9:
      {
        __zz_cib_AbiTypeToCoreTypeImpl<9, R, Args...> impl(mAbiFuncObj);
        return impl.Convert();
      }

      default:
        assert(false && "More than MaxFuncObjAllowed() is being used");
        return nullptr;
    }
  }

public:
  __zz_cib_AbiTypeToCoreType(AbiFuncType abiFuncObj)
    : mAbiFuncObj(abiFuncObj)
  {
  }

  operator OrigFuncType() const
  {
    return Convert();
  }
};

} // namespace __zz_cib_
