#include "example.h"

namespace Example {

Example::A::A(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

Example::A::A(A&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

Example::A::A(const ::Example::A& __zz_cib_param0)
  : Example::A(__zz_cib_MyHelper::__zz_cib_copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
  {}

Example::A::~A() {
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete_1(
    h
  );
}

Example::A::A()
  : Example::A(__zz_cib_MyHelper::__zz_cib_new_2(
    ))
  {}

::Example::A& Example::A::operator <<(int x) {
  return __zz_cib_::__zz_cib_FromAbiType<::Example::A&>(
    __zz_cib_MyHelper::__zz_cib_OperatorLShift_3<__zz_cib_::__zz_cib_AbiType_t<::Example::A&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(x)>(std::move(x))
    )
  );
}

::Example::A& Example::A::operator >>(int& x) {
  return __zz_cib_::__zz_cib_FromAbiType<::Example::A&>(
    __zz_cib_MyHelper::__zz_cib_OperatorRShift_4<__zz_cib_::__zz_cib_AbiType_t<::Example::A&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(x)>(x)
    )
  );
}
}
