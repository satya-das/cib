/*
    Generated by cib for ABI compatibility and stability.
    For copyright details refer to the copyright statement of library that contains this file.
*/

#pragma once

#include "__zz_cib_Demo-library-default-type-converter.h"

namespace __zz_cib_ {

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

/////////////////////////////////////////////////////////////////////////////////////////////

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

} // namespace __zz_cib_
