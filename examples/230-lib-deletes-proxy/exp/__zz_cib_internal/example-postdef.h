#pragma once

#include "__zz_cib_internal/__zz_cib_Example-client-type-handler.h"
#include "__zz_cib_internal/__zz_cib_Example-def.h"
#include "__zz_cib_internal/__zz_cib_Example-handle-helper.h"
#include "__zz_cib_internal/__zz_cib_Example-ids.h"
#include "__zz_cib_internal/__zz_cib_Example-local-proxy-mgr.h"
#include "__zz_cib_internal/__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_internal/__zz_cib_Example-remote-proxy-mgr.h"

namespace __zz_cib_ {
template <>
struct __zz_cib_Helper<::I> : public __zz_cib_MethodTableHelper {
  using __zz_cib_AbiType = typename ::I::__zz_cib_AbiType;
  using _ProxyClass = ::I;
  static const __zz_cib_MethodTable* __zz_cib_get_proxy_method_table();
  friend class ::I;
  Example::__zz_cib_remote_proxy_mgr<_ProxyClass, __zz_cib_Helper> proxyMgr;
  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class257::__zz_cib_methodid;

  __zz_cib_Helper()
    : __zz_cib_MethodTableHelper(
      __zz_cib_Example_GetMethodTable(__zz_cib_ids::__zz_cib_Class257::__zz_cib_classid))
  {}
  static __zz_cib_Helper& instance() {
    static __zz_cib_Helper helper;
    return helper;
  }

  static __zz_cib_AbiType __zz_cib_new(::I* __zz_cib_h_) {
    using __zz_cib_proc = __zz_cib_AbiType (__zz_cib_decl *) (::I*, const __zz_cib_MethodTable*);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_new>(
      __zz_cib_h_, __zz_cib_get_proxy_method_table()
      );
  }
  static auto __zz_cib_delete(__zz_cib_AbiType __zz_cib_obj) {
    if (__zz_cib_obj) {
      using __zz_cib_proc = void (__zz_cib_decl *) (__zz_cib_AbiType);
      return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_delete>(
        __zz_cib_obj
        );
    }
  }
  static std::uint32_t __zz_cib_get_class_id(__zz_cib_AbiType* __zz_cib_obj) {
    using __zz_cib_get_class_idProc = std::uint32_t (__zz_cib_decl *) (__zz_cib_AbiType*);
    return instance().invoke<__zz_cib_get_class_idProc, __zz_cib_methodid::__zz_cib_get_class_id>(__zz_cib_obj);
  }
  static ::I* __zz_cib_create_proxy(__zz_cib_AbiType h);
  static __zz_cib_AbiType& __zz_cib_get_handle(::I* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_AbiType const& __zz_cib_get_handle(const ::I* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_AbiType __zz_cib_release_handle(::I* __zz_cib_obj) {
    if (__zz_cib_obj->__zz_cib_h_ == nullptr) return nullptr;
    __zz_cib_remove_proxy(__zz_cib_obj->__zz_cib_h_);
    auto h = __zz_cib_obj->__zz_cib_h_;
    __zz_cib_obj->__zz_cib_h_ = nullptr;
    return h;
  }
  static void __zz_cib_release_proxy(::I* __zz_cib_obj) {
    if (__zz_cib_obj->__zz_cib_h_) {
      using __zz_cib_release_proxyProc = void (__zz_cib_decl *) (__zz_cib_AbiType);
      return instance().invoke<__zz_cib_release_proxyProc, __zz_cib_methodid::__zz_cib_release_proxy>(
      __zz_cib_obj->__zz_cib_h_);
    }
  }
  static _ProxyClass* __zz_cib_from_handle(__zz_cib_AbiType h) {
    auto&  dis   = instance();
    auto* proxy = dis.proxyMgr.findProxy(h);
    if (proxy == nullptr)
      proxy = __zz_cib_create_proxy(h);
    return proxy;
  }
  static void __zz_cib_add_proxy(_ProxyClass* __zz_cib_obj, __zz_cib_AbiType h) {
    auto& dis = instance();
    dis.proxyMgr.addProxy(__zz_cib_obj, h);
  }
  static void __zz_cib_remove_proxy(__zz_cib_AbiType h) {
    auto& dis = instance();
      dis.proxyMgr.removeProxy(h);
  }
  using __zz_cib_ProxyDeleter    = void (__zz_cib_decl *) (_ProxyClass* proxy);
  static _ProxyClass* __zz_cib_findProxy(__zz_cib_AbiType obj, __zz_cib_ClientId clientId) {
    using __zz_cib_findProxyProc = _ProxyClass* (__zz_cib_decl *)(__zz_cib_AbiType, __zz_cib_ClientId);
    return instance().invoke<__zz_cib_findProxyProc, __zz_cib_methodid::__zz_cib_findProxy>(obj, clientId);
  }
  static void __zz_cib_registerProxy(__zz_cib_AbiType obj, __zz_cib_ClientId clientId, _ProxyClass* proxy, __zz_cib_ProxyDeleter deleter) {
    using __zz_cib_registerProxyProc = void (__zz_cib_decl *)(__zz_cib_AbiType, __zz_cib_ClientId, _ProxyClass*, __zz_cib_ProxyDeleter);
    return instance().invoke<__zz_cib_registerProxyProc, __zz_cib_methodid::__zz_cib_registerProxy>(obj, clientId, proxy, deleter);
  }
  static void __zz_cib_unregisterProxy(__zz_cib_AbiType obj, __zz_cib_ClientId clientId) {
    using __zz_cib_unregisterProxyProc = void (__zz_cib_decl *)(__zz_cib_AbiType, __zz_cib_ClientId);
    return instance().invoke<__zz_cib_unregisterProxyProc, __zz_cib_methodid::__zz_cib_unregisterProxy>(obj, clientId);
  }
  static void __zz_cib_delete_only_proxy(_ProxyClass* obj) {
    obj->__zz_cib_h_ = nullptr;
    delete obj;
  }
};
}

namespace __zz_cib_ {
template <>
struct __zz_cib_Helper<::A> : public __zz_cib_MethodTableHelper {
  using __zz_cib_AbiType = typename ::A::__zz_cib_AbiType;
  using _ProxyClass = ::A;
  friend class ::A;
  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class258::__zz_cib_methodid;

