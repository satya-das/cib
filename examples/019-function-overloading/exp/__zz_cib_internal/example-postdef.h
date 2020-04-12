#pragma once

#include "__zz_cib_internal/__zz_cib_Example-client-type-handler.h"
#include "__zz_cib_internal/__zz_cib_Example-def.h"
#include "__zz_cib_internal/__zz_cib_Example-handle-helper.h"
#include "__zz_cib_internal/__zz_cib_Example-ids.h"
#include "__zz_cib_internal/__zz_cib_Example-local-proxy-mgr.h"
#include "__zz_cib_internal/__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_internal/__zz_cib_Example-remote-proxy-mgr.h"

namespace __zz_cib_ {
using namespace ::Example;
template <typename _T>
struct __zz_cib_Helper<::Example::A, _T> : public __zz_cib_MethodTableHelper {
  static_assert(std::is_same_v<_T, ::Example::A>);
  using __zz_cib_AbiType = typename _T::__zz_cib_AbiType;
  using _ProxyClass = _T;
  friend class ::Example::A;
  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class257::__zz_cib_Class258::__zz_cib_methodid;

  __zz_cib_Helper()
    : __zz_cib_MethodTableHelper(
      __zz_cib_Example_GetMethodTable(__zz_cib_ids::__zz_cib_Class257::__zz_cib_Class258::__zz_cib_classid))
  {}
  static __zz_cib_Helper& __zz_cib_instance() {
    static __zz_cib_Helper helper;
    return helper;
  }
  static __zz_cib_MethodTableHelper& __zz_cib_mtbl() {
    return __zz_cib_instance();
  }

  template <typename ..._Args>
  static __zz_cib_AbiType __zz_cib_copy_0(_Args... __zz_cib_args) {
    using __zz_cib_proc = __zz_cib_AbiType (__zz_cib_decl *) (_Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_copy_0>(
      __zz_cib_args...);
  }
  static auto __zz_cib_delete_1(__zz_cib_AbiType __zz_cib_obj) {
    if (__zz_cib_obj) {
      using __zz_cib_proc = void (__zz_cib_decl *) (__zz_cib_AbiType);
      return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_delete_1>(
        __zz_cib_obj
        );
    }
  }
  static __zz_cib_AbiType __zz_cib_new_2() {
    using __zz_cib_proc = __zz_cib_AbiType (__zz_cib_decl *) ();
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_new_2>(
      );
  }
  template <typename _RT>
  static auto Func_3(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::Func_3>(
      __zz_cib_obj
      );
  }
  template <typename _RT, typename ..._Args>
  static auto Func_4(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::Func_4>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  static _T* __zz_cib_create_proxy(__zz_cib_AbiType h) {
    return new _T(h);
  }
  static _T __zz_cib_obj_from_handle(__zz_cib_AbiType h) {
    return _T(h);
  }
  static __zz_cib_AbiType& __zz_cib_get_handle(_T* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_AbiType const& __zz_cib_get_handle(const _T* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_AbiType __zz_cib_release_handle(_T* __zz_cib_obj) {
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
