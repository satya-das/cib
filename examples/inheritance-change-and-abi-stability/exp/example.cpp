#include "example.h"


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
{}

I1::I1(I1&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
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
{}

I2::I2(I2&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
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
  : ::I1(__zz_cib_::B::__zz_cib_Helper::__zz_cib_cast_to___I1_5(h))
  , ::A(__zz_cib_::B::__zz_cib_Helper::__zz_cib_cast_to___A_4(h))
  , ::I2(__zz_cib_::B::__zz_cib_Helper::__zz_cib_cast_to___I2_6(h))
  , __zz_cib_h_(h)
{}

B::B(B&& rhs)
  : ::I1(std::move(rhs))
  , ::A(std::move(rhs))
  , ::I2(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
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
