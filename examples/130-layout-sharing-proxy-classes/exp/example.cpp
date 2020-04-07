#include "example.h"


CPoint::CPoint(const ::CPoint& __zz_cib_param0)
{
  __zz_cib_MyHelper::__zz_cib_copy_0(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)
  );
}

CPoint::~CPoint() {
  __zz_cib_MyHelper::__zz_cib_delete_1(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
  );
}

CPoint::CPoint(double _x, double _y, double _z)
{
  __zz_cib_MyHelper::__zz_cib_new_2(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(_x)>(_x),
    __zz_cib_::__zz_cib_ToAbiType<decltype(_y)>(_y),
    __zz_cib_::__zz_cib_ToAbiType<decltype(_z)>(_z)
  );
}

const ::CPoint& CPoint::operator +=(const ::CPoint& p) {
  return __zz_cib_::__zz_cib_FromRValueAbiType<const ::CPoint&>(
    __zz_cib_MyHelper::__zz_cib_OperatorPlusEq_3<__zz_cib_::__zz_cib_RValueAbiType_t<const ::CPoint&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(p)>(p)
    )
  );
}

