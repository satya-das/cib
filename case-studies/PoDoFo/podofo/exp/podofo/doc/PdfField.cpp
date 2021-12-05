#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfName.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfRect.h"
#include "podofo/base/PdfReference.h"
#include "podofo/base/PdfString.h"
#include "podofo/doc/PdfAcroForm.h"
#include "podofo/doc/PdfAction.h"
#include "podofo/doc/PdfAnnotation.h"
#include "podofo/doc/PdfDocument.h"
#include "podofo/doc/PdfField.h"
#include "podofo/doc/PdfPage.h"
#include "podofo/doc/PdfStreamedDocument.h"
#include "podofo/doc/PdfXObject.h"

namespace PoDoFo {

PoDoFo::PdfField::PdfField(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfField::PdfField(PdfField&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfField::PdfField(::PoDoFo::EPdfField eField, ::PoDoFo::PdfAnnotation* pWidget, ::PoDoFo::PdfAcroForm* pParent)
  : PoDoFo::PdfField(__zz_cib_MyHelper::__zz_cib_New_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(eField)>(std::move(eField)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pWidget)>(std::move(pWidget)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}

PoDoFo::PdfField::PdfField(::PoDoFo::EPdfField eField, ::PoDoFo::PdfPage* pPage, const ::PoDoFo::PdfRect& rRect, ::PoDoFo::PdfAcroForm* pParent)
  : PoDoFo::PdfField(__zz_cib_MyHelper::__zz_cib_New_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(eField)>(std::move(eField)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pPage)>(std::move(pPage)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rRect)>(rRect),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}

PoDoFo::PdfField::PdfField(::PoDoFo::EPdfField eField, ::PoDoFo::PdfPage* pPage, const ::PoDoFo::PdfRect& rRect, ::PoDoFo::PdfDocument* pDoc)
  : PoDoFo::PdfField(__zz_cib_MyHelper::__zz_cib_New_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(eField)>(std::move(eField)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pPage)>(std::move(pPage)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rRect)>(rRect),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pDoc)>(std::move(pDoc))))
{}

PoDoFo::PdfField::PdfField(::PoDoFo::EPdfField eField, ::PoDoFo::PdfPage* pPage, const ::PoDoFo::PdfRect& rRect, ::PoDoFo::PdfStreamedDocument* pDoc)
  : PoDoFo::PdfField(__zz_cib_MyHelper::__zz_cib_New_3(
        __zz_cib_::__zz_cib_ToAbiType<decltype(eField)>(std::move(eField)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pPage)>(std::move(pPage)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rRect)>(rRect),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pDoc)>(std::move(pDoc))))
{}

PoDoFo::PdfField::PdfField(::PoDoFo::EPdfField eField, ::PoDoFo::PdfAnnotation* pWidget, ::PoDoFo::PdfAcroForm* pParent, ::PoDoFo::PdfDocument* pDoc)
  : PoDoFo::PdfField(__zz_cib_MyHelper::__zz_cib_New_4(
        __zz_cib_::__zz_cib_ToAbiType<decltype(eField)>(std::move(eField)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pWidget)>(std::move(pWidget)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pDoc)>(std::move(pDoc))))
{}

PoDoFo::PdfField::PdfField(::PoDoFo::EPdfField eField, ::PoDoFo::PdfPage* pPage, const ::PoDoFo::PdfRect& rRect, ::PoDoFo::PdfDocument* pDoc, bool bDefaultApperance)
  : PoDoFo::PdfField(__zz_cib_MyHelper::__zz_cib_New_5(
        __zz_cib_::__zz_cib_ToAbiType<decltype(eField)>(std::move(eField)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pPage)>(std::move(pPage)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rRect)>(rRect),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pDoc)>(std::move(pDoc)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bDefaultApperance)>(std::move(bDefaultApperance))))
{}

void PoDoFo::PdfField::SetFieldFlag(long lValue, bool bSet) {
    __zz_cib_MyHelper::SetFieldFlag_6<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lValue)>(std::move(lValue)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bSet)>(std::move(bSet))
    );
  }

bool PoDoFo::PdfField::GetFieldFlag(long lValue, bool bDefault) const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::GetFieldFlag_7<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lValue)>(std::move(lValue)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bDefault)>(std::move(bDefault))
    )
  );
}

::PoDoFo::PdfObject* PoDoFo::PdfField::GetAppearanceCharacteristics(bool bCreate) const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::GetAppearanceCharacteristics_8<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bCreate)>(std::move(bCreate))
    )
  );
}

PoDoFo::PdfField::PdfField(::PoDoFo::PdfObject* pObject, ::PoDoFo::PdfAnnotation* pWidget)
  : PoDoFo::PdfField(__zz_cib_MyHelper::__zz_cib_New_9(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pObject)>(std::move(pObject)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pWidget)>(std::move(pWidget))))
{}

