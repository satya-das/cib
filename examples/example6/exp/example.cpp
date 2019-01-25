#include "example.h"


A::A(__zz_cib_::__zz_cib_HANDLE* h)
  : __zz_cib_h_(h)
{
  __zz_cib_::A::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

A::A(A&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_::A::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

A::A(::A const & __zz_cib_param0)
  : A(__zz_cib_::A::__zz_cib_Helper::__zz_cib_copy_0(__zz_cib_::A::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

A::~A() {
  auto h = __zz_cib_::A::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::A::__zz_cib_Helper::__zz_cib_delete_1(h);
  __zz_cib_::A::__zz_cib_Helper::__zz_cib_remove_proxy(h);
}

A::A(int i)
  : A(__zz_cib_::A::__zz_cib_Helper::__zz_cib_new_2(i))
{}

B::B(__zz_cib_::__zz_cib_HANDLE* h)
  : __zz_cib_h_(h)
{}

B::B(B&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

B::B()
  : B(__zz_cib_::B::__zz_cib_Helper::__zz_cib_new_0())
{}

B::B(::B const & __zz_cib_param0)
  : B(__zz_cib_::B::__zz_cib_Helper::__zz_cib_copy_1(__zz_cib_::B::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

B::~B() {
  auto h = __zz_cib_::B::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::B::__zz_cib_Helper::__zz_cib_delete_2(h);
}

void B::SetA(::A* pA) {
  __zz_cib_::B::__zz_cib_Helper::SetA_3(__zz_cib_h_, __zz_cib_::A::__zz_cib_Helper::__zz_cib_handle(pA));
}

::A* B::GetA() const {
  return __zz_cib_::A::__zz_cib_Helper::__zz_cib_from_handle(
    __zz_cib_::B::__zz_cib_Helper::GetA_4(__zz_cib_h_)
  );
}
