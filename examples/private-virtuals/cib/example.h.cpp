#include "example.h"

#include <typeinfo>
#include <typeindex>
#include <cstdint>
#include <unordered_map>

extern std::unordered_map<std::type_index, std::uint32_t> __zz_cib_gClassIdRepo;

#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_Example-delegate-helper.h"
#include "__zz_cib_Example-proxy.h"

namespace __zz_cib_ { namespace IF {
namespace __zz_cib_GenericProxy {
class IF : public ::IF {
  __zz_cib_PROXY* __zz_cib_proxy;
  const __zz_cib_MethodTableHelper __zz_cib_mtbl_helper;

  const __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() const {
    return __zz_cib_mtbl_helper;
  }
public:
  __ZZ_CIB_DELEGATOR_MEMBERS(IF, ::IF)

  IF(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl)
    : ::IF::IF()
    , __zz_cib_proxy(proxy)
    , __zz_cib_mtbl_helper(mtbl)
  {}
  void PrivatePureVirtual() override {
    using PrivatePureVirtualProc = void (__zz_cib_decl *) (__zz_cib_PROXY*);
    return __zz_cib_get_mtable_helper().invoke<PrivatePureVirtualProc, __zz_cib_GenericProxy::__zz_cib_methodid::PrivatePureVirtual_0>(
      __zz_cib_proxy);
  }
  void PrivateVirtual() override {
    using PrivateVirtualProc = void (__zz_cib_decl *) (__zz_cib_PROXY*);
    return __zz_cib_get_mtable_helper().invoke<PrivateVirtualProc, __zz_cib_GenericProxy::__zz_cib_methodid::PrivateVirtual_1>(
      __zz_cib_proxy);
  }
  void ProtectedPureVirtual() override {
    using ProtectedPureVirtualProc = void (__zz_cib_decl *) (__zz_cib_PROXY*);
    return __zz_cib_get_mtable_helper().invoke<ProtectedPureVirtualProc, __zz_cib_GenericProxy::__zz_cib_methodid::ProtectedPureVirtual_2>(
      __zz_cib_proxy);
  }
  void ProtectedVirtual() override {
    using ProtectedVirtualProc = void (__zz_cib_decl *) (__zz_cib_PROXY*);
    return __zz_cib_get_mtable_helper().invoke<ProtectedVirtualProc, __zz_cib_GenericProxy::__zz_cib_methodid::ProtectedVirtual_3>(
      __zz_cib_proxy);
  }
  void PublicPureVirtual() override {
    using PublicPureVirtualProc = void (__zz_cib_decl *) (__zz_cib_PROXY*);
    return __zz_cib_get_mtable_helper().invoke<PublicPureVirtualProc, __zz_cib_GenericProxy::__zz_cib_methodid::PublicPureVirtual_4>(
      __zz_cib_proxy);
  }
  void PublicVirtual() override {
    using PublicVirtualProc = void (__zz_cib_decl *) (__zz_cib_PROXY*);
    return __zz_cib_get_mtable_helper().invoke<PublicVirtualProc, __zz_cib_GenericProxy::__zz_cib_methodid::PublicVirtual_5>(
      __zz_cib_proxy);
  }
  ~IF() override {
    if (!__zz_cib_proxy) return;
    using __zz_cib_deleteProc = void (__zz_cib_decl *) (__zz_cib_PROXY*);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_deleteProc, __zz_cib_GenericProxy::__zz_cib_methodid::__zz_cib_delete_6>(
      __zz_cib_proxy);
  }
  void __zz_cib_release_proxy() { __zz_cib_proxy = nullptr; }
};
}}}
namespace __zz_cib_ { namespace IF {
struct __zz_cib_Delegator : public __zz_cib_::IF::__zz_cib_GenericProxy::IF {
  using __zz_cib_ParentClass = __zz_cib_::IF::__zz_cib_GenericProxy::IF;
  using __zz_cib_ParentClass::__zz_cib_ParentClass;
  __ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib_Delegator, __zz_cib_ParentClass)
  using __zz_cib_Delegatee = __zz_cib_Delegator;
  static ::IF* __zz_cib_decl __zz_cib_new_0(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl) {
    return new __zz_cib_::IF::__zz_cib_GenericProxy::IF(proxy, mtbl);
  }
  static void __zz_cib_decl ProtectedPureVirtual_1(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->ProtectedPureVirtual();
  }
  static void __zz_cib_decl ProtectedVirtual_2(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->__zz_cib_Delegatee::ProtectedVirtual();
  }
  static void __zz_cib_decl ProtectedNonVirtual_3(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->__zz_cib_Delegatee::ProtectedNonVirtual();
  }
  static void __zz_cib_decl PublicPureVirtual_4(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->PublicPureVirtual();
  }
  static void __zz_cib_decl PublicVirtual_5(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->__zz_cib_Delegatee::PublicVirtual();
  }
  static void __zz_cib_decl PublicNonVirtual_6(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->__zz_cib_Delegatee::PublicNonVirtual();
  }
  static void __zz_cib_decl __zz_cib_delete_7(__zz_cib_Delegatee* __zz_cib_obj) {
    delete __zz_cib_obj;
  }
  static void __zz_cib_decl PrivatePureVirtual_8(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->PrivatePureVirtual();
  }
  static void __zz_cib_decl PrivateVirtual_9(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->PrivateVirtual();
  }
  static std::uint32_t __zz_cib_decl __zz_cib_get_class_id_10(::IF** __zz_cib_obj) {
    static bool classIdRepoPopulated = false;
    if (!classIdRepoPopulated) {
      __zz_cib_gClassIdRepo[std::type_index(typeid(::IF))] = __zz_cib_::IF::__zz_cib_classid;
      classIdRepoPopulated = true;
    }
    auto tdx = std::type_index(typeid(**__zz_cib_obj));
    auto itr = __zz_cib_gClassIdRepo.find(tdx);
    if (itr != __zz_cib_gClassIdRepo.end()) return itr->second;
    return __zz_cib_::IF::__zz_cib_classid;
  }
  static void __zz_cib_decl __zz_cib_release_proxy_11(::IF* __zz_cib_obj) {
    auto unknownProxy = dynamic_cast<__zz_cib_::IF::__zz_cib_GenericProxy::IF*>(__zz_cib_obj);
    if (unknownProxy)
      unknownProxy->__zz_cib_release_proxy();
  }
};
}}

