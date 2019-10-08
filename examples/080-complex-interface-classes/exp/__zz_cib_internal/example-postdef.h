#pragma once

#include "__zz_cib_internal/__zz_cib_Example-def.h"
#include "__zz_cib_internal/__zz_cib_Example-ids.h"
#include "__zz_cib_internal/__zz_cib_Example-local-proxy-mgr.h"
#include "__zz_cib_internal/__zz_cib_Example-null-proxy-mgr.h"
#include "__zz_cib_internal/__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_internal/__zz_cib_Example-handle-helper.h"

namespace __zz_cib_ { namespace Interface1 {
class __zz_cib_Helper : public __zz_cib_MethodTableHelper
  , public __zz_cib_HandleHelper<::Interface1, __zz_cib_Helper> {
private:
  using __zz_cib_TYPE = __zz_cib_HANDLE;
  friend class __zz_cib_HandleHelper<::Interface1, __zz_cib_Helper>;
  static const __zz_cib_MethodTable* __zz_cib_get_proxy_method_table();
  using _ProxyClass = ::Interface1;
  friend class ::Interface1;
  Example::__zz_cib_local_proxy_mgr<_ProxyClass> proxyMgr;

  __zz_cib_Helper()
    : __zz_cib_MethodTableHelper(
      __zz_cib_Example_GetMethodTable(__zz_cib_classid))
  {}
  static __zz_cib_Helper& instance() {
    static __zz_cib_Helper helper;
    return helper;
  }

  static __zz_cib_TYPE* __zz_cib_new(::Interface1* __zz_cib_proxy) {
    using __zz_cib_newProc = __zz_cib_TYPE* (__zz_cib_decl *) (::Interface1*, const __zz_cib_MethodTable*);
    return instance().invoke<__zz_cib_newProc, __zz_cib_methodid::__zz_cib_new>(
      __zz_cib_proxy, __zz_cib_get_proxy_method_table()
      );
  }
  static void __zz_cib_delete(__zz_cib_TYPE* __zz_cib_obj) {
    if (__zz_cib_obj) {
      using __zz_cib_deleteProc = void (__zz_cib_decl *) (__zz_cib_TYPE*);
      return instance().invoke<__zz_cib_deleteProc, __zz_cib_methodid::__zz_cib_delete>(
        __zz_cib_obj
        );
    }
  }
public:
  static __zz_cib_HANDLE*& __zz_cib_get_handle(::Interface1* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_HANDLE* const& __zz_cib_get_handle(const ::Interface1* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_HANDLE* __zz_cib_release_handle(::Interface1* __zz_cib_obj) {
    __zz_cib_remove_proxy(__zz_cib_obj->__zz_cib_h_);
    auto h = __zz_cib_obj->__zz_cib_h_;
    __zz_cib_obj->__zz_cib_h_ = nullptr;
    return h;
  }
  static void __zz_cib_release_proxy(::Interface1* __zz_cib_obj) {
    if (__zz_cib_obj->__zz_cib_h_) {
      using __zz_cib_release_proxyProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*);
      return instance().invoke<__zz_cib_release_proxyProc, __zz_cib_methodid::__zz_cib_release_proxy>(
      __zz_cib_obj->__zz_cib_h_);
    }
  }
  static _ProxyClass* __zz_cib_get_or_create_proxy(__zz_cib_HANDLE* h) {
    auto&  dis   = instance();
    auto* proxy = dis.proxyMgr.findProxy(h);
    return proxy;
  }
  static void __zz_cib_add_proxy(_ProxyClass* __zz_cib_obj, __zz_cib_HANDLE* h) {
    auto& dis = instance();
    dis.proxyMgr.addProxy(__zz_cib_obj, h);
  }
  static void __zz_cib_remove_proxy(__zz_cib_HANDLE* h) {
    auto& dis = instance();
      dis.proxyMgr.removeProxy(h);
  }
};
}}

namespace __zz_cib_ { namespace Interface2 {
class __zz_cib_Helper : public __zz_cib_MethodTableHelper
  , public __zz_cib_HandleHelper<::Interface2, __zz_cib_Helper> {
private:
  using __zz_cib_TYPE = __zz_cib_HANDLE;
  friend class __zz_cib_HandleHelper<::Interface2, __zz_cib_Helper>;
  static const __zz_cib_MethodTable* __zz_cib_get_proxy_method_table();
  using _ProxyClass = ::Interface2;
  friend class ::Interface2;
  Example::__zz_cib_local_proxy_mgr<_ProxyClass> proxyMgr;

  __zz_cib_Helper()
    : __zz_cib_MethodTableHelper(
      __zz_cib_Example_GetMethodTable(__zz_cib_classid))
  {}
  static __zz_cib_Helper& instance() {
    static __zz_cib_Helper helper;
    return helper;
  }

  static __zz_cib_TYPE* __zz_cib_new(::Interface2* __zz_cib_proxy) {
    using __zz_cib_newProc = __zz_cib_TYPE* (__zz_cib_decl *) (::Interface2*, const __zz_cib_MethodTable*);
    return instance().invoke<__zz_cib_newProc, __zz_cib_methodid::__zz_cib_new>(
      __zz_cib_proxy, __zz_cib_get_proxy_method_table()
      );
  }
  static void __zz_cib_delete(__zz_cib_TYPE* __zz_cib_obj) {
    if (__zz_cib_obj) {
      using __zz_cib_deleteProc = void (__zz_cib_decl *) (__zz_cib_TYPE*);
      return instance().invoke<__zz_cib_deleteProc, __zz_cib_methodid::__zz_cib_delete>(
        __zz_cib_obj
        );
    }
  }
  static std::uint32_t __zz_cib_get_class_id(__zz_cib_HANDLE** __zz_cib_obj) {
    using __zz_cib_get_class_idProc = std::uint32_t (__zz_cib_decl *) (__zz_cib_HANDLE**);
    return instance().invoke<__zz_cib_get_class_idProc, __zz_cib_methodid::__zz_cib_get_class_id>(__zz_cib_obj);
  }
  static ::Interface2* __zz_cib_create_proxy(__zz_cib_HANDLE* h);
public:
  static __zz_cib_HANDLE*& __zz_cib_get_handle(::Interface2* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_HANDLE* const& __zz_cib_get_handle(const ::Interface2* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_HANDLE* __zz_cib_release_handle(::Interface2* __zz_cib_obj) {
    __zz_cib_remove_proxy(__zz_cib_obj->__zz_cib_h_);
    auto h = __zz_cib_obj->__zz_cib_h_;
    __zz_cib_obj->__zz_cib_h_ = nullptr;
    return h;
  }
  static void __zz_cib_release_proxy(::Interface2* __zz_cib_obj) {
    if (__zz_cib_obj->__zz_cib_h_) {
      using __zz_cib_release_proxyProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*);
      return instance().invoke<__zz_cib_release_proxyProc, __zz_cib_methodid::__zz_cib_release_proxy>(
      __zz_cib_obj->__zz_cib_h_);
    }
  }
  static _ProxyClass* __zz_cib_get_or_create_proxy(__zz_cib_HANDLE* h) {
    auto&  dis   = instance();
    auto* proxy = dis.proxyMgr.findProxy(h);
    if (proxy == nullptr)
      proxy = __zz_cib_create_proxy(h);
    return proxy;
  }
  static void __zz_cib_add_proxy(_ProxyClass* __zz_cib_obj, __zz_cib_HANDLE* h) {
    auto& dis = instance();
    dis.proxyMgr.addProxy(__zz_cib_obj, h);
  }
  static void __zz_cib_remove_proxy(__zz_cib_HANDLE* h) {
    auto& dis = instance();
      dis.proxyMgr.removeProxy(h);
  }
};
}}

namespace __zz_cib_ { namespace Interface3 {
class __zz_cib_Helper : public __zz_cib_MethodTableHelper
  , public __zz_cib_HandleHelper<::Interface3, __zz_cib_Helper> {
private:
  using __zz_cib_TYPE = __zz_cib_HANDLE;
  friend class __zz_cib_HandleHelper<::Interface3, __zz_cib_Helper>;
  static const __zz_cib_MethodTable* __zz_cib_get_proxy_method_table();
  using _ProxyClass = ::Interface3;
  friend class ::Interface3;
  Example::__zz_cib_local_proxy_mgr<_ProxyClass> proxyMgr;

  __zz_cib_Helper()
    : __zz_cib_MethodTableHelper(
      __zz_cib_Example_GetMethodTable(__zz_cib_classid))
  {}
  static __zz_cib_Helper& instance() {
    static __zz_cib_Helper helper;
    return helper;
  }

  static __zz_cib_TYPE* __zz_cib_new(::Interface3* __zz_cib_proxy) {
    using __zz_cib_newProc = __zz_cib_TYPE* (__zz_cib_decl *) (::Interface3*, const __zz_cib_MethodTable*);
    return instance().invoke<__zz_cib_newProc, __zz_cib_methodid::__zz_cib_new>(
      __zz_cib_proxy, __zz_cib_get_proxy_method_table()
      );
  }
  static void __zz_cib_delete(__zz_cib_TYPE* __zz_cib_obj) {
    if (__zz_cib_obj) {
      using __zz_cib_deleteProc = void (__zz_cib_decl *) (__zz_cib_TYPE*);
      return instance().invoke<__zz_cib_deleteProc, __zz_cib_methodid::__zz_cib_delete>(
        __zz_cib_obj
        );
    }
  }
  static std::uint32_t __zz_cib_get_class_id(__zz_cib_HANDLE** __zz_cib_obj) {
    using __zz_cib_get_class_idProc = std::uint32_t (__zz_cib_decl *) (__zz_cib_HANDLE**);
    return instance().invoke<__zz_cib_get_class_idProc, __zz_cib_methodid::__zz_cib_get_class_id>(__zz_cib_obj);
  }
  static ::Interface3* __zz_cib_create_proxy(__zz_cib_HANDLE* h);
public:
  static __zz_cib_HANDLE*& __zz_cib_get_handle(::Interface3* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_HANDLE* const& __zz_cib_get_handle(const ::Interface3* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_HANDLE* __zz_cib_release_handle(::Interface3* __zz_cib_obj) {
    __zz_cib_remove_proxy(__zz_cib_obj->__zz_cib_h_);
    auto h = __zz_cib_obj->__zz_cib_h_;
    __zz_cib_obj->__zz_cib_h_ = nullptr;
    return h;
  }
  static void __zz_cib_release_proxy(::Interface3* __zz_cib_obj) {
    if (__zz_cib_obj->__zz_cib_h_) {
      using __zz_cib_release_proxyProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*);
      return instance().invoke<__zz_cib_release_proxyProc, __zz_cib_methodid::__zz_cib_release_proxy>(
      __zz_cib_obj->__zz_cib_h_);
    }
  }
  static _ProxyClass* __zz_cib_get_or_create_proxy(__zz_cib_HANDLE* h) {
    auto&  dis   = instance();
    auto* proxy = dis.proxyMgr.findProxy(h);
    if (proxy == nullptr)
      proxy = __zz_cib_create_proxy(h);
    return proxy;
  }
  static void __zz_cib_add_proxy(_ProxyClass* __zz_cib_obj, __zz_cib_HANDLE* h) {
    auto& dis = instance();
    dis.proxyMgr.addProxy(__zz_cib_obj, h);
  }
  static void __zz_cib_remove_proxy(__zz_cib_HANDLE* h) {
    auto& dis = instance();
      dis.proxyMgr.removeProxy(h);
  }
};
}}

namespace __zz_cib_ { namespace A {
class __zz_cib_Helper : public __zz_cib_MethodTableHelper
  , public __zz_cib_HandleHelper<::A, __zz_cib_Helper> {
private:
  using __zz_cib_TYPE = __zz_cib_HANDLE;
  friend class __zz_cib_HandleHelper<::A, __zz_cib_Helper>;
  using _ProxyClass = ::A;
  friend class ::A;
  Example::__zz_cib_null_proxy_mgr<_ProxyClass> proxyMgr;

  __zz_cib_Helper()
    : __zz_cib_MethodTableHelper(
      __zz_cib_Example_GetMethodTable(__zz_cib_classid))
  {}
  static __zz_cib_Helper& instance() {
    static __zz_cib_Helper helper;
    return helper;
  }

  static __zz_cib_TYPE* __zz_cib_copy(__zz_cib_HANDLE const * __zz_cib_param0) {
    using __zz_cib_copyProc = __zz_cib_TYPE* (__zz_cib_decl *) (__zz_cib_HANDLE const * __zz_cib_param0);
    return instance().invoke<__zz_cib_copyProc, __zz_cib_methodid::__zz_cib_copy>(
      __zz_cib_param0);
  }
  static void __zz_cib_delete(__zz_cib_TYPE* __zz_cib_obj) {
    if (__zz_cib_obj) {
      using __zz_cib_deleteProc = void (__zz_cib_decl *) (__zz_cib_TYPE*);
      return instance().invoke<__zz_cib_deleteProc, __zz_cib_methodid::__zz_cib_delete>(
        __zz_cib_obj
        );
    }
  }
  static __zz_cib_TYPE* __zz_cib_new() {
    using __zz_cib_newProc = __zz_cib_TYPE* (__zz_cib_decl *) ();
    return instance().invoke<__zz_cib_newProc, __zz_cib_methodid::__zz_cib_new>(
      );
  }
  static int SetInterface(const __zz_cib_TYPE* __zz_cib_obj, __zz_cib_HANDLE* pInterface1) {
    using SetInterfaceProc = int (__zz_cib_decl *) (const __zz_cib_TYPE*, __zz_cib_HANDLE* pInterface1);
    return instance().invoke<SetInterfaceProc, __zz_cib_methodid::SetInterface>(
      __zz_cib_obj,
      pInterface1);
  }
  static ::A* __zz_cib_create_proxy(__zz_cib_HANDLE* h) {
    return new ::A(h);
  }
public:
  static ::A __zz_cib_obj_from_handle(__zz_cib_HANDLE* h) {
    return ::A(h);
  }
  static __zz_cib_HANDLE*& __zz_cib_get_handle(::A* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_HANDLE* const& __zz_cib_get_handle(const ::A* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_HANDLE* __zz_cib_release_handle(::A* __zz_cib_obj) {
    auto h = __zz_cib_obj->__zz_cib_h_;
    __zz_cib_obj->__zz_cib_h_ = nullptr;
    return h;
  }
  static _ProxyClass* __zz_cib_get_or_create_proxy(__zz_cib_HANDLE* h) {
    return __zz_cib_create_proxy(h);
  }
};
}}
