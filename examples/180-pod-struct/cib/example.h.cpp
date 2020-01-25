#include "example.h"

#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_Example-delegate-helper.h"
#include "__zz_cib_Example-proxy.h"

namespace __zz_cib_ {
namespace NonPod1 {
namespace __zz_cib_Delegator {
using __zz_cib_Delegatee = ::NonPod1;
using __zz_cib_ThisClass = __zz_cib_Delegatee;
static ::NonPod1* __zz_cib_decl __zz_cib_new() {
  return new __zz_cib_Delegatee();
}
static ::NonPod1* __zz_cib_decl __zz_cib_copy(const __zz_cib_Delegatee* __zz_cib_obj) {
  return new __zz_cib_Delegatee(*__zz_cib_obj);
}
static void __zz_cib_decl __zz_cib_delete(__zz_cib_Delegatee* __zz_cib_obj) {
  delete __zz_cib_obj;
}
}
}}

namespace __zz_cib_ {
namespace NonPod1 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_copy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 3 };
  return &methodTable;
}
}}
namespace __zz_cib_ {
namespace NonPod2 {
namespace __zz_cib_Delegator {
using __zz_cib_Delegatee = ::NonPod2;
using __zz_cib_ThisClass = __zz_cib_Delegatee;
static ::NonPod2* __zz_cib_decl __zz_cib_new() {
  return new __zz_cib_Delegatee();
}
static ::NonPod2* __zz_cib_decl __zz_cib_copy(const __zz_cib_Delegatee* __zz_cib_obj) {
  return new __zz_cib_Delegatee(*__zz_cib_obj);
}
static void __zz_cib_decl __zz_cib_delete(__zz_cib_Delegatee* __zz_cib_obj) {
  delete __zz_cib_obj;
}
}
}}

namespace __zz_cib_ {
namespace NonPod2 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_copy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 3 };
  return &methodTable;
}
}}
namespace __zz_cib_ {
namespace NonPod3 {
namespace __zz_cib_Delegator {
using __zz_cib_Delegatee = ::NonPod3;
using __zz_cib_ThisClass = __zz_cib_Delegatee;
static ::NonPod3* __zz_cib_decl __zz_cib_new() {
  return new __zz_cib_Delegatee();
}
static ::NonPod3* __zz_cib_decl __zz_cib_copy(const __zz_cib_Delegatee* __zz_cib_obj) {
  return new __zz_cib_Delegatee(*__zz_cib_obj);
}
static void __zz_cib_decl __zz_cib_delete(__zz_cib_Delegatee* __zz_cib_obj) {
  delete __zz_cib_obj;
}
}
}}

namespace __zz_cib_ {
namespace NonPod3 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_copy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 3 };
  return &methodTable;
}
}}
namespace __zz_cib_ {
namespace A {
namespace __zz_cib_Delegator {
using __zz_cib_Delegatee = ::A;
using __zz_cib_ThisClass = __zz_cib_Delegatee;
static ::A* __zz_cib_decl __zz_cib_copy(const __zz_cib_Delegatee* __zz_cib_obj) {
  return new __zz_cib_Delegatee(*__zz_cib_obj);
}
static void __zz_cib_decl __zz_cib_delete(__zz_cib_Delegatee* __zz_cib_obj) {
  delete __zz_cib_obj;
}
static ::A* __zz_cib_decl __zz_cib_new() {
  return new __zz_cib_Delegatee();
}
static void __zz_cib_decl setPod(__zz_cib_Delegatee* __zz_cib_obj, ::Pod* p) {
  __zz_cib_obj->::A::setPod(*p);
}
static void __zz_cib_decl setPod_4(__zz_cib_Delegatee* __zz_cib_obj, ::Pod* p) {
  __zz_cib_obj->::A::setPod(p);
}
static void __zz_cib_decl setNonPod1(__zz_cib_Delegatee* __zz_cib_obj, ::NonPod1* n) {
  __zz_cib_obj->::A::setNonPod1(*n);
}
static void __zz_cib_decl setNonPod2(__zz_cib_Delegatee* __zz_cib_obj, ::NonPod2* n) {
  __zz_cib_obj->::A::setNonPod2(*n);
}
static void __zz_cib_decl setNonPod3(__zz_cib_Delegatee* __zz_cib_obj, ::NonPod3* n) {
  __zz_cib_obj->::A::setNonPod3(*n);
}
}
}}

namespace __zz_cib_ {
namespace A {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_copy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::setPod),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::setPod_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::setNonPod1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::setNonPod2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::setNonPod3)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 8 };
  return &methodTable;
}
}}
