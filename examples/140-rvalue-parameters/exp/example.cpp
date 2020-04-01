#include "example.h"


RValueExample::RValueExample(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

RValueExample::~RValueExample() {
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete(
    h
  );
}

RValueExample::RValueExample(std::int32_t val)
  : RValueExample(__zz_cib_MyHelper::__zz_cib_new(
        __zz_cib_::__zz_cib_ToAbiType<std::int32_t>(val)))
  {}

RValueExample::RValueExample(RValueExample&& __zz_cib_param0)
  : RValueExample(__zz_cib_MyHelper::__zz_cib_new_2(
        __zz_cib_::__zz_cib_ToAbiType<RValueExample&&>(std::move(__zz_cib_param0))))
  {}

RValueExample::RValueExample(const RValueExample& __zz_cib_param0)
  : RValueExample(__zz_cib_MyHelper::__zz_cib_copy(
        __zz_cib_::__zz_cib_ToAbiType<const RValueExample&>(__zz_cib_param0)))
  {}

::RValueExample& RValueExample::operator=(RValueExample&& rhs) {
  return __zz_cib_::__zz_cib_FromRValueAbiType<::RValueExample&>(
    __zz_cib_MyHelper::__zz_cib_OperatorEqual<__zz_cib_::__zz_cib_RValueAbiType_t<::RValueExample&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<RValueExample&&>(std::move(rhs))
    )
  );
}

::RValueExample& RValueExample::operator=(const RValueExample& rhs) {
  return __zz_cib_::__zz_cib_FromRValueAbiType<::RValueExample&>(
    __zz_cib_MyHelper::__zz_cib_OperatorEqual_5<__zz_cib_::__zz_cib_RValueAbiType_t<::RValueExample&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<const RValueExample&>(rhs)
    )
  );
}

std::int32_t RValueExample::Set(RValueExample&& x) {
  return __zz_cib_::__zz_cib_FromRValueAbiType<std::int32_t>(
    __zz_cib_MyHelper::Set<__zz_cib_::__zz_cib_RValueAbiType_t<std::int32_t>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<RValueExample&&>(std::move(x))
    )
  );
}

std::int32_t RValueExample::GetValue() const {
  return __zz_cib_::__zz_cib_FromRValueAbiType<std::int32_t>(
    __zz_cib_MyHelper::GetValue<__zz_cib_::__zz_cib_RValueAbiType_t<std::int32_t>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

