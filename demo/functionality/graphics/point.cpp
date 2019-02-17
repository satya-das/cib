#include "point.h"

Point Point::operator + (const Point& p) const {
  return Point(x_+p.x_, y_+p.y_);
}

Point Point::operator - (Point p) const {
  return Point(x_-p.x_, y_-p.y_);
}
