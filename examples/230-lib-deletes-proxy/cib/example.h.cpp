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

namespace __zz_cib_ { namespace I {
namespace __zz_cib_GenericProxy {
class I : public ::I {
  __zz_cib_PROXY* __zz_cib_proxy;
  const __zz_cib_MethodTableHelper __zz_cib_mtbl_helper;

  const __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() const {
    return __zz_cib_mtbl_helper;
  }
public:
  __ZZ_CIB_DELEGATOR_MEMBERS(I, ::I)

  I(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl)
    : ::I::I()
    , __zz_cib_proxy(proxy)
    , __zz_cib_mtbl_helper(mtbl)
  {}
  int f() const override {
    using fProc = int (__zz_cib_decl *) (const __zz_cib_PROXY*);
    return __zz_cib_get_mtable_helper().invoke<fProc, __zz_cib_GenericProxy::__zz_cib_methodid::f_0>(
      __zz_cib_proxy);
  }
  ~I() override {
    if (!__zz_cib_proxy) return;
    using __zz_cib_deleteProc = void (__zz_cib_decl *) (__zz_cib_PROXY*);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_deleteProc, __zz_cib_GenericProxy::__zz_cib_methodid::__zz_cib_delete_1>(
      __zz_cib_proxy);
  }
  void __zz_cib_release_proxy() { __zz_cib_proxy = nullptr; }
};
}}}
namespace __zz_cib_ { namespace I {
namespace __zz_cib_Delegator {
using __zz_cib_Delegatee = __zz_cib_::I::__zz_cib_GenericProxy::I;
static ::I* __zz_cib_decl __zz_cib_new_0(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl) {
  return new __zz_cib_::I::__zz_cib_GenericProxy::I(proxy, mtbl);
}
static void __zz_cib_decl __zz_cib_delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
  delete __zz_cib_obj;
}
static int __zz_cib_decl f_2(const __zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->f();
}
static std::uint32_t __zz_cib_decl __zz_cib_get_class_id_3(::I** __zz_cib_obj) {
  static bool classIdRepoPopulated = false;
  if (!classIdRepoPopulated) {
    __zz_cib_gClassIdRepo[std::type_index(typeid(::I))] = __zz_cib_::I::__zz_cib_classid;
    classIdRepoPopulated = true;
  }
  auto tdx = std::type_index(typeid(**__zz_cib_obj));
  auto itr = __zz_cib_gClassIdRepo.find(tdx);
  if (itr != __zz_cib_gClassIdRepo.end()) return itr->second;
  return __zz_cib_::I::__zz_cib_classid;
}
static void __zz_cib_decl __zz_cib_release_proxy_4(::I* __zz_cib_obj) {
  auto unknownProxy = dynamic_cast<__zz_cib_::I::__zz_cib_GenericProxy::I*>(__zz_cib_obj);
  if (unknownProxy)
    unknownProxy->__zz_cib_release_proxy();
}
}
}}

namespace __zz_cib_ { namespace I {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::f_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_get_class_id_3),
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
static ::I const * __zz_cib_decl f_3(const __zz_cib_Delegatee* __zz_cib_obj) {
  return &__zz_cib_obj->::A::f();
}
static ::I const * __zz_cib_decl g_4(const __zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->::A::g();
}
static ::I* __zz_cib_decl c_5(const __zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->::A::c();
}
static void __zz_cib_decl d_6(const __zz_cib_Delegatee* __zz_cib_obj, ::I const * p) {
  __zz_cib_obj->::A::d(p);
}
}
}}

namespace __zz_cib_ { namespace A {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::f_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::g_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::c_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::d_6)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 7 };
  return &methodTable;
}
}}
