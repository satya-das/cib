#include "example.h"


Example::A::A(__zz_cib_::__zz_cib_HANDLE* h)
  : __zz_cib_h_(h)
{}

Example::A::A(A&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

Example::A::A(::Example::A const & __zz_cib_param0)
  : Example::A(__zz_cib_::Example::A::__zz_cib_Helper::__zz_cib_copy_0(__zz_cib_::Example::A::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

Example::A::~A() {
  auto h = __zz_cib_::Example::A::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::Example::A::__zz_cib_Helper::__zz_cib_delete_1(h);
}

Example::A::A()
  : Example::A(__zz_cib_::Example::A::__zz_cib_Helper::__zz_cib_new_2())
{}

void Example::A::Set(::Example::Number<int> const & x) {
  __zz_cib_::Example::A::__zz_cib_Helper::Set_3(__zz_cib_h_, __zz_cib_::Example::__zz_cib_Class1::__zz_cib_Helper::__zz_cib_handle(x));
}

::Example::Number<int> Example::A::Get() const {
  return __zz_cib_::Example::__zz_cib_Class1::__zz_cib_Helper::__zz_cib_obj_from_handle(
    __zz_cib_::Example::A::__zz_cib_Helper::Get_4(__zz_cib_h_)
  );
}