PoDoFo::PdfField::PdfField(const ::PoDoFo::PdfField& rhs)
  : PoDoFo::PdfField(__zz_cib_MyHelper::__zz_cib_Copy_10(
        __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)))
{}

PoDoFo::PdfField::~PdfField() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_11(
    h
  );
}

::PoDoFo::PdfPage* PoDoFo::PdfField::GetPage() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfPage*>(
    __zz_cib_MyHelper::GetPage_12<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfPage*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfField::SetHighlightingMode(::PoDoFo::EPdfHighlightingMode eMode) {
    __zz_cib_MyHelper::SetHighlightingMode_13<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eMode)>(std::move(eMode))
    );
  }

::PoDoFo::EPdfHighlightingMode PoDoFo::PdfField::GetHighlightingMode() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfHighlightingMode>(
    __zz_cib_MyHelper::GetHighlightingMode_14<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::EPdfHighlightingMode>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfField::SetBorderColorTransparent() {
    __zz_cib_MyHelper::SetBorderColorTransparent_15<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

void PoDoFo::PdfField::SetBorderColor(double dGray) {
    __zz_cib_MyHelper::SetBorderColor_16<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dGray)>(std::move(dGray))
    );
  }

void PoDoFo::PdfField::SetBorderColor(double dRed, double dGreen, double dBlue) {
    __zz_cib_MyHelper::SetBorderColor_17<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dRed)>(std::move(dRed)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dGreen)>(std::move(dGreen)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dBlue)>(std::move(dBlue))
    );
  }

void PoDoFo::PdfField::SetBorderColor(double dCyan, double dMagenta, double dYellow, double dBlack) {
    __zz_cib_MyHelper::SetBorderColor_18<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dCyan)>(std::move(dCyan)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dMagenta)>(std::move(dMagenta)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dYellow)>(std::move(dYellow)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dBlack)>(std::move(dBlack))
    );
  }

void PoDoFo::PdfField::SetBackgroundColorTransparent() {
    __zz_cib_MyHelper::SetBackgroundColorTransparent_19<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

void PoDoFo::PdfField::SetBackgroundColor(double dGray) {
    __zz_cib_MyHelper::SetBackgroundColor_20<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dGray)>(std::move(dGray))
    );
  }

void PoDoFo::PdfField::SetBackgroundColor(double dRed, double dGreen, double dBlue) {
    __zz_cib_MyHelper::SetBackgroundColor_21<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dRed)>(std::move(dRed)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dGreen)>(std::move(dGreen)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dBlue)>(std::move(dBlue))
    );
  }

void PoDoFo::PdfField::SetBackgroundColor(double dCyan, double dMagenta, double dYellow, double dBlack) {
    __zz_cib_MyHelper::SetBackgroundColor_22<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dCyan)>(std::move(dCyan)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dMagenta)>(std::move(dMagenta)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dYellow)>(std::move(dYellow)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dBlack)>(std::move(dBlack))
    );
  }

void PoDoFo::PdfField::SetFieldName(const ::PoDoFo::PdfString& rsName) {
    __zz_cib_MyHelper::SetFieldName_23<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rsName)>(rsName)
    );
  }

::PoDoFo::PdfString PoDoFo::PdfField::GetFieldName() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfString>(
    __zz_cib_MyHelper::GetFieldName_24<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfString>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfField::SetAlternateName(const ::PoDoFo::PdfString& rsName) {
    __zz_cib_MyHelper::SetAlternateName_25<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rsName)>(rsName)
    );
  }

::PoDoFo::PdfString PoDoFo::PdfField::GetAlternateName() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfString>(
    __zz_cib_MyHelper::GetAlternateName_26<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfString>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfField::SetMappingName(const ::PoDoFo::PdfString& rsName) {
    __zz_cib_MyHelper::SetMappingName_27<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rsName)>(rsName)
    );
  }

::PoDoFo::PdfString PoDoFo::PdfField::GetMappingName() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfString>(
    __zz_cib_MyHelper::GetMappingName_28<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfString>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfField::SetReadOnly(bool bReadOnly) {
    __zz_cib_MyHelper::SetReadOnly_29<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bReadOnly)>(std::move(bReadOnly))
    );
  }

bool PoDoFo::PdfField::IsReadOnly() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsReadOnly_30<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfField::SetRequired(bool bRequired) {
    __zz_cib_MyHelper::SetRequired_31<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bRequired)>(std::move(bRequired))
    );
  }

bool PoDoFo::PdfField::IsRequired() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsRequired_32<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfField::SetExport(bool bExport) {
    __zz_cib_MyHelper::SetExport_33<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bExport)>(std::move(bExport))
    );
  }

