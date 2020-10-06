#include "A.h"
#include "value.h"


A::A(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

A::A(A&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

A::A()
  : A(__zz_cib_MyHelper::__zz_cib_new_0(
    ))
  {}

A::A(const ::A& __zz_cib_param0)
  : A(__zz_cib_MyHelper::__zz_cib_copy_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
  {}

A::~A() {
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete_2(
    h
  );
}

int A::setValue(const ::Value<int>& intVal) const {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::setValue_3<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(intVal)>(intVal)
    )
  );
}

float A::setValue(const ::Value<float>& floatVal) const {
  return __zz_cib_::__zz_cib_FromAbiType<float>(
    __zz_cib_MyHelper::setValue_4<__zz_cib_::__zz_cib_AbiType_t<float>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(floatVal)>(floatVal)
    )
  );
}

::Value<int> A::getIntValue() const {
  return __zz_cib_::__zz_cib_FromAbiType<::Value<int>>(
    __zz_cib_MyHelper::getIntValue_5<__zz_cib_::__zz_cib_AbiType_t<::Value<int>>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::Value<float> A::getFloatValue() const {
  return __zz_cib_::__zz_cib_FromAbiType<::Value<float>>(
    __zz_cib_MyHelper::getFloatValue_6<__zz_cib_::__zz_cib_AbiType_t<::Value<float>>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

