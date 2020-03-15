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
struct __zz_cib_Helper<::Facade> : public __zz_cib_MethodTableHelper {
  using __zz_cib_AbiType = typename ::Facade::__zz_cib_AbiType;
  using _ProxyClass = ::Facade;
  static const __zz_cib_MethodTable* __zz_cib_get_proxy_method_table();
  friend class ::Facade;
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

  static __zz_cib_AbiType __zz_cib_new(::Facade* __zz_cib_h_) {
    using __zz_cib_proc = __zz_cib_AbiType (__zz_cib_decl *) (::Facade*, const __zz_cib_MethodTable*);
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
  static ::Facade* __zz_cib_create_proxy(__zz_cib_AbiType h);
  static __zz_cib_AbiType& __zz_cib_get_handle(::Facade* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_AbiType const& __zz_cib_get_handle(const ::Facade* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_AbiType __zz_cib_release_handle(::Facade* __zz_cib_obj) {
    if (__zz_cib_obj->__zz_cib_h_ == nullptr) return nullptr;
    __zz_cib_remove_proxy(__zz_cib_obj->__zz_cib_h_);
    auto h = __zz_cib_obj->__zz_cib_h_;
    __zz_cib_obj->__zz_cib_h_ = nullptr;
    return h;
  }
  static void __zz_cib_release_proxy(::Facade* __zz_cib_obj) {
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
struct __zz_cib_Helper<::PublicFacadeImpl> : public __zz_cib_MethodTableHelper {
  using __zz_cib_AbiType = typename ::PublicFacadeImpl::__zz_cib_AbiType;
  using _ProxyClass = ::PublicFacadeImpl;
  static const __zz_cib_MethodTable* __zz_cib_get_proxy_method_table();
  friend class ::PublicFacadeImpl;
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
  static __zz_cib_AbiType __zz_cib_copy(::PublicFacadeImpl* __zz_cib_h_, _Args... __zz_cib_args) {
    using __zz_cib_proc = __zz_cib_AbiType (__zz_cib_decl *) (::PublicFacadeImpl*, const __zz_cib_MethodTable*, _Args...);
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
  static __zz_cib_AbiType __zz_cib_new(::PublicFacadeImpl* __zz_cib_h_) {
    using __zz_cib_proc = __zz_cib_AbiType (__zz_cib_decl *) (::PublicFacadeImpl*, const __zz_cib_MethodTable*);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_new>(
      __zz_cib_h_, __zz_cib_get_proxy_method_table()
      );
  }
  template <typename _RT>
  static auto F(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::F>(
      __zz_cib_obj
      );
  }
  static Facade::__zz_cib_AbiType __zz_cib_cast_to___zz_cib_Class257(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = Facade::__zz_cib_AbiType (__zz_cib_decl *) (__zz_cib_AbiType);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_cast_to___zz_cib_Class257>(__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_cast_from___zz_cib_Class257(Facade::__zz_cib_AbiType  __zz_cib_obj) {
    using __zz_cib_proc = __zz_cib_AbiType (__zz_cib_decl *) (Facade::__zz_cib_AbiType);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_cast_from___zz_cib_Class257>(__zz_cib_obj);
  }
  static ::PublicFacadeImpl* __zz_cib_create_proxy(__zz_cib_AbiType h) {
    return new ::PublicFacadeImpl(h);
  }
  static ::PublicFacadeImpl __zz_cib_obj_from_handle(__zz_cib_AbiType h) {
    return ::PublicFacadeImpl(h);
  }
  static __zz_cib_AbiType& __zz_cib_get_handle(::PublicFacadeImpl* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_AbiType const& __zz_cib_get_handle(const ::PublicFacadeImpl* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_AbiType __zz_cib_release_handle(::PublicFacadeImpl* __zz_cib_obj) {
    if (__zz_cib_obj->__zz_cib_h_ == nullptr) return nullptr;
    __zz_cib_remove_proxy(__zz_cib_obj->__zz_cib_h_);
    auto h = __zz_cib_obj->__zz_cib_h_;
    __zz_cib_obj->__zz_cib_h_ = nullptr;
    __zz_cib_::__zz_cib_Helper<::Facade>::__zz_cib_release_handle(__zz_cib_obj);
    return h;
  }
  static void __zz_cib_release_proxy(::PublicFacadeImpl* __zz_cib_obj) {
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
struct __zz_cib_Helper<::A> : public __zz_cib_MethodTableHelper {
  using __zz_cib_AbiType = typename ::A::__zz_cib_AbiType;
  using _ProxyClass = ::A;
  friend class ::A;
  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class259::__zz_cib_methodid;

  __zz_cib_Helper()
    : __zz_cib_MethodTableHelper(
      __zz_cib_Example_GetMethodTable(__zz_cib_ids::__zz_cib_Class259::__zz_cib_classid))
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
  static auto PublicFacade(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::PublicFacade>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto PrivateFacade1(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::PrivateFacade1>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto PrivateFacade2(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::PrivateFacade2>(
      __zz_cib_obj
      );
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
