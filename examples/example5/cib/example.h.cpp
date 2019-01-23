#include "example.h"

#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_Example-proxy.h"

namespace __zz_cib_ { namespace Example { namespace __zz_cib_Class1 {
static ::Example::Value<::Example::Int>* __zz_cib_decl __zz_cib_copy_0(::Example::Value<::Example::Int> const * __zz_cib_param0) {
  return new ::Example::Value<::Example::Int>(*__zz_cib_param0);
}
static void __zz_cib_decl __zz_cib_delete_1(::Example::Value<::Example::Int>* __zz_cib_obj) {
  delete __zz_cib_obj;
}
static ::Example::Value<::Example::Int>* __zz_cib_decl __zz_cib_new_2(::Example::Int* x) {
  return new ::Example::Value<::Example::Int>(*x);
}
static ::Example::Int* __zz_cib_decl GetValue_3(const ::Example::Value<::Example::Int>* __zz_cib_obj) {
  return new ::Example::Int(__zz_cib_obj->::Example::Value<::Example::Int>::GetValue());
}
static void __zz_cib_decl SetValue_4(::Example::Value<::Example::Int>* __zz_cib_obj, ::Example::Int* x) {
  __zz_cib_obj->::Example::Value<::Example::Int>::SetValue(*x);
}
}}}

namespace __zz_cib_ { namespace Example { namespace __zz_cib_Class2 {
static ::Example::Value<int>* __zz_cib_decl __zz_cib_copy_0(::Example::Value<int> const * __zz_cib_param0) {
  return new ::Example::Value<int>(*__zz_cib_param0);
}
static void __zz_cib_decl __zz_cib_delete_1(::Example::Value<int>* __zz_cib_obj) {
  delete __zz_cib_obj;
}
static ::Example::Value<int>* __zz_cib_decl __zz_cib_new_2(int x) {
  return new ::Example::Value<int>(x);
}
static int __zz_cib_decl GetValue_3(const ::Example::Value<int>* __zz_cib_obj) {
  return __zz_cib_obj->::Example::Value<int>::GetValue();
}
static void __zz_cib_decl SetValue_4(::Example::Value<int>* __zz_cib_obj, int x) {
  __zz_cib_obj->::Example::Value<int>::SetValue(x);
}
}}}

namespace __zz_cib_ { namespace Example { namespace Int {
static ::Example::Int* __zz_cib_decl __zz_cib_copy_0(::Example::Int const * __zz_cib_param0) {
  return new ::Example::Int(*__zz_cib_param0);
}
static void __zz_cib_decl __zz_cib_delete_1(::Example::Int* __zz_cib_obj) {
  delete __zz_cib_obj;
}
static ::Example::Int* __zz_cib_decl __zz_cib_new_2(int x) {
  return new ::Example::Int(x);
}
static int __zz_cib_decl __zz_cib_Operator_3(const ::Example::Int* __zz_cib_obj) {
  return __zz_cib_obj->::Example::Int::operator int();
}
}}}

namespace __zz_cib_ { namespace Example { namespace A {
static ::Example::A* __zz_cib_decl __zz_cib_new_0() {
  return new ::Example::A();
}
static ::Example::A* __zz_cib_decl __zz_cib_copy_1(::Example::A const * __zz_cib_param0) {
  return new ::Example::A(*__zz_cib_param0);
}
static void __zz_cib_decl __zz_cib_delete_2(::Example::A* __zz_cib_obj) {
  delete __zz_cib_obj;
}
static void __zz_cib_decl Set_3(::Example::A* __zz_cib_obj, ::Example::Value<int> const * x) {
  __zz_cib_obj->::Example::A::Set(*x);
}
static ::Example::Value<int>* __zz_cib_decl Get_4(const ::Example::A* __zz_cib_obj) {
  return new ::Example::Value<int>(__zz_cib_obj->::Example::A::Get());
}
static void __zz_cib_decl SetInt_5(::Example::A* __zz_cib_obj, ::Example::Value<::Example::Int> const * y) {
  __zz_cib_obj->::Example::A::SetInt(*y);
}
static ::Example::Value<::Example::Int>* __zz_cib_decl GetInt_6(const ::Example::A* __zz_cib_obj) {
  return new ::Example::Value<::Example::Int>(__zz_cib_obj->::Example::A::GetInt());
}
}}}

namespace __zz_cib_ { namespace Example { namespace __zz_cib_Class1 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_new_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&GetValue_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&SetValue_4)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 5 };
  return &methodTable;
}
}}}
namespace __zz_cib_ { namespace Example { namespace __zz_cib_Class2 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_new_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&GetValue_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&SetValue_4)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 5 };
  return &methodTable;
}
}}}
namespace __zz_cib_ { namespace Example { namespace Int {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_new_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Operator_3)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 4 };
  return &methodTable;
}
}}}
namespace __zz_cib_ { namespace Example { namespace A {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_new_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_copy_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_delete_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&Set_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&Get_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&SetInt_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&GetInt_6)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 7 };
  return &methodTable;
}
}}}
