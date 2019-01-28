#include "example.h"

#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_Example-proxy.h"

namespace __zz_cib_ { namespace A {
struct __zz_cib_Delegator : public ::A {
  using __zz_cib_ParentClass = ::A;
  using __zz_cib_ParentClass::__zz_cib_ParentClass;
  using __zz_cib_Delegatee = __zz_cib_Delegator;
  static ::A* __zz_cib_decl __zz_cib_copy_0(const __zz_cib_Delegator* __zz_cib_obj) {
    return new __zz_cib_Delegator(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
    delete __zz_cib_obj;
  }
  static ::A* __zz_cib_decl __zz_cib_new_2(int i) {
    return new __zz_cib_Delegator(i);
  }
};
}}

namespace __zz_cib_ { namespace B {
struct __zz_cib_Delegator : public ::B {
  using __zz_cib_ParentClass = ::B;
  using __zz_cib_ParentClass::__zz_cib_ParentClass;
  using __zz_cib_Delegatee = __zz_cib_Delegator;
  static ::B* __zz_cib_decl __zz_cib_new_0() {
    return new __zz_cib_Delegator();
  }
  static ::B* __zz_cib_decl __zz_cib_copy_1(const __zz_cib_Delegator* __zz_cib_obj) {
    return new __zz_cib_Delegator(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_delete_2(__zz_cib_Delegatee* __zz_cib_obj) {
    delete __zz_cib_obj;
  }
  static void __zz_cib_decl SetA_3(__zz_cib_Delegatee* __zz_cib_obj, ::A* pA) {
    __zz_cib_obj->SetA(pA);
  }
  static ::A* __zz_cib_decl GetA_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_obj->GetA();
  }
};
}}

namespace __zz_cib_ { namespace A {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new_2)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 3 };
  return &methodTable;
}
}}
namespace __zz_cib_ { namespace B {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_copy_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::SetA_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::GetA_4)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 5 };
  return &methodTable;
}
}}
