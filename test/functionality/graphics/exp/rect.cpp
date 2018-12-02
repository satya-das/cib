#include "rect.h"


Graphics::Rectangle::Rectangle(__zz_cib_::__zz_cib_HANDLE* h)
  : ::Graphics::Shape::Shape(__zz_cib_::Graphics::Rectangle::__zz_cib_Helper::__zz_cib_cast_to___Graphics__Shape_6(h))
  , __zz_cib_h_(h)
{}

Graphics::Rectangle::Rectangle(Rectangle&& rhs)
  : ::Graphics::Shape::Shape(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

Graphics::Rectangle::Rectangle(::Graphics::Rectangle const & __zz_cib_param0)
  : Graphics::Rectangle(__zz_cib_::Graphics::Rectangle::__zz_cib_Helper::__zz_cib_copy_0(__zz_cib_::Graphics::Rectangle::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

Graphics::Rectangle::~Rectangle() {
  auto h = __zz_cib_::Graphics::Rectangle::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::Graphics::Rectangle::__zz_cib_Helper::__zz_cib_delete_1(h);
}

Graphics::Rectangle::Rectangle(double left, double bottom, double right, double top)
  : Graphics::Rectangle(__zz_cib_::Graphics::Rectangle::__zz_cib_Helper::__zz_cib_new_2(left, bottom, right, top))
{}

double Graphics::Rectangle::Area() const {
  return     __zz_cib_::Graphics::Rectangle::__zz_cib_Helper::Area_3(__zz_cib_h_);
  }

double Graphics::Rectangle::Perimeter() const {
  return     __zz_cib_::Graphics::Rectangle::__zz_cib_Helper::Perimeter_4(__zz_cib_h_);
  }

void Graphics::Rectangle::Draw(::Graphics::Context* ctx) const {
  __zz_cib_::Graphics::Rectangle::__zz_cib_Helper::Draw_5(__zz_cib_h_, __zz_cib_::Graphics::Context::__zz_cib_Helper::__zz_cib_handle(ctx));
}
