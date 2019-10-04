#include "example.h"


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

int A::VirtualFunction() const {
  return __zz_cib_::A::__zz_cib_Helper::VirtualFunction_2(__zz_cib_h_);
}

A::~A() {
  __zz_cib_::A::__zz_cib_Helper::__zz_cib_release_proxy(this);
  auto h = __zz_cib_::A::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::A::__zz_cib_Helper::__zz_cib_delete_3(h);
}

B::B(__zz_cib_::__zz_cib_HANDLE* h)
  : ::A(__zz_cib_::B::__zz_cib_Helper::__zz_cib_cast_to___A_4(h))
  , __zz_cib_h_(h)
{}

B::B(B&& rhs)
  : ::A(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

B::B()
  : B(__zz_cib_::B::__zz_cib_Helper::__zz_cib_new_0())
{}

B::B(::B const & __zz_cib_param0)
  : B(__zz_cib_::B::__zz_cib_Helper::__zz_cib_copy_1(__zz_cib_::B::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

int B::VirtualFunction() const {
  return __zz_cib_::B::__zz_cib_Helper::VirtualFunction_2(__zz_cib_h_);
}

B::~B() {
  auto h = __zz_cib_::B::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::B::__zz_cib_Helper::__zz_cib_delete_3(h);
}
namespace __zz_cib_ { namespace A { namespace __zz_cib_Generic {
class A : public ::A {
  __zz_cib_HANDLE* __zz_cib_h_;

  using __zz_cib_TYPE = __zz_cib_HANDLE;
  static __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() {
    static __zz_cib_MethodTableHelper mtableHelper(__zz_cib_Example_GetMethodTable(
      __zz_cib_classid));
    return mtableHelper;
  }
  explicit A(__zz_cib_HANDLE* h) : ::A(h), __zz_cib_h_(h) {}
public:
  static ::A* __zz_cib_from_handle(__zz_cib_HANDLE* h) {
    return new A(h);
  }
  int VirtualFunction() const override {
    using VirtualFunctionProc = int (__zz_cib_decl *) (const __zz_cib_TYPE*);
    return __zz_cib_get_mtable_helper().invoke<VirtualFunctionProc, __zz_cib_methodid::VirtualFunction_2>(
      __zz_cib_h_);
  }
};
}}}
::A* __zz_cib_::A::__zz_cib_Helper::__zz_cib_create_proxy(__zz_cib_HANDLE* h) {
  switch(__zz_cib_get_class_id(&h)) {
  case __zz_cib_::B::__zz_cib_classid:
    return __zz_cib_::B::__zz_cib_Helper::__zz_cib_from_handle(h);
  case __zz_cib_::A::__zz_cib_classid:
    return new ::A(h);
  default:
    return ::__zz_cib_::A::__zz_cib_Generic::A::__zz_cib_from_handle(h);
  }
}
namespace __zz_cib_ { namespace A {
struct __zz_cib_Delegator {
  using __zz_cib_Delegatee = ::A;
  static int __zz_cib_decl VirtualFunction_0(const ::A* __zz_cib_obj) {
    return __zz_cib_obj->VirtualFunction();
  }
  static void __zz_cib_decl __zz_cib_delete_1(::A* __zz_cib_obj) {
    delete __zz_cib_obj;
  }
};
}}

namespace __zz_cib_ { namespace A {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::VirtualFunction_0),
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

