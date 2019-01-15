#pragma once

#include "context.h"
#include "shape.h"

///////////////////////////////////////////////////////////////////////////////////////////////////

namespace Graphics {
/**
 * \brief Represents a rectangle.
 */
class GRAPHICSAPI Rectangle : public Shape
{
public:
  Rectangle(double left, double bottom, double right, double top);

  double Area() const override;
  double Perimeter() const override;
  void   Draw(Context* ctx) const override;

private:
  double width() const
  {
    return right_ - left_;
  }
  double height() const
  {
    return top_ - bottom_;
  }

private:
  double left_, bottom_, right_, top_;
};

} // namespace Graphics
