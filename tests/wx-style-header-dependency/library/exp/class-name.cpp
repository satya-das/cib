#include "class-name.h"


wxClassBase::wxClassBase(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{}

wxClassBase::wxClassBase(wxClassBase&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

wxClassBase::wxClassBase(const ::wxClassBase& __zz_cib_param0)
  : wxClassBase(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

wxClassBase::wxClassBase()
  : wxClassBase(__zz_cib_MyHelper::__zz_cib_New_1())
{}

wxClassBase::~wxClassBase() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_2(
    h
  );
}

int wxClassBase::Func() const {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::Func_3<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

int wxClassBase::DoFunc() const {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::DoFunc_4<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

