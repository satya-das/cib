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

#include <typeinfo>
#include <typeindex>
#include <cstdint>
#include <unordered_map>

extern std::unordered_map<std::type_index, std::uint32_t> __zz_cib_gClassIdRepo;

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
struct __zz_cib_Delegator<::PoDoFo::PdfFont> : public ::PoDoFo::PdfFont {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFont>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfFont>;
  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::PoDoFo::PdfFont>;

  using ::PoDoFo::PdfFont::PdfFont;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0(__zz_cib_AbiType_t<::PoDoFo::PdfFontMetrics*> pMetrics, __zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding* const> pEncoding, __zz_cib_AbiType_t<::PoDoFo::PdfVecObjects*> pParent) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfFontMetrics*>(pMetrics),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncoding* const>(pEncoding),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVecObjects*>(pParent));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<::PoDoFo::PdfFontMetrics*> pMetrics, __zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding* const> pEncoding, __zz_cib_AbiType_t<::PoDoFo::PdfObject*> pObject) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfFontMetrics*>(pMetrics),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncoding* const>(pEncoding),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pObject));
  }
  static void __zz_cib_decl __zz_cib_Delete_2(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetFontSize_3(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<float> fSize) {
    __zz_cib_obj->::PoDoFo::PdfFont::SetFontSize(
      __zz_cib_::__zz_cib_FromAbiType<float>(fSize)
    );
  }
  static __zz_cib_AbiType_t<float> __zz_cib_decl GetFontSize_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<float>(
      __zz_cib_obj->::PoDoFo::PdfFont::GetFontSize()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetFontScale_5(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<float> fScale) {
    __zz_cib_obj->::PoDoFo::PdfFont::SetFontScale(
      __zz_cib_::__zz_cib_FromAbiType<float>(fScale)
    );
  }
  static __zz_cib_AbiType_t<float> __zz_cib_decl GetFontScale_6(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<float>(
      __zz_cib_obj->::PoDoFo::PdfFont::GetFontScale()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetFontCharSpace_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<float> fCharSpace) {
    __zz_cib_obj->::PoDoFo::PdfFont::SetFontCharSpace(
      __zz_cib_::__zz_cib_FromAbiType<float>(fCharSpace)
    );
  }
  static __zz_cib_AbiType_t<float> __zz_cib_decl GetFontCharSpace_8(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<float>(
      __zz_cib_obj->::PoDoFo::PdfFont::GetFontCharSpace()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetWordSpace_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<float> fWordSpace) {
    __zz_cib_obj->::PoDoFo::PdfFont::SetWordSpace(
      __zz_cib_::__zz_cib_FromAbiType<float>(fWordSpace)
    );
  }
  static __zz_cib_AbiType_t<float> __zz_cib_decl GetWordSpace_10(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<float>(
      __zz_cib_obj->::PoDoFo::PdfFont::GetWordSpace()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetUnderlined_11(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> bUnder) {
    __zz_cib_obj->::PoDoFo::PdfFont::SetUnderlined(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bUnder)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsUnderlined_12(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfFont::IsUnderlined()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsBold_13(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfFont::IsBold()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsItalic_14(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfFont::IsItalic()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetStrikeOut_15(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> bStrikeOut) {
    __zz_cib_obj->::PoDoFo::PdfFont::SetStrikeOut(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bStrikeOut)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsStrikeOut_16(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfFont::IsStrikeOut()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> __zz_cib_decl GetIdentifier_17(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfName&>(
      __zz_cib_obj->::PoDoFo::PdfFont::GetIdentifier()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding*> __zz_cib_decl GetEncoding_18(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfEncoding*>(
      __zz_cib_obj->::PoDoFo::PdfFont::GetEncoding()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfFontMetrics*> __zz_cib_decl GetFontMetrics_19(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfFontMetrics*>(
      __zz_cib_obj->::PoDoFo::PdfFont::GetFontMetrics()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfFontMetrics*> __zz_cib_decl GetFontMetrics2_20(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfFontMetrics*>(
      __zz_cib_obj->::PoDoFo::PdfFont::GetFontMetrics2()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl WriteStringToStream_21(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> rsString, __zz_cib_AbiType_t<::PoDoFo::PdfStream*> pStream) {
    __zz_cib_obj->::PoDoFo::PdfFont::WriteStringToStream(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(rsString),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfStream*>(pStream)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl EmbedFont_22(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfFont::EmbedFont();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl AddUsedSubsettingGlyphs_23(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> sText, __zz_cib_AbiType_t<long> lStringLen) {
    __zz_cib_obj->::PoDoFo::PdfFont::AddUsedSubsettingGlyphs(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(sText),
      __zz_cib_::__zz_cib_FromAbiType<long>(lStringLen)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl AddUsedGlyphname_24(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszGlyphName) {
    __zz_cib_obj->::PoDoFo::PdfFont::AddUsedGlyphname(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pszGlyphName)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl EmbedSubsetFont_25(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfFont::EmbedSubsetFont();
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsSubsetting_26(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfFont::IsSubsetting()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> __zz_cib_decl GetBaseFont_27(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfName&>(
      __zz_cib_obj->::PoDoFo::PdfFont::GetBaseFont()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetBold_28(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> bBold) {
    __zz_cib_obj->::PoDoFo::PdfFont::SetBold(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bBold)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetItalic_29(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> bItalic) {
    __zz_cib_obj->::PoDoFo::PdfFont::SetItalic(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bItalic)
    );
  }
  static void __zz_cib_decl __zz_cib_RegisterProxy(::PoDoFo::PdfFont* obj, __zz_cib_Proxy proxy, __zz_cib_ProxyDeleter deleter) {
    __zz_cib_ProxyManagerDelegator::__zz_cib_RegisterProxy(obj, proxy, deleter);
  }
  static ::PoDoFo::PdfElement* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class418(::PoDoFo::PdfFont* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfFont* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class418(::PoDoFo::PdfElement* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfFont*>(__zz_cib_obj);
  }
  static std::uint32_t __zz_cib_decl __zz_cib_GetClassId(::PoDoFo::PdfFont** __zz_cib_obj) {
    static bool classIdRepoPopulated = false;
    if (!classIdRepoPopulated) {
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfFontCID))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class431::__zz_cib_classId;
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfFontTrueType))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class443::__zz_cib_classId;
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfFontType1))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class444::__zz_cib_classId;
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfFontType1Base14))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class446::__zz_cib_classId;
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfFontType3))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class447::__zz_cib_classId;
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfFontSimple))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class441::__zz_cib_classId;
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfFont))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class430::__zz_cib_classId;
      classIdRepoPopulated = true;
    }
    auto tdx = std::type_index(typeid(**__zz_cib_obj));
    auto itr = __zz_cib_gClassIdRepo.find(tdx);
    if (itr != __zz_cib_gClassIdRepo.end()) return itr->second;
    {
      auto* obj = dynamic_cast<::PoDoFo::PdfFontCID*>(*__zz_cib_obj);
      if (obj) {
        *__zz_cib_obj = obj;
        return __zz_cib_gClassIdRepo[tdx] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class431::__zz_cib_classId;
      }
    }
    {
      auto* obj = dynamic_cast<::PoDoFo::PdfFontTrueType*>(*__zz_cib_obj);
      if (obj) {
        *__zz_cib_obj = obj;
        return __zz_cib_gClassIdRepo[tdx] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class443::__zz_cib_classId;
      }
    }
    {
      auto* obj = dynamic_cast<::PoDoFo::PdfFontType1*>(*__zz_cib_obj);
      if (obj) {
        *__zz_cib_obj = obj;
        return __zz_cib_gClassIdRepo[tdx] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class444::__zz_cib_classId;
      }
    }
    {
      auto* obj = dynamic_cast<::PoDoFo::PdfFontType1Base14*>(*__zz_cib_obj);
      if (obj) {
        *__zz_cib_obj = obj;
        return __zz_cib_gClassIdRepo[tdx] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class446::__zz_cib_classId;
      }
    }
    {
      auto* obj = dynamic_cast<::PoDoFo::PdfFontType3*>(*__zz_cib_obj);
      if (obj) {
        *__zz_cib_obj = obj;
        return __zz_cib_gClassIdRepo[tdx] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class447::__zz_cib_classId;
      }
    }
    {
      auto* obj = dynamic_cast<::PoDoFo::PdfFontSimple*>(*__zz_cib_obj);
      if (obj) {
        *__zz_cib_obj = obj;
        return __zz_cib_gClassIdRepo[tdx] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class441::__zz_cib_classId;
      }
    }
    return __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class430::__zz_cib_classId;
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class430 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFont>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFont>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFont>::__zz_cib_Delete_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFont>::SetFontSize_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFont>::GetFontSize_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFont>::SetFontScale_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFont>::GetFontScale_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFont>::SetFontCharSpace_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFont>::GetFontCharSpace_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFont>::SetWordSpace_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFont>::GetWordSpace_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFont>::SetUnderlined_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFont>::IsUnderlined_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFont>::IsBold_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFont>::IsItalic_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFont>::SetStrikeOut_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFont>::IsStrikeOut_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFont>::GetIdentifier_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFont>::GetEncoding_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFont>::GetFontMetrics_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFont>::GetFontMetrics2_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFont>::WriteStringToStream_21),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFont>::EmbedFont_22),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFont>::AddUsedSubsettingGlyphs_23),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFont>::AddUsedGlyphname_24),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFont>::EmbedSubsetFont_25),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFont>::IsSubsetting_26),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFont>::GetBaseFont_27),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFont>::SetBold_28),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFont>::SetItalic_29),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFont>::__zz_cib_CastTo__zz_cib_Class418),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFont>::__zz_cib_CastFrom__zz_cib_Class418),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFont>::__zz_cib_GetClassId),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFont>::__zz_cib_RegisterProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 34 };
  return &methodTable;
}
}}}
