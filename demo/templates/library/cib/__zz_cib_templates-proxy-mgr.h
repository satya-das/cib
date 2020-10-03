/*
    Generated by cib for ABI compatibility and stability.
    For copyright details refer to the copyright statement of library that contains this file.
*/

#pragma once

#include "__zz_cib_templates-decl.h"

#include <cstdint>

/**
 * IMPORTANT IMPORTANT IMPORTANT IMPORTANT IMPORTANT
 *
 * Library that manages proxies itself (recommended) needs to provide a way
 * to get __zz_cib_ProxyManager corresponding to an object.
 *
 * One possible way is to simply publicly derive the class from __zz_cib_ProxyManager.
 * This method is preferred for the base classes so that every derived class
 * will automatically be convertable to __zz_cib_ProxyManager.
 *
 * Other method can be to have a member of type __zz_cib_ProxyManager and then provide an accessor.
 * See __ZZ_CIB_MANAGE_PROXY.
 *
 * This is the only information of this file usable by library developers.
 * You can safely ignore everything else in this file.
 */

/**
 * @defn __ZZ_CIB_MANAGE_PROXY
 * An easy way to make a class manage it's proxies.
 */
#define __ZZ_CIB_MANAGE_PROXY(className)                                                                               \
private:                                                                                                               \
  using ProxyManager = __zz_cib_ProxyManager<className>;                                                               \
  ProxyManager  __zz_cib_proxyManager;                                                                                 \
  ProxyManager* __zz_cib_GetProxyMgr()                                                                                 \
  {                                                                                                                    \
    return &__zz_cib_proxyManager;                                                                                     \
  }                                                                                                                    \
  friend class __zz_cib_ProxyManagerDelegator

namespace __zz_cib_ {

using __zz_cib_ClientId = std::uint32_t;

struct __zz_cib_GlobalProxyRepo
{
  class ProxyManager;
  class OpaqueProxy;

  using ClientId     = __zz_cib_ClientId;
  using Proxy        = OpaqueProxy*;
  using ProxyDeleter = void(__zz_cib_decl*)(Proxy proxy);

  // clang-format off
  Proxy (*findProxy)      (const ProxyManager*, __zz_cib_ClientId);
  void  (*registerProxy)  (const ProxyManager*, __zz_cib_ClientId, Proxy, ProxyDeleter);
  void  (*unregisterProxy)(const ProxyManager*, __zz_cib_ClientId);
  void  (*deleteProxies)  (const ProxyManager*);
  // clang-format on
};

__zz_cib_GlobalProxyRepo* __zz_cib_GetGlobalProxyRepo();

template <typename _ProxyManager>
struct __zz_cib_ProxyRepo
{
  using ProxyManager = _ProxyManager;

  using Proxy        = typename _ProxyManager::__zz_cib_Proxy;
  using ProxyDeleter = typename _ProxyManager::__zz_cib_ProxyDeleter;

  // clang-format off
  Proxy (*findProxy)      (const ProxyManager*, __zz_cib_ClientId);
  void  (*registerProxy)  (const ProxyManager*, __zz_cib_ClientId, Proxy, ProxyDeleter);
  void  (*unregisterProxy)(const ProxyManager*, __zz_cib_ClientId);
  void  (*deleteProxies)  (const ProxyManager*);
  // clang-format on
};

/**
 * Manages proxy objects and deletes them when original instance on library side is deleted.
 */
template <typename T>
class __zz_cib_ProxyManager
{
public:
  class __zz_cib_OpaqueProxy;
  using __zz_cib_Proxy        = __zz_cib_OpaqueProxy*;
  using __zz_cib_ProxyDeleter = void(__zz_cib_decl*)(__zz_cib_Proxy* proxy);

protected:
  // All constructors and assignment operators have to be no-op.
  __zz_cib_ProxyManager() {}
  __zz_cib_ProxyManager(const __zz_cib_ProxyManager&) {}
  __zz_cib_ProxyManager(__zz_cib_ProxyManager&&) {}
  __zz_cib_ProxyManager& operator=(const __zz_cib_ProxyManager&)
  {
    return *this;
  }
  __zz_cib_ProxyManager& operator=(__zz_cib_ProxyManager&&)
  {
    return *this;
  }