bool PoDoFo::PdfField::IsExport() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsExport_34<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfField::SetMouseEnterAction(const ::PoDoFo::PdfAction& rAction) {
    __zz_cib_MyHelper::SetMouseEnterAction_35<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rAction)>(rAction)
    );
  }

void PoDoFo::PdfField::SetMouseLeaveAction(const ::PoDoFo::PdfAction& rAction) {
    __zz_cib_MyHelper::SetMouseLeaveAction_36<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rAction)>(rAction)
    );
  }

void PoDoFo::PdfField::SetMouseDownAction(const ::PoDoFo::PdfAction& rAction) {
    __zz_cib_MyHelper::SetMouseDownAction_37<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rAction)>(rAction)
    );
  }

void PoDoFo::PdfField::SetMouseUpAction(const ::PoDoFo::PdfAction& rAction) {
    __zz_cib_MyHelper::SetMouseUpAction_38<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rAction)>(rAction)
    );
  }

void PoDoFo::PdfField::SetFocusEnterAction(const ::PoDoFo::PdfAction& rAction) {
    __zz_cib_MyHelper::SetFocusEnterAction_39<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rAction)>(rAction)
    );
  }

void PoDoFo::PdfField::SetFocusLeaveAction(const ::PoDoFo::PdfAction& rAction) {
    __zz_cib_MyHelper::SetFocusLeaveAction_40<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rAction)>(rAction)
    );
  }

void PoDoFo::PdfField::SetPageOpenAction(const ::PoDoFo::PdfAction& rAction) {
    __zz_cib_MyHelper::SetPageOpenAction_41<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rAction)>(rAction)
    );
  }

void PoDoFo::PdfField::SetPageCloseAction(const ::PoDoFo::PdfAction& rAction) {
    __zz_cib_MyHelper::SetPageCloseAction_42<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rAction)>(rAction)
    );
  }

void PoDoFo::PdfField::SetPageVisibleAction(const ::PoDoFo::PdfAction& rAction) {
    __zz_cib_MyHelper::SetPageVisibleAction_43<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rAction)>(rAction)
    );
  }

void PoDoFo::PdfField::SetPageInvisibleAction(const ::PoDoFo::PdfAction& rAction) {
    __zz_cib_MyHelper::SetPageInvisibleAction_44<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rAction)>(rAction)
    );
  }

void PoDoFo::PdfField::SetKeystrokeAction(const ::PoDoFo::PdfAction& rAction) {
    __zz_cib_MyHelper::SetKeystrokeAction_45<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rAction)>(rAction)
    );
  }

void PoDoFo::PdfField::SetValidateAction(const ::PoDoFo::PdfAction& rAction) {
    __zz_cib_MyHelper::SetValidateAction_46<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rAction)>(rAction)
    );
  }

::PoDoFo::EPdfField PoDoFo::PdfField::GetType() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfField>(
    __zz_cib_MyHelper::GetType_47<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::EPdfField>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfAnnotation* PoDoFo::PdfField::GetWidgetAnnotation() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfAnnotation*>(
    __zz_cib_MyHelper::GetWidgetAnnotation_48<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfAnnotation*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfObject* PoDoFo::PdfField::GetFieldObject() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::GetFieldObject_49<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}
}
namespace PoDoFo {

PoDoFo::PdfButton::PdfButton(__zz_cib_AbiType h)
  : ::PoDoFo::PdfField(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class421(h))
  , __zz_cib_h_(h)
{}

PoDoFo::PdfButton::PdfButton(PdfButton&& rhs)
  : ::PoDoFo::PdfField(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

PoDoFo::PdfButton::PdfButton(const ::PoDoFo::PdfButton& __zz_cib_param0)
  : PoDoFo::PdfButton(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfButton::~PdfButton() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

PoDoFo::PdfButton::PdfButton(::PoDoFo::EPdfField eField, ::PoDoFo::PdfAnnotation* pWidget, ::PoDoFo::PdfAcroForm* pParent)
  : PoDoFo::PdfButton(__zz_cib_MyHelper::__zz_cib_New_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(eField)>(std::move(eField)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pWidget)>(std::move(pWidget)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}

PoDoFo::PdfButton::PdfButton(::PoDoFo::EPdfField eField, ::PoDoFo::PdfPage* pPage, const ::PoDoFo::PdfRect& rRect, ::PoDoFo::PdfAcroForm* pParent)
  : PoDoFo::PdfButton(__zz_cib_MyHelper::__zz_cib_New_3(
        __zz_cib_::__zz_cib_ToAbiType<decltype(eField)>(std::move(eField)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pPage)>(std::move(pPage)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rRect)>(rRect),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}

PoDoFo::PdfButton::PdfButton(::PoDoFo::EPdfField eField, ::PoDoFo::PdfPage* pPage, const ::PoDoFo::PdfRect& rRect, ::PoDoFo::PdfDocument* pDoc)
  : PoDoFo::PdfButton(__zz_cib_MyHelper::__zz_cib_New_4(
        __zz_cib_::__zz_cib_ToAbiType<decltype(eField)>(std::move(eField)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pPage)>(std::move(pPage)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rRect)>(rRect),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pDoc)>(std::move(pDoc))))
{}

PoDoFo::PdfButton::PdfButton(::PoDoFo::EPdfField eField, ::PoDoFo::PdfPage* pPage, const ::PoDoFo::PdfRect& rRect, ::PoDoFo::PdfStreamedDocument* pDoc)
  : PoDoFo::PdfButton(__zz_cib_MyHelper::__zz_cib_New_5(
        __zz_cib_::__zz_cib_ToAbiType<decltype(eField)>(std::move(eField)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pPage)>(std::move(pPage)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rRect)>(rRect),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pDoc)>(std::move(pDoc))))
{}

PoDoFo::PdfButton::PdfButton(const ::PoDoFo::PdfField& rhs)
  : PoDoFo::PdfButton(__zz_cib_MyHelper::__zz_cib_New_6(
        __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)))
{}

bool PoDoFo::PdfButton::IsPushButton() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsPushButton_7<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfButton::IsCheckBox() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsCheckBox_8<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfButton::IsRadioButton() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsRadioButton_9<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfButton::SetCaption(const ::PoDoFo::PdfString& rsText) {
    __zz_cib_MyHelper::SetCaption_10<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rsText)>(rsText)
    );
  }

