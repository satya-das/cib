#pragma once

#include "context.h"

namespace Graphics
{

/**
 * \brief Abstract base class for all shapes
 */
class GRAPHICSAPI Shape
{
public:
  /**
   * @return Area of this shape object.
   */
  virtual double Area() const = 0;
  /**
   * @return Perimeter of this shape object.
   */
  virtual double Perimeter() const = 0;
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
