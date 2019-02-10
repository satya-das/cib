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

namespace __zz_cib_ { namespace Interface2 {
namespace __zz_cib_GenericProxy {
class Interface2 : public ::Interface2 {
  __zz_cib_PROXY* __zz_cib_proxy;
  const __zz_cib_MethodTableHelper __zz_cib_mtbl_helper;

  const __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() const {
    return __zz_cib_mtbl_helper;
  }
public:
  __ZZ_CIB_DELEGATOR_MEMBERS(Interface2, ::Interface2)

  Interface2(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl)
    : ::Interface2::Interface2()
    , __zz_cib_proxy(proxy)
    , __zz_cib_mtbl_helper(mtbl)
  {}
  int f() override {
    using fProc = int (__zz_cib_decl *) (__zz_cib_PROXY*);
    return __zz_cib_get_mtable_helper().invoke<fProc, __zz_cib_GenericProxy::__zz_cib_methodid::f_0>(
      __zz_cib_proxy);
  }
  ~Interface2() override {
    if (!__zz_cib_proxy) return;
    using __zz_cib_deleteProc = void (__zz_cib_decl *) (__zz_cib_PROXY*);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_deleteProc, __zz_cib_GenericProxy::__zz_cib_methodid::__zz_cib_delete_1>(
      __zz_cib_proxy);
  }
  void __zz_cib_release_proxy() { __zz_cib_proxy = nullptr; }
};
}}}
namespace __zz_cib_ { namespace Interface2 {
namespace __zz_cib_Delegator {
using __zz_cib_Delegatee = __zz_cib_::Interface2::__zz_cib_GenericProxy::Interface2;
static ::Interface2* __zz_cib_decl __zz_cib_new_0(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl) {
  return new __zz_cib_::Interface2::__zz_cib_GenericProxy::Interface2(proxy, mtbl);
}
static int __zz_cib_decl f_1(__zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->f();
}
static void __zz_cib_decl __zz_cib_delete_2(__zz_cib_Delegatee* __zz_cib_obj) {
  delete __zz_cib_obj;
}
static std::uint32_t __zz_cib_decl __zz_cib_get_class_id_3(::Interface2** __zz_cib_obj) {
  static bool classIdRepoPopulated = false;
  if (!classIdRepoPopulated) {
    __zz_cib_gClassIdRepo[std::type_index(typeid(::Interface2))] = __zz_cib_::Interface2::__zz_cib_classid;
    classIdRepoPopulated = true;
  }
  auto tdx = std::type_index(typeid(**__zz_cib_obj));
  auto itr = __zz_cib_gClassIdRepo.find(tdx);
  if (itr != __zz_cib_gClassIdRepo.end()) return itr->second;
  return __zz_cib_::Interface2::__zz_cib_classid;
}
static void __zz_cib_decl __zz_cib_release_proxy_4(::Interface2* __zz_cib_obj) {
  auto unknownProxy = dynamic_cast<__zz_cib_::Interface2::__zz_cib_GenericProxy::Interface2*>(__zz_cib_obj);
  if (unknownProxy)
    unknownProxy->__zz_cib_release_proxy();
}
}
}}

namespace __zz_cib_ { namespace Interface2 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::f_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_get_class_id_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_release_proxy_4)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 5 };
  return &methodTable;
}
}}
namespace __zz_cib_ { namespace Interface3 {
namespace __zz_cib_GenericProxy {
class Interface3 : public ::Interface3 {
  __zz_cib_PROXY* __zz_cib_proxy;
  const __zz_cib_MethodTableHelper __zz_cib_mtbl_helper;

  const __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() const {
    return __zz_cib_mtbl_helper;
  }
public:
  __ZZ_CIB_DELEGATOR_MEMBERS(Interface3, ::Interface3)

  Interface3(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl)
    : ::Interface3::Interface3()
    , __zz_cib_proxy(proxy)
    , __zz_cib_mtbl_helper(mtbl)
  {}
  int g() override {
    using gProc = int (__zz_cib_decl *) (__zz_cib_PROXY*);
    return __zz_cib_get_mtable_helper().invoke<gProc, __zz_cib_GenericProxy::__zz_cib_methodid::g_0>(
      __zz_cib_proxy);
  }
  ~Interface3() override {
    if (!__zz_cib_proxy) return;
    using __zz_cib_deleteProc = void (__zz_cib_decl *) (__zz_cib_PROXY*);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_deleteProc, __zz_cib_GenericProxy::__zz_cib_methodid::__zz_cib_delete_1>(
      __zz_cib_proxy);
  }
  void __zz_cib_release_proxy() { __zz_cib_proxy = nullptr; }
};
}}}
namespace __zz_cib_ { namespace Interface3 {
namespace __zz_cib_Delegator {
using __zz_cib_Delegatee = __zz_cib_::Interface3::__zz_cib_GenericProxy::Interface3;
static ::Interface3* __zz_cib_decl __zz_cib_new_0(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl) {
  return new __zz_cib_::Interface3::__zz_cib_GenericProxy::Interface3(proxy, mtbl);
}
static int __zz_cib_decl g_1(__zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->g();
}
static void __zz_cib_decl __zz_cib_delete_2(__zz_cib_Delegatee* __zz_cib_obj) {
  delete __zz_cib_obj;
}
static std::uint32_t __zz_cib_decl __zz_cib_get_class_id_3(::Interface3** __zz_cib_obj) {
  static bool classIdRepoPopulated = false;
  if (!classIdRepoPopulated) {
    __zz_cib_gClassIdRepo[std::type_index(typeid(::Interface3))] = __zz_cib_::Interface3::__zz_cib_classid;
    classIdRepoPopulated = true;
  }
  auto tdx = std::type_index(typeid(**__zz_cib_obj));
  auto itr = __zz_cib_gClassIdRepo.find(tdx);
  if (itr != __zz_cib_gClassIdRepo.end()) return itr->second;
  return __zz_cib_::Interface3::__zz_cib_classid;
}
static void __zz_cib_decl __zz_cib_release_proxy_4(::Interface3* __zz_cib_obj) {
  auto unknownProxy = dynamic_cast<__zz_cib_::Interface3::__zz_cib_GenericProxy::Interface3*>(__zz_cib_obj);
  if (unknownProxy)
    unknownProxy->__zz_cib_release_proxy();
}
}
}}

