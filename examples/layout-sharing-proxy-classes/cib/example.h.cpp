#include "example.h"

#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_Example-delegate-helper.h"
#include "__zz_cib_Example-proxy.h"

namespace __zz_cib_ { namespace CPoint {
namespace __zz_cib_Delegator {
using __zz_cib_Delegatee = ::CPoint;
static ::CPoint* __zz_cib_decl __zz_cib_copy_0(::CPoint* __zz_cib_this, const __zz_cib_Delegatee* __zz_cib_obj) {
  return new (__zz_cib_this) __zz_cib_Delegatee(*__zz_cib_obj);
}
static void __zz_cib_decl __zz_cib_delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
  __zz_cib_obj->~CPoint();
}
static ::CPoint* __zz_cib_decl __zz_cib_new_2(::CPoint* __zz_cib_this, double _x, double _y, double _z) {
  return new (__zz_cib_this) __zz_cib_Delegatee(_x, _y, _z);
}
static ::CPoint const * __zz_cib_decl __zz_cib_OperatorPlusEq_3(__zz_cib_Delegatee* __zz_cib_obj, ::CPoint const * p) {
  return &__zz_cib_obj->::CPoint::operator +=(*p);
}
}
}}

namespace __zz_cib_ { namespace CPoint {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_OperatorPlusEq_3)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 4 };
  return &methodTable;
}
}}
