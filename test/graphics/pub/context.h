#pragma once

namespace Graphics
{
/*!
 * Drawing context to draw graphics primitives.
 */
class Context
{
public:
  virtual void Move(float x, float y) = 0;
  virtual void Line(float x, float y) = 0;
  virtual void Curve(float x1, float y1, float x2, float y2, float x3, float y3) = 0;
  virtual void Close() = 0;

  virtual ~Context() {}
};
}
