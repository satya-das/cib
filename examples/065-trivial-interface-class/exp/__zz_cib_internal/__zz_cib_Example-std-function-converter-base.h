/*
    Generated by cib for ABI compatibility and stability.
    For copyright details refer to the copyright statement of library that contains this file.
*/

#pragma once

#include <cstdint>
#include <functional>

namespace __zz_cib_ {

/**
 * Converts std::function into c-style, abi stable, and cross component function object.
 */
template <typename R, typename... Args>
class __zz_cib_StdFuncToAbiType
{
public:
  struct AbiFunctor;
  static constexpr std::uintptr_t kLatestAbiFunctorVersion = 0;

  using StdFunc  = std::function<R(Args...)>;
  using AbiFunc  = __zz_cib_AbiType_t<R>(__zz_cib_decl*)(const AbiFunctor*, __zz_cib_AbiType_t<Args>...);
  using FuncData = void*; // This will actually hold StdFunc in opaque manner.
  using FuncDtor = void(__zz_cib_decl*)(const AbiFunctor*);
  using AbiType  = const AbiFunctor*; // This is how AbiFunctor will cross component boundary.

  /// This will cross component boundary and so it has to be in a form
  /// that must be abi compatible for all compilers and stable across releases.
  /* extern "C" */
  struct AbiFunctor
  {
    std::uintptr_t version; //< Probably we will never need to version AbiFunctor. But still ...
    AbiFunc        proc;
    FuncData       data;
    FuncDtor       dtor;
    /// Don't know why but without this destructor segmentation fault occurs
    ~AbiFunctor() {}
    // Any new member should go at the end
    // Any addition here should also be followed by bumping value of version.
  };
  static_assert(std::is_standard_layout_v<AbiFunctor>);
  static_assert(sizeof(AbiFunctor) == 4 * sizeof(std::uintptr_t));

private:
  static AbiFunctor makeAbiFunctor(StdFunc* stdFunc, FuncDtor dtor = nullptr)
  {
    auto abiFunc = [](const AbiFunctor* proc, __zz_cib_AbiType_t<Args>... args) -> __zz_cib_AbiType_t<R> {
      auto& stdFunc = *static_cast<StdFunc*>(proc->data);
      return __zz_cib_ToAbiType<R>(stdFunc(__zz_cib_FromAbiType<Args>(args)...));
    };

    auto data = static_cast<FuncData>(stdFunc);
    return AbiFunctor{kLatestAbiFunctorVersion, abiFunc, data, dtor};
  }

  const AbiFunctor m;

  __zz_cib_StdFuncToAbiType(StdFunc* stdFunc, FuncDtor dtor)
    : m(makeAbiFunctor(stdFunc, dtor))
  {
  }

public:
  AbiType convert() const
  {
    return &m;
  }

public:
  /// Passing std::function by value means that the ownership of copied object
  /// is of the other component. In that case the copied object should be deleted
  /// by the other component and so we will have to define a dtor too.
  __zz_cib_StdFuncToAbiType(StdFunc stdFunc)
    : __zz_cib_StdFuncToAbiType(new StdFunc(std::move(stdFunc)), [](const AbiFunctor* proc) {
      auto* stdFunc = static_cast<StdFunc*>(proc->data);
      delete stdFunc;
    })
  {
  }

  /// Passing std::function by reference means that the lifecycle of object is
  /// guaranteed by the component passing it. So, no dtor is required.
  __zz_cib_StdFuncToAbiType(StdFunc* stdFunc)
    : __zz_cib_StdFuncToAbiType(stdFunc, nullptr)
  {
  }

  operator AbiType() const
  {
    return convert();
  }
};

/////////////////////////////////////////////////////////////////////////////////////////////

template <typename R, typename... Args>
class __zz_cib_AbiTypeToStdFunc
{
public:
  using StdFunc    = typename __zz_cib_StdFuncToAbiType<R, Args...>::StdFunc;
  using AbiFunc    = typename __zz_cib_StdFuncToAbiType<R, Args...>::AbiFunc;
  using FuncData   = typename __zz_cib_StdFuncToAbiType<R, Args...>::FuncData;
  using FuncDtor   = typename __zz_cib_StdFuncToAbiType<R, Args...>::FuncDtor;
  using AbiFunctor = typename __zz_cib_StdFuncToAbiType<R, Args...>::AbiFunctor;
  using AbiType    = typename __zz_cib_StdFuncToAbiType<R, Args...>::AbiType;

private:
  StdFunc m;

  /// Functor responsible for doing cleanup of std::function object
  /// that other component wanted to pass across boundary by value.
  class Functor
  {
    AbiFunctor mAbiFunctor;

    mutable bool mCallDtor{true};

    void disableDtor() const
    {
      mCallDtor = false;
    }

  public:
    Functor(AbiFunctor abiFunctor)
      : mAbiFunctor(abiFunctor)
    {
    }
    Functor(Functor&& rhs)
      : mAbiFunctor(rhs.mAbiFunctor)
    {
      rhs.mAbiFunctor.dtor = nullptr;
    }
    Functor(const Functor& rhs)
      : mAbiFunctor(rhs.mAbiFunctor)
    {
      rhs.disableDtor();
    }
    ~Functor()
    {
      if (mCallDtor && mAbiFunctor.dtor)
        mAbiFunctor.dtor(&mAbiFunctor);
    }

    R operator()(Args... args) const
    {
      return __zz_cib_FromAbiType<R>(mAbiFunctor.proc(&mAbiFunctor, __zz_cib_ToAbiType<Args>(args)...));
    }
  };

public:
  __zz_cib_AbiTypeToStdFunc(const AbiFunctor* abiFunctor)
    : m([abiFunctor](Args... args) -> R {
      return __zz_cib_FromAbiType<R>(abiFunctor.proc(abiFunctor, __zz_cib_ToAbiType<Args>(args)...));
    })
  {
  }

  __zz_cib_AbiTypeToStdFunc(AbiFunctor abiFunctor)
    : m(Functor(abiFunctor))
  {
  }

  StdFunc& getRef()
  {
    return m;
  }

  const StdFunc& getConstRef()
  {
    return m;
  }

  StdFunc getObj()
  {
    return std::move(m);
  }
};

} // namespace __zz_cib_
