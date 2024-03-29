#pragma once

#include "__zz_cib_internal/__zz_cib_BaseTemplateInterfaceTests-type-converters.h"
#include "__zz_cib_internal/__zz_cib_BaseTemplateInterfaceTests-def.h"
#include "__zz_cib_internal/__zz_cib_BaseTemplateInterfaceTests-ids.h"
#include "__zz_cib_internal/__zz_cib_BaseTemplateInterfaceTests-handle-proxy-map.h"
#include "__zz_cib_internal/__zz_cib_BaseTemplateInterfaceTests-mtable-helper.h"

namespace __zz_cib_ {
template <typename T>
struct __zz_cib_Helper<::StillAnAbstractClass, T> : public __zz_cib_MethodTableHelper {
  static_assert(std::is_same_v<T, ::StillAnAbstractClass>,
    "Parameter 'T' is only to delay instantiation of the specialization. It is always the same as first parameter.");

  using _ProxyClass = T;
  using __zz_cib_AbiType = typename _ProxyClass::__zz_cib_AbiType;
  friend class ::StillAnAbstractClass;
  using __zz_cib_MethodId = __zz_cib_::__zz_cib_ids::__zz_cib_Class259::__zz_cib_MethodId;

  __zz_cib_Helper()
    : __zz_cib_MethodTableHelper(
      __zz_cib_BaseTemplateInterfaceTestsGetMethodTable(__zz_cib_ids::__zz_cib_Class259::__zz_cib_classId))
  {}
  static __zz_cib_Helper& __zz_cib_Instance() {
    static __zz_cib_Helper helper;
    return helper;
  }
  static __zz_cib_MethodTableHelper& __zz_cib_GetMethodTable() {
    return __zz_cib_Instance();
  }

  template <typename _RT>
  static auto ImplF_0(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::ImplF_0>(
      __zz_cib_obj
      );
  }
  static BaseInterface::__zz_cib_AbiType __zz_cib_CastTo__zz_cib_Class261(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = BaseInterface::__zz_cib_AbiType (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_CastTo__zz_cib_Class261>(__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_CastFrom__zz_cib_Class261(BaseInterface::__zz_cib_AbiType  __zz_cib_obj) {
    using __zz_cib_ProcType = __zz_cib_AbiType (__zz_cib_decl *) (BaseInterface::__zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_CastFrom__zz_cib_Class261>(__zz_cib_obj);
  }
  static ClassWithParameterizedBase<::BaseInterface>::__zz_cib_AbiType __zz_cib_CastTo__zz_cib_Class256(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = ClassWithParameterizedBase<::BaseInterface>::__zz_cib_AbiType (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_CastTo__zz_cib_Class256>(__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_CastFrom__zz_cib_Class256(ClassWithParameterizedBase<::BaseInterface>::__zz_cib_AbiType  __zz_cib_obj) {
    using __zz_cib_ProcType = __zz_cib_AbiType (__zz_cib_decl *) (ClassWithParameterizedBase<::BaseInterface>::__zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_CastFrom__zz_cib_Class256>(__zz_cib_obj);
  }
  static __zz_cib_AbiType& __zz_cib_GetHandle(T* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_AbiType const& __zz_cib_GetHandle(const T* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_AbiType __zz_cib_ReleaseHandle(T* __zz_cib_obj) {
    if (__zz_cib_obj->__zz_cib_h_ == nullptr) return nullptr;
    auto h = __zz_cib_obj->__zz_cib_h_;
    __zz_cib_obj->__zz_cib_h_ = nullptr;
    __zz_cib_::__zz_cib_Helper_t<::ClassWithParameterizedBase<::BaseInterface>, T>::__zz_cib_ReleaseHandle(__zz_cib_obj);
    return h;
  }
};
}

namespace __zz_cib_ {
template <typename T>
struct __zz_cib_Helper<::DerivedClass, T> : public __zz_cib_MethodTableHelper {
  static_assert(std::is_same_v<T, ::DerivedClass>,
    "Parameter 'T' is only to delay instantiation of the specialization. It is always the same as first parameter.");

  using _ProxyClass = T;
  using __zz_cib_AbiType = typename _ProxyClass::__zz_cib_AbiType;
  friend class ::DerivedClass;
  using __zz_cib_MethodId = __zz_cib_::__zz_cib_ids::__zz_cib_Class260::__zz_cib_MethodId;

  __zz_cib_Helper()
    : __zz_cib_MethodTableHelper(
      __zz_cib_BaseTemplateInterfaceTestsGetMethodTable(__zz_cib_ids::__zz_cib_Class260::__zz_cib_classId))
  {}
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
  static __zz_cib_AbiType __zz_cib_New_2() {
    using __zz_cib_ProcType = __zz_cib_AbiType (__zz_cib_decl *) ();
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_New_2>(
      );
  }
  template <typename _RT>
  static auto F_3(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::F_3>(
      __zz_cib_obj
      );
  }
  static BaseInterface::__zz_cib_AbiType __zz_cib_CastTo__zz_cib_Class261(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = BaseInterface::__zz_cib_AbiType (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_CastTo__zz_cib_Class261>(__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_CastFrom__zz_cib_Class261(BaseInterface::__zz_cib_AbiType  __zz_cib_obj) {
    using __zz_cib_ProcType = __zz_cib_AbiType (__zz_cib_decl *) (BaseInterface::__zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_CastFrom__zz_cib_Class261>(__zz_cib_obj);
  }
  static ClassWithParameterizedBase<::BaseInterface>::__zz_cib_AbiType __zz_cib_CastTo__zz_cib_Class256(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = ClassWithParameterizedBase<::BaseInterface>::__zz_cib_AbiType (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_CastTo__zz_cib_Class256>(__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_CastFrom__zz_cib_Class256(ClassWithParameterizedBase<::BaseInterface>::__zz_cib_AbiType  __zz_cib_obj) {
    using __zz_cib_ProcType = __zz_cib_AbiType (__zz_cib_decl *) (ClassWithParameterizedBase<::BaseInterface>::__zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_CastFrom__zz_cib_Class256>(__zz_cib_obj);
  }
  static StillAnAbstractClass::__zz_cib_AbiType __zz_cib_CastTo__zz_cib_Class259(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = StillAnAbstractClass::__zz_cib_AbiType (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_CastTo__zz_cib_Class259>(__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_CastFrom__zz_cib_Class259(StillAnAbstractClass::__zz_cib_AbiType  __zz_cib_obj) {
    using __zz_cib_ProcType = __zz_cib_AbiType (__zz_cib_decl *) (StillAnAbstractClass::__zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_CastFrom__zz_cib_Class259>(__zz_cib_obj);
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
    auto h = __zz_cib_obj->__zz_cib_h_;
    __zz_cib_obj->__zz_cib_h_ = nullptr;
    __zz_cib_::__zz_cib_Helper_t<::StillAnAbstractClass, T>::__zz_cib_ReleaseHandle(__zz_cib_obj);
    return h;
  }
};
}
