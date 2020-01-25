#include "example.h"


RValueExample::RValueExample(__zz_cib_::__zz_cib_HANDLE* h)
  : __zz_cib_h_(h)
{
  __zz_cib_::RValueExample::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

RValueExample::~RValueExample() {
  auto h = __zz_cib_::RValueExample::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::RValueExample::__zz_cib_Helper::__zz_cib_delete(h);
}

RValueExample::RValueExample(std::int32_t val)
  : RValueExample(__zz_cib_::RValueExample::__zz_cib_Helper::__zz_cib_new(val))
{}

RValueExample::RValueExample(::RValueExample&& __zz_cib_param0)
  : RValueExample(__zz_cib_::RValueExample::__zz_cib_Helper::__zz_cib_new_2(__zz_cib_::RValueExample::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

RValueExample::RValueExample(::RValueExample const & __zz_cib_param0)
  : RValueExample(__zz_cib_::RValueExample::__zz_cib_Helper::__zz_cib_copy(__zz_cib_::RValueExample::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

::RValueExample& RValueExample::operator=(::RValueExample&& rhs) {
  return *__zz_cib_::RValueExample::__zz_cib_Helper::__zz_cib_from_handle(
    __zz_cib_::RValueExample::__zz_cib_Helper::__zz_cib_OperatorEqual(__zz_cib_h_, __zz_cib_::RValueExample::__zz_cib_Helper::__zz_cib_handle(rhs))
  );
}

::RValueExample& RValueExample::operator=(::RValueExample const & rhs) {
  return *__zz_cib_::RValueExample::__zz_cib_Helper::__zz_cib_from_handle(
    __zz_cib_::RValueExample::__zz_cib_Helper::__zz_cib_OperatorEqual_5(__zz_cib_h_, __zz_cib_::RValueExample::__zz_cib_Helper::__zz_cib_handle(rhs))
  );
}

std::int32_t RValueExample::Set(::RValueExample&& x) {
  return __zz_cib_::RValueExample::__zz_cib_Helper::Set(__zz_cib_h_, __zz_cib_::RValueExample::__zz_cib_Helper::__zz_cib_handle(x));
}

std::int32_t RValueExample::GetValue() const {
  return __zz_cib_::RValueExample::__zz_cib_Helper::GetValue(__zz_cib_h_);
}

