#pragma  once

#include "__zz_cib_internal/example-predef.h"

class CPoint
{
public:
  CPoint(::CPoint const & );
  ~CPoint();
  CPoint(double _x = 0, double _y = 0, double _z = 0);
  ::CPoint const & operator +=(::CPoint const & p);
  double x;
  double y;
  double z;
};

#include "__zz_cib_internal/example-impl.h"
