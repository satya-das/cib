#pragma  once
#include "shape.h"
#include "context.h"
#include <vector>

#include "__zz_cib_internal/composite-predef.h"

///////////////////////////////////////////////////////////////////////////////////////////////////
namespace Graphics
{
typedef std::vector<Graphics::Shape*> Shapes;
	class Composite : public ::Graphics::Shape
	{
	public:
		Composite(Composite&& rhs);
	public:
		Composite();
		void Add(::Graphics::Shape* shape);
		size_t NumShapes() const;
		::Graphics::Shape* ShapeAt(size_t idxShape) const;
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
		static ::Graphics::Composite* CreateCompositeOfRectAndCircle();
		Composite(const ::Graphics::Composite& __zz_cib_param0);
		~Composite();

	private:
		__ZZ_CIB_CLASS_INTERNAL_DEF(Composite, Graphics::Composite);
	};
}

#include "__zz_cib_internal/composite-impl.h"
