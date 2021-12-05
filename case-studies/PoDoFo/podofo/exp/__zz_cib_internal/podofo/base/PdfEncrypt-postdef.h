#pragma once

#include "__zz_cib_internal/__zz_cib_CibPoDoFo-type-converters.h"
#include "__zz_cib_internal/__zz_cib_CibPoDoFo-def.h"
#include "__zz_cib_internal/__zz_cib_CibPoDoFo-ids.h"
#include "__zz_cib_internal/__zz_cib_CibPoDoFo-handle-proxy-map.h"
#include "__zz_cib_internal/__zz_cib_CibPoDoFo-mtable-helper.h"

namespace __zz_cib_ {
using namespace ::PoDoFo;
template <typename T>
struct __zz_cib_Helper<::PoDoFo::PdfEncrypt, T> : public __zz_cib_MethodTableHelper {
  static_assert(std::is_same_v<T, ::PoDoFo::PdfEncrypt>,
    "Parameter 'T' is only to delay instantiation of the specialization. It is always the same as first parameter.");

  using _ProxyClass = T;
  using __zz_cib_AbiType = typename _ProxyClass::__zz_cib_AbiType;
  static const __zz_cib_MethodTable* __zz_cib_GetProxyMethodTable();
  friend class ::PoDoFo::PdfEncrypt;
  static bool instanceDeleted_;
  CibPoDoFo::__zz_cib_ImplProxyMap<_ProxyClass> implProxyMap_;
  using __zz_cib_MethodId = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class363::__zz_cib_MethodId;

  __zz_cib_Helper()
    : __zz_cib_MethodTableHelper(
      __zz_cib_CibPoDoFoGetMethodTable(__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class363::__zz_cib_classId))
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

