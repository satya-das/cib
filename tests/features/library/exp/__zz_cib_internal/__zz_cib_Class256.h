#pragma once


#include "template.h"

namespace __zz_cib_ { namespace __zz_cib_Class256 {
class __zz_cib_Helper;
struct __zz_cib_Delegator;
}}

template<>
class TemplateClassWithOneParam<int>
{
public:
  TemplateClassWithOneParam(TemplateClassWithOneParam<int>&& rhs);
public:
  TemplateClassWithOneParam(TemplateClassWithOneParam<int> const & );
  ~TemplateClassWithOneParam();
  TemplateClassWithOneParam(int _a1);
  int get() const;

private:
  __ZZ_CIB_CLASS_INTERNAL_DEF(__ZZ_CIB_CLASS_NAME(TemplateClassWithOneParam<int>), __ZZ_CIB_CLASS_NAME(__zz_cib_Class256));
};


namespace __zz_cib_ {
namespace __zz_cib_Class256 {
class __zz_cib_Helper : public __zz_cib_MethodTableHelper
  , public __zz_cib_HandleHelper<::TemplateClassWithOneParam<int>, __zz_cib_Helper> {
private:
  using __zz_cib_TYPE = __zz_cib_HANDLE;
  friend class __zz_cib_HandleHelper<::TemplateClassWithOneParam<int>, __zz_cib_Helper>;
  using _ProxyClass = ::TemplateClassWithOneParam<int>;
  friend class ::TemplateClassWithOneParam<int>;
  FeatureTests::__zz_cib_local_proxy_mgr<_ProxyClass> proxyMgr;

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
  static __zz_cib_TYPE* __zz_cib_new(int _a1) {
    using __zz_cib_proc = __zz_cib_TYPE* (__zz_cib_decl *) (int _a1);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_new>(
      _a1);
  }
  static int get(const __zz_cib_TYPE* __zz_cib_obj) {
    using __zz_cib_proc = int (__zz_cib_decl *) (const __zz_cib_TYPE*);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::get>(
      __zz_cib_obj
      );
  }
  static ::TemplateClassWithOneParam<int>* __zz_cib_create_proxy(__zz_cib_HANDLE* h) {
    return new ::TemplateClassWithOneParam<int>(h);
  }
public:
  static ::TemplateClassWithOneParam<int> __zz_cib_obj_from_handle(__zz_cib_HANDLE* h) {
    return ::TemplateClassWithOneParam<int>(h);
  }
  static __zz_cib_HANDLE*& __zz_cib_get_handle(::TemplateClassWithOneParam<int>* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_HANDLE* const& __zz_cib_get_handle(const ::TemplateClassWithOneParam<int>* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_HANDLE* __zz_cib_release_handle(::TemplateClassWithOneParam<int>* __zz_cib_obj) {
    if (__zz_cib_obj->__zz_cib_h_ == nullptr) return nullptr;
    __zz_cib_remove_proxy(__zz_cib_obj->__zz_cib_h_);
    auto h = __zz_cib_obj->__zz_cib_h_;
    __zz_cib_obj->__zz_cib_h_ = nullptr;
    return h;
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

inline TemplateClassWithOneParam<int>::TemplateClassWithOneParam(__zz_cib_::__zz_cib_HANDLE* h)
  : __zz_cib_h_(h)
{
  __zz_cib_::__zz_cib_Class256::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

inline TemplateClassWithOneParam<int>::TemplateClassWithOneParam(TemplateClassWithOneParam<int>&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_::__zz_cib_Class256::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

inline TemplateClassWithOneParam<int>::TemplateClassWithOneParam(::TemplateClassWithOneParam<int> const & __zz_cib_param0)
  : TemplateClassWithOneParam<int>(__zz_cib_::__zz_cib_Class256::__zz_cib_Helper::__zz_cib_copy(__zz_cib_::__zz_cib_Class256::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

inline TemplateClassWithOneParam<int>::~TemplateClassWithOneParam() {
  auto h = __zz_cib_::__zz_cib_Class256::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::__zz_cib_Class256::__zz_cib_Helper::__zz_cib_delete(h);
}

inline TemplateClassWithOneParam<int>::TemplateClassWithOneParam(int _a1)
  : TemplateClassWithOneParam<int>(__zz_cib_::__zz_cib_Class256::__zz_cib_Helper::__zz_cib_new(_a1))
{}

inline int TemplateClassWithOneParam<int>::get() const {
  return __zz_cib_::__zz_cib_Class256::__zz_cib_Helper::get(__zz_cib_h_);
}

