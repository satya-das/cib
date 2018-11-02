#pragma  once

#include "__zz_cib_internal/point-predef.h"

class Point
{
public:
  Point(Point&& rhs);
public:
  Point(const Point& );
  ~Point();
  Point(double x, double y);
  double X() const;
  void X(double x);
  double Y() const;
  void Y(double y);
  Point operator +(const Point& p) const;
  Point operator -(Point p) const;

private:
  __ZZ_CIB_CLASS_INTERNAL_DEF(Point, Point);
};

#include "__zz_cib_internal/point-impl.h"
