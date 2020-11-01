#include "podofo/base/PdfData.h"
#include "podofo/base/PdfDate.h"
#include "podofo/base/PdfName.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfRect.h"
#include "podofo/base/PdfString.h"
#include "podofo/doc/PdfAcroForm.h"
#include "podofo/doc/PdfAnnotation.h"
#include "podofo/doc/PdfDocument.h"
#include "podofo/doc/PdfPage.h"
#include "podofo/doc/PdfSignatureField.h"
#include "podofo/doc/PdfXObject.h"

namespace PoDoFo {

PoDoFo::PdfSignatureField::PdfSignatureField(__zz_cib_AbiType h)
  : ::PoDoFo::PdfField(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class421(h))
  , __zz_cib_h_(h)
{}

PoDoFo::PdfSignatureField::PdfSignatureField(PdfSignatureField&& rhs)
  : ::PoDoFo::PdfField(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

PoDoFo::PdfSignatureField::PdfSignatureField(const ::PoDoFo::PdfSignatureField& __zz_cib_param0)
  : PoDoFo::PdfSignatureField(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfSignatureField::~PdfSignatureField() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

void PoDoFo::PdfSignatureField::Init() {
    __zz_cib_MyHelper::Init_2<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

PoDoFo::PdfSignatureField::PdfSignatureField(::PoDoFo::PdfPage* pPage, const ::PoDoFo::PdfRect& rRect, ::PoDoFo::PdfDocument* pDoc)
  : PoDoFo::PdfSignatureField(__zz_cib_MyHelper::__zz_cib_New_3(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pPage)>(std::move(pPage)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rRect)>(rRect),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pDoc)>(std::move(pDoc))))
{}

PoDoFo::PdfSignatureField::PdfSignatureField(::PoDoFo::PdfAnnotation* pWidget, ::PoDoFo::PdfAcroForm* pParent, ::PoDoFo::PdfDocument* pDoc, bool bInit)
  : PoDoFo::PdfSignatureField(__zz_cib_MyHelper::__zz_cib_New_4(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pWidget)>(std::move(pWidget)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pDoc)>(std::move(pDoc)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bInit)>(std::move(bInit))))
{}

PoDoFo::PdfSignatureField::PdfSignatureField(::PoDoFo::PdfAnnotation* pWidget)
  : PoDoFo::PdfSignatureField(__zz_cib_MyHelper::__zz_cib_New_5(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pWidget)>(std::move(pWidget))))
{}

void PoDoFo::PdfSignatureField::SetAppearanceStream(::PoDoFo::PdfXObject* pObject, ::PoDoFo::EPdfAnnotationAppearance eAppearance, const ::PoDoFo::PdfName& state) {
    __zz_cib_MyHelper::SetAppearanceStream_6<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pObject)>(std::move(pObject)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eAppearance)>(std::move(eAppearance)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(state)>(state)
    );
  }

void PoDoFo::PdfSignatureField::SetSignature(const ::PoDoFo::PdfData& signatureData) {
    __zz_cib_MyHelper::SetSignature_7<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(signatureData)>(signatureData)
    );
  }

void PoDoFo::PdfSignatureField::SetSignatureReason(const ::PoDoFo::PdfString& rsText) {
    __zz_cib_MyHelper::SetSignatureReason_8<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rsText)>(rsText)
    );
  }

void PoDoFo::PdfSignatureField::SetSignatureLocation(const ::PoDoFo::PdfString& rsText) {
    __zz_cib_MyHelper::SetSignatureLocation_9<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rsText)>(rsText)
    );
  }

void PoDoFo::PdfSignatureField::SetSignatureCreator(const ::PoDoFo::PdfName& creator) {
    __zz_cib_MyHelper::SetSignatureCreator_10<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(creator)>(creator)
    );
  }

void PoDoFo::PdfSignatureField::SetSignatureDate(const ::PoDoFo::PdfDate& sigDate) {
    __zz_cib_MyHelper::SetSignatureDate_11<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(sigDate)>(sigDate)
    );
  }

void PoDoFo::PdfSignatureField::AddCertificationReference(::PoDoFo::PdfObject* pDocumentCatalog, ::PoDoFo::PdfSignatureField::EPdfCertPermission perm) {
    __zz_cib_MyHelper::AddCertificationReference_12<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pDocumentCatalog)>(std::move(pDocumentCatalog)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(perm)>(std::move(perm))
    );
  }

::PoDoFo::PdfObject* PoDoFo::PdfSignatureField::GetSignatureObject() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::GetSignatureObject_13<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfSignatureField::EnsureSignatureObject() {
    __zz_cib_MyHelper::EnsureSignatureObject_14<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }
}
