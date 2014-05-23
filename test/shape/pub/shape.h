#ifndef __SHAPE_H__
#define __SHAPE_H__

#include <WinDef.h>

namespace Geometry {
/**
 * \brief Abstract base class for all shapes
 */
class Shape
{
public:
    /**
     * @return Area of this shape object.
     */
    virtual double Area() const = 0;
    /**
     * @return Perimeter of this shape object.
     */
    virtual double Perimeter() const = 0;
    /**
     * Draws this shape on a given device context.
     */
    virtual void Draw(HDC hdc) const = 0;
    /**
     * Virtual dtor
     */
    virtual ~Shape() {}
};

}

#endif //__SHAPE_H__
