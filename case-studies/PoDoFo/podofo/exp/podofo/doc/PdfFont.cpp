#include "podofo/base/PdfEncoding.h"
#include "podofo/base/PdfName.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfStream.h"
#include "podofo/base/PdfString.h"
#include "podofo/base/PdfVecObjects.h"
#include "podofo/base/PdfWriter.h"
#include "podofo/doc/PdfFont.h"
#include "podofo/doc/PdfFontCID.h"
#include "podofo/doc/PdfFontFactory.h"
#include "podofo/doc/PdfFontMetrics.h"
#include "podofo/doc/PdfFontSimple.h"
#include "podofo/doc/PdfFontTrueType.h"
#include "podofo/doc/PdfFontType1.h"
#include "podofo/doc/PdfFontType1Base14.h"
#include "podofo/doc/PdfFontType3.h"
#include "podofo/doc/PdfPage.h"

#include "__zz_cib_internal/__zz_cib_CibPoDoFo-generic.h"

namespace PoDoFo {

PoDoFo::PdfFont::PdfFont(__zz_cib_AbiType h)
  : ::PoDoFo::PdfElement(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class418(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfFont::PdfFont(PdfFont&& rhs)
  : ::PoDoFo::PdfElement(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfFont::PdfFont(::PoDoFo::PdfFontMetrics* pMetrics, const ::PoDoFo::PdfEncoding* const pEncoding, ::PoDoFo::PdfVecObjects* pParent)
  : PoDoFo::PdfFont(__zz_cib_MyHelper::__zz_cib_New_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pMetrics)>(std::move(pMetrics)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pEncoding)>(std::move(pEncoding)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}

PoDoFo::PdfFont::PdfFont(::PoDoFo::PdfFontMetrics* pMetrics, const ::PoDoFo::PdfEncoding* const pEncoding, ::PoDoFo::PdfObject* pObject)
  : PoDoFo::PdfFont(__zz_cib_MyHelper::__zz_cib_New_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pMetrics)>(std::move(pMetrics)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pEncoding)>(std::move(pEncoding)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pObject)>(std::move(pObject))))
{}

PoDoFo::PdfFont::~PdfFont() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_2(
    h
  );
}

void PoDoFo::PdfFont::SetFontSize(float fSize) {
    __zz_cib_MyHelper::SetFontSize_3<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(fSize)>(std::move(fSize))
    );
  }