namespace __zz_cib_ { namespace Interface3 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::g_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_get_class_id_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_release_proxy_4)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 5 };
  return &methodTable;
}
}}
namespace __zz_cib_ { namespace Interface1 {
namespace __zz_cib_GenericProxy {
class Interface1 : public ::Interface1 {
  __zz_cib_PROXY* __zz_cib_proxy;
  const __zz_cib_MethodTableHelper __zz_cib_mtbl_helper;

  const __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() const {
    return __zz_cib_mtbl_helper;
  }
public:
  __ZZ_CIB_DELEGATOR_MEMBERS(Interface1, ::Interface1)

  Interface1(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl)
    : ::Interface1::Interface1()
    , __zz_cib_proxy(proxy)
    , __zz_cib_mtbl_helper(mtbl)
  {}
  ::Interface2* p() override {
    using pProc = ::Interface2* (__zz_cib_decl *) (__zz_cib_PROXY*);
    return __zz_cib_get_mtable_helper().invoke<pProc, __zz_cib_GenericProxy::__zz_cib_methodid::p_0>(
      __zz_cib_proxy);
  }
  ::Interface3& r() override {
    using rProc = ::Interface3* (__zz_cib_decl *) (__zz_cib_PROXY*);
    return *__zz_cib_get_mtable_helper().invoke<rProc, __zz_cib_GenericProxy::__zz_cib_methodid::r_1>(
      __zz_cib_proxy);
  }
  ~Interface1() override {
    if (!__zz_cib_proxy) return;
    using __zz_cib_deleteProc = void (__zz_cib_decl *) (__zz_cib_PROXY*);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_deleteProc, __zz_cib_GenericProxy::__zz_cib_methodid::__zz_cib_delete_2>(
      __zz_cib_proxy);
  }
  void __zz_cib_release_proxy() { __zz_cib_proxy = nullptr; }
};
}}}
namespace __zz_cib_ { namespace Interface1 {
namespace __zz_cib_Delegator {
using __zz_cib_Delegatee = __zz_cib_::Interface1::__zz_cib_GenericProxy::Interface1;
static ::Interface1* __zz_cib_decl __zz_cib_new_0(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl) {
  return new __zz_cib_::Interface1::__zz_cib_GenericProxy::Interface1(proxy, mtbl);
}
static ::Interface2* __zz_cib_decl p_1(__zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->p();
}
static ::Interface3* __zz_cib_decl r_2(__zz_cib_Delegatee* __zz_cib_obj) {
  return &__zz_cib_obj->r();
}
static void __zz_cib_decl __zz_cib_delete_3(__zz_cib_Delegatee* __zz_cib_obj) {
  delete __zz_cib_obj;
}
static void __zz_cib_decl __zz_cib_release_proxy_4(::Interface1* __zz_cib_obj) {
  auto unknownProxy = dynamic_cast<__zz_cib_::Interface1::__zz_cib_GenericProxy::Interface1*>(__zz_cib_obj);
  if (unknownProxy)
    unknownProxy->__zz_cib_release_proxy();
}
}
}}

namespace __zz_cib_ { namespace Interface1 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::p_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::r_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_release_proxy_4)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 5 };
  return &methodTable;
}
}}
namespace __zz_cib_ { namespace A {
namespace __zz_cib_Delegator {
using __zz_cib_Delegatee = ::A;
static ::A* __zz_cib_decl __zz_cib_copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
  return new __zz_cib_Delegatee(*__zz_cib_obj);
}
static void __zz_cib_decl __zz_cib_delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
  delete __zz_cib_obj;
}
static ::A* __zz_cib_decl __zz_cib_new_2() {
  return new __zz_cib_Delegatee();
}
static int __zz_cib_decl SetInterface_3(const __zz_cib_Delegatee* __zz_cib_obj, ::Interface1* pInterface1) {
  return __zz_cib_obj->__zz_cib_Delegatee::SetInterface(pInterface1);
}
}
}}

namespace __zz_cib_ { namespace A {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::SetInterface_3)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 4 };
  return &methodTable;
}
}}
