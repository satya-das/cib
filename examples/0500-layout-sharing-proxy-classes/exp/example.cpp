#include "example.h"


CPoint::CPoint(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

CPoint::CPoint(CPoint&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

CPoint::CPoint(const ::CPoint& __zz_cib_param0)
  : CPoint(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

CPoint::CPoint(double _x, double _y, double _z)
  : CPoint(__zz_cib_MyHelper::__zz_cib_New_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(_x)>(std::move(_x)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(_y)>(std::move(_y)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(_z)>(std::move(_z))))
{}

CPoint::~CPoint() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_2(
    h
  );
}

const ::CPoint& CPoint::operator +=(const ::CPoint& p) {
  return __zz_cib_::__zz_cib_FromAbiType<const ::CPoint&>(
    __zz_cib_MyHelper::__zz_cib_OperatorPlusEq_3<__zz_cib_::__zz_cib_AbiType_t<const ::CPoint&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(p)>(p)
    )
  );
}

