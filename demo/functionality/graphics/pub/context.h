#pragma once

#include <cstddef>

namespace Graphics
{
/*!
 * Drawing context to draw graphics primitives.
 */
class GRAPHICSAPI Context
{
public:
  virtual void Line(double x1, double y1, double x2, double y2) = 0;
  virtual void Rect(double l, double b, double r, double t) = 0;
  virtual void Circle(double cx, double cy, double r) = 0;
  virtual void Ellipse(double cx, double cy, double a, double b) = 0;

  virtual ~Context() {}
};
}
