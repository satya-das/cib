#pragma once


#include "int.h"
#include "value.h"

namespace __zz_cib_ { namespace Example { namespace __zz_cib_Class258 {
class __zz_cib_Helper;
struct __zz_cib_Delegator;
}}}
 namespace Example {
template<>
class Value<::Example::Int>
{
public:
  Value(Value<::Example::Int>&& rhs);
public:
  Value(Value<::Example::Int> const & );
  ~Value();
  Value(::Example::Int x);
  ::Example::Int GetValue() const;
  void SetValue(::Example::Int x);
  bool operator ==(Value const & rhs) const;

private:
  __ZZ_CIB_CLASS_INTERNAL_DEF(__ZZ_CIB_CLASS_NAME(Value<::Example::Int>), __ZZ_CIB_CLASS_NAME(Example::__zz_cib_Class258));
};
}

namespace __zz_cib_ {
using namespace ::Example;
namespace Example {
using namespace ::Example;
namespace __zz_cib_Class258 {
class __zz_cib_Helper : public __zz_cib_MethodTableHelper
  , public __zz_cib_HandleHelper<::Example::Value<::Example::Int>, __zz_cib_Helper> {
private:
  using __zz_cib_TYPE = __zz_cib_HANDLE;
  friend class __zz_cib_HandleHelper<::Example::Value<::Example::Int>, __zz_cib_Helper>;
  using _ProxyClass = ::Example::Value<::Example::Int>;
  friend class ::Example::Value<::Example::Int>;
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
  static __zz_cib_TYPE* __zz_cib_new(__zz_cib_HANDLE* x) {
    using __zz_cib_proc = __zz_cib_TYPE* (__zz_cib_decl *) (__zz_cib_HANDLE* x);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_new>(
      x);
  }
  static __zz_cib_HANDLE* GetValue(const __zz_cib_TYPE* __zz_cib_obj) {
    using __zz_cib_proc = __zz_cib_HANDLE* (__zz_cib_decl *) (const __zz_cib_TYPE*);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::GetValue>(
      __zz_cib_obj
      );
  }
  static void SetValue(__zz_cib_TYPE* __zz_cib_obj, __zz_cib_HANDLE* x) {
    using __zz_cib_proc = void (__zz_cib_decl *) (__zz_cib_TYPE*, __zz_cib_HANDLE* x);
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
  static ::Example::Value<::Example::Int>* __zz_cib_create_proxy(__zz_cib_HANDLE* h) {
    return new ::Example::Value<::Example::Int>(h);
  }
public:
  static ::Example::Value<::Example::Int> __zz_cib_obj_from_handle(__zz_cib_HANDLE* h) {
    return ::Example::Value<::Example::Int>(h);
  }
  static __zz_cib_HANDLE*& __zz_cib_get_handle(::Example::Value<::Example::Int>* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_HANDLE* const& __zz_cib_get_handle(const ::Example::Value<::Example::Int>* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_HANDLE* __zz_cib_release_handle(::Example::Value<::Example::Int>* __zz_cib_obj) {
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

inline Example::Value<::Example::Int>::Value(__zz_cib_::__zz_cib_HANDLE* h)
  : __zz_cib_h_(h)
{
  __zz_cib_::Example::__zz_cib_Class258::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

inline Example::Value<::Example::Int>::Value(Value<::Example::Int>&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_::Example::__zz_cib_Class258::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

inline Example::Value<::Example::Int>::Value(::Example::Value<::Example::Int> const & __zz_cib_param0)
  : Example::Value<::Example::Int>(__zz_cib_::Example::__zz_cib_Class258::__zz_cib_Helper::__zz_cib_copy(__zz_cib_::Example::__zz_cib_Class258::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

inline Example::Value<::Example::Int>::~Value() {
  auto h = __zz_cib_::Example::__zz_cib_Class258::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::Example::__zz_cib_Class258::__zz_cib_Helper::__zz_cib_delete(h);
}

inline Example::Value<::Example::Int>::Value(::Example::Int x)
  : Example::Value<::Example::Int>(__zz_cib_::Example::__zz_cib_Class258::__zz_cib_Helper::__zz_cib_new(__zz_cib_::Example::Int::__zz_cib_Helper::__zz_cib_handle(x)))
{}

inline ::Example::Int Example::Value<::Example::Int>::GetValue() const {
  return __zz_cib_::Example::Int::__zz_cib_Helper::__zz_cib_obj_from_handle(
__zz_cib_::Example::__zz_cib_Class258::__zz_cib_Helper::GetValue(__zz_cib_h_)
);
}

inline void Example::Value<::Example::Int>::SetValue(::Example::Int x) {
  __zz_cib_::Example::__zz_cib_Class258::__zz_cib_Helper::SetValue(__zz_cib_h_, __zz_cib_::Example::Int::__zz_cib_Helper::__zz_cib_handle(x));
}

inline bool Example::Value<::Example::Int>::operator ==(::Example::Value<::Example::Int> const & rhs) const {
  return __zz_cib_::Example::__zz_cib_Class258::__zz_cib_Helper::__zz_cib_OperatorCmpEq(__zz_cib_h_, __zz_cib_::Example::__zz_cib_Class258::__zz_cib_Helper::__zz_cib_handle(rhs));
}
}