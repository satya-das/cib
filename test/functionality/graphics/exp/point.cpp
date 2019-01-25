#include "point.h"


Point::Point(__zz_cib_::__zz_cib_HANDLE* h)
  : __zz_cib_h_(h)
{
  __zz_cib_::Point::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

Point::Point(Point&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_::Point::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

Point::Point(::Point const & __zz_cib_param0)
  : Point(__zz_cib_::Point::__zz_cib_Helper::__zz_cib_copy_0(__zz_cib_::Point::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

Point::~Point() {
  auto h = __zz_cib_::Point::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::Point::__zz_cib_Helper::__zz_cib_delete_1(h);
  __zz_cib_::Point::__zz_cib_Helper::__zz_cib_remove_proxy(h);
}

Point::Point(double x, double y)
  : Point(__zz_cib_::Point::__zz_cib_Helper::__zz_cib_new_2(x, y))
{}

double Point::X() const {
  return __zz_cib_::Point::__zz_cib_Helper::X_3(__zz_cib_h_);
}

void Point::X(double x) {
  __zz_cib_::Point::__zz_cib_Helper::X_4(__zz_cib_h_, x);
}

double Point::Y() const {
  return __zz_cib_::Point::__zz_cib_Helper::Y_5(__zz_cib_h_);
}

void Point::Y(double y) {
  __zz_cib_::Point::__zz_cib_Helper::Y_6(__zz_cib_h_, y);
}

::Point Point::operator +(::Point const & p) const {
  return __zz_cib_::Point::__zz_cib_Helper::__zz_cib_obj_from_handle(
__zz_cib_::Point::__zz_cib_Helper::__zz_cib_OperatorPlus_7(__zz_cib_h_, __zz_cib_::Point::__zz_cib_Helper::__zz_cib_handle(p))
);
}

::Point Point::operator -(::Point p) const {
  return __zz_cib_::Point::__zz_cib_Helper::__zz_cib_obj_from_handle(
__zz_cib_::Point::__zz_cib_Helper::__zz_cib_OperatorMinus_8(__zz_cib_h_, __zz_cib_::Point::__zz_cib_Helper::__zz_cib_handle(p))
);
}
