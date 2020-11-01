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
struct __zz_cib_Delegator<::PoDoFo::PdfAnnotation> : public ::PoDoFo::PdfAnnotation {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAnnotation>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfAnnotation>;
  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::PoDoFo::PdfAnnotation>;

  using ::PoDoFo::PdfAnnotation::PdfAnnotation;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<::PoDoFo::PdfPage*> pPage, __zz_cib_AbiType_t<::PoDoFo::EPdfAnnotation> eAnnot, __zz_cib_AbiType_t<const ::PoDoFo::PdfRect&> rRect, __zz_cib_AbiType_t<::PoDoFo::PdfVecObjects*> pParent) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfPage*>(pPage),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfAnnotation>(eAnnot),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect&>(rRect),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVecObjects*>(pParent));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<::PoDoFo::PdfObject*> pObject, __zz_cib_AbiType_t<::PoDoFo::PdfPage*> pPage) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pObject),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfPage*>(pPage));
  }
  static void __zz_cib_decl __zz_cib_Delete_3(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetAppearanceStream_4(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfXObject*> pObject, __zz_cib_AbiType_t<::PoDoFo::EPdfAnnotationAppearance> eAppearance, __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> state) {
    __zz_cib_obj->::PoDoFo::PdfAnnotation::SetAppearanceStream(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfXObject*>(pObject),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfAnnotationAppearance>(eAppearance),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(state)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl HasAppearanceStream_5(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfAnnotation::HasAppearanceStream()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfRect> __zz_cib_decl GetRect_6(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfRect>(
      __zz_cib_obj->::PoDoFo::PdfAnnotation::GetRect()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetRect_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfRect&> rRect) {
    __zz_cib_obj->::PoDoFo::PdfAnnotation::SetRect(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect&>(rRect)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetFlags_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::pdf_uint32> uiFlags) {
    __zz_cib_obj->::PoDoFo::PdfAnnotation::SetFlags(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_uint32>(uiFlags)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_uint32> __zz_cib_decl GetFlags_9(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_uint32>(
      __zz_cib_obj->::PoDoFo::PdfAnnotation::GetFlags()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetBorderStyle_10(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> dHCorner, __zz_cib_AbiType_t<double> dVCorner, __zz_cib_AbiType_t<double> dWidth) {
    __zz_cib_obj->::PoDoFo::PdfAnnotation::SetBorderStyle(
      __zz_cib_::__zz_cib_FromAbiType<double>(dHCorner),
      __zz_cib_::__zz_cib_FromAbiType<double>(dVCorner),
      __zz_cib_::__zz_cib_FromAbiType<double>(dWidth)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetBorderStyle_11(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> dHCorner, __zz_cib_AbiType_t<double> dVCorner, __zz_cib_AbiType_t<double> dWidth, __zz_cib_AbiType_t<const ::PoDoFo::PdfArray&> rStrokeStyle) {
    __zz_cib_obj->::PoDoFo::PdfAnnotation::SetBorderStyle(
      __zz_cib_::__zz_cib_FromAbiType<double>(dHCorner),
      __zz_cib_::__zz_cib_FromAbiType<double>(dVCorner),
      __zz_cib_::__zz_cib_FromAbiType<double>(dWidth),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfArray&>(rStrokeStyle)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetTitle_12(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> sTitle) {
    __zz_cib_obj->::PoDoFo::PdfAnnotation::SetTitle(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(sTitle)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfString> __zz_cib_decl GetTitle_13(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfString>(
      __zz_cib_obj->::PoDoFo::PdfAnnotation::GetTitle()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetContents_14(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> sContents) {
    __zz_cib_obj->::PoDoFo::PdfAnnotation::SetContents(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(sContents)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfString> __zz_cib_decl GetContents_15(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfString>(
      __zz_cib_obj->::PoDoFo::PdfAnnotation::GetContents()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetDestination_16(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfDestination&> rDestination) {
    __zz_cib_obj->::PoDoFo::PdfAnnotation::SetDestination(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfDestination&>(rDestination)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfDestination> __zz_cib_decl GetDestination_17(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfDocument*> pDoc) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfDestination>(
      __zz_cib_obj->::PoDoFo::PdfAnnotation::GetDestination(
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDocument*>(pDoc)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl HasDestination_18(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfAnnotation::HasDestination()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetAction_19(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfAction&> rAction) {
    __zz_cib_obj->::PoDoFo::PdfAnnotation::SetAction(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfAction&>(rAction)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfAction*> __zz_cib_decl GetAction_20(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfAction*>(
      __zz_cib_obj->::PoDoFo::PdfAnnotation::GetAction()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl HasAction_21(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfAnnotation::HasAction()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetOpen_22(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> b) {
    __zz_cib_obj->::PoDoFo::PdfAnnotation::SetOpen(
      __zz_cib_::__zz_cib_FromAbiType<bool>(b)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl GetOpen_23(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfAnnotation::GetOpen()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl HasFileAttachement_24(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfAnnotation::HasFileAttachement()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetFileAttachement_25(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfFileSpec&> rFileSpec) {
    __zz_cib_obj->::PoDoFo::PdfAnnotation::SetFileAttachement(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfFileSpec&>(rFileSpec)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfFileSpec*> __zz_cib_decl GetFileAttachement_26(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfFileSpec*>(
      __zz_cib_obj->::PoDoFo::PdfAnnotation::GetFileAttachement()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfArray> __zz_cib_decl GetQuadPoints_27(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfArray>(
      __zz_cib_obj->::PoDoFo::PdfAnnotation::GetQuadPoints()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetQuadPoints_28(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfArray&> rQuadPoints) {
    __zz_cib_obj->::PoDoFo::PdfAnnotation::SetQuadPoints(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfArray&>(rQuadPoints)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfArray> __zz_cib_decl GetColor_29(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfArray>(
      __zz_cib_obj->::PoDoFo::PdfAnnotation::GetColor()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetColor_30(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> r, __zz_cib_AbiType_t<double> g, __zz_cib_AbiType_t<double> b) {
    __zz_cib_obj->::PoDoFo::PdfAnnotation::SetColor(
      __zz_cib_::__zz_cib_FromAbiType<double>(r),
      __zz_cib_::__zz_cib_FromAbiType<double>(g),
      __zz_cib_::__zz_cib_FromAbiType<double>(b)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetColor_31(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> c, __zz_cib_AbiType_t<double> m, __zz_cib_AbiType_t<double> y, __zz_cib_AbiType_t<double> k) {
    __zz_cib_obj->::PoDoFo::PdfAnnotation::SetColor(
      __zz_cib_::__zz_cib_FromAbiType<double>(c),
      __zz_cib_::__zz_cib_FromAbiType<double>(m),
      __zz_cib_::__zz_cib_FromAbiType<double>(y),
      __zz_cib_::__zz_cib_FromAbiType<double>(k)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetColor_32(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> gray) {
    __zz_cib_obj->::PoDoFo::PdfAnnotation::SetColor(
      __zz_cib_::__zz_cib_FromAbiType<double>(gray)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetColor_33(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfAnnotation::SetColor();
  }
  static __zz_cib_AbiType_t<::PoDoFo::EPdfAnnotation> __zz_cib_decl GetType_34(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::EPdfAnnotation>(
      __zz_cib_obj->::PoDoFo::PdfAnnotation::GetType()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfPage*> __zz_cib_decl GetPage_35(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfPage*>(
      __zz_cib_obj->::PoDoFo::PdfAnnotation::GetPage()
    );
  }
  static void __zz_cib_decl __zz_cib_RegisterProxy(::PoDoFo::PdfAnnotation* obj, __zz_cib_Proxy proxy, __zz_cib_ProxyDeleter deleter) {
    __zz_cib_ProxyManagerDelegator::__zz_cib_RegisterProxy(obj, proxy, deleter);
  }
  static ::PoDoFo::PdfElement* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class418(::PoDoFo::PdfAnnotation* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfAnnotation* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class418(::PoDoFo::PdfElement* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfAnnotation*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class411 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAnnotation>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAnnotation>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAnnotation>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAnnotation>::__zz_cib_Delete_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAnnotation>::SetAppearanceStream_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAnnotation>::HasAppearanceStream_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAnnotation>::GetRect_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAnnotation>::SetRect_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAnnotation>::SetFlags_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAnnotation>::GetFlags_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAnnotation>::SetBorderStyle_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAnnotation>::SetBorderStyle_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAnnotation>::SetTitle_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAnnotation>::GetTitle_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAnnotation>::SetContents_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAnnotation>::GetContents_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAnnotation>::SetDestination_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAnnotation>::GetDestination_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAnnotation>::HasDestination_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAnnotation>::SetAction_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAnnotation>::GetAction_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAnnotation>::HasAction_21),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAnnotation>::SetOpen_22),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAnnotation>::GetOpen_23),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAnnotation>::HasFileAttachement_24),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAnnotation>::SetFileAttachement_25),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAnnotation>::GetFileAttachement_26),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAnnotation>::GetQuadPoints_27),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAnnotation>::SetQuadPoints_28),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAnnotation>::GetColor_29),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAnnotation>::SetColor_30),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAnnotation>::SetColor_31),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAnnotation>::SetColor_32),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAnnotation>::SetColor_33),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAnnotation>::GetType_34),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAnnotation>::GetPage_35),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAnnotation>::__zz_cib_CastTo__zz_cib_Class418),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAnnotation>::__zz_cib_CastFrom__zz_cib_Class418),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAnnotation>::__zz_cib_RegisterProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 39 };
  return &methodTable;
}
}}}
