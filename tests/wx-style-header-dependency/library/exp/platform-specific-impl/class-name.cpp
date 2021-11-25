#include "../class-name.h"


wxClass::wxClass(__zz_cib_AbiType h)
  : ::wxClassBase(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class258(h))
  , __zz_cib_h_(h)
{}

wxClass::wxClass(wxClass&& rhs)
  : ::wxClassBase(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

wxClass::wxClass(const ::wxClass& __zz_cib_param0)
  : wxClass(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

wxClass::~wxClass() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

wxClass::wxClass()
  : wxClass(__zz_cib_MyHelper::__zz_cib_New_2())
{}

int wxClass::DoFunc() const {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::DoFunc_3<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

