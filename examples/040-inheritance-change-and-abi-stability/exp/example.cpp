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
  : A(__zz_cib_::A::__zz_cib_Helper::__zz_cib_copy_0(__zz_cib_::A::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

A::A()
  : A(__zz_cib_::A::__zz_cib_Helper::__zz_cib_new_1())
{}

int A::AnotherVirtFunc() {
  return __zz_cib_::A::__zz_cib_Helper::AnotherVirtFunc_4(__zz_cib_h_);
}

int A::VirtFunc() {
  return __zz_cib_::A::__zz_cib_Helper::VirtFunc_2(__zz_cib_h_);
}

int A::SomeFunc() {
  return __zz_cib_::A::__zz_cib_Helper::SomeFunc_5(__zz_cib_h_);
}

A::~A() {
  auto h = __zz_cib_::A::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::A::__zz_cib_Helper::__zz_cib_delete_3(h);
}

I1::I1(__zz_cib_::__zz_cib_HANDLE* h)
  : __zz_cib_h_(h)
{
  __zz_cib_::I1::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

I1::I1(I1&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_::I1::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

I1::I1()
  : I1(__zz_cib_::I1::__zz_cib_Helper::__zz_cib_new_0())
{}

I1::I1(::I1 const & __zz_cib_param0)
  : I1(__zz_cib_::I1::__zz_cib_Helper::__zz_cib_copy_1(__zz_cib_::I1::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

int I1::F() {
  return __zz_cib_::I1::__zz_cib_Helper::F_2(__zz_cib_h_);
}

I1::~I1() {
  auto h = __zz_cib_::I1::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::I1::__zz_cib_Helper::__zz_cib_delete_3(h);
}

I2::I2(__zz_cib_::__zz_cib_HANDLE* h)
  : __zz_cib_h_(h)
{
  __zz_cib_::I2::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

I2::I2(I2&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_::I2::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

I2::I2()
  : I2(__zz_cib_::I2::__zz_cib_Helper::__zz_cib_new_0())
{}

I2::I2(::I2 const & __zz_cib_param0)
  : I2(__zz_cib_::I2::__zz_cib_Helper::__zz_cib_copy_1(__zz_cib_::I2::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

int I2::G() {
  return __zz_cib_::I2::__zz_cib_Helper::G_2(__zz_cib_h_);
}

I2::~I2() {
  auto h = __zz_cib_::I2::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::I2::__zz_cib_Helper::__zz_cib_delete_3(h);
}

B::B(__zz_cib_::__zz_cib_HANDLE* h)
  : ::I1(__zz_cib_::B::__zz_cib_Helper::__zz_cib_cast_to___I1_10(h))
  , ::A(__zz_cib_::B::__zz_cib_Helper::__zz_cib_cast_to___A_5(h))
  , ::I2(__zz_cib_::B::__zz_cib_Helper::__zz_cib_cast_to___I2_11(h))
  , __zz_cib_h_(h)
{
  __zz_cib_::B::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

B::B(B&& rhs)
  : ::I1(std::move(rhs))
  , ::A(std::move(rhs))
  , ::I2(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_::B::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

B::B(::B const & __zz_cib_param0)
  : B(__zz_cib_::B::__zz_cib_Helper::__zz_cib_copy_0(__zz_cib_::B::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

B::~B() {
  auto h = __zz_cib_::B::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::B::__zz_cib_Helper::__zz_cib_delete_1(h);
}

B::B()
  : B(__zz_cib_::B::__zz_cib_Helper::__zz_cib_new_2())
{}

int B::VirtFunc() {
  return __zz_cib_::B::__zz_cib_Helper::VirtFunc_3(__zz_cib_h_);
}

::B* B::Create() {
  return __zz_cib_::B::__zz_cib_Helper::__zz_cib_from_handle(
    __zz_cib_::B::__zz_cib_Helper::Create_4()
  );
}
namespace __zz_cib_ { namespace B { namespace __zz_cib_Generic {
class B : public ::B {
  __zz_cib_HANDLE* __zz_cib_h_;

  using __zz_cib_TYPE = __zz_cib_HANDLE;
  static __zz_cib_::__zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() {
    static __zz_cib_::__zz_cib_MethodTableHelper mtableHelper(__zz_cib_Example_GetMethodTable(
      __zz_cib_classid));
    return mtableHelper;
  }
  explicit B(__zz_cib_HANDLE* h) : ::B(h), __zz_cib_h_(h) {}
public:
  static ::B* __zz_cib_from_handle(__zz_cib_HANDLE* h) {
    return new B(h);
  }
  int F() override {
    using FProc = int (__zz_cib_decl *) (__zz_cib_TYPE*);
    return __zz_cib_get_mtable_helper().invoke<FProc, __zz_cib_methodid::F_7>(
      __zz_cib_h_);
  }
  int AnotherVirtFunc() override {
    using AnotherVirtFuncProc = int (__zz_cib_decl *) (__zz_cib_TYPE*);
    return __zz_cib_get_mtable_helper().invoke<AnotherVirtFuncProc, __zz_cib_methodid::AnotherVirtFunc_8>(
      __zz_cib_h_);
  }
  int VirtFunc() override {
    using VirtFuncProc = int (__zz_cib_decl *) (__zz_cib_TYPE*);
    return __zz_cib_get_mtable_helper().invoke<VirtFuncProc, __zz_cib_methodid::VirtFunc_3>(
      __zz_cib_h_);
  }
  int G() override {
    using GProc = int (__zz_cib_decl *) (__zz_cib_TYPE*);
    return __zz_cib_get_mtable_helper().invoke<GProc, __zz_cib_methodid::G_9>(
      __zz_cib_h_);
  }
};
}}}
::B* __zz_cib_::B::__zz_cib_Helper::__zz_cib_create_proxy(__zz_cib_HANDLE* h) {
  switch(__zz_cib_get_class_id(&h)) {
  case __zz_cib_::B::__zz_cib_classid:
    return new ::B(h);
  default:
    return ::__zz_cib_::B::__zz_cib_Generic::B::__zz_cib_from_handle(h);
  }
}
