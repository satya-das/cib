#pragma once

#include "__zz_cib_Graphics-handle.h"

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
  static __zz_cib_HANDLE* __zz_cib_handle(const _ProxyClass* __zz_cib_obj)
  {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_HANDLE* __zz_cib_handle(const _ProxyClass& __zz_cib_obj)
  {
    return __zz_cib_obj.__zz_cib_h_;
  }
  //! __zz_cib_obj_from_handle() should not be used for abstract class
  template <typename _ObjType = _ProxyClass>
  static _ObjType __zz_cib_obj_from_handle(__zz_cib_HANDLE* h)
  {
    return _ObjType(h);
  }
};

} // namespace __zz_cib_
