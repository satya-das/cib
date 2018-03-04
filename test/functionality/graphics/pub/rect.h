#pragma once

#include "shape.h"
#include "context.h"

///////////////////////////////////////////////////////////////////////////////////////////////////

namespace Graphics
{
/**
 * \brief Represents a rectangle.
 */
class GRAPHICSAPI Rectangle : public Shape
{
  float left_, bottom_, right_, top_;

public:
  Rectangle(float left, float bottom, float right, float top)
    : left_(left), bottom_(bottom), right_(right), top_(top)
  {
  }
  /**
   * @return Area of this shape object.
   */
  virtual float Area() const;
  /**
   * @return Perimeter of this shape object.
   */
  virtual float Perimeter() const;
  /**
   * Draws this shape on a given device context.
   */
  virtual void Draw(Context* ctx) const;
};
}
