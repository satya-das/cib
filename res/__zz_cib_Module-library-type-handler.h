/*
    Generated by cib for ABI compatibility and stability.
    For copyright details refer to the copyright statement of library that contains this file.
*/

#pragma once

#include "__zz_cib_Module-class-types.h"
#include "__zz_cib_Module-decl.h"

#include <type_traits>

namespace __zz_cib_ {

/////////////////////////////////////////////////////////////////////////////////////////////

/**
 * Primary template __zz_cib_LibraryTypeToAbiType
 */
template <typename _T, typename = void>
class __zz_cib_LibraryTypeToAbiType
{
  static_assert(!std::is_class_v<_T>);
  _T m;

public:
  _T convert()
  {
    return std::move(m);
  }

public:
  __zz_cib_LibraryTypeToAbiType(_T x)
    : m(std::move(x))
  {
  }

  operator _T() const
  {
    return convert();
  }
};

template <typename _T, int _N>
class __zz_cib_LibraryTypeToAbiType<_T[_N]>
{
  static_assert(!std::is_class_v<_T>);
  _T* m;

public:
  _T* convert()
  {
    return m;
  }

public:
  __zz_cib_LibraryTypeToAbiType(_T x[_N])
    : m(x)
  {
  }

  operator _T*() const
  {
    return convert();
  }
};

template <>
class __zz_cib_LibraryTypeToAbiType<void>
{
public:
  void convert() const {}

  __zz_cib_LibraryTypeToAbiType(void) {}
  operator void() const {}
};

template <typename _T>
class __zz_cib_LibraryTypeToAbiType<_T&, std::enable_if_t<!__zz_cib_IsSmartPtr_v<_T>, void>>
{
  _T& m;

public:
  _T* convert() const
  {
    return &m;
  }

public:
  __zz_cib_LibraryTypeToAbiType(_T& x)
    : m(x)
  {
  }

  operator _T*() const
  {
    return convert();
  }
};

template <typename _T>
class __zz_cib_LibraryTypeToAbiType<_T, std::enable_if_t<__zz_cib_IsConstructibleClass_v<_T>, void>>
{
  _T m;

public:
  _T* convert() const
  {
    return new _T(std::move(m));
  }

public:
  __zz_cib_LibraryTypeToAbiType(_T x)
    : m(std::move(x))
  {
  }

  operator _T*() const
  {
    return convert();
  }
};

template <typename _T>
class __zz_cib_LibraryTypeToAbiType<_T&&, std::enable_if_t<__zz_cib_IsConstructibleClass_v<_T>, void>>
{
  _T m;

public:
  _T* convert() const
  {
    return new _T(std::move(m));
  }

public:
  __zz_cib_LibraryTypeToAbiType(_T&& x)
    : m(std::move(x))
  {
  }

  operator _T*() const
  {
    return convert();
  }
};

template <typename _T>
class __zz_cib_LibraryTypeToAbiType<_T, std::enable_if_t<__zz_cib_IsSmartPtr_v<_T>, void>>
{
  _T& m;

public:
  auto convert() const
  {
    return __zz_cib_release(m);
  }

public:
  __zz_cib_LibraryTypeToAbiType(_T&& x)
    : m(x)
  {
  }

  operator decltype(((__zz_cib_LibraryTypeToAbiType<_T>*) (nullptr))->convert())() const
  {
    return convert();
  }
};

template <typename _T>
auto __zz_cib_ToAbiType(__zz_cib_LibraryTypeToAbiType<_T> obj)
{
  return obj.convert();
}

template <typename _T>
using __zz_cib_AbiType_t = decltype((static_cast<__zz_cib_LibraryTypeToAbiType<_T>*>(nullptr))->convert());

/////////////////////////////////////////////////////////////////////////////////////////////

/**
 * Primary template __zz_cib_AbiTypeToLibraryType
 */
template <typename _T, typename = void>
class __zz_cib_AbiTypeToLibraryType
{
  static_assert(!std::is_class_v<_T>);
  __zz_cib_AbiType_t<_T> m;

public:
  __zz_cib_AbiTypeToLibraryType(__zz_cib_AbiType_t<_T> x)
    : m(x)
  {
  }

  _T convert() const
  {
    return m;
  }

  operator _T() const
  {
    return convert();
  }
};

template <typename _T, int _N>
class __zz_cib_AbiTypeToLibraryType<_T[_N]>
{
  static_assert(!std::is_class_v<_T>);
  _T* m;

public:
  _T* convert() const
  {
    return m;
  }

public:
  __zz_cib_AbiTypeToLibraryType(_T* x)
    : m(x)
  {
  }

  operator _T*() const
  {
    return convert();
  }
};

// Specialization for __zz_cib_AbiTypeToLibraryType<T&>
template <typename _T>
class __zz_cib_AbiTypeToLibraryType<_T&, std::enable_if_t<!__zz_cib_IsSmartPtr_v<_T>, void>>
{
  static_assert(std::is_same_v<_T*, __zz_cib_AbiType_t<_T&>>);

