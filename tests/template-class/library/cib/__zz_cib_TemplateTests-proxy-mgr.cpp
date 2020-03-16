/*
    Generated by cib for ABI compatibility and stability.
    For copyright details refer to the copyright statement of library that contains this file.
*/

#include "__zz_cib_TemplateTests-proxy-mgr.h"

#include <map>
#include <memory>

namespace __zz_cib_ {

namespace {

using __zz_cib_ProxyPtr =
  std::unique_ptr<typename __zz_cib_GlobalProxyRepo::OpaqueProxy, typename __zz_cib_GlobalProxyRepo::ProxyDeleter>;
using __zz_cib_ProxyInfo = std::map<__zz_cib_ClientId, __zz_cib_ProxyPtr>;
using __zz_cib_ProxyRepo = std::map<const typename __zz_cib_GlobalProxyRepo::ProxyManager*, __zz_cib_ProxyInfo>;

static __zz_cib_ProxyRepo __zz_cib_proxyRepo;

typename __zz_cib_GlobalProxyRepo::Proxy __zz_cib_FindProxy(const typename __zz_cib_GlobalProxyRepo::ProxyManager* mgr,
                                                            typename __zz_cib_GlobalProxyRepo::ClientId clientId)
{
  auto repoItr = __zz_cib_proxyRepo.find(mgr);
  if (repoItr == __zz_cib_proxyRepo.end())
    return nullptr;
  const auto& repoItem = repoItr->second;
  auto        infoItr  = repoItem.find(clientId);
  if (infoItr == repoItem.end())
    return nullptr;
  return infoItr->second.get();
}

void __zz_cib_RegisterProxy(const typename __zz_cib_GlobalProxyRepo::ProxyManager* mgr,
                            typename __zz_cib_GlobalProxyRepo::ClientId            clientId,
                            typename __zz_cib_GlobalProxyRepo::Proxy               proxy,
                            typename __zz_cib_GlobalProxyRepo::ProxyDeleter        deleter)
{
  __zz_cib_proxyRepo[mgr].emplace(clientId, __zz_cib_ProxyPtr(proxy, deleter));
}

void __zz_cib_UnregisterProxy(const typename __zz_cib_GlobalProxyRepo::ProxyManager* mgr,
                              typename __zz_cib_GlobalProxyRepo::ClientId            clientId)
{
  auto repoItr = __zz_cib_proxyRepo.find(mgr);
  if (repoItr == __zz_cib_proxyRepo.end())
    return;
  auto& repoItem = repoItr->second;
  auto  infoItr  = repoItem.find(clientId);
  if (infoItr == repoItem.end())
    return;
  infoItr->second.release();
  repoItem.erase(infoItr);
}

void __zz_cib_DeleteProxies(const typename __zz_cib_GlobalProxyRepo::ProxyManager* mgr)
{
  auto itr = __zz_cib_proxyRepo.find(mgr);
  if (itr == __zz_cib_proxyRepo.end())
    return;
  auto repo = std::move(itr->second);
  __zz_cib_proxyRepo.erase(itr);
}

static __zz_cib_GlobalProxyRepo __zz_cib_globalProxyRepo = {__zz_cib_FindProxy,
                                                            __zz_cib_RegisterProxy,
                                                            __zz_cib_UnregisterProxy,
                                                            __zz_cib_DeleteProxies};

} // namespace

__zz_cib_GlobalProxyRepo* __zz_cib_GetGlobalProxyRepo()
{
  return &__zz_cib_globalProxyRepo;
}

} // namespace __zz_cib_
