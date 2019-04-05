#pragma once

class CPoint
{
public:
  CPoint(double _x = 0, double _y = 0, double _z = 0);
  const CPoint& operator += (const CPoint& p) {
    x += p.x;
    y += p.y;
    z += p.z;

    return *this;
  }

public:
  double x;
  double y;
  double z;
};
