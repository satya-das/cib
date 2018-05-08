#include "rect.h"
#include "context.h"

///////////////////////////////////////////////////////////////////////////////////////////////////

float Graphics::Rectangle::Area() const
{
  float w = right_- left_;
  float h = top_ - bottom_;
  return w * h;
}

float Graphics::Rectangle::Perimeter() const
{
  float w = right_- left_;
  float h = top_ - bottom_;
  return 2 * (w + h);
}

void Graphics::Rectangle::Draw(Context* ctx) const
{
  ctx->Rect(left_, bottom_, right_, top_);
}
