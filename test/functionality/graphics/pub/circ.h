#pragma once

#include "context.h"
#include "shape.h"

///////////////////////////////////////////////////////////////////////////////////////////////////

namespace Graphics {
/**
 * \brief Represents a circle.
 */
class GRAPHICSAPI Circle : public Shape
{
public:
  Circle(double Ox, double Oy, double radius);

  double Area() const override;
  double Perimeter() const override;
  void   Draw(Context* ctx) const override;

  static Shape* CreateCircle(double Ox, double Oy, double radius);

private:
  double Ox_, Oy_, radius_;
};

} // namespace Graphics
