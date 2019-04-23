#include "value.h"

#include "__zz_cib_illustration3-ids.h"
#include "__zz_cib_illustration3-mtable-helper.h"
#include "__zz_cib_illustration3-delegate-helper.h"
#include "__zz_cib_illustration3-proxy.h"

namespace __zz_cib_ { namespace __zz_cib_Class3 {
namespace __zz_cib_Delegator {
using __zz_cib_Delegatee = ::Value<float>;
static ::Value<float>* __zz_cib_decl __zz_cib_copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
  return new __zz_cib_Delegatee(*__zz_cib_obj);
}
static void __zz_cib_decl __zz_cib_delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
  delete __zz_cib_obj;
}
static ::Value<float>* __zz_cib_decl __zz_cib_new_2(float value) {
  return new __zz_cib_Delegatee(value);
}
static float __zz_cib_decl get_3(const __zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->::Value<float>::get();
}
}
}}

namespace __zz_cib_ { namespace __zz_cib_Class3 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::get_3)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 4 };
  return &methodTable;
}
}}
namespace __zz_cib_ { namespace __zz_cib_Class4 {
namespace __zz_cib_Delegator {
using __zz_cib_Delegatee = ::Value<int>;
static ::Value<int>* __zz_cib_decl __zz_cib_copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
  return new __zz_cib_Delegatee(*__zz_cib_obj);
}
static void __zz_cib_decl __zz_cib_delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
  delete __zz_cib_obj;
}
static ::Value<int>* __zz_cib_decl __zz_cib_new_2(int value) {
  return new __zz_cib_Delegatee(value);
}
static int __zz_cib_decl get_3(const __zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->::Value<int>::get();
}
}
}}

namespace __zz_cib_ { namespace __zz_cib_Class4 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::get_3)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 4 };
  return &methodTable;
}
}}
