#pragma once

#include "__zz_cib_Example-handle.h"

namespace __zz_cib_ {

//! Helps converting proxy to handle and vice versa.
//! This actually a variant of CRTP.
template <typename _ProxyClass, typename _Helper>
class __zz_cib_HandleHelper
{
public:
  static _ProxyClass& __zz_cib_from_handle(__zz_cib_HANDLE& h)
  {
    return *__zz_cib_from_handle(&h);
  }
  static const _ProxyClass* __zz_cib_from_handle(const __zz_cib_HANDLE* h)
  {
    return __zz_cib_from_handle(const_cast<__zz_cib_HANDLE*>(h));
  }
  static const _ProxyClass& __zz_cib_from_handle(const __zz_cib_HANDLE& h)
  {
    return *__zz_cib_from_handle(const_cast<__zz_cib_HANDLE*>(&h));
  }
  static _ProxyClass* __zz_cib_from_handle(__zz_cib_HANDLE* h)
  {
    return _Helper::__zz_cib_create_proxy(h);
  }
};

} // namespace __zz_cib_
