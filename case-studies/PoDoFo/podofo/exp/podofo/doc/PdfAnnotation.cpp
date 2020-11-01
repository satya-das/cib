#include "podofo/base/PdfArray.h"
#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfName.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfRect.h"
#include "podofo/base/PdfReference.h"
#include "podofo/base/PdfString.h"
#include "podofo/base/PdfVecObjects.h"
#include "podofo/doc/PdfAction.h"
#include "podofo/doc/PdfAnnotation.h"
#include "podofo/doc/PdfDestination.h"
#include "podofo/doc/PdfDocument.h"
#include "podofo/doc/PdfFileSpec.h"
#include "podofo/doc/PdfPage.h"
#include "podofo/doc/PdfXObject.h"

namespace PoDoFo {

PoDoFo::PdfAnnotation::PdfAnnotation(__zz_cib_AbiType h)
  : ::PoDoFo::PdfElement(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class418(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfAnnotation::PdfAnnotation(PdfAnnotation&& rhs)
  : ::PoDoFo::PdfElement(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfAnnotation::PdfAnnotation(const ::PoDoFo::PdfAnnotation& __zz_cib_param0)
  : PoDoFo::PdfAnnotation(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfAnnotation::PdfAnnotation(::PoDoFo::PdfPage* pPage, ::PoDoFo::EPdfAnnotation eAnnot, const ::PoDoFo::PdfRect& rRect, ::PoDoFo::PdfVecObjects* pParent)
  : PoDoFo::PdfAnnotation(__zz_cib_MyHelper::__zz_cib_New_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pPage)>(std::move(pPage)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(eAnnot)>(std::move(eAnnot)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rRect)>(rRect),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}

PoDoFo::PdfAnnotation::PdfAnnotation(::PoDoFo::PdfObject* pObject, ::PoDoFo::PdfPage* pPage)
  : PoDoFo::PdfAnnotation(__zz_cib_MyHelper::__zz_cib_New_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pObject)>(std::move(pObject)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pPage)>(std::move(pPage))))
{}

PoDoFo::PdfAnnotation::~PdfAnnotation() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_3(
    h
  );
}

void PoDoFo::PdfAnnotation::SetAppearanceStream(::PoDoFo::PdfXObject* pObject, ::PoDoFo::EPdfAnnotationAppearance eAppearance, const ::PoDoFo::PdfName& state) {
    __zz_cib_MyHelper::SetAppearanceStream_4<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pObject)>(std::move(pObject)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eAppearance)>(std::move(eAppearance)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(state)>(state)
    );
  }

bool PoDoFo::PdfAnnotation::HasAppearanceStream() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::HasAppearanceStream_5<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfRect PoDoFo::PdfAnnotation::GetRect() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfRect>(
    __zz_cib_MyHelper::GetRect_6<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfRect>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfAnnotation::SetRect(const ::PoDoFo::PdfRect& rRect) {
    __zz_cib_MyHelper::SetRect_7<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rRect)>(rRect)
    );
  }

void PoDoFo::PdfAnnotation::SetFlags(::PoDoFo::pdf_uint32 uiFlags) {
    __zz_cib_MyHelper::SetFlags_8<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(uiFlags)>(std::move(uiFlags))
    );
  }

::PoDoFo::pdf_uint32 PoDoFo::PdfAnnotation::GetFlags() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_uint32>(
    __zz_cib_MyHelper::GetFlags_9<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_uint32>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfAnnotation::SetBorderStyle(double dHCorner, double dVCorner, double dWidth) {
    __zz_cib_MyHelper::SetBorderStyle_10<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dHCorner)>(std::move(dHCorner)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dVCorner)>(std::move(dVCorner)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dWidth)>(std::move(dWidth))
    );
  }

void PoDoFo::PdfAnnotation::SetBorderStyle(double dHCorner, double dVCorner, double dWidth, const ::PoDoFo::PdfArray& rStrokeStyle) {
    __zz_cib_MyHelper::SetBorderStyle_11<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dHCorner)>(std::move(dHCorner)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dVCorner)>(std::move(dVCorner)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dWidth)>(std::move(dWidth)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rStrokeStyle)>(rStrokeStyle)
    );
  }

