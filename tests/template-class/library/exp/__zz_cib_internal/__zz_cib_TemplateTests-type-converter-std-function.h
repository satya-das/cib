/*
    Generated by cib for ABI compatibility and stability.
*/

#pragma once

#include "__zz_cib_TemplateTests-type-converter-base.h"

#include "__zz_cib_TemplateTests-decl.h"
#include "__zz_cib_TemplateTests-std-function-converter-base.h"

namespace __zz_cib_ {

template <typename R, typename... Args>
class __zz_cib_CoreTypeToAbiType<std::function<R(Args...)>>
{
  using AbiFunctor = __zz_cib_AbiFunctor<R, Args...>;
  using AbiType    = AbiFunctor;

  AbiFunctor mAbiFunctor;

public:
  AbiType Convert() const
  {
    return mAbiFunctor;
  }

public:
  __zz_cib_CoreTypeToAbiType(std::function<R(Args...)>& x)
    : mAbiFunctor(toAbiFunctor(x))
  {
  }
  __zz_cib_CoreTypeToAbiType(std::function<R(Args...)>&& x)
    : mAbiFunctor(toAbiFunctor(x))
  {
  }

  operator AbiType() const
  {
    return Convert();
  }
};

template <typename R, typename... Args>
class __zz_cib_CoreTypeToAbiType<std::function<R(Args...)>&>
{
  using AbiFunctor = __zz_cib_AbiFunctor<R, Args...>;
  using AbiType    = AbiFunctor*;

  AbiFunctor                 mAbiFunctor;
  std::function<R(Args...)>& mOrigParam;

public:
  AbiType Convert()
  {
    return &mAbiFunctor;
  }

public:
  __zz_cib_CoreTypeToAbiType(std::function<R(Args...)>& x)
    : mAbiFunctor(toAbiFunctor(&x))
    , mOrigParam(x)
  {
  }

  ~__zz_cib_CoreTypeToAbiType()
  {
    if (AbiFunctor_getStdFunc(&mAbiFunctor) == &mOrigParam)
      return;
    if (mAbiFunctor.proc == nullptr)
      mOrigParam = nullptr;
    else
      mOrigParam = fromAbiFunctor(mAbiFunctor);
  }

  operator AbiType()
  {
    return Convert();
  }
};

template <typename R, typename... Args>
class __zz_cib_CoreTypeToAbiType<const std::function<R(Args...)>&>
{
  using AbiFunctor = __zz_cib_AbiFunctor<R, Args...>;
  using AbiType    = AbiFunctor*;

  AbiFunctor                       mAbiFunctor;
  const std::function<R(Args...)>& mOrigParam;

public:
  AbiType Convert()
  {
    return &mAbiFunctor;
  }

public:
  __zz_cib_CoreTypeToAbiType(const std::function<R(Args...)>& x)
    : mAbiFunctor(toAbiFunctor(&x))
    , mOrigParam(x)
  {
  }

  ~__zz_cib_CoreTypeToAbiType()
  {
    if (AbiFunctor_getStdFunc(&mAbiFunctor) == &mOrigParam)
      return;
  }

  operator AbiType()
  {
    return Convert();
  }
};

template <typename R, typename... Args>
class __zz_cib_CoreTypeToAbiType<std::function<R(Args...)>*>
{
  using AbiFunctor = __zz_cib_AbiFunctor<R, Args...>;
  using AbiType    = AbiFunctor*;

  AbiFunctor                 mAbiFunctor;
  std::function<R(Args...)>* mOrigParam;

public:
  AbiType Convert()
  {
    return &mAbiFunctor;
  }

public:
  __zz_cib_CoreTypeToAbiType(std::function<R(Args...)>* x)
    : mAbiFunctor(toAbiFunctor(x))
    , mOrigParam(x)
  {
  }

  ~__zz_cib_CoreTypeToAbiType()
  {
    if (mOrigParam == nullptr)
      return;
    if (AbiFunctor_getStdFunc(&mAbiFunctor) == mOrigParam)
      return;
    if (mAbiFunctor.proc == nullptr)
      *mOrigParam = nullptr;
    else
      *mOrigParam = fromAbiFunctor(mAbiFunctor);
  }

  operator AbiType()
  {
    return Convert();
  }
};

template <typename R, typename... Args>
class __zz_cib_CoreTypeToAbiType<std::function<R(Args...)>&&>
{
  using AbiFunctor = __zz_cib_AbiFunctor<R, Args...>;
  using AbiType    = AbiFunctor;

  AbiFunctor mAbiFunctor;

public:
  AbiFunctor* Convert()
  {
    return &mAbiFunctor;
  }

public:
  __zz_cib_CoreTypeToAbiType(std::function<R(Args...)>&& x)
    : mAbiFunctor(toAbiFunctor(x))
  {
  }

