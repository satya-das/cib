#include "podofo/doc/PdfFontConfigWrapper.h"

namespace PoDoFo {

PoDoFo::PdfFontConfigWrapper::PdfFontConfigWrapper(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfFontConfigWrapper::PdfFontConfigWrapper(PdfFontConfigWrapper&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfFontConfigWrapper::PdfFontConfigWrapper()
  : PoDoFo::PdfFontConfigWrapper(__zz_cib_MyHelper::__zz_cib_New_0())
{}

PoDoFo::PdfFontConfigWrapper::PdfFontConfigWrapper(const ::PoDoFo::PdfFontConfigWrapper& rhs)
  : PoDoFo::PdfFontConfigWrapper(__zz_cib_MyHelper::__zz_cib_Copy_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)))
{}

PoDoFo::PdfFontConfigWrapper::~PdfFontConfigWrapper() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_2(
    h
  );
}

void* PoDoFo::PdfFontConfigWrapper::GetFontConfig() {
  return __zz_cib_::__zz_cib_FromAbiType<void*>(
    __zz_cib_MyHelper::GetFontConfig_3<__zz_cib_::__zz_cib_AbiType_t<void*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const ::PoDoFo::PdfFontConfigWrapper& PoDoFo::PdfFontConfigWrapper::operator=(const ::PoDoFo::PdfFontConfigWrapper& rhs) {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfFontConfigWrapper&>(
    __zz_cib_MyHelper::__zz_cib_OperatorEqual_4<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfFontConfigWrapper&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}
}
