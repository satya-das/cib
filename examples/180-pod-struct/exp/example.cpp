#include "example.h"


NonPod1::NonPod1(__zz_cib_::__zz_cib_HANDLE* h)
  : __zz_cib_h_(h)
{
  __zz_cib_::NonPod1::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

NonPod1::NonPod1(NonPod1&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_::NonPod1::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

NonPod1::NonPod1()
  : NonPod1(__zz_cib_::NonPod1::__zz_cib_Helper::__zz_cib_new())
{}

NonPod1::NonPod1(::NonPod1 const & __zz_cib_param0)
  : NonPod1(__zz_cib_::NonPod1::__zz_cib_Helper::__zz_cib_copy(__zz_cib_::NonPod1::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

NonPod1::~NonPod1() {
  auto h = __zz_cib_::NonPod1::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::NonPod1::__zz_cib_Helper::__zz_cib_delete(h);
}

NonPod2::NonPod2(__zz_cib_::__zz_cib_HANDLE* h)
  : __zz_cib_h_(h)
{
  __zz_cib_::NonPod2::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

NonPod2::NonPod2(NonPod2&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_::NonPod2::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

NonPod2::NonPod2()
  : NonPod2(__zz_cib_::NonPod2::__zz_cib_Helper::__zz_cib_new())
{}

NonPod2::NonPod2(::NonPod2 const & __zz_cib_param0)
  : NonPod2(__zz_cib_::NonPod2::__zz_cib_Helper::__zz_cib_copy(__zz_cib_::NonPod2::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

NonPod2::~NonPod2() {
  auto h = __zz_cib_::NonPod2::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::NonPod2::__zz_cib_Helper::__zz_cib_delete(h);
}

NonPod3::NonPod3(__zz_cib_::__zz_cib_HANDLE* h)
  : __zz_cib_h_(h)
{
  __zz_cib_::NonPod3::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

NonPod3::NonPod3(NonPod3&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_::NonPod3::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

NonPod3::NonPod3()
  : NonPod3(__zz_cib_::NonPod3::__zz_cib_Helper::__zz_cib_new())
{}

NonPod3::NonPod3(::NonPod3 const & __zz_cib_param0)
  : NonPod3(__zz_cib_::NonPod3::__zz_cib_Helper::__zz_cib_copy(__zz_cib_::NonPod3::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

NonPod3::~NonPod3() {
  auto h = __zz_cib_::NonPod3::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::NonPod3::__zz_cib_Helper::__zz_cib_delete(h);
}

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
  : A(__zz_cib_::A::__zz_cib_Helper::__zz_cib_copy(__zz_cib_::A::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

A::~A() {
  auto h = __zz_cib_::A::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::A::__zz_cib_Helper::__zz_cib_delete(h);
}

A::A()
  : A(__zz_cib_::A::__zz_cib_Helper::__zz_cib_new())
{}

void A::setPod(::Pod& p) {
  __zz_cib_::A::__zz_cib_Helper::setPod(__zz_cib_h_, &p);
}

void A::setPod(::Pod* p) {
  __zz_cib_::A::__zz_cib_Helper::setPod_4(__zz_cib_h_, p);
}

void A::setNonPod1(::NonPod1& n) {
  __zz_cib_::A::__zz_cib_Helper::setNonPod1(__zz_cib_h_, __zz_cib_::NonPod1::__zz_cib_Helper::__zz_cib_handle(n));
}

void A::setNonPod2(::NonPod2& n) {
  __zz_cib_::A::__zz_cib_Helper::setNonPod2(__zz_cib_h_, __zz_cib_::NonPod2::__zz_cib_Helper::__zz_cib_handle(n));
}

void A::setNonPod3(::NonPod3& n) {
  __zz_cib_::A::__zz_cib_Helper::setNonPod3(__zz_cib_h_, __zz_cib_::NonPod3::__zz_cib_Helper::__zz_cib_handle(n));
}
