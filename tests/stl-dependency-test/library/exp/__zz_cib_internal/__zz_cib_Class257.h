#pragma once

#include "__zz_cib_stl-helpers/__zz_cib_vector-iterator.h"

class ExampleClass;
namespace __zz_cib_ {
using namespace ::__zz_cib_stl_helpers;
template <typename T>
struct __zz_cib_Helper<::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>, T> : public __zz_cib_MethodTableHelper {
  static_assert(std::is_same_v<T, ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>>);
  using __zz_cib_AbiType = typename T::__zz_cib_AbiType;
  using _ProxyClass = T;
  friend class ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>;
  static bool instanceDeleted_;
  StlDependencyTest::__zz_cib_HandleProxyMap<_ProxyClass> proxyMgr;
  using __zz_cib_Methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class256::__zz_cib_Class257::__zz_cib_Methodid;

  __zz_cib_Helper()
    : __zz_cib_MethodTableHelper(
      __zz_cib_StlDependencyTestGetMethodTable(__zz_cib_ids::__zz_cib_Class256::__zz_cib_Class257::__zz_cib_classId))
  {}
  ~__zz_cib_Helper() {
    instanceDeleted_ = true;
  }
  static __zz_cib_Helper& __zz_cib_Instance() {
    static __zz_cib_Helper helper;
    return helper;
  }
  static __zz_cib_MethodTableHelper& __zz_cib_GetMethodTable() {
    return __zz_cib_Instance();
  }

