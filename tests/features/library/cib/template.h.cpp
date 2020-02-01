#include "template.h"

#include "__zz_cib_FeatureTests-ids.h"
#include "__zz_cib_FeatureTests-mtable-helper.h"
#include "__zz_cib_FeatureTests-delegate-helper.h"
#include "__zz_cib_FeatureTests-proxy.h"

namespace __zz_cib_ {
namespace __zz_cib_Class256 {
namespace __zz_cib_Delegator {
using __zz_cib_Delegatee = ::TemplateClassWithOneParam<int>;
using __zz_cib_ThisClass = __zz_cib_Delegatee;
static ::TemplateClassWithOneParam<int>* __zz_cib_decl __zz_cib_copy(const __zz_cib_Delegatee* __zz_cib_obj) {
  return new __zz_cib_Delegatee(*__zz_cib_obj);
}
static void __zz_cib_decl __zz_cib_delete(__zz_cib_Delegatee* __zz_cib_obj) {
  delete __zz_cib_obj;
}
static ::TemplateClassWithOneParam<int>* __zz_cib_decl __zz_cib_new(int _a1) {
  return new __zz_cib_Delegatee(_a1);
}
static int __zz_cib_decl get(const __zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->::TemplateClassWithOneParam<int>::get();
}
}
}}

namespace __zz_cib_ {
namespace __zz_cib_Class256 {
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
namespace __zz_cib_ {
namespace TemplateTest {
namespace __zz_cib_Delegator {
using __zz_cib_Delegatee = ::TemplateTest;
using __zz_cib_ThisClass = __zz_cib_Delegatee;
static ::TemplateTest* __zz_cib_decl __zz_cib_copy(const __zz_cib_Delegatee* __zz_cib_obj) {
  return new __zz_cib_Delegatee(*__zz_cib_obj);
}
static void __zz_cib_decl __zz_cib_delete(__zz_cib_Delegatee* __zz_cib_obj) {
  delete __zz_cib_obj;
}
static ::TemplateTest* __zz_cib_decl __zz_cib_new() {
  return new __zz_cib_Delegatee();
}
static ::TemplateClassWithOneParam<int>* __zz_cib_decl getTemplateClassWithOneParam(const __zz_cib_Delegatee* __zz_cib_obj) {
  return new ::TemplateClassWithOneParam<int>(__zz_cib_obj->::TemplateTest::getTemplateClassWithOneParam());
}
}
}}

namespace __zz_cib_ {
namespace TemplateTest {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_copy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::getTemplateClassWithOneParam)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 4 };
  return &methodTable;
}
}}
