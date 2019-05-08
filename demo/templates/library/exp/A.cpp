#include "A.h"
#include "value.h"


A::A(__zz_cib_::__zz_cib_HANDLE* h)
  : __zz_cib_h_(h)
{
  __zz_cib_::A::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

A::A(A&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_::A::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

A::A()
  : A(__zz_cib_::A::__zz_cib_Helper::__zz_cib_new_0(this))
{}

A::A(::A const & __zz_cib_param0)
  : A(__zz_cib_::A::__zz_cib_Helper::__zz_cib_copy_1(this, __zz_cib_::A::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

A::~A() {
  __zz_cib_::A::__zz_cib_Helper::__zz_cib_release_proxy(this);
  auto h = __zz_cib_::A::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::A::__zz_cib_Helper::__zz_cib_delete_2(h);
}

int A::setValue(::Value<int> const & intVal) const {
  return __zz_cib_::A::__zz_cib_Helper::setValue_3(__zz_cib_h_, __zz_cib_::__zz_cib_Class4::__zz_cib_Helper::__zz_cib_handle(intVal));
}

float A::setValue(::Value<float> const & floatVal) const {
  return __zz_cib_::A::__zz_cib_Helper::setValue_4(__zz_cib_h_, __zz_cib_::__zz_cib_Class3::__zz_cib_Helper::__zz_cib_handle(floatVal));
}

::Value<int> A::getIntValue() const {
  return __zz_cib_::__zz_cib_Class4::__zz_cib_Helper::__zz_cib_obj_from_handle(
__zz_cib_::A::__zz_cib_Helper::getIntValue_5(__zz_cib_h_)
);
}

::Value<float> A::getFloatValue() const {
  return __zz_cib_::__zz_cib_Class3::__zz_cib_Helper::__zz_cib_obj_from_handle(
__zz_cib_::A::__zz_cib_Helper::getFloatValue_6(__zz_cib_h_)
);
}
namespace __zz_cib_ { namespace A {
struct __zz_cib_Delegator {
  using __zz_cib_Delegatee = ::A;
  static int __zz_cib_decl setValue_0(const ::A* __zz_cib_obj, __zz_cib_HANDLE const * intVal) {
    return __zz_cib_obj->setValue(__zz_cib_::__zz_cib_Class4::__zz_cib_Helper::__zz_cib_from_handle(*intVal));
  }
  static float __zz_cib_decl setValue_1(const ::A* __zz_cib_obj, __zz_cib_HANDLE const * floatVal) {
    return __zz_cib_obj->setValue(__zz_cib_::__zz_cib_Class3::__zz_cib_Helper::__zz_cib_from_handle(*floatVal));
  }
  static __zz_cib_HANDLE* __zz_cib_decl getIntValue_2(const ::A* __zz_cib_obj) {
    return __zz_cib_::__zz_cib_Class4::__zz_cib_Helper::__zz_cib_handle(
      new ::Value<int>(__zz_cib_obj->getIntValue()));
  }
  static __zz_cib_HANDLE* __zz_cib_decl getFloatValue_3(const ::A* __zz_cib_obj) {
    return __zz_cib_::__zz_cib_Class3::__zz_cib_Helper::__zz_cib_handle(
      new ::Value<float>(__zz_cib_obj->getFloatValue()));
  }
  static void __zz_cib_decl __zz_cib_delete_4(::A* __zz_cib_obj) {
    delete __zz_cib_obj;
  }
};
}}

namespace __zz_cib_ { namespace A {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::setValue_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::setValue_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::getIntValue_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::getFloatValue_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete_4)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 5 };
  return &methodTable;
}
}}

namespace __zz_cib_ { namespace A {
const __zz_cib_MethodTable* __zz_cib_Helper::__zz_cib_get_proxy_method_table() {
  return __zz_cib_GetMethodTable();
}
}}

