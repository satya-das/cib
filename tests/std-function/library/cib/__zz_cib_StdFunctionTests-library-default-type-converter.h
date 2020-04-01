/*
    Generated by cib for ABI compatibility and stability.
    For copyright details refer to the copyright statement of library that contains this file.
*/

#pragma once

#include "__zz_cib_StdFunctionTests-class-types.h"
#include "__zz_cib_StdFunctionTests-decl.h"

#include <type_traits>

namespace __zz_cib_ {

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

template <>
class __zz_cib_LibraryTypeToAbiType<void>
{
public:
  void convert() const {}

  __zz_cib_LibraryTypeToAbiType(void) {}
  operator void() const {}
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

template <typename _T>
class __zz_cib_LibraryTypeToAbiType<_T&, std::enable_if_t<__zz_cib_IsPlainType_v<_T>, void>>
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
class __zz_cib_LibraryTypeToAbiType<_T&&, std::enable_if_t<!std::is_class_v<_T>, void>>
{
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

  operator _T()
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
struct __zz_cib_RValueRef : std::add_rvalue_reference<_T>
{
};

template <typename _T>
struct __zz_cib_RValueRef<_T*>
{
  using type = _T*;
};

template <typename _T>
using __zz_cib_RValueRef_t = typename __zz_cib_RValueRef<_T>::type;

template <typename _T>
using __zz_cib_AbiType_t = decltype((static_cast<__zz_cib_LibraryTypeToAbiType<_T>*>(nullptr))->convert());

template <typename _T>
auto __zz_cib_ToRValueAbiType(__zz_cib_LibraryTypeToAbiType<__zz_cib_RValueRef_t<_T>> obj)
{
  return obj.convert();
}

template <typename _T>
using __zz_cib_RValueAbiType_t =
  decltype((static_cast<__zz_cib_LibraryTypeToAbiType<__zz_cib_RValueRef_t<_T>>*>(nullptr))->convert());

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

template <typename _T>
class __zz_cib_AbiTypeToLibraryType<_T&, std::enable_if_t<__zz_cib_IsPlainType_v<_T>, void>>
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

template <typename _T>
class __zz_cib_AbiTypeToLibraryType<_T&&, std::enable_if_t<__zz_cib_IsPlainType_v<_T>, void>>
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

template <typename _T>
auto __zz_cib_FromAbiType(__zz_cib_AbiType_t<_T> obj)
{
  return __zz_cib_AbiTypeToLibraryType<_T>(obj);
}

template <typename _T>
auto __zz_cib_FromRValueAbiType(__zz_cib_RValueAbiType_t<_T> obj)
{
  return __zz_cib_AbiTypeToLibraryType<__zz_cib_RValueRef_t<_T>>(obj);
}

} // namespace __zz_cib_
