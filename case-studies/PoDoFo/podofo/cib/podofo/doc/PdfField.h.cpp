#include "podofo/base/PdfArray.h"
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

#include "__zz_cib_CibPoDoFo-class-down-cast.h"
#include "__zz_cib_CibPoDoFo-delegate-helper.h"
#include "__zz_cib_CibPoDoFo-generic.h"
#include "__zz_cib_CibPoDoFo-ids.h"
#include "__zz_cib_CibPoDoFo-type-converters.h"
#include "__zz_cib_CibPoDoFo-mtable-helper.h"
#include "__zz_cib_CibPoDoFo-proxy-mgr.h"

namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfField> : public ::PoDoFo::PdfField {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfField>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::PoDoFo::PdfField::PdfField;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0(__zz_cib_AbiType_t<::PoDoFo::EPdfField> eField, __zz_cib_AbiType_t<::PoDoFo::PdfAnnotation*> pWidget, __zz_cib_AbiType_t<::PoDoFo::PdfAcroForm*> pParent) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfField>(eField),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfAnnotation*>(pWidget),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfAcroForm*>(pParent));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<::PoDoFo::EPdfField> eField, __zz_cib_AbiType_t<::PoDoFo::PdfPage*> pPage, __zz_cib_AbiType_t<const ::PoDoFo::PdfRect&> rRect, __zz_cib_AbiType_t<::PoDoFo::PdfAcroForm*> pParent) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfField>(eField),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfPage*>(pPage),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect&>(rRect),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfAcroForm*>(pParent));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<::PoDoFo::EPdfField> eField, __zz_cib_AbiType_t<::PoDoFo::PdfPage*> pPage, __zz_cib_AbiType_t<const ::PoDoFo::PdfRect&> rRect, __zz_cib_AbiType_t<::PoDoFo::PdfDocument*> pDoc) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfField>(eField),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfPage*>(pPage),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect&>(rRect),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDocument*>(pDoc));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_3(__zz_cib_AbiType_t<::PoDoFo::EPdfField> eField, __zz_cib_AbiType_t<::PoDoFo::PdfPage*> pPage, __zz_cib_AbiType_t<const ::PoDoFo::PdfRect&> rRect, __zz_cib_AbiType_t<::PoDoFo::PdfStreamedDocument*> pDoc) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfField>(eField),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfPage*>(pPage),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect&>(rRect),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfStreamedDocument*>(pDoc));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_4(__zz_cib_AbiType_t<::PoDoFo::EPdfField> eField, __zz_cib_AbiType_t<::PoDoFo::PdfAnnotation*> pWidget, __zz_cib_AbiType_t<::PoDoFo::PdfAcroForm*> pParent, __zz_cib_AbiType_t<::PoDoFo::PdfDocument*> pDoc) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfField>(eField),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfAnnotation*>(pWidget),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfAcroForm*>(pParent),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDocument*>(pDoc));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_5(__zz_cib_AbiType_t<::PoDoFo::EPdfField> eField, __zz_cib_AbiType_t<::PoDoFo::PdfPage*> pPage, __zz_cib_AbiType_t<const ::PoDoFo::PdfRect&> rRect, __zz_cib_AbiType_t<::PoDoFo::PdfDocument*> pDoc, __zz_cib_AbiType_t<bool> bDefaultApperance) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfField>(eField),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfPage*>(pPage),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect&>(rRect),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDocument*>(pDoc),
    __zz_cib_::__zz_cib_FromAbiType<bool>(bDefaultApperance));
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetFieldFlag_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<long> lValue, __zz_cib_AbiType_t<bool> bSet) {
    __zz_cib_obj->::PoDoFo::PdfField::SetFieldFlag(
      __zz_cib_::__zz_cib_FromAbiType<long>(lValue),
      __zz_cib_::__zz_cib_FromAbiType<bool>(bSet)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl GetFieldFlag_7(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<long> lValue, __zz_cib_AbiType_t<bool> bDefault) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfField::GetFieldFlag(
        __zz_cib_::__zz_cib_FromAbiType<long>(lValue),
        __zz_cib_::__zz_cib_FromAbiType<bool>(bDefault)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_decl GetAppearanceCharacteristics_8(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> bCreate) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfField::GetAppearanceCharacteristics(
        __zz_cib_::__zz_cib_FromAbiType<bool>(bCreate)
      )
    );
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_9(__zz_cib_AbiType_t<::PoDoFo::PdfObject*> pObject, __zz_cib_AbiType_t<::PoDoFo::PdfAnnotation*> pWidget) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pObject),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfAnnotation*>(pWidget));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_10(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_11(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfPage*> __zz_cib_decl GetPage_12(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfPage*>(
      __zz_cib_obj->::PoDoFo::PdfField::GetPage()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetHighlightingMode_13(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::EPdfHighlightingMode> eMode) {
    __zz_cib_obj->::PoDoFo::PdfField::SetHighlightingMode(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfHighlightingMode>(eMode)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::EPdfHighlightingMode> __zz_cib_decl GetHighlightingMode_14(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::EPdfHighlightingMode>(
      __zz_cib_obj->::PoDoFo::PdfField::GetHighlightingMode()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetBorderColorTransparent_15(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfField::SetBorderColorTransparent();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetBorderColor_16(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> dGray) {
    __zz_cib_obj->::PoDoFo::PdfField::SetBorderColor(
      __zz_cib_::__zz_cib_FromAbiType<double>(dGray)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetBorderColor_17(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> dRed, __zz_cib_AbiType_t<double> dGreen, __zz_cib_AbiType_t<double> dBlue) {
    __zz_cib_obj->::PoDoFo::PdfField::SetBorderColor(
      __zz_cib_::__zz_cib_FromAbiType<double>(dRed),
      __zz_cib_::__zz_cib_FromAbiType<double>(dGreen),
      __zz_cib_::__zz_cib_FromAbiType<double>(dBlue)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetBorderColor_18(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> dCyan, __zz_cib_AbiType_t<double> dMagenta, __zz_cib_AbiType_t<double> dYellow, __zz_cib_AbiType_t<double> dBlack) {
    __zz_cib_obj->::PoDoFo::PdfField::SetBorderColor(
      __zz_cib_::__zz_cib_FromAbiType<double>(dCyan),
      __zz_cib_::__zz_cib_FromAbiType<double>(dMagenta),
      __zz_cib_::__zz_cib_FromAbiType<double>(dYellow),
      __zz_cib_::__zz_cib_FromAbiType<double>(dBlack)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetBackgroundColorTransparent_19(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfField::SetBackgroundColorTransparent();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetBackgroundColor_20(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> dGray) {
    __zz_cib_obj->::PoDoFo::PdfField::SetBackgroundColor(
      __zz_cib_::__zz_cib_FromAbiType<double>(dGray)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetBackgroundColor_21(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> dRed, __zz_cib_AbiType_t<double> dGreen, __zz_cib_AbiType_t<double> dBlue) {
    __zz_cib_obj->::PoDoFo::PdfField::SetBackgroundColor(
      __zz_cib_::__zz_cib_FromAbiType<double>(dRed),
      __zz_cib_::__zz_cib_FromAbiType<double>(dGreen),
      __zz_cib_::__zz_cib_FromAbiType<double>(dBlue)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetBackgroundColor_22(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> dCyan, __zz_cib_AbiType_t<double> dMagenta, __zz_cib_AbiType_t<double> dYellow, __zz_cib_AbiType_t<double> dBlack) {
    __zz_cib_obj->::PoDoFo::PdfField::SetBackgroundColor(
      __zz_cib_::__zz_cib_FromAbiType<double>(dCyan),
      __zz_cib_::__zz_cib_FromAbiType<double>(dMagenta),
      __zz_cib_::__zz_cib_FromAbiType<double>(dYellow),
      __zz_cib_::__zz_cib_FromAbiType<double>(dBlack)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetFieldName_23(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> rsName) {
    __zz_cib_obj->::PoDoFo::PdfField::SetFieldName(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(rsName)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfString> __zz_cib_decl GetFieldName_24(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfString>(
      __zz_cib_obj->::PoDoFo::PdfField::GetFieldName()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetAlternateName_25(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> rsName) {
    __zz_cib_obj->::PoDoFo::PdfField::SetAlternateName(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(rsName)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfString> __zz_cib_decl GetAlternateName_26(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfString>(
      __zz_cib_obj->::PoDoFo::PdfField::GetAlternateName()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetMappingName_27(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> rsName) {
    __zz_cib_obj->::PoDoFo::PdfField::SetMappingName(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(rsName)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfString> __zz_cib_decl GetMappingName_28(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfString>(
      __zz_cib_obj->::PoDoFo::PdfField::GetMappingName()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetReadOnly_29(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> bReadOnly) {
    __zz_cib_obj->::PoDoFo::PdfField::SetReadOnly(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bReadOnly)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsReadOnly_30(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfField::IsReadOnly()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetRequired_31(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> bRequired) {
    __zz_cib_obj->::PoDoFo::PdfField::SetRequired(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bRequired)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsRequired_32(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfField::IsRequired()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetExport_33(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> bExport) {
    __zz_cib_obj->::PoDoFo::PdfField::SetExport(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bExport)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsExport_34(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfField::IsExport()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetMouseEnterAction_35(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfAction&> rAction) {
    __zz_cib_obj->::PoDoFo::PdfField::SetMouseEnterAction(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfAction&>(rAction)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetMouseLeaveAction_36(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfAction&> rAction) {
    __zz_cib_obj->::PoDoFo::PdfField::SetMouseLeaveAction(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfAction&>(rAction)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetMouseDownAction_37(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfAction&> rAction) {
    __zz_cib_obj->::PoDoFo::PdfField::SetMouseDownAction(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfAction&>(rAction)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetMouseUpAction_38(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfAction&> rAction) {
    __zz_cib_obj->::PoDoFo::PdfField::SetMouseUpAction(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfAction&>(rAction)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetFocusEnterAction_39(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfAction&> rAction) {
    __zz_cib_obj->::PoDoFo::PdfField::SetFocusEnterAction(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfAction&>(rAction)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetFocusLeaveAction_40(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfAction&> rAction) {
    __zz_cib_obj->::PoDoFo::PdfField::SetFocusLeaveAction(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfAction&>(rAction)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetPageOpenAction_41(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfAction&> rAction) {
    __zz_cib_obj->::PoDoFo::PdfField::SetPageOpenAction(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfAction&>(rAction)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetPageCloseAction_42(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfAction&> rAction) {
    __zz_cib_obj->::PoDoFo::PdfField::SetPageCloseAction(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfAction&>(rAction)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetPageVisibleAction_43(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfAction&> rAction) {
    __zz_cib_obj->::PoDoFo::PdfField::SetPageVisibleAction(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfAction&>(rAction)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetPageInvisibleAction_44(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfAction&> rAction) {
    __zz_cib_obj->::PoDoFo::PdfField::SetPageInvisibleAction(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfAction&>(rAction)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetKeystrokeAction_45(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfAction&> rAction) {
    __zz_cib_obj->::PoDoFo::PdfField::SetKeystrokeAction(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfAction&>(rAction)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetValidateAction_46(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfAction&> rAction) {
    __zz_cib_obj->::PoDoFo::PdfField::SetValidateAction(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfAction&>(rAction)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::EPdfField> __zz_cib_decl GetType_47(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::EPdfField>(
      __zz_cib_obj->::PoDoFo::PdfField::GetType()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfAnnotation*> __zz_cib_decl GetWidgetAnnotation_48(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfAnnotation*>(
      __zz_cib_obj->::PoDoFo::PdfField::GetWidgetAnnotation()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_decl GetFieldObject_49(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfField::GetFieldObject()
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class421 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfField>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfField>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfField>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfField>::__zz_cib_New_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfField>::__zz_cib_New_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfField>::__zz_cib_New_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfField>::SetFieldFlag_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfField>::GetFieldFlag_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfField>::GetAppearanceCharacteristics_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfField>::__zz_cib_New_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfField>::__zz_cib_Copy_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfField>::__zz_cib_Delete_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfField>::GetPage_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfField>::SetHighlightingMode_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfField>::GetHighlightingMode_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfField>::SetBorderColorTransparent_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfField>::SetBorderColor_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfField>::SetBorderColor_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfField>::SetBorderColor_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfField>::SetBackgroundColorTransparent_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfField>::SetBackgroundColor_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfField>::SetBackgroundColor_21),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfField>::SetBackgroundColor_22),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfField>::SetFieldName_23),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfField>::GetFieldName_24),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfField>::SetAlternateName_25),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfField>::GetAlternateName_26),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfField>::SetMappingName_27),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfField>::GetMappingName_28),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfField>::SetReadOnly_29),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfField>::IsReadOnly_30),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfField>::SetRequired_31),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfField>::IsRequired_32),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfField>::SetExport_33),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfField>::IsExport_34),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfField>::SetMouseEnterAction_35),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfField>::SetMouseLeaveAction_36),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfField>::SetMouseDownAction_37),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfField>::SetMouseUpAction_38),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfField>::SetFocusEnterAction_39),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfField>::SetFocusLeaveAction_40),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfField>::SetPageOpenAction_41),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfField>::SetPageCloseAction_42),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfField>::SetPageVisibleAction_43),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfField>::SetPageInvisibleAction_44),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfField>::SetKeystrokeAction_45),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfField>::SetValidateAction_46),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfField>::GetType_47),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfField>::GetWidgetAnnotation_48),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfField>::GetFieldObject_49)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 50 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfButton> : public ::PoDoFo::PdfButton {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfButton>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::PoDoFo::PdfButton::PdfButton;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<::PoDoFo::EPdfField> eField, __zz_cib_AbiType_t<::PoDoFo::PdfAnnotation*> pWidget, __zz_cib_AbiType_t<::PoDoFo::PdfAcroForm*> pParent) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfField>(eField),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfAnnotation*>(pWidget),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfAcroForm*>(pParent));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_3(__zz_cib_AbiType_t<::PoDoFo::EPdfField> eField, __zz_cib_AbiType_t<::PoDoFo::PdfPage*> pPage, __zz_cib_AbiType_t<const ::PoDoFo::PdfRect&> rRect, __zz_cib_AbiType_t<::PoDoFo::PdfAcroForm*> pParent) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfField>(eField),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfPage*>(pPage),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect&>(rRect),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfAcroForm*>(pParent));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_4(__zz_cib_AbiType_t<::PoDoFo::EPdfField> eField, __zz_cib_AbiType_t<::PoDoFo::PdfPage*> pPage, __zz_cib_AbiType_t<const ::PoDoFo::PdfRect&> rRect, __zz_cib_AbiType_t<::PoDoFo::PdfDocument*> pDoc) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfField>(eField),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfPage*>(pPage),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect&>(rRect),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDocument*>(pDoc));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_5(__zz_cib_AbiType_t<::PoDoFo::EPdfField> eField, __zz_cib_AbiType_t<::PoDoFo::PdfPage*> pPage, __zz_cib_AbiType_t<const ::PoDoFo::PdfRect&> rRect, __zz_cib_AbiType_t<::PoDoFo::PdfStreamedDocument*> pDoc) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfField>(eField),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfPage*>(pPage),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect&>(rRect),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfStreamedDocument*>(pDoc));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_6(__zz_cib_AbiType_t<const ::PoDoFo::PdfField&> rhs) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfField&>(rhs));
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsPushButton_7(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfButton::IsPushButton()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsCheckBox_8(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfButton::IsCheckBox()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsRadioButton_9(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfButton::IsRadioButton()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetCaption_10(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> rsText) {
    __zz_cib_obj->::PoDoFo::PdfButton::SetCaption(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(rsText)
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfString> __zz_cib_decl GetCaption_11(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfString>(
      __zz_cib_obj->::PoDoFo::PdfButton::GetCaption()
    );
  }
  static ::PoDoFo::PdfField* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class421(::PoDoFo::PdfButton* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfButton* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class421(::PoDoFo::PdfField* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfButton*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class422 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfButton>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfButton>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfButton>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfButton>::__zz_cib_New_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfButton>::__zz_cib_New_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfButton>::__zz_cib_New_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfButton>::__zz_cib_New_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfButton>::IsPushButton_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfButton>::IsCheckBox_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfButton>::IsRadioButton_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfButton>::SetCaption_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfButton>::GetCaption_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfButton>::__zz_cib_CastTo__zz_cib_Class421),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfButton>::__zz_cib_CastFrom__zz_cib_Class421)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 14 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfPushButton> : public ::PoDoFo::PdfPushButton {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPushButton>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::PoDoFo::PdfPushButton::PdfPushButton;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<::PoDoFo::PdfAnnotation*> pWidget, __zz_cib_AbiType_t<::PoDoFo::PdfAcroForm*> pParent) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfAnnotation*>(pWidget),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfAcroForm*>(pParent));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_3(__zz_cib_AbiType_t<::PoDoFo::PdfPage*> pPage, __zz_cib_AbiType_t<const ::PoDoFo::PdfRect&> rRect, __zz_cib_AbiType_t<::PoDoFo::PdfAcroForm*> pParent) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfPage*>(pPage),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect&>(rRect),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfAcroForm*>(pParent));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_4(__zz_cib_AbiType_t<::PoDoFo::PdfPage*> pPage, __zz_cib_AbiType_t<const ::PoDoFo::PdfRect&> rRect, __zz_cib_AbiType_t<::PoDoFo::PdfDocument*> pDoc) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfPage*>(pPage),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect&>(rRect),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDocument*>(pDoc));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_5(__zz_cib_AbiType_t<::PoDoFo::PdfPage*> pPage, __zz_cib_AbiType_t<const ::PoDoFo::PdfRect&> rRect, __zz_cib_AbiType_t<::PoDoFo::PdfStreamedDocument*> pDoc) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfPage*>(pPage),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect&>(rRect),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfStreamedDocument*>(pDoc));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_6(__zz_cib_AbiType_t<const ::PoDoFo::PdfField&> rhs) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfField&>(rhs));
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetRolloverCaption_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> rsText) {
    __zz_cib_obj->::PoDoFo::PdfPushButton::SetRolloverCaption(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(rsText)
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfString> __zz_cib_decl GetRolloverCaption_8(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfString>(
      __zz_cib_obj->::PoDoFo::PdfPushButton::GetRolloverCaption()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetAlternateCaption_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> rsText) {
    __zz_cib_obj->::PoDoFo::PdfPushButton::SetAlternateCaption(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(rsText)
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfString> __zz_cib_decl GetAlternateCaption_10(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfString>(
      __zz_cib_obj->::PoDoFo::PdfPushButton::GetAlternateCaption()
    );
  }
  static ::PoDoFo::PdfField* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class421(::PoDoFo::PdfPushButton* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfPushButton* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class421(::PoDoFo::PdfField* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfPushButton*>(__zz_cib_obj);
  }
  static ::PoDoFo::PdfButton* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class422(::PoDoFo::PdfPushButton* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfPushButton* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class422(::PoDoFo::PdfButton* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfPushButton*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class423 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPushButton>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPushButton>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPushButton>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPushButton>::__zz_cib_New_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPushButton>::__zz_cib_New_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPushButton>::__zz_cib_New_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPushButton>::__zz_cib_New_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPushButton>::SetRolloverCaption_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPushButton>::GetRolloverCaption_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPushButton>::SetAlternateCaption_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPushButton>::GetAlternateCaption_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPushButton>::__zz_cib_CastTo__zz_cib_Class421),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPushButton>::__zz_cib_CastFrom__zz_cib_Class421),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPushButton>::__zz_cib_CastTo__zz_cib_Class422),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPushButton>::__zz_cib_CastFrom__zz_cib_Class422)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 15 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfCheckBox> : public ::PoDoFo::PdfCheckBox {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfCheckBox>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::PoDoFo::PdfCheckBox::PdfCheckBox;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<::PoDoFo::PdfAnnotation*> pWidget, __zz_cib_AbiType_t<::PoDoFo::PdfAcroForm*> pParent) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfAnnotation*>(pWidget),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfAcroForm*>(pParent));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_3(__zz_cib_AbiType_t<::PoDoFo::PdfPage*> pPage, __zz_cib_AbiType_t<const ::PoDoFo::PdfRect&> rRect, __zz_cib_AbiType_t<::PoDoFo::PdfAcroForm*> pParent) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfPage*>(pPage),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect&>(rRect),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfAcroForm*>(pParent));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_4(__zz_cib_AbiType_t<::PoDoFo::PdfPage*> pPage, __zz_cib_AbiType_t<const ::PoDoFo::PdfRect&> rRect, __zz_cib_AbiType_t<::PoDoFo::PdfDocument*> pDoc) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfPage*>(pPage),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect&>(rRect),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDocument*>(pDoc));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_5(__zz_cib_AbiType_t<::PoDoFo::PdfPage*> pPage, __zz_cib_AbiType_t<const ::PoDoFo::PdfRect&> rRect, __zz_cib_AbiType_t<::PoDoFo::PdfStreamedDocument*> pDoc) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfPage*>(pPage),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect&>(rRect),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfStreamedDocument*>(pDoc));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_6(__zz_cib_AbiType_t<const ::PoDoFo::PdfField&> rhs) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfField&>(rhs));
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetAppearanceChecked_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfXObject&> rXObject) {
    __zz_cib_obj->::PoDoFo::PdfCheckBox::SetAppearanceChecked(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfXObject&>(rXObject)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetAppearanceUnchecked_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfXObject&> rXObject) {
    __zz_cib_obj->::PoDoFo::PdfCheckBox::SetAppearanceUnchecked(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfXObject&>(rXObject)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetChecked_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> bChecked) {
    __zz_cib_obj->::PoDoFo::PdfCheckBox::SetChecked(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bChecked)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsChecked_10(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfCheckBox::IsChecked()
    );
  }
  static ::PoDoFo::PdfField* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class421(::PoDoFo::PdfCheckBox* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfCheckBox* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class421(::PoDoFo::PdfField* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfCheckBox*>(__zz_cib_obj);
  }
  static ::PoDoFo::PdfButton* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class422(::PoDoFo::PdfCheckBox* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfCheckBox* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class422(::PoDoFo::PdfButton* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfCheckBox*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class424 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfCheckBox>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfCheckBox>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfCheckBox>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfCheckBox>::__zz_cib_New_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfCheckBox>::__zz_cib_New_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfCheckBox>::__zz_cib_New_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfCheckBox>::__zz_cib_New_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfCheckBox>::SetAppearanceChecked_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfCheckBox>::SetAppearanceUnchecked_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfCheckBox>::SetChecked_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfCheckBox>::IsChecked_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfCheckBox>::__zz_cib_CastTo__zz_cib_Class421),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfCheckBox>::__zz_cib_CastFrom__zz_cib_Class421),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfCheckBox>::__zz_cib_CastTo__zz_cib_Class422),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfCheckBox>::__zz_cib_CastFrom__zz_cib_Class422)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 15 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfTextField> : public ::PoDoFo::PdfTextField {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTextField>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::PoDoFo::PdfTextField::PdfTextField;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<::PoDoFo::PdfAnnotation*> pWidget, __zz_cib_AbiType_t<::PoDoFo::PdfAcroForm*> pParent) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfAnnotation*>(pWidget),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfAcroForm*>(pParent));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_3(__zz_cib_AbiType_t<::PoDoFo::PdfPage*> pPage, __zz_cib_AbiType_t<const ::PoDoFo::PdfRect&> rRect, __zz_cib_AbiType_t<::PoDoFo::PdfAcroForm*> pParent) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfPage*>(pPage),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect&>(rRect),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfAcroForm*>(pParent));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_4(__zz_cib_AbiType_t<::PoDoFo::PdfPage*> pPage, __zz_cib_AbiType_t<const ::PoDoFo::PdfRect&> rRect, __zz_cib_AbiType_t<::PoDoFo::PdfDocument*> pDoc) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfPage*>(pPage),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect&>(rRect),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDocument*>(pDoc));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_5(__zz_cib_AbiType_t<::PoDoFo::PdfPage*> pPage, __zz_cib_AbiType_t<const ::PoDoFo::PdfRect&> rRect, __zz_cib_AbiType_t<::PoDoFo::PdfStreamedDocument*> pDoc) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfPage*>(pPage),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect&>(rRect),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfStreamedDocument*>(pDoc));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_6(__zz_cib_AbiType_t<const ::PoDoFo::PdfField&> rhs) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfField&>(rhs));
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetText_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> rsText) {
    __zz_cib_obj->::PoDoFo::PdfTextField::SetText(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(rsText)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfString> __zz_cib_decl GetText_8(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfString>(
      __zz_cib_obj->::PoDoFo::PdfTextField::GetText()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetMaxLen_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::pdf_long> nMaxLen) {
    __zz_cib_obj->::PoDoFo::PdfTextField::SetMaxLen(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(nMaxLen)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl GetMaxLen_10(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->::PoDoFo::PdfTextField::GetMaxLen()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetMultiLine_11(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> bMultiLine) {
    __zz_cib_obj->::PoDoFo::PdfTextField::SetMultiLine(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bMultiLine)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsMultiLine_12(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfTextField::IsMultiLine()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetPasswordField_13(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> bPassword) {
    __zz_cib_obj->::PoDoFo::PdfTextField::SetPasswordField(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bPassword)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsPasswordField_14(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfTextField::IsPasswordField()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetFileField_15(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> bFile) {
    __zz_cib_obj->::PoDoFo::PdfTextField::SetFileField(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bFile)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsFileField_16(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfTextField::IsFileField()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetSpellcheckingEnabled_17(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> bSpellcheck) {
    __zz_cib_obj->::PoDoFo::PdfTextField::SetSpellcheckingEnabled(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bSpellcheck)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsSpellcheckingEnabled_18(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfTextField::IsSpellcheckingEnabled()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetScrollBarsEnabled_19(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> bScroll) {
    __zz_cib_obj->::PoDoFo::PdfTextField::SetScrollBarsEnabled(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bScroll)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsScrollBarsEnabled_20(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfTextField::IsScrollBarsEnabled()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetCombs_21(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> bCombs) {
    __zz_cib_obj->::PoDoFo::PdfTextField::SetCombs(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bCombs)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsCombs_22(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfTextField::IsCombs()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetRichText_23(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> bRichText) {
    __zz_cib_obj->::PoDoFo::PdfTextField::SetRichText(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bRichText)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsRichText_24(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfTextField::IsRichText()
    );
  }
  static ::PoDoFo::PdfField* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class421(::PoDoFo::PdfTextField* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfTextField* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class421(::PoDoFo::PdfField* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfTextField*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class425 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTextField>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTextField>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTextField>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTextField>::__zz_cib_New_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTextField>::__zz_cib_New_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTextField>::__zz_cib_New_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTextField>::__zz_cib_New_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTextField>::SetText_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTextField>::GetText_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTextField>::SetMaxLen_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTextField>::GetMaxLen_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTextField>::SetMultiLine_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTextField>::IsMultiLine_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTextField>::SetPasswordField_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTextField>::IsPasswordField_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTextField>::SetFileField_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTextField>::IsFileField_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTextField>::SetSpellcheckingEnabled_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTextField>::IsSpellcheckingEnabled_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTextField>::SetScrollBarsEnabled_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTextField>::IsScrollBarsEnabled_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTextField>::SetCombs_21),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTextField>::IsCombs_22),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTextField>::SetRichText_23),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTextField>::IsRichText_24),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTextField>::__zz_cib_CastTo__zz_cib_Class421),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfTextField>::__zz_cib_CastFrom__zz_cib_Class421)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 27 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfListField> : public ::PoDoFo::PdfListField {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfListField>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::PoDoFo::PdfListField::PdfListField;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<::PoDoFo::EPdfField> eField, __zz_cib_AbiType_t<::PoDoFo::PdfAnnotation*> pWidget, __zz_cib_AbiType_t<::PoDoFo::PdfAcroForm*> pParent) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfField>(eField),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfAnnotation*>(pWidget),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfAcroForm*>(pParent));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_3(__zz_cib_AbiType_t<::PoDoFo::EPdfField> eField, __zz_cib_AbiType_t<::PoDoFo::PdfPage*> pPage, __zz_cib_AbiType_t<const ::PoDoFo::PdfRect&> rRect, __zz_cib_AbiType_t<::PoDoFo::PdfAcroForm*> pParent) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfField>(eField),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfPage*>(pPage),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect&>(rRect),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfAcroForm*>(pParent));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_4(__zz_cib_AbiType_t<::PoDoFo::EPdfField> eField, __zz_cib_AbiType_t<::PoDoFo::PdfPage*> pPage, __zz_cib_AbiType_t<const ::PoDoFo::PdfRect&> rRect, __zz_cib_AbiType_t<::PoDoFo::PdfDocument*> pDoc) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfField>(eField),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfPage*>(pPage),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect&>(rRect),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDocument*>(pDoc));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_5(__zz_cib_AbiType_t<::PoDoFo::EPdfField> eField, __zz_cib_AbiType_t<::PoDoFo::PdfPage*> pPage, __zz_cib_AbiType_t<const ::PoDoFo::PdfRect&> rRect, __zz_cib_AbiType_t<::PoDoFo::PdfStreamedDocument*> pDoc) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfField>(eField),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfPage*>(pPage),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect&>(rRect),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfStreamedDocument*>(pDoc));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_6(__zz_cib_AbiType_t<const ::PoDoFo::PdfField&> rhs) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfField&>(rhs));
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl InsertItem_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> rsValue, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> rsDisplayName) {
    __zz_cib_obj->::PoDoFo::PdfListField::InsertItem(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(rsValue),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(rsDisplayName)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl RemoveItem_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> nIndex) {
    __zz_cib_obj->::PoDoFo::PdfListField::RemoveItem(
      __zz_cib_::__zz_cib_FromAbiType<int>(nIndex)
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfString> __zz_cib_decl GetItem_9(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> nIndex) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfString>(
      __zz_cib_obj->::PoDoFo::PdfListField::GetItem(
        __zz_cib_::__zz_cib_FromAbiType<int>(nIndex)
      )
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfString> __zz_cib_decl GetItemDisplayText_10(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> nIndex) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfString>(
      __zz_cib_obj->::PoDoFo::PdfListField::GetItemDisplayText(
        __zz_cib_::__zz_cib_FromAbiType<int>(nIndex)
      )
    );
  }
  static __zz_cib_AbiType_t<size_t> __zz_cib_decl GetItemCount_11(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<size_t>(
      __zz_cib_obj->::PoDoFo::PdfListField::GetItemCount()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetSelectedItem_12(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> nIndex) {
    __zz_cib_obj->::PoDoFo::PdfListField::SetSelectedItem(
      __zz_cib_::__zz_cib_FromAbiType<int>(nIndex)
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl GetSelectedItem_13(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::PoDoFo::PdfListField::GetSelectedItem()
    );
  }
#if  0
  static __zz_cib_AbiType_t<::PoDoFo::PdfArray> __zz_cib_decl GetSelectedItems_14(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfArray>(
      __zz_cib_obj->::PoDoFo::PdfListField::GetSelectedItems()
    );
  }
#endif
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsComboBox_15(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfListField::IsComboBox()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetSpellcheckingEnabled_16(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> bSpellcheck) {
    __zz_cib_obj->::PoDoFo::PdfListField::SetSpellcheckingEnabled(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bSpellcheck)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsSpellcheckingEnabled_17(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfListField::IsSpellcheckingEnabled()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetSorted_18(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> bSorted) {
    __zz_cib_obj->::PoDoFo::PdfListField::SetSorted(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bSorted)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsSorted_19(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfListField::IsSorted()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetMultiSelect_20(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> bMulti) {
    __zz_cib_obj->::PoDoFo::PdfListField::SetMultiSelect(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bMulti)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsMultiSelect_21(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfListField::IsMultiSelect()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetCommitOnSelectionChange_22(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> bCommit) {
    __zz_cib_obj->::PoDoFo::PdfListField::SetCommitOnSelectionChange(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bCommit)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsCommitOnSelectionChange_23(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfListField::IsCommitOnSelectionChange()
    );
  }
  static ::PoDoFo::PdfField* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class421(::PoDoFo::PdfListField* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfListField* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class421(::PoDoFo::PdfField* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfListField*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class426 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfListField>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfListField>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfListField>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfListField>::__zz_cib_New_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfListField>::__zz_cib_New_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfListField>::__zz_cib_New_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfListField>::__zz_cib_New_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfListField>::InsertItem_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfListField>::RemoveItem_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfListField>::GetItem_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfListField>::GetItemDisplayText_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfListField>::GetItemCount_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfListField>::SetSelectedItem_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfListField>::GetSelectedItem_13),
#if  0
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfListField>::GetSelectedItems_14),
#else 
    reinterpret_cast<__zz_cib_MTableEntry> (0),
#endif
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfListField>::IsComboBox_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfListField>::SetSpellcheckingEnabled_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfListField>::IsSpellcheckingEnabled_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfListField>::SetSorted_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfListField>::IsSorted_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfListField>::SetMultiSelect_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfListField>::IsMultiSelect_21),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfListField>::SetCommitOnSelectionChange_22),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfListField>::IsCommitOnSelectionChange_23),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfListField>::__zz_cib_CastTo__zz_cib_Class421),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfListField>::__zz_cib_CastFrom__zz_cib_Class421)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 26 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfComboBox> : public ::PoDoFo::PdfComboBox {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfComboBox>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::PoDoFo::PdfComboBox::PdfComboBox;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<::PoDoFo::PdfAnnotation*> pWidget, __zz_cib_AbiType_t<::PoDoFo::PdfAcroForm*> pParent) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfAnnotation*>(pWidget),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfAcroForm*>(pParent));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_3(__zz_cib_AbiType_t<::PoDoFo::PdfPage*> pPage, __zz_cib_AbiType_t<const ::PoDoFo::PdfRect&> rRect, __zz_cib_AbiType_t<::PoDoFo::PdfAcroForm*> pParent) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfPage*>(pPage),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect&>(rRect),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfAcroForm*>(pParent));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_4(__zz_cib_AbiType_t<::PoDoFo::PdfPage*> pPage, __zz_cib_AbiType_t<const ::PoDoFo::PdfRect&> rRect, __zz_cib_AbiType_t<::PoDoFo::PdfDocument*> pDoc) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfPage*>(pPage),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect&>(rRect),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDocument*>(pDoc));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_5(__zz_cib_AbiType_t<::PoDoFo::PdfPage*> pPage, __zz_cib_AbiType_t<const ::PoDoFo::PdfRect&> rRect, __zz_cib_AbiType_t<::PoDoFo::PdfStreamedDocument*> pDoc) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfPage*>(pPage),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect&>(rRect),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfStreamedDocument*>(pDoc));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_6(__zz_cib_AbiType_t<const ::PoDoFo::PdfField&> rhs) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfField&>(rhs));
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetEditable_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> bEdit) {
    __zz_cib_obj->::PoDoFo::PdfComboBox::SetEditable(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bEdit)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsEditable_8(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfComboBox::IsEditable()
    );
  }
  static ::PoDoFo::PdfField* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class421(::PoDoFo::PdfComboBox* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfComboBox* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class421(::PoDoFo::PdfField* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfComboBox*>(__zz_cib_obj);
  }
  static ::PoDoFo::PdfListField* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class426(::PoDoFo::PdfComboBox* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfComboBox* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class426(::PoDoFo::PdfListField* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfComboBox*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class427 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfComboBox>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfComboBox>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfComboBox>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfComboBox>::__zz_cib_New_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfComboBox>::__zz_cib_New_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfComboBox>::__zz_cib_New_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfComboBox>::__zz_cib_New_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfComboBox>::SetEditable_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfComboBox>::IsEditable_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfComboBox>::__zz_cib_CastTo__zz_cib_Class421),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfComboBox>::__zz_cib_CastFrom__zz_cib_Class421),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfComboBox>::__zz_cib_CastTo__zz_cib_Class426),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfComboBox>::__zz_cib_CastFrom__zz_cib_Class426)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 13 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfListBox> : public ::PoDoFo::PdfListBox {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfListBox>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::PoDoFo::PdfListBox::PdfListBox;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<::PoDoFo::PdfAnnotation*> pWidget, __zz_cib_AbiType_t<::PoDoFo::PdfAcroForm*> pParent) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfAnnotation*>(pWidget),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfAcroForm*>(pParent));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_3(__zz_cib_AbiType_t<::PoDoFo::PdfPage*> pPage, __zz_cib_AbiType_t<const ::PoDoFo::PdfRect&> rRect, __zz_cib_AbiType_t<::PoDoFo::PdfAcroForm*> pParent) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfPage*>(pPage),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect&>(rRect),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfAcroForm*>(pParent));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_4(__zz_cib_AbiType_t<::PoDoFo::PdfPage*> pPage, __zz_cib_AbiType_t<const ::PoDoFo::PdfRect&> rRect, __zz_cib_AbiType_t<::PoDoFo::PdfDocument*> pDoc) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfPage*>(pPage),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect&>(rRect),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDocument*>(pDoc));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_5(__zz_cib_AbiType_t<::PoDoFo::PdfPage*> pPage, __zz_cib_AbiType_t<const ::PoDoFo::PdfRect&> rRect, __zz_cib_AbiType_t<::PoDoFo::PdfStreamedDocument*> pDoc) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfPage*>(pPage),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect&>(rRect),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfStreamedDocument*>(pDoc));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_6(__zz_cib_AbiType_t<const ::PoDoFo::PdfField&> rhs) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfField&>(rhs));
  }
  static ::PoDoFo::PdfField* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class421(::PoDoFo::PdfListBox* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfListBox* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class421(::PoDoFo::PdfField* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfListBox*>(__zz_cib_obj);
  }
  static ::PoDoFo::PdfListField* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class426(::PoDoFo::PdfListBox* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfListBox* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class426(::PoDoFo::PdfListField* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfListBox*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class428 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfListBox>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfListBox>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfListBox>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfListBox>::__zz_cib_New_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfListBox>::__zz_cib_New_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfListBox>::__zz_cib_New_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfListBox>::__zz_cib_New_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfListBox>::__zz_cib_CastTo__zz_cib_Class421),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfListBox>::__zz_cib_CastFrom__zz_cib_Class421),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfListBox>::__zz_cib_CastTo__zz_cib_Class426),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfListBox>::__zz_cib_CastFrom__zz_cib_Class426)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 11 };
  return &methodTable;
}
}}}
