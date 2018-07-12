#include "circ.h"

///////////////////////////////////////////////////////////////////////////////////////////////////

static const float PI = 3.1416f;

float Graphics::Circle::Area() const
{
  return PI * radius_ * radius_;
}

float Graphics::Circle::Perimeter() const
{
  return 2 * PI * radius_;
}

void Graphics::Circle::Draw(Context* ctx) const
{
  ctx->Circle(Ox_, Oy_, radius_);
}

Graphics::Shape* Graphics::Circle::CreateCircle(float Ox, float Oy, float radius)
{
  return new Circle(Ox, Oy, radius);
}
