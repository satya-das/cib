#pragma once


#include "interface.h"
#include "template.h"

namespace __zz_cib_ {
template <typename T>
struct __zz_cib_Helper<::ClassWithParameterizedBase<::BaseInterface>, T> : public __zz_cib_MethodTableHelper {
  static_assert(std::is_same_v<T, ::ClassWithParameterizedBase<::BaseInterface>>,
    "Parameter 'T' is only to delay instantiation of the specialization. It is always the same as first parameter.");

  using _ProxyClass = T;
  using __zz_cib_AbiType = typename _ProxyClass::__zz_cib_AbiType;
  friend class ::ClassWithParameterizedBase<::BaseInterface>;
  static bool instanceDeleted_;
  BaseTemplateInterfaceTests::__zz_cib_ImplProxyMap<_ProxyClass> implProxyMap_;
  using __zz_cib_MethodId = __zz_cib_::__zz_cib_ids::__zz_cib_Class256::__zz_cib_MethodId;

  __zz_cib_Helper()
    : __zz_cib_MethodTableHelper(
      __zz_cib_BaseTemplateInterfaceTestsGetMethodTable(__zz_cib_ids::__zz_cib_Class256::__zz_cib_classId))
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

  template <typename _RT>
  static auto Func_0(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::Func_0>(
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
    __zz_cib_::__zz_cib_Helper_t<::BaseInterface, T>::__zz_cib_ReleaseHandle(__zz_cib_obj);
    return h;
  }
  static _ProxyClass* __zz_cib_FromHandle(__zz_cib_AbiType h) {
    if (h == nullptr)
      return nullptr;
    auto&  dis   = __zz_cib_Instance();
    auto* proxy = dis.implProxyMap_.FindProxy(h);
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
bool __zz_cib_Helper<::ClassWithParameterizedBase<::BaseInterface>, T>::instanceDeleted_ = false;
}

template<>
class ClassWithParameterizedBase<::BaseInterface> : public ::BaseInterface
{
public:
  template <typename __zz_cib_Dummy = std::pair<ClassWithParameterizedBase<::BaseInterface>*, ClassWithParameterizedBase<::BaseInterface>*>>
  int Func() {
    return __zz_cib_::__zz_cib_FromAbiType<int>(
      __zz_cib_MyHelper::Func_0<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, int>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }

private:
  __ZZ_CIB_TEMPLATE_CLASS_INTERNALS(__ZZ_CIB_CLASS_NAME(ClassWithParameterizedBase<::BaseInterface>), __ZZ_CIB_CLASS_NAME(ClassWithParameterizedBase<::BaseInterface>));
};