  // Destructor will ensure all proxies are deleted.
  ~__zz_cib_ProxyManager()
  {
    __zz_cib_getProxyRepo()->deleteProxies(this);
  }

private:
  static __zz_cib_ProxyRepo<__zz_cib_ProxyManager>* __zz_cib_getProxyRepo()
  {
    static_assert(sizeof(__zz_cib_GlobalProxyRepo) == sizeof(__zz_cib_ProxyRepo<__zz_cib_ProxyManager>));
    return reinterpret_cast<__zz_cib_ProxyRepo<__zz_cib_ProxyManager>*>(__zz_cib_GetGlobalProxyRepo());
  }

  __zz_cib_Proxy __zz_cib_findProxy(__zz_cib_ClientId clientId) const
  {
    return __zz_cib_getProxyRepo()->findProxy(this, clientId);
  }
  void __zz_cib_registerProxy(__zz_cib_ClientId clientId, __zz_cib_Proxy proxy, __zz_cib_ProxyDeleter deleter)
  {
    __zz_cib_getProxyRepo()->registerProxy(this, clientId, proxy, deleter);
  }
  void __zz_cib_unregisterProxy(__zz_cib_ClientId clientId)
  {
    __zz_cib_getProxyRepo()->unregisterProxy(this, clientId);
  }
  friend class __zz_cib_ProxyManagerDelegator;
};

/**
 * Delegates to __zz_cib_ProxyManager methods which are only accessible to this class.
 */
class __zz_cib_ProxyManagerDelegator
{
public:
  template <typename _ProxyManager>
  static typename _ProxyManager::__zz_cib_Proxy __zz_cib_findProxy(_ProxyManager* mgr, __zz_cib_ClientId clientId)
  {
    return mgr->__zz_cib_findProxy(clientId);
  }

  template <typename _ProxyManager>
  static void __zz_cib_registerProxy(_ProxyManager*                                mgr,
                                     __zz_cib_ClientId                             clientId,
                                     typename _ProxyManager::__zz_cib_Proxy        proxy,
                                     typename _ProxyManager::__zz_cib_ProxyDeleter deleter)
  {
    mgr->__zz_cib_registerProxy(clientId, proxy, deleter);
  }

  template <typename _ProxyManager>
  static void __zz_cib_unregisterProxy(_ProxyManager* mgr, __zz_cib_ClientId clientId)
  {
    mgr->__zz_cib_unregisterProxy(clientId);
  }

  // template <typename T>
  // static __zz_cib_Proxy __zz_cib_findProxy(T* obj, __zz_cib_ClientId clientId)
  // {
  //   __zz_cib_ProxyManager* mgr = obj->__zz_cib_GetProxyMgr();
  //   return mgr->__zz_cib_findProxy(clientId);
  // }

  // template <typename T>
  // static void __zz_cib_registerProxy(T*                    obj,
  //                                    __zz_cib_ClientId     clientId,
  //                                    __zz_cib_Proxy       proxy,
  //                                    __zz_cib_ProxyDeleter deleter)
  // {
  //   __zz_cib_ProxyManager* mgr = obj->__zz_cib_GetProxyMgr();
  //   mgr->__zz_cib_registerProxy(clientId, proxy, deleter);
  // }

  // template <typename T>
  // static void __zz_cib_unregisterProxy(T* obj, __zz_cib_ClientId clientId)
  // {
  //   __zz_cib_ProxyManager* mgr = obj->__zz_cib_GetProxyMgr();
  //   mgr->__zz_cib_unregisterProxy(clientId);
  // }
};

} // namespace __zz_cib_