  template <typename _RT, typename ..._Args>
  static auto CreatePdfEncrypt_0(_Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (_Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::CreatePdfEncrypt_0>(
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto CreatePdfEncrypt_1(_Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (_Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::CreatePdfEncrypt_1>(
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto CreatePdfEncrypt_2(_Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (_Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::CreatePdfEncrypt_2>(
      __zz_cib_args...);
  }
  template <typename _RT>
  static auto GetEnabledEncryptionAlgorithms_3() {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) ();
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetEnabledEncryptionAlgorithms_3>(
      );
  }
  template <typename _RT, typename ..._Args>
  static auto SetEnabledEncryptionAlgorithms_4(_Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (_Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::SetEnabledEncryptionAlgorithms_4>(
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto IsEncryptionEnabled_5(_Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (_Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::IsEncryptionEnabled_5>(
      __zz_cib_args...);
  }
  static auto __zz_cib_Delete_6(__zz_cib_AbiType __zz_cib_obj) {
    if (__zz_cib_obj) {
      using __zz_cib_ProcType = void (__zz_cib_decl *) (__zz_cib_AbiType);
      return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_Delete_6>(
        __zz_cib_obj
        );
    }
  }
  template <typename _RT>
  static auto GetEncryptAlgorithm_12(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetEncryptAlgorithm_12>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto IsPrintAllowed_13(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::IsPrintAllowed_13>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto IsEditAllowed_14(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::IsEditAllowed_14>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto IsCopyAllowed_15(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::IsCopyAllowed_15>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto IsEditNotesAllowed_16(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::IsEditNotesAllowed_16>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto IsFillAndSignAllowed_17(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::IsFillAndSignAllowed_17>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto IsAccessibilityAllowed_18(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::IsAccessibilityAllowed_18>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto IsDocAssemblyAllowed_19(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::IsDocAssemblyAllowed_19>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto IsHighPrintAllowed_20(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::IsHighPrintAllowed_20>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto GetUValue_21(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetUValue_21>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto GetOValue_22(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetOValue_22>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto GetEncryptionKey_23(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetEncryptionKey_23>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto GetPValue_24(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetPValue_24>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto GetRevision_25(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetRevision_25>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto GetKeyLength_26(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetKeyLength_26>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto IsMetadataEncrypted_27(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::IsMetadataEncrypted_27>(
      __zz_cib_obj
      );
  }
  template <typename _RT, typename ..._Args>
  static auto SetCurrentReference_32(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::SetCurrentReference_32>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  static __zz_cib_AbiType __zz_cib_New_33(::PoDoFo::PdfEncrypt* __zz_cib_h_) {
    using __zz_cib_ProcType = __zz_cib_AbiType (__zz_cib_decl *) (::PoDoFo::PdfEncrypt*, const __zz_cib_MethodTable*);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_New_33>(
      __zz_cib_h_, __zz_cib_GetProxyMethodTable()
      );
  }
  template <typename ..._Args>
  static __zz_cib_AbiType __zz_cib_Copy_34(::PoDoFo::PdfEncrypt* __zz_cib_h_, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = __zz_cib_AbiType (__zz_cib_decl *) (::PoDoFo::PdfEncrypt*, const __zz_cib_MethodTable*, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_Copy_34>(
      __zz_cib_h_, __zz_cib_GetProxyMethodTable(),
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto CheckKey_35(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::CheckKey_35>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  static std::uint32_t __zz_cib_GetClassId(__zz_cib_AbiType* __zz_cib_obj) {
    using __zz_cib_GetClassIdProc = std::uint32_t (__zz_cib_decl *) (__zz_cib_AbiType*);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_GetClassIdProc, __zz_cib_MethodId::__zz_cib_GetClassId>(__zz_cib_obj);
  }
  static T* __zz_cib_CreateProxy(__zz_cib_AbiType h);
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
  static void __zz_cib_ReleaseProxy(::PoDoFo::PdfEncrypt* __zz_cib_obj) {
    if (__zz_cib_obj->__zz_cib_h_) {
      using __zz_cib_ReleaseProxyProc = void (__zz_cib_decl *) (__zz_cib_AbiType);
      return __zz_cib_GetMethodTable().Invoke<__zz_cib_ReleaseProxyProc, __zz_cib_MethodId::__zz_cib_ReleaseProxy>(
      __zz_cib_obj->__zz_cib_h_);
    }
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
bool __zz_cib_Helper<::PoDoFo::PdfEncrypt, T>::instanceDeleted_ = false;
}

namespace __zz_cib_ {
using namespace ::PoDoFo;
template <typename T>
struct __zz_cib_Helper<::PoDoFo::PdfEncryptAESBase, T> : public __zz_cib_MethodTableHelper {
  static_assert(std::is_same_v<T, ::PoDoFo::PdfEncryptAESBase>,
    "Parameter 'T' is only to delay instantiation of the specialization. It is always the same as first parameter.");

  using _ProxyClass = T;
  using __zz_cib_AbiType = typename _ProxyClass::__zz_cib_AbiType;
  friend class ::PoDoFo::PdfEncryptAESBase;
  static bool instanceDeleted_;
  CibPoDoFo::__zz_cib_ImplProxyMap<_ProxyClass> implProxyMap_;
  using __zz_cib_MethodId = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class364::__zz_cib_MethodId;

  __zz_cib_Helper()
    : __zz_cib_MethodTableHelper(
      __zz_cib_CibPoDoFoGetMethodTable(__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class364::__zz_cib_classId))
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
  static __zz_cib_AbiType __zz_cib_New_2() {
    using __zz_cib_ProcType = __zz_cib_AbiType (__zz_cib_decl *) ();
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_New_2>(
      );
  }
  template <typename _RT, typename ..._Args>
  static auto BaseDecrypt_3(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::BaseDecrypt_3>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto BaseEncrypt_4(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::BaseEncrypt_4>(
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
bool __zz_cib_Helper<::PoDoFo::PdfEncryptAESBase, T>::instanceDeleted_ = false;
}

namespace __zz_cib_ {
using namespace ::PoDoFo;
template <typename T>
struct __zz_cib_Helper<::PoDoFo::PdfEncryptRC4Base, T> : public __zz_cib_MethodTableHelper {
  static_assert(std::is_same_v<T, ::PoDoFo::PdfEncryptRC4Base>,
    "Parameter 'T' is only to delay instantiation of the specialization. It is always the same as first parameter.");

  using _ProxyClass = T;
  using __zz_cib_AbiType = typename _ProxyClass::__zz_cib_AbiType;
  friend class ::PoDoFo::PdfEncryptRC4Base;
  static bool instanceDeleted_;
  CibPoDoFo::__zz_cib_ImplProxyMap<_ProxyClass> implProxyMap_;
  using __zz_cib_MethodId = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class365::__zz_cib_MethodId;

  __zz_cib_Helper()
    : __zz_cib_MethodTableHelper(
      __zz_cib_CibPoDoFoGetMethodTable(__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class365::__zz_cib_classId))
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
  static __zz_cib_AbiType __zz_cib_New_2() {
    using __zz_cib_ProcType = __zz_cib_AbiType (__zz_cib_decl *) ();
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_New_2>(
      );
  }
  template <typename _RT, typename ..._Args>
  static auto RC4_3(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::RC4_3>(
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
bool __zz_cib_Helper<::PoDoFo::PdfEncryptRC4Base, T>::instanceDeleted_ = false;
}

namespace __zz_cib_ {
using namespace ::PoDoFo;
template <typename T>
struct __zz_cib_Helper<::PoDoFo::PdfEncryptMD5Base, T> : public __zz_cib_MethodTableHelper {
  static_assert(std::is_same_v<T, ::PoDoFo::PdfEncryptMD5Base>,
    "Parameter 'T' is only to delay instantiation of the specialization. It is always the same as first parameter.");

  using _ProxyClass = T;
  using __zz_cib_AbiType = typename _ProxyClass::__zz_cib_AbiType;
  static const __zz_cib_MethodTable* __zz_cib_GetProxyMethodTable();
  friend class ::PoDoFo::PdfEncryptMD5Base;
  static bool instanceDeleted_;
  CibPoDoFo::__zz_cib_ImplProxyMap<_ProxyClass> implProxyMap_;
  using __zz_cib_MethodId = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class366::__zz_cib_MethodId;

  __zz_cib_Helper()
    : __zz_cib_MethodTableHelper(
      __zz_cib_CibPoDoFoGetMethodTable(__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class366::__zz_cib_classId))
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

  static __zz_cib_AbiType __zz_cib_New_0(::PoDoFo::PdfEncryptMD5Base* __zz_cib_h_) {
    using __zz_cib_ProcType = __zz_cib_AbiType (__zz_cib_decl *) (::PoDoFo::PdfEncryptMD5Base*, const __zz_cib_MethodTable*);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_New_0>(
      __zz_cib_h_, __zz_cib_GetProxyMethodTable()
      );
  }
  template <typename ..._Args>
  static __zz_cib_AbiType __zz_cib_New_1(::PoDoFo::PdfEncryptMD5Base* __zz_cib_h_, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = __zz_cib_AbiType (__zz_cib_decl *) (::PoDoFo::PdfEncryptMD5Base*, const __zz_cib_MethodTable*, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_New_1>(
      __zz_cib_h_, __zz_cib_GetProxyMethodTable(),
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
  static auto CreateEncryptionDictionary_5(const __zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::CreateEncryptionDictionary_5>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto GetMD5String_9(_Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (_Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetMD5String_9>(
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto GetMD5Binary_12(_Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (_Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetMD5Binary_12>(
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto Authenticate_13(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::Authenticate_13>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto GenerateInitialVector_14(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GenerateInitialVector_14>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto ComputeOwnerKey_15(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::ComputeOwnerKey_15>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto PadPassword_16(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::PadPassword_16>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto ComputeEncryptionKey_17(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::ComputeEncryptionKey_17>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto CreateObjKey_18(const __zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::CreateObjKey_18>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  static PoDoFo::PdfEncrypt::__zz_cib_AbiType __zz_cib_CastTo__zz_cib_Class363(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = PoDoFo::PdfEncrypt::__zz_cib_AbiType (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_CastTo__zz_cib_Class363>(__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_CastFrom__zz_cib_Class363(PoDoFo::PdfEncrypt::__zz_cib_AbiType  __zz_cib_obj) {
    using __zz_cib_ProcType = __zz_cib_AbiType (__zz_cib_decl *) (PoDoFo::PdfEncrypt::__zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_CastFrom__zz_cib_Class363>(__zz_cib_obj);
  }
  static PoDoFo::PdfEncryptRC4Base::__zz_cib_AbiType __zz_cib_CastTo__zz_cib_Class365(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = PoDoFo::PdfEncryptRC4Base::__zz_cib_AbiType (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_CastTo__zz_cib_Class365>(__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_CastFrom__zz_cib_Class365(PoDoFo::PdfEncryptRC4Base::__zz_cib_AbiType  __zz_cib_obj) {
    using __zz_cib_ProcType = __zz_cib_AbiType (__zz_cib_decl *) (PoDoFo::PdfEncryptRC4Base::__zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_CastFrom__zz_cib_Class365>(__zz_cib_obj);
  }
  static std::uint32_t __zz_cib_GetClassId(__zz_cib_AbiType* __zz_cib_obj) {
    using __zz_cib_GetClassIdProc = std::uint32_t (__zz_cib_decl *) (__zz_cib_AbiType*);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_GetClassIdProc, __zz_cib_MethodId::__zz_cib_GetClassId>(__zz_cib_obj);
  }
  static T* __zz_cib_CreateProxy(__zz_cib_AbiType h);
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
    __zz_cib_::__zz_cib_Helper_t<::PoDoFo::PdfEncrypt, T>::__zz_cib_ReleaseHandle(__zz_cib_obj);
    __zz_cib_::__zz_cib_Helper_t<::PoDoFo::PdfEncryptRC4Base, T>::__zz_cib_ReleaseHandle(__zz_cib_obj);
    return h;
  }
  static void __zz_cib_ReleaseProxy(::PoDoFo::PdfEncryptMD5Base* __zz_cib_obj) {
    if (__zz_cib_obj->__zz_cib_h_) {
      using __zz_cib_ReleaseProxyProc = void (__zz_cib_decl *) (__zz_cib_AbiType);
      return __zz_cib_GetMethodTable().Invoke<__zz_cib_ReleaseProxyProc, __zz_cib_MethodId::__zz_cib_ReleaseProxy>(
      __zz_cib_obj->__zz_cib_h_);
    }
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
bool __zz_cib_Helper<::PoDoFo::PdfEncryptMD5Base, T>::instanceDeleted_ = false;
}

namespace __zz_cib_ {
using namespace ::PoDoFo;
template <typename T>
struct __zz_cib_Helper<::PoDoFo::PdfEncryptAESV2, T> : public __zz_cib_MethodTableHelper {
  static_assert(std::is_same_v<T, ::PoDoFo::PdfEncryptAESV2>,
    "Parameter 'T' is only to delay instantiation of the specialization. It is always the same as first parameter.");

  using _ProxyClass = T;
  using __zz_cib_AbiType = typename _ProxyClass::__zz_cib_AbiType;
  friend class ::PoDoFo::PdfEncryptAESV2;
  static bool instanceDeleted_;
  CibPoDoFo::__zz_cib_ImplProxyMap<_ProxyClass> implProxyMap_;
  using __zz_cib_MethodId = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class367::__zz_cib_MethodId;

  __zz_cib_Helper()
    : __zz_cib_MethodTableHelper(
      __zz_cib_CibPoDoFoGetMethodTable(__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class367::__zz_cib_classId))
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
  template <typename ..._Args>
  static __zz_cib_AbiType __zz_cib_New_1(_Args... __zz_cib_args) {
    using __zz_cib_ProcType = __zz_cib_AbiType (__zz_cib_decl *) (_Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_New_1>(
      __zz_cib_args...);
  }
  template <typename ..._Args>
  static __zz_cib_AbiType __zz_cib_New_2(_Args... __zz_cib_args) {
    using __zz_cib_ProcType = __zz_cib_AbiType (__zz_cib_decl *) (_Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_New_2>(
      __zz_cib_args...);
  }
  template <typename ..._Args>
  static __zz_cib_AbiType __zz_cib_New_3(_Args... __zz_cib_args) {
    using __zz_cib_ProcType = __zz_cib_AbiType (__zz_cib_decl *) (_Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_New_3>(
      __zz_cib_args...);
  }
  static auto __zz_cib_Delete_4(__zz_cib_AbiType __zz_cib_obj) {
    if (__zz_cib_obj) {
      using __zz_cib_ProcType = void (__zz_cib_decl *) (__zz_cib_AbiType);
      return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_Delete_4>(
        __zz_cib_obj
        );
    }
  }
  template <typename _RT, typename ..._Args>
  static auto CreateEncryptionInputStream_5(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::CreateEncryptionInputStream_5>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto CreateEncryptionOutputStream_6(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::CreateEncryptionOutputStream_6>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto Authenticate_7(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::Authenticate_7>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto Encrypt_8(const __zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::Encrypt_8>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto Decrypt_9(const __zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::Decrypt_9>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto GenerateEncryptionKey_10(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GenerateEncryptionKey_10>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT>
  static auto CalculateStreamOffset_11(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::CalculateStreamOffset_11>(
      __zz_cib_obj
      );
  }
  template <typename _RT, typename ..._Args>
  static auto CalculateStreamLength_12(const __zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::CalculateStreamLength_12>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  static PoDoFo::PdfEncrypt::__zz_cib_AbiType __zz_cib_CastTo__zz_cib_Class363(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = PoDoFo::PdfEncrypt::__zz_cib_AbiType (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_CastTo__zz_cib_Class363>(__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_CastFrom__zz_cib_Class363(PoDoFo::PdfEncrypt::__zz_cib_AbiType  __zz_cib_obj) {
    using __zz_cib_ProcType = __zz_cib_AbiType (__zz_cib_decl *) (PoDoFo::PdfEncrypt::__zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_CastFrom__zz_cib_Class363>(__zz_cib_obj);
  }
  static PoDoFo::PdfEncryptRC4Base::__zz_cib_AbiType __zz_cib_CastTo__zz_cib_Class365(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = PoDoFo::PdfEncryptRC4Base::__zz_cib_AbiType (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_CastTo__zz_cib_Class365>(__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_CastFrom__zz_cib_Class365(PoDoFo::PdfEncryptRC4Base::__zz_cib_AbiType  __zz_cib_obj) {
    using __zz_cib_ProcType = __zz_cib_AbiType (__zz_cib_decl *) (PoDoFo::PdfEncryptRC4Base::__zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_CastFrom__zz_cib_Class365>(__zz_cib_obj);
  }
  static PoDoFo::PdfEncryptMD5Base::__zz_cib_AbiType __zz_cib_CastTo__zz_cib_Class366(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = PoDoFo::PdfEncryptMD5Base::__zz_cib_AbiType (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_CastTo__zz_cib_Class366>(__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_CastFrom__zz_cib_Class366(PoDoFo::PdfEncryptMD5Base::__zz_cib_AbiType  __zz_cib_obj) {
    using __zz_cib_ProcType = __zz_cib_AbiType (__zz_cib_decl *) (PoDoFo::PdfEncryptMD5Base::__zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_CastFrom__zz_cib_Class366>(__zz_cib_obj);
  }
  static PoDoFo::PdfEncryptAESBase::__zz_cib_AbiType __zz_cib_CastTo__zz_cib_Class364(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = PoDoFo::PdfEncryptAESBase::__zz_cib_AbiType (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_CastTo__zz_cib_Class364>(__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_CastFrom__zz_cib_Class364(PoDoFo::PdfEncryptAESBase::__zz_cib_AbiType  __zz_cib_obj) {
    using __zz_cib_ProcType = __zz_cib_AbiType (__zz_cib_decl *) (PoDoFo::PdfEncryptAESBase::__zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_CastFrom__zz_cib_Class364>(__zz_cib_obj);
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
    __zz_cib_::__zz_cib_Helper_t<::PoDoFo::PdfEncryptMD5Base, T>::__zz_cib_ReleaseHandle(__zz_cib_obj);
    __zz_cib_::__zz_cib_Helper_t<::PoDoFo::PdfEncryptAESBase, T>::__zz_cib_ReleaseHandle(__zz_cib_obj);
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
bool __zz_cib_Helper<::PoDoFo::PdfEncryptAESV2, T>::instanceDeleted_ = false;
}

namespace __zz_cib_ {
using namespace ::PoDoFo;
template <typename T>
struct __zz_cib_Helper<::PoDoFo::PdfEncryptRC4, T> : public __zz_cib_MethodTableHelper {
  static_assert(std::is_same_v<T, ::PoDoFo::PdfEncryptRC4>,
    "Parameter 'T' is only to delay instantiation of the specialization. It is always the same as first parameter.");

  using _ProxyClass = T;
  using __zz_cib_AbiType = typename _ProxyClass::__zz_cib_AbiType;
  friend class ::PoDoFo::PdfEncryptRC4;
  static bool instanceDeleted_;
  CibPoDoFo::__zz_cib_ImplProxyMap<_ProxyClass> implProxyMap_;
  using __zz_cib_MethodId = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class368::__zz_cib_MethodId;

  __zz_cib_Helper()
    : __zz_cib_MethodTableHelper(
      __zz_cib_CibPoDoFoGetMethodTable(__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class368::__zz_cib_classId))
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
  template <typename ..._Args>
  static __zz_cib_AbiType __zz_cib_New_1(_Args... __zz_cib_args) {
    using __zz_cib_ProcType = __zz_cib_AbiType (__zz_cib_decl *) (_Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_New_1>(
      __zz_cib_args...);
  }
  template <typename ..._Args>
  static __zz_cib_AbiType __zz_cib_New_2(_Args... __zz_cib_args) {
    using __zz_cib_ProcType = __zz_cib_AbiType (__zz_cib_decl *) (_Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_New_2>(
      __zz_cib_args...);
  }
  template <typename ..._Args>
  static __zz_cib_AbiType __zz_cib_New_3(_Args... __zz_cib_args) {
    using __zz_cib_ProcType = __zz_cib_AbiType (__zz_cib_decl *) (_Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_New_3>(
      __zz_cib_args...);
  }
  static auto __zz_cib_Delete_4(__zz_cib_AbiType __zz_cib_obj) {
    if (__zz_cib_obj) {
      using __zz_cib_ProcType = void (__zz_cib_decl *) (__zz_cib_AbiType);
      return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_Delete_4>(
        __zz_cib_obj
        );
    }
  }
  template <typename _RT, typename ..._Args>
  static auto Authenticate_5(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::Authenticate_5>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto Encrypt_6(const __zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::Encrypt_6>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto Decrypt_7(const __zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::Decrypt_7>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto CreateEncryptionInputStream_8(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::CreateEncryptionInputStream_8>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto CreateEncryptionOutputStream_9(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::CreateEncryptionOutputStream_9>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto GenerateEncryptionKey_10(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GenerateEncryptionKey_10>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT>
  static auto CalculateStreamOffset_11(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::CalculateStreamOffset_11>(
      __zz_cib_obj
      );
  }
  template <typename _RT, typename ..._Args>
  static auto CalculateStreamLength_12(const __zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType, _Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::CalculateStreamLength_12>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  static PoDoFo::PdfEncrypt::__zz_cib_AbiType __zz_cib_CastTo__zz_cib_Class363(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = PoDoFo::PdfEncrypt::__zz_cib_AbiType (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_CastTo__zz_cib_Class363>(__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_CastFrom__zz_cib_Class363(PoDoFo::PdfEncrypt::__zz_cib_AbiType  __zz_cib_obj) {
    using __zz_cib_ProcType = __zz_cib_AbiType (__zz_cib_decl *) (PoDoFo::PdfEncrypt::__zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_CastFrom__zz_cib_Class363>(__zz_cib_obj);
  }
  static PoDoFo::PdfEncryptRC4Base::__zz_cib_AbiType __zz_cib_CastTo__zz_cib_Class365(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = PoDoFo::PdfEncryptRC4Base::__zz_cib_AbiType (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_CastTo__zz_cib_Class365>(__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_CastFrom__zz_cib_Class365(PoDoFo::PdfEncryptRC4Base::__zz_cib_AbiType  __zz_cib_obj) {
    using __zz_cib_ProcType = __zz_cib_AbiType (__zz_cib_decl *) (PoDoFo::PdfEncryptRC4Base::__zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_CastFrom__zz_cib_Class365>(__zz_cib_obj);
  }
  static PoDoFo::PdfEncryptMD5Base::__zz_cib_AbiType __zz_cib_CastTo__zz_cib_Class366(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = PoDoFo::PdfEncryptMD5Base::__zz_cib_AbiType (__zz_cib_decl *) (__zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_CastTo__zz_cib_Class366>(__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_CastFrom__zz_cib_Class366(PoDoFo::PdfEncryptMD5Base::__zz_cib_AbiType  __zz_cib_obj) {
    using __zz_cib_ProcType = __zz_cib_AbiType (__zz_cib_decl *) (PoDoFo::PdfEncryptMD5Base::__zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_CastFrom__zz_cib_Class366>(__zz_cib_obj);
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
    __zz_cib_::__zz_cib_Helper_t<::PoDoFo::PdfEncryptMD5Base, T>::__zz_cib_ReleaseHandle(__zz_cib_obj);
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
bool __zz_cib_Helper<::PoDoFo::PdfEncryptRC4, T>::instanceDeleted_ = false;
}
