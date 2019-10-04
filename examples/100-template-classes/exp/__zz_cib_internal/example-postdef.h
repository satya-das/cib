#pragma once

#include "__zz_cib_internal/__zz_cib_Example-def.h"
#include "__zz_cib_internal/__zz_cib_Example-ids.h"
#include "__zz_cib_internal/__zz_cib_Example-local-proxy-mgr.h"
#include "__zz_cib_internal/__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_internal/__zz_cib_Example-handle-helper.h"

namespace __zz_cib_ { namespace Example { namespace A {
class __zz_cib_Helper : public __zz_cib_MethodTableHelper
  , public __zz_cib_HandleHelper<::Example::A, __zz_cib_local_proxy_mgr, __zz_cib_Helper> {
private:
  using __zz_cib_TYPE = __zz_cib_HANDLE;
  friend class __zz_cib_HandleHelper<::Example::A, __zz_cib_local_proxy_mgr, __zz_cib_Helper>;
  friend class ::Example::A;

  __zz_cib_Helper()
    : __zz_cib_MethodTableHelper(
      __zz_cib_Example_GetMethodTable(__zz_cib_classid))
  {}
  static __zz_cib_Helper& instance() {
    static __zz_cib_Helper helper;
    return helper;
  }

  static __zz_cib_TYPE* __zz_cib_new_0() {
    using __zz_cib_newProc = __zz_cib_TYPE* (__zz_cib_decl *) ();
    return instance().invoke<__zz_cib_newProc, __zz_cib_methodid::__zz_cib_new_0>(
      );
  }
  static __zz_cib_TYPE* __zz_cib_copy_1(__zz_cib_HANDLE const * __zz_cib_param0) {
    using __zz_cib_copyProc = __zz_cib_TYPE* (__zz_cib_decl *) (__zz_cib_HANDLE const * __zz_cib_param0);
    return instance().invoke<__zz_cib_copyProc, __zz_cib_methodid::__zz_cib_copy_1>(
      __zz_cib_param0);
  }
  static void __zz_cib_delete_2(__zz_cib_TYPE* __zz_cib_obj) {
    if (__zz_cib_obj) {
      using __zz_cib_deleteProc = void (__zz_cib_decl *) (__zz_cib_TYPE*);
      return instance().invoke<__zz_cib_deleteProc, __zz_cib_methodid::__zz_cib_delete_2>(
        __zz_cib_obj
        );
    }
  }
  static void Set_3(__zz_cib_TYPE* __zz_cib_obj, __zz_cib_HANDLE const * x) {
    using SetProc = void (__zz_cib_decl *) (__zz_cib_TYPE*, __zz_cib_HANDLE const * x);
    return instance().invoke<SetProc, __zz_cib_methodid::Set_3>(
      __zz_cib_obj,
      x);
  }
  static __zz_cib_HANDLE* Get_4(const __zz_cib_TYPE* __zz_cib_obj) {
    using GetProc = __zz_cib_HANDLE* (__zz_cib_decl *) (const __zz_cib_TYPE*);
    return instance().invoke<GetProc, __zz_cib_methodid::Get_4>(
      __zz_cib_obj
      );
  }
  static void SetInt_5(__zz_cib_TYPE* __zz_cib_obj, __zz_cib_HANDLE const * y) {
    using SetIntProc = void (__zz_cib_decl *) (__zz_cib_TYPE*, __zz_cib_HANDLE const * y);
    return instance().invoke<SetIntProc, __zz_cib_methodid::SetInt_5>(
      __zz_cib_obj,
      y);
  }
  static __zz_cib_HANDLE* GetInt_6(const __zz_cib_TYPE* __zz_cib_obj) {
    using GetIntProc = __zz_cib_HANDLE* (__zz_cib_decl *) (const __zz_cib_TYPE*);
    return instance().invoke<GetIntProc, __zz_cib_methodid::GetInt_6>(
      __zz_cib_obj
      );
  }
  static ::Example::A* __zz_cib_create_proxy(__zz_cib_HANDLE* h) {
    return new ::Example::A(h);
  }
public:
    static ::Example::A __zz_cib_obj_from_handle(__zz_cib_HANDLE* h) {
      return ::Example::A(h);
    }
    static __zz_cib_HANDLE*& __zz_cib_get_handle(::Example::A* __zz_cib_obj) {
      return __zz_cib_obj->__zz_cib_h_;
    }
    static __zz_cib_HANDLE* const& __zz_cib_get_handle(const ::Example::A* __zz_cib_obj) {
      return __zz_cib_obj->__zz_cib_h_;
    }
    static __zz_cib_HANDLE* __zz_cib_release_handle(::Example::A* __zz_cib_obj) {
      auto h = __zz_cib_obj->__zz_cib_h_;
      __zz_cib_obj->__zz_cib_h_ = nullptr;
      return h;
    }
};
}}}
