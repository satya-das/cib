/*
    Generated by cib for ABI compatibility and stability.
    For copyright details refer to the copyright statement of library that contains this file.
*/

#include "__zz_cib_Example-proxy-mgr.h"

#include <map>
#include <memory>

namespace __zz_cib_ {

namespace {

using __zz_cib_ProxyPtr =
  std::unique_ptr<__zz_cib_GlobalProxyRepo::GenericOpaqueType, __zz_cib_GlobalProxyRepo::GenericProxyDeleter>;
using __zz_cib_ProxyInfo = std::map<__zz_cib_GlobalProxyRepo::GenericProxy, __zz_cib_ProxyPtr>;
using __zz_cib_ProxyRepo = std::map<__zz_cib_GlobalProxyRepo::ClassKey, __zz_cib_ProxyInfo>;

static __zz_cib_ProxyRepo __zz_cib_proxyRepo;

static __zz_cib_GlobalProxyRepo __zz_cib_globalProxyRepo;
static bool                     __zz_cib_globalProxyRepoExists = true;

} // namespace

__zz_cib_GlobalProxyRepo* __zz_cib_GlobalProxyRepo::__zz_cib_GetGlobalProxyRepo()
{
  return &__zz_cib_globalProxyRepo;
}

__zz_cib_GlobalProxyRepo::~__zz_cib_GlobalProxyRepo()
{
  __zz_cib_globalProxyRepoExists = false;
}

void __zz_cib_GlobalProxyRepo::RegisterProxy(ClassKey classKey, GenericProxy proxy, GenericProxyDeleter deleter)
{
  __zz_cib_proxyRepo[classKey].emplace(proxy, __zz_cib_ProxyPtr(proxy, deleter));
}

void __zz_cib_GlobalProxyRepo::DeleteProxies(ClassKey classKey)
{
  auto itr = __zz_cib_proxyRepo.find(classKey);
  if (itr == __zz_cib_proxyRepo.end())
    return;
  __zz_cib_proxyRepo.erase(itr);
}

__zz_cib_ProxyManager::~__zz_cib_ProxyManager()
{
  if (__zz_cib_globalProxyRepoExists)
    __zz_cib_GlobalProxyRepo::__zz_cib_GetGlobalProxyRepo()->DeleteProxies(this);
}

} // namespace __zz_cib_
