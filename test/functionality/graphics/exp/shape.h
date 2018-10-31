#pragma  once
#include "context.h"

#include "__zz_cib_internal/shape-predef.h"

namespace Graphics
{
  /**
   * \brief Abstract base class for all shapes
   */
  class Shape
  {
  public:
    Shape(Shape&& rhs);
  public:
    /**
     * @return Area of this shape object.
     */
    virtual float Area() const = 0;
    /**
     * @return Perimeter of this shape object.
     */
    virtual float Perimeter() const = 0;
    /**
     * Draws this shape on a given device context.
     */
    virtual void Draw(Context* ctx) const = 0;
    /**
     * Virtual dtor
     */
    virtual ~Shape();
  protected:
    Shape();

  private:
    __ZZ_CIB_CLASS_INTERNAL_DEF(Shape, Graphics::Shape);
  };
}

#include "__zz_cib_internal/shape-impl.h"
