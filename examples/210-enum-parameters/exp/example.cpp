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
  : A(__zz_cib_::A::__zz_cib_Helper::__zz_cib_copy(__zz_cib_::A::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

A::~A() {
  auto h = __zz_cib_::A::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::A::__zz_cib_Helper::__zz_cib_delete(h);
}

A::A()
  : A(__zz_cib_::A::__zz_cib_Helper::__zz_cib_new())
{}

int A::fE(::E e) const {
  return __zz_cib_::A::__zz_cib_Helper::fE(__zz_cib_h_, e);
}

int A::fE(::EC e) const {
  return __zz_cib_::A::__zz_cib_Helper::fE_4(__zz_cib_h_, e);
}

int A::fE(::E8 e) const {
  return __zz_cib_::A::__zz_cib_Helper::fE_5(__zz_cib_h_, e);
}

int A::fE(::EC16 e) const {
  return __zz_cib_::A::__zz_cib_Helper::fE_6(__zz_cib_h_, e);
}

