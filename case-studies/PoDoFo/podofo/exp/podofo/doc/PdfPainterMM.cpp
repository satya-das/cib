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

namespace PoDoFo {

PoDoFo::PdfPainterMM::PdfPainterMM(__zz_cib_AbiType h)
  : ::PoDoFo::PdfPainter(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class464(h))
  , __zz_cib_h_(h)
{}

PoDoFo::PdfPainterMM::PdfPainterMM(PdfPainterMM&& rhs)
  : ::PoDoFo::PdfPainter(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

PoDoFo::PdfPainterMM::PdfPainterMM()
  : PoDoFo::PdfPainterMM(__zz_cib_MyHelper::__zz_cib_New_0())
{}

PoDoFo::PdfPainterMM::~PdfPainterMM() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

void PoDoFo::PdfPainterMM::SetStrokeWidthMM(long lWidth) {
    __zz_cib_MyHelper::SetStrokeWidthMM_2<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lWidth)>(std::move(lWidth))
    );
  }

void PoDoFo::PdfPainterMM::DrawLineMM(long lStartX, long lStartY, long lEndX, long lEndY) {
    __zz_cib_MyHelper::DrawLineMM_3<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lStartX)>(std::move(lStartX)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lStartY)>(std::move(lStartY)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lEndX)>(std::move(lEndX)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lEndY)>(std::move(lEndY))
    );
  }

void PoDoFo::PdfPainterMM::RectangleMM(long lX, long lY, long lWidth, long lHeight) {
    __zz_cib_MyHelper::RectangleMM_4<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lX)>(std::move(lX)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lY)>(std::move(lY)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lWidth)>(std::move(lWidth)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lHeight)>(std::move(lHeight))
    );
  }

void PoDoFo::PdfPainterMM::EllipseMM(long lX, long lY, long lWidth, long lHeight) {
    __zz_cib_MyHelper::EllipseMM_5<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lX)>(std::move(lX)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lY)>(std::move(lY)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lWidth)>(std::move(lWidth)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lHeight)>(std::move(lHeight))
    );
  }

void PoDoFo::PdfPainterMM::DrawTextMM(long lX, long lY, const ::PoDoFo::PdfString& sText) {
    __zz_cib_MyHelper::DrawTextMM_6<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lX)>(std::move(lX)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lY)>(std::move(lY)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(sText)>(sText)
    );
  }

void PoDoFo::PdfPainterMM::DrawTextMM(long lX, long lY, const ::PoDoFo::PdfString& sText, long lLen) {
    __zz_cib_MyHelper::DrawTextMM_7<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lX)>(std::move(lX)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lY)>(std::move(lY)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(sText)>(sText),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))
    );
  }

void PoDoFo::PdfPainterMM::DrawImageMM(long lX, long lY, ::PoDoFo::PdfImage* pObject, double dScaleX, double dScaleY) {
    __zz_cib_MyHelper::DrawImageMM_8<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lX)>(std::move(lX)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lY)>(std::move(lY)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pObject)>(std::move(pObject)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dScaleX)>(std::move(dScaleX)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dScaleY)>(std::move(dScaleY))
    );
  }

void PoDoFo::PdfPainterMM::DrawXObjectMM(long lX, long lY, ::PoDoFo::PdfXObject* pObject, double dScaleX, double dScaleY) {
    __zz_cib_MyHelper::DrawXObjectMM_9<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lX)>(std::move(lX)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lY)>(std::move(lY)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pObject)>(std::move(pObject)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dScaleX)>(std::move(dScaleX)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dScaleY)>(std::move(dScaleY))
    );
  }

void PoDoFo::PdfPainterMM::LineToMM(long lX, long lY) {
    __zz_cib_MyHelper::LineToMM_10<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lX)>(std::move(lX)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lY)>(std::move(lY))
    );
  }

void PoDoFo::PdfPainterMM::MoveToMM(long lX, long lY) {
    __zz_cib_MyHelper::MoveToMM_11<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lX)>(std::move(lX)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lY)>(std::move(lY))
    );
  }
}
