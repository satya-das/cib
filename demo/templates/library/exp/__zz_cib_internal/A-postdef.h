#pragma once

#include "__zz_cib_internal/__zz_cib_templates-def.h"
#include "__zz_cib_internal/__zz_cib_templates-ids.h"
#include "__zz_cib_internal/__zz_cib_templates-local-proxy-mgr.h"
#include "__zz_cib_internal/__zz_cib_templates-null-proxy-mgr.h"
#include "__zz_cib_internal/__zz_cib_templates-mtable-helper.h"
#include "__zz_cib_internal/__zz_cib_templates-handle-helper.h"

namespace __zz_cib_ { namespace A {
class __zz_cib_Helper : public __zz_cib_MethodTableHelper
  , public __zz_cib_HandleHelper<::A, templates::__zz_cib_local_proxy_mgr, __zz_cib_Helper> {
private:
  using __zz_cib_TYPE = __zz_cib_HANDLE;
  friend class __zz_cib_HandleHelper<::A, templates::__zz_cib_local_proxy_mgr, __zz_cib_Helper>;
  static const __zz_cib_MethodTable* __zz_cib_get_proxy_method_table();
  friend class ::A;

  __zz_cib_Helper()
    : __zz_cib_MethodTableHelper(
      __zz_cib_templates_GetMethodTable(__zz_cib_classid))
  {}
  static __zz_cib_Helper& instance() {
    static __zz_cib_Helper helper;
    return helper;
  }

  static __zz_cib_TYPE* __zz_cib_new_0(::A* __zz_cib_proxy) {
    using __zz_cib_newProc = __zz_cib_TYPE* (__zz_cib_decl *) (::A*, const __zz_cib_MethodTable*);
    return instance().invoke<__zz_cib_newProc, __zz_cib_methodid::__zz_cib_new_0>(
      __zz_cib_proxy, __zz_cib_get_proxy_method_table()
      );
  }
  static __zz_cib_TYPE* __zz_cib_copy_1(::A* __zz_cib_proxy, __zz_cib_HANDLE const * __zz_cib_param0) {
    using __zz_cib_copyProc = __zz_cib_TYPE* (__zz_cib_decl *) (::A*, const __zz_cib_MethodTable*, __zz_cib_HANDLE const * __zz_cib_param0);
    return instance().invoke<__zz_cib_copyProc, __zz_cib_methodid::__zz_cib_copy_1>(
      __zz_cib_proxy, __zz_cib_get_proxy_method_table(),
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
  static int setValue_3(const __zz_cib_TYPE* __zz_cib_obj, __zz_cib_HANDLE const * intVal) {
    using setValueProc = int (__zz_cib_decl *) (const __zz_cib_TYPE*, __zz_cib_HANDLE const * intVal);
    return instance().invoke<setValueProc, __zz_cib_methodid::setValue_3>(
      __zz_cib_obj,
      intVal);
  }
  static float setValue_4(const __zz_cib_TYPE* __zz_cib_obj, __zz_cib_HANDLE const * floatVal) {
    using setValueProc = float (__zz_cib_decl *) (const __zz_cib_TYPE*, __zz_cib_HANDLE const * floatVal);
    return instance().invoke<setValueProc, __zz_cib_methodid::setValue_4>(
      __zz_cib_obj,
      floatVal);
  }
  static __zz_cib_HANDLE* getIntValue_5(const __zz_cib_TYPE* __zz_cib_obj) {
    using getIntValueProc = __zz_cib_HANDLE* (__zz_cib_decl *) (const __zz_cib_TYPE*);
    return instance().invoke<getIntValueProc, __zz_cib_methodid::getIntValue_5>(
      __zz_cib_obj
      );
  }
  static __zz_cib_HANDLE* getFloatValue_6(const __zz_cib_TYPE* __zz_cib_obj) {
    using getFloatValueProc = __zz_cib_HANDLE* (__zz_cib_decl *) (const __zz_cib_TYPE*);
    return instance().invoke<getFloatValueProc, __zz_cib_methodid::getFloatValue_6>(
      __zz_cib_obj
      );
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
      __zz_cib_remove_proxy(__zz_cib_obj->__zz_cib_h_);
      auto h = __zz_cib_obj->__zz_cib_h_;
      __zz_cib_obj->__zz_cib_h_ = nullptr;
      return h;
    }
    static void __zz_cib_release_proxy(::A* __zz_cib_obj) {
      if (__zz_cib_obj->__zz_cib_h_) {
        using __zz_cib_release_proxyProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*);
        return instance().invoke<__zz_cib_release_proxyProc, __zz_cib_methodid::__zz_cib_release_proxy_7>(
        __zz_cib_obj->__zz_cib_h_);
      }
    }
};
}}
