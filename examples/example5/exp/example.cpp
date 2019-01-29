#include "example.h"


Example::Int::Int(__zz_cib_::__zz_cib_HANDLE* h)
  : __zz_cib_h_(h)
{
  __zz_cib_::Example::Int::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

Example::Int::Int(Int&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_::Example::Int::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

Example::Int::Int(::Example::Int const & __zz_cib_param0)
  : Example::Int(__zz_cib_::Example::Int::__zz_cib_Helper::__zz_cib_copy_0(__zz_cib_::Example::Int::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

Example::Int::~Int() {
  auto h = __zz_cib_::Example::Int::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::Example::Int::__zz_cib_Helper::__zz_cib_delete_1(h);
}

Example::Int::Int(int x)
  : Example::Int(__zz_cib_::Example::Int::__zz_cib_Helper::__zz_cib_new_2(x))
{}

Example::Int::operator int() const {
  return __zz_cib_::Example::Int::__zz_cib_Helper::__zz_cib_Operator_3(__zz_cib_h_);
}

Example::A::A(__zz_cib_::__zz_cib_HANDLE* h)
  : __zz_cib_h_(h)
{}

Example::A::A(A&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

Example::A::A()
  : Example::A(__zz_cib_::Example::A::__zz_cib_Helper::__zz_cib_new_0())
{}

Example::A::A(::Example::A const & __zz_cib_param0)
  : Example::A(__zz_cib_::Example::A::__zz_cib_Helper::__zz_cib_copy_1(__zz_cib_::Example::A::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

Example::A::~A() {
  auto h = __zz_cib_::Example::A::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::Example::A::__zz_cib_Helper::__zz_cib_delete_2(h);
}

void Example::A::Set(::Example::Value<int> const & x) {
  __zz_cib_::Example::A::__zz_cib_Helper::Set_3(__zz_cib_h_, __zz_cib_::Example::__zz_cib_Class2::__zz_cib_Helper::__zz_cib_handle(x));
}

::Example::Value<int> Example::A::Get() const {
  return __zz_cib_::Example::__zz_cib_Class2::__zz_cib_Helper::__zz_cib_obj_from_handle(
__zz_cib_::Example::A::__zz_cib_Helper::Get_4(__zz_cib_h_)
);
}

void Example::A::SetInt(::Example::Value<::Example::Int> const & y) {
  __zz_cib_::Example::A::__zz_cib_Helper::SetInt_5(__zz_cib_h_, __zz_cib_::Example::__zz_cib_Class1::__zz_cib_Helper::__zz_cib_handle(y));
}

::Example::Value<::Example::Int> Example::A::GetInt() const {
  return __zz_cib_::Example::__zz_cib_Class1::__zz_cib_Helper::__zz_cib_obj_from_handle(
__zz_cib_::Example::A::__zz_cib_Helper::GetInt_6(__zz_cib_h_)
);
}
