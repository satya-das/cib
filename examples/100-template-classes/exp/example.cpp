#include "example.h"
#include "value.h"

namespace Example {
}
namespace Example {

Example::A::A(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{}

Example::A::A(A&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

Example::A::A()
  : Example::A(__zz_cib_MyHelper::__zz_cib_new(
    ))
  {}

Example::A::A(const A& __zz_cib_param0)
  : Example::A(__zz_cib_MyHelper::__zz_cib_copy(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
  {}

Example::A::~A() {
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete(
    h
  );
}

void Example::A::Set(const Value<int>& x) {
  __zz_cib_MyHelper::Set<__zz_cib_::__zz_cib_RValueAbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(x)>(x)
  );
}

::Example::Value<int> Example::A::Get() const {
  return __zz_cib_::__zz_cib_FromRValueAbiType<::Example::Value<int>>(
    __zz_cib_MyHelper::Get<__zz_cib_::__zz_cib_RValueAbiType_t<::Example::Value<int>>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void Example::A::SetInt(const Value<Int>& y) {
  __zz_cib_MyHelper::SetInt<__zz_cib_::__zz_cib_RValueAbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(y)>(y)
  );
}

::Example::Value<::Example::Int> Example::A::GetInt() const {
  return __zz_cib_::__zz_cib_FromRValueAbiType<::Example::Value<::Example::Int>>(
    __zz_cib_MyHelper::GetInt<__zz_cib_::__zz_cib_RValueAbiType_t<::Example::Value<::Example::Int>>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void Example::A::SetFloat(FloatValue f) {
  __zz_cib_MyHelper::SetFloat<__zz_cib_::__zz_cib_RValueAbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(f)>(f)
  );
}

::Example::Value<float> Example::A::GetFloat() const {
  return __zz_cib_::__zz_cib_FromRValueAbiType<::Example::Value<float>>(
    __zz_cib_MyHelper::GetFloat<__zz_cib_::__zz_cib_RValueAbiType_t<::Example::Value<float>>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}
}
