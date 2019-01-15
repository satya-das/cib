#pragma  once
#include "context.h"
#include "shape.h"

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
    Rectangle(Rectangle const & );
    ~Rectangle();
    Rectangle(double left, double bottom, double right, double top);
    virtual double Area() const;
    virtual double Perimeter() const;
    virtual void Draw(Context* ctx) const;

  private:
    __ZZ_CIB_CLASS_INTERNAL_DEF(Rectangle, Graphics::Rectangle);
  };
}

#include "__zz_cib_internal/rect-impl.h"
