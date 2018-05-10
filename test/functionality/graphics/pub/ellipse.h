#pragma once

#include "shape.h"
#include "context.h"

///////////////////////////////////////////////////////////////////////////////////////////////////

namespace Graphics
{
class Context;
/**
* \brief Represents a circle.
*/
class GRAPHICSAPI Ellipse : public Shape
{
  float a_, b_, Ox_, Oy_;

public:
  Ellipse(float Ox, float Oy, float a, float b)
    : Ox_(Ox), Oy_(Oy), a_(a), b_(b)
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
