#include "example.h"


Example::A::A(__zz_cib_::__zz_cib_HANDLE* h)
  : __zz_cib_h_(h)
{}

Example::A::A(A&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

Example::A::A()
  : Example::A(__zz_cib_::Example::A::__zz_cib_Helper::__zz_cib_new_0())
{}

Example::A::A(::Example::A const & __zz_cib_param0)
  : Example::A(__zz_cib_::Example::A::__zz_cib_Helper::__zz_cib_copy_1(__zz_cib_::Example::A::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

Example::A::~A() {
  auto h = __zz_cib_::Example::A::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::Example::A::__zz_cib_Helper::__zz_cib_delete_2(h);
}

void Example::A::VirtFunc() {
  __zz_cib_::Example::A::__zz_cib_Helper::VirtFunc_4(__zz_cib_h_);
}

void Example::A::SomeFunc() {
  __zz_cib_::Example::A::__zz_cib_Helper::SomeFunc_3(__zz_cib_h_);
}

Example::B::B(__zz_cib_::__zz_cib_HANDLE* h)
  : ::Example::A(__zz_cib_::Example::B::__zz_cib_Helper::__zz_cib_cast_to___Example__A_4(h))
  , __zz_cib_h_(h)
{}

Example::B::B(B&& rhs)
  : ::Example::A(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

Example::B::B()
  : Example::B(__zz_cib_::Example::B::__zz_cib_Helper::__zz_cib_new_0())
{}

Example::B::B(::Example::B const & __zz_cib_param0)
  : Example::B(__zz_cib_::Example::B::__zz_cib_Helper::__zz_cib_copy_1(__zz_cib_::Example::B::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

Example::B::~B() {
  auto h = __zz_cib_::Example::B::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::Example::B::__zz_cib_Helper::__zz_cib_delete_2(h);
}

void Example::B::VirtFunc() {
  __zz_cib_::Example::B::__zz_cib_Helper::VirtFunc_3(__zz_cib_h_);
}
