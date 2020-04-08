#pragma once


#include "int.h"
#include "value.h"
 namespace Example {
template<>
class Value<::Example::Int>
{
public:
  Value(Value<::Example::Int>&& rhs);
public:
  Value(const Value<::Example::Int>& );
  ~Value();
  Value(::Example::Int x);
  ::Example::Int GetValue() const;
  void SetValue(::Example::Int x);
  bool operator ==(const Value& rhs) const;

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(__ZZ_CIB_CLASS_NAME(Value<::Example::Int>), __ZZ_CIB_CLASS_NAME(Example::Value<::Example::Int>));
};
}

namespace __zz_cib_ {
using namespace ::Example;
template <>
struct __zz_cib_Helper<::Example::Value<::Example::Int>> : public __zz_cib_MethodTableHelper {
  using __zz_cib_AbiType = typename ::Example::Value<::Example::Int>::__zz_cib_AbiType;
  using _ProxyClass = ::Example::Value<::Example::Int>;
  friend class ::Example::Value<::Example::Int>;
  Example::__zz_cib_local_proxy_mgr<_ProxyClass> proxyMgr;
  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class256::__zz_cib_Class258::__zz_cib_methodid;

  __zz_cib_Helper()
    : __zz_cib_MethodTableHelper(
      __zz_cib_Example_GetMethodTable(__zz_cib_ids::__zz_cib_Class256::__zz_cib_Class258::__zz_cib_classid))
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
  template <typename ..._Args>
  static __zz_cib_AbiType __zz_cib_new_2(_Args... __zz_cib_args) {
    using __zz_cib_proc = __zz_cib_AbiType (__zz_cib_decl *) (_Args...);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_new_2>(
      __zz_cib_args...);
  }
  template <typename _RT>
  static auto GetValue_3(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::GetValue_3>(
      __zz_cib_obj
      );
  }
  template <typename _RT, typename ..._Args>
  static auto SetValue_4(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::SetValue_4>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto __zz_cib_OperatorCmpEq_5(const __zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType, _Args...);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_OperatorCmpEq_5>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  static ::Example::Value<::Example::Int>* __zz_cib_create_proxy(__zz_cib_AbiType h) {
    return new ::Example::Value<::Example::Int>(h);
  }
  static ::Example::Value<::Example::Int> __zz_cib_obj_from_handle(__zz_cib_AbiType h) {
    return ::Example::Value<::Example::Int>(h);
  }
  static __zz_cib_AbiType& __zz_cib_get_handle(::Example::Value<::Example::Int>* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_AbiType const& __zz_cib_get_handle(const ::Example::Value<::Example::Int>* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_AbiType __zz_cib_release_handle(::Example::Value<::Example::Int>* __zz_cib_obj) {
    if (__zz_cib_obj->__zz_cib_h_ == nullptr) return nullptr;
    __zz_cib_remove_proxy(__zz_cib_obj->__zz_cib_h_);
    auto h = __zz_cib_obj->__zz_cib_h_;
    __zz_cib_obj->__zz_cib_h_ = nullptr;
    return h;
  }
  static _ProxyClass* __zz_cib_from_handle(__zz_cib_AbiType h) {
    auto&  dis   = instance();
    auto* proxy = dis.proxyMgr.findProxy(h);
    if (proxy == nullptr)
      proxy = __zz_cib_create_proxy(h);
    return proxy;
  }
  static void __zz_cib_add_proxy(_ProxyClass* __zz_cib_obj, __zz_cib_AbiType h) {
    auto& dis = instance();
    dis.proxyMgr.addProxy(__zz_cib_obj, h);
  }
  static void __zz_cib_remove_proxy(__zz_cib_AbiType h) {
    auto& dis = instance();
      dis.proxyMgr.removeProxy(h);
  }
};
}
namespace Example {

inline Example::Value<::Example::Int>::Value(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

inline Example::Value<::Example::Int>::Value(Value<::Example::Int>&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

inline Example::Value<::Example::Int>::Value(const ::Example::Value<::Example::Int>& __zz_cib_param0)
  : Example::Value<::Example::Int>(__zz_cib_MyHelper::__zz_cib_copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
  {}

inline Example::Value<::Example::Int>::~Value() {
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete_1(
    h
  );
}

inline Example::Value<::Example::Int>::Value(::Example::Int x)
  : Example::Value<::Example::Int>(__zz_cib_MyHelper::__zz_cib_new_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(x)>(std::move(x))))
  {}

inline ::Example::Int Example::Value<::Example::Int>::GetValue() const {
  return __zz_cib_::__zz_cib_FromRValueAbiType<::Example::Int>(
    __zz_cib_MyHelper::GetValue_3<__zz_cib_::__zz_cib_RValueAbiType_t<::Example::Int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

inline void Example::Value<::Example::Int>::SetValue(::Example::Int x) {
  __zz_cib_MyHelper::SetValue_4<__zz_cib_::__zz_cib_RValueAbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(x)>(std::move(x))
  );
}

inline bool Example::Value<::Example::Int>::operator ==(const ::Example::Value<::Example::Int>& rhs) const {
  return __zz_cib_::__zz_cib_FromRValueAbiType<bool>(
    __zz_cib_MyHelper::__zz_cib_OperatorCmpEq_5<__zz_cib_::__zz_cib_RValueAbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}
}
