#include "SkRefCnt.h"


SkRefCntBase::SkRefCntBase(__zz_cib_::__zz_cib_HANDLE* h)
  : __zz_cib_h_(h)
{
  __zz_cib_::SkRefCntBase::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

SkRefCntBase::SkRefCntBase()
  : SkRefCntBase(__zz_cib_::SkRefCntBase::__zz_cib_Helper::__zz_cib_new())
{}

SkRefCntBase::~SkRefCntBase() {
  auto h = __zz_cib_::SkRefCntBase::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::SkRefCntBase::__zz_cib_Helper::__zz_cib_delete(h);
}

void SkRefCntBase::ref() const {
  __zz_cib_::SkRefCntBase::__zz_cib_Helper::ref(__zz_cib_h_);
}

void SkRefCntBase::unref() const {
  __zz_cib_::SkRefCntBase::__zz_cib_Helper::unref(__zz_cib_h_);
}
