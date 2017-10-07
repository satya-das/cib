#include "rect.h"
#include "context_log.h"

///////////////////////////////////////////////////////////////////////////////////////////////////

float Graphics::Rectangle::Area() const
{
  float w = right_- left_;
  float h = bottom_ - top_;
  return w * h;
}

float Graphics::Rectangle::Perimeter() const
{
  float w = right_- left_;
  float h = bottom_ - top_;
  return 2 * (w + h);
}

void Graphics::Rectangle::Draw(Context* ctx) const
{
  ctx->Move(left_, bottom_);
  ctx->Line(right_, bottom_);
  ctx->Line(right_, top_);
  ctx->Line(left_, top_);
  ctx->Close();
}
