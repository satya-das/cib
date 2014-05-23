#ifndef __RECT_H__
#define __RECT_H__

#include "shape.h"

///////////////////////////////////////////////////////////////////////////////////////////////////

namespace Geometry {
/**
 * \brief Represents a rectangle.
 */
class Rectangle : public Shape
{
    int left_, top_, right_, bottom_;

public:
    Rectangle(int left, int top, int right, int bottom) : left_(left), top_(top), right_(right), bottom_(bottom) {}
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
};

}

#endif //__RECT_H__