const ::PoDoFo::PdfString PoDoFo::PdfButton::GetCaption() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString>(
    __zz_cib_MyHelper::GetCaption_11<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfString>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}
}
namespace PoDoFo {

PoDoFo::PdfPushButton::PdfPushButton(__zz_cib_AbiType h)
  : ::PoDoFo::PdfButton(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class422(h))
  , __zz_cib_h_(h)
{}

PoDoFo::PdfPushButton::PdfPushButton(PdfPushButton&& rhs)
  : ::PoDoFo::PdfButton(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

PoDoFo::PdfPushButton::PdfPushButton(const ::PoDoFo::PdfPushButton& __zz_cib_param0)
  : PoDoFo::PdfPushButton(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfPushButton::~PdfPushButton() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

PoDoFo::PdfPushButton::PdfPushButton(::PoDoFo::PdfAnnotation* pWidget, ::PoDoFo::PdfAcroForm* pParent)
  : PoDoFo::PdfPushButton(__zz_cib_MyHelper::__zz_cib_New_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pWidget)>(std::move(pWidget)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}

PoDoFo::PdfPushButton::PdfPushButton(::PoDoFo::PdfPage* pPage, const ::PoDoFo::PdfRect& rRect, ::PoDoFo::PdfAcroForm* pParent)
  : PoDoFo::PdfPushButton(__zz_cib_MyHelper::__zz_cib_New_3(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pPage)>(std::move(pPage)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rRect)>(rRect),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}

PoDoFo::PdfPushButton::PdfPushButton(::PoDoFo::PdfPage* pPage, const ::PoDoFo::PdfRect& rRect, ::PoDoFo::PdfDocument* pDoc)
  : PoDoFo::PdfPushButton(__zz_cib_MyHelper::__zz_cib_New_4(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pPage)>(std::move(pPage)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rRect)>(rRect),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pDoc)>(std::move(pDoc))))
{}

PoDoFo::PdfPushButton::PdfPushButton(::PoDoFo::PdfPage* pPage, const ::PoDoFo::PdfRect& rRect, ::PoDoFo::PdfStreamedDocument* pDoc)
  : PoDoFo::PdfPushButton(__zz_cib_MyHelper::__zz_cib_New_5(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pPage)>(std::move(pPage)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rRect)>(rRect),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pDoc)>(std::move(pDoc))))
{}

PoDoFo::PdfPushButton::PdfPushButton(const ::PoDoFo::PdfField& rhs)
  : PoDoFo::PdfPushButton(__zz_cib_MyHelper::__zz_cib_New_6(
        __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)))
{}

void PoDoFo::PdfPushButton::SetRolloverCaption(const ::PoDoFo::PdfString& rsText) {
    __zz_cib_MyHelper::SetRolloverCaption_7<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rsText)>(rsText)
    );
  }

const ::PoDoFo::PdfString PoDoFo::PdfPushButton::GetRolloverCaption() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString>(
    __zz_cib_MyHelper::GetRolloverCaption_8<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfString>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfPushButton::SetAlternateCaption(const ::PoDoFo::PdfString& rsText) {
    __zz_cib_MyHelper::SetAlternateCaption_9<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rsText)>(rsText)
    );
  }

