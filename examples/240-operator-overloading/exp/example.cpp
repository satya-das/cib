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

::Example::A& Example::A::operator <<(int x) {
  return *__zz_cib_::Example::A::__zz_cib_Helper::__zz_cib_from_handle(
    __zz_cib_::Example::A::__zz_cib_Helper::__zz_cib_OperatorLShift(__zz_cib_h_, x)
  );
}

::Example::A& Example::A::operator >>(int& x) {
  return *__zz_cib_::Example::A::__zz_cib_Helper::__zz_cib_from_handle(
    __zz_cib_::Example::A::__zz_cib_Helper::__zz_cib_OperatorRShift(__zz_cib_h_, &x)
  );
}
