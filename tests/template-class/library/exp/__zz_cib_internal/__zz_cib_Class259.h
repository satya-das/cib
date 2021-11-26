#pragma once


#include "template.h"

namespace __zz_cib_ {
template <typename T>
struct __zz_cib_Helper<::TemplateClassWithTwoParamsAndDefaultParameter<int, int>, T> : public __zz_cib_MethodTableHelper {
  static_assert(std::is_same_v<T, ::TemplateClassWithTwoParamsAndDefaultParameter<int, int>>,
    "Parameter 'T' is only to delay instantiation of the specialization. It is always the same as first parameter.");

  using _ProxyClass = T;
  using __zz_cib_AbiType = typename _ProxyClass::__zz_cib_AbiType;
  friend class ::TemplateClassWithTwoParamsAndDefaultParameter<int, int>;
  static bool instanceDeleted_;
  TemplateTests::__zz_cib_ImplProxyMap<_ProxyClass> implProxyMap_;
  using __zz_cib_MethodId = __zz_cib_::__zz_cib_ids::__zz_cib_Class259::__zz_cib_MethodId;

  __zz_cib_Helper()
    : __zz_cib_MethodTableHelper(
      __zz_cib_TemplateTestsGetMethodTable(__zz_cib_ids::__zz_cib_Class259::__zz_cib_classId))
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
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_Copy_0>(
      __zz_cib_args...);
  }
  static auto __zz_cib_Delete_1(__zz_cib_AbiType __zz_cib_obj) {
    if (__zz_cib_obj) {
      using __zz_cib_ProcType = void (__zz_cib_decl *) (__zz_cib_AbiType);
      return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_Delete_1>(
        __zz_cib_obj
        );
    }
  }
  template <typename ..._Args>
  static __zz_cib_AbiType __zz_cib_New_2(_Args... __zz_cib_args) {
    using __zz_cib_ProcType = __zz_cib_AbiType (__zz_cib_decl *) (_Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_New_2>(
      __zz_cib_args...);
  }
  template <typename _RT>
  static auto get1_3(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::get1_3>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto get2_4(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::get2_4>(
      __zz_cib_obj
      );
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
    auto* proxy = dis.implProxyMap_.FindProxy(h);
    if (proxy == nullptr)
      proxy = __zz_cib_CreateProxy(h);
    return proxy;
  }
  static void __zz_cib_AddProxy(_ProxyClass* __zz_cib_obj, __zz_cib_AbiType h) {
    auto& dis = __zz_cib_Instance();
    dis.implProxyMap_.AddProxy(__zz_cib_obj, h);
  }
  static void __zz_cib_RemoveProxy(__zz_cib_AbiType h) {
    if (instanceDeleted_) return;
    auto& dis = __zz_cib_Instance();
      dis.implProxyMap_.RemoveProxy(h);
  }
};
template <typename T>
bool __zz_cib_Helper<::TemplateClassWithTwoParamsAndDefaultParameter<int, int>, T>::instanceDeleted_ = false;
}

template<>
class TemplateClassWithTwoParamsAndDefaultParameter<int, int>
{
public:
  TemplateClassWithTwoParamsAndDefaultParameter(const ::TemplateClassWithTwoParamsAndDefaultParameter<int, int>& __zz_cib_param0)
    : TemplateClassWithTwoParamsAndDefaultParameter<int, int>(__zz_cib_MyHelper::__zz_cib_Copy_0(
            __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
  {}
  ~TemplateClassWithTwoParamsAndDefaultParameter() {
    auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
    __zz_cib_MyHelper::__zz_cib_Delete_1(
      h
    );
  }
  template <typename __zz_cib_Dummy = std::pair<TemplateClassWithTwoParamsAndDefaultParameter<int, int>*, TemplateClassWithTwoParamsAndDefaultParameter<int, int>*>>
  TemplateClassWithTwoParamsAndDefaultParameter(int _a1, int _a2)
    : TemplateClassWithTwoParamsAndDefaultParameter<int, int>(__zz_cib_MyHelper::__zz_cib_New_2(
            __zz_cib_::__zz_cib_LazyAbiType<__zz_cib_Dummy, decltype(_a1)>(std::move(_a1)),
      __zz_cib_::__zz_cib_LazyAbiType<__zz_cib_Dummy, decltype(_a2)>(std::move(_a2))))
  {}
  template <typename __zz_cib_Dummy = std::pair<TemplateClassWithTwoParamsAndDefaultParameter<int, int>*, TemplateClassWithTwoParamsAndDefaultParameter<int, int>*>>
  int get1() const {
    return __zz_cib_::__zz_cib_FromAbiType<int>(
      __zz_cib_MyHelper::get1_3<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, int>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  template <typename __zz_cib_Dummy = std::pair<TemplateClassWithTwoParamsAndDefaultParameter<int, int>*, TemplateClassWithTwoParamsAndDefaultParameter<int, int>*>>
  int get2() const {
    return __zz_cib_::__zz_cib_FromAbiType<int>(
      __zz_cib_MyHelper::get2_4<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, int>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }

private:
  __ZZ_CIB_TEMPLATE_CLASS_INTERNALS(__ZZ_CIB_CLASS_NAME(TemplateClassWithTwoParamsAndDefaultParameter<int, int>), __ZZ_CIB_CLASS_NAME(TemplateClassWithTwoParamsAndDefaultParameter<int, int>));
};

