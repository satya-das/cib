#include "context.h"
#include "ellipse.h"


Graphics::Ellipse::Ellipse(__zz_cib_::__zz_cib_HANDLE* h)
  : ::Graphics::Shape(__zz_cib_::Graphics::Ellipse::__zz_cib_Helper::__zz_cib_cast_to___Graphics__Shape_6(h))
  , __zz_cib_h_(h)
{}

Graphics::Ellipse::Ellipse(Ellipse&& rhs)
  : ::Graphics::Shape(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

Graphics::Ellipse::Ellipse(::Graphics::Ellipse const & __zz_cib_param0)
  : Graphics::Ellipse(__zz_cib_::Graphics::Ellipse::__zz_cib_Helper::__zz_cib_copy_0(__zz_cib_::Graphics::Ellipse::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

Graphics::Ellipse::~Ellipse() {
  auto h = __zz_cib_::Graphics::Ellipse::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::Graphics::Ellipse::__zz_cib_Helper::__zz_cib_delete_1(h);
}

Graphics::Ellipse::Ellipse(double Ox, double Oy, double a, double b)
  : Graphics::Ellipse(__zz_cib_::Graphics::Ellipse::__zz_cib_Helper::__zz_cib_new_2(Ox, Oy, a, b))
{}

double Graphics::Ellipse::Area() const {
  return __zz_cib_::Graphics::Ellipse::__zz_cib_Helper::Area_3(__zz_cib_h_);
}

double Graphics::Ellipse::Perimeter() const {
  return __zz_cib_::Graphics::Ellipse::__zz_cib_Helper::Perimeter_4(__zz_cib_h_);
}

void Graphics::Ellipse::Draw(::Graphics::Context* ctx) const {
  __zz_cib_::Graphics::Ellipse::__zz_cib_Helper::Draw_5(__zz_cib_h_, __zz_cib_::Graphics::Context::__zz_cib_Helper::__zz_cib_handle(ctx));
}