void PoDoFo::PdfAnnotation::SetTitle(const ::PoDoFo::PdfString& sTitle) {
    __zz_cib_MyHelper::SetTitle_12<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(sTitle)>(sTitle)
    );
  }

::PoDoFo::PdfString PoDoFo::PdfAnnotation::GetTitle() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfString>(
    __zz_cib_MyHelper::GetTitle_13<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfString>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfAnnotation::SetContents(const ::PoDoFo::PdfString& sContents) {
    __zz_cib_MyHelper::SetContents_14<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(sContents)>(sContents)
    );
  }

::PoDoFo::PdfString PoDoFo::PdfAnnotation::GetContents() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfString>(
    __zz_cib_MyHelper::GetContents_15<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfString>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfAnnotation::SetDestination(const ::PoDoFo::PdfDestination& rDestination) {
    __zz_cib_MyHelper::SetDestination_16<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rDestination)>(rDestination)
    );
  }

::PoDoFo::PdfDestination PoDoFo::PdfAnnotation::GetDestination(::PoDoFo::PdfDocument* pDoc) const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDestination>(
    __zz_cib_MyHelper::GetDestination_17<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfDestination>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pDoc)>(std::move(pDoc))
    )
  );
}

bool PoDoFo::PdfAnnotation::HasDestination() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::HasDestination_18<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfAnnotation::SetAction(const ::PoDoFo::PdfAction& rAction) {
    __zz_cib_MyHelper::SetAction_19<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rAction)>(rAction)
    );
  }

::PoDoFo::PdfAction* PoDoFo::PdfAnnotation::GetAction() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfAction*>(
    __zz_cib_MyHelper::GetAction_20<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfAction*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfAnnotation::HasAction() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::HasAction_21<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfAnnotation::SetOpen(bool b) {
    __zz_cib_MyHelper::SetOpen_22<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(b)>(std::move(b))
    );
  }

bool PoDoFo::PdfAnnotation::GetOpen() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::GetOpen_23<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfAnnotation::HasFileAttachement() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::HasFileAttachement_24<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfAnnotation::SetFileAttachement(const ::PoDoFo::PdfFileSpec& rFileSpec) {
    __zz_cib_MyHelper::SetFileAttachement_25<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rFileSpec)>(rFileSpec)
    );
  }

::PoDoFo::PdfFileSpec* PoDoFo::PdfAnnotation::GetFileAttachement() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfFileSpec*>(
    __zz_cib_MyHelper::GetFileAttachement_26<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfFileSpec*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfArray PoDoFo::PdfAnnotation::GetQuadPoints() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfArray>(
    __zz_cib_MyHelper::GetQuadPoints_27<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfArray>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfAnnotation::SetQuadPoints(const ::PoDoFo::PdfArray& rQuadPoints) {
    __zz_cib_MyHelper::SetQuadPoints_28<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rQuadPoints)>(rQuadPoints)
    );
  }

::PoDoFo::PdfArray PoDoFo::PdfAnnotation::GetColor() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfArray>(
    __zz_cib_MyHelper::GetColor_29<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfArray>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfAnnotation::SetColor(double r, double g, double b) {
    __zz_cib_MyHelper::SetColor_30<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(r)>(std::move(r)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(g)>(std::move(g)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(b)>(std::move(b))
    );
  }

void PoDoFo::PdfAnnotation::SetColor(double c, double m, double y, double k) {
    __zz_cib_MyHelper::SetColor_31<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(c)>(std::move(c)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(m)>(std::move(m)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(y)>(std::move(y)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(k)>(std::move(k))
    );
  }

void PoDoFo::PdfAnnotation::SetColor(double gray) {
    __zz_cib_MyHelper::SetColor_32<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(gray)>(std::move(gray))
    );
  }

void PoDoFo::PdfAnnotation::SetColor() {
    __zz_cib_MyHelper::SetColor_33<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

::PoDoFo::EPdfAnnotation PoDoFo::PdfAnnotation::GetType() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfAnnotation>(
    __zz_cib_MyHelper::GetType_34<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::EPdfAnnotation>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfPage* PoDoFo::PdfAnnotation::GetPage() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfPage*>(
    __zz_cib_MyHelper::GetPage_35<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfPage*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}
}
