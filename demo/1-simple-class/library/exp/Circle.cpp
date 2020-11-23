#include "Circle.h"


Circle::Circle(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{}

Circle::Circle(Circle&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

Circle::Circle(float r)
  : Circle(__zz_cib_MyHelper::__zz_cib_New_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(r)>(std::move(r))))
{}

Circle::Circle(const ::Circle& __zz_cib_param0)
  : Circle(__zz_cib_MyHelper::__zz_cib_Copy_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

Circle::~Circle() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_2(
    h
  );
}

float Circle::Radius() const {
  return __zz_cib_::__zz_cib_FromAbiType<float>(
    __zz_cib_MyHelper::Radius_3<__zz_cib_::__zz_cib_AbiType_t<float>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void Circle::SetRadius(float r) {
    __zz_cib_MyHelper::SetRadius_4<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(r)>(std::move(r))
    );
  }

float Circle::Area() const {
  return __zz_cib_::__zz_cib_FromAbiType<float>(
    __zz_cib_MyHelper::Area_5<__zz_cib_::__zz_cib_AbiType_t<float>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

