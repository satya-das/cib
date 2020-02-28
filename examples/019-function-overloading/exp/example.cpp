#include "example.h"

namespace Example {
}
namespace Example {

Example::A::A(__zz_cib_::__zz_cib_HANDLE* h)
  : __zz_cib_h_(h)
{}

Example::A::A(A&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

Example::A::A(::Example::A const & __zz_cib_param0)
  : Example::A(__zz_cib_Helper::__zz_cib_copy(__zz_cib_::Example::A::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

Example::A::~A() {
  auto h = __zz_cib_::Example::A::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_Helper::__zz_cib_delete(h);
}

Example::A::A()
  : Example::A(__zz_cib_Helper::__zz_cib_new())
{}

int Example::A::Func() {
  return __zz_cib_Helper::Func(__zz_cib_h_);
}

int Example::A::Func(float __zz_cib_param0) {
  return __zz_cib_Helper::Func_4(__zz_cib_h_, __zz_cib_param0);
}
}
