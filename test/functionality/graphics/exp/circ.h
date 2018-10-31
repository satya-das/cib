#pragma  once
#include "shape.h"
#include "context.h"

#include "__zz_cib_internal/circ-predef.h"

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
    Circle(Circle&& rhs);
  public:
    Circle(const Circle& );
    ~Circle();
    Circle(float Ox, float Oy, float radius);
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
    virtual void Draw(Context* ctx) const;
    static Shape* CreateCircle(float Ox, float Oy, float radius);

  private:
    __ZZ_CIB_CLASS_INTERNAL_DEF(Circle, Graphics::Circle);
  };
}

#include "__zz_cib_internal/circ-impl.h"
