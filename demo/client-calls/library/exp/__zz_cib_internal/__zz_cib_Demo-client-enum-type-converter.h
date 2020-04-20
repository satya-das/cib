/*
    Generated by cib for ABI compatibility and stability.
    For copyright details refer to the copyright statement of library that contains this file.
*/

#pragma once

#include "__zz_cib_Demo-client-default-type-converter.h"

namespace __zz_cib_ {

template <typename _T>
class __zz_cib_ClientTypeToAbiType<_T&, std::enable_if_t<std::is_enum_v<_T>, void>>
{
  _T& m;

public:
  _T* convert() const
  {
    return &m;
  }

public:
  __zz_cib_ClientTypeToAbiType(_T& x)
    : m(x)
  {
  }

  operator _T*() const
  {
    return convert();
  }
};

/////////////////////////////////////////////////////////////////////////////////////////////

template <typename _T>
class __zz_cib_AbiTypeToClientType<_T&, std::enable_if_t<std::is_enum_v<_T>, void>>
{
  __zz_cib_AbiType_t<_T&> m;

public:
  __zz_cib_AbiTypeToClientType(__zz_cib_AbiType_t<_T&> x)
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

} // namespace __zz_cib_
