#include "podofo/base/PdfDefines.h"
#include "podofo/base/PdfDictionary.h"
#include "podofo/base/PdfEncoding.h"
#include "podofo/base/PdfName.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfRect.h"
#include "podofo/base/PdfString.h"
#include "podofo/base/PdfVecObjects.h"
#include "podofo/doc/PdfAcroForm.h"
#include "podofo/doc/PdfDestination.h"
#include "podofo/doc/PdfDocument.h"
#include "podofo/doc/PdfElement.h"
#include "podofo/doc/PdfFileSpec.h"
#include "podofo/doc/PdfFont.h"
#include "podofo/doc/PdfFontCache.h"
#include "podofo/doc/PdfFontConfigWrapper.h"
#include "podofo/doc/PdfInfo.h"
#include "podofo/doc/PdfMemDocument.h"
#include "podofo/doc/PdfNamesTree.h"
#include "podofo/doc/PdfOutlines.h"
#include "podofo/doc/PdfPage.h"
#include "podofo/doc/PdfPagesTree.h"
#include "podofo/doc/PdfStreamedDocument.h"
#include "podofo/doc/PdfXObject.h"
#include <vector>

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
template<> struct __zz_cib_Delegator<::PoDoFo::PdfDocument>;
template <>
class __zz_cib_Generic<::PoDoFo::PdfDocument> : public ::PoDoFo::PdfDocument {
public:
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfDocument>;

  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::PoDoFo::PdfDocument>;

  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_GetMethodTable, bool bEmpty)
    : ::PoDoFo::PdfDocument::PdfDocument(    std::move(bEmpty))
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_methodTableHelper(__zz_cib_GetMethodTable)
  {}
  bool IsDocAssemblyAllowed() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::IsDocAssemblyAllowed_0>(
        __zz_cib_h
      )
    );
  }
  bool IsHighPrintAllowed() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::IsHighPrintAllowed_1>(
        __zz_cib_h
      )
    );
  }
  bool IsFillAndSignAllowed() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::IsFillAndSignAllowed_2>(
        __zz_cib_h
      )
    );
  }
  bool IsEditNotesAllowed() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::IsEditNotesAllowed_3>(
        __zz_cib_h
      )
    );
  }
  ::PoDoFo::EPdfVersion GetPdfVersion() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<::PoDoFo::EPdfVersion>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<::PoDoFo::EPdfVersion>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetPdfVersion_4>(
        __zz_cib_h
      )
    );
  }
  ::PoDoFo::EPdfWriteMode GetWriteMode() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<::PoDoFo::EPdfWriteMode>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<::PoDoFo::EPdfWriteMode>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetWriteMode_5>(
        __zz_cib_h
      )
    );
  }
  bool IsLinearized() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::IsLinearized_6>(
        __zz_cib_h
      )
    );
  }
  bool IsCopyAllowed() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::IsCopyAllowed_7>(
        __zz_cib_h
      )
    );
  }
  bool IsPrintAllowed() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::IsPrintAllowed_8>(
        __zz_cib_h
      )
    );
  }
  bool IsAccessibilityAllowed() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::IsAccessibilityAllowed_9>(
        __zz_cib_h
      )
    );
  }
  bool IsEditAllowed() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::IsEditAllowed_10>(
        __zz_cib_h
      )
    );
  }
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = void(__zz_cib_decl *) (__zz_cib_Proxy);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_Delete_11>(
      __zz_cib_h
    );
  }
  void __zz_cib_ReleaseProxy() { __zz_cib_h_ = nullptr; }
  __ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib_Generic, ::PoDoFo::PdfDocument)

