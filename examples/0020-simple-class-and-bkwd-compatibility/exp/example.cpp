#include "example.h"


A::A(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{}

A::A()
  : A(__zz_cib_MyHelper::__zz_cib_New_0())
{}

A::A(const A& a)
  : A(__zz_cib_MyHelper::__zz_cib_Copy_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(a)>(a)))
{}

A::~A() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_2(
    h
  );
}

int A::SomeFunc(int x) {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::SomeFunc_3<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(x)>(std::move(x))
    )
  );
}

