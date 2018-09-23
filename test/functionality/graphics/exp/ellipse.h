#pragma  once
#include "shape.h"
#include "context.h"

#include "__zz_cib_internal/ellipse-predef.h"

///////////////////////////////////////////////////////////////////////////////////////////////////
namespace Graphics
{
class Context;
/**
* \brief Represents a circle.
*/
	class Ellipse : public ::Graphics::Shape
	{
	public:
		Ellipse(Ellipse&& rhs);
	public:
		Ellipse(float Ox, float Oy, float a, float b);
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
		virtual void Draw(::Graphics::Context* ctx) const;
		Ellipse(const ::Graphics::Ellipse& __zz_cib_param0);
		~Ellipse();

	private:
		__ZZ_CIB_CLASS_INTERNAL_DEF(Ellipse, Graphics::Ellipse);
	};
}

#include "__zz_cib_internal/ellipse-impl.h"
