#pragma  once

#include "context.h"

#include "__zz_cib_internal/shape_impl1.h"

namespace Graphics
{

/**
 * \brief Abstract base class for all shapes
 */
	class Shape
	{
	public:
		virtual float Area() const = 0;
		virtual float Perimeter() const = 0;
		virtual void Draw(::Graphics::Context* ctx) const = 0;
		virtual ~Shape();
	protected:
		Shape();

	private:
		__ZZ_CIB_CLASS_INTERNAL_DEF(Shape, ::Graphics::Shape);
	};

}


#include "__zz_cib_internal/shape_impl2.h"