private:
  __zz_cib_Proxy __zz_cib_h_;
  const __zz_cib_MethodTableHelper __zz_cib_methodTableHelper;

  const __zz_cib_MethodTableHelper& __zz_cib_GetMethodTableHelper() const {
    return __zz_cib_methodTableHelper;
  }
  friend struct __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>;
  using __zz_cib_MethodId = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class417::__zz_cib_Generic::__zz_cib_MethodId;
};
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfDocument> : public ::PoDoFo::PdfDocument {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfDocument>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfDocument>;

  using ::PoDoFo::PdfDocument::PdfDocument;

  static void __zz_cib_decl __zz_cib_Delete_0(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<::PoDoFo::EPdfWriteMode> __zz_cib_decl GetWriteMode_1(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::EPdfWriteMode>(
      __zz_cib_obj->GetWriteMode()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::EPdfVersion> __zz_cib_decl GetPdfVersion_2(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::EPdfVersion>(
      __zz_cib_obj->GetPdfVersion()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsLinearized_3(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->IsLinearized()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfInfo*> __zz_cib_decl GetInfo_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfInfo*>(
      __zz_cib_obj->::PoDoFo::PdfDocument::GetInfo()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfOutlines*> __zz_cib_decl GetOutlines_5(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> bCreate) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfOutlines*>(
      __zz_cib_obj->::PoDoFo::PdfDocument::GetOutlines(
        __zz_cib_::__zz_cib_FromAbiType<bool>(bCreate)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfNamesTree*> __zz_cib_decl GetNamesTree_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> bCreate) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfNamesTree*>(
      __zz_cib_obj->::PoDoFo::PdfDocument::GetNamesTree(
        __zz_cib_::__zz_cib_FromAbiType<bool>(bCreate)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfAcroForm*> __zz_cib_decl GetAcroForm_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> bCreate, __zz_cib_AbiType_t<::PoDoFo::EPdfAcroFormDefaulAppearance> eDefaultAppearance) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfAcroForm*>(
      __zz_cib_obj->::PoDoFo::PdfDocument::GetAcroForm(
        __zz_cib_::__zz_cib_FromAbiType<bool>(bCreate),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfAcroFormDefaulAppearance>(eDefaultAppearance)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfPagesTree*> __zz_cib_decl GetPagesTree_8(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfPagesTree*>(
      __zz_cib_obj->::PoDoFo::PdfDocument::GetPagesTree()
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl GetPageCount_9(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::PoDoFo::PdfDocument::GetPageCount()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfPage*> __zz_cib_decl GetPage_10(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> nIndex) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfPage*>(
      __zz_cib_obj->::PoDoFo::PdfDocument::GetPage(
        __zz_cib_::__zz_cib_FromAbiType<int>(nIndex)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfFont*> __zz_cib_decl CreateFont_11(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszFontName, __zz_cib_AbiType_t<bool> bSymbolCharset, __zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding* const> pEncoding, __zz_cib_AbiType_t<::PoDoFo::PdfFontCache::EFontCreationFlags> eFontCreationFlags, __zz_cib_AbiType_t<bool> bEmbedd) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfFont*>(
      __zz_cib_obj->::PoDoFo::PdfDocument::CreateFont(
        __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFontName),
        __zz_cib_::__zz_cib_FromAbiType<bool>(bSymbolCharset),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncoding* const>(pEncoding),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfFontCache::EFontCreationFlags>(eFontCreationFlags),
        __zz_cib_::__zz_cib_FromAbiType<bool>(bEmbedd)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfFont*> __zz_cib_decl CreateFont_12(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszFontName, __zz_cib_AbiType_t<bool> bBold, __zz_cib_AbiType_t<bool> bItalic, __zz_cib_AbiType_t<bool> bSymbolCharset, __zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding* const> pEncoding, __zz_cib_AbiType_t<::PoDoFo::PdfFontCache::EFontCreationFlags> eFontCreationFlags, __zz_cib_AbiType_t<bool> bEmbedd, __zz_cib_AbiType_t<const char*> pszFileName) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfFont*>(
      __zz_cib_obj->::PoDoFo::PdfDocument::CreateFont(
        __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFontName),
        __zz_cib_::__zz_cib_FromAbiType<bool>(bBold),
        __zz_cib_::__zz_cib_FromAbiType<bool>(bItalic),
        __zz_cib_::__zz_cib_FromAbiType<bool>(bSymbolCharset),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncoding* const>(pEncoding),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfFontCache::EFontCreationFlags>(eFontCreationFlags),
        __zz_cib_::__zz_cib_FromAbiType<bool>(bEmbedd),
        __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFileName)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfFont*> __zz_cib_decl CreateFont_13(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<FT_Face> face, __zz_cib_AbiType_t<bool> bSymbolCharset, __zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding* const> pEncoding, __zz_cib_AbiType_t<bool> bEmbedd) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfFont*>(
      __zz_cib_obj->::PoDoFo::PdfDocument::CreateFont(
        __zz_cib_::__zz_cib_FromAbiType<FT_Face>(face),
        __zz_cib_::__zz_cib_FromAbiType<bool>(bSymbolCharset),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncoding* const>(pEncoding),
        __zz_cib_::__zz_cib_FromAbiType<bool>(bEmbedd)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfFont*> __zz_cib_decl CreateDuplicateFontType1_14(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfFont*> pFont, __zz_cib_AbiType_t<const char*> pszSuffix) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfFont*>(
      __zz_cib_obj->::PoDoFo::PdfDocument::CreateDuplicateFontType1(
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfFont*>(pFont),
        __zz_cib_::__zz_cib_FromAbiType<const char*>(pszSuffix)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfFont*> __zz_cib_decl CreateFontSubset_15(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszFontName, __zz_cib_AbiType_t<bool> bBold, __zz_cib_AbiType_t<bool> bItalic, __zz_cib_AbiType_t<bool> bSymbolCharset, __zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding* const> pEncoding, __zz_cib_AbiType_t<const char*> pszFileName) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfFont*>(
      __zz_cib_obj->::PoDoFo::PdfDocument::CreateFontSubset(
        __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFontName),
        __zz_cib_::__zz_cib_FromAbiType<bool>(bBold),
        __zz_cib_::__zz_cib_FromAbiType<bool>(bItalic),
        __zz_cib_::__zz_cib_FromAbiType<bool>(bSymbolCharset),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncoding* const>(pEncoding),
        __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFileName)
      )
    );
  }
  static __zz_cib_AbiType_t<FT_Library> __zz_cib_decl GetFontLibrary_16(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<FT_Library>(
      __zz_cib_obj->::PoDoFo::PdfDocument::GetFontLibrary()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl EmbedSubsetFonts_17(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfDocument::EmbedSubsetFonts();
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfPage*> __zz_cib_decl CreatePage_18(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfRect&> rSize) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfPage*>(
      __zz_cib_obj->::PoDoFo::PdfDocument::CreatePage(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect&>(rSize)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl CreatePages_19(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::std::vector<::PoDoFo::PdfRect>&> vecSizes) {
    __zz_cib_obj->::PoDoFo::PdfDocument::CreatePages(
      __zz_cib_::__zz_cib_FromAbiType<const ::std::vector<::PoDoFo::PdfRect>&>(vecSizes)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfPage*> __zz_cib_decl InsertPage_20(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfRect&> rSize, __zz_cib_AbiType_t<int> atIndex) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfPage*>(
      __zz_cib_obj->::PoDoFo::PdfDocument::InsertPage(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect&>(rSize),
        __zz_cib_::__zz_cib_FromAbiType<int>(atIndex)
      )
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfDocument&> __zz_cib_decl Append_21(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfMemDocument&> rDoc, __zz_cib_AbiType_t<bool> bAppendAll) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfDocument&>(
      __zz_cib_obj->::PoDoFo::PdfDocument::Append(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfMemDocument&>(rDoc),
        __zz_cib_::__zz_cib_FromAbiType<bool>(bAppendAll)
      )
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfDocument&> __zz_cib_decl InsertExistingPageAt_22(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfMemDocument&> rDoc, __zz_cib_AbiType_t<int> nPageIndex, __zz_cib_AbiType_t<int> nAtIndex) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfDocument&>(
      __zz_cib_obj->::PoDoFo::PdfDocument::InsertExistingPageAt(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfMemDocument&>(rDoc),
        __zz_cib_::__zz_cib_FromAbiType<int>(nPageIndex),
        __zz_cib_::__zz_cib_FromAbiType<int>(nAtIndex)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfRect> __zz_cib_decl FillXObjectFromDocumentPage_23(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfXObject*> pXObj, __zz_cib_AbiType_t<const ::PoDoFo::PdfMemDocument&> rDoc, __zz_cib_AbiType_t<int> nPage, __zz_cib_AbiType_t<bool> bUseTrimBox) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfRect>(
      __zz_cib_obj->::PoDoFo::PdfDocument::FillXObjectFromDocumentPage(
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfXObject*>(pXObj),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfMemDocument&>(rDoc),
        __zz_cib_::__zz_cib_FromAbiType<int>(nPage),
        __zz_cib_::__zz_cib_FromAbiType<bool>(bUseTrimBox)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfRect> __zz_cib_decl FillXObjectFromExistingPage_24(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfXObject*> pXObj, __zz_cib_AbiType_t<int> nPage, __zz_cib_AbiType_t<bool> bUseTrimBox) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfRect>(
      __zz_cib_obj->::PoDoFo::PdfDocument::FillXObjectFromExistingPage(
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfXObject*>(pXObj),
        __zz_cib_::__zz_cib_FromAbiType<int>(nPage),
        __zz_cib_::__zz_cib_FromAbiType<bool>(bUseTrimBox)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfRect> __zz_cib_decl FillXObjectFromPage_25(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfXObject*> pXObj, __zz_cib_AbiType_t<const ::PoDoFo::PdfPage*> pPage, __zz_cib_AbiType_t<bool> bUseTrimBox, __zz_cib_AbiType_t<unsigned int> difference) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfRect>(
      __zz_cib_obj->::PoDoFo::PdfDocument::FillXObjectFromPage(
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfXObject*>(pXObj),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfPage*>(pPage),
        __zz_cib_::__zz_cib_FromAbiType<bool>(bUseTrimBox),
        __zz_cib_::__zz_cib_FromAbiType<unsigned int>(difference)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl AttachFile_26(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfFileSpec&> rFileSpec) {
    __zz_cib_obj->::PoDoFo::PdfDocument::AttachFile(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfFileSpec&>(rFileSpec)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfFileSpec*> __zz_cib_decl GetAttachment_27(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> rName) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfFileSpec*>(
      __zz_cib_obj->::PoDoFo::PdfDocument::GetAttachment(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(rName)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl AddNamedDestination_28(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfDestination&> rDest, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> rsName) {
    __zz_cib_obj->::PoDoFo::PdfDocument::AddNamedDestination(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfDestination&>(rDest),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(rsName)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetPageMode_29(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::EPdfPageMode> inMode) {
    __zz_cib_obj->::PoDoFo::PdfDocument::SetPageMode(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfPageMode>(inMode)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::EPdfPageMode> __zz_cib_decl GetPageMode_30(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::EPdfPageMode>(
      __zz_cib_obj->::PoDoFo::PdfDocument::GetPageMode()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetUseFullScreen_31(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfDocument::SetUseFullScreen();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetPageLayout_32(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::EPdfPageLayout> inLayout) {
    __zz_cib_obj->::PoDoFo::PdfDocument::SetPageLayout(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfPageLayout>(inLayout)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetHideToolbar_33(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfDocument::SetHideToolbar();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetHideMenubar_34(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfDocument::SetHideMenubar();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetHideWindowUI_35(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfDocument::SetHideWindowUI();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetFitWindow_36(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfDocument::SetFitWindow();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetCenterWindow_37(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfDocument::SetCenterWindow();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetDisplayDocTitle_38(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfDocument::SetDisplayDocTitle();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetPrintScaling_39(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfName&> inScalingType) {
    __zz_cib_obj->::PoDoFo::PdfDocument::SetPrintScaling(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfName&>(inScalingType)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetBaseURI_40(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const std::string&> inBaseURI) {
    __zz_cib_obj->::PoDoFo::PdfDocument::SetBaseURI(
      __zz_cib_::__zz_cib_FromAbiType<const std::string&>(inBaseURI)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetLanguage_41(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const std::string&> inLanguage) {
    __zz_cib_obj->::PoDoFo::PdfDocument::SetLanguage(
      __zz_cib_::__zz_cib_FromAbiType<const std::string&>(inLanguage)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetBindingDirection_42(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfName&> inDirection) {
    __zz_cib_obj->::PoDoFo::PdfDocument::SetBindingDirection(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfName&>(inDirection)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsPrintAllowed_43(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->IsPrintAllowed()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsEditAllowed_44(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->IsEditAllowed()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsCopyAllowed_45(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->IsCopyAllowed()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsEditNotesAllowed_46(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->IsEditNotesAllowed()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsFillAndSignAllowed_47(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->IsFillAndSignAllowed()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsAccessibilityAllowed_48(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->IsAccessibilityAllowed()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsDocAssemblyAllowed_49(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->IsDocAssemblyAllowed()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsHighPrintAllowed_50(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->IsHighPrintAllowed()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfVecObjects*> __zz_cib_decl GetObjects_51(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfVecObjects*>(
      __zz_cib_obj->::PoDoFo::PdfDocument::GetObjects()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfVecObjects*> __zz_cib_decl GetObjects_52(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfVecObjects*>(
      __zz_cib_obj->::PoDoFo::PdfDocument::GetObjects()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetFontConfigWrapper_53(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfFontConfigWrapper&> rFontConfig) {
    __zz_cib_obj->::PoDoFo::PdfDocument::SetFontConfigWrapper(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfFontConfigWrapper&>(rFontConfig)
    );
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_54(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_GetMethodTable, __zz_cib_AbiType_t<bool> bEmpty) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfDocument>(__zz_cib_proxy, __zz_cib_GetMethodTable,     __zz_cib_::__zz_cib_FromAbiType<bool>(bEmpty));
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetInfo_55(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfInfo*> pInfo) {
    __zz_cib_obj->::PoDoFo::PdfDocument::SetInfo(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfInfo*>(pInfo)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_decl GetCatalog_56(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfDocument::GetCatalog()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfObject*> __zz_cib_decl GetCatalog_57(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfDocument::GetCatalog()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetCatalog_58(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfObject*> pObject) {
    __zz_cib_obj->::PoDoFo::PdfDocument::SetCatalog(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pObject)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_decl GetTrailer_59(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfDocument::GetTrailer()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfObject*> __zz_cib_decl GetTrailer_60(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfDocument::GetTrailer()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetTrailer_61(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfObject*> pObject) {
    __zz_cib_obj->::PoDoFo::PdfDocument::SetTrailer(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pObject)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_decl GetNamedObjectFromCatalog_62(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszName) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfDocument::GetNamedObjectFromCatalog(
        __zz_cib_::__zz_cib_FromAbiType<const char*>(pszName)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl InitPagesTree_63(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfDocument::InitPagesTree();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl FixObjectReferences_64(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfObject*> pObject, __zz_cib_AbiType_t<int> difference) {
    __zz_cib_obj->::PoDoFo::PdfDocument::FixObjectReferences(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pObject),
      __zz_cib_::__zz_cib_FromAbiType<int>(difference)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetViewerPreference_65(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> whichPref, __zz_cib_AbiType_t<const ::PoDoFo::PdfObject&> valueObj) {
    __zz_cib_obj->::PoDoFo::PdfDocument::SetViewerPreference(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(whichPref),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfObject&>(valueObj)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetViewerPreference_66(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> whichPref, __zz_cib_AbiType_t<bool> inValue) {
    __zz_cib_obj->::PoDoFo::PdfDocument::SetViewerPreference(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(whichPref),
      __zz_cib_::__zz_cib_FromAbiType<bool>(inValue)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Clear_67(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfDocument::Clear();
  }
  static std::uint32_t __zz_cib_decl __zz_cib_GetClassId(::PoDoFo::PdfDocument** __zz_cib_obj) {
    static bool classIdRepoPopulated = false;
    if (!classIdRepoPopulated) {
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfMemDocument))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class456::__zz_cib_classId;
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfStreamedDocument))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class473::__zz_cib_classId;
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfDocument))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class417::__zz_cib_classId;
      classIdRepoPopulated = true;
    }
    auto tdx = std::type_index(typeid(**__zz_cib_obj));
    auto itr = __zz_cib_gClassIdRepo.find(tdx);
    if (itr != __zz_cib_gClassIdRepo.end()) return itr->second;
    {
      auto* obj = dynamic_cast<::PoDoFo::PdfMemDocument*>(*__zz_cib_obj);
      if (obj) {
        *__zz_cib_obj = obj;
        return __zz_cib_gClassIdRepo[tdx] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class456::__zz_cib_classId;
      }
    }
    {
      auto* obj = dynamic_cast<::PoDoFo::PdfStreamedDocument*>(*__zz_cib_obj);
      if (obj) {
        *__zz_cib_obj = obj;
        return __zz_cib_gClassIdRepo[tdx] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class473::__zz_cib_classId;
      }
    }
    return __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class417::__zz_cib_classId;
  }
  static void __zz_cib_decl __zz_cib_ReleaseProxy(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->__zz_cib_ReleaseProxy();
}
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class417 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::__zz_cib_Delete_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::GetWriteMode_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::GetPdfVersion_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::IsLinearized_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::GetInfo_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::GetOutlines_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::GetNamesTree_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::GetAcroForm_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::GetPagesTree_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::GetPageCount_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::GetPage_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::CreateFont_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::CreateFont_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::CreateFont_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::CreateDuplicateFontType1_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::CreateFontSubset_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::GetFontLibrary_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::EmbedSubsetFonts_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::CreatePage_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::CreatePages_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::InsertPage_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::Append_21),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::InsertExistingPageAt_22),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::FillXObjectFromDocumentPage_23),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::FillXObjectFromExistingPage_24),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::FillXObjectFromPage_25),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::AttachFile_26),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::GetAttachment_27),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::AddNamedDestination_28),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::SetPageMode_29),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::GetPageMode_30),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::SetUseFullScreen_31),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::SetPageLayout_32),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::SetHideToolbar_33),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::SetHideMenubar_34),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::SetHideWindowUI_35),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::SetFitWindow_36),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::SetCenterWindow_37),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::SetDisplayDocTitle_38),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::SetPrintScaling_39),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::SetBaseURI_40),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::SetLanguage_41),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::SetBindingDirection_42),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::IsPrintAllowed_43),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::IsEditAllowed_44),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::IsCopyAllowed_45),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::IsEditNotesAllowed_46),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::IsFillAndSignAllowed_47),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::IsAccessibilityAllowed_48),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::IsDocAssemblyAllowed_49),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::IsHighPrintAllowed_50),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::GetObjects_51),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::GetObjects_52),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::SetFontConfigWrapper_53),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::__zz_cib_New_54),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::SetInfo_55),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::GetCatalog_56),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::GetCatalog_57),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::SetCatalog_58),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::GetTrailer_59),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::GetTrailer_60),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::SetTrailer_61),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::GetNamedObjectFromCatalog_62),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::InitPagesTree_63),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::FixObjectReferences_64),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::SetViewerPreference_65),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::SetViewerPreference_66),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::Clear_67),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::__zz_cib_GetClassId),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::__zz_cib_ReleaseProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 70 };
  return &methodTable;
}
}}}
