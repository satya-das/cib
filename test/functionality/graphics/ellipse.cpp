#include "ellipse.h"

#include <cmath>

///////////////////////////////////////////////////////////////////////////////////////////////////

static const float PI = 3.1416f;

float Graphics::Ellipse::Area() const
{
  return PI * a_ * b_;
}

float Graphics::Ellipse::Perimeter() const
{
  auto h = std::pow((a_ - b_) / (a_ + b_), 2);
  // Use Ramanujan's approximation.
  return PI * (a_ + b_) * (1 + (3 * h) / (10 + std::sqrt(4 - 3 * h)));
}

void Graphics::Ellipse::Draw(Context* ctx) const
{
  ctx->Ellipse(Ox_, Oy_, a_, b_);
}
