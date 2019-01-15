#pragma once

#include "context.h"
#include "shape.h"

#include <vector>

///////////////////////////////////////////////////////////////////////////////////////////////////

namespace Graphics {

typedef std::vector<Graphics::Shape*> Shapes;

class GRAPHICSAPI Composite : public Shape
{
  Shapes shapes_;

public:
  Composite();
  void   Add(Shape* shape);
  size_t NumShapes() const;
  Shape* ShapeAt(size_t idxShape) const;
  /**
   * @return Area of this shape object.
   */
  virtual double Area() const;
  /**
   * @return Perimeter of this shape object.
   */
  virtual double Perimeter() const;
  /**
   * Draws this shape on a given device context.
   */
  virtual void Draw(Context* ctx) const;

  static Composite* CreateCompositeOfRectAndCircle();
};

} // namespace Graphics
