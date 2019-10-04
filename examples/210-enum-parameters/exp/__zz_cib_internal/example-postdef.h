#pragma once

#include "__zz_cib_internal/__zz_cib_Example-def.h"
#include "__zz_cib_internal/__zz_cib_Example-ids.h"
#include "__zz_cib_internal/__zz_cib_Example-local-proxy-mgr.h"
#include "__zz_cib_internal/__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_internal/__zz_cib_Example-handle-helper.h"

namespace __zz_cib_ { namespace A {
class __zz_cib_Helper : public __zz_cib_MethodTableHelper
  , public __zz_cib_HandleHelper<::A, __zz_cib_local_proxy_mgr, __zz_cib_Helper> {
private:
  using __zz_cib_TYPE = __zz_cib_HANDLE;
  friend class __zz_cib_HandleHelper<::A, __zz_cib_local_proxy_mgr, __zz_cib_Helper>;
  friend class ::A;

  __zz_cib_Helper()
    : __zz_cib_MethodTableHelper(
      __zz_cib_Example_GetMethodTable(__zz_cib_classid))
  {}
  static __zz_cib_Helper& instance() {
    static __zz_cib_Helper helper;
    return helper;
  }

  static __zz_cib_TYPE* __zz_cib_copy_0(__zz_cib_HANDLE const * __zz_cib_param0) {
    using __zz_cib_copyProc = __zz_cib_TYPE* (__zz_cib_decl *) (__zz_cib_HANDLE const * __zz_cib_param0);
    return instance().invoke<__zz_cib_copyProc, __zz_cib_methodid::__zz_cib_copy_0>(
      __zz_cib_param0);
  }
  static void __zz_cib_delete_1(__zz_cib_TYPE* __zz_cib_obj) {
    if (__zz_cib_obj) {
      using __zz_cib_deleteProc = void (__zz_cib_decl *) (__zz_cib_TYPE*);
      return instance().invoke<__zz_cib_deleteProc, __zz_cib_methodid::__zz_cib_delete_1>(
        __zz_cib_obj
        );
    }
  }
  static __zz_cib_TYPE* __zz_cib_new_2() {
    using __zz_cib_newProc = __zz_cib_TYPE* (__zz_cib_decl *) ();
    return instance().invoke<__zz_cib_newProc, __zz_cib_methodid::__zz_cib_new_2>(
      );
  }
  static int fE_3(const __zz_cib_TYPE* __zz_cib_obj, ::E e) {
    using fEProc = int (__zz_cib_decl *) (const __zz_cib_TYPE*, ::E e);
    return instance().invoke<fEProc, __zz_cib_methodid::fE_3>(
      __zz_cib_obj,
      e);
  }
  static int fE_4(const __zz_cib_TYPE* __zz_cib_obj, ::EC e) {
    using fEProc = int (__zz_cib_decl *) (const __zz_cib_TYPE*, ::EC e);
    return instance().invoke<fEProc, __zz_cib_methodid::fE_4>(
      __zz_cib_obj,
      e);
  }
  static int fE_5(const __zz_cib_TYPE* __zz_cib_obj, ::E8 e) {
    using fEProc = int (__zz_cib_decl *) (const __zz_cib_TYPE*, ::E8 e);
    return instance().invoke<fEProc, __zz_cib_methodid::fE_5>(
      __zz_cib_obj,
      e);
  }
  static int fE_6(const __zz_cib_TYPE* __zz_cib_obj, ::EC16 e) {
    using fEProc = int (__zz_cib_decl *) (const __zz_cib_TYPE*, ::EC16 e);
    return instance().invoke<fEProc, __zz_cib_methodid::fE_6>(
      __zz_cib_obj,
      e);
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
};
}}
