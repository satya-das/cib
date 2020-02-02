#include "example.h"

#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_Example-delegate-helper.h"
#include "__zz_cib_Example-proxy.h"
#include "__zz_cib_Example-smart-ptr-helper.h"

namespace __zz_cib_ {
namespace Example {
using namespace ::Example;
namespace A {
namespace __zz_cib_Delegator {
using __zz_cib_Delegatee = ::Example::A;
using __zz_cib_ThisClass = __zz_cib_Delegatee;
static ::Example::A* __zz_cib_decl __zz_cib_copy(const __zz_cib_Delegatee* __zz_cib_obj) {
  return new __zz_cib_Delegatee(*__zz_cib_obj);
}
static void __zz_cib_decl __zz_cib_delete(__zz_cib_Delegatee* __zz_cib_obj) {
  delete __zz_cib_obj;
}
static ::Example::A* __zz_cib_decl __zz_cib_new() {
  return new __zz_cib_Delegatee();
}
static int __zz_cib_decl Func(__zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->::Example::A::Func();
}
static int __zz_cib_decl Func_4(__zz_cib_Delegatee* __zz_cib_obj, float __zz_cib_param0) {
  return __zz_cib_obj->::Example::A::Func(__zz_cib_param0);
}
}
}}}

namespace __zz_cib_ {
namespace Example {
using namespace ::Example;
namespace A {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_copy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::Func),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::Func_4)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 5 };
  return &methodTable;
}
}}}
