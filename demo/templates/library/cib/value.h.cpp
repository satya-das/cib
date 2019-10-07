#include "value.h"

#include "__zz_cib_templates-ids.h"
#include "__zz_cib_templates-mtable-helper.h"
#include "__zz_cib_templates-delegate-helper.h"
#include "__zz_cib_templates-proxy.h"

namespace __zz_cib_ { namespace __zz_cib_Class258 {
namespace __zz_cib_Delegator {
using __zz_cib_Delegatee = ::Value<float>;
static ::Value<float>* __zz_cib_decl __zz_cib_copy(const __zz_cib_Delegatee* __zz_cib_obj) {
  return new __zz_cib_Delegatee(*__zz_cib_obj);
}
static void __zz_cib_decl __zz_cib_delete(__zz_cib_Delegatee* __zz_cib_obj) {
  delete __zz_cib_obj;
}
static ::Value<float>* __zz_cib_decl __zz_cib_new(float value) {
  return new __zz_cib_Delegatee(value);
}
static float __zz_cib_decl get(const __zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->::Value<float>::get();
}
}
}}

namespace __zz_cib_ { namespace __zz_cib_Class258 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_copy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::get)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 4 };
  return &methodTable;
}
}}
namespace __zz_cib_ { namespace __zz_cib_Class259 {
namespace __zz_cib_Delegator {
using __zz_cib_Delegatee = ::Value<int>;
static ::Value<int>* __zz_cib_decl __zz_cib_copy(const __zz_cib_Delegatee* __zz_cib_obj) {
  return new __zz_cib_Delegatee(*__zz_cib_obj);
}
static void __zz_cib_decl __zz_cib_delete(__zz_cib_Delegatee* __zz_cib_obj) {
  delete __zz_cib_obj;
}
static ::Value<int>* __zz_cib_decl __zz_cib_new(int value) {
  return new __zz_cib_Delegatee(value);
}
static int __zz_cib_decl get(const __zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->::Value<int>::get();
}
}
}}

namespace __zz_cib_ { namespace __zz_cib_Class259 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_copy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::get)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 4 };
  return &methodTable;
}
}}
