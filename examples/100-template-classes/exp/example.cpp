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
  : Example::A(__zz_cib_MyHelper::__zz_cib_new_0(
    ))
  {}

Example::A::A(const ::Example::A& __zz_cib_param0)
  : Example::A(__zz_cib_MyHelper::__zz_cib_copy_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
  {}

Example::A::~A() {
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete_2(
    h
  );
}

void Example::A::Set(const ::Example::Value<int>& x) {
  __zz_cib_MyHelper::Set_3<__zz_cib_::__zz_cib_RValueAbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(x)>(x)
  );
}

::Example::Value<int> Example::A::Get() const {
  return __zz_cib_::__zz_cib_FromRValueAbiType<::Example::Value<int>>(
    __zz_cib_MyHelper::Get_4<__zz_cib_::__zz_cib_RValueAbiType_t<::Example::Value<int>>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void Example::A::SetInt(const ::Example::Value<::Example::Int>& y) {
  __zz_cib_MyHelper::SetInt_5<__zz_cib_::__zz_cib_RValueAbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(y)>(y)
  );
}

::Example::Value<::Example::Int> Example::A::GetInt() const {
  return __zz_cib_::__zz_cib_FromRValueAbiType<::Example::Value<::Example::Int>>(
    __zz_cib_MyHelper::GetInt_6<__zz_cib_::__zz_cib_RValueAbiType_t<::Example::Value<::Example::Int>>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void Example::A::SetFloat(::Example::Value<float> f) {
  __zz_cib_MyHelper::SetFloat_7<__zz_cib_::__zz_cib_RValueAbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(f)>(std::move(f))
  );
}

::Example::Value<float> Example::A::GetFloat() const {
  return __zz_cib_::__zz_cib_FromRValueAbiType<::Example::Value<float>>(
    __zz_cib_MyHelper::GetFloat_8<__zz_cib_::__zz_cib_RValueAbiType_t<::Example::Value<float>>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}
}
