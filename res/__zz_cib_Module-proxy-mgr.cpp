/*
   The MIT License (MIT)

   Copyright (c) 2018 Satya Das

   Permission is hereby granted, free of charge, to any person obtaining a copy of
   this software and associated documentation files (the "Software"), to deal in
   the Software without restriction, including without limitation the rights to
   use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
   the Software, and to permit persons to whom the Software is furnished to do so,
   subject to the following conditions:

   The above copyright notice and this permission notice shall be included in all
   copies or substantial portions of the Software.

   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
   FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
   COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
   IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
   CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#include "__zz_cib_$Module$-proxy-mgr.h"

#include <map>
#include <memory>

namespace __zz_cib_ {

namespace {

using __zz_cib_proxy_ptr    = std::unique_ptr<__zz_cib_PROXY, __zz_cib_proxy_deleter>;
using __zz_cib_proxy_info   = std::map<__zz_cib_client_id, __zz_cib_proxy_ptr>;
using __zz_cib_proxy_repo   = std::map<const __zz_cib_proxy_manager*, __zz_cib_proxy_info>;

static __zz_cib_proxy_repo __zz_cib_proxyRepo;

}

__zz_cib_PROXY* __zz_cib_proxy_manager::__zz_cib_find_proxy(__zz_cib_client_id clientId) const
{
    auto repoItr = __zz_cib_proxyRepo.find(this);
    if (repoItr == __zz_cib_proxyRepo.end())
        return nullptr;
    const auto& repoItem = repoItr->second;
    auto infoItr = repoItem.find(clientId);
    if (infoItr == repoItem.end())
        return nullptr;
    return infoItr->second.get();
}

void __zz_cib_proxy_manager::__zz_cib_register_proxy(__zz_cib_client_id clientId, __zz_cib_PROXY* proxy, __zz_cib_proxy_deleter deleter)
{
    __zz_cib_proxyRepo[this].emplace(clientId, __zz_cib_proxy_ptr(proxy, deleter));
}

void __zz_cib_proxy_manager::__zz_cib_unregister_proxy(__zz_cib_client_id clientId)
{
    auto repoItr = __zz_cib_proxyRepo.find(this);
    if (repoItr == __zz_cib_proxyRepo.end())
        return;
    auto& repoItem = repoItr->second;
    auto infoItr = repoItem.find(clientId);
    if (infoItr == repoItem.end())
        return;
    infoItr->second.release();
    repoItem.erase(infoItr);
}

__zz_cib_proxy_manager::~__zz_cib_proxy_manager()
{
    __zz_cib_proxyRepo.erase(this);
}

}
