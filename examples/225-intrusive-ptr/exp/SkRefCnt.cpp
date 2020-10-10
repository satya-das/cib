#include "SkRefCnt.h"


SkRefCntBase::SkRefCntBase(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{}

SkRefCntBase::SkRefCntBase()
  : SkRefCntBase(__zz_cib_MyHelper::__zz_cib_New_0(
    ))
  {}

SkRefCntBase::~SkRefCntBase() {
auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

void SkRefCntBase::ref() const {
    __zz_cib_MyHelper::ref_2<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

void SkRefCntBase::unref() const {
    __zz_cib_MyHelper::unref_3<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

void SkRefCntBase::internal_dispose() const {
    __zz_cib_MyHelper::internal_dispose_4<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

