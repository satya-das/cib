#pragma once

#include "__zz_cib_internal/__zz_cib_Example-type-converters.h"
#include "__zz_cib_internal/__zz_cib_Example-def.h"
#include "__zz_cib_internal/__zz_cib_Example-ids.h"
#include "__zz_cib_internal/__zz_cib_Example-local-proxy-mgr.h"
#include "__zz_cib_internal/__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_internal/__zz_cib_Example-remote-proxy-mgr.h"

namespace __zz_cib_ {
template <typename T>
struct __zz_cib_Helper<::C, T> : public __zz_cib_MethodTableHelper {
  static_assert(std::is_same_v<T, ::C>);
  using __zz_cib_AbiType = typename T::__zz_cib_AbiType;
  using _ProxyClass = T;
  friend class ::C;
  Example::__zz_cib_RemoteProxyManager<_ProxyClass, __zz_cib_Helper> proxyMgr;
  using __zz_cib_Methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class283::__zz_cib_Methodid;

  __zz_cib_Helper()
    : __zz_cib_MethodTableHelper(
      __zz_cib_ExampleGetMethodTable(__zz_cib_ids::__zz_cib_Class283::__zz_cib_classid))
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
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::__zz_cib_Copy_0>(
      __zz_cib_args...);
  }
  template <typename ..._Args>
  static __zz_cib_AbiType __zz_cib_New_1(_Args... __zz_cib_args) {
    using __zz_cib_ProcType = __zz_cib_AbiType (__zz_cib_decl *) (_Args...);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::__zz_cib_New_1>(
      __zz_cib_args...);
  }
  static auto __zz_cib_Delete_2(__zz_cib_AbiType __zz_cib_obj) {
    if (__zz_cib_obj) {
      using __zz_cib_ProcType = void (__zz_cib_decl *) (__zz_cib_AbiType);
      return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::__zz_cib_Delete_2>(
        __zz_cib_obj
        );
    }
  }
  template <typename _RT>
  static auto f_3(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_ProcType = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::f_3>(
      __zz_cib_obj
      );
  }
  static std::uint32_t __zz_cib_GetClassId(__zz_cib_AbiType* __zz_cib_obj) {
    using __zz_cib_GetClassIdProc = std::uint32_t (__zz_cib_decl *) (__zz_cib_AbiType*);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_GetClassIdProc, __zz_cib_Methodid::__zz_cib_GetClassId>(__zz_cib_obj);
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
    auto& dis = __zz_cib_Instance();
      dis.proxyMgr.RemoveProxy(h);
  }
  using __zz_cib_ProxyDeleter    = void (__zz_cib_decl *) (_ProxyClass* proxy);
  static _ProxyClass* __zz_cib_FindProxy(__zz_cib_AbiType obj, __zz_cib_ClientId clientId) {
    using __zz_cib_FindProxyProc = _ProxyClass* (__zz_cib_decl *)(__zz_cib_AbiType, __zz_cib_ClientId);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_FindProxyProc, __zz_cib_Methodid::__zz_cib_FindProxy>(obj, clientId);
  }
  static void __zz_cib_RegisterProxy(__zz_cib_AbiType obj, __zz_cib_ClientId clientId, _ProxyClass* proxy, __zz_cib_ProxyDeleter deleter) {
    using __zz_cib_RegisterProxyProc = void (__zz_cib_decl *)(__zz_cib_AbiType, __zz_cib_ClientId, _ProxyClass*, __zz_cib_ProxyDeleter);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_RegisterProxyProc, __zz_cib_Methodid::__zz_cib_RegisterProxy>(obj, clientId, proxy, deleter);
  }
  static void __zz_cib_UnregisterProxy(__zz_cib_AbiType obj, __zz_cib_ClientId clientId) {
    using __zz_cib_UnregisterProxyProc = void (__zz_cib_decl *)(__zz_cib_AbiType, __zz_cib_ClientId);
    return __zz_cib_GetMethodTable().Invoke<__zz_cib_UnregisterProxyProc, __zz_cib_Methodid::__zz_cib_UnregisterProxy>(obj, clientId);
  }
  static void __zz_cib_DeleteOnlyProxy(_ProxyClass* obj) {
    obj->__zz_cib_h_ = nullptr;
    delete obj;
  }
};
}
#include "__zz_cib_Class262.h"
#include "__zz_cib_Class267.h"
#include "__zz_cib_Class272.h"
#include "__zz_cib_Class277.h"
