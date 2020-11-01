#include "B.h"
#include "example.h"


B::B(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{}

B::B(B&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

B::B()
  : B(__zz_cib_MyHelper::__zz_cib_New_0())
{}

B::B(const ::B& __zz_cib_param0)
  : B(__zz_cib_MyHelper::__zz_cib_Copy_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

B::~B() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_2(
    h
  );
}

void B::SetA(::A* pA) {
    __zz_cib_MyHelper::SetA_3<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pA)>(std::move(pA))
    );
  }

::A* B::GetA() const {
  return __zz_cib_::__zz_cib_FromAbiType<::A*>(
    __zz_cib_MyHelper::GetA_4<__zz_cib_::__zz_cib_AbiType_t<::A*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

