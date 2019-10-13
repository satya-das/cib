#pragma once

#include "__zz_cib_internal/__zz_cib_Example-def.h"
#include "__zz_cib_internal/__zz_cib_Example-ids.h"
#include "__zz_cib_internal/__zz_cib_Example-local-proxy-mgr.h"
#include "__zz_cib_internal/__zz_cib_Example-remote-proxy-mgr.h"
#include "__zz_cib_internal/__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_internal/__zz_cib_Example-handle-helper.h"

namespace __zz_cib_ { namespace I {
class __zz_cib_Helper : public __zz_cib_MethodTableHelper
  , public __zz_cib_HandleHelper<::I, __zz_cib_Helper> {
private:
  using __zz_cib_TYPE = __zz_cib_HANDLE;
  friend class __zz_cib_HandleHelper<::I, __zz_cib_Helper>;
  static const __zz_cib_MethodTable* __zz_cib_get_proxy_method_table();
  using _ProxyClass = ::I;
  friend class ::I;
  Example::__zz_cib_remote_proxy_mgr<_ProxyClass, __zz_cib_Helper> proxyMgr;

  __zz_cib_Helper()
    : __zz_cib_MethodTableHelper(
      __zz_cib_Example_GetMethodTable(__zz_cib_classid))
  {}
  static __zz_cib_Helper& instance() {
    static __zz_cib_Helper helper;
    return helper;
  }

  static __zz_cib_TYPE* __zz_cib_new(::I* __zz_cib_proxy) {
    using __zz_cib_newProc = __zz_cib_TYPE* (__zz_cib_decl *) (::I*, const __zz_cib_MethodTable*);
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
  static ::I* __zz_cib_create_proxy(__zz_cib_HANDLE* h);
public:
  static __zz_cib_HANDLE*& __zz_cib_get_handle(::I* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_HANDLE* const& __zz_cib_get_handle(const ::I* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_HANDLE* __zz_cib_release_handle(::I* __zz_cib_obj) {
    if (__zz_cib_obj->__zz_cib_h_ == nullptr) return nullptr;
    __zz_cib_remove_proxy(__zz_cib_obj->__zz_cib_h_);
    auto h = __zz_cib_obj->__zz_cib_h_;
    __zz_cib_obj->__zz_cib_h_ = nullptr;
    return h;
  }
  static void __zz_cib_release_proxy(::I* __zz_cib_obj) {
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
  using __zz_cib_proxy_deleter    = void (__zz_cib_decl *) (_ProxyClass* proxy);
  static _ProxyClass* __zz_cib_find_proxy(__zz_cib_HANDLE* obj, __zz_cib_client_id clientId) {
    using __zz_cib_find_proxyProc = _ProxyClass* (__zz_cib_decl *)(__zz_cib_HANDLE*, __zz_cib_client_id);
    return instance().invoke<__zz_cib_find_proxyProc, __zz_cib_methodid::__zz_cib_find_proxy>(obj, clientId);
  }
  static void __zz_cib_register_proxy(__zz_cib_HANDLE* obj, __zz_cib_client_id clientId, _ProxyClass* proxy, __zz_cib_proxy_deleter deleter) {
    using __zz_cib_register_proxyProc = void (__zz_cib_decl *)(__zz_cib_HANDLE*, __zz_cib_client_id, _ProxyClass*, __zz_cib_proxy_deleter);
    return instance().invoke<__zz_cib_register_proxyProc, __zz_cib_methodid::__zz_cib_register_proxy>(obj, clientId, proxy, deleter);
  }
  static void __zz_cib_unregister_proxy(__zz_cib_HANDLE* obj, __zz_cib_client_id clientId) {
    using __zz_cib_unregister_proxyProc = void (__zz_cib_decl *)(__zz_cib_HANDLE*, __zz_cib_client_id);
    return instance().invoke<__zz_cib_unregister_proxyProc, __zz_cib_methodid::__zz_cib_unregister_proxy>(obj, clientId);
  }
  static void __zz_cib_delete_only_proxy(_ProxyClass* obj) {
    obj->__zz_cib_h_ = nullptr;
    delete obj;
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
  static __zz_cib_HANDLE const * __zz_cib_f(const __zz_cib_TYPE* __zz_cib_obj) {
    using __zz_cib_fProc = __zz_cib_HANDLE const * (__zz_cib_decl *) (const __zz_cib_TYPE*);
    return instance().invoke<__zz_cib_fProc, __zz_cib_methodid::__zz_cib_f>(
      __zz_cib_obj
      );
  }
  static __zz_cib_HANDLE const * __zz_cib_g(const __zz_cib_TYPE* __zz_cib_obj) {
    using __zz_cib_gProc = __zz_cib_HANDLE const * (__zz_cib_decl *) (const __zz_cib_TYPE*);
    return instance().invoke<__zz_cib_gProc, __zz_cib_methodid::__zz_cib_g>(
      __zz_cib_obj
      );
  }
  static __zz_cib_HANDLE* __zz_cib_c(const __zz_cib_TYPE* __zz_cib_obj) {
    using __zz_cib_cProc = __zz_cib_HANDLE* (__zz_cib_decl *) (const __zz_cib_TYPE*);
    return instance().invoke<__zz_cib_cProc, __zz_cib_methodid::__zz_cib_c>(
      __zz_cib_obj
      );
  }
  static void __zz_cib_d(const __zz_cib_TYPE* __zz_cib_obj, __zz_cib_HANDLE const * p) {
    using __zz_cib_dProc = void (__zz_cib_decl *) (const __zz_cib_TYPE*, __zz_cib_HANDLE const * p);
    return instance().invoke<__zz_cib_dProc, __zz_cib_methodid::__zz_cib_d>(
      __zz_cib_obj,
      p);
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
    if (__zz_cib_obj->__zz_cib_h_ == nullptr) return nullptr;
    auto h = __zz_cib_obj->__zz_cib_h_;
    __zz_cib_obj->__zz_cib_h_ = nullptr;
    return h;
  }
  static _ProxyClass* __zz_cib_get_or_create_proxy(__zz_cib_HANDLE* h) {
    return __zz_cib_create_proxy(h);
  }
};
}}
