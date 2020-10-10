#include "example.h"


CPoint::CPoint(const ::CPoint& __zz_cib_param0)
{
  __zz_cib_MyHelper::__zz_cib_Copy_0(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)
  );
}

CPoint::~CPoint() {
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
  );
}

CPoint::CPoint(double _x, double _y, double _z)
{
  __zz_cib_MyHelper::__zz_cib_New_2(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(_x)>(std::move(_x)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(_y)>(std::move(_y)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(_z)>(std::move(_z))
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

