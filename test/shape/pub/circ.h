#ifndef __CIRC_HH
#define __CIRC_HH

#include "shape.h"

///////////////////////////////////////////////////////////////////////////////////////////////////

namespace Geometry {
/**
 * \brief Represents a rectangle.
 */
class Circle : public Shape
{
	int Ox_, Oy_, radius_;

public:
	Circle(int Ox, int Oy, int radius) : Ox_(Ox), Oy_(Oy), radius_(radius) {
	}
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

#endif //__CIRC_HH
