#pragma once


#include "value.h"

namespace __zz_cib_ { namespace __zz_cib_Class259 {
class __zz_cib_Helper;
struct __zz_cib_Delegator;
}}

template<>
class Value<int>
{
public:
  Value(Value<int>&& rhs);
public:
  Value(Value<int> const & );
  ~Value();
  Value(int value);
  int get() const;

private:
  __ZZ_CIB_CLASS_INTERNAL_DEF(Value<int>, __zz_cib_Class259);
};


namespace __zz_cib_ { namespace __zz_cib_Class259 {
class __zz_cib_Helper : public __zz_cib_MethodTableHelper
  , public __zz_cib_HandleHelper<::Value<int>, __zz_cib_Helper> {
private:
  using __zz_cib_TYPE = __zz_cib_HANDLE;
  friend class __zz_cib_HandleHelper<::Value<int>, __zz_cib_Helper>;
  using _ProxyClass = ::Value<int>;
  friend class ::Value<int>;
  templates::__zz_cib_local_proxy_mgr<_ProxyClass> proxyMgr;

  __zz_cib_Helper()
    : __zz_cib_MethodTableHelper(
      __zz_cib_templates_GetMethodTable(__zz_cib_classid))
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
  static __zz_cib_TYPE* __zz_cib_new(int value) {
    using __zz_cib_proc = __zz_cib_TYPE* (__zz_cib_decl *) (int value);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_new>(
      value);
  }
  static int get(const __zz_cib_TYPE* __zz_cib_obj) {
    using __zz_cib_proc = int (__zz_cib_decl *) (const __zz_cib_TYPE*);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::get>(
      __zz_cib_obj
      );
  }
  static ::Value<int>* __zz_cib_create_proxy(__zz_cib_HANDLE* h) {
    return new ::Value<int>(h);
  }
public:
  static ::Value<int> __zz_cib_obj_from_handle(__zz_cib_HANDLE* h) {
    return ::Value<int>(h);
  }
  static __zz_cib_HANDLE*& __zz_cib_get_handle(::Value<int>* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_HANDLE* const& __zz_cib_get_handle(const ::Value<int>* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_HANDLE* __zz_cib_release_handle(::Value<int>* __zz_cib_obj) {
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

inline Value<int>::Value(__zz_cib_::__zz_cib_HANDLE* h)
  : __zz_cib_h_(h)
{
  __zz_cib_::__zz_cib_Class259::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

inline Value<int>::Value(Value<int>&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_::__zz_cib_Class259::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

inline Value<int>::Value(::Value<int> const & __zz_cib_param0)
  : Value<int>(__zz_cib_::__zz_cib_Class259::__zz_cib_Helper::__zz_cib_copy(__zz_cib_::__zz_cib_Class259::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

inline Value<int>::~Value() {
  auto h = __zz_cib_::__zz_cib_Class259::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::__zz_cib_Class259::__zz_cib_Helper::__zz_cib_delete(h);
}

inline Value<int>::Value(int value)
  : Value<int>(__zz_cib_::__zz_cib_Class259::__zz_cib_Helper::__zz_cib_new(value))
{}

inline int Value<int>::get() const {
  return __zz_cib_::__zz_cib_Class259::__zz_cib_Helper::get(__zz_cib_h_);
}
