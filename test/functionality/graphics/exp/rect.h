#pragma  once

#include "shape.h"
#include "context.h"

#include "__zz_cib_internal/rect_impl1.h"

///////////////////////////////////////////////////////////////////////////////////////////////////

namespace Graphics
{
/**
 * \brief Represents a rectangle.
 */
	class Rectangle : public ::Graphics::Shape
	{
	public:
		Rectangle(float left, float bottom, float right, float top);
		virtual float Area() const;
		virtual float Perimeter() const;
		virtual void Draw(::Graphics::Context* ctx) const;
		~Rectangle();

	private:
		__ZZ_CIB_CLASS_INTERNAL_DEF(Rectangle, ::Graphics::Rectangle);
	};
}


#include "__zz_cib_internal/rect_impl2.h"
