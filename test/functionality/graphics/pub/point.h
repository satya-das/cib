#pragma once

class Point
{
public:
  Point(float x, float y)
    : x_(x)
    , y_(y)
  {
  }

  float X() const {
    return x_;
  }
  void X(float x) {
    x_ = x;
  }
  float Y() const {
    return y_;
  }
  void Y(float y) {
    y_ = y;
  }

  Point operator + (const Point& p) const;
  Point operator - (Point p) const;

private:
  float x_, y_;
};
