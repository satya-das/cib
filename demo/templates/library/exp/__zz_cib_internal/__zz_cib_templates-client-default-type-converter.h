/*
    Generated by cib for ABI compatibility and stability.
    For copyright details refer to the copyright statement of library that contains this file.
*/

#pragma once

#include "__zz_cib_templates-class-proxy-detection.h"

#include <type_traits>

namespace __zz_cib_ {

/**
 * Primary template __zz_cib_ClientTypeToAbiType
 */
template <typename _T, typename = void>
class __zz_cib_ClientTypeToAbiType
{
  static_assert(!std::is_class_v<_T>);
  _T m;

public:
  _T convert() const
  {
    return m;
  }

public:
  __zz_cib_ClientTypeToAbiType(_T x)
    : m(x)
  {
  }

  operator _T() const
  {
    return convert();
  }
};

template <>
class __zz_cib_ClientTypeToAbiType<void>
{
public:
  void convert() const {}

  __zz_cib_ClientTypeToAbiType(void) {}
  operator void() const {}
};

template <typename _T>
class __zz_cib_ClientTypeToAbiType<_T&, std::enable_if_t<!__zz_cib_IsProxyClass_v<_T>, void>>
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

template <typename _T>
auto __zz_cib_ToAbiType(__zz_cib_ClientTypeToAbiType<_T> obj)
{
  return obj.convert();
}

template <typename _T>
using __zz_cib_AbiType_t = decltype((static_cast<__zz_cib_ClientTypeToAbiType<_T>*>(nullptr))->convert());

/////////////////////////////////////////////////////////////////////////////////////////////

/**
 * Primary template __zz_cib_AbiTypeToClientType
 */
template <typename _T, typename = void>
class __zz_cib_AbiTypeToClientType
{
  static_assert(!std::is_class_v<_T>);
  __zz_cib_AbiType_t<_T> m;

public:
  __zz_cib_AbiTypeToClientType(__zz_cib_AbiType_t<_T> x)
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

template <typename _T>
class __zz_cib_AbiTypeToClientType<_T&, std::enable_if_t<!__zz_cib_IsProxyClass_v<_T>, void>>
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

/////////////////////////////////////////////////////////////////////////////////////////////

template <typename _T>
auto __zz_cib_FromAbiType(__zz_cib_AbiType_t<_T> obj)
{
  return __zz_cib_AbiTypeToClientType<_T>(obj);
}

} // namespace __zz_cib_