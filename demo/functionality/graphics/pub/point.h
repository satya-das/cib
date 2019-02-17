#pragma once

class Point
{
public:
  Point(double x, double y)
    : x_(x)
    , y_(y)
  {
  }

  double X() const {
    return x_;
  }
  void X(double x) {
    x_ = x;
  }
  double Y() const {
    return y_;
  }
  void Y(double y) {
    y_ = y;
  }

  Point operator + (const Point& p) const;
  Point operator - (Point p) const;

private:
  double x_, y_;
};
