#include "example.h"


Example::A::A(__zz_cib_::__zz_cib_HANDLE* h)
  : __zz_cib_h_(h)
{
  __zz_cib_::Example::A::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

Example::A::A(A&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_::Example::A::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

Example::A::A(::Example::A const & __zz_cib_param0)
  : Example::A(__zz_cib_::Example::A::__zz_cib_Helper::__zz_cib_copy(__zz_cib_::Example::A::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

Example::A::~A() {
  auto h = __zz_cib_::Example::A::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::Example::A::__zz_cib_Helper::__zz_cib_delete(h);
}

Example::A::A()
  : Example::A(__zz_cib_::Example::A::__zz_cib_Helper::__zz_cib_new())
{}

int Example::A::SomeFunc() {
  return __zz_cib_::Example::A::__zz_cib_Helper::SomeFunc(__zz_cib_h_);
}

int Example::A::AnotherFunction() {
  return __zz_cib_::Example::A::__zz_cib_Helper::AnotherFunction(__zz_cib_h_);
}
