#pragma once


#include "C.h"
#include "__zz_cib_stl-helpers/__zz_cib_bidirectional_reverse_iterator.h"

namespace __zz_cib_ {
using namespace ::__zz_cib_stl_helpers;
template <typename _T>
struct __zz_cib_Helper<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::C const >, _T> : public __zz_cib_MethodTableHelper {
  static_assert(std::is_same_v<_T, ::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::C const >>);
  using __zz_cib_AbiType = typename _T::__zz_cib_AbiType;
  using _ProxyClass = _T;
  friend class ::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::C const >;
  Example::__zz_cib_local_proxy_mgr<_ProxyClass> proxyMgr;
  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class256::__zz_cib_Class271::__zz_cib_methodid;

  __zz_cib_Helper()
    : __zz_cib_MethodTableHelper(
      __zz_cib_Example_GetMethodTable(__zz_cib_ids::__zz_cib_Class256::__zz_cib_Class271::__zz_cib_classid))
  {}
  static __zz_cib_Helper& __zz_cib_instance() {
    static __zz_cib_Helper helper;
    return helper;
  }
  static __zz_cib_MethodTableHelper& __zz_cib_mtbl() {
    return __zz_cib_instance();
  }

  template <typename ..._Args>
  static __zz_cib_AbiType __zz_cib_copy_0(_Args... __zz_cib_args) {
    using __zz_cib_proc = __zz_cib_AbiType (__zz_cib_decl *) (_Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_copy_0>(
      __zz_cib_args...);
  }
  static auto __zz_cib_delete_1(__zz_cib_AbiType __zz_cib_obj) {
    if (__zz_cib_obj) {
      using __zz_cib_proc = void (__zz_cib_decl *) (__zz_cib_AbiType);
      return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_delete_1>(
        __zz_cib_obj
        );
    }
  }
  static __zz_cib_AbiType __zz_cib_new_2() {
    using __zz_cib_proc = __zz_cib_AbiType (__zz_cib_decl *) ();
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_new_2>(
      );
  }
  template <typename _RT>
  static auto __zz_cib_OperatorMul_3(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_OperatorMul_3>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto __zz_cib_OperatorArrow_4(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_OperatorArrow_4>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto __zz_cib_OperatorInc_5(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_OperatorInc_5>(
      __zz_cib_obj
      );
  }
  template <typename _RT, typename ..._Args>
  static auto __zz_cib_OperatorInc_6(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_OperatorInc_6>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT>
  static auto __zz_cib_OperatorDec_7(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_OperatorDec_7>(
      __zz_cib_obj
      );
  }
  template <typename _RT, typename ..._Args>
  static auto __zz_cib_OperatorDec_8(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_OperatorDec_8>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto __zz_cib_OperatorCmpEq_9(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_OperatorCmpEq_9>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto __zz_cib_OperatorNotEq_10(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_OperatorNotEq_10>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  static _T* __zz_cib_create_proxy(__zz_cib_AbiType h) {
    return new _T(h);
  }
  static _T __zz_cib_obj_from_handle(__zz_cib_AbiType h) {
    return _T(h);
  }
  static __zz_cib_AbiType& __zz_cib_get_handle(_T* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_AbiType const& __zz_cib_get_handle(const _T* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_AbiType __zz_cib_release_handle(_T* __zz_cib_obj) {
    if (__zz_cib_obj->__zz_cib_h_ == nullptr) return nullptr;
    __zz_cib_remove_proxy(__zz_cib_obj->__zz_cib_h_);
    auto h = __zz_cib_obj->__zz_cib_h_;
    __zz_cib_obj->__zz_cib_h_ = nullptr;
    return h;
  }
  static _ProxyClass* __zz_cib_from_handle(__zz_cib_AbiType h) {
    auto&  dis   = __zz_cib_instance();
    auto* proxy = dis.proxyMgr.findProxy(h);
    if (proxy == nullptr)
      proxy = __zz_cib_create_proxy(h);
    return proxy;
  }
  static void __zz_cib_add_proxy(_ProxyClass* __zz_cib_obj, __zz_cib_AbiType h) {
    auto& dis = __zz_cib_instance();
    dis.proxyMgr.addProxy(__zz_cib_obj, h);
  }
  static void __zz_cib_remove_proxy(__zz_cib_AbiType h) {
    auto& dis = __zz_cib_instance();
      dis.proxyMgr.removeProxy(h);
  }
};
}
 namespace __zz_cib_stl_helpers {
template<>
class bidirectional_reverse_iterator<::C const >
{
public:
  bidirectional_reverse_iterator(const bidirectional_reverse_iterator<::C const >& __zz_cib_param0)
    : __zz_cib_stl_helpers::bidirectional_reverse_iterator<::C const >(__zz_cib_MyHelper::__zz_cib_copy_0(
            __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
    {}
  ~bidirectional_reverse_iterator() {
  auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
      __zz_cib_MyHelper::__zz_cib_delete_1(
      h
    );
  }
  using pointer = const ::C*;
  using value_type = const ::C;
  using reference = typename std::conditional_t<std::is_pointer_v<value_type>, std::remove_const_t<value_type>, value_type&>;
  bidirectional_reverse_iterator()
    : __zz_cib_stl_helpers::bidirectional_reverse_iterator<::C const >(__zz_cib_MyHelper::__zz_cib_new_2(
      ))
    {}
  ::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::C const >::reference operator*() const {
      return __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::C const >::reference>(
      __zz_cib_MyHelper::__zz_cib_OperatorMul_3<__zz_cib_::__zz_cib_AbiType_t<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::C const >::reference>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  ::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::C const >::pointer operator->() const {
      return __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::C const >::pointer>(
      __zz_cib_MyHelper::__zz_cib_OperatorArrow_4<__zz_cib_::__zz_cib_AbiType_t<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::C const >::pointer>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  ::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::C const >& operator++() {
      return __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::C const >&>(
      __zz_cib_MyHelper::__zz_cib_OperatorInc_5<__zz_cib_::__zz_cib_AbiType_t<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::C const >&>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  ::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::C const > operator++(int __zz_cib_param0) {
      return __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::C const >>(
      __zz_cib_MyHelper::__zz_cib_OperatorInc_6<__zz_cib_::__zz_cib_AbiType_t<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::C const >>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(std::move(__zz_cib_param0))
      )
    );
  }
  ::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::C const >& operator--() {
      return __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::C const >&>(
      __zz_cib_MyHelper::__zz_cib_OperatorDec_7<__zz_cib_::__zz_cib_AbiType_t<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::C const >&>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  ::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::C const > operator--(int __zz_cib_param0) {
      return __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::C const >>(
      __zz_cib_MyHelper::__zz_cib_OperatorDec_8<__zz_cib_::__zz_cib_AbiType_t<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::C const >>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(std::move(__zz_cib_param0))
      )
    );
  }
  bool operator==(const ::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::C const >& rhs) {
      return __zz_cib_::__zz_cib_FromAbiType<bool>(
      __zz_cib_MyHelper::__zz_cib_OperatorCmpEq_9<__zz_cib_::__zz_cib_AbiType_t<bool>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
      )
    );
  }
  bool operator!=(const ::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::C const >& rhs) {
      return __zz_cib_::__zz_cib_FromAbiType<bool>(
      __zz_cib_MyHelper::__zz_cib_OperatorNotEq_10<__zz_cib_::__zz_cib_AbiType_t<bool>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
      )
    );
  }

private:
  __ZZ_CIB_TEMPLATE_CLASS_INTERNALS(__ZZ_CIB_CLASS_NAME(bidirectional_reverse_iterator<::C const >), __ZZ_CIB_CLASS_NAME(__zz_cib_stl_helpers::bidirectional_reverse_iterator<::C const >));
};
}
