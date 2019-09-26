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
namespace __zz_cib_Delegator {
using __zz_cib_Delegatee = ::I;
static void __zz_cib_decl __zz_cib_delete_0(__zz_cib_Delegatee* __zz_cib_obj) {
  delete __zz_cib_obj;
}
static int __zz_cib_decl f_1(const __zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->f();
}
static std::uint32_t __zz_cib_decl __zz_cib_get_class_id_2(::I** __zz_cib_obj) {
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
}
}}

namespace __zz_cib_ { namespace I {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::f_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_get_class_id_2)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 3 };
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
static ::I* __zz_cib_decl f_3(const __zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->::A::f().get();
}
static ::I* __zz_cib_decl g_4(__zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->::A::g();
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
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::g_4)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 5 };
  return &methodTable;
}
}}
