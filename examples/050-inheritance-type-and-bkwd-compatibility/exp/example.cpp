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

A::A(::A const & __zz_cib_param0)
  : A(__zz_cib_::A::__zz_cib_Helper::__zz_cib_copy(this, __zz_cib_::A::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

A::A()
  : A(__zz_cib_::A::__zz_cib_Helper::__zz_cib_new(this))
{}

int A::AnotherVirtFunc() {
  return __zz_cib_::A::__zz_cib_Helper::AnotherVirtFunc(__zz_cib_h_);
}

int A::VirtFunc() {
  return __zz_cib_::A::__zz_cib_Helper::VirtFunc(__zz_cib_h_);
}

int A::SomeFunc() {
  return __zz_cib_::A::__zz_cib_Helper::SomeFunc(__zz_cib_h_);
}

A::~A() {
  __zz_cib_::A::__zz_cib_Helper::__zz_cib_release_proxy(this);
  auto h = __zz_cib_::A::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::A::__zz_cib_Helper::__zz_cib_delete(h);
}


B::B(__zz_cib_::__zz_cib_HANDLE* h)
  : ::A(__zz_cib_::B::__zz_cib_Helper::__zz_cib_cast_to_A(h))
  , __zz_cib_h_(h)
{
  __zz_cib_::B::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

B::B(B&& rhs)
  : ::A(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_::B::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

B::B(::B const & __zz_cib_param0)
  : B(__zz_cib_::B::__zz_cib_Helper::__zz_cib_copy(this, __zz_cib_::B::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

B::~B() {
  __zz_cib_::B::__zz_cib_Helper::__zz_cib_release_proxy(this);
  auto h = __zz_cib_::B::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::B::__zz_cib_Helper::__zz_cib_delete(h);
}

B::B()
  : B(__zz_cib_::B::__zz_cib_Helper::__zz_cib_new(this))
{}

int B::VirtFunc() {
  return __zz_cib_::B::__zz_cib_Helper::VirtFunc(__zz_cib_h_);
}

::B* B::Create() {
  return __zz_cib_::B::__zz_cib_Helper::__zz_cib_from_handle(
    __zz_cib_::B::__zz_cib_Helper::Create()
  );
}

namespace __zz_cib_ {
namespace A {
struct __zz_cib_Delegator {
  using __zz_cib_Delegatee = ::A;
  static int __zz_cib_decl VirtFunc(::A* __zz_cib_obj) {
    return __zz_cib_obj->VirtFunc();
  }
  static int __zz_cib_decl AnotherVirtFunc(::A* __zz_cib_obj) {
    return __zz_cib_obj->AnotherVirtFunc();
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
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::VirtFunc),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::AnotherVirtFunc)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 3 };
  return &methodTable;
}
}}

namespace __zz_cib_ {
namespace A {
const __zz_cib_MethodTable* __zz_cib_Helper::__zz_cib_get_proxy_method_table() {
  return __zz_cib_GetMethodTable();
}
}}

namespace __zz_cib_ {
namespace B {
namespace __zz_cib_Generic {
class __zz_cib : public ::B {
  __zz_cib_HANDLE* __zz_cib_h_;

  using __zz_cib_methodid = __zz_cib_::B::__zz_cib_methodid;
  using __zz_cib_TYPE = __zz_cib_HANDLE;
  static __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() {
    static __zz_cib_MethodTableHelper mtableHelper(__zz_cib_Example_GetMethodTable(
      __zz_cib_classid));
    return mtableHelper;
  }
  explicit __zz_cib(__zz_cib_HANDLE* h) : ::B(h), __zz_cib_h_(h) {}
public:
  static ::B* __zz_cib_from_handle(__zz_cib_HANDLE* h) {
    return new __zz_cib(h);
  }
  int VirtFunc() override {
    using __zz_cib_proc = int (__zz_cib_decl *) (__zz_cib_TYPE*);
    return __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::VirtFunc>(
      __zz_cib_h_);
  }
  int AnotherVirtFunc() override {
    using __zz_cib_proc = int (__zz_cib_decl *) (__zz_cib_TYPE*);
    return __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::AnotherVirtFunc>(
      __zz_cib_h_);
  }
};
}}}
::B* __zz_cib_::B::__zz_cib_Helper::__zz_cib_create_proxy(__zz_cib_HANDLE* h) {
  switch(__zz_cib_get_class_id(&h)) {
  case __zz_cib_::B::__zz_cib_classid:
    return new ::B(h);
  default: break;
  }
  return ::__zz_cib_::B::__zz_cib_Generic::__zz_cib::__zz_cib_from_handle(h);
}
namespace __zz_cib_ {
namespace B {
struct __zz_cib_Delegator {
  using __zz_cib_Delegatee = ::B;
  static int __zz_cib_decl VirtFunc(::B* __zz_cib_obj) {
    return __zz_cib_obj->VirtFunc();
  }
  static int __zz_cib_decl AnotherVirtFunc(::B* __zz_cib_obj) {
    return __zz_cib_obj->AnotherVirtFunc();
  }
  static void __zz_cib_decl __zz_cib_delete(::B* __zz_cib_obj) {
    __zz_cib_Helper::__zz_cib_release_handle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
}}

namespace __zz_cib_ {
namespace B {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::VirtFunc),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::AnotherVirtFunc)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 3 };
  return &methodTable;
}
}}

namespace __zz_cib_ {
namespace B {
const __zz_cib_MethodTable* __zz_cib_Helper::__zz_cib_get_proxy_method_table() {
  return __zz_cib_GetMethodTable();
}
}}

