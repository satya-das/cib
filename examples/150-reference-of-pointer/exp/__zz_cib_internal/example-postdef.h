#pragma once

#include "__zz_cib_internal/__zz_cib_Example-def.h"
#include "__zz_cib_internal/__zz_cib_Example-ids.h"
#include "__zz_cib_internal/__zz_cib_Example-local-proxy-mgr.h"
#include "__zz_cib_internal/__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_internal/__zz_cib_Example-handle-helper.h"

namespace __zz_cib_ { namespace A {
class __zz_cib_Helper : public __zz_cib_::__zz_cib_MethodTableHelper
  , public __zz_cib_HandleHelper<::A, __zz_cib_local_proxy_mgr, __zz_cib_Helper> {
private:
  using __zz_cib_TYPE = __zz_cib_HANDLE;
  friend class __zz_cib_HandleHelper<::A, __zz_cib_local_proxy_mgr, __zz_cib_Helper>;
  static const __zz_cib_MethodTable* __zz_cib_get_proxy_method_table();
  friend class ::A;

  __zz_cib_Helper()
    : __zz_cib_::__zz_cib_MethodTableHelper(
      __zz_cib_Example_GetMethodTable(__zz_cib_classid))
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
  static int VirtualFunction_2(const __zz_cib_TYPE* __zz_cib_obj) {
    using VirtualFunctionProc = int (__zz_cib_decl *) (const __zz_cib_TYPE*);
    return instance().invoke<VirtualFunctionProc, __zz_cib_methodid::VirtualFunction_2>(
      __zz_cib_obj
      );
  }
  static void __zz_cib_delete_3(__zz_cib_TYPE* __zz_cib_obj) {
    if (__zz_cib_obj) {
      using __zz_cib_deleteProc = void (__zz_cib_decl *) (__zz_cib_TYPE*);
      return instance().invoke<__zz_cib_deleteProc, __zz_cib_methodid::__zz_cib_delete_3>(
        __zz_cib_obj
        );
    }
  }
  static std::uint32_t __zz_cib_get_class_id(__zz_cib_HANDLE** __zz_cib_obj) {
    using __zz_cib_get_class_idProc = std::uint32_t (__zz_cib_decl *) (__zz_cib_HANDLE**);
    return instance().invoke<__zz_cib_get_class_idProc, __zz_cib_methodid::__zz_cib_get_class_id_4>(__zz_cib_obj);
  }
  static ::A* __zz_cib_create_proxy(__zz_cib_HANDLE* h);
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
        return instance().invoke<__zz_cib_release_proxyProc, __zz_cib_methodid::__zz_cib_release_proxy_5>(
        __zz_cib_obj->__zz_cib_h_);
    }
  }
};
}}

namespace __zz_cib_ { namespace B {
class __zz_cib_Helper : public __zz_cib_::__zz_cib_MethodTableHelper
  , public __zz_cib_HandleHelper<::B, __zz_cib_local_proxy_mgr, __zz_cib_Helper> {
private:
  using __zz_cib_TYPE = __zz_cib_HANDLE;
  friend class __zz_cib_HandleHelper<::B, __zz_cib_local_proxy_mgr, __zz_cib_Helper>;
  friend class ::B;

  __zz_cib_Helper()
    : __zz_cib_::__zz_cib_MethodTableHelper(
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
  static int VirtualFunction_2(const __zz_cib_TYPE* __zz_cib_obj) {
    using VirtualFunctionProc = int (__zz_cib_decl *) (const __zz_cib_TYPE*);
    return instance().invoke<VirtualFunctionProc, __zz_cib_methodid::VirtualFunction_2>(
      __zz_cib_obj
      );
  }
  static void __zz_cib_delete_3(__zz_cib_TYPE* __zz_cib_obj) {
    if (__zz_cib_obj) {
      using __zz_cib_deleteProc = void (__zz_cib_decl *) (__zz_cib_TYPE*);
      return instance().invoke<__zz_cib_deleteProc, __zz_cib_methodid::__zz_cib_delete_3>(
        __zz_cib_obj
        );
    }
  }
  static __zz_cib_HANDLE* __zz_cib_cast_to___A_4(__zz_cib_HANDLE* __zz_cib_obj) {
    using __zz_cib_cast_to___AProc = __zz_cib_HANDLE* (__zz_cib_decl *) (__zz_cib_HANDLE* h);
    return instance().invoke<__zz_cib_cast_to___AProc, __zz_cib_methodid::__zz_cib_cast_to___A_4>(__zz_cib_obj);
  }
  static ::B* __zz_cib_create_proxy(__zz_cib_HANDLE* h) {
    return new ::B(h);
  }
public:
    static ::B __zz_cib_obj_from_handle(__zz_cib_HANDLE* h) {
      return ::B(h);
    }
    static __zz_cib_HANDLE*& __zz_cib_get_handle(::B* __zz_cib_obj) {
      return __zz_cib_obj->__zz_cib_h_;
    }
    static __zz_cib_HANDLE* const& __zz_cib_get_handle(const ::B* __zz_cib_obj) {
      return __zz_cib_obj->__zz_cib_h_;
    }
    static __zz_cib_HANDLE* __zz_cib_release_handle(::B* __zz_cib_obj) {
      auto h = __zz_cib_obj->__zz_cib_h_;
      __zz_cib_obj->__zz_cib_h_ = nullptr;
      __zz_cib_::A::__zz_cib_Helper::__zz_cib_release_handle(__zz_cib_obj);
      return h;
    }
};
}}
