#pragma once


#include "value.h"

namespace __zz_cib_ { namespace Example { namespace __zz_cib_Class259 {
class __zz_cib_Helper;
struct __zz_cib_Delegator;
}}}
 namespace Example {
template<>
class Value<float>
{
public:
  Value(Value<float>&& rhs);
public:
  Value(Value<float> const & );
  ~Value();
  Value(float x);
  float GetValue() const;
  void SetValue(float x);
  bool operator ==(Value const & rhs) const;

private:
  __ZZ_CIB_CLASS_INTERNAL_DEF(__ZZ_CIB_CLASS_NAME(Value<float>), __ZZ_CIB_CLASS_NAME(Example::__zz_cib_Class259));
};
}

namespace __zz_cib_ {
using namespace ::Example;
namespace Example {
using namespace ::Example;
namespace __zz_cib_Class259 {
class __zz_cib_Helper : public __zz_cib_MethodTableHelper
  , public __zz_cib_HandleHelper<::Example::Value<float>, __zz_cib_Helper> {
private:
  using __zz_cib_TYPE = __zz_cib_HANDLE;
  friend class __zz_cib_HandleHelper<::Example::Value<float>, __zz_cib_Helper>;
  using _ProxyClass = ::Example::Value<float>;
  friend class ::Example::Value<float>;
  Example::__zz_cib_local_proxy_mgr<_ProxyClass> proxyMgr;

  __zz_cib_Helper()
    : __zz_cib_MethodTableHelper(
      __zz_cib_Example_GetMethodTable(__zz_cib_classid))
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
  static __zz_cib_TYPE* __zz_cib_new(float x) {
    using __zz_cib_proc = __zz_cib_TYPE* (__zz_cib_decl *) (float x);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_new>(
      x);
  }
  static float GetValue(const __zz_cib_TYPE* __zz_cib_obj) {
    using __zz_cib_proc = float (__zz_cib_decl *) (const __zz_cib_TYPE*);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::GetValue>(
      __zz_cib_obj
      );
  }
  static void SetValue(__zz_cib_TYPE* __zz_cib_obj, float x) {
    using __zz_cib_proc = void (__zz_cib_decl *) (__zz_cib_TYPE*, float x);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::SetValue>(
      __zz_cib_obj,
      x);
  }
  static bool __zz_cib_OperatorCmpEq(const __zz_cib_TYPE* __zz_cib_obj, __zz_cib_HANDLE const * rhs) {
    using __zz_cib_proc = bool (__zz_cib_decl *) (const __zz_cib_TYPE*, __zz_cib_HANDLE const * rhs);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_OperatorCmpEq>(
      __zz_cib_obj,
      rhs);
  }
  static ::Example::Value<float>* __zz_cib_create_proxy(__zz_cib_HANDLE* h) {
    return new ::Example::Value<float>(h);
  }
public:
  static ::Example::Value<float> __zz_cib_obj_from_handle(__zz_cib_HANDLE* h) {
    return ::Example::Value<float>(h);
  }
  static __zz_cib_HANDLE*& __zz_cib_get_handle(::Example::Value<float>* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_HANDLE* const& __zz_cib_get_handle(const ::Example::Value<float>* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_HANDLE* __zz_cib_release_handle(::Example::Value<float>* __zz_cib_obj) {
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
}}}
namespace Example {

inline Example::Value<float>::Value(__zz_cib_::__zz_cib_HANDLE* h)
  : __zz_cib_h_(h)
{
  __zz_cib_::Example::__zz_cib_Class259::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

inline Example::Value<float>::Value(Value<float>&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_::Example::__zz_cib_Class259::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

inline Example::Value<float>::Value(::Example::Value<float> const & __zz_cib_param0)
  : Example::Value<float>(__zz_cib_::Example::__zz_cib_Class259::__zz_cib_Helper::__zz_cib_copy(__zz_cib_::Example::__zz_cib_Class259::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

inline Example::Value<float>::~Value() {
  auto h = __zz_cib_::Example::__zz_cib_Class259::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::Example::__zz_cib_Class259::__zz_cib_Helper::__zz_cib_delete(h);
}

inline Example::Value<float>::Value(float x)
  : Example::Value<float>(__zz_cib_::Example::__zz_cib_Class259::__zz_cib_Helper::__zz_cib_new(x))
{}

inline float Example::Value<float>::GetValue() const {
  return __zz_cib_::Example::__zz_cib_Class259::__zz_cib_Helper::GetValue(__zz_cib_h_);
}

inline void Example::Value<float>::SetValue(float x) {
  __zz_cib_::Example::__zz_cib_Class259::__zz_cib_Helper::SetValue(__zz_cib_h_, x);
}

inline bool Example::Value<float>::operator ==(::Example::Value<float> const & rhs) const {
  return __zz_cib_::Example::__zz_cib_Class259::__zz_cib_Helper::__zz_cib_OperatorCmpEq(__zz_cib_h_, __zz_cib_::Example::__zz_cib_Class259::__zz_cib_Helper::__zz_cib_handle(rhs));
}
}
