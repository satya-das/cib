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

A::A(const A& __zz_cib_param0)
  : A(__zz_cib_MyHelper::__zz_cib_copy(
        __zz_cib_::__zz_cib_ToAbiType<const A&>(__zz_cib_param0)))
  {}

A::~A() {
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete(
    h
  );
}

A::A(int i)
  : A(__zz_cib_MyHelper::__zz_cib_new(
        __zz_cib_::__zz_cib_ToAbiType<int>(i)))
  {}


B::B(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{}

B::B(B&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

B::B()
  : B(__zz_cib_MyHelper::__zz_cib_new(
    ))
  {}

B::B(const B& __zz_cib_param0)
  : B(__zz_cib_MyHelper::__zz_cib_copy(
        __zz_cib_::__zz_cib_ToAbiType<const B&>(__zz_cib_param0)))
  {}

B::~B() {
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete(
    h
  );
}

void B::SetA(A* pA) {
  __zz_cib_MyHelper::SetA<__zz_cib_::__zz_cib_RValueAbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<A*>(pA)
  );
}

::A* B::GetA() const {
  return __zz_cib_::__zz_cib_FromRValueAbiType<::A*>(
    __zz_cib_MyHelper::GetA<__zz_cib_::__zz_cib_RValueAbiType_t<::A*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

