#ifndef __COMPOSITE_H__
#define __COMPOSITE_H__

#include "shape.h"

#include <vector>

///////////////////////////////////////////////////////////////////////////////////////////////////

namespace Geometry {

    typedef std::vector<Geometry::Shape*> Shapes;

    class Composite : public Shape
    {
        Shapes shapes_;
    public:
        Composite() {}
        void Add(Shape* shape) { shapes_.push_back(shape); }
		size_t NumShapes() const { return shapes_.size(); }
		Shape* ShapeAt(size_t idxShape) const { return shapes_[idxShape]; }
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
      virtual void Draw(HDC hdc) const;

      static Composite* CreateCompositeOfRectAndCircle();
    };
}

#endif //__COMPOSITE_H__
