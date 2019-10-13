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
struct __zz_cib_Delegator;
namespace __zz_cib_GenericProxy {
class IF : public ::IF {
  __zz_cib_PROXY* __zz_cib_proxy;
  const __zz_cib_MethodTableHelper __zz_cib_mtbl_helper;

  const __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() const {
    return __zz_cib_mtbl_helper;
  }
  friend struct __zz_cib_::IF::__zz_cib_Delegator;
public:
  __ZZ_CIB_DELEGATOR_MEMBERS(IF, ::IF)

  IF(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl)
    : ::IF::IF()
    , __zz_cib_proxy(proxy)
    , __zz_cib_mtbl_helper(mtbl)
  {}
  int PrivatePureVirtual() override {
    using __zz_cib_PrivatePureVirtualProc = int (__zz_cib_decl *) (__zz_cib_PROXY*);
    return __zz_cib_get_mtable_helper().invoke<__zz_cib_PrivatePureVirtualProc, __zz_cib_GenericProxy::__zz_cib_methodid::__zz_cib_PrivatePureVirtual>(
      __zz_cib_proxy);
  }
  int PrivateVirtual() override {
    using __zz_cib_PrivateVirtualProc = int (__zz_cib_decl *) (__zz_cib_PROXY*);
    return __zz_cib_get_mtable_helper().invoke<__zz_cib_PrivateVirtualProc, __zz_cib_GenericProxy::__zz_cib_methodid::__zz_cib_PrivateVirtual>(
      __zz_cib_proxy);
  }
  int ProtectedPureVirtual() override {
    using __zz_cib_ProtectedPureVirtualProc = int (__zz_cib_decl *) (__zz_cib_PROXY*);
    return __zz_cib_get_mtable_helper().invoke<__zz_cib_ProtectedPureVirtualProc, __zz_cib_GenericProxy::__zz_cib_methodid::__zz_cib_ProtectedPureVirtual>(
      __zz_cib_proxy);
  }
  int ProtectedVirtual() override {
    using __zz_cib_ProtectedVirtualProc = int (__zz_cib_decl *) (__zz_cib_PROXY*);
    return __zz_cib_get_mtable_helper().invoke<__zz_cib_ProtectedVirtualProc, __zz_cib_GenericProxy::__zz_cib_methodid::__zz_cib_ProtectedVirtual>(
      __zz_cib_proxy);
  }
  int PublicPureVirtual() override {
    using __zz_cib_PublicPureVirtualProc = int (__zz_cib_decl *) (__zz_cib_PROXY*);
    return __zz_cib_get_mtable_helper().invoke<__zz_cib_PublicPureVirtualProc, __zz_cib_GenericProxy::__zz_cib_methodid::__zz_cib_PublicPureVirtual>(
      __zz_cib_proxy);
  }
  int PublicVirtual() override {
    using __zz_cib_PublicVirtualProc = int (__zz_cib_decl *) (__zz_cib_PROXY*);
    return __zz_cib_get_mtable_helper().invoke<__zz_cib_PublicVirtualProc, __zz_cib_GenericProxy::__zz_cib_methodid::__zz_cib_PublicVirtual>(
      __zz_cib_proxy);
  }
  ~IF() override {
    if (!__zz_cib_proxy) return;
    using __zz_cib_deleteProc = void (__zz_cib_decl *) (__zz_cib_PROXY*);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_deleteProc, __zz_cib_GenericProxy::__zz_cib_methodid::__zz_cib_delete>(
      __zz_cib_proxy);
  }
  void __zz_cib_release_proxy() { __zz_cib_proxy = nullptr; }
};
}}}
namespace __zz_cib_ { namespace IF {
struct __zz_cib_Delegator {
  using __zz_cib_Delegatee = __zz_cib_::IF::__zz_cib_GenericProxy::IF;
  static ::IF* __zz_cib_decl __zz_cib_new(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl) {
    return new __zz_cib_::IF::__zz_cib_GenericProxy::IF(proxy, mtbl);
  }
  static int __zz_cib_decl __zz_cib_ProtectedPureVirtual(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_obj->ProtectedPureVirtual();
  }
  static int __zz_cib_decl __zz_cib_ProtectedVirtual(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_obj->::IF::ProtectedVirtual();
  }
  static int __zz_cib_decl __zz_cib_ProtectedNonVirtual(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_obj->::IF::ProtectedNonVirtual();
  }
  static int __zz_cib_decl __zz_cib_PublicPureVirtual(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_obj->PublicPureVirtual();
  }
  static int __zz_cib_decl __zz_cib_PublicVirtual(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_obj->::IF::PublicVirtual();
  }
  static int __zz_cib_decl __zz_cib_PublicNonVirtual(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_obj->::IF::PublicNonVirtual();
  }
  static void __zz_cib_decl __zz_cib_delete(__zz_cib_Delegatee* __zz_cib_obj) {
    delete __zz_cib_obj;
  }
  static int __zz_cib_decl __zz_cib_PrivatePureVirtual(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_obj->PrivatePureVirtual();
  }
  static int __zz_cib_decl __zz_cib_PrivateVirtual(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_obj->PrivateVirtual();
  }
  static std::uint32_t __zz_cib_decl __zz_cib_get_class_id(::IF** __zz_cib_obj) {
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
  static void __zz_cib_decl __zz_cib_release_proxy(::IF* __zz_cib_obj) {
    auto unknownProxy = dynamic_cast<__zz_cib_::IF::__zz_cib_GenericProxy::IF*>(__zz_cib_obj);
    if (unknownProxy)
      unknownProxy->__zz_cib_release_proxy();
  }
};
}}

namespace __zz_cib_ { namespace IF {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_ProtectedPureVirtual),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_ProtectedVirtual),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_ProtectedNonVirtual),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_PublicPureVirtual),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_PublicVirtual),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_PublicNonVirtual),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_PrivatePureVirtual),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_PrivateVirtual),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_get_class_id),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_release_proxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 12 };
  return &methodTable;
}
}}
namespace __zz_cib_ { namespace A {
namespace __zz_cib_Delegator {
using __zz_cib_Delegatee = ::A;
static ::A* __zz_cib_decl __zz_cib_copy(const __zz_cib_Delegatee* __zz_cib_obj) {
  return new __zz_cib_Delegatee(*__zz_cib_obj);
}
static void __zz_cib_decl __zz_cib_delete(__zz_cib_Delegatee* __zz_cib_obj) {
  delete __zz_cib_obj;
}
static ::A* __zz_cib_decl __zz_cib_new() {
  return new __zz_cib_Delegatee();
}
static int __zz_cib_decl __zz_cib_SetIF(__zz_cib_Delegatee* __zz_cib_obj, ::IF* pIF) {
  return __zz_cib_obj->::A::SetIF(pIF);
}
static ::IF* __zz_cib_decl __zz_cib_GetIF(const __zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->::A::GetIF();
}
}
}}

namespace __zz_cib_ { namespace A {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_copy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_SetIF),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_GetIF)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 5 };
  return &methodTable;
}
}}
