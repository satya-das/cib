#pragma once

#include "__zz_cib_internal/__zz_cib_Example-def.h"
#include "__zz_cib_internal/__zz_cib_Example-ids.h"
#include "__zz_cib_internal/__zz_cib_Example-local-proxy-mgr.h"
#include "__zz_cib_internal/__zz_cib_Example-remote-proxy-mgr.h"
#include "__zz_cib_internal/__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_internal/__zz_cib_Example-handle-helper.h"
#include "__zz_cib_internal/__zz_cib_Example-smart-ptr-helper.h"

namespace __zz_cib_ {
namespace __zz_cib_Class258 {
class __zz_cib_Helper : public __zz_cib_MethodTableHelper
  , public __zz_cib_HandleHelper<::I, __zz_cib_Helper> {
private:
  using __zz_cib_TYPE = __zz_cib_HANDLE;
  friend class __zz_cib_HandleHelper<::I, __zz_cib_Helper>;
  static const __zz_cib_MethodTable* __zz_cib_get_proxy_method_table();
  using _ProxyClass = ::I;
  friend class ::I;
  Example::__zz_cib_local_proxy_mgr<_ProxyClass> proxyMgr;

  __zz_cib_Helper()
    : __zz_cib_MethodTableHelper(
      __zz_cib_Example_GetMethodTable(__zz_cib_classid))
  {}
  static __zz_cib_Helper& instance() {
    static __zz_cib_Helper helper;
    return helper;
  }

  static __zz_cib_TYPE* __zz_cib_new(::I* __zz_cib_proxy) {
    using __zz_cib_proc = __zz_cib_TYPE* (__zz_cib_decl *) (::I*, const __zz_cib_MethodTable*);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_new>(
      __zz_cib_proxy, __zz_cib_get_proxy_method_table()
      );
  }
  static void __zz_cib_delete(__zz_cib_TYPE* __zz_cib_obj) {
    if (__zz_cib_obj) {
      using __zz_cib_proc = void (__zz_cib_decl *) (__zz_cib_TYPE*);
      return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_delete>(
        __zz_cib_obj
        );
    }
  }
  static void internal_dispose(const __zz_cib_TYPE* __zz_cib_obj) {
    using __zz_cib_proc = void (__zz_cib_decl *) (const __zz_cib_TYPE*);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::internal_dispose>(
      __zz_cib_obj
      );
  }
  static __zz_cib_HANDLE* __zz_cib_cast_to___zz_cib_Class256(__zz_cib_HANDLE* __zz_cib_obj) {
    using __zz_cib_cast_to___zz_cib_Class256Proc = __zz_cib_HANDLE* (__zz_cib_decl *) (__zz_cib_HANDLE* h);
    return instance().invoke<__zz_cib_cast_to___zz_cib_Class256Proc, __zz_cib_methodid::__zz_cib_cast_to___zz_cib_Class256>(__zz_cib_obj);
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
    __zz_cib_::__zz_cib_Class256::__zz_cib_Helper::__zz_cib_release_handle(__zz_cib_obj);
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
};
}}

namespace __zz_cib_ {
namespace __zz_cib_Class259 {
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
    using __zz_cib_proc = __zz_cib_TYPE* (__zz_cib_decl *) (__zz_cib_HANDLE const * __zz_cib_param0);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_copy>(
      __zz_cib_param0);
  }
  static void __zz_cib_delete(__zz_cib_TYPE* __zz_cib_obj) {
    if (__zz_cib_obj) {
      using __zz_cib_proc = void (__zz_cib_decl *) (__zz_cib_TYPE*);
      return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_delete>(
        __zz_cib_obj
        );
    }
  }
  static __zz_cib_TYPE* __zz_cib_new() {
    using __zz_cib_proc = __zz_cib_TYPE* (__zz_cib_decl *) ();
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_new>(
      );
  }
  static __zz_cib_HANDLE* f(const __zz_cib_TYPE* __zz_cib_obj) {
    using __zz_cib_proc = __zz_cib_HANDLE* (__zz_cib_decl *) (const __zz_cib_TYPE*);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::f>(
      __zz_cib_obj
      );
  }
  static __zz_cib_HANDLE* g(__zz_cib_TYPE* __zz_cib_obj) {
    using __zz_cib_proc = __zz_cib_HANDLE* (__zz_cib_decl *) (__zz_cib_TYPE*);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::g>(
      __zz_cib_obj
      );
  }
  static int h(const __zz_cib_TYPE* __zz_cib_obj, __zz_cib_HANDLE* p) {
    using __zz_cib_proc = int (__zz_cib_decl *) (const __zz_cib_TYPE*, __zz_cib_HANDLE* p);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::h>(
      __zz_cib_obj,
      std::move(p));
  }
  static int i(const __zz_cib_TYPE* __zz_cib_obj, __zz_cib_HANDLE* p) {
    using __zz_cib_proc = int (__zz_cib_decl *) (const __zz_cib_TYPE*, __zz_cib_HANDLE* p);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::i>(
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
