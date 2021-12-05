#include "podofo/base/PdfEncoding.h"
#include "podofo/base/PdfName.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfVecObjects.h"
#include "podofo/doc/PdfFontMetrics.h"
#include "podofo/doc/PdfFontSimple.h"

namespace PoDoFo {

PoDoFo::PdfFontSimple::PdfFontSimple(__zz_cib_AbiType h)
  : ::PoDoFo::PdfFont(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class430(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfFontSimple::PdfFontSimple(PdfFontSimple&& rhs)
  : ::PoDoFo::PdfFont(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfFontSimple::~PdfFontSimple() {
  __zz_cib_MyHelper::__zz_cib_ReleaseProxy(this);
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_0(
    h
  );
}

PoDoFo::PdfFontSimple::PdfFontSimple(::PoDoFo::PdfFontMetrics* pMetrics, const ::PoDoFo::PdfEncoding* const pEncoding, ::PoDoFo::PdfVecObjects* pParent)
  : PoDoFo::PdfFontSimple(__zz_cib_MyHelper::__zz_cib_New_1(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(pMetrics)>(std::move(pMetrics)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pEncoding)>(std::move(pEncoding)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}

PoDoFo::PdfFontSimple::PdfFontSimple(::PoDoFo::PdfFontMetrics* pMetrics, const ::PoDoFo::PdfEncoding* const pEncoding, ::PoDoFo::PdfObject* pObject)
  : PoDoFo::PdfFontSimple(__zz_cib_MyHelper::__zz_cib_New_2(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(pMetrics)>(std::move(pMetrics)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pEncoding)>(std::move(pEncoding)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pObject)>(std::move(pObject))))
{}

void PoDoFo::PdfFontSimple::EmbedFont() {
    __zz_cib_MyHelper::EmbedFont_3<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

void PoDoFo::PdfFontSimple::Init(bool bEmbed, const ::PoDoFo::PdfName& rsSubType) {
    __zz_cib_MyHelper::Init_4<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bEmbed)>(std::move(bEmbed)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rsSubType)>(rsSubType)
    );
  }
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfFontSimple> {
  using __zz_cib_Delegatee = ::PoDoFo::PdfFontSimple;
  static __zz_cib_AbiType_t<void> __zz_cib_decl EmbedFontFile_0(::PoDoFo::PdfFontSimple* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfObject*> pDescriptor) {
    __zz_cib_obj->EmbedFontFile(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pDescriptor)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetItalic_1(::PoDoFo::PdfFontSimple* __zz_cib_obj, __zz_cib_AbiType_t<bool> bItalic) {
    __zz_cib_obj->SetItalic(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bItalic)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl EmbedFont_2(::PoDoFo::PdfFontSimple* __zz_cib_obj) {
    __zz_cib_obj->EmbedFont();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl EmbedSubsetFont_3(::PoDoFo::PdfFontSimple* __zz_cib_obj) {
    __zz_cib_obj->EmbedSubsetFont();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl AddUsedSubsettingGlyphs_4(::PoDoFo::PdfFontSimple* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> sText, __zz_cib_AbiType_t<long> lStringLen) {
    __zz_cib_obj->AddUsedSubsettingGlyphs(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(sText),
      __zz_cib_::__zz_cib_FromAbiType<long>(lStringLen)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl WriteStringToStream_5(::PoDoFo::PdfFontSimple* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> rsString, __zz_cib_AbiType_t<::PoDoFo::PdfStream*> pStream) {
    __zz_cib_obj->WriteStringToStream(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(rsString),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfStream*>(pStream)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl AddUsedGlyphname_6(::PoDoFo::PdfFontSimple* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszGlyphName) {
    __zz_cib_obj->AddUsedGlyphname(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pszGlyphName)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetBold_7(::PoDoFo::PdfFontSimple* __zz_cib_obj, __zz_cib_AbiType_t<bool> bBold) {
    __zz_cib_obj->SetBold(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bBold)
    );
  }
  static void __zz_cib_decl __zz_cib_Delete_8(::PoDoFo::PdfFontSimple* __zz_cib_obj) {
    __zz_cib_Helper_t<::PoDoFo::PdfFontSimple>::__zz_cib_ReleaseHandle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class441 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontSimple>::EmbedFontFile_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontSimple>::SetItalic_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontSimple>::EmbedFont_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontSimple>::EmbedSubsetFont_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontSimple>::AddUsedSubsettingGlyphs_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontSimple>::WriteStringToStream_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontSimple>::AddUsedGlyphname_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontSimple>::SetBold_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontSimple>::__zz_cib_Delete_8)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 9 };
  return &methodTable;
}
}}}

namespace __zz_cib_ {
template<>
const __zz_cib_MethodTable* __zz_cib_Helper<::PoDoFo::PdfFontSimple>::__zz_cib_GetProxyMethodTable() {
  return __zz_cib_::__zz_cib_Class333::__zz_cib_Class441::__zz_cib_GetMethodTable();
}
}

