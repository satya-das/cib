/*
    Generated by cib for ABI compatibility and stability.
    For copyright details refer to the copyright statement of library that contains this file.
*/

#pragma once

#include <cstdint>
#include <functional>

namespace __zz_cib_ {

/**
 * C style functor, equivalent in functionality to std::function.
 *
 * This will cross component boundary and so it has to be in a form
 * that must be abi compatible for all compilers and stable across releases.
 */
template <typename R, typename... Args>
struct __zz_cib_AbiFunctor
{
  static constexpr std::uintptr_t kAbiFunctorVersion = 1;

  using StdFunc  = std::function<R(Args...)>;
  using AbiFunc  = __zz_cib_AbiType_t<R>(__zz_cib_decl*)(const __zz_cib_AbiFunctor*, __zz_cib_AbiType_t<Args>...);
  using FuncData = void*; // This will actually hold StdFunc in opaque manner.
  using FuncCopy = __zz_cib_AbiFunctor(__zz_cib_decl*)(const __zz_cib_AbiFunctor*);
  using FuncDtor = void(__zz_cib_decl*)(const __zz_cib_AbiFunctor*);

  std::uintptr_t version;
  FuncData       data;
  AbiFunc        proc;
  FuncCopy       copy;
  FuncDtor       dtor;
  // Any new member should go at the end
  // Any addition here should also be followed by bumping value of version.

  /// Don't know why but without this destructor segmentation fault occurs
  ~__zz_cib_AbiFunctor() {}
};

/**
 * @warning This should only be called for an object which is created in same component
 */
template <typename R, typename... Args>
inline std::function<R(Args...)>* AbiFunctor_getStdFunc(const __zz_cib_AbiFunctor<R, Args...>* abiFunctor)
{
  return static_cast<std::function<R(Args...)>*>(abiFunctor->data);
}

template <typename R, typename... Args>
inline void __zz_cib_decl AbiFunctor_destruct(const __zz_cib_AbiFunctor<R, Args...>* abiFunctor)
{
  delete AbiFunctor_getStdFunc<R, Args...>(abiFunctor);
}

template <typename R, typename... Args>
__zz_cib_AbiFunctor<R, Args...> __zz_cib_decl AbiFunctor_copy(const __zz_cib_AbiFunctor<R, Args...>* abiFunctor);

/**
 * Helps in invoking function pointer contained in __zz_cib_AbiFunctor
 *
 * @note It is required because we need to specialize for the case when "R = void".
 */
template <typename R, typename... Args>
struct AbiFunctorCallHelper
{
  const __zz_cib_AbiFunctor<R, Args...>* const mAbiFunctor;

  AbiFunctorCallHelper(const __zz_cib_AbiFunctor<R, Args...>* abiFunctor)
    : mAbiFunctor(abiFunctor)
  {
  }

  __zz_cib_AbiType_t<R> operator()(__zz_cib_AbiType_t<Args>... args) const
  {
    auto& origStdFunc = *AbiFunctor_getStdFunc<R, Args...>(mAbiFunctor);
    return __zz_cib_ToAbiType<R>(origStdFunc(__zz_cib_FromAbiType<Args>(args)...));
  }
};

template <typename... Args>
struct AbiFunctorCallHelper<void, Args...>
{
  const __zz_cib_AbiFunctor<void, Args...>* const mAbiFunctor;

  AbiFunctorCallHelper(const __zz_cib_AbiFunctor<void, Args...>* abiFunctor)
    : mAbiFunctor(abiFunctor)
  {
  }

  void operator()(__zz_cib_AbiType_t<Args>... args) const
  {
    auto& origStdFunc = *AbiFunctor_getStdFunc<void, Args...>(mAbiFunctor);
    return origStdFunc(__zz_cib_FromAbiType<Args>(args)...);
  }
};

template <typename R, typename... Args>
inline __zz_cib_AbiType_t<R> __zz_cib_decl AbiFunctor_call(const __zz_cib_AbiFunctor<R, Args...>* abiFunctor,
                                                           __zz_cib_AbiType_t<Args>... args)
{
  AbiFunctorCallHelper call(abiFunctor);
  return call(args...);
};

/**
 * A wrapper on __zz_cib_AbiFunctor to destroy the underlying object smartly.
 */
template <typename R, typename... Args>
class __zz_cib_SmartFunctorBase
{
protected:
  using AbiFunctor = __zz_cib_AbiFunctor<R, Args...>;

  AbiFunctor mAbiFunctor;

private:
  void disableDtor()
  {
    mAbiFunctor.dtor = nullptr;
  }

public:
  __zz_cib_SmartFunctorBase(AbiFunctor abiFunctor)
    : mAbiFunctor(abiFunctor)
  {
  }

