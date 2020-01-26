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
  : A(__zz_cib_::A::__zz_cib_Helper::__zz_cib_new(this))
{}

A::A(::A const & __zz_cib_param0)
  : A(__zz_cib_::A::__zz_cib_Helper::__zz_cib_copy(this, __zz_cib_::A::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

A::~A() {
  __zz_cib_::A::__zz_cib_Helper::__zz_cib_release_proxy(this);
  auto h = __zz_cib_::A::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::A::__zz_cib_Helper::__zz_cib_delete(h);
}

int A::setValue(::Value<int> const & intVal) const {
  return __zz_cib_::A::__zz_cib_Helper::setValue(__zz_cib_h_, __zz_cib_::__zz_cib_Class259::__zz_cib_Helper::__zz_cib_handle(intVal));
}

float A::setValue(::Value<float> const & floatVal) const {
  return __zz_cib_::A::__zz_cib_Helper::setValue_4(__zz_cib_h_, __zz_cib_::__zz_cib_Class258::__zz_cib_Helper::__zz_cib_handle(floatVal));
}

::Value<int> A::getIntValue() const {
  return __zz_cib_::__zz_cib_Class259::__zz_cib_Helper::__zz_cib_obj_from_handle(
__zz_cib_::A::__zz_cib_Helper::getIntValue(__zz_cib_h_)
);
}

::Value<float> A::getFloatValue() const {
  return __zz_cib_::__zz_cib_Class258::__zz_cib_Helper::__zz_cib_obj_from_handle(
__zz_cib_::A::__zz_cib_Helper::getFloatValue(__zz_cib_h_)
);
}

namespace __zz_cib_ {
namespace A {
struct __zz_cib_Delegator {
  using __zz_cib_Delegatee = ::A;
  static __zz_cib_HANDLE* __zz_cib_decl getIntValue(const ::A* __zz_cib_obj) {
    return __zz_cib_::__zz_cib_Class259::__zz_cib_Helper::__zz_cib_handle(
      new ::Value<int>(__zz_cib_obj->getIntValue()));
  }
  static __zz_cib_HANDLE* __zz_cib_decl getFloatValue(const ::A* __zz_cib_obj) {
    return __zz_cib_::__zz_cib_Class258::__zz_cib_Helper::__zz_cib_handle(
      new ::Value<float>(__zz_cib_obj->getFloatValue()));
  }
  static int __zz_cib_decl setValue(const ::A* __zz_cib_obj, __zz_cib_HANDLE const * intVal) {
    return __zz_cib_obj->setValue(__zz_cib_::__zz_cib_Class259::__zz_cib_Helper::__zz_cib_from_handle(*intVal));
  }
  static float __zz_cib_decl setValue_1(const ::A* __zz_cib_obj, __zz_cib_HANDLE const * floatVal) {
    return __zz_cib_obj->setValue(__zz_cib_::__zz_cib_Class258::__zz_cib_Helper::__zz_cib_from_handle(*floatVal));
  }
  static void __zz_cib_decl __zz_cib_delete(::A* __zz_cib_obj) {
    __zz_cib_Helper::__zz_cib_release_handle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
}}

namespace __zz_cib_ {
namespace A {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::setValue),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::setValue_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::getIntValue),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::getFloatValue),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 5 };
  return &methodTable;
}
}}

namespace __zz_cib_ {
namespace A {
const __zz_cib_MethodTable* __zz_cib_Helper::__zz_cib_get_proxy_method_table() {
  return __zz_cib_GetMethodTable();
}
}}

