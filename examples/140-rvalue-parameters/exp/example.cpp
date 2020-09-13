#include "example.h"


RValueExample::RValueExample(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

RValueExample::~RValueExample() {
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete_0(
    h
  );
}

RValueExample::RValueExample(std::int32_t val)
  : RValueExample(__zz_cib_MyHelper::__zz_cib_new_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(val)>(std::move(val))))
  {}

RValueExample::RValueExample(::RValueExample&& __zz_cib_param0)
  : RValueExample(__zz_cib_MyHelper::__zz_cib_new_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(std::move(__zz_cib_param0))))
  {}

RValueExample::RValueExample(const ::RValueExample& __zz_cib_param0)
  : RValueExample(__zz_cib_MyHelper::__zz_cib_copy_3(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
  {}

::RValueExample& RValueExample::operator=(::RValueExample&& rhs) {
  return __zz_cib_::__zz_cib_FromAbiType<::RValueExample&>(
    __zz_cib_MyHelper::__zz_cib_OperatorEqual_4<__zz_cib_::__zz_cib_AbiType_t<::RValueExample&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(std::move(rhs))
    )
  );
}

::RValueExample& RValueExample::operator=(const ::RValueExample& rhs) {
  return __zz_cib_::__zz_cib_FromAbiType<::RValueExample&>(
    __zz_cib_MyHelper::__zz_cib_OperatorEqual_5<__zz_cib_::__zz_cib_AbiType_t<::RValueExample&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}

std::int32_t RValueExample::Set(::RValueExample&& x) {
  return __zz_cib_::__zz_cib_FromAbiType<std::int32_t>(
    __zz_cib_MyHelper::Set_6<__zz_cib_::__zz_cib_AbiType_t<std::int32_t>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(x)>(std::move(x))
    )
  );
}

std::int32_t RValueExample::GetValue() const {
  return __zz_cib_::__zz_cib_FromAbiType<std::int32_t>(
    __zz_cib_MyHelper::GetValue_7<__zz_cib_::__zz_cib_AbiType_t<std::int32_t>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

