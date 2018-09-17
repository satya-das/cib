#pragma  once
#include "shape.h"
#include "context.h"

#include "__zz_cib_internal/rect-predef.h"
///////////////////////////////////////////////////////////////////////////////////////////////////
namespace Graphics
{
/**
 * \brief Represents a rectangle.
 */
	class Rectangle : public ::Graphics::Shape
	{
	public:
		Rectangle(Rectangle&& rhs);
	public:
		Rectangle(float left, float bottom, float right, float top);
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
		~Rectangle();

	private:
		__ZZ_CIB_CLASS_INTERNAL_DEF(Rectangle, ::Graphics::Rectangle);
	};
}


#include "__zz_cib_internal/rect-impl.h"
