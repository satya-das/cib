#include "example.h"

namespace Example {
namespace Outer {
namespace Inner {

Example::Outer::Inner::A::A(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{}

Example::Outer::Inner::A::A(A&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

Example::Outer::Inner::A::A(const ::Example::Outer::Inner::A& __zz_cib_param0)
  : Example::Outer::Inner::A(__zz_cib_MyHelper::__zz_cib_copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
  {}

Example::Outer::Inner::A::~A() {
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete_1(
    h
  );
}

Example::Outer::Inner::A::A()
  : Example::Outer::Inner::A(__zz_cib_MyHelper::__zz_cib_new_2(
    ))
  {}

::Example::Int Example::Outer::Inner::A::i() const {
  return __zz_cib_::__zz_cib_FromAbiType<::Example::Int>(
    __zz_cib_MyHelper::i_3<__zz_cib_::__zz_cib_AbiType_t<::Example::Int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::Example::Outer::Inner::Float Example::Outer::Inner::A::f() const {
  return __zz_cib_::__zz_cib_FromAbiType<::Example::Outer::Inner::Float>(
    __zz_cib_MyHelper::f_4<__zz_cib_::__zz_cib_AbiType_t<::Example::Outer::Inner::Float>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

std::unique_ptr<Int> Example::Outer::Inner::A::pi() const {
  return __zz_cib_::__zz_cib_FromAbiType<std::unique_ptr<Int>>(
    __zz_cib_MyHelper::pi_5<__zz_cib_::__zz_cib_AbiType_t<std::unique_ptr<Int>>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}
}}}
