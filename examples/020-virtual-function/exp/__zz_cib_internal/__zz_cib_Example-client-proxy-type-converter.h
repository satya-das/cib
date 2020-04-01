/*
    Generated by cib for ABI compatibility and stability.
    For copyright details refer to the copyright statement of library that contains this file.
*/

#pragma once

#include "__zz_cib_Example-client-default-type-converter.h"

#include "__zz_cib_Example-class-helper.h"
#include "__zz_cib_Example-class-proxy-detection.h"

namespace __zz_cib_ {

template <typename _T>
class __zz_cib_ClientTypeToAbiType<_T, std::enable_if_t<__zz_cib_IsProxyClass_v<_T>, void>>
{
  _T m;

public:
  typename _T::__zz_cib_AbiType convert()
  {
    return __zz_cib_::__zz_cib_Helper<std::remove_cv_t<_T>>::__zz_cib_release_handle(&m);
  }

public:
  __zz_cib_ClientTypeToAbiType(_T&& x)
    : m(std::move(x))
  {
  }
  __zz_cib_ClientTypeToAbiType(_T& x)
    : m(std::move(x))
  {
  }

  operator typename _T::__zz_cib_AbiType()
  {
    return convert();
  }
};

template <typename _T>
class __zz_cib_ClientTypeToAbiType<_T&, std::enable_if_t<__zz_cib_IsProxyClass_v<_T>, void>>
{
  _T& m;

public:
  typename _T::__zz_cib_AbiType convert() const
  {
    return __zz_cib_::__zz_cib_Helper<std::remove_cv_t<_T>>::__zz_cib_get_handle(&m);
  }

public:
  __zz_cib_ClientTypeToAbiType(_T& x)
    : m(x)
  {
  }

  operator typename _T::__zz_cib_AbiType() const
  {
    return convert();
  }
};

template <typename _T>
class __zz_cib_ClientTypeToAbiType<_T&&, std::enable_if_t<__zz_cib_IsProxyClass_v<_T>, void>>
{
  _T& m;

public:
  typename _T::__zz_cib_AbiType convert()
  {
    return __zz_cib_::__zz_cib_Helper<std::remove_cv_t<_T>>::__zz_cib_get_handle(&m);
  }

public:
  __zz_cib_ClientTypeToAbiType(_T&& x)
    : m(x)
  {
  }

  operator typename _T::__zz_cib_AbiType()
  {
    return convert();
  }
};

template <typename _T>
class __zz_cib_ClientTypeToAbiType<_T*, std::enable_if_t<__zz_cib_IsProxyClass_v<_T>, void>>
{
  _T* m;

public:
  typename _T::__zz_cib_AbiType convert() const
  {
    return __zz_cib_::__zz_cib_Helper<std::remove_cv_t<_T>>::__zz_cib_get_handle(m);
  }

public:
  __zz_cib_ClientTypeToAbiType(_T* x)
    : m(x)
  {
  }

  operator typename _T::__zz_cib_AbiType() const
  {
    return convert();
  }
};

/////////////////////////////////////////////////////////////////////////////////////////////

template <typename _T>
class __zz_cib_AbiTypeToClientType<_T&, std::enable_if_t<__zz_cib_IsProxyClass_v<_T>, void>>
{
  __zz_cib_AbiType_t<_T&> m;

public:
  __zz_cib_AbiTypeToClientType(__zz_cib_AbiType_t<_T&> x)
    : m(x)
  {
  }

  _T& convert() const
  {
    return *__zz_cib_Helper<std::remove_cv_t<_T>>::__zz_cib_from_handle(m);
  }

  operator _T&() const
  {
    return convert();
  }
};

template <typename _T>
class __zz_cib_AbiTypeToClientType<_T&&, std::enable_if_t<__zz_cib_IsProxyClass_v<_T>, void>>
{
  __zz_cib_AbiType_t<_T&&> m;

public:
  __zz_cib_AbiTypeToClientType(__zz_cib_AbiType_t<_T&&> x)
    : m(x)
  {
  }

  _T convert() const
  {
    return __zz_cib_Helper<std::remove_cv_t<_T>>::__zz_cib_obj_from_handle(m);
  }

  operator _T() const
  {
    return convert();
  }
};

template <typename _T>
class __zz_cib_AbiTypeToClientType<_T*, std::enable_if_t<__zz_cib_IsProxyClass_v<_T>, void>>
{
  __zz_cib_AbiType_t<_T*> m;

public:
  __zz_cib_AbiTypeToClientType(__zz_cib_AbiType_t<_T*> x)
    : m(x)
  {
  }

  _T* convert() const
  {
    return __zz_cib_Helper<std::remove_cv_t<_T>>::__zz_cib_from_handle(m);
  }

  operator _T*() const
  {
    return convert();
  }
};

template <typename _T>
class __zz_cib_AbiTypeToClientType<_T, std::enable_if_t<__zz_cib_IsConstructibleProxy_v<_T>, void>>
{
  __zz_cib_AbiType_t<_T> m;

public:
  __zz_cib_AbiTypeToClientType(__zz_cib_AbiType_t<_T> x)
    : m(x)
  {
  }

  _T convert() const
  {
    return __zz_cib_Helper<std::remove_cv_t<_T>>::__zz_cib_obj_from_handle(m);
  }

  operator _T() const
  {
    return convert();
  }
};

} // namespace __zz_cib_
