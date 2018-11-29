#pragma  once
#include "shape.h"
#include "context.h"
#include <cmath>

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
    Ellipse(Ellipse const & );
    ~Ellipse();
    Ellipse(double Ox, double Oy, double a, double b);
    virtual double Area() const;
    virtual double Perimeter() const;
    virtual void Draw(Context* ctx) const;

  private:
    __ZZ_CIB_CLASS_INTERNAL_DEF(Ellipse, Graphics::Ellipse);
  };
}

#include "__zz_cib_internal/ellipse-impl.h"
