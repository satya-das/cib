#include "example.h"

namespace Example {
}
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

Example::A::A(const A& __zz_cib_param0)
  : Example::A(__zz_cib_MyHelper::__zz_cib_copy(
        __zz_cib_::__zz_cib_ToAbiType<const A&>(__zz_cib_param0)))
  {}

Example::A::~A() {
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete(
    h
  );
}

Example::A::A()
  : Example::A(__zz_cib_MyHelper::__zz_cib_new(
    ))
  {}

::Example::A& Example::A::operator <<(int x) {
  return __zz_cib_::__zz_cib_FromAbiType<::Example::A&>(
    __zz_cib_MyHelper::__zz_cib_OperatorLShift<__zz_cib_::__zz_cib_AbiType_t<::Example::A&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<int>(x)
    )
  );
}

::Example::A& Example::A::operator >>(int& x) {
  return __zz_cib_::__zz_cib_FromAbiType<::Example::A&>(
    __zz_cib_MyHelper::__zz_cib_OperatorRShift<__zz_cib_::__zz_cib_AbiType_t<::Example::A&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<int&>(x)
    )
  );
}
}
