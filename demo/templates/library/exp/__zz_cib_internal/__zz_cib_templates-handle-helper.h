#pragma once

#include "__zz_cib_templates-local-proxy-mgr.h"
#include "__zz_cib_templates-handle.h"

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
template <typename _ProxyClass, template<typename> class _ProxyMgr, typename _Helper>
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
    auto&  dis   = _Helper::instance();
    auto* proxy = dis.proxyMgr.findProxy(h);
    if (proxy)
      return proxy;
    return _Helper::__zz_cib_create_proxy(h);
  }
  static void __zz_cib_add_proxy(_ProxyClass* __zz_cib_obj, __zz_cib_HANDLE* h)
  {
    auto& dis = _Helper::instance();
    dis.proxyMgr.addProxy(__zz_cib_obj, h);
  }
  static void __zz_cib_remove_proxy(__zz_cib_HANDLE* h)
  {
    auto& dis = _Helper::instance();
    dis.proxyMgr.removeProxy(h);
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

private:
  _ProxyMgr<_ProxyClass> proxyMgr;
};

} // namespace __zz_cib_
