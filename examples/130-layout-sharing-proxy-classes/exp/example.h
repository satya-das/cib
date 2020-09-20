#pragma  once

#include "__zz_cib_internal/example-predef.h"

class CPoint
{
public:
  CPoint(const CPoint& );
  ~CPoint();
  CPoint(double _x = 0, double _y = 0, double _z = 0);
  const CPoint& operator +=(const CPoint& p);
  double x;
  double y;
  double z;

private:
  __ZZ_CIB_LAYOUT_SHARING_CLASS_INTERNALS(CPoint, CPoint);
};

#include "__zz_cib_internal/example-postdef.h"
