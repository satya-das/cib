#pragma once

#include "context.h"
#include "shape.h"
#include <cmath>

///////////////////////////////////////////////////////////////////////////////////////////////////

namespace Graphics {
class Context;
/**
 * \brief Represents a circle.
 */
class GRAPHICSAPI Ellipse : public Shape
{
public:
  Ellipse(double Ox, double Oy, double a, double b);

  double Area() const override;
  double Perimeter() const override;
  void   Draw(Context* ctx) const override;

private:
  double a_, b_, Ox_, Oy_;
};

} // namespace Graphics
