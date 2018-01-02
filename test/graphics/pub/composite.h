#pragma once

#include "shape.h"
#include "context.h"

#include <vector>
#include <cstdint>

///////////////////////////////////////////////////////////////////////////////////////////////////

namespace Graphics
{

typedef std::vector<Graphics::Shape*> Shapes;

class Composite : public Shape
{
  Shapes shapes_;
public:
  Composite()
  {
  }
  void Add(Shape* shape)
  {
    shapes_.push_back(shape);
  }
  std::uint32_t NumShapes() const
  {
    return shapes_.size();
  }
  Shape* ShapeAt(std::uint32_t idxShape) const
  {
    return shapes_[idxShape];
  }
  /**
   * @return Area of this shape object.
   */
  virtual float Area() const;
  /**
   * @return Perimeter of this shape object.
   */
  virtual float Perimeter() const;
  /**
   * Draws this shape on a given device context.
   */
  virtual void Draw(Context* ctx) const;

  static Composite* CreateCompositeOfRectAndCircle();
};
}
