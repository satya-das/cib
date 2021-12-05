#pragma once

#include "__zz_cib_internal/__zz_cib_CibPoDoFo-type-converters.h"
#include "__zz_cib_internal/__zz_cib_CibPoDoFo-def.h"
#include "__zz_cib_internal/__zz_cib_CibPoDoFo-ids.h"
#include "__zz_cib_internal/__zz_cib_CibPoDoFo-handle-proxy-map.h"
#include "__zz_cib_internal/__zz_cib_CibPoDoFo-mtable-helper.h"

namespace __zz_cib_ {
using namespace ::PoDoFo;
template <typename T>
struct __zz_cib_Helper<::PoDoFo::PdfDictionary, T> : public __zz_cib_MethodTableHelper {
  static_assert(std::is_same_v<T, ::PoDoFo::PdfDictionary>,
    "Parameter 'T' is only to delay instantiation of the specialization. It is always the same as first parameter.");

  using _ProxyClass = T;
  using __zz_cib_AbiType = typename _ProxyClass::__zz_cib_AbiType;
  friend class ::PoDoFo::PdfDictionary;
  static bool instanceDeleted_;
  CibPoDoFo::__zz_cib_ImplProxyMap<_ProxyClass> implProxyMap_;
  using __zz_cib_MethodId = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class349::__zz_cib_MethodId;

  __zz_cib_Helper()
    : __zz_cib_MethodTableHelper(
      __zz_cib_CibPoDoFoGetMethodTable(__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class349::__zz_cib_classId))
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

  static __zz_cib_AbiType __zz_cib_New_0() {
    using __zz_cib_ProcType = __zz_cib_AbiType (__zz_cib_decl *) ();
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_New_0>(
      );
  }
  template <typename ..._Args>
  static __zz_cib_AbiType __zz_cib_Copy_1(_Args... __zz_cib_args) {
    using __zz_cib_ProcType = __zz_cib_AbiType (__zz_cib_decl *) (_Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_Copy_1>(
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
  static auto __zz_cib_OperatorEqual_3(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_OperatorEqual_3>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto __zz_cib_OperatorCmpEq_4(const __zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_OperatorCmpEq_4>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto __zz_cib_OperatorNotEq_5(const __zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_OperatorNotEq_5>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT>
  static auto Clear_6(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::Clear_6>(
      __zz_cib_obj
      );
  }
  template <typename _RT, typename ..._Args>
  static auto AddKey_7(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::AddKey_7>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto AddKey_8(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::AddKey_8>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto GetKey_9(const __zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetKey_9>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto GetKey_10(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetKey_10>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto FindKey_11(const __zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::FindKey_11>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto FindKey_12(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::FindKey_12>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto FindKeyParent_13(const __zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::FindKeyParent_13>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto FindKeyParent_14(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::FindKeyParent_14>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto MustGetKey_15(const __zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::MustGetKey_15>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto GetKeyAsLong_16(const __zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetKeyAsLong_16>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto GetKeyAsReal_17(const __zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetKeyAsReal_17>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto GetKeyAsBool_18(const __zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetKeyAsBool_18>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto GetKeyAsName_19(const __zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetKeyAsName_19>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto HasKey_20(const __zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::HasKey_20>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto RemoveKey_21(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::RemoveKey_21>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto Write_22(const __zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::Write_22>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto Write_23(const __zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::Write_23>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT>
  static auto GetSize_24(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetSize_24>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto GetKeys_25(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetKeys_25>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto GetKeys_26(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetKeys_26>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto IsDirty_27(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::IsDirty_27>(
      __zz_cib_obj
      );
  }
  template <typename _RT, typename ..._Args>
  static auto SetDirty_28(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::SetDirty_28>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT>
  static auto begin_29(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::begin_29>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto end_30(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::end_30>(
      __zz_cib_obj
      );
  }
  template <typename _RT, typename ..._Args>
  static auto SetOwner_31(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::SetOwner_31>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  static PoDoFo::PdfDataType::__zz_cib_AbiType __zz_cib_CastTo__zz_cib_Class346(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = PoDoFo::PdfDataType::__zz_cib_AbiType (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_CastTo__zz_cib_Class346>(__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_CastFrom__zz_cib_Class346(PoDoFo::PdfDataType::__zz_cib_AbiType  __zz_cib_obj) {
    using __zz_cib_ProcType = __zz_cib_AbiType (__zz_cib_decl *) (PoDoFo::PdfDataType::__zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_CastFrom__zz_cib_Class346>(__zz_cib_obj);
  }
  static PoDoFo::PdfOwnedDataType::__zz_cib_AbiType __zz_cib_CastTo__zz_cib_Class392(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = PoDoFo::PdfOwnedDataType::__zz_cib_AbiType (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_CastTo__zz_cib_Class392>(__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_CastFrom__zz_cib_Class392(PoDoFo::PdfOwnedDataType::__zz_cib_AbiType  __zz_cib_obj) {
    using __zz_cib_ProcType = __zz_cib_AbiType (__zz_cib_decl *) (PoDoFo::PdfOwnedDataType::__zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_CastFrom__zz_cib_Class392>(__zz_cib_obj);
  }
  static std::uint32_t __zz_cib_GetClassId(__zz_cib_AbiType* __zz_cib_obj) {
    using __zz_cib_GetClassIdProc = std::uint32_t (__zz_cib_decl *) (__zz_cib_AbiType*);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_GetClassIdProc, __zz_cib_MethodId::__zz_cib_GetClassId>(__zz_cib_obj);
  }
  static T* __zz_cib_CreateProxy(__zz_cib_AbiType h);
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
    __zz_cib_::__zz_cib_Helper_t<::PoDoFo::PdfOwnedDataType, T>::__zz_cib_ReleaseHandle(__zz_cib_obj);
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
  using __zz_cib_ProxyDeleter = void (__zz_cib_decl*) (_ProxyClass* proxy);
  static void __zz_cib_RegisterProxy(__zz_cib_AbiType obj, _ProxyClass* proxy) {
    using __zz_cib_RegisterProxyProc = void (__zz_cib_decl *)(__zz_cib_AbiType, _ProxyClass*, __zz_cib_ProxyDeleter);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_RegisterProxyProc, __zz_cib_MethodId::__zz_cib_RegisterProxy>(obj,
      proxy, [](_ProxyClass* obj) {
        if (obj && obj->__zz_cib_h_) {
          __zz_cib_ReleaseHandle(obj);
          delete obj;
        }
      }
    );
    }
};
template <typename T>
bool __zz_cib_Helper<::PoDoFo::PdfDictionary, T>::instanceDeleted_ = false;
}
