#include "example.h"

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

Example::A::A(const A& __zz_cib_param0)
  : Example::A(__zz_cib_MyHelper::__zz_cib_copy(
        __zz_cib_::__zz_cib_ToAbiType<const A&>(__zz_cib_param0)))
  {}

Example::A::~A() {
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete(
    h
  );
}

Example::A::A()
  : Example::A(__zz_cib_MyHelper::__zz_cib_new(
    ))
  {}

int Example::A::f() const {
  return __zz_cib_::__zz_cib_FromRValueAbiType<int>(
    __zz_cib_MyHelper::f<__zz_cib_::__zz_cib_RValueAbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}
}
