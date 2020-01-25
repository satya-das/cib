#include "example.h"
#include "value.h"

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

Example::A::A()
  : Example::A(__zz_cib_::Example::A::__zz_cib_Helper::__zz_cib_new())
{}

Example::A::A(::Example::A const & __zz_cib_param0)
  : Example::A(__zz_cib_::Example::A::__zz_cib_Helper::__zz_cib_copy(__zz_cib_::Example::A::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

Example::A::~A() {
  auto h = __zz_cib_::Example::A::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::Example::A::__zz_cib_Helper::__zz_cib_delete(h);
}

void Example::A::Set(::Example::Value<int> const & x) {
  __zz_cib_::Example::A::__zz_cib_Helper::Set(__zz_cib_h_, __zz_cib_::Example::__zz_cib_Class260::__zz_cib_Helper::__zz_cib_handle(x));
}

::Example::Value<int> Example::A::Get() const {
  return __zz_cib_::Example::__zz_cib_Class260::__zz_cib_Helper::__zz_cib_obj_from_handle(
__zz_cib_::Example::A::__zz_cib_Helper::Get(__zz_cib_h_)
);
}

void Example::A::SetInt(::Example::Value<::Example::Int> const & y) {
  __zz_cib_::Example::A::__zz_cib_Helper::SetInt(__zz_cib_h_, __zz_cib_::Example::__zz_cib_Class259::__zz_cib_Helper::__zz_cib_handle(y));
}

::Example::Value<::Example::Int> Example::A::GetInt() const {
  return __zz_cib_::Example::__zz_cib_Class259::__zz_cib_Helper::__zz_cib_obj_from_handle(
__zz_cib_::Example::A::__zz_cib_Helper::GetInt(__zz_cib_h_)
);
}
}
