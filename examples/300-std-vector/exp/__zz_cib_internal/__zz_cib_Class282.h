#pragma once


#include <list>
#include <vector>

namespace __zz_cib_ {
using namespace ::std;
template <typename _T>
struct __zz_cib_Helper<::std::vector<::std::list<::C*>>, _T> : public __zz_cib_MethodTableHelper {
  static_assert(std::is_same_v<_T, ::std::vector<::std::list<::C*>>>);
  using __zz_cib_AbiType = typename _T::__zz_cib_AbiType;
  using _ProxyClass = _T;
  friend class ::std::vector<::std::list<::C*>>;
  Example::__zz_cib_local_proxy_mgr<_ProxyClass> proxyMgr;
  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class261::__zz_cib_Class282::__zz_cib_methodid;

  __zz_cib_Helper()
    : __zz_cib_MethodTableHelper(
      __zz_cib_Example_GetMethodTable(__zz_cib_ids::__zz_cib_Class261::__zz_cib_Class282::__zz_cib_classid))
  {}
  static __zz_cib_Helper& __zz_cib_instance() {
    static __zz_cib_Helper helper;
    return helper;
  }
  static __zz_cib_MethodTableHelper& __zz_cib_mtbl() {
    return __zz_cib_instance();
  }

  static __zz_cib_AbiType __zz_cib_new_0() {
    using __zz_cib_proc = __zz_cib_AbiType (__zz_cib_decl *) ();
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_new_0>(
      );
  }
  template <typename ..._Args>
  static __zz_cib_AbiType __zz_cib_new_1(_Args... __zz_cib_args) {
    using __zz_cib_proc = __zz_cib_AbiType (__zz_cib_decl *) (_Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_new_1>(
      __zz_cib_args...);
  }
  template <typename ..._Args>
  static __zz_cib_AbiType __zz_cib_copy_2(_Args... __zz_cib_args) {
    using __zz_cib_proc = __zz_cib_AbiType (__zz_cib_decl *) (_Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_copy_2>(
      __zz_cib_args...);
  }
  template <typename ..._Args>
  static __zz_cib_AbiType __zz_cib_new_3(_Args... __zz_cib_args) {
    using __zz_cib_proc = __zz_cib_AbiType (__zz_cib_decl *) (_Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_new_3>(
      __zz_cib_args...);
  }
  static auto __zz_cib_delete_4(__zz_cib_AbiType __zz_cib_obj) {
    if (__zz_cib_obj) {
      using __zz_cib_proc = void (__zz_cib_decl *) (__zz_cib_AbiType);
      return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_delete_4>(
        __zz_cib_obj
        );
    }
  }
  template <typename _RT, typename ..._Args>
  static auto __zz_cib_OperatorEqual_5(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_OperatorEqual_5>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto __zz_cib_OperatorEqual_6(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_OperatorEqual_6>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto assign_7(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::assign_7>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT>
  static auto begin_8(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::begin_8>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto begin_9(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::begin_9>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto end_10(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::end_10>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto end_11(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::end_11>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto rbegin_12(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::rbegin_12>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto rbegin_13(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::rbegin_13>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto rend_14(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::rend_14>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto rend_15(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::rend_15>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto cbegin_16(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::cbegin_16>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto cend_17(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::cend_17>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto crbegin_18(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::crbegin_18>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto crend_19(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::crend_19>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto size_20(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::size_20>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto max_size_21(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::max_size_21>(
      __zz_cib_obj
      );
  }
  template <typename _RT, typename ..._Args>
  static auto resize_22(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::resize_22>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT>
  static auto shrink_to_fit_23(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::shrink_to_fit_23>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto capacity_24(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::capacity_24>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto empty_25(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::empty_25>(
      __zz_cib_obj
      );
  }
  template <typename _RT, typename ..._Args>
  static auto reserve_26(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::reserve_26>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto __zz_cib_OperatorIndex_27(const __zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType, _Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_OperatorIndex_27>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto at_28(const __zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType, _Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::at_28>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT>
  static auto front_29(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::front_29>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto back_30(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::back_30>(
      __zz_cib_obj
      );
  }
  template <typename _RT, typename ..._Args>
  static auto push_back_31(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::push_back_31>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto push_back_32(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::push_back_32>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT>
  static auto pop_back_33(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::pop_back_33>(
      __zz_cib_obj
      );
  }
  template <typename _RT, typename ..._Args>
  static auto swap_34(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::swap_34>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT>
  static auto clear_35(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::clear_35>(
      __zz_cib_obj
      );
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
 namespace std {
template<>
class vector<::std::list<::C*>>
{
public:
  using value_type = ::std::list<::C*>;
  using pointer = ::std::list<::C*>*;
  using iterator = __zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>;
  using const_iterator = __zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >;
  using reverse_iterator = __zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::C*>>;
  using const_reverse_iterator = __zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::C*> const >;
  using const_reference = const value_type&;
  using size_type = size_t;
  vector()
    : std::vector<::std::list<::C*>>(__zz_cib_MyHelper::__zz_cib_new_0(
      ))
    {}
  vector(::std::vector<::std::list<::C*>>::size_type __n, const ::std::vector<::std::list<::C*>>::value_type& __value)
    : std::vector<::std::list<::C*>>(__zz_cib_MyHelper::__zz_cib_new_1(
            __zz_cib_::__zz_cib_ToAbiType<decltype(__n)>(std::move(__n)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(__value)>(__value)))
    {}
  vector(const ::std::vector<::std::list<::C*>>& __x)
    : std::vector<::std::list<::C*>>(__zz_cib_MyHelper::__zz_cib_copy_2(
            __zz_cib_::__zz_cib_ToAbiType<decltype(__x)>(__x)))
    {}
  vector(::std::vector<::std::list<::C*>>&& __x)
    : std::vector<::std::list<::C*>>(__zz_cib_MyHelper::__zz_cib_new_3(
            __zz_cib_::__zz_cib_ToAbiType<decltype(__x)>(std::move(__x))))
    {}
  ~vector() {
  auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
      __zz_cib_MyHelper::__zz_cib_delete_4(
      h
    );
  }
  ::std::vector<::std::list<::C*>>& operator=(const ::std::vector<::std::list<::C*>>& __x) {
      return __zz_cib_::__zz_cib_FromRValueAbiType<::std::vector<::std::list<::C*>>&>(
      __zz_cib_MyHelper::__zz_cib_OperatorEqual_5<__zz_cib_::__zz_cib_RValueAbiType_t<::std::vector<::std::list<::C*>>&>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_ToAbiType<decltype(__x)>(__x)
      )
    );
  }
  ::std::vector<::std::list<::C*>>& operator=(::std::vector<::std::list<::C*>>&& __x) {
      return __zz_cib_::__zz_cib_FromRValueAbiType<::std::vector<::std::list<::C*>>&>(
      __zz_cib_MyHelper::__zz_cib_OperatorEqual_6<__zz_cib_::__zz_cib_RValueAbiType_t<::std::vector<::std::list<::C*>>&>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_ToAbiType<decltype(__x)>(std::move(__x))
      )
    );
  }
  void assign(::std::vector<::std::list<::C*>>::size_type __n, const ::std::vector<::std::list<::C*>>::value_type& __val) {
      __zz_cib_MyHelper::assign_7<__zz_cib_::__zz_cib_RValueAbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(__n)>(std::move(__n)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(__val)>(__val)
    );
  }
  ::std::vector<::std::list<::C*>>::iterator begin() {
      return __zz_cib_::__zz_cib_FromRValueAbiType<::std::vector<::std::list<::C*>>::iterator>(
      __zz_cib_MyHelper::begin_8<__zz_cib_::__zz_cib_RValueAbiType_t<::std::vector<::std::list<::C*>>::iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  ::std::vector<::std::list<::C*>>::const_iterator begin() const {
      return __zz_cib_::__zz_cib_FromRValueAbiType<::std::vector<::std::list<::C*>>::const_iterator>(
      __zz_cib_MyHelper::begin_9<__zz_cib_::__zz_cib_RValueAbiType_t<::std::vector<::std::list<::C*>>::const_iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  ::std::vector<::std::list<::C*>>::iterator end() {
      return __zz_cib_::__zz_cib_FromRValueAbiType<::std::vector<::std::list<::C*>>::iterator>(
      __zz_cib_MyHelper::end_10<__zz_cib_::__zz_cib_RValueAbiType_t<::std::vector<::std::list<::C*>>::iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  ::std::vector<::std::list<::C*>>::const_iterator end() const {
      return __zz_cib_::__zz_cib_FromRValueAbiType<::std::vector<::std::list<::C*>>::const_iterator>(
      __zz_cib_MyHelper::end_11<__zz_cib_::__zz_cib_RValueAbiType_t<::std::vector<::std::list<::C*>>::const_iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  ::std::vector<::std::list<::C*>>::reverse_iterator rbegin() {
      return __zz_cib_::__zz_cib_FromRValueAbiType<::std::vector<::std::list<::C*>>::reverse_iterator>(
      __zz_cib_MyHelper::rbegin_12<__zz_cib_::__zz_cib_RValueAbiType_t<::std::vector<::std::list<::C*>>::reverse_iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  ::std::vector<::std::list<::C*>>::const_reverse_iterator rbegin() const {
      return __zz_cib_::__zz_cib_FromRValueAbiType<::std::vector<::std::list<::C*>>::const_reverse_iterator>(
      __zz_cib_MyHelper::rbegin_13<__zz_cib_::__zz_cib_RValueAbiType_t<::std::vector<::std::list<::C*>>::const_reverse_iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  ::std::vector<::std::list<::C*>>::reverse_iterator rend() {
      return __zz_cib_::__zz_cib_FromRValueAbiType<::std::vector<::std::list<::C*>>::reverse_iterator>(
      __zz_cib_MyHelper::rend_14<__zz_cib_::__zz_cib_RValueAbiType_t<::std::vector<::std::list<::C*>>::reverse_iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  ::std::vector<::std::list<::C*>>::const_reverse_iterator rend() const {
      return __zz_cib_::__zz_cib_FromRValueAbiType<::std::vector<::std::list<::C*>>::const_reverse_iterator>(
      __zz_cib_MyHelper::rend_15<__zz_cib_::__zz_cib_RValueAbiType_t<::std::vector<::std::list<::C*>>::const_reverse_iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  ::std::vector<::std::list<::C*>>::const_iterator cbegin() const {
      return __zz_cib_::__zz_cib_FromRValueAbiType<::std::vector<::std::list<::C*>>::const_iterator>(
      __zz_cib_MyHelper::cbegin_16<__zz_cib_::__zz_cib_RValueAbiType_t<::std::vector<::std::list<::C*>>::const_iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  ::std::vector<::std::list<::C*>>::const_iterator cend() const {
      return __zz_cib_::__zz_cib_FromRValueAbiType<::std::vector<::std::list<::C*>>::const_iterator>(
      __zz_cib_MyHelper::cend_17<__zz_cib_::__zz_cib_RValueAbiType_t<::std::vector<::std::list<::C*>>::const_iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  ::std::vector<::std::list<::C*>>::const_reverse_iterator crbegin() const {
      return __zz_cib_::__zz_cib_FromRValueAbiType<::std::vector<::std::list<::C*>>::const_reverse_iterator>(
      __zz_cib_MyHelper::crbegin_18<__zz_cib_::__zz_cib_RValueAbiType_t<::std::vector<::std::list<::C*>>::const_reverse_iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  ::std::vector<::std::list<::C*>>::const_reverse_iterator crend() const {
      return __zz_cib_::__zz_cib_FromRValueAbiType<::std::vector<::std::list<::C*>>::const_reverse_iterator>(
      __zz_cib_MyHelper::crend_19<__zz_cib_::__zz_cib_RValueAbiType_t<::std::vector<::std::list<::C*>>::const_reverse_iterator>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  ::std::vector<::std::list<::C*>>::size_type size() const {
      return __zz_cib_::__zz_cib_FromRValueAbiType<::std::vector<::std::list<::C*>>::size_type>(
      __zz_cib_MyHelper::size_20<__zz_cib_::__zz_cib_RValueAbiType_t<::std::vector<::std::list<::C*>>::size_type>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  ::std::vector<::std::list<::C*>>::size_type max_size() const {
      return __zz_cib_::__zz_cib_FromRValueAbiType<::std::vector<::std::list<::C*>>::size_type>(
      __zz_cib_MyHelper::max_size_21<__zz_cib_::__zz_cib_RValueAbiType_t<::std::vector<::std::list<::C*>>::size_type>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  void resize(::std::vector<::std::list<::C*>>::size_type __new_size, const ::std::vector<::std::list<::C*>>::value_type& __x) {
      __zz_cib_MyHelper::resize_22<__zz_cib_::__zz_cib_RValueAbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(__new_size)>(std::move(__new_size)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(__x)>(__x)
    );
  }
  void shrink_to_fit() {
      __zz_cib_MyHelper::shrink_to_fit_23<__zz_cib_::__zz_cib_RValueAbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }
  ::std::vector<::std::list<::C*>>::size_type capacity() const {
      return __zz_cib_::__zz_cib_FromRValueAbiType<::std::vector<::std::list<::C*>>::size_type>(
      __zz_cib_MyHelper::capacity_24<__zz_cib_::__zz_cib_RValueAbiType_t<::std::vector<::std::list<::C*>>::size_type>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  bool empty() const {
      return __zz_cib_::__zz_cib_FromRValueAbiType<bool>(
      __zz_cib_MyHelper::empty_25<__zz_cib_::__zz_cib_RValueAbiType_t<bool>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  void reserve(::std::vector<::std::list<::C*>>::size_type __n) {
      __zz_cib_MyHelper::reserve_26<__zz_cib_::__zz_cib_RValueAbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(__n)>(std::move(__n))
    );
  }
  const __zz_cib_::return_value_t<value_type> operator[](::std::vector<::std::list<::C*>>::size_type __n) const {
      return __zz_cib_::__zz_cib_FromRValueAbiType<const __zz_cib_::return_value_t<value_type>>(
      __zz_cib_MyHelper::__zz_cib_OperatorIndex_27<__zz_cib_::__zz_cib_RValueAbiType_t<const __zz_cib_::return_value_t<value_type>>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_ToAbiType<decltype(__n)>(std::move(__n))
      )
    );
  }
  const __zz_cib_::return_value_t<value_type> at(::std::vector<::std::list<::C*>>::size_type __n) const {
      return __zz_cib_::__zz_cib_FromRValueAbiType<const __zz_cib_::return_value_t<value_type>>(
      __zz_cib_MyHelper::at_28<__zz_cib_::__zz_cib_RValueAbiType_t<const __zz_cib_::return_value_t<value_type>>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_ToAbiType<decltype(__n)>(std::move(__n))
      )
    );
  }
  const __zz_cib_::return_value_t<value_type> front() const {
      return __zz_cib_::__zz_cib_FromRValueAbiType<const __zz_cib_::return_value_t<value_type>>(
      __zz_cib_MyHelper::front_29<__zz_cib_::__zz_cib_RValueAbiType_t<const __zz_cib_::return_value_t<value_type>>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  const __zz_cib_::return_value_t<value_type> back() const {
      return __zz_cib_::__zz_cib_FromRValueAbiType<const __zz_cib_::return_value_t<value_type>>(
      __zz_cib_MyHelper::back_30<__zz_cib_::__zz_cib_RValueAbiType_t<const __zz_cib_::return_value_t<value_type>>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  void push_back(const ::std::vector<::std::list<::C*>>::value_type& __x) {
      __zz_cib_MyHelper::push_back_31<__zz_cib_::__zz_cib_RValueAbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(__x)>(__x)
    );
  }
  void push_back(::std::vector<::std::list<::C*>>::value_type&& __x) {
      __zz_cib_MyHelper::push_back_32<__zz_cib_::__zz_cib_RValueAbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(__x)>(std::move(__x))
    );
  }
  void pop_back() {
      __zz_cib_MyHelper::pop_back_33<__zz_cib_::__zz_cib_RValueAbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }
  void swap(::std::vector<::std::list<::C*>>& __x) {
      __zz_cib_MyHelper::swap_34<__zz_cib_::__zz_cib_RValueAbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(__x)>(__x)
    );
  }
  void clear() {
      __zz_cib_MyHelper::clear_35<__zz_cib_::__zz_cib_RValueAbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

private:
  __ZZ_CIB_TEMPLATE_CLASS_INTERNALS(__ZZ_CIB_CLASS_NAME(vector<::std::list<::C*>>), __ZZ_CIB_CLASS_NAME(std::vector<::std::list<::C*>>));
};
}
