#pragma once

#include "shape.h"
#include "context.h"

///////////////////////////////////////////////////////////////////////////////////////////////////

namespace Graphics
{
/**
 * \brief Represents a circle.
 */
class GRAPHICSAPI Circle : public Shape
{
  double Ox_, Oy_, radius_;

public:
  Circle(double Ox, double Oy, double radius)
    : Ox_(Ox), Oy_(Oy), radius_(radius)
  {}

  double Area() const override {
    return 3.1416 * radius_ * radius_;
  }
  double Perimeter() const override {
    return 2 * 3.1416 * radius_;
  }
  void Draw(Context* ctx) const override {
    ctx->Circle(Ox_, Oy_, radius_);
  }

  static Shape* CreateCircle(double Ox, double Oy, double radius) {
    return new Circle(Ox, Oy, radius);
  }
};

}
