#include "example.h"

namespace Example {

Example::A::A(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{}

Example::A::A(A&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

Example::A::A(const ::Example::A& __zz_cib_param0)
  : Example::A(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

Example::A::~A() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

Example::A::A()
  : Example::A(__zz_cib_MyHelper::__zz_cib_New_2())
{}

int Example::A::f() const {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::f_3<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}
}
