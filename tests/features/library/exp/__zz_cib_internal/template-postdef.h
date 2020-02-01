#pragma once

#include "__zz_cib_internal/__zz_cib_FeatureTests-def.h"
#include "__zz_cib_internal/__zz_cib_FeatureTests-ids.h"
#include "__zz_cib_internal/__zz_cib_FeatureTests-local-proxy-mgr.h"
#include "__zz_cib_internal/__zz_cib_FeatureTests-remote-proxy-mgr.h"
#include "__zz_cib_internal/__zz_cib_FeatureTests-mtable-helper.h"
#include "__zz_cib_internal/__zz_cib_FeatureTests-handle-helper.h"

namespace __zz_cib_ {
namespace TemplateTest {
class __zz_cib_Helper : public __zz_cib_MethodTableHelper
  , public __zz_cib_HandleHelper<::TemplateTest, __zz_cib_Helper> {
private:
  using __zz_cib_TYPE = __zz_cib_HANDLE;
  friend class __zz_cib_HandleHelper<::TemplateTest, __zz_cib_Helper>;
  using _ProxyClass = ::TemplateTest;
  friend class ::TemplateTest;

  __zz_cib_Helper()
    : __zz_cib_MethodTableHelper(
      __zz_cib_FeatureTests_GetMethodTable(__zz_cib_classid))
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
  static __zz_cib_HANDLE* getTemplateClassWithOneParam(const __zz_cib_TYPE* __zz_cib_obj) {
    using __zz_cib_proc = __zz_cib_HANDLE* (__zz_cib_decl *) (const __zz_cib_TYPE*);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::getTemplateClassWithOneParam>(
      __zz_cib_obj
      );
  }
  static __zz_cib_HANDLE* getTemplateClassWithTwoParams(const __zz_cib_TYPE* __zz_cib_obj) {
    using __zz_cib_proc = __zz_cib_HANDLE* (__zz_cib_decl *) (const __zz_cib_TYPE*);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::getTemplateClassWithTwoParams>(
      __zz_cib_obj
      );
  }
  static __zz_cib_HANDLE* getTemplateClassWithTwoParamsAndDefaultParameter(const __zz_cib_TYPE* __zz_cib_obj) {
    using __zz_cib_proc = __zz_cib_HANDLE* (__zz_cib_decl *) (const __zz_cib_TYPE*);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::getTemplateClassWithTwoParamsAndDefaultParameter>(
      __zz_cib_obj
      );
  }
  static ::TemplateTest* __zz_cib_create_proxy(__zz_cib_HANDLE* h) {
    return new ::TemplateTest(h);
  }
public:
  static ::TemplateTest __zz_cib_obj_from_handle(__zz_cib_HANDLE* h) {
    return ::TemplateTest(h);
  }
  static __zz_cib_HANDLE*& __zz_cib_get_handle(::TemplateTest* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_HANDLE* const& __zz_cib_get_handle(const ::TemplateTest* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_HANDLE* __zz_cib_release_handle(::TemplateTest* __zz_cib_obj) {
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
#include "__zz_cib_Class256.h"
#include "__zz_cib_Class257.h"
#include "__zz_cib_Class258.h"
