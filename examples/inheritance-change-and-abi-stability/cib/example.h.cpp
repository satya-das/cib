#include "example.h"

#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_Example-delegate-helper.h"
#include "__zz_cib_Example-proxy.h"

namespace __zz_cib_ { namespace A {
namespace __zz_cib_Delegator {
using __zz_cib_Delegatee = ::A;
static ::A* __zz_cib_decl __zz_cib_copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
  return new __zz_cib_Delegatee(*__zz_cib_obj);
}
static ::A* __zz_cib_decl __zz_cib_new_1() {
  return new __zz_cib_Delegatee();
}
static int __zz_cib_decl AnotherVirtFunc_5(__zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->__zz_cib_Delegatee::AnotherVirtFunc();
}
static int __zz_cib_decl VirtFunc_2(__zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->__zz_cib_Delegatee::VirtFunc();
}
static int __zz_cib_decl SomeFunc_3(__zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->__zz_cib_Delegatee::SomeFunc();
}
static void __zz_cib_decl __zz_cib_delete_4(__zz_cib_Delegatee* __zz_cib_obj) {
  delete __zz_cib_obj;
}
}
}}

namespace __zz_cib_ { namespace A {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::VirtFunc_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::SomeFunc_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::AnotherVirtFunc_5)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 6 };
  return &methodTable;
}
}}
namespace __zz_cib_ { namespace I1 {
namespace __zz_cib_Delegator {
using __zz_cib_Delegatee = ::I1;
static ::I1* __zz_cib_decl __zz_cib_new_0() {
  return new __zz_cib_Delegatee();
}
static ::I1* __zz_cib_decl __zz_cib_copy_1(const __zz_cib_Delegatee* __zz_cib_obj) {
  return new __zz_cib_Delegatee(*__zz_cib_obj);
}
static int __zz_cib_decl F_2(__zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->__zz_cib_Delegatee::F();
}
static void __zz_cib_decl __zz_cib_delete_3(__zz_cib_Delegatee* __zz_cib_obj) {
  delete __zz_cib_obj;
}
}
}}

namespace __zz_cib_ { namespace I1 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_copy_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::F_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete_3)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 4 };
  return &methodTable;
}
}}
namespace __zz_cib_ { namespace I2 {
namespace __zz_cib_Delegator {
using __zz_cib_Delegatee = ::I2;
static ::I2* __zz_cib_decl __zz_cib_new_0() {
  return new __zz_cib_Delegatee();
}
static ::I2* __zz_cib_decl __zz_cib_copy_1(const __zz_cib_Delegatee* __zz_cib_obj) {
  return new __zz_cib_Delegatee(*__zz_cib_obj);
}
static int __zz_cib_decl G_2(__zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->__zz_cib_Delegatee::G();
}
static void __zz_cib_decl __zz_cib_delete_3(__zz_cib_Delegatee* __zz_cib_obj) {
  delete __zz_cib_obj;
}
}
}}

namespace __zz_cib_ { namespace I2 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_copy_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::G_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete_3)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 4 };
  return &methodTable;
}
}}
namespace __zz_cib_ { namespace B {
namespace __zz_cib_Delegator {
using __zz_cib_Delegatee = ::B;
static ::B* __zz_cib_decl __zz_cib_copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
  return new __zz_cib_Delegatee(*__zz_cib_obj);
}
static void __zz_cib_decl __zz_cib_delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
  delete __zz_cib_obj;
}
static ::B* __zz_cib_decl __zz_cib_new_2() {
  return new __zz_cib_Delegatee();
}
static int __zz_cib_decl VirtFunc_3(__zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->__zz_cib_Delegatee::VirtFunc();
}
static ::I1* __zz_cib_decl __zz_cib_cast_to___I1_5(::B* __zz_cib_obj) {
  return __zz_cib_obj;
}
static ::A* __zz_cib_decl __zz_cib_cast_to___A_4(::B* __zz_cib_obj) {
  return __zz_cib_obj;
}
static ::I2* __zz_cib_decl __zz_cib_cast_to___I2_6(::B* __zz_cib_obj) {
  return __zz_cib_obj;
}
}
}}

namespace __zz_cib_ { namespace B {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::VirtFunc_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_cast_to___A_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_cast_to___I1_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_cast_to___I2_6)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 7 };
  return &methodTable;
}
}}
