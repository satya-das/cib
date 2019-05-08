#include "A.h"


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

int A::F() {
  return __zz_cib_::A::__zz_cib_Helper::F_3(__zz_cib_h_);
}

int A::F(int __zz_cib_param0) {
  return __zz_cib_::A::__zz_cib_Helper::F_4(__zz_cib_h_, __zz_cib_param0);
}

int A::V() {
  return __zz_cib_::A::__zz_cib_Helper::V_5(__zz_cib_h_);
}
namespace __zz_cib_ { namespace A {
struct __zz_cib_Delegator {
  using __zz_cib_Delegatee = ::A;
  static int __zz_cib_decl V_0(::A* __zz_cib_obj) {
    return __zz_cib_obj->V();
  }
  static void __zz_cib_decl __zz_cib_delete_1(::A* __zz_cib_obj) {
    delete __zz_cib_obj;
  }
};
}}

namespace __zz_cib_ { namespace A {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::V_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete_1)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 2 };
  return &methodTable;
}
}}

namespace __zz_cib_ { namespace A {
const __zz_cib_MethodTable* __zz_cib_Helper::__zz_cib_get_proxy_method_table() {
  return __zz_cib_GetMethodTable();
}
}}

