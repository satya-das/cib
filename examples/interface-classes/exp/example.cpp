#include "example.h"


Interface2::Interface2(__zz_cib_::__zz_cib_HANDLE* h)
  : __zz_cib_h_(h)
{
  __zz_cib_::Interface2::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

Interface2::Interface2(Interface2&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_::Interface2::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

Interface2::~Interface2() {
  __zz_cib_::Interface2::__zz_cib_Helper::__zz_cib_release_proxy(this);
  auto h = __zz_cib_::Interface2::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::Interface2::__zz_cib_Helper::__zz_cib_delete_2(h);
}

Interface2::Interface2()
  : Interface2(__zz_cib_::Interface2::__zz_cib_Helper::__zz_cib_new_0(this))
{}

Interface3::Interface3(__zz_cib_::__zz_cib_HANDLE* h)
  : __zz_cib_h_(h)
{
  __zz_cib_::Interface3::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

Interface3::Interface3(Interface3&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_::Interface3::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

Interface3::~Interface3() {
  __zz_cib_::Interface3::__zz_cib_Helper::__zz_cib_release_proxy(this);
  auto h = __zz_cib_::Interface3::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::Interface3::__zz_cib_Helper::__zz_cib_delete_2(h);
}

Interface3::Interface3()
  : Interface3(__zz_cib_::Interface3::__zz_cib_Helper::__zz_cib_new_0(this))
{}

Interface1::Interface1(__zz_cib_::__zz_cib_HANDLE* h)
  : __zz_cib_h_(h)
{
  __zz_cib_::Interface1::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

Interface1::Interface1(Interface1&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_::Interface1::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

Interface1::~Interface1() {
  __zz_cib_::Interface1::__zz_cib_Helper::__zz_cib_release_proxy(this);
  auto h = __zz_cib_::Interface1::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::Interface1::__zz_cib_Helper::__zz_cib_delete_3(h);
}

Interface1::Interface1()
  : Interface1(__zz_cib_::Interface1::__zz_cib_Helper::__zz_cib_new_0(this))
{}

A::A(__zz_cib_::__zz_cib_HANDLE* h)
  : __zz_cib_h_(h)
{}

A::A(A&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

A::A(::A const & __zz_cib_param0)
  : A(__zz_cib_::A::__zz_cib_Helper::__zz_cib_copy_0(__zz_cib_::A::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

A::~A() {
  auto h = __zz_cib_::A::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::A::__zz_cib_Helper::__zz_cib_delete_1(h);
}

A::A()
  : A(__zz_cib_::A::__zz_cib_Helper::__zz_cib_new_2())
{}

int A::SetInterface(::Interface1* pInterface1) const {
  return __zz_cib_::A::__zz_cib_Helper::SetInterface_3(__zz_cib_h_, __zz_cib_::Interface1::__zz_cib_Helper::__zz_cib_handle(pInterface1));
}
namespace __zz_cib_ { namespace Interface2 { namespace __zz_cib_Generic {
class Interface2 : public ::Interface2 {
  __zz_cib_HANDLE* __zz_cib_h_;

  static __zz_cib_::__zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() {
    static __zz_cib_::__zz_cib_MethodTableHelper mtableHelper(__zz_cib_Example_GetMethodTable(
      __zz_cib_classid));
    return mtableHelper;
  }
  Interface2(__zz_cib_HANDLE* h) : ::Interface2(h), __zz_cib_h_(h) {}
public:
  static ::Interface2* __zz_cib_from_handle(__zz_cib_HANDLE* h) {
    return new Interface2(h);
  }
  int f() override {
    using fProc = int (__zz_cib_decl *) (__zz_cib_HANDLE*);
    return __zz_cib_get_mtable_helper().invoke<fProc, __zz_cib_methodid::f_1>(
      __zz_cib_h_);
  }
  ~Interface2() override {
    if (!__zz_cib_h_) return;
    using __zz_cib_deleteProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_deleteProc, __zz_cib_methodid::__zz_cib_delete_2>(
      __zz_cib_h_);
  }
};
}}}
::Interface2* __zz_cib_::Interface2::__zz_cib_Helper::__zz_cib_create_proxy(__zz_cib_HANDLE* h) {
  switch(__zz_cib_get_class_id(&h)) {
  default:
    return ::__zz_cib_::Interface2::__zz_cib_Generic::Interface2::__zz_cib_from_handle(h);
  }
}
namespace __zz_cib_ { namespace Interface2 {
struct __zz_cib_Delegator {
  using __zz_cib_Delegatee = ::Interface2;
  static int __zz_cib_decl f_0(::Interface2* __zz_cib_obj) {
    return __zz_cib_obj->f();
  }
  static void __zz_cib_decl __zz_cib_delete_1(::Interface2* __zz_cib_obj) {
    delete __zz_cib_obj;
  }
};
}}

namespace __zz_cib_ { namespace Interface2 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::f_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete_1)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 2 };
  return &methodTable;
}
}}

namespace __zz_cib_ { namespace Interface2 {
const __zz_cib_MethodTable* __zz_cib_Helper::__zz_cib_get_proxy_method_table() {
  return __zz_cib_GetMethodTable();
}
}}

namespace __zz_cib_ { namespace Interface3 { namespace __zz_cib_Generic {
class Interface3 : public ::Interface3 {
  __zz_cib_HANDLE* __zz_cib_h_;

  static __zz_cib_::__zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() {
    static __zz_cib_::__zz_cib_MethodTableHelper mtableHelper(__zz_cib_Example_GetMethodTable(
      __zz_cib_classid));
    return mtableHelper;
  }
  Interface3(__zz_cib_HANDLE* h) : ::Interface3(h), __zz_cib_h_(h) {}
public:
  static ::Interface3* __zz_cib_from_handle(__zz_cib_HANDLE* h) {
    return new Interface3(h);
  }
  int g() override {
    using gProc = int (__zz_cib_decl *) (__zz_cib_HANDLE*);
    return __zz_cib_get_mtable_helper().invoke<gProc, __zz_cib_methodid::g_1>(
      __zz_cib_h_);
  }
  ~Interface3() override {
    if (!__zz_cib_h_) return;
    using __zz_cib_deleteProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_deleteProc, __zz_cib_methodid::__zz_cib_delete_2>(
      __zz_cib_h_);
  }
};
}}}
::Interface3* __zz_cib_::Interface3::__zz_cib_Helper::__zz_cib_create_proxy(__zz_cib_HANDLE* h) {
  switch(__zz_cib_get_class_id(&h)) {
  default:
    return ::__zz_cib_::Interface3::__zz_cib_Generic::Interface3::__zz_cib_from_handle(h);
  }
}
namespace __zz_cib_ { namespace Interface3 {
struct __zz_cib_Delegator {
  using __zz_cib_Delegatee = ::Interface3;
  static int __zz_cib_decl g_0(::Interface3* __zz_cib_obj) {
    return __zz_cib_obj->g();
  }
  static void __zz_cib_decl __zz_cib_delete_1(::Interface3* __zz_cib_obj) {
    delete __zz_cib_obj;
  }
};
}}

namespace __zz_cib_ { namespace Interface3 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::g_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete_1)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 2 };
  return &methodTable;
}
}}

namespace __zz_cib_ { namespace Interface3 {
const __zz_cib_MethodTable* __zz_cib_Helper::__zz_cib_get_proxy_method_table() {
  return __zz_cib_GetMethodTable();
}
}}

namespace __zz_cib_ { namespace Interface1 {
struct __zz_cib_Delegator {
  using __zz_cib_Delegatee = ::Interface1;
  static __zz_cib_HANDLE* __zz_cib_decl p_0(::Interface1* __zz_cib_obj) {
    return __zz_cib_::Interface2::__zz_cib_Helper::__zz_cib_handle(
      __zz_cib_obj->p());
  }
  static __zz_cib_HANDLE* __zz_cib_decl r_1(::Interface1* __zz_cib_obj) {
    return __zz_cib_::Interface3::__zz_cib_Helper::__zz_cib_handle(
      &__zz_cib_obj->r());
  }
  static void __zz_cib_decl __zz_cib_delete_2(::Interface1* __zz_cib_obj) {
    delete __zz_cib_obj;
  }
};
}}

namespace __zz_cib_ { namespace Interface1 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::p_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::r_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete_2)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 3 };
  return &methodTable;
}
}}

namespace __zz_cib_ { namespace Interface1 {
const __zz_cib_MethodTable* __zz_cib_Helper::__zz_cib_get_proxy_method_table() {
  return __zz_cib_GetMethodTable();
}
}}

