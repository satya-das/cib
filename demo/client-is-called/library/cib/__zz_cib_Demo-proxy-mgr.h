/*
    Generated by cib for ABI compatibility and stability.
    For copyright details refer to the copyright statement of library that contains this file.
*/

#pragma once

#include "__zz_cib_Demo-proxy-types.h"

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
 * See __ZZ_CIB_MANAGE_PROXIES.
 *
 * This is the only information of this file usable by library developers.
 * You can safely ignore everything else in this file.
 */

/**
 * @defn __ZZ_CIB_MANAGE_PROXIES
 * An easy way to make a class manage it's proxies.
 */
#define __ZZ_CIB_MANAGE_PROXIES(className)                                                                             \
private:                                                                                                               \
  friend class __zz_cib_::__zz_cib_ProxyManagerDelegator;                                                              \
  using __zz_cib_ProxyManager = __zz_cib_::__zz_cib_ProxyManager<className>;                                           \
  __zz_cib_ProxyManager  __zz_cib_proxyManager;                                                                        \
  __zz_cib_ProxyManager* __zz_cib_GetProxyMgr()                                                                        \
  {                                                                                                                    \
    return &(__zz_cib_proxyManager);                                                                                   \
  }

/////////////////////// IMPLEMENTATION DETAILS //////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////

namespace __zz_cib_ {

class __zz_cib_ProxyManagerBase;

class __zz_cib_GlobalProxyRepo
{
public:
  using ClassKey            = const void*;
  using GenericOpaqueType   = __zz_cib_Opaque_t<void>;
  using GenericProxy        = __zz_cib_Proxy_t<void>;
  using GenericProxyDeleter = __zz_cib_ProxyDeleter_t<void>;

  void RegisterProxy(ClassKey objPtr, GenericProxy, GenericProxyDeleter);
  void UnregisterProxy(ClassKey objPtr, GenericProxy proxy);
  void DeleteProxies(ClassKey objPtr);

private:
  static __zz_cib_GlobalProxyRepo* __zz_cib_GetGlobalProxyRepo();
  friend class __zz_cib_ProxyManagerBase;
};

class __zz_cib_ProxyManagerBase
{
protected:
  static __zz_cib_GlobalProxyRepo* __zz_cib_GetGlobalProxyRepo()
  {
    return __zz_cib_GlobalProxyRepo::__zz_cib_GetGlobalProxyRepo();
  }
};

/**
 * Manages proxy objects and deletes them when original instance on library side is deleted.
 */
template <typename T>
class __zz_cib_ProxyManager : private __zz_cib_ProxyManagerBase
{
public:
  using __zz_cib_Proxy        = __zz_cib_Proxy_t<T>;
  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<T>;

  __zz_cib_ProxyManager<T>* __zz_cib_GetProxyMgr()
  {
    return this;
  }

  // Destructor will ensure all proxies are deleted.
  ~__zz_cib_ProxyManager()
  {
    __zz_cib_GetGlobalProxyRepo()->DeleteProxies(this);
  }

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

private:
  void __zz_cib_RegisterProxy(__zz_cib_Proxy proxy, __zz_cib_ProxyDeleter deleter)
  {
    __zz_cib_GetGlobalProxyRepo()->RegisterProxy(
      this, proxy, reinterpret_cast<__zz_cib_GlobalProxyRepo::GenericProxyDeleter>(deleter));
  }
  void __zz_cib_UnregisterProxy(__zz_cib_Proxy proxy)
  {
    __zz_cib_GetGlobalProxyRepo()->UnregisterProxy(this, proxy);
  }

  friend class __zz_cib_ProxyManagerDelegator;
};

/**
 * Delegates to __zz_cib_ProxyManager methods which are only accessible to this class.
 */
class __zz_cib_ProxyManagerDelegator
{
public:
  template <typename T>
  static void __zz_cib_RegisterProxy(T* obj, __zz_cib_Proxy_t<T> proxy, __zz_cib_ProxyDeleter_t<T> deleter)
  {
    auto* mgr = obj->__zz_cib_GetProxyMgr();
    mgr->__zz_cib_RegisterProxy(proxy, deleter);
  }

  template <typename T>
  static void __zz_cib_UnregisterProxy(T* obj, __zz_cib_Proxy_t<T> proxy)
  {
    auto* mgr = obj->__zz_cib_GetProxyMgr();
    mgr->__zz_cib_UnregisterProxy(proxy);
  }
};

} // namespace __zz_cib_
