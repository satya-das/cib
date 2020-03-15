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
struct __zz_cib_Helper<::A> : public __zz_cib_MethodTableHelper {
  using __zz_cib_AbiType = typename ::A::__zz_cib_AbiType;
  using _ProxyClass = ::A;
  static const __zz_cib_MethodTable* __zz_cib_get_proxy_method_table();
  friend class ::A;
  Example::__zz_cib_local_proxy_mgr<_ProxyClass> proxyMgr;
  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class257::__zz_cib_methodid;

  __zz_cib_Helper()
    : __zz_cib_MethodTableHelper(
      __zz_cib_Example_GetMethodTable(__zz_cib_ids::__zz_cib_Class257::__zz_cib_classid))
  {}
  static __zz_cib_Helper& instance() {
    static __zz_cib_Helper helper;
    return helper;
  }

  template <typename ..._Args>
  static __zz_cib_AbiType __zz_cib_copy(::A* __zz_cib_h_, _Args... __zz_cib_args) {
    using __zz_cib_proc = __zz_cib_AbiType (__zz_cib_decl *) (::A*, const __zz_cib_MethodTable*, _Args...);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_copy>(
      __zz_cib_h_, __zz_cib_get_proxy_method_table(),
      __zz_cib_args...);
  }
  static __zz_cib_AbiType __zz_cib_new(::A* __zz_cib_h_) {
    using __zz_cib_proc = __zz_cib_AbiType (__zz_cib_decl *) (::A*, const __zz_cib_MethodTable*);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_new>(
      __zz_cib_h_, __zz_cib_get_proxy_method_table()
      );
  }
  template <typename _RT>
  static auto VirtFunc(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::VirtFunc>(
      __zz_cib_obj
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
    __zz_cib_remove_proxy(__zz_cib_obj->__zz_cib_h_);
    auto h = __zz_cib_obj->__zz_cib_h_;
    __zz_cib_obj->__zz_cib_h_ = nullptr;
    return h;
  }
  static void __zz_cib_release_proxy(::A* __zz_cib_obj) {
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
};
}

namespace __zz_cib_ {
template <>
struct __zz_cib_Helper<::B> : public __zz_cib_MethodTableHelper {
  using __zz_cib_AbiType = typename ::B::__zz_cib_AbiType;
  using _ProxyClass = ::B;
  static const __zz_cib_MethodTable* __zz_cib_get_proxy_method_table();
  friend class ::B;
  Example::__zz_cib_local_proxy_mgr<_ProxyClass> proxyMgr;
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
  static __zz_cib_AbiType __zz_cib_copy(::B* __zz_cib_h_, _Args... __zz_cib_args) {
    using __zz_cib_proc = __zz_cib_AbiType (__zz_cib_decl *) (::B*, const __zz_cib_MethodTable*, _Args...);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_copy>(
      __zz_cib_h_, __zz_cib_get_proxy_method_table(),
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
  static __zz_cib_AbiType __zz_cib_new(::B* __zz_cib_h_) {
    using __zz_cib_proc = __zz_cib_AbiType (__zz_cib_decl *) (::B*, const __zz_cib_MethodTable*);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_new>(
      __zz_cib_h_, __zz_cib_get_proxy_method_table()
      );
  }
  template <typename _RT>
  static auto VirtFunc(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::VirtFunc>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto Create() {
    using __zz_cib_proc = _RT (__zz_cib_decl *) ();
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::Create>(
      );
  }
  static A::__zz_cib_AbiType __zz_cib_cast_to___zz_cib_Class257(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = A::__zz_cib_AbiType (__zz_cib_decl *) (__zz_cib_AbiType);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_cast_to___zz_cib_Class257>(__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_cast_from___zz_cib_Class257(A::__zz_cib_AbiType  __zz_cib_obj) {
    using __zz_cib_proc = __zz_cib_AbiType (__zz_cib_decl *) (A::__zz_cib_AbiType);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_cast_from___zz_cib_Class257>(__zz_cib_obj);
  }
  static std::uint32_t __zz_cib_get_class_id(__zz_cib_AbiType* __zz_cib_obj) {
    using __zz_cib_get_class_idProc = std::uint32_t (__zz_cib_decl *) (__zz_cib_AbiType*);
    return instance().invoke<__zz_cib_get_class_idProc, __zz_cib_methodid::__zz_cib_get_class_id>(__zz_cib_obj);
  }
  static ::B* __zz_cib_create_proxy(__zz_cib_AbiType h);
  static ::B __zz_cib_obj_from_handle(__zz_cib_AbiType h) {
    return ::B(h);
  }
  static __zz_cib_AbiType& __zz_cib_get_handle(::B* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_AbiType const& __zz_cib_get_handle(const ::B* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_AbiType __zz_cib_release_handle(::B* __zz_cib_obj) {
    if (__zz_cib_obj->__zz_cib_h_ == nullptr) return nullptr;
    __zz_cib_remove_proxy(__zz_cib_obj->__zz_cib_h_);
    auto h = __zz_cib_obj->__zz_cib_h_;
    __zz_cib_obj->__zz_cib_h_ = nullptr;
    __zz_cib_::__zz_cib_Helper<::A>::__zz_cib_release_handle(__zz_cib_obj);
    return h;
  }
  static void __zz_cib_release_proxy(::B* __zz_cib_obj) {
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
};
}
