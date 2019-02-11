#include "rect.h"

///////////////////////////////////////////////////////////////////////////////////////////////////

namespace Graphics {

Rectangle::Rectangle(double left, double bottom, double right, double top)
  : left_(left)
  , bottom_(bottom)
  , right_(right)
  , top_(top)
{
}

double Rectangle::Area() const
{
  return width() * height();
}
double Rectangle::Perimeter() const
{
  return 2 * (width() + height());
}
void Rectangle::Draw(Context* ctx) const
{
  ctx->Rect(left_, bottom_, right_, top_);
}

} // namespace Graphics
