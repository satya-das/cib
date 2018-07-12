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
  virtual void Line(float x1, float y1, float x2, float y2) = 0;
  virtual void Rect(float l, float b, float r, float t) = 0;
  virtual void Circle(float cx, float cy, float r) = 0;
  virtual void Ellipse(float cx, float cy, float a, float b) = 0;

  virtual ~Context() {}
};
}