  __zz_cib_AbiType_t<_T&> m;

public:
  __zz_cib_AbiTypeToLibraryType(__zz_cib_AbiType_t<_T&> x)
    : m(x)
  {
  }

  _T& convert() const
  {
    return *m;
  }

  operator _T&() const
  {
    return convert();
  }
};

// Specialization for __zz_cib_AbiTypeToLibraryType<T&&>
template <typename _T>
class __zz_cib_AbiTypeToLibraryType<_T&&, std::enable_if_t<!__zz_cib_IsSmartPtr_v<_T>, void>>
{
  static_assert(std::is_same_v<_T*, __zz_cib_AbiType_t<_T&&>>);

  __zz_cib_AbiType_t<_T&&> m;

public:
  __zz_cib_AbiTypeToLibraryType(__zz_cib_AbiType_t<_T&&> x)
    : m(x)
  {
  }

  _T&& convert()
  {
    return std::move(*m);
  }

  operator _T &&()
  {
    return convert();
  }
};

// Specialization for __zz_cib_AbiTypeToLibraryType<ConstructibleClass>
template <typename _T>
class __zz_cib_AbiTypeToLibraryType<_T, std::enable_if_t<__zz_cib_IsConstructibleClass_v<_T>, void>>
{
  static_assert(std::is_same_v<_T*, __zz_cib_AbiType_t<_T>>);

  __zz_cib_AbiType_t<_T> m;

public:
  __zz_cib_AbiTypeToLibraryType(__zz_cib_AbiType_t<_T> x)
    : m(x)
  {
  }

  operator _T() const
  {
    return std::move(*m);
  }

  ~__zz_cib_AbiTypeToLibraryType()
  {
    delete m;
  }
};

// Specialization for __zz_cib_AbiTypeToLibraryType<Class*>
template <typename _T>
class __zz_cib_AbiTypeToLibraryType<_T*, std::enable_if_t<std::is_class_v<_T>, void>>
{
  static_assert(std::is_same_v<_T*, __zz_cib_AbiType_t<_T*>>);

  __zz_cib_AbiType_t<_T*> m;

public:
  __zz_cib_AbiTypeToLibraryType(__zz_cib_AbiType_t<_T*> x)
    : m(x)
  {
  }

  _T* convert() const
  {
    return m;
  }

  operator _T*() const
  {
    return convert();
  }
};

// Specialization for __zz_cib_AbiTypeToLibraryType<SmartPtr>
template <typename _T>
class __zz_cib_AbiTypeToLibraryType<_T, std::enable_if_t<__zz_cib_IsSmartPtr_v<_T>, void>>
{
  __zz_cib_AbiType_t<_T> m;

public:
  __zz_cib_AbiTypeToLibraryType(__zz_cib_AbiType_t<_T> x)
    : m(x)
  {
  }

  operator _T() const
  {
    return __zz_cib_attach<_T>(__zz_cib_AbiTypeToLibraryType<__zz_cib_SmartPtrUnderlyingType_t<_T>>(m).convert());
  }
};

template <typename _T>
auto __zz_cib_FromAbiType(__zz_cib_AbiType_t<_T> obj)
{
  return __zz_cib_AbiTypeToLibraryType<_T>(obj);
}

/////////////////////////////////////////////////////////////////////////////////////////////

template <typename R, typename... Args>
class __zz_cib_LibraryTypeToAbiType<std::function<R(Args...)>>
{
  std::function<R(Args...)>& m;

public:
  using Func = std::function<R(Args...)>;
  using Proc = R(__zz_cib_decl*)(void*, __zz_cib_AbiType_t<Args>...);
  struct ProcData
  {
    Proc  proc;
    void* data;
  };

  ProcData convert() const
  {
    auto proc = [](void* data, Args... args) -> R {
      auto& func = *static_cast<Func*>(data);
      return func(args...);
    };

    void* data = static_cast<void*>(&m);

    return ProcData{proc, data};
  }

public:
  __zz_cib_LibraryTypeToAbiType(std::function<R(Args...)>& x)
    : m(x)
  {
  }

  operator ProcData() const
  {
    return convert();
  }
};

template <typename R, typename... Args>
class __zz_cib_AbiTypeToLibraryType<std::function<R(Args...)>>
{
public:
  using Func = std::function<R(Args...)>;
  using Proc = R(__zz_cib_decl*)(void*, __zz_cib_AbiType_t<Args>...);
  struct ProcData
  {
    Proc  proc;
    void* data;
  };

private:
  ProcData m;

public:
  __zz_cib_AbiTypeToLibraryType(const __zz_cib_AbiType_t<Func>& x)
    : m{x.proc, x.data}
  {
  }

  Func convert() const
  {
    return [m = this->m](Args... args) -> R { return m.proc(m.data, __zz_cib_ToAbiType<Args>(args)...); };
  }

  operator Func() const
  {
    return convert();
  }
};

} // namespace __zz_cib_
