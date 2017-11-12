#pragma  once

#include "shape.h"
#include "context.h"

#include "__zz_cib_internal/circ_impl1.h"

///////////////////////////////////////////////////////////////////////////////////////////////////

namespace Graphics
{
class Context;
/**
 * \brief Represents a circle.
 */
	class Circle : public ::Graphics::Shape
	{
	public:
		Circle(float Ox, float Oy, float radius);
		virtual float Area() const;
		virtual float Perimeter() const;
		virtual void Draw(Context* ctx) const;

	private:
		__ZZ_CIB_CLASS_INTERNAL_DEF(Circle, ::Graphics::Circle);
	};

}


#include "__zz_cib_internal/circ_impl2.h"
