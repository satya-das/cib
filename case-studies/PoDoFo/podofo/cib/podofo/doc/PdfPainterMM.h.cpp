#include "podofo/base/PdfCanvas.h"
#include "podofo/base/PdfName.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfReference.h"
#include "podofo/base/PdfStream.h"
#include "podofo/base/PdfString.h"
#include "podofo/doc/PdfFont.h"
#include "podofo/doc/PdfImage.h"
#include "podofo/doc/PdfPainterMM.h"
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
struct __zz_cib_Delegator<::PoDoFo::PdfPainterMM> : public ::PoDoFo::PdfPainterMM {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainterMM>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::PoDoFo::PdfPainterMM::PdfPainterMM;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0() {
    return new __zz_cib_Delegatee();
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetStrokeWidthMM_2(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<long> lWidth) {
    __zz_cib_obj->::PoDoFo::PdfPainterMM::SetStrokeWidthMM(
      __zz_cib_::__zz_cib_FromAbiType<long>(lWidth)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl DrawLineMM_3(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<long> lStartX, __zz_cib_AbiType_t<long> lStartY, __zz_cib_AbiType_t<long> lEndX, __zz_cib_AbiType_t<long> lEndY) {
    __zz_cib_obj->::PoDoFo::PdfPainterMM::DrawLineMM(
      __zz_cib_::__zz_cib_FromAbiType<long>(lStartX),
      __zz_cib_::__zz_cib_FromAbiType<long>(lStartY),
      __zz_cib_::__zz_cib_FromAbiType<long>(lEndX),
      __zz_cib_::__zz_cib_FromAbiType<long>(lEndY)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl RectangleMM_4(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<long> lX, __zz_cib_AbiType_t<long> lY, __zz_cib_AbiType_t<long> lWidth, __zz_cib_AbiType_t<long> lHeight) {
    __zz_cib_obj->::PoDoFo::PdfPainterMM::RectangleMM(
      __zz_cib_::__zz_cib_FromAbiType<long>(lX),
      __zz_cib_::__zz_cib_FromAbiType<long>(lY),
      __zz_cib_::__zz_cib_FromAbiType<long>(lWidth),
      __zz_cib_::__zz_cib_FromAbiType<long>(lHeight)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl EllipseMM_5(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<long> lX, __zz_cib_AbiType_t<long> lY, __zz_cib_AbiType_t<long> lWidth, __zz_cib_AbiType_t<long> lHeight) {
    __zz_cib_obj->::PoDoFo::PdfPainterMM::EllipseMM(
      __zz_cib_::__zz_cib_FromAbiType<long>(lX),
      __zz_cib_::__zz_cib_FromAbiType<long>(lY),
      __zz_cib_::__zz_cib_FromAbiType<long>(lWidth),
      __zz_cib_::__zz_cib_FromAbiType<long>(lHeight)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl DrawTextMM_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<long> lX, __zz_cib_AbiType_t<long> lY, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> sText) {
    __zz_cib_obj->::PoDoFo::PdfPainterMM::DrawTextMM(
      __zz_cib_::__zz_cib_FromAbiType<long>(lX),
      __zz_cib_::__zz_cib_FromAbiType<long>(lY),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(sText)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl DrawTextMM_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<long> lX, __zz_cib_AbiType_t<long> lY, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> sText, __zz_cib_AbiType_t<long> lLen) {
    __zz_cib_obj->::PoDoFo::PdfPainterMM::DrawTextMM(
      __zz_cib_::__zz_cib_FromAbiType<long>(lX),
      __zz_cib_::__zz_cib_FromAbiType<long>(lY),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(sText),
      __zz_cib_::__zz_cib_FromAbiType<long>(lLen)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl DrawImageMM_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<long> lX, __zz_cib_AbiType_t<long> lY, __zz_cib_AbiType_t<::PoDoFo::PdfImage*> pObject, __zz_cib_AbiType_t<double> dScaleX, __zz_cib_AbiType_t<double> dScaleY) {
    __zz_cib_obj->::PoDoFo::PdfPainterMM::DrawImageMM(
      __zz_cib_::__zz_cib_FromAbiType<long>(lX),
      __zz_cib_::__zz_cib_FromAbiType<long>(lY),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfImage*>(pObject),
      __zz_cib_::__zz_cib_FromAbiType<double>(dScaleX),
      __zz_cib_::__zz_cib_FromAbiType<double>(dScaleY)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl DrawXObjectMM_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<long> lX, __zz_cib_AbiType_t<long> lY, __zz_cib_AbiType_t<::PoDoFo::PdfXObject*> pObject, __zz_cib_AbiType_t<double> dScaleX, __zz_cib_AbiType_t<double> dScaleY) {
    __zz_cib_obj->::PoDoFo::PdfPainterMM::DrawXObjectMM(
      __zz_cib_::__zz_cib_FromAbiType<long>(lX),
      __zz_cib_::__zz_cib_FromAbiType<long>(lY),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfXObject*>(pObject),
      __zz_cib_::__zz_cib_FromAbiType<double>(dScaleX),
      __zz_cib_::__zz_cib_FromAbiType<double>(dScaleY)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl LineToMM_10(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<long> lX, __zz_cib_AbiType_t<long> lY) {
    __zz_cib_obj->::PoDoFo::PdfPainterMM::LineToMM(
      __zz_cib_::__zz_cib_FromAbiType<long>(lX),
      __zz_cib_::__zz_cib_FromAbiType<long>(lY)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl MoveToMM_11(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<long> lX, __zz_cib_AbiType_t<long> lY) {
    __zz_cib_obj->::PoDoFo::PdfPainterMM::MoveToMM(
      __zz_cib_::__zz_cib_FromAbiType<long>(lX),
      __zz_cib_::__zz_cib_FromAbiType<long>(lY)
    );
  }
  static ::PoDoFo::PdfPainter* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class464(::PoDoFo::PdfPainterMM* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfPainterMM* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class464(::PoDoFo::PdfPainter* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfPainterMM*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class465 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainterMM>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainterMM>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainterMM>::SetStrokeWidthMM_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainterMM>::DrawLineMM_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainterMM>::RectangleMM_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainterMM>::EllipseMM_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainterMM>::DrawTextMM_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainterMM>::DrawTextMM_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainterMM>::DrawImageMM_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainterMM>::DrawXObjectMM_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainterMM>::LineToMM_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainterMM>::MoveToMM_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainterMM>::__zz_cib_CastTo__zz_cib_Class464),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPainterMM>::__zz_cib_CastFrom__zz_cib_Class464)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 14 };
  return &methodTable;
}
}}}
