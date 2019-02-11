#include "example.h"
#include "value.h"

#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_Example-delegate-helper.h"
#include "__zz_cib_Example-proxy.h"

namespace __zz_cib_ { namespace Example { namespace A {
namespace __zz_cib_Delegator {
using __zz_cib_Delegatee = ::Example::A;
static ::Example::A* __zz_cib_decl __zz_cib_new_0() {
  return new __zz_cib_Delegatee();
}
static ::Example::A* __zz_cib_decl __zz_cib_copy_1(const __zz_cib_Delegatee* __zz_cib_obj) {
  return new __zz_cib_Delegatee(*__zz_cib_obj);
}
static void __zz_cib_decl __zz_cib_delete_2(__zz_cib_Delegatee* __zz_cib_obj) {
  delete __zz_cib_obj;
}
static void __zz_cib_decl Set_3(__zz_cib_Delegatee* __zz_cib_obj, ::Example::Value<int> const * x) {
  __zz_cib_obj->__zz_cib_Delegatee::Set(*x);
}
static ::Example::Value<int>* __zz_cib_decl Get_4(const __zz_cib_Delegatee* __zz_cib_obj) {
  return new ::Example::Value<int>(__zz_cib_obj->__zz_cib_Delegatee::Get());
}
static void __zz_cib_decl SetInt_5(__zz_cib_Delegatee* __zz_cib_obj, ::Example::Value<::Example::Int> const * y) {
  __zz_cib_obj->__zz_cib_Delegatee::SetInt(*y);
}
static ::Example::Value<::Example::Int>* __zz_cib_decl GetInt_6(const __zz_cib_Delegatee* __zz_cib_obj) {
  return new ::Example::Value<::Example::Int>(__zz_cib_obj->__zz_cib_Delegatee::GetInt());
}
}
}}}

namespace __zz_cib_ { namespace Example { namespace A {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_copy_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::Set_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::Get_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::SetInt_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::GetInt_6)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 7 };
  return &methodTable;
}
}}}
