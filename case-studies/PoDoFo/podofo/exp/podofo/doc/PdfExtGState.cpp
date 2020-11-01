#include "podofo/base/PdfName.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfVecObjects.h"
#include "podofo/base/PdfWriter.h"
#include "podofo/doc/PdfDocument.h"
#include "podofo/doc/PdfExtGState.h"
#include "podofo/doc/PdfPage.h"

namespace PoDoFo {

PoDoFo::PdfExtGState::PdfExtGState(__zz_cib_AbiType h)
  : ::PoDoFo::PdfElement(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class418(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfExtGState::PdfExtGState(PdfExtGState&& rhs)
  : ::PoDoFo::PdfElement(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfExtGState::PdfExtGState(const ::PoDoFo::PdfExtGState& __zz_cib_param0)
  : PoDoFo::PdfExtGState(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfExtGState::PdfExtGState(::PoDoFo::PdfVecObjects* pParent)
  : PoDoFo::PdfExtGState(__zz_cib_MyHelper::__zz_cib_New_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}

PoDoFo::PdfExtGState::PdfExtGState(::PoDoFo::PdfDocument* pParent)
  : PoDoFo::PdfExtGState(__zz_cib_MyHelper::__zz_cib_New_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}

PoDoFo::PdfExtGState::~PdfExtGState() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_3(
    h
  );
}

const ::PoDoFo::PdfName& PoDoFo::PdfExtGState::GetIdentifier() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(
    __zz_cib_MyHelper::GetIdentifier_4<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfName&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfExtGState::SetFillOpacity(float opac) {
    __zz_cib_MyHelper::SetFillOpacity_5<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(opac)>(std::move(opac))
    );
  }

void PoDoFo::PdfExtGState::SetStrokeOpacity(float opac) {
    __zz_cib_MyHelper::SetStrokeOpacity_6<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(opac)>(std::move(opac))
    );
  }

void PoDoFo::PdfExtGState::SetBlendMode(const char* blendMode) {
    __zz_cib_MyHelper::SetBlendMode_7<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(blendMode)>(std::move(blendMode))
    );
  }

void PoDoFo::PdfExtGState::SetOverprint(bool enable) {
    __zz_cib_MyHelper::SetOverprint_8<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(enable)>(std::move(enable))
    );
  }

void PoDoFo::PdfExtGState::SetFillOverprint(bool enable) {
    __zz_cib_MyHelper::SetFillOverprint_9<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(enable)>(std::move(enable))
    );
  }

void PoDoFo::PdfExtGState::SetStrokeOverprint(bool enable) {
    __zz_cib_MyHelper::SetStrokeOverprint_10<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(enable)>(std::move(enable))
    );
  }

void PoDoFo::PdfExtGState::SetNonZeroOverprint(bool enable) {
    __zz_cib_MyHelper::SetNonZeroOverprint_11<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(enable)>(std::move(enable))
    );
  }

void PoDoFo::PdfExtGState::SetRenderingIntent(const char* intent) {
    __zz_cib_MyHelper::SetRenderingIntent_12<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(intent)>(std::move(intent))
    );
  }

void PoDoFo::PdfExtGState::SetFrequency(double frequency) {
    __zz_cib_MyHelper::SetFrequency_13<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(frequency)>(std::move(frequency))
    );
  }
}
