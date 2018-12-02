#include "log_context.h"


Graphics::LogContext::LogContext(__zz_cib_::__zz_cib_HANDLE* h)
  : ::Graphics::Context::Context(__zz_cib_::Graphics::LogContext::__zz_cib_Helper::__zz_cib_cast_to___Graphics__Context_7(h))
  , __zz_cib_h_(h)
{}

Graphics::LogContext::LogContext(LogContext&& rhs)
  : ::Graphics::Context::Context(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

Graphics::LogContext::LogContext(::Graphics::LogContext const & __zz_cib_param0)
  : Graphics::LogContext(__zz_cib_::Graphics::LogContext::__zz_cib_Helper::__zz_cib_copy_0(__zz_cib_::Graphics::LogContext::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

Graphics::LogContext::LogContext()
  : Graphics::LogContext(__zz_cib_::Graphics::LogContext::__zz_cib_Helper::__zz_cib_new_1())
{}

Graphics::LogContext::~LogContext() {
  auto h = __zz_cib_::Graphics::LogContext::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::Graphics::LogContext::__zz_cib_Helper::__zz_cib_delete_2(h);
}

void Graphics::LogContext::Line(double x1, double y1, double x2, double y2) {
  __zz_cib_::Graphics::LogContext::__zz_cib_Helper::Line_3(__zz_cib_h_, x1, y1, x2, y2);
}

void Graphics::LogContext::Rect(double l, double b, double r, double t) {
  __zz_cib_::Graphics::LogContext::__zz_cib_Helper::Rect_4(__zz_cib_h_, l, b, r, t);
}

void Graphics::LogContext::Circle(double cx, double cy, double r) {
  __zz_cib_::Graphics::LogContext::__zz_cib_Helper::Circle_5(__zz_cib_h_, cx, cy, r);
}

void Graphics::LogContext::Ellipse(double cx, double cy, double a, double b) {
  __zz_cib_::Graphics::LogContext::__zz_cib_Helper::Ellipse_6(__zz_cib_h_, cx, cy, a, b);
}
