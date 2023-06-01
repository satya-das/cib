#pragma  once

#include "__zz_cib_internal/example-predef.h"

class CPoint
{
public:
  CPoint(CPoint&& rhs);
public:
  CPoint(const CPoint&);
  CPoint(double _x = 0, double _y = 0, double _z = 0);
  ~CPoint();
  const CPoint& operator +=(const CPoint& p);

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(CPoint, CPoint);
};

#include "__zz_cib_internal/example-postdef.h"
