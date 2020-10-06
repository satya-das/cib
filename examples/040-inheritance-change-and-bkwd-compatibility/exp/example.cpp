#include "example.h"


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

A::A(const ::A& __zz_cib_param0)
  : A(__zz_cib_MyHelper::__zz_cib_copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
  {}

A::A()
  : A(__zz_cib_MyHelper::__zz_cib_new_1(
    ))
  {}

int A::AnotherVirtFunc() {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::AnotherVirtFunc_4<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

int A::VirtFunc() {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::VirtFunc_2<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

int A::SomeFunc() {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::SomeFunc_5<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

A::~A() {
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete_3(
    h
  );
}


I1::I1(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

I1::I1(I1&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

I1::I1()
  : I1(__zz_cib_MyHelper::__zz_cib_new_0(
    ))
  {}

I1::I1(const ::I1& __zz_cib_param0)
  : I1(__zz_cib_MyHelper::__zz_cib_copy_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
  {}

int I1::F() {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::F_2<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

I1::~I1() {
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete_3(
    h
  );
}


I2::I2(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

I2::I2(I2&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

I2::I2()
  : I2(__zz_cib_MyHelper::__zz_cib_new_0(
    ))
  {}

I2::I2(const ::I2& __zz_cib_param0)
  : I2(__zz_cib_MyHelper::__zz_cib_copy_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
  {}

int I2::G() {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::G_2<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

I2::~I2() {
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete_3(
    h
  );
}


B::B(__zz_cib_AbiType h)
  : ::I1(__zz_cib_MyHelper::__zz_cib_cast_to___zz_cib_Class260(h))
  , ::A(__zz_cib_MyHelper::__zz_cib_cast_to___zz_cib_Class258(h))
  , ::I2(__zz_cib_MyHelper::__zz_cib_cast_to___zz_cib_Class261(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

B::B(B&& rhs)
  : ::I1(std::move(rhs))
  , ::A(std::move(rhs))
  , ::I2(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

B::B(const ::B& __zz_cib_param0)
  : B(__zz_cib_MyHelper::__zz_cib_copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
  {}

B::~B() {
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete_1(
    h
  );
}

B::B()
  : B(__zz_cib_MyHelper::__zz_cib_new_2(
    ))
  {}

int B::VirtFunc() {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::VirtFunc_3<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::B* B::Create() {
  return __zz_cib_::__zz_cib_FromAbiType<::B*>(
    __zz_cib_MyHelper::Create_4<__zz_cib_::__zz_cib_AbiType_t<::B*>>(

    )
  );
}

