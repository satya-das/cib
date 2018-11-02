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
  double left_, bottom_, right_, top_;

public:
  Rectangle(double left, double bottom, double right, double top)
    : left_(left), bottom_(bottom), right_(right), top_(top)
  {}

  double Area() const override {
    return width() * height();
  }
  double Perimeter() const override {
    return 2 * (width() + height());
  }
  void Draw(Context* ctx) const override {
    ctx->Rect(left_, bottom_, right_, top_);
  }

private:
  double width() const { return right_- left_; }
  double height() const { return top_ - bottom_; }
};
}
