#pragma  once
#include "shape.h"
#include "context.h"
#include <vector>

#include "__zz_cib_internal/composite_impl1.h"
///////////////////////////////////////////////////////////////////////////////////////////////////
namespace Graphics
{
typedef std::vector<Graphics::Shape*> Shapes;
	class Composite : public ::Graphics::Shape
	{
	public:
		Composite();
		void Add(::Graphics::Shape* shape);
		size_t NumShapes() const;
		Shape* ShapeAt(size_t idxShape) const;
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
		static Composite* CreateCompositeOfRectAndCircle();
		~Composite();

	private:
		__ZZ_CIB_CLASS_INTERNAL_DEF(Composite, ::Graphics::Composite);
	};
}


#include "__zz_cib_internal/composite_impl2.h"