const ::PoDoFo::PdfString PoDoFo::PdfPushButton::GetAlternateCaption() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString>(
    __zz_cib_MyHelper::GetAlternateCaption_10<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfString>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}
}
namespace PoDoFo {

PoDoFo::PdfCheckBox::PdfCheckBox(__zz_cib_AbiType h)
  : ::PoDoFo::PdfButton(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class422(h))
  , __zz_cib_h_(h)
{}

PoDoFo::PdfCheckBox::PdfCheckBox(PdfCheckBox&& rhs)
  : ::PoDoFo::PdfButton(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

PoDoFo::PdfCheckBox::PdfCheckBox(const ::PoDoFo::PdfCheckBox& __zz_cib_param0)
  : PoDoFo::PdfCheckBox(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfCheckBox::~PdfCheckBox() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

PoDoFo::PdfCheckBox::PdfCheckBox(::PoDoFo::PdfAnnotation* pWidget, ::PoDoFo::PdfAcroForm* pParent)
  : PoDoFo::PdfCheckBox(__zz_cib_MyHelper::__zz_cib_New_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pWidget)>(std::move(pWidget)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}

PoDoFo::PdfCheckBox::PdfCheckBox(::PoDoFo::PdfPage* pPage, const ::PoDoFo::PdfRect& rRect, ::PoDoFo::PdfAcroForm* pParent)
  : PoDoFo::PdfCheckBox(__zz_cib_MyHelper::__zz_cib_New_3(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pPage)>(std::move(pPage)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rRect)>(rRect),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}

PoDoFo::PdfCheckBox::PdfCheckBox(::PoDoFo::PdfPage* pPage, const ::PoDoFo::PdfRect& rRect, ::PoDoFo::PdfDocument* pDoc)
  : PoDoFo::PdfCheckBox(__zz_cib_MyHelper::__zz_cib_New_4(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pPage)>(std::move(pPage)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rRect)>(rRect),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pDoc)>(std::move(pDoc))))
{}

PoDoFo::PdfCheckBox::PdfCheckBox(::PoDoFo::PdfPage* pPage, const ::PoDoFo::PdfRect& rRect, ::PoDoFo::PdfStreamedDocument* pDoc)
  : PoDoFo::PdfCheckBox(__zz_cib_MyHelper::__zz_cib_New_5(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pPage)>(std::move(pPage)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rRect)>(rRect),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pDoc)>(std::move(pDoc))))
{}

PoDoFo::PdfCheckBox::PdfCheckBox(const ::PoDoFo::PdfField& rhs)
  : PoDoFo::PdfCheckBox(__zz_cib_MyHelper::__zz_cib_New_6(
        __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)))
{}

void PoDoFo::PdfCheckBox::SetAppearanceChecked(const ::PoDoFo::PdfXObject& rXObject) {
    __zz_cib_MyHelper::SetAppearanceChecked_7<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rXObject)>(rXObject)
    );
  }

void PoDoFo::PdfCheckBox::SetAppearanceUnchecked(const ::PoDoFo::PdfXObject& rXObject) {
    __zz_cib_MyHelper::SetAppearanceUnchecked_8<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rXObject)>(rXObject)
    );
  }

void PoDoFo::PdfCheckBox::SetChecked(bool bChecked) {
    __zz_cib_MyHelper::SetChecked_9<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bChecked)>(std::move(bChecked))
    );
  }

bool PoDoFo::PdfCheckBox::IsChecked() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsChecked_10<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}
}
namespace PoDoFo {

PoDoFo::PdfTextField::PdfTextField(__zz_cib_AbiType h)
  : ::PoDoFo::PdfField(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class421(h))
  , __zz_cib_h_(h)
{}

PoDoFo::PdfTextField::PdfTextField(PdfTextField&& rhs)
  : ::PoDoFo::PdfField(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

PoDoFo::PdfTextField::PdfTextField(const ::PoDoFo::PdfTextField& __zz_cib_param0)
  : PoDoFo::PdfTextField(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfTextField::~PdfTextField() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

PoDoFo::PdfTextField::PdfTextField(::PoDoFo::PdfAnnotation* pWidget, ::PoDoFo::PdfAcroForm* pParent)
  : PoDoFo::PdfTextField(__zz_cib_MyHelper::__zz_cib_New_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pWidget)>(std::move(pWidget)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}

PoDoFo::PdfTextField::PdfTextField(::PoDoFo::PdfPage* pPage, const ::PoDoFo::PdfRect& rRect, ::PoDoFo::PdfAcroForm* pParent)
  : PoDoFo::PdfTextField(__zz_cib_MyHelper::__zz_cib_New_3(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pPage)>(std::move(pPage)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rRect)>(rRect),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}

PoDoFo::PdfTextField::PdfTextField(::PoDoFo::PdfPage* pPage, const ::PoDoFo::PdfRect& rRect, ::PoDoFo::PdfDocument* pDoc)
  : PoDoFo::PdfTextField(__zz_cib_MyHelper::__zz_cib_New_4(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pPage)>(std::move(pPage)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rRect)>(rRect),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pDoc)>(std::move(pDoc))))
{}

PoDoFo::PdfTextField::PdfTextField(::PoDoFo::PdfPage* pPage, const ::PoDoFo::PdfRect& rRect, ::PoDoFo::PdfStreamedDocument* pDoc)
  : PoDoFo::PdfTextField(__zz_cib_MyHelper::__zz_cib_New_5(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pPage)>(std::move(pPage)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rRect)>(rRect),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pDoc)>(std::move(pDoc))))
{}

