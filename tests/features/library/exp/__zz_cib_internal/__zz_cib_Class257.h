#pragma once


#include "template.h"

namespace __zz_cib_ { namespace __zz_cib_Class257 {
class __zz_cib_Helper;
struct __zz_cib_Delegator;
}}

template<>
class TemplateClassWithTwoParams<int, float>
{
public:
  TemplateClassWithTwoParams(TemplateClassWithTwoParams<int, float>&& rhs);
public:
  TemplateClassWithTwoParams(TemplateClassWithTwoParams<int, float> const & );
  ~TemplateClassWithTwoParams();
  TemplateClassWithTwoParams(int _a1, float _a2);
  int get1() const;
  float get2() const;

private:
  __ZZ_CIB_CLASS_INTERNAL_DEF(__ZZ_CIB_CLASS_NAME(TemplateClassWithTwoParams<int, float>), __ZZ_CIB_CLASS_NAME(__zz_cib_Class257));
};


namespace __zz_cib_ {
namespace __zz_cib_Class257 {
class __zz_cib_Helper : public __zz_cib_MethodTableHelper
  , public __zz_cib_HandleHelper<::TemplateClassWithTwoParams<int, float>, __zz_cib_Helper> {
private:
  using __zz_cib_TYPE = __zz_cib_HANDLE;
  friend class __zz_cib_HandleHelper<::TemplateClassWithTwoParams<int, float>, __zz_cib_Helper>;
  using _ProxyClass = ::TemplateClassWithTwoParams<int, float>;
  friend class ::TemplateClassWithTwoParams<int, float>;
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
  static __zz_cib_TYPE* __zz_cib_new(int _a1, float _a2) {
    using __zz_cib_proc = __zz_cib_TYPE* (__zz_cib_decl *) (int _a1, float _a2);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_new>(
      _a1, _a2);
  }
  static int get1(const __zz_cib_TYPE* __zz_cib_obj) {
    using __zz_cib_proc = int (__zz_cib_decl *) (const __zz_cib_TYPE*);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::get1>(
      __zz_cib_obj
      );
  }
  static float get2(const __zz_cib_TYPE* __zz_cib_obj) {
    using __zz_cib_proc = float (__zz_cib_decl *) (const __zz_cib_TYPE*);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::get2>(
      __zz_cib_obj
      );
  }
  static ::TemplateClassWithTwoParams<int, float>* __zz_cib_create_proxy(__zz_cib_HANDLE* h) {
    return new ::TemplateClassWithTwoParams<int, float>(h);
  }
public:
  static ::TemplateClassWithTwoParams<int, float> __zz_cib_obj_from_handle(__zz_cib_HANDLE* h) {
    return ::TemplateClassWithTwoParams<int, float>(h);
  }
  static __zz_cib_HANDLE*& __zz_cib_get_handle(::TemplateClassWithTwoParams<int, float>* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_HANDLE* const& __zz_cib_get_handle(const ::TemplateClassWithTwoParams<int, float>* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_HANDLE* __zz_cib_release_handle(::TemplateClassWithTwoParams<int, float>* __zz_cib_obj) {
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

inline TemplateClassWithTwoParams<int, float>::TemplateClassWithTwoParams(__zz_cib_::__zz_cib_HANDLE* h)
  : __zz_cib_h_(h)
{
  __zz_cib_::__zz_cib_Class257::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

inline TemplateClassWithTwoParams<int, float>::TemplateClassWithTwoParams(TemplateClassWithTwoParams<int, float>&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_::__zz_cib_Class257::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

inline TemplateClassWithTwoParams<int, float>::TemplateClassWithTwoParams(::TemplateClassWithTwoParams<int, float> const & __zz_cib_param0)
  : TemplateClassWithTwoParams<int, float>(__zz_cib_::__zz_cib_Class257::__zz_cib_Helper::__zz_cib_copy(__zz_cib_::__zz_cib_Class257::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

inline TemplateClassWithTwoParams<int, float>::~TemplateClassWithTwoParams() {
  auto h = __zz_cib_::__zz_cib_Class257::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::__zz_cib_Class257::__zz_cib_Helper::__zz_cib_delete(h);
}

inline TemplateClassWithTwoParams<int, float>::TemplateClassWithTwoParams(int _a1, float _a2)
  : TemplateClassWithTwoParams<int, float>(__zz_cib_::__zz_cib_Class257::__zz_cib_Helper::__zz_cib_new(_a1, _a2))
{}

inline int TemplateClassWithTwoParams<int, float>::get1() const {
  return __zz_cib_::__zz_cib_Class257::__zz_cib_Helper::get1(__zz_cib_h_);
}

inline float TemplateClassWithTwoParams<int, float>::get2() const {
  return __zz_cib_::__zz_cib_Class257::__zz_cib_Helper::get2(__zz_cib_h_);
}

