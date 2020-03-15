/*
    Generated by cib for ABI compatibility and stability.
    For copyright details refer to the copyright statement of library that contains this file.
*/

#pragma once

#include "__zz_cib_templates-client-default-type-converter.h"

#include "__zz_cib_templates-smart-ptr-detection.h"

namespace __zz_cib_ {

template <typename _T>
class __zz_cib_ClientTypeToAbiType<_T, std::enable_if_t<__zz_cib_IsSmartPtr_v<_T>, void>>
{
  _T& m;

  using AbiType = decltype(__zz_cib_ClientTypeToAbiType<decltype(__zz_cib_release(m))>(__zz_cib_release(m)).convert());

public:
  auto convert() const
  {
    return __zz_cib_ClientTypeToAbiType<decltype(__zz_cib_release(m))>(__zz_cib_release(m)).convert();
  }

public:
  __zz_cib_ClientTypeToAbiType(_T& x)
    : m(x)
  {
  }
  __zz_cib_ClientTypeToAbiType(_T&& x)
    : m(x)
  {
  }

  operator AbiType() const
  {
    return convert();
  }
};

/////////////////////////////////////////////////////////////////////////////////////////////

template <typename _T>
class __zz_cib_AbiTypeToClientType<_T, std::enable_if_t<__zz_cib_IsSmartPtr_v<_T>, void>>
{
  __zz_cib_AbiType_t<_T> m;

public:
  __zz_cib_AbiTypeToClientType(__zz_cib_AbiType_t<_T> x)
    : m(x)
  {
  }

  operator _T() const
  {
    return __zz_cib_attach<_T>(__zz_cib_AbiTypeToClientType<__zz_cib_SmartPtrUnderlyingType_t<_T>>(m).convert());
  }
};

} // namespace __zz_cib_