PoDoFo::PdfTextField::PdfTextField(const ::PoDoFo::PdfField& rhs)
  : PoDoFo::PdfTextField(__zz_cib_MyHelper::__zz_cib_New_6(
        __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)))
{}

void PoDoFo::PdfTextField::SetText(const ::PoDoFo::PdfString& rsText) {
    __zz_cib_MyHelper::SetText_7<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rsText)>(rsText)
    );
  }

::PoDoFo::PdfString PoDoFo::PdfTextField::GetText() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfString>(
    __zz_cib_MyHelper::GetText_8<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfString>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfTextField::SetMaxLen(::PoDoFo::pdf_long nMaxLen) {
    __zz_cib_MyHelper::SetMaxLen_9<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nMaxLen)>(std::move(nMaxLen))
    );
  }

::PoDoFo::pdf_long PoDoFo::PdfTextField::GetMaxLen() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(
    __zz_cib_MyHelper::GetMaxLen_10<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_long>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfTextField::SetMultiLine(bool bMultiLine) {
    __zz_cib_MyHelper::SetMultiLine_11<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bMultiLine)>(std::move(bMultiLine))
    );
  }

bool PoDoFo::PdfTextField::IsMultiLine() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsMultiLine_12<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfTextField::SetPasswordField(bool bPassword) {
    __zz_cib_MyHelper::SetPasswordField_13<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bPassword)>(std::move(bPassword))
    );
  }

bool PoDoFo::PdfTextField::IsPasswordField() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsPasswordField_14<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfTextField::SetFileField(bool bFile) {
    __zz_cib_MyHelper::SetFileField_15<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bFile)>(std::move(bFile))
    );
  }

bool PoDoFo::PdfTextField::IsFileField() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsFileField_16<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfTextField::SetSpellcheckingEnabled(bool bSpellcheck) {
    __zz_cib_MyHelper::SetSpellcheckingEnabled_17<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bSpellcheck)>(std::move(bSpellcheck))
    );
  }

bool PoDoFo::PdfTextField::IsSpellcheckingEnabled() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsSpellcheckingEnabled_18<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfTextField::SetScrollBarsEnabled(bool bScroll) {
    __zz_cib_MyHelper::SetScrollBarsEnabled_19<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bScroll)>(std::move(bScroll))
    );
  }

bool PoDoFo::PdfTextField::IsScrollBarsEnabled() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsScrollBarsEnabled_20<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfTextField::SetCombs(bool bCombs) {
    __zz_cib_MyHelper::SetCombs_21<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bCombs)>(std::move(bCombs))
    );
  }

bool PoDoFo::PdfTextField::IsCombs() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsCombs_22<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfTextField::SetRichText(bool bRichText) {
    __zz_cib_MyHelper::SetRichText_23<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bRichText)>(std::move(bRichText))
    );
  }

