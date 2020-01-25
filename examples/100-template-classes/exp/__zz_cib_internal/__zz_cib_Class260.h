#pragma once


#include "value.h"

namespace __zz_cib_ { namespace Example { namespace __zz_cib_Class260 {
class __zz_cib_Helper;
struct __zz_cib_Delegator;
}}}
 namespace Example {
template<>
class Value<int>
{
public:
  Value(Value<int>&& rhs);
public:
  Value(Value<int> const & );
  ~Value();
  Value(int x);
  int GetValue() const;
  void SetValue(int x);
  bool operator ==(Value const & rhs) const;

private:
  __ZZ_CIB_CLASS_INTERNAL_DEF(Value<int>, Example::__zz_cib_Class260);
};
}

namespace __zz_cib_ {
namespace Example {
using namespace ::Example;
namespace __zz_cib_Class260 {
class __zz_cib_Helper : public __zz_cib_MethodTableHelper
  , public __zz_cib_HandleHelper<::Example::Value<int>, __zz_cib_Helper> {
private:
  using __zz_cib_TYPE = __zz_cib_HANDLE;
  friend class __zz_cib_HandleHelper<::Example::Value<int>, __zz_cib_Helper>;
  using _ProxyClass = ::Example::Value<int>;
  friend class ::Example::Value<int>;
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
  static __zz_cib_TYPE* __zz_cib_new(int x) {
    using __zz_cib_proc = __zz_cib_TYPE* (__zz_cib_decl *) (int x);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_new>(
      x);
  }
  static int GetValue(const __zz_cib_TYPE* __zz_cib_obj) {
    using __zz_cib_proc = int (__zz_cib_decl *) (const __zz_cib_TYPE*);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::GetValue>(
      __zz_cib_obj
      );
  }
  static void SetValue(__zz_cib_TYPE* __zz_cib_obj, int x) {
    using __zz_cib_proc = void (__zz_cib_decl *) (__zz_cib_TYPE*, int x);
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
  static ::Example::Value<int>* __zz_cib_create_proxy(__zz_cib_HANDLE* h) {
    return new ::Example::Value<int>(h);
  }
public:
  static ::Example::Value<int> __zz_cib_obj_from_handle(__zz_cib_HANDLE* h) {
    return ::Example::Value<int>(h);
  }
  static __zz_cib_HANDLE*& __zz_cib_get_handle(::Example::Value<int>* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_HANDLE* const& __zz_cib_get_handle(const ::Example::Value<int>* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_HANDLE* __zz_cib_release_handle(::Example::Value<int>* __zz_cib_obj) {
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

inline Example::Value<int>::Value(__zz_cib_::__zz_cib_HANDLE* h)
  : __zz_cib_h_(h)
{
  __zz_cib_::Example::__zz_cib_Class260::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

inline Example::Value<int>::Value(Value<int>&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_::Example::__zz_cib_Class260::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

inline Example::Value<int>::Value(::Example::Value<int> const & __zz_cib_param0)
  : Example::Value<int>(__zz_cib_::Example::__zz_cib_Class260::__zz_cib_Helper::__zz_cib_copy(__zz_cib_::Example::__zz_cib_Class260::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

inline Example::Value<int>::~Value() {
  auto h = __zz_cib_::Example::__zz_cib_Class260::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::Example::__zz_cib_Class260::__zz_cib_Helper::__zz_cib_delete(h);
}

inline Example::Value<int>::Value(int x)
  : Example::Value<int>(__zz_cib_::Example::__zz_cib_Class260::__zz_cib_Helper::__zz_cib_new(x))
{}

inline int Example::Value<int>::GetValue() const {
  return __zz_cib_::Example::__zz_cib_Class260::__zz_cib_Helper::GetValue(__zz_cib_h_);
}

inline void Example::Value<int>::SetValue(int x) {
  __zz_cib_::Example::__zz_cib_Class260::__zz_cib_Helper::SetValue(__zz_cib_h_, x);
}

inline bool Example::Value<int>::operator ==(__zz_cib_ThisClass const & rhs) const {
  return __zz_cib_::Example::__zz_cib_Class260::__zz_cib_Helper::__zz_cib_OperatorCmpEq(__zz_cib_h_, __zz_cib_::Example::__zz_cib_Class260::__zz_cib_Helper::__zz_cib_handle(rhs));
}
}