namespace __zz_cib_ { namespace IF {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::ProtectedPureVirtual_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::ProtectedVirtual_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::ProtectedNonVirtual_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::PublicPureVirtual_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::PublicVirtual_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::PublicNonVirtual_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::PrivatePureVirtual_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::PrivateVirtual_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_get_class_id_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_release_proxy_11)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 12 };
  return &methodTable;
}
}}
namespace __zz_cib_ { namespace A {
struct __zz_cib_Delegator : public ::A {
  using __zz_cib_ParentClass = ::A;
  using __zz_cib_ParentClass::__zz_cib_ParentClass;
  __ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib_Delegator, __zz_cib_ParentClass)
  using __zz_cib_Delegatee = __zz_cib_Delegator;
  static ::A* __zz_cib_decl __zz_cib_copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
    delete __zz_cib_obj;
  }
  static ::A* __zz_cib_decl __zz_cib_new_2() {
    return new __zz_cib_Delegatee();
  }
  static void __zz_cib_decl SetIF_3(__zz_cib_Delegatee* __zz_cib_obj, ::IF* pIF) {
    __zz_cib_obj->__zz_cib_Delegatee::SetIF(pIF);
  }
  static ::IF* __zz_cib_decl GetIF_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_Delegatee::GetIF();
  }
};
}}

namespace __zz_cib_ { namespace A {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::SetIF_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::GetIF_4)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 5 };
  return &methodTable;
}
}}
