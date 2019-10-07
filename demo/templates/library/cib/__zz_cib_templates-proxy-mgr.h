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

#pragma once

#include "__zz_cib_templates-proxy.h"
#include "__zz_cib_templates-decl.h"

/**
 * IMPORTANT IMPORTANT IMPORTANT IMPORTANT IMPORTANT
 * 
 * Library that manages proxies itself (reccomended) needs to provide a way
 * to get __zz_cib_proxy_manager corresponding to an object.
 * 
 * One possible way is to simply publicly derive the class from __zz_cib_proxy_manager.
 * This method is preferred for the base classes so that every derived class
 * will automatically be convertable to __zz_cib_proxy_manager.
 * 
 * Other method can be to have a member of type __zz_cib_proxy_manager and then provide an accessor.
 * See __ZZ_CIB_MANAGE_PROXY.
 * 
 * This is the only information of this file usable by library developers.
 * You can safely ignore eveyrthing else in this file.
 */

/**
 * @defn __ZZ_CIB_MANAGE_PROXY
 * An easy way to make a class manage it's proxies.
 */
#define __ZZ_CIB_MANAGE_PROXY()                         \
private:                                                \
    __zz_cib_proxy_manager  __zz_cib_proxyManager;      \
    __zz_cib_proxy_manager* __zz_cib_get_proxy_mgr() {  \
        return &__zz_cib_proxyManager;                  \
    }                                                   \
    friend class __zz_cib_proxy_manager_delegator

namespace __zz_cib_ {

using __zz_cib_client_id        = std::uint32_t;
using __zz_cib_proxy_deleter    = void (__zz_cib_decl *) (__zz_cib_PROXY* proxy);

/**
 * Manages proxy objects and deletes them when original instance on library side is deleted.
 * No method or data member is public because this class should be base class of classes
 * of core library code and we do want the developer should access these methods directly.
 * And also, even the IDE should not give suggestion of methods present here, assuming IDEs
 * hide inaccessible methods from it's suggestion list.
 */
class __zz_cib_proxy_manager
{
protected:
    // All constructors and assignment operators have to be no-op.
    __zz_cib_proxy_manager() {}
    __zz_cib_proxy_manager(const __zz_cib_proxy_manager&) {}
    __zz_cib_proxy_manager(__zz_cib_proxy_manager&&) {}
    __zz_cib_proxy_manager& operator=(const __zz_cib_proxy_manager&) { return *this; }
    __zz_cib_proxy_manager& operator=(__zz_cib_proxy_manager&&) { return *this; }

    // Destructor will ensure all proxies are deleted.
    ~__zz_cib_proxy_manager();

private:
    __zz_cib_PROXY* __zz_cib_find_proxy(__zz_cib_client_id clientId) const;
    void __zz_cib_register_proxy(__zz_cib_client_id clientId, __zz_cib_PROXY* proxy, __zz_cib_proxy_deleter deleter);
    void __zz_cib_unregister_proxy(__zz_cib_client_id clientId);
    friend class __zz_cib_proxy_manager_delegator;
};

/**
 * Delegates to __zz_cib_proxy_manager methods which are only accessible to this class.
 */
class __zz_cib_proxy_manager_delegator
{
public:
    static __zz_cib_PROXY* __zz_cib_find_proxy(__zz_cib_proxy_manager* mgr, __zz_cib_client_id clientId)
    {
        return mgr->__zz_cib_find_proxy(clientId);
    }

    static void __zz_cib_register_proxy(__zz_cib_proxy_manager* mgr, __zz_cib_client_id clientId, __zz_cib_PROXY* proxy, __zz_cib_proxy_deleter deleter)
    {
        mgr->__zz_cib_register_proxy(clientId, proxy, deleter);
    }

    static void __zz_cib_unregister_proxy(__zz_cib_proxy_manager* mgr, __zz_cib_client_id clientId)
    {
        mgr->__zz_cib_unregister_proxy(clientId);
    }

    template<typename T>
    static __zz_cib_PROXY* __zz_cib_find_proxy(T* obj, __zz_cib_client_id clientId)
    {
        __zz_cib_proxy_manager* mgr = obj->__zz_cib_get_proxy_mgr();
        return mgr->__zz_cib_find_proxy(clientId);
    }

    template<typename T>
    static void __zz_cib_register_proxy(T* obj, __zz_cib_client_id clientId, __zz_cib_PROXY* proxy, __zz_cib_proxy_deleter deleter)
    {
        __zz_cib_proxy_manager* mgr = obj->__zz_cib_get_proxy_mgr();
        mgr->__zz_cib_register_proxy(clientId, proxy, deleter);
    }

    template<typename T>
    static void __zz_cib_unregister_proxy(T* obj, __zz_cib_client_id clientId)
    {
        __zz_cib_proxy_manager* mgr = obj->__zz_cib_get_proxy_mgr();
        mgr->__zz_cib_unregister_proxy(clientId);
    }
};

}
