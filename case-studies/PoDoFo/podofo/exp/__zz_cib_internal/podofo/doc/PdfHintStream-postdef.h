#pragma once

#include "__zz_cib_internal/__zz_cib_CibPoDoFo-type-converters.h"
#include "__zz_cib_internal/__zz_cib_CibPoDoFo-def.h"
#include "__zz_cib_internal/__zz_cib_CibPoDoFo-ids.h"
#include "__zz_cib_internal/__zz_cib_CibPoDoFo-handle-proxy-map.h"
#include "__zz_cib_internal/__zz_cib_CibPoDoFo-mtable-helper.h"

namespace __zz_cib_ {
using namespace ::PoDoFo;
using namespace ::PoDoFo::NonPublic;
template <typename T>
struct __zz_cib_Helper<::PoDoFo::NonPublic::PdfHintStream, T> : public __zz_cib_MethodTableHelper {
  static_assert(std::is_same_v<T, ::PoDoFo::NonPublic::PdfHintStream>,
    "Parameter 'T' is only to delay instantiation of the specialization. It is always the same as first parameter.");

  using _ProxyClass = T;
  using __zz_cib_AbiType = typename _ProxyClass::__zz_cib_AbiType;
  friend class ::PoDoFo::NonPublic::PdfHintStream;
  using __zz_cib_MethodId = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class407::__zz_cib_Class452::__zz_cib_MethodId;

  __zz_cib_Helper()
    : __zz_cib_MethodTableHelper(
      __zz_cib_CibPoDoFoGetMethodTable(__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class407::__zz_cib_Class452::__zz_cib_classId))
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
  template <typename ..._Args>
  static __zz_cib_AbiType __zz_cib_New_1(_Args... __zz_cib_args) {
    using __zz_cib_ProcType = __zz_cib_AbiType (__zz_cib_decl *) (_Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_New_1>(
      __zz_cib_args...);
  }
  static auto __zz_cib_Delete_2(__zz_cib_AbiType __zz_cib_obj) {
    if (__zz_cib_obj) {
      using __zz_cib_ProcType = void (__zz_cib_decl *) (__zz_cib_AbiType);
      return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_Delete_2>(
        __zz_cib_obj
        );
    }
  }
  template <typename _RT, typename ..._Args>
  static auto WriteUInt16_3(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::WriteUInt16_3>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto WriteUInt32_4(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::WriteUInt32_4>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  static PoDoFo::PdfElement::__zz_cib_AbiType __zz_cib_CastTo__zz_cib_Class418(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = PoDoFo::PdfElement::__zz_cib_AbiType (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_CastTo__zz_cib_Class418>(__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_CastFrom__zz_cib_Class418(PoDoFo::PdfElement::__zz_cib_AbiType  __zz_cib_obj) {
    using __zz_cib_ProcType = __zz_cib_AbiType (__zz_cib_decl *) (PoDoFo::PdfElement::__zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_CastFrom__zz_cib_Class418>(__zz_cib_obj);
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
    __zz_cib_::__zz_cib_Helper_t<::PoDoFo::PdfElement, T>::__zz_cib_ReleaseHandle(__zz_cib_obj);
    return h;
  }
};
}