  template <typename ..._Args>
  static __zz_cib_AbiType __zz_cib_Copy_0(_Args... __zz_cib_args) {
    using __zz_cib_ProcType = __zz_cib_AbiType (__zz_cib_decl *) (_Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::__zz_cib_Copy_0>(
      __zz_cib_args...);
  }
  static auto __zz_cib_Delete_1(__zz_cib_AbiType __zz_cib_obj) {
    if (__zz_cib_obj) {
      using __zz_cib_ProcType = void (__zz_cib_decl *) (__zz_cib_AbiType);
      return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::__zz_cib_Delete_1>(
        __zz_cib_obj
        );
    }
  }
  static __zz_cib_AbiType __zz_cib_New_2() {
    using __zz_cib_ProcType = __zz_cib_AbiType (__zz_cib_decl *) ();
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::__zz_cib_New_2>(
      );
  }
  template <typename _RT>
  static auto __zz_cib_OperatorMul_3(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::__zz_cib_OperatorMul_3>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto __zz_cib_OperatorArrow_4(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::__zz_cib_OperatorArrow_4>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto __zz_cib_OperatorMul_5(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::__zz_cib_OperatorMul_5>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto __zz_cib_OperatorInc_6(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::__zz_cib_OperatorInc_6>(
      __zz_cib_obj
      );
  }
  template <typename _RT, typename ..._Args>
  static auto __zz_cib_OperatorInc_7(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::__zz_cib_OperatorInc_7>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT>
  static auto __zz_cib_OperatorDec_8(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::__zz_cib_OperatorDec_8>(
      __zz_cib_obj
      );
  }
  template <typename _RT, typename ..._Args>
  static auto __zz_cib_OperatorDec_9(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::__zz_cib_OperatorDec_9>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto __zz_cib_OperatorIndex_10(const __zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::__zz_cib_OperatorIndex_10>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto __zz_cib_OperatorPlusEq_11(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::__zz_cib_OperatorPlusEq_11>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto __zz_cib_OperatorPlus_12(const __zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::__zz_cib_OperatorPlus_12>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto __zz_cib_OperatorMinusEq_13(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::__zz_cib_OperatorMinusEq_13>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto __zz_cib_OperatorMinus_14(const __zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::__zz_cib_OperatorMinus_14>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto __zz_cib_OperatorCmpEq_15(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::__zz_cib_OperatorCmpEq_15>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto __zz_cib_OperatorNotEq_16(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::__zz_cib_OperatorNotEq_16>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto __zz_cib_OperatorLT_17(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::__zz_cib_OperatorLT_17>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto __zz_cib_OperatorGT_18(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::__zz_cib_OperatorGT_18>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto __zz_cib_OperatorLE_19(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::__zz_cib_OperatorLE_19>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto __zz_cib_OperatorGE_20(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::__zz_cib_OperatorGE_20>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto __zz_cib_OperatorMinus_21(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::__zz_cib_OperatorMinus_21>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  static T* __zz_cib_CreateProxy(__zz_cib_AbiType h) {
    auto* const __zz_cib_obj = new T(h);
    return __zz_cib_obj;
  }
  static T __zz_cib_ObjectFromHandle(__zz_cib_AbiType h) {
    return T(h);
  }
  static __zz_cib_AbiType& __zz_cib_GetHandle(T* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_AbiType const& __zz_cib_GetHandle(const T* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_AbiType __zz_cib_ReleaseHandle(T* __zz_cib_obj) {
    if (__zz_cib_obj->__zz_cib_h_ == nullptr) return nullptr;
    __zz_cib_RemoveProxy(__zz_cib_obj->__zz_cib_h_);
    auto h = __zz_cib_obj->__zz_cib_h_;
    __zz_cib_obj->__zz_cib_h_ = nullptr;
    return h;
  }
  static _ProxyClass* __zz_cib_FromHandle(__zz_cib_AbiType h) {
    if (h == nullptr)
      return nullptr;
    auto&  dis   = __zz_cib_Instance();
    auto* proxy = dis.proxyMgr.FindProxy(h);
    if (proxy == nullptr)
      proxy = __zz_cib_CreateProxy(h);
    return proxy;
  }
  static void __zz_cib_AddProxy(_ProxyClass* __zz_cib_obj, __zz_cib_AbiType h) {
    auto& dis = __zz_cib_Instance();
    dis.proxyMgr.AddProxy(__zz_cib_obj, h);
  }
  static void __zz_cib_RemoveProxy(__zz_cib_AbiType h) {
    if (instanceDeleted_) return;
    auto& dis = __zz_cib_Instance();
      dis.proxyMgr.RemoveProxy(h);
  }
};
template <typename T>
bool __zz_cib_Helper<::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>, T>::instanceDeleted_ = false;
}
namespace __zz_cib_stl_helpers {
template<>
class vector_iterator<::ExampleClass*>
{
public:
  vector_iterator(const vector_iterator<::ExampleClass*>& __zz_cib_param0)
    : __zz_cib_stl_helpers::vector_iterator<::ExampleClass*>(__zz_cib_MyHelper::__zz_cib_Copy_0(
            __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
    {}
  ~vector_iterator() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
    __zz_cib_MyHelper::__zz_cib_Delete_1(
      h
    );
  }
  using pointer = typename std::iterator_traits<::ExampleClass**>::pointer;
  using iterator_category = typename std::iterator_traits<::ExampleClass**>::iterator_category;
  using value_type = typename std::iterator_traits<::ExampleClass**>::value_type;
  using difference_type = typename std::iterator_traits<::ExampleClass**>::difference_type;
  using reference = typename std::conditional<std::is_pointer_v<value_type>, std::remove_const_t<value_type>, typename std::iterator_traits<::ExampleClass**>::reference>::type;
  using const_reference = typename std::conditional<std::is_pointer_v<value_type>, std::remove_const_t<value_type>, typename std::iterator_traits<::ExampleClass* const *>::reference>::type;
  template <typename __zz_cib_Dummy = std::pair<vector_iterator<::ExampleClass*>, vector_iterator<::ExampleClass*>>>
  vector_iterator()
    : __zz_cib_stl_helpers::vector_iterator<::ExampleClass*>(__zz_cib_MyHelper::__zz_cib_New_2(
      ))
    {}
  template <typename __zz_cib_Dummy = std::pair<vector_iterator<::ExampleClass*>, vector_iterator<::ExampleClass*>>>
  ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>::reference operator*() {
    return __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>::reference>(
      __zz_cib_MyHelper::__zz_cib_OperatorMul_3<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>::reference>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  template <typename __zz_cib_Dummy = std::pair<vector_iterator<::ExampleClass*>, vector_iterator<::ExampleClass*>>>
  ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>::pointer operator->() {
    return __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>::pointer>(
      __zz_cib_MyHelper::__zz_cib_OperatorArrow_4<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>::pointer>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  template <typename __zz_cib_Dummy = std::pair<vector_iterator<::ExampleClass*>, vector_iterator<::ExampleClass*>>>
  ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>::const_reference operator*() const {
    return __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>::const_reference>(
      __zz_cib_MyHelper::__zz_cib_OperatorMul_5<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>::const_reference>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  template <typename __zz_cib_Dummy = std::pair<vector_iterator<::ExampleClass*>, vector_iterator<::ExampleClass*>>>
  ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>& operator++() {
    return __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>&>(
      __zz_cib_MyHelper::__zz_cib_OperatorInc_6<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>&>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  template <typename __zz_cib_Dummy = std::pair<vector_iterator<::ExampleClass*>, vector_iterator<::ExampleClass*>>>
  ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*> operator++(int __zz_cib_param0) {
    return __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>>(
      __zz_cib_MyHelper::__zz_cib_OperatorInc_7<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_LazyAbiType<__zz_cib_Dummy, decltype(__zz_cib_param0)>(std::move(__zz_cib_param0))
      )
    );
  }
  template <typename __zz_cib_Dummy = std::pair<vector_iterator<::ExampleClass*>, vector_iterator<::ExampleClass*>>>
  ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>& operator--() {
    return __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>&>(
      __zz_cib_MyHelper::__zz_cib_OperatorDec_8<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>&>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  template <typename __zz_cib_Dummy = std::pair<vector_iterator<::ExampleClass*>, vector_iterator<::ExampleClass*>>>
  ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*> operator--(int __zz_cib_param0) {
    return __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>>(
      __zz_cib_MyHelper::__zz_cib_OperatorDec_9<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_LazyAbiType<__zz_cib_Dummy, decltype(__zz_cib_param0)>(std::move(__zz_cib_param0))
      )
    );
  }
  template <typename __zz_cib_Dummy = std::pair<vector_iterator<::ExampleClass*>, vector_iterator<::ExampleClass*>>>
  ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>::reference operator[](::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>::difference_type n) const {
    return __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>::reference>(
      __zz_cib_MyHelper::__zz_cib_OperatorIndex_10<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>::reference>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_LazyAbiType<__zz_cib_Dummy, decltype(n)>(std::move(n))
      )
    );
  }
  template <typename __zz_cib_Dummy = std::pair<vector_iterator<::ExampleClass*>, vector_iterator<::ExampleClass*>>>
  ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>& operator+=(::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>::difference_type n) {
    return __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>&>(
      __zz_cib_MyHelper::__zz_cib_OperatorPlusEq_11<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>&>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_LazyAbiType<__zz_cib_Dummy, decltype(n)>(std::move(n))
      )
    );
  }
  template <typename __zz_cib_Dummy = std::pair<vector_iterator<::ExampleClass*>, vector_iterator<::ExampleClass*>>>
  ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*> operator+(::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>::difference_type n) const {
    return __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>>(
      __zz_cib_MyHelper::__zz_cib_OperatorPlus_12<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_LazyAbiType<__zz_cib_Dummy, decltype(n)>(std::move(n))
      )
    );
  }
  template <typename __zz_cib_Dummy = std::pair<vector_iterator<::ExampleClass*>, vector_iterator<::ExampleClass*>>>
  ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>& operator-=(::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>::difference_type n) {
    return __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>&>(
      __zz_cib_MyHelper::__zz_cib_OperatorMinusEq_13<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>&>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_LazyAbiType<__zz_cib_Dummy, decltype(n)>(std::move(n))
      )
    );
  }
  template <typename __zz_cib_Dummy = std::pair<vector_iterator<::ExampleClass*>, vector_iterator<::ExampleClass*>>>
  ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*> operator-(::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>::difference_type n) const {
    return __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>>(
      __zz_cib_MyHelper::__zz_cib_OperatorMinus_14<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_LazyAbiType<__zz_cib_Dummy, decltype(n)>(std::move(n))
      )
    );
  }
  template <typename __zz_cib_Dummy = std::pair<vector_iterator<::ExampleClass*>, vector_iterator<::ExampleClass*>>>
  bool operator==(const ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>& rhs) {
    return __zz_cib_::__zz_cib_FromAbiType<bool>(
      __zz_cib_MyHelper::__zz_cib_OperatorCmpEq_15<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, bool>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_LazyAbiType<__zz_cib_Dummy, decltype(rhs)>(rhs)
      )
    );
  }
  template <typename __zz_cib_Dummy = std::pair<vector_iterator<::ExampleClass*>, vector_iterator<::ExampleClass*>>>
  bool operator!=(const ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>& rhs) {
    return __zz_cib_::__zz_cib_FromAbiType<bool>(
      __zz_cib_MyHelper::__zz_cib_OperatorNotEq_16<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, bool>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_LazyAbiType<__zz_cib_Dummy, decltype(rhs)>(rhs)
      )
    );
  }
  template <typename __zz_cib_Dummy = std::pair<vector_iterator<::ExampleClass*>, vector_iterator<::ExampleClass*>>>
  bool operator<(const ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>& rhs) {
    return __zz_cib_::__zz_cib_FromAbiType<bool>(
      __zz_cib_MyHelper::__zz_cib_OperatorLT_17<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, bool>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_LazyAbiType<__zz_cib_Dummy, decltype(rhs)>(rhs)
      )
    );
  }
  template <typename __zz_cib_Dummy = std::pair<vector_iterator<::ExampleClass*>, vector_iterator<::ExampleClass*>>>
  bool operator>(const ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>& rhs) {
    return __zz_cib_::__zz_cib_FromAbiType<bool>(
      __zz_cib_MyHelper::__zz_cib_OperatorGT_18<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, bool>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_LazyAbiType<__zz_cib_Dummy, decltype(rhs)>(rhs)
      )
    );
  }
  template <typename __zz_cib_Dummy = std::pair<vector_iterator<::ExampleClass*>, vector_iterator<::ExampleClass*>>>
  bool operator<=(const ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>& rhs) {
    return __zz_cib_::__zz_cib_FromAbiType<bool>(
      __zz_cib_MyHelper::__zz_cib_OperatorLE_19<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, bool>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_LazyAbiType<__zz_cib_Dummy, decltype(rhs)>(rhs)
      )
    );
  }
  template <typename __zz_cib_Dummy = std::pair<vector_iterator<::ExampleClass*>, vector_iterator<::ExampleClass*>>>
  bool operator>=(const ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>& rhs) {
    return __zz_cib_::__zz_cib_FromAbiType<bool>(
      __zz_cib_MyHelper::__zz_cib_OperatorGE_20<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, bool>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_LazyAbiType<__zz_cib_Dummy, decltype(rhs)>(rhs)
      )
    );
  }
  template <typename __zz_cib_Dummy = std::pair<vector_iterator<::ExampleClass*>, vector_iterator<::ExampleClass*>>>
  ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>::difference_type operator-(const ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>& rhs) {
    return __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>::difference_type>(
      __zz_cib_MyHelper::__zz_cib_OperatorMinus_21<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, ::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>::difference_type>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
        __zz_cib_::__zz_cib_LazyAbiType<__zz_cib_Dummy, decltype(rhs)>(rhs)
      )
    );
  }

private:
  __ZZ_CIB_TEMPLATE_CLASS_INTERNALS(__ZZ_CIB_CLASS_NAME(vector_iterator<::ExampleClass*>), __ZZ_CIB_CLASS_NAME(__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>));
};
}
