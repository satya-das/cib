#include "circ.h"


Graphics::Circle::Circle(__zz_cib_::__zz_cib_HANDLE* h)
  : ::Graphics::Shape::Shape(__zz_cib_::Graphics::Circle::__zz_cib_Helper::__zz_cib_cast_to___Graphics__Shape_7(h))
  , __zz_cib_h_(h)
{}

Graphics::Circle::Circle(Circle&& rhs)
  : ::Graphics::Shape::Shape(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

Graphics::Circle::Circle(::Graphics::Circle const & __zz_cib_param0)
  : Graphics::Circle(__zz_cib_::Graphics::Circle::__zz_cib_Helper::__zz_cib_copy_0(__zz_cib_::Graphics::Circle::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

Graphics::Circle::~Circle() {
  auto h = __zz_cib_::Graphics::Circle::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::Graphics::Circle::__zz_cib_Helper::__zz_cib_delete_1(h);
}

Graphics::Circle::Circle(double Ox, double Oy, double radius)
  : Graphics::Circle(__zz_cib_::Graphics::Circle::__zz_cib_Helper::__zz_cib_new_2(Ox, Oy, radius))
{}

double Graphics::Circle::Area() const {
  return     __zz_cib_::Graphics::Circle::__zz_cib_Helper::Area_3(__zz_cib_h_);
  }

double Graphics::Circle::Perimeter() const {
  return     __zz_cib_::Graphics::Circle::__zz_cib_Helper::Perimeter_4(__zz_cib_h_);
  }

void Graphics::Circle::Draw(::Graphics::Context* ctx) const {
  __zz_cib_::Graphics::Circle::__zz_cib_Helper::Draw_5(__zz_cib_h_, __zz_cib_::Graphics::Context::__zz_cib_Helper::__zz_cib_handle(ctx));
}

::Graphics::Shape* Graphics::Circle::CreateCircle(double Ox, double Oy, double radius) {
  return __zz_cib_::Graphics::Shape::__zz_cib_Helper::__zz_cib_from_handle(
    __zz_cib_::Graphics::Circle::__zz_cib_Helper::CreateCircle_6(Ox, Oy, radius)
  );
}
