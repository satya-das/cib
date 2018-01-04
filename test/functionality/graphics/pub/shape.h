#pragma once

#include "context.h"

namespace Graphics
{

/**
 * \brief Abstract base class for all shapes
 */
class Shape
{
public:
  /**
   * @return Area of this shape object.
   */
  virtual float Area() const = 0;
  /**
   * @return Perimeter of this shape object.
   */
  virtual float Perimeter() const = 0;
  /**
   * Draws this shape on a given device context.
   */
  virtual void Draw(Context* ctx) const = 0;
  /**
   * Virtual dtor
   */
  virtual ~Shape()
  {
  }
};

}
