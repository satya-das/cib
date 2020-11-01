#include "podofo/base/PdfObject.h"
#include "podofo/doc/PdfAcroForm.h"
#include "podofo/doc/PdfDocument.h"

namespace PoDoFo {

PoDoFo::PdfAcroForm::PdfAcroForm(__zz_cib_AbiType h)
  : ::PoDoFo::PdfElement(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class418(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfAcroForm::PdfAcroForm(PdfAcroForm&& rhs)
  : ::PoDoFo::PdfElement(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfAcroForm::PdfAcroForm(const ::PoDoFo::PdfAcroForm& __zz_cib_param0)
  : PoDoFo::PdfAcroForm(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfAcroForm::PdfAcroForm(::PoDoFo::PdfDocument* pDoc, ::PoDoFo::EPdfAcroFormDefaulAppearance eDefaultAppearance)
  : PoDoFo::PdfAcroForm(__zz_cib_MyHelper::__zz_cib_New_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pDoc)>(std::move(pDoc)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(eDefaultAppearance)>(std::move(eDefaultAppearance))))
{}

PoDoFo::PdfAcroForm::PdfAcroForm(::PoDoFo::PdfDocument* pDoc, ::PoDoFo::PdfObject* pObject, ::PoDoFo::EPdfAcroFormDefaulAppearance eDefaultAppearance)
  : PoDoFo::PdfAcroForm(__zz_cib_MyHelper::__zz_cib_New_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pDoc)>(std::move(pDoc)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pObject)>(std::move(pObject)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(eDefaultAppearance)>(std::move(eDefaultAppearance))))
{}

PoDoFo::PdfAcroForm::~PdfAcroForm() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_3(
    h
  );
}

::PoDoFo::PdfDocument* PoDoFo::PdfAcroForm::GetDocument() {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDocument*>(
    __zz_cib_MyHelper::GetDocument_4<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfDocument*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfAcroForm::SetNeedAppearances(bool bNeedAppearances) {
    __zz_cib_MyHelper::SetNeedAppearances_5<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bNeedAppearances)>(std::move(bNeedAppearances))
    );
  }

bool PoDoFo::PdfAcroForm::GetNeedAppearances() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::GetNeedAppearances_6<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}
}
