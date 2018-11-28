#include "example.h"

#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_Example-proxy.h"

namespace __zz_cib_ { namespace Example { namespace __zz_cib_Class1 {
static ::Example::Number<int>* __zz_cib_decl __zz_cib_copy_0(const ::Example::Number<int>* __zz_cib_param0) {
  return new ::Example::Number<int>(*__zz_cib_param0);
}
static void __zz_cib_decl __zz_cib_delete_1(::Example::Number<int>* __zz_cib_obj) {
  delete __zz_cib_obj;
}
static ::Example::Number<int>* __zz_cib_decl __zz_cib_new_2(int x) {
  return new ::Example::Number<int>(x);
}
static int __zz_cib_decl GetValue_3(const ::Example::Number<int>* __zz_cib_obj) {
  return __zz_cib_obj->::Example::Number<int>::GetValue();
}
static void __zz_cib_decl SetValue_4(::Example::Number<int>* __zz_cib_obj, int x) {
  __zz_cib_obj->::Example::Number<int>::SetValue(x);
}
static void __zz_cib_decl Add_5(::Example::Number<int>* __zz_cib_obj, const ::Example::Number<int>* num) {
  __zz_cib_obj->::Example::Number<int>::Add(*num);
}
}}}

namespace __zz_cib_ { namespace Example { namespace A {
static ::Example::A* __zz_cib_decl __zz_cib_copy_0(const ::Example::A* __zz_cib_param0) {
  return new ::Example::A(*__zz_cib_param0);
}
static void __zz_cib_decl __zz_cib_delete_1(::Example::A* __zz_cib_obj) {
  delete __zz_cib_obj;
}
static ::Example::A* __zz_cib_decl __zz_cib_new_2() {
  return new ::Example::A();
}
static void __zz_cib_decl Set_3(::Example::A* __zz_cib_obj, const ::Example::Number<int>* x) {
  __zz_cib_obj->::Example::A::Set(*x);
}
static const ::Example::Number<int>* __zz_cib_decl Get_4(const ::Example::A* __zz_cib_obj) {
  return new ::Example::Number<int>(__zz_cib_obj->::Example::A::Get());
}
}}}

namespace __zz_cib_ { namespace Example { namespace __zz_cib_Class1 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_new_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&GetValue_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&SetValue_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&Add_5)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 6 };
  return &methodTable;
}
}}}
namespace __zz_cib_ { namespace Example { namespace A {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_new_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&Set_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&Get_4)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 5 };
  return &methodTable;
}
}}}
