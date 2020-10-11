/*
    Generated by cib for ABI compatibility and stability.
    For copyright details refer to the copyright statement of library that contains this file.
*/

#pragma once

#include "__zz_cib_Example-decl.h"

namespace __zz_cib_ {

template <typename T>
struct __zz_cib_ProxyTypes
{
  class __zz_cib_Opaque;
  using __zz_cib_Proxy   = __zz_cib_Opaque*;
  using __zz_cib_Deleter = void(__zz_cib_decl*)(const __zz_cib_Opaque*);
};

template <>
struct __zz_cib_ProxyTypes<void>
{
  using __zz_cib_Opaque  = void;
  using __zz_cib_Proxy   = __zz_cib_Opaque*;
  using __zz_cib_Deleter = void(__zz_cib_decl*)(const __zz_cib_Opaque*);
};

template <typename T>
using __zz_cib_Opaque_t = typename __zz_cib_ProxyTypes<T>::__zz_cib_Opaque;

template <typename T>
using __zz_cib_Proxy_t = typename __zz_cib_ProxyTypes<T>::__zz_cib_Proxy;

template <typename T>
using __zz_cib_ProxyDeleter_t = typename __zz_cib_ProxyTypes<T>::__zz_cib_Deleter;

} // namespace __zz_cib_
