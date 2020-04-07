#pragma once

#include "__zz_cib_internal/__zz_cib_TemplateTests-client-type-handler.h"
#include "__zz_cib_internal/__zz_cib_TemplateTests-def.h"
#include "__zz_cib_internal/__zz_cib_TemplateTests-handle-helper.h"
#include "__zz_cib_internal/__zz_cib_TemplateTests-ids.h"
#include "__zz_cib_internal/__zz_cib_TemplateTests-local-proxy-mgr.h"
#include "__zz_cib_internal/__zz_cib_TemplateTests-mtable-helper.h"
#include "__zz_cib_internal/__zz_cib_TemplateTests-remote-proxy-mgr.h"

namespace __zz_cib_ {
template <>
struct __zz_cib_Helper<::TemplateTest> : public __zz_cib_MethodTableHelper {
  using __zz_cib_AbiType = typename ::TemplateTest::__zz_cib_AbiType;
  using _ProxyClass = ::TemplateTest;
  friend class ::TemplateTest;
  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class256::__zz_cib_methodid;

  __zz_cib_Helper()
    : __zz_cib_MethodTableHelper(
      __zz_cib_TemplateTests_GetMethodTable(__zz_cib_ids::__zz_cib_Class256::__zz_cib_classid))
  {}
  static __zz_cib_Helper& instance() {
    static __zz_cib_Helper helper;
    return helper;
  }

  template <typename ..._Args>
  static __zz_cib_AbiType __zz_cib_copy_0(_Args... __zz_cib_args) {
    using __zz_cib_proc = __zz_cib_AbiType (__zz_cib_decl *) (_Args...);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_copy_0>(
      __zz_cib_args...);
  }
  static auto __zz_cib_delete_1(__zz_cib_AbiType __zz_cib_obj) {
    if (__zz_cib_obj) {
      using __zz_cib_proc = void (__zz_cib_decl *) (__zz_cib_AbiType);
      return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_delete_1>(
        __zz_cib_obj
        );
    }
  }
  static __zz_cib_AbiType __zz_cib_new_2() {
    using __zz_cib_proc = __zz_cib_AbiType (__zz_cib_decl *) ();
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_new_2>(
      );
  }
  template <typename _RT>
  static auto getTemplateClassWithOneParam_3(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::getTemplateClassWithOneParam_3>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto getTemplateClassWithTwoParams_4(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::getTemplateClassWithTwoParams_4>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto getTemplateClassWithTwoParamsAndDefaultParameter_5(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::getTemplateClassWithTwoParamsAndDefaultParameter_5>(
      __zz_cib_obj
      );
  }
  static ::TemplateTest* __zz_cib_create_proxy(__zz_cib_AbiType h) {
    return new ::TemplateTest(h);
  }
  static ::TemplateTest __zz_cib_obj_from_handle(__zz_cib_AbiType h) {
    return ::TemplateTest(h);
  }
  static __zz_cib_AbiType& __zz_cib_get_handle(::TemplateTest* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_AbiType const& __zz_cib_get_handle(const ::TemplateTest* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_AbiType __zz_cib_release_handle(::TemplateTest* __zz_cib_obj) {
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
#include "__zz_cib_Class257.h"
#include "__zz_cib_Class258.h"
#include "__zz_cib_Class259.h"
