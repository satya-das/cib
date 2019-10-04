#pragma once

#include "__zz_cib_internal/__zz_cib_Example-def.h"
#include "__zz_cib_internal/__zz_cib_Example-ids.h"
#include "__zz_cib_internal/__zz_cib_Example-local-proxy-mgr.h"
#include "__zz_cib_internal/__zz_cib_Example-null-proxy-mgr.h"
#include "__zz_cib_internal/__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_internal/__zz_cib_Example-handle-helper.h"

namespace __zz_cib_ { namespace RValueExample {
class __zz_cib_Helper : public __zz_cib_MethodTableHelper
  , public __zz_cib_HandleHelper<::RValueExample, __zz_cib_local_proxy_mgr, __zz_cib_Helper> {
private:
  using __zz_cib_TYPE = __zz_cib_HANDLE;
  friend class __zz_cib_HandleHelper<::RValueExample, __zz_cib_local_proxy_mgr, __zz_cib_Helper>;
  friend class ::RValueExample;

  __zz_cib_Helper()
    : __zz_cib_MethodTableHelper(
      __zz_cib_Example_GetMethodTable(__zz_cib_classid))
  {}
  static __zz_cib_Helper& instance() {
    static __zz_cib_Helper helper;
    return helper;
  }

  static void __zz_cib_delete_0(__zz_cib_TYPE* __zz_cib_obj) {
    if (__zz_cib_obj) {
      using __zz_cib_deleteProc = void (__zz_cib_decl *) (__zz_cib_TYPE*);
      return instance().invoke<__zz_cib_deleteProc, __zz_cib_methodid::__zz_cib_delete_0>(
        __zz_cib_obj
        );
    }
  }
  static __zz_cib_TYPE* __zz_cib_new_1(std::int32_t val) {
    using __zz_cib_newProc = __zz_cib_TYPE* (__zz_cib_decl *) (std::int32_t val);
    return instance().invoke<__zz_cib_newProc, __zz_cib_methodid::__zz_cib_new_1>(
      val);
  }
  static __zz_cib_TYPE* __zz_cib_new_2(__zz_cib_HANDLE* __zz_cib_param0) {
    using __zz_cib_newProc = __zz_cib_TYPE* (__zz_cib_decl *) (__zz_cib_HANDLE* __zz_cib_param0);
    return instance().invoke<__zz_cib_newProc, __zz_cib_methodid::__zz_cib_new_2>(
      __zz_cib_param0);
  }
  static __zz_cib_TYPE* __zz_cib_copy_3(__zz_cib_HANDLE const * __zz_cib_param0) {
    using __zz_cib_copyProc = __zz_cib_TYPE* (__zz_cib_decl *) (__zz_cib_HANDLE const * __zz_cib_param0);
    return instance().invoke<__zz_cib_copyProc, __zz_cib_methodid::__zz_cib_copy_3>(
      __zz_cib_param0);
  }
  static __zz_cib_HANDLE* __zz_cib_OperatorEqual_4(__zz_cib_TYPE* __zz_cib_obj, __zz_cib_HANDLE* rhs) {
    using __zz_cib_OperatorEqualProc = __zz_cib_HANDLE* (__zz_cib_decl *) (__zz_cib_TYPE*, __zz_cib_HANDLE* rhs);
    return instance().invoke<__zz_cib_OperatorEqualProc, __zz_cib_methodid::__zz_cib_OperatorEqual_4>(
      __zz_cib_obj,
      rhs);
  }
  static __zz_cib_HANDLE* __zz_cib_OperatorEqual_5(__zz_cib_TYPE* __zz_cib_obj, __zz_cib_HANDLE const * rhs) {
    using __zz_cib_OperatorEqualProc = __zz_cib_HANDLE* (__zz_cib_decl *) (__zz_cib_TYPE*, __zz_cib_HANDLE const * rhs);
    return instance().invoke<__zz_cib_OperatorEqualProc, __zz_cib_methodid::__zz_cib_OperatorEqual_5>(
      __zz_cib_obj,
      rhs);
  }
  static std::int32_t Set_6(__zz_cib_TYPE* __zz_cib_obj, __zz_cib_HANDLE* x) {
    using SetProc = std::int32_t (__zz_cib_decl *) (__zz_cib_TYPE*, __zz_cib_HANDLE* x);
    return instance().invoke<SetProc, __zz_cib_methodid::Set_6>(
      __zz_cib_obj,
      x);
  }
  static std::int32_t GetValue_7(const __zz_cib_TYPE* __zz_cib_obj) {
    using GetValueProc = std::int32_t (__zz_cib_decl *) (const __zz_cib_TYPE*);
    return instance().invoke<GetValueProc, __zz_cib_methodid::GetValue_7>(
      __zz_cib_obj
      );
  }
  static ::RValueExample* __zz_cib_create_proxy(__zz_cib_HANDLE* h) {
    return new ::RValueExample(h);
  }
public:
    static ::RValueExample __zz_cib_obj_from_handle(__zz_cib_HANDLE* h) {
      return ::RValueExample(h);
    }
    static __zz_cib_HANDLE*& __zz_cib_get_handle(::RValueExample* __zz_cib_obj) {
      return __zz_cib_obj->__zz_cib_h_;
    }
    static __zz_cib_HANDLE* const& __zz_cib_get_handle(const ::RValueExample* __zz_cib_obj) {
      return __zz_cib_obj->__zz_cib_h_;
    }
    static __zz_cib_HANDLE* __zz_cib_release_handle(::RValueExample* __zz_cib_obj) {
      __zz_cib_remove_proxy(__zz_cib_obj->__zz_cib_h_);
      auto h = __zz_cib_obj->__zz_cib_h_;
      __zz_cib_obj->__zz_cib_h_ = nullptr;
      return h;
    }
};
}}
