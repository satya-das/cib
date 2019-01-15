#include "circ.h"

///////////////////////////////////////////////////////////////////////////////////////////////////

namespace Graphics {

Circle::Circle(double Ox, double Oy, double radius)
  : Ox_(Ox)
  , Oy_(Oy)
  , radius_(radius)
{
}

double Circle::Area() const
{
  return 3.1416 * radius_ * radius_;
}
double Circle::Perimeter() const
{
  return 2 * 3.1416 * radius_;
}
void Circle::Draw(Context* ctx) const
{
  ctx->Circle(Ox_, Oy_, radius_);
}

Shape* Circle::CreateCircle(double Ox, double Oy, double radius)
{
  return new Circle(Ox, Oy, radius);
}

} // namespace Graphics