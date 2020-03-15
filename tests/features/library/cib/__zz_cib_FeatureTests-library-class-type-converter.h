/*
    Generated by cib for ABI compatibility and stability.
    For copyright details refer to the copyright statement of library that contains this file.
*/

#pragma once

#include "__zz_cib_FeatureTests-class-types.h"
#include "__zz_cib_FeatureTests-library-default-type-converter.h"

namespace __zz_cib_ {

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

/////////////////////////////////////////////////////////////////////////////////////////////

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

} // namespace __zz_cib_
