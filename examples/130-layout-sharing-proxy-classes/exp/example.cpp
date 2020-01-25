#include "example.h"


CPoint::CPoint(::CPoint const & __zz_cib_param0)
{
  __zz_cib_::CPoint::__zz_cib_Helper::__zz_cib_copy(this, &__zz_cib_param0);
}

CPoint::~CPoint() {
  __zz_cib_::CPoint::__zz_cib_Helper::__zz_cib_delete(this);
}

CPoint::CPoint(double _x, double _y, double _z)
{
  __zz_cib_::CPoint::__zz_cib_Helper::__zz_cib_new(this, _x, _y, _z);
}

::CPoint const & CPoint::operator +=(::CPoint const & p) {
  return *__zz_cib_::CPoint::__zz_cib_Helper::__zz_cib_OperatorPlusEq(this, &p);
}