float PoDoFo::PdfFont::GetFontSize() const {
  return __zz_cib_::__zz_cib_FromAbiType<float>(
    __zz_cib_MyHelper::GetFontSize_4<__zz_cib_::__zz_cib_AbiType_t<float>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfFont::SetFontScale(float fScale) {
    __zz_cib_MyHelper::SetFontScale_5<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(fScale)>(std::move(fScale))
    );
  }

float PoDoFo::PdfFont::GetFontScale() const {
  return __zz_cib_::__zz_cib_FromAbiType<float>(
    __zz_cib_MyHelper::GetFontScale_6<__zz_cib_::__zz_cib_AbiType_t<float>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfFont::SetFontCharSpace(float fCharSpace) {
    __zz_cib_MyHelper::SetFontCharSpace_7<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(fCharSpace)>(std::move(fCharSpace))
    );
  }

float PoDoFo::PdfFont::GetFontCharSpace() const {
  return __zz_cib_::__zz_cib_FromAbiType<float>(
    __zz_cib_MyHelper::GetFontCharSpace_8<__zz_cib_::__zz_cib_AbiType_t<float>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfFont::SetWordSpace(float fWordSpace) {
    __zz_cib_MyHelper::SetWordSpace_9<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(fWordSpace)>(std::move(fWordSpace))
    );
  }

float PoDoFo::PdfFont::GetWordSpace() const {
  return __zz_cib_::__zz_cib_FromAbiType<float>(
    __zz_cib_MyHelper::GetWordSpace_10<__zz_cib_::__zz_cib_AbiType_t<float>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfFont::SetUnderlined(bool bUnder) {
    __zz_cib_MyHelper::SetUnderlined_11<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bUnder)>(std::move(bUnder))
    );
  }

bool PoDoFo::PdfFont::IsUnderlined() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsUnderlined_12<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfFont::IsBold() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsBold_13<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfFont::IsItalic() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsItalic_14<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfFont::SetStrikeOut(bool bStrikeOut) {
    __zz_cib_MyHelper::SetStrikeOut_15<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bStrikeOut)>(std::move(bStrikeOut))
    );
  }

bool PoDoFo::PdfFont::IsStrikeOut() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsStrikeOut_16<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const ::PoDoFo::PdfName& PoDoFo::PdfFont::GetIdentifier() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(
    __zz_cib_MyHelper::GetIdentifier_17<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfName&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const ::PoDoFo::PdfEncoding* PoDoFo::PdfFont::GetEncoding() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncoding*>(
    __zz_cib_MyHelper::GetEncoding_18<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const ::PoDoFo::PdfFontMetrics* PoDoFo::PdfFont::GetFontMetrics() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfFontMetrics*>(
    __zz_cib_MyHelper::GetFontMetrics_19<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfFontMetrics*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfFontMetrics* PoDoFo::PdfFont::GetFontMetrics2() {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfFontMetrics*>(
    __zz_cib_MyHelper::GetFontMetrics2_20<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfFontMetrics*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfFont::WriteStringToStream(const ::PoDoFo::PdfString& rsString, ::PoDoFo::PdfStream* pStream) {
    __zz_cib_MyHelper::WriteStringToStream_21<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rsString)>(rsString),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pStream)>(std::move(pStream))
    );
  }

void PoDoFo::PdfFont::EmbedFont() {
    __zz_cib_MyHelper::EmbedFont_22<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

void PoDoFo::PdfFont::AddUsedSubsettingGlyphs(const ::PoDoFo::PdfString& sText, long lStringLen) {
    __zz_cib_MyHelper::AddUsedSubsettingGlyphs_23<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(sText)>(sText),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lStringLen)>(std::move(lStringLen))
    );
  }

void PoDoFo::PdfFont::AddUsedGlyphname(const char* pszGlyphName) {
    __zz_cib_MyHelper::AddUsedGlyphname_24<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszGlyphName)>(std::move(pszGlyphName))
    );
  }

void PoDoFo::PdfFont::EmbedSubsetFont() {
    __zz_cib_MyHelper::EmbedSubsetFont_25<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

bool PoDoFo::PdfFont::IsSubsetting() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsSubsetting_26<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const ::PoDoFo::PdfName& PoDoFo::PdfFont::GetBaseFont() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(
    __zz_cib_MyHelper::GetBaseFont_27<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfName&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfFont::SetBold(bool bBold) {
    __zz_cib_MyHelper::SetBold_28<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bBold)>(std::move(bBold))
    );
  }

