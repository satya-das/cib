/*
    Generated by cib for ABI compatibility and stability.
    For copyright details refer to the copyright statement of library that contains this file.
*/

#pragma once

#include "__zz_cib_Module-client-default-type-converter.h"
#include "__zz_cib_Module-decl.h"

#include "__zz_cib_Module-std-function-converter-base.h"

namespace __zz_cib_ {

template <typename R, typename... Args>
class __zz_cib_ClientTypeToAbiType<std::function<R(Args...)>>
{
  using AbiFunctor = __zz_cib_AbiFunctor<R, Args...>;
  using AbiType    = AbiFunctor;

  AbiFunctor mAbiFunctor;

public:
  AbiType convert() const
  {
    return mAbiFunctor;
  }

public:
  __zz_cib_ClientTypeToAbiType(std::function<R(Args...)>& x)
    : mAbiFunctor(toAbiFunctor(x))
  {
  }
  __zz_cib_ClientTypeToAbiType(std::function<R(Args...)>&& x)
    : mAbiFunctor(toAbiFunctor(x))
  {
  }

  operator AbiType() const
  {
    return convert();
  }
};

template <typename R, typename... Args>
class __zz_cib_ClientTypeToAbiType<std::function<R(Args...)>&>
{
  using AbiFunctor = __zz_cib_AbiFunctor<R, Args...>;
  using AbiType    = AbiFunctor*;

  AbiFunctor                 mAbiFunctor;
  std::function<R(Args...)>& mOrigParam;

public:
  AbiType convert()
  {
    return &mAbiFunctor;
  }

public:
  __zz_cib_ClientTypeToAbiType(std::function<R(Args...)>& x)
    : mAbiFunctor(toAbiFunctor(&x))
    , mOrigParam(x)
  {
  }

  ~__zz_cib_ClientTypeToAbiType()
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
    return convert();
  }
};

template <typename R, typename... Args>
class __zz_cib_ClientTypeToAbiType<std::function<R(Args...)>*>
{
  using AbiFunctor = __zz_cib_AbiFunctor<R, Args...>;
  using AbiType    = AbiFunctor*;

  AbiFunctor                 mAbiFunctor;
  std::function<R(Args...)>* mOrigParam;

public:
  AbiType convert()
  {
    return &mAbiFunctor;
  }

public:
  __zz_cib_ClientTypeToAbiType(std::function<R(Args...)>* x)
    : mAbiFunctor(toAbiFunctor(x))
    , mOrigParam(x)
  {
  }

  ~__zz_cib_ClientTypeToAbiType()
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
    return convert();
  }
};

template <typename R, typename... Args>
class __zz_cib_ClientTypeToAbiType<std::function<R(Args...)>&&>
{
  using AbiFunctor = __zz_cib_AbiFunctor<R, Args...>;
  using AbiType    = AbiFunctor;

  AbiFunctor mAbiFunctor;

public:
  AbiFunctor convert()
  {
    return std::move(mAbiFunctor);
  }

public:
  __zz_cib_ClientTypeToAbiType(std::function<R(Args...)>&& x)
    : mAbiFunctor(toAbiFunctor(x))
  {
  }

  operator AbiFunctor()
  {
    return std::move(mAbiFunctor);
  }
};

/////////////////////////////////////////////////////////////////////////////////////////////

template <typename R, typename... Args>
class __zz_cib_AbiTypeToClientType<std::function<R(Args...)>>
{
  using AbiFunctor = __zz_cib_AbiFunctor<R, Args...>;
  using AbiType    = AbiFunctor;

  AbiFunctor mAbiFunctor;

public:
  __zz_cib_AbiTypeToClientType(AbiType x)
    : mAbiFunctor(x)
  {
  }

  operator std::function<R(Args...)>() const
  {
    return fromAbiFunctor(mAbiFunctor);
  }
};

template <typename R, typename... Args>
class __zz_cib_AbiTypeToClientType<std::function<R(Args...)>&>
{
  using AbiFunctor = __zz_cib_AbiFunctor<R, Args...>;
  using AbiType    = AbiFunctor*;

  AbiFunctor*               mAbiFunctor;
  std::function<R(Args...)> mStdFunc;

public:
  __zz_cib_AbiTypeToClientType(AbiType x)
    : mAbiFunctor(x)
    , mStdFunc(fromAbiFunctor(mAbiFunctor))
  {
    // It is used to detect change in stored callable object inside destructor.
    // assert((mAbiFunctor.proc == nullptr) || (mStdFunc.target<__zz_cib_SmartFunctor<R, Args...>>() != nullptr));
  }

  ~__zz_cib_AbiTypeToClientType()
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
class __zz_cib_AbiTypeToClientType<std::function<R(Args...)>*>
{
  using AbiFunctor = __zz_cib_AbiFunctor<R, Args...>;
  using AbiType    = AbiFunctor*;

  AbiFunctor*               mAbiFunctor;
  std::function<R(Args...)> mStdFunc;

public:
  __zz_cib_AbiTypeToClientType(AbiType x)
    : mAbiFunctor(x)
    , mStdFunc(fromAbiFunctor(*mAbiFunctor))
  {
    // It is used to detect change in stored callable object inside destructor.
    // assert((mAbiFunctor.proc == nullptr) || (mStdFunc.target<__zz_cib_SmartFunctor<R, Args...>>() != nullptr));
  }

  ~__zz_cib_AbiTypeToClientType()
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
class __zz_cib_AbiTypeToClientType<std::function<R(Args...)>&&>
{
  using AbiFunctor = __zz_cib_AbiFunctor<R, Args...>;
  using AbiType    = AbiFunctor*;

  AbiFunctor* mAbiFunctor;

public:
  __zz_cib_AbiTypeToClientType(AbiFunctor* x)
    : mAbiFunctor(x)
  {
  }

  operator std::function<R(Args...)>() const
  {
    if (mAbiFunctor->proc == nullptr)
      return nullptr;
    return __zz_cib_SmartFunctor<R, Args...>(*mAbiFunctor);
  }
};

} // namespace __zz_cib_