bool PoDoFo::PdfTextField::IsRichText() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsRichText_24<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}
}
namespace PoDoFo {

PoDoFo::PdfListField::PdfListField(__zz_cib_AbiType h)
  : ::PoDoFo::PdfField(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class421(h))
  , __zz_cib_h_(h)
{}

PoDoFo::PdfListField::PdfListField(PdfListField&& rhs)
  : ::PoDoFo::PdfField(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

PoDoFo::PdfListField::PdfListField(const ::PoDoFo::PdfListField& __zz_cib_param0)
  : PoDoFo::PdfListField(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfListField::~PdfListField() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

PoDoFo::PdfListField::PdfListField(::PoDoFo::EPdfField eField, ::PoDoFo::PdfAnnotation* pWidget, ::PoDoFo::PdfAcroForm* pParent)
  : PoDoFo::PdfListField(__zz_cib_MyHelper::__zz_cib_New_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(eField)>(std::move(eField)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pWidget)>(std::move(pWidget)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}

PoDoFo::PdfListField::PdfListField(::PoDoFo::EPdfField eField, ::PoDoFo::PdfPage* pPage, const ::PoDoFo::PdfRect& rRect, ::PoDoFo::PdfAcroForm* pParent)
  : PoDoFo::PdfListField(__zz_cib_MyHelper::__zz_cib_New_3(
        __zz_cib_::__zz_cib_ToAbiType<decltype(eField)>(std::move(eField)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pPage)>(std::move(pPage)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rRect)>(rRect),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}

PoDoFo::PdfListField::PdfListField(::PoDoFo::EPdfField eField, ::PoDoFo::PdfPage* pPage, const ::PoDoFo::PdfRect& rRect, ::PoDoFo::PdfDocument* pDoc)
  : PoDoFo::PdfListField(__zz_cib_MyHelper::__zz_cib_New_4(
        __zz_cib_::__zz_cib_ToAbiType<decltype(eField)>(std::move(eField)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pPage)>(std::move(pPage)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rRect)>(rRect),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pDoc)>(std::move(pDoc))))
{}

PoDoFo::PdfListField::PdfListField(::PoDoFo::EPdfField eField, ::PoDoFo::PdfPage* pPage, const ::PoDoFo::PdfRect& rRect, ::PoDoFo::PdfStreamedDocument* pDoc)
  : PoDoFo::PdfListField(__zz_cib_MyHelper::__zz_cib_New_5(
        __zz_cib_::__zz_cib_ToAbiType<decltype(eField)>(std::move(eField)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pPage)>(std::move(pPage)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rRect)>(rRect),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pDoc)>(std::move(pDoc))))
{}

PoDoFo::PdfListField::PdfListField(const ::PoDoFo::PdfField& rhs)
  : PoDoFo::PdfListField(__zz_cib_MyHelper::__zz_cib_New_6(
        __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)))
{}

void PoDoFo::PdfListField::InsertItem(const ::PoDoFo::PdfString& rsValue, const ::PoDoFo::PdfString& rsDisplayName) {
    __zz_cib_MyHelper::InsertItem_7<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rsValue)>(rsValue),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rsDisplayName)>(rsDisplayName)
    );
  }

void PoDoFo::PdfListField::RemoveItem(int nIndex) {
    __zz_cib_MyHelper::RemoveItem_8<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nIndex)>(std::move(nIndex))
    );
  }

const ::PoDoFo::PdfString PoDoFo::PdfListField::GetItem(int nIndex) const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString>(
    __zz_cib_MyHelper::GetItem_9<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfString>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nIndex)>(std::move(nIndex))
    )
  );
}

const ::PoDoFo::PdfString PoDoFo::PdfListField::GetItemDisplayText(int nIndex) const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString>(
    __zz_cib_MyHelper::GetItemDisplayText_10<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfString>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nIndex)>(std::move(nIndex))
    )
  );
}

size_t PoDoFo::PdfListField::GetItemCount() const {
  return __zz_cib_::__zz_cib_FromAbiType<size_t>(
    __zz_cib_MyHelper::GetItemCount_11<__zz_cib_::__zz_cib_AbiType_t<size_t>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfListField::SetSelectedItem(int nIndex) {
    __zz_cib_MyHelper::SetSelectedItem_12<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nIndex)>(std::move(nIndex))
    );
  }

int PoDoFo::PdfListField::GetSelectedItem() const {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::GetSelectedItem_13<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfListField::IsComboBox() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsComboBox_14<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfListField::SetSpellcheckingEnabled(bool bSpellcheck) {
    __zz_cib_MyHelper::SetSpellcheckingEnabled_15<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bSpellcheck)>(std::move(bSpellcheck))
    );
  }

bool PoDoFo::PdfListField::IsSpellcheckingEnabled() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsSpellcheckingEnabled_16<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfListField::SetSorted(bool bSorted) {
    __zz_cib_MyHelper::SetSorted_17<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bSorted)>(std::move(bSorted))
    );
  }

bool PoDoFo::PdfListField::IsSorted() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsSorted_18<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfListField::SetMultiSelect(bool bMulti) {
    __zz_cib_MyHelper::SetMultiSelect_19<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bMulti)>(std::move(bMulti))
    );
  }

bool PoDoFo::PdfListField::IsMultiSelect() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsMultiSelect_20<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfListField::SetCommitOnSelectionChange(bool bCommit) {
    __zz_cib_MyHelper::SetCommitOnSelectionChange_21<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bCommit)>(std::move(bCommit))
    );
  }