  operator AbiFunctor*()
  {
    return Convert();
  }
};

/////////////////////////////////////////////////////////////////////////////////////////////

template <typename R, typename... Args>
class __zz_cib_AbiTypeToCoreType<std::function<R(Args...)>>
{
  using AbiFunctor = __zz_cib_AbiFunctor<R, Args...>;
  using AbiType    = AbiFunctor;

  AbiFunctor mAbiFunctor;

public:
  __zz_cib_AbiTypeToCoreType(AbiType x)
    : mAbiFunctor(x)
  {
  }

  operator std::function<R(Args...)>() const
  {
    return fromAbiFunctor(mAbiFunctor);
  }
};

template <typename R, typename... Args>
class __zz_cib_AbiTypeToCoreType<std::function<R(Args...)>&>
{
  using AbiFunctor = __zz_cib_AbiFunctor<R, Args...>;
  using AbiType    = AbiFunctor*;

  AbiFunctor*               mAbiFunctor;
  std::function<R(Args...)> mStdFunc;

public:
  __zz_cib_AbiTypeToCoreType(AbiType x)
    : mAbiFunctor(x)
    , mStdFunc(fromAbiFunctor(*mAbiFunctor))
  {
    // It is used to detect change in stored callable object inside destructor.
    // assert((mAbiFunctor.proc == nullptr) || (mStdFunc.target<__zz_cib_SmartFunctor<R, Args...>>() != nullptr));
  }

  ~__zz_cib_AbiTypeToCoreType()
  {
    // const isStdFuncUnchanged = (mStdFunc.target<__zz_cib_SmartFunctor<R, Args...>>() != nullptr);
    // if (isStdFuncUnchanged)
    //   return;
    *mAbiFunctor = toAbiFunctor(mStdFunc);
  }

  operator std::function<R(Args...)>&()
  {
    return mStdFunc;
  }
};

template <typename R, typename... Args>
class __zz_cib_AbiTypeToCoreType<const std::function<R(Args...)>&>
{
  using AbiFunctor = __zz_cib_AbiFunctor<R, Args...>;
  using AbiType    = AbiFunctor*;

  AbiFunctor*               mAbiFunctor;
  std::function<R(Args...)> mStdFunc;

public:
  __zz_cib_AbiTypeToCoreType(AbiType x)
    : mAbiFunctor(x)
    , mStdFunc(fromAbiFunctor(*mAbiFunctor))
  {
    // It is used to detect change in stored callable object inside destructor.
    // assert((mAbiFunctor.proc == nullptr) || (mStdFunc.target<__zz_cib_SmartFunctor<R, Args...>>() != nullptr));
  }

  ~__zz_cib_AbiTypeToCoreType()
  {
    // const isStdFuncUnchanged = (mStdFunc.target<__zz_cib_SmartFunctor<R, Args...>>() != nullptr);
    // if (isStdFuncUnchanged)
    //   return;
    *mAbiFunctor = toAbiFunctor(mStdFunc);
  }

  operator const std::function<R(Args...)>&()
  {
    return mStdFunc;
  }
};

template <typename R, typename... Args>
class __zz_cib_AbiTypeToCoreType<std::function<R(Args...)>*>
{
  using AbiFunctor = __zz_cib_AbiFunctor<R, Args...>;
  using AbiType    = AbiFunctor*;

  AbiFunctor*               mAbiFunctor;
  std::function<R(Args...)> mStdFunc;

public:
  __zz_cib_AbiTypeToCoreType(AbiType x)
    : mAbiFunctor(x)
    , mStdFunc(fromAbiFunctor(*mAbiFunctor))
  {
    // It is used to detect change in stored callable object inside destructor.
    // assert((mAbiFunctor.proc == nullptr) || (mStdFunc.target<__zz_cib_SmartFunctor<R, Args...>>() != nullptr));
  }

  ~__zz_cib_AbiTypeToCoreType()
  {
    // const isStdFuncUnchanged = (mStdFunc.target<__zz_cib_SmartFunctor<R, Args...>>() != nullptr);
    // if (isStdFuncUnchanged)
    //   return;
    *mAbiFunctor = toAbiFunctor(mStdFunc);
  }

  operator std::function<R(Args...)>*()
  {
    return &mStdFunc;
  }
};

template <typename R, typename... Args>
class __zz_cib_AbiTypeToCoreType<std::function<R(Args...)>&&>
{
  using AbiFunctor = __zz_cib_AbiFunctor<R, Args...>;
  using AbiType    = AbiFunctor*;

  AbiFunctor* mAbiFunctor;

public:
  __zz_cib_AbiTypeToCoreType(AbiFunctor* x)
    : mAbiFunctor(x)
  {
  }

  operator std::function<R(Args...)>()
  {
    if (mAbiFunctor->proc == nullptr)
      return nullptr;
    return __zz_cib_SmartFunctor<R, Args...>(*mAbiFunctor);
  }
};

} // namespace __zz_cib_