  __zz_cib_Helper()
    : __zz_cib_MethodTableHelper(
      __zz_cib_Example_GetMethodTable(__zz_cib_ids::__zz_cib_Class258::__zz_cib_classid))
  {}
  static __zz_cib_Helper& instance() {
    static __zz_cib_Helper helper;
    return helper;
  }

  template <typename ..._Args>
  static __zz_cib_AbiType __zz_cib_copy(_Args... __zz_cib_args) {
    using __zz_cib_proc = __zz_cib_AbiType (__zz_cib_decl *) (_Args...);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_copy>(
      __zz_cib_args...);
  }
  static auto __zz_cib_delete(__zz_cib_AbiType __zz_cib_obj) {
    if (__zz_cib_obj) {
      using __zz_cib_proc = void (__zz_cib_decl *) (__zz_cib_AbiType);
      return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_delete>(
        __zz_cib_obj
        );
    }
  }
  static __zz_cib_AbiType __zz_cib_new() {
    using __zz_cib_proc = __zz_cib_AbiType (__zz_cib_decl *) ();
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_new>(
      );
  }
  template <typename _RT>
  static auto f(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::f>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto g(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::g>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto c(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::c>(
      __zz_cib_obj
      );
  }
  template <typename _RT, typename ..._Args>
  static auto d(const __zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType, _Args...);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::d>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  static ::A* __zz_cib_create_proxy(__zz_cib_AbiType h) {
    return new ::A(h);
  }
  static ::A __zz_cib_obj_from_handle(__zz_cib_AbiType h) {
    return ::A(h);
  }
  static __zz_cib_AbiType& __zz_cib_get_handle(::A* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_AbiType const& __zz_cib_get_handle(const ::A* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_AbiType __zz_cib_release_handle(::A* __zz_cib_obj) {
    if (__zz_cib_obj->__zz_cib_h_ == nullptr) return nullptr;
    auto h = __zz_cib_obj->__zz_cib_h_;
    __zz_cib_obj->__zz_cib_h_ = nullptr;
    return h;
  }
  static _ProxyClass* __zz_cib_from_handle(__zz_cib_AbiType h) {
    return __zz_cib_create_proxy(h);
  }
};
}
