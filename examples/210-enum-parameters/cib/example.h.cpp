#include "example.h"

#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_Example-delegate-helper.h"
#include "__zz_cib_Example-proxy.h"

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
static int __zz_cib_decl fE(const __zz_cib_Delegatee* __zz_cib_obj, ::E e) {
  return __zz_cib_obj->::A::fE(e);
}
static int __zz_cib_decl fE_4(const __zz_cib_Delegatee* __zz_cib_obj, ::EC e) {
  return __zz_cib_obj->::A::fE(e);
}
static int __zz_cib_decl fE_5(const __zz_cib_Delegatee* __zz_cib_obj, ::E8 e) {
  return __zz_cib_obj->::A::fE(e);
}
static int __zz_cib_decl fE_6(const __zz_cib_Delegatee* __zz_cib_obj, ::EC16 e) {
  return __zz_cib_obj->::A::fE(e);
}
}
}}

namespace __zz_cib_ { namespace A {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_copy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::fE),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::fE_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::fE_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::fE_6)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 7 };
  return &methodTable;
}
}}