void PoDoFo::PdfFont::SetItalic(bool bItalic) {
    __zz_cib_MyHelper::SetItalic_29<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bItalic)>(std::move(bItalic))
    );
  }
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template<>
class __zz_cib_Generic<::PoDoFo::PdfFont> : public ::PoDoFo::PdfFont {
  using __zz_cib_MethodId = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class430::__zz_cib_MethodId;
  static __zz_cib_MethodTableHelper& __zz_cib_GetMethodTableHelper() {
    static __zz_cib_MethodTableHelper mtableHelper(__zz_cib_CibPoDoFoGetMethodTable(
      __zz_cib_ids::__zz_cib_Class333::__zz_cib_Class430::__zz_cib_classId));
    return mtableHelper;
  }
  explicit __zz_cib_Generic(__zz_cib_AbiType h) : ::PoDoFo::PdfFont(h) {}
public:
  static ::PoDoFo::PdfFont* __zz_cib_FromHandle(__zz_cib_AbiType h) {
    return new __zz_cib_Generic(h);
  }
  void SetItalic(bool bItalic) override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_AbiType, __zz_cib_AbiType_t<decltype(bItalic)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::SetItalic_29>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(bItalic)>(std::move(bItalic))
    );
  }
  void EmbedFont() override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_AbiType);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::EmbedFont_22>(
      __zz_cib_h
    );
  }
  void EmbedSubsetFont() override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_AbiType);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::EmbedSubsetFont_25>(
      __zz_cib_h
    );
  }
  void AddUsedSubsettingGlyphs(const ::PoDoFo::PdfString& sText, long lStringLen) override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_AbiType, __zz_cib_AbiType_t<decltype(sText)>, __zz_cib_AbiType_t<decltype(lStringLen)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::AddUsedSubsettingGlyphs_23>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(sText)>(sText),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lStringLen)>(std::move(lStringLen))
    );
  }
  void WriteStringToStream(const ::PoDoFo::PdfString& rsString, ::PoDoFo::PdfStream* pStream) override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_AbiType, __zz_cib_AbiType_t<decltype(rsString)>, __zz_cib_AbiType_t<decltype(pStream)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::WriteStringToStream_21>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(rsString)>(rsString),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pStream)>(std::move(pStream))
    );
  }
  void AddUsedGlyphname(const char* pszGlyphName) override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_AbiType, __zz_cib_AbiType_t<decltype(pszGlyphName)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::AddUsedGlyphname_24>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszGlyphName)>(std::move(pszGlyphName))
    );
  }
  void SetBold(bool bBold) override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_AbiType, __zz_cib_AbiType_t<decltype(bBold)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::SetBold_28>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(bBold)>(std::move(bBold))
    );
  }
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    auto __zz_cib_h = __zz_cib_Helper<::PoDoFo::PdfFont>::__zz_cib_ReleaseHandle(this);
    using __zz_cib_ProcType = void(__zz_cib_decl *) (__zz_cib_AbiType);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_Delete_2>(
      __zz_cib_h
    );
  }
};
}

namespace __zz_cib_ {
template<>
::PoDoFo::PdfFont* __zz_cib_Helper<::PoDoFo::PdfFont>::__zz_cib_CreateProxy(__zz_cib_AbiType h) {
  switch(__zz_cib_GetClassId(&h)) {
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class431::__zz_cib_classId:
    return __zz_cib_Helper<PoDoFo::PdfFontCID>::__zz_cib_FromHandle(
      __zz_cib_Helper<PoDoFo::PdfFontCID>::__zz_cib_CastFrom__zz_cib_Class430(h)
    );
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class443::__zz_cib_classId:
    return __zz_cib_Helper<PoDoFo::PdfFontTrueType>::__zz_cib_FromHandle(
      __zz_cib_Helper<PoDoFo::PdfFontTrueType>::__zz_cib_CastFrom__zz_cib_Class430(h)
    );
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class444::__zz_cib_classId:
    return __zz_cib_Helper<PoDoFo::PdfFontType1>::__zz_cib_FromHandle(
      __zz_cib_Helper<PoDoFo::PdfFontType1>::__zz_cib_CastFrom__zz_cib_Class430(h)
    );
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class446::__zz_cib_classId:
    return __zz_cib_Helper<PoDoFo::PdfFontType1Base14>::__zz_cib_FromHandle(
      __zz_cib_Helper<PoDoFo::PdfFontType1Base14>::__zz_cib_CastFrom__zz_cib_Class430(h)
    );
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class447::__zz_cib_classId:
    return __zz_cib_Helper<PoDoFo::PdfFontType3>::__zz_cib_FromHandle(
      __zz_cib_Helper<PoDoFo::PdfFontType3>::__zz_cib_CastFrom__zz_cib_Class430(h)
    );
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class441::__zz_cib_classId:
    return __zz_cib_Helper<PoDoFo::PdfFontSimple>::__zz_cib_FromHandle(
      __zz_cib_Helper<PoDoFo::PdfFontSimple>::__zz_cib_CastFrom__zz_cib_Class430(h)
    );
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class430::__zz_cib_classId: {
    auto* const __zz_cib_obj = new ::PoDoFo::PdfFont(h);
    __zz_cib_RegisterProxy(h, __zz_cib_obj);
    return __zz_cib_obj;
  }
  default: break;
  }
  auto* const __zz_cib_obj = ::__zz_cib_::__zz_cib_Generic<::PoDoFo::PdfFont>::__zz_cib_FromHandle(h);
  __zz_cib_RegisterProxy(h, __zz_cib_obj);
  return __zz_cib_obj;
}
}
