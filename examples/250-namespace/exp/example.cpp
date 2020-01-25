#include "example.h"


Example::Outer::Inner::A::A(__zz_cib_::__zz_cib_HANDLE* h)
  : __zz_cib_h_(h)
{}

Example::Outer::Inner::A::A(A&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

Example::Outer::Inner::A::A(::Example::Outer::Inner::A const & __zz_cib_param0)
  : Example::Outer::Inner::A(__zz_cib_::Example::Outer::Inner::A::__zz_cib_Helper::__zz_cib_copy(__zz_cib_::Example::Outer::Inner::A::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

Example::Outer::Inner::A::~A() {
  auto h = __zz_cib_::Example::Outer::Inner::A::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::Example::Outer::Inner::A::__zz_cib_Helper::__zz_cib_delete(h);
}

Example::Outer::Inner::A::A()
  : Example::Outer::Inner::A(__zz_cib_::Example::Outer::Inner::A::__zz_cib_Helper::__zz_cib_new())
{}

::Example::Int Example::Outer::Inner::A::i() const {
  return __zz_cib_::Example::Outer::Inner::A::__zz_cib_Helper::i(__zz_cib_h_);
}

::Example::Outer::Inner::Float Example::Outer::Inner::A::f() const {
  return __zz_cib_::Example::Outer::Inner::A::__zz_cib_Helper::f(__zz_cib_h_);
}
