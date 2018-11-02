#pragma  once
#include "shape.h"
#include "context.h"

#include "__zz_cib_internal/circ-predef.h"

///////////////////////////////////////////////////////////////////////////////////////////////////
namespace Graphics
{
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
    Circle(double Ox, double Oy, double radius);
    virtual double Area() const;
    virtual double Perimeter() const;
    virtual void Draw(Context* ctx) const;
    static Shape* CreateCircle(double Ox, double Oy, double radius);

  private:
    __ZZ_CIB_CLASS_INTERNAL_DEF(Circle, Graphics::Circle);
  };
}

#include "__zz_cib_internal/circ-impl.h"
