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
static ::Example::A* __zz_cib_decl __zz_cib_OperatorLShift(__zz_cib_Delegatee* __zz_cib_obj, int x) {
  return &__zz_cib_obj->::Example::A::operator <<(x);
}
static ::Example::A* __zz_cib_decl __zz_cib_OperatorRShift(__zz_cib_Delegatee* __zz_cib_obj, int* x) {
  return &__zz_cib_obj->::Example::A::operator >>(*x);
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
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_OperatorLShift),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_OperatorRShift)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 5 };
  return &methodTable;
}
}}}
