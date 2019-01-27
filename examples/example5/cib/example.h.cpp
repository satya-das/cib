#include "example.h"

#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_Example-proxy.h"

namespace __zz_cib_ { namespace Example { namespace __zz_cib_Class1 {
struct __zz_cib_Delegator : public ::Example::Value<::Example::Int>{
  using __zz_cib_ParentClass = ::Example::Value<::Example::Int>;
  using __zz_cib_ParentClass::__zz_cib_ParentClass;
  static ::Example::Value<::Example::Int>* __zz_cib_decl __zz_cib_copy_0(const __zz_cib_Delegator* __zz_cib_obj) {
    return new __zz_cib_Delegator(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_delete_1(__zz_cib_Delegator* __zz_cib_obj) {
    delete __zz_cib_obj;
  }
  static ::Example::Value<::Example::Int>* __zz_cib_decl __zz_cib_new_2(::Example::Int* x) {
    return new __zz_cib_Delegator(*x);
  }
  static ::Example::Int* __zz_cib_decl GetValue_3(const __zz_cib_Delegator* __zz_cib_obj) {
    return new ::Example::Int(__zz_cib_obj->__zz_cib_ParentClass::GetValue());
  }
  static void __zz_cib_decl SetValue_4(__zz_cib_Delegator* __zz_cib_obj, ::Example::Int* x) {
    __zz_cib_obj->__zz_cib_ParentClass::SetValue(*x);
  }
};
}}}

namespace __zz_cib_ { namespace Example { namespace __zz_cib_Class2 {
struct __zz_cib_Delegator : public ::Example::Value<int>{
  using __zz_cib_ParentClass = ::Example::Value<int>;
  using __zz_cib_ParentClass::__zz_cib_ParentClass;
  static ::Example::Value<int>* __zz_cib_decl __zz_cib_copy_0(const __zz_cib_Delegator* __zz_cib_obj) {
    return new __zz_cib_Delegator(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_delete_1(__zz_cib_Delegator* __zz_cib_obj) {
    delete __zz_cib_obj;
  }
  static ::Example::Value<int>* __zz_cib_decl __zz_cib_new_2(int x) {
    return new __zz_cib_Delegator(x);
  }
  static int __zz_cib_decl GetValue_3(const __zz_cib_Delegator* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_ParentClass::GetValue();
  }
  static void __zz_cib_decl SetValue_4(__zz_cib_Delegator* __zz_cib_obj, int x) {
    __zz_cib_obj->__zz_cib_ParentClass::SetValue(x);
  }
};
}}}

namespace __zz_cib_ { namespace Example { namespace Int {
struct __zz_cib_Delegator : public ::Example::Int{
  using __zz_cib_ParentClass = ::Example::Int;
  using __zz_cib_ParentClass::__zz_cib_ParentClass;
  static ::Example::Int* __zz_cib_decl __zz_cib_copy_0(const __zz_cib_Delegator* __zz_cib_obj) {
    return new __zz_cib_Delegator(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_delete_1(__zz_cib_Delegator* __zz_cib_obj) {
    delete __zz_cib_obj;
  }
  static ::Example::Int* __zz_cib_decl __zz_cib_new_2(int x) {
    return new __zz_cib_Delegator(x);
  }
  static int __zz_cib_decl __zz_cib_Operator_3(const __zz_cib_Delegator* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_ParentClass::operator int();
  }
};
}}}

namespace __zz_cib_ { namespace Example { namespace A {
struct __zz_cib_Delegator : public ::Example::A{
  using __zz_cib_ParentClass = ::Example::A;
  using __zz_cib_ParentClass::__zz_cib_ParentClass;
  static ::Example::A* __zz_cib_decl __zz_cib_new_0() {
    return new __zz_cib_Delegator();
  }
  static ::Example::A* __zz_cib_decl __zz_cib_copy_1(const __zz_cib_Delegator* __zz_cib_obj) {
    return new __zz_cib_Delegator(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_delete_2(__zz_cib_Delegator* __zz_cib_obj) {
    delete __zz_cib_obj;
  }
  static void __zz_cib_decl Set_3(__zz_cib_Delegator* __zz_cib_obj, ::Example::Value<int> const * x) {
    __zz_cib_obj->__zz_cib_ParentClass::Set(*x);
  }
  static ::Example::Value<int>* __zz_cib_decl Get_4(const __zz_cib_Delegator* __zz_cib_obj) {
    return new ::Example::Value<int>(__zz_cib_obj->__zz_cib_ParentClass::Get());
  }
  static void __zz_cib_decl SetInt_5(__zz_cib_Delegator* __zz_cib_obj, ::Example::Value<::Example::Int> const * y) {
    __zz_cib_obj->__zz_cib_ParentClass::SetInt(*y);
  }
  static ::Example::Value<::Example::Int>* __zz_cib_decl GetInt_6(const __zz_cib_Delegator* __zz_cib_obj) {
    return new ::Example::Value<::Example::Int>(__zz_cib_obj->__zz_cib_ParentClass::GetInt());
  }
};
}}}

namespace __zz_cib_ { namespace Example { namespace __zz_cib_Class1 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::GetValue_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::SetValue_4)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 5 };
  return &methodTable;
}
}}}
namespace __zz_cib_ { namespace Example { namespace __zz_cib_Class2 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::GetValue_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::SetValue_4)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 5 };
  return &methodTable;
}
}}}
namespace __zz_cib_ { namespace Example { namespace Int {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_Operator_3)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 4 };
  return &methodTable;
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