  __zz_cib_SmartFunctorBase(__zz_cib_SmartFunctorBase&& rhs)
    : mAbiFunctor(rhs.mAbiFunctor)
  {
    rhs.disableDtor();
  }

  __zz_cib_SmartFunctorBase(const __zz_cib_SmartFunctorBase& rhs)
    : mAbiFunctor(rhs.mAbiFunctor.copy(&rhs.mAbiFunctor))
  {
  }

  ~__zz_cib_SmartFunctorBase()
  {
    if (mAbiFunctor.dtor)
      mAbiFunctor.dtor(&mAbiFunctor);
  }
};

template <typename R, typename... Args>
class __zz_cib_SmartFunctor : public __zz_cib_SmartFunctorBase<R, Args...>
{
  const typename __zz_cib_SmartFunctorBase<R, Args...>::AbiFunctor* abiFunctor() const
  {
    return &(this->__zz_cib_SmartFunctorBase<R, Args...>::mAbiFunctor);
  }

public:
  using __zz_cib_SmartFunctorBase<R, Args...>::__zz_cib_SmartFunctorBase;

  R operator()(Args... args) const
  {
    return __zz_cib_FromAbiType<R>(abiFunctor()->proc(abiFunctor(), __zz_cib_ToAbiType<Args>(args)...));
  }
};

template <typename... Args>
class __zz_cib_SmartFunctor<void, Args...> : public __zz_cib_SmartFunctorBase<void, Args...>
{
  const typename __zz_cib_SmartFunctorBase<void, Args...>::AbiFunctor* abiFunctor() const
  {
    return &(this->__zz_cib_SmartFunctorBase<void, Args...>::mAbiFunctor);
  }

public:
  using __zz_cib_SmartFunctorBase<void, Args...>::__zz_cib_SmartFunctorBase;

  void operator()(Args... args) const
  {
    return abiFunctor()->proc(abiFunctor(), __zz_cib_ToAbiType<Args>(args)...);
  }
};

template <typename R, typename... Args>
inline __zz_cib_AbiFunctor<R, Args...> toAbiFunctor(const std::function<R(Args...)>*                   stdFunc,
                                                    typename __zz_cib_AbiFunctor<R, Args...>::FuncDtor dtor)
{
  using AbiFunctor = __zz_cib_AbiFunctor<R, Args...>;
  ///{ Asserts to ensure AbiFunctor is compatible for all compilers
  static_assert(std::is_standard_layout_v<AbiFunctor>);
  static_assert(sizeof(AbiFunctor) == 5 * sizeof(std::uintptr_t));
  ///}

  if ((stdFunc == nullptr) || (*stdFunc == nullptr))
    return AbiFunctor{AbiFunctor::kAbiFunctorVersion, nullptr, nullptr, nullptr};

  const auto data = static_cast<typename AbiFunctor::FuncData>(const_cast<std::function<R(Args...)>*>(stdFunc));
  return AbiFunctor{
    AbiFunctor::kAbiFunctorVersion, data, AbiFunctor_call<R, Args...>, AbiFunctor_copy<R, Args...>, dtor};
}

template <typename R, typename... Args>
inline __zz_cib_AbiFunctor<R, Args...> toAbiFunctor(const std::function<R(Args...)>* stdFunc)
{
  return toAbiFunctor(stdFunc, nullptr);
}

template <typename R, typename... Args>
inline __zz_cib_AbiFunctor<R, Args...> toAbiFunctor(std::function<R(Args...)>&& stdFunc)
{
  return toAbiFunctor(new std::function<R(Args...)>(std::move(stdFunc)), AbiFunctor_destruct<R, Args...>);
}

template <typename R, typename... Args>
inline __zz_cib_AbiFunctor<R, Args...> toAbiFunctor(std::function<R(Args...)>& stdFunc)
{
  return toAbiFunctor(std::move(stdFunc));
}

template <typename R, typename... Args>
inline std::function<R(Args...)> fromAbiFunctor(const __zz_cib_AbiFunctor<R, Args...>& abiFunctor)
{
  if (abiFunctor.proc == nullptr)
    return nullptr;
  return __zz_cib_SmartFunctor<R, Args...>(abiFunctor);
}

template <typename R, typename... Args>
inline __zz_cib_AbiFunctor<R, Args...> __zz_cib_decl AbiFunctor_copy(const __zz_cib_AbiFunctor<R, Args...>* abiFunctor)
{
  return toAbiFunctor(new std::function<R(Args...)>(*AbiFunctor_getStdFunc<R, Args...>(abiFunctor)),
                      AbiFunctor_destruct);
}

} // namespace __zz_cib_
