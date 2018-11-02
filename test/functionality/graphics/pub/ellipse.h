#pragma once

#include "shape.h"
#include "context.h"
#include <cmath>

///////////////////////////////////////////////////////////////////////////////////////////////////

namespace Graphics
{
class Context;
/**
* \brief Represents a circle.
*/
class GRAPHICSAPI Ellipse : public Shape
{
  double a_, b_, Ox_, Oy_;

public:
  Ellipse(double Ox, double Oy, double a, double b)
    : Ox_(Ox), Oy_(Oy), a_(a), b_(b)
  {}

  double Area() const override {
    return 3.1416 * a_ * b_;
  }
  double Perimeter() const override {
    auto h = std::pow((a_ - b_) / (a_ + b_), 2);
    // Use Ramanujan's approximation.
    return 3.1416 * (a_ + b_) * (1 + (3 * h) / (10 + std::sqrt(4 - 3 * h)));
  }
  void Draw(Context* ctx) const override {
    ctx->Ellipse(Ox_, Oy_, a_, b_);
  }
};

}
