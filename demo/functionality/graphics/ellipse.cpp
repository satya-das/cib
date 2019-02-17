#include "ellipse.h"

///////////////////////////////////////////////////////////////////////////////////////////////////

namespace Graphics {

Ellipse::Ellipse(double Ox, double Oy, double a, double b)
  : Ox_(Ox)
  , Oy_(Oy)
  , a_(a)
  , b_(b)
{
}

double Ellipse::Area() const
{
  return 3.1416 * a_ * b_;
}
double Ellipse::Perimeter() const
{
  auto h = std::pow((a_ - b_) / (a_ + b_), 2);
  // Use Ramanujan's approximation.
  return 3.1416 * (a_ + b_) * (1 + (3 * h) / (10 + std::sqrt(4 - 3 * h)));
}
void Ellipse::Draw(Context* ctx) const
{
  ctx->Ellipse(Ox_, Oy_, a_, b_);
}

}