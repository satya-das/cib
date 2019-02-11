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

int A::VirtFunc() {
  return __zz_cib_::A::__zz_cib_Helper::VirtFunc_2(__zz_cib_h_);
}

int A::SomeFunc() {
  return __zz_cib_::A::__zz_cib_Helper::SomeFunc_3(__zz_cib_h_);
}

A::~A() {
  auto h = __zz_cib_::A::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::A::__zz_cib_Helper::__zz_cib_delete_4(h);
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