bool PoDoFo::PdfListField::IsCommitOnSelectionChange() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsCommitOnSelectionChange_22<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}
}
namespace PoDoFo {

PoDoFo::PdfComboBox::PdfComboBox(__zz_cib_AbiType h)
  : ::PoDoFo::PdfListField(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class426(h))
  , __zz_cib_h_(h)
{}

PoDoFo::PdfComboBox::PdfComboBox(PdfComboBox&& rhs)
  : ::PoDoFo::PdfListField(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

PoDoFo::PdfComboBox::PdfComboBox(const ::PoDoFo::PdfComboBox& __zz_cib_param0)
  : PoDoFo::PdfComboBox(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfComboBox::~PdfComboBox() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

PoDoFo::PdfComboBox::PdfComboBox(::PoDoFo::PdfAnnotation* pWidget, ::PoDoFo::PdfAcroForm* pParent)
  : PoDoFo::PdfComboBox(__zz_cib_MyHelper::__zz_cib_New_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pWidget)>(std::move(pWidget)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}

PoDoFo::PdfComboBox::PdfComboBox(::PoDoFo::PdfPage* pPage, const ::PoDoFo::PdfRect& rRect, ::PoDoFo::PdfAcroForm* pParent)
  : PoDoFo::PdfComboBox(__zz_cib_MyHelper::__zz_cib_New_3(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pPage)>(std::move(pPage)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rRect)>(rRect),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}

PoDoFo::PdfComboBox::PdfComboBox(::PoDoFo::PdfPage* pPage, const ::PoDoFo::PdfRect& rRect, ::PoDoFo::PdfDocument* pDoc)
  : PoDoFo::PdfComboBox(__zz_cib_MyHelper::__zz_cib_New_4(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pPage)>(std::move(pPage)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rRect)>(rRect),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pDoc)>(std::move(pDoc))))
{}

PoDoFo::PdfComboBox::PdfComboBox(::PoDoFo::PdfPage* pPage, const ::PoDoFo::PdfRect& rRect, ::PoDoFo::PdfStreamedDocument* pDoc)
  : PoDoFo::PdfComboBox(__zz_cib_MyHelper::__zz_cib_New_5(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pPage)>(std::move(pPage)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rRect)>(rRect),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pDoc)>(std::move(pDoc))))
{}

PoDoFo::PdfComboBox::PdfComboBox(const ::PoDoFo::PdfField& rhs)
  : PoDoFo::PdfComboBox(__zz_cib_MyHelper::__zz_cib_New_6(
        __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)))
{}

void PoDoFo::PdfComboBox::SetEditable(bool bEdit) {
    __zz_cib_MyHelper::SetEditable_7<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bEdit)>(std::move(bEdit))
    );
  }

bool PoDoFo::PdfComboBox::IsEditable() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsEditable_8<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}
}
namespace PoDoFo {

PoDoFo::PdfListBox::PdfListBox(__zz_cib_AbiType h)
  : ::PoDoFo::PdfListField(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class426(h))
  , __zz_cib_h_(h)
{}

PoDoFo::PdfListBox::PdfListBox(PdfListBox&& rhs)
  : ::PoDoFo::PdfListField(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

PoDoFo::PdfListBox::PdfListBox(const ::PoDoFo::PdfListBox& __zz_cib_param0)
  : PoDoFo::PdfListBox(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfListBox::~PdfListBox() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

PoDoFo::PdfListBox::PdfListBox(::PoDoFo::PdfAnnotation* pWidget, ::PoDoFo::PdfAcroForm* pParent)
  : PoDoFo::PdfListBox(__zz_cib_MyHelper::__zz_cib_New_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pWidget)>(std::move(pWidget)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}

PoDoFo::PdfListBox::PdfListBox(::PoDoFo::PdfPage* pPage, const ::PoDoFo::PdfRect& rRect, ::PoDoFo::PdfAcroForm* pParent)
  : PoDoFo::PdfListBox(__zz_cib_MyHelper::__zz_cib_New_3(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pPage)>(std::move(pPage)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rRect)>(rRect),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}

PoDoFo::PdfListBox::PdfListBox(::PoDoFo::PdfPage* pPage, const ::PoDoFo::PdfRect& rRect, ::PoDoFo::PdfDocument* pDoc)
  : PoDoFo::PdfListBox(__zz_cib_MyHelper::__zz_cib_New_4(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pPage)>(std::move(pPage)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rRect)>(rRect),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pDoc)>(std::move(pDoc))))
{}

PoDoFo::PdfListBox::PdfListBox(::PoDoFo::PdfPage* pPage, const ::PoDoFo::PdfRect& rRect, ::PoDoFo::PdfStreamedDocument* pDoc)
  : PoDoFo::PdfListBox(__zz_cib_MyHelper::__zz_cib_New_5(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pPage)>(std::move(pPage)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rRect)>(rRect),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pDoc)>(std::move(pDoc))))
{}

PoDoFo::PdfListBox::PdfListBox(const ::PoDoFo::PdfField& rhs)
  : PoDoFo::PdfListBox(__zz_cib_MyHelper::__zz_cib_New_6(
        __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)))
{}
}
