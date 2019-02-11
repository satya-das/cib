#pragma once

#include "context.h"

#include <iostream>

namespace Graphics
{
/*!
 * Context for logging drawing calls rather than actually drawing anything.
 */
class GRAPHICSAPI LogContext : public Context
{
public:
  LogContext() {}
  ~LogContext() {}

public:
  void Line(double x1, double y1, double x2, double y2) override
  {
    std::cout << "Line(" << x1 << ", " << y1 << ", " << x2 << ", " << y2 << ")\n";
  }
  void Rect(double l, double b, double r, double t) override
  {
    std::cout << "Rect(" << l << ", " << b << ", " << r << ", " << t << ")\n";
  }
  void Circle(double cx, double cy, double r) override
  {
    std::cout << "Circle(" << cx << ", " << cy << ", " << r << ")\n";
  }
  void Ellipse(double cx, double cy, double a, double b) override
  {
    std::cout << "Ellipse(" << cx << ", " << cy << ", " << a << ", " << b << ")\n";
  }
};
}
