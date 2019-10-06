#pragma once

#include "__zz_cib_Example-handle.h"

namespace __zz_cib_ {

template <typename _ProxyClass, typename _Helper>
class __zz_cib_ObjectCompanion
{
  _ProxyClass& mObj;

public:
  __zz_cib_ObjectCompanion(_ProxyClass& obj)
    : mObj(obj)
  {
  }
  operator __zz_cib_HANDLE*() const
  {
    return _Helper::__zz_cib_get_handle(&mObj);
  }
};

template <typename _ProxyClass, typename _Helper>
class __zz_cib_ObjectCompanion<_ProxyClass*, _Helper>
{
  _ProxyClass* mObj;

public:
  __zz_cib_ObjectCompanion(_ProxyClass* obj)
    : mObj(obj)
  {
  }
  operator __zz_cib_HANDLE*() const
  {
    return mObj ? _Helper::__zz_cib_get_handle(mObj) : nullptr;
  }
};

template <typename _ProxyClass, typename _Helper>
class __zz_cib_ObjectCompanion<_ProxyClass**, _Helper>
{
  _ProxyClass**    mObj;
  __zz_cib_HANDLE* mHandle{nullptr};

public:
  __zz_cib_ObjectCompanion(_ProxyClass** obj)
    : mObj(obj)
  {
  }
  operator __zz_cib_HANDLE**()
  {
    return mObj ? &mHandle : nullptr;
  }
  ~__zz_cib_ObjectCompanion()
  {
    if (mObj)
      *mObj = mHandle ? _Helper::__zz_cib_from_handle(mHandle) : nullptr;
  }
};

template <typename _ProxyClass, typename _Helper>
class __zz_cib_ObjectCompanion<const _ProxyClass**, _Helper>
{
  const _ProxyClass**    mObj;
  const __zz_cib_HANDLE* mHandle{nullptr};

public:
  __zz_cib_ObjectCompanion(const _ProxyClass** obj)
    : mObj(obj)
  {
  }
  operator const __zz_cib_HANDLE**()
  {
    return mObj ? &mHandle : nullptr;
  }
  ~__zz_cib_ObjectCompanion()
  {
    if (mObj)
      *mObj = mHandle ? _Helper::__zz_cib_from_handle(mHandle) : nullptr;
  }
};

template <typename _ProxyClass, typename _Helper>
class __zz_cib_ObjectCompanion<_ProxyClass* const*, _Helper>
{
  _ProxyClass* const* mObj;

public:
  __zz_cib_ObjectCompanion(_ProxyClass* const* obj)
    : mObj(obj)
  {
  }
  operator __zz_cib_HANDLE* const*()
  {
    return mObj ? &_Helper::__zz_cib_get_handle(*mObj) : nullptr;
  }
};

//! Helps converting proxy to handle and vice versa.
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
    return const_cast<const _ProxyClass*>(__zz_cib_from_handle(const_cast<__zz_cib_HANDLE*>(h)));
  }
  static const _ProxyClass& __zz_cib_from_handle(const __zz_cib_HANDLE& h)
  {
    return *__zz_cib_from_handle(const_cast<__zz_cib_HANDLE*>(&h));
  }
  static _ProxyClass* __zz_cib_from_handle(__zz_cib_HANDLE* h)
  {
    return _Helper::__zz_cib_get_or_create_proxy(h);
  }
  template <typename T>
  static __zz_cib_ObjectCompanion<const T&, _Helper> __zz_cib_handle(const T& __zz_cib_obj)
  {
    return __zz_cib_ObjectCompanion<const T&, _Helper>(__zz_cib_obj);
  }
  template <typename T>
  static __zz_cib_ObjectCompanion<T*, _Helper> __zz_cib_handle(T* __zz_cib_obj)
  {
    return __zz_cib_ObjectCompanion<T*, _Helper>(__zz_cib_obj);
  }
};

} // namespace __zz_cib_
