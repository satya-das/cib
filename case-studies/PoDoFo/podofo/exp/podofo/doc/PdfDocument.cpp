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

#include "__zz_cib_internal/__zz_cib_CibPoDoFo-generic.h"

namespace PoDoFo {

PoDoFo::PdfDocument::PdfDocument(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfDocument::PdfDocument(PdfDocument&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfDocument::~PdfDocument() {
  __zz_cib_MyHelper::__zz_cib_ReleaseProxy(this);
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_0(
    h
  );
}

::PoDoFo::PdfInfo* PoDoFo::PdfDocument::GetInfo() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfInfo*>(
    __zz_cib_MyHelper::GetInfo_4<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfInfo*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfOutlines* PoDoFo::PdfDocument::GetOutlines(bool bCreate) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutlines*>(
    __zz_cib_MyHelper::GetOutlines_5<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfOutlines*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bCreate)>(std::move(bCreate))
    )
  );
}

::PoDoFo::PdfNamesTree* PoDoFo::PdfDocument::GetNamesTree(bool bCreate) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfNamesTree*>(
    __zz_cib_MyHelper::GetNamesTree_6<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfNamesTree*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bCreate)>(std::move(bCreate))
    )
  );
}

::PoDoFo::PdfAcroForm* PoDoFo::PdfDocument::GetAcroForm(bool bCreate, ::PoDoFo::EPdfAcroFormDefaulAppearance eDefaultAppearance) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfAcroForm*>(
    __zz_cib_MyHelper::GetAcroForm_7<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfAcroForm*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bCreate)>(std::move(bCreate)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eDefaultAppearance)>(std::move(eDefaultAppearance))
    )
  );
}

::PoDoFo::PdfPagesTree* PoDoFo::PdfDocument::GetPagesTree() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfPagesTree*>(
    __zz_cib_MyHelper::GetPagesTree_8<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfPagesTree*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

int PoDoFo::PdfDocument::GetPageCount() const {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::GetPageCount_9<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfPage* PoDoFo::PdfDocument::GetPage(int nIndex) const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfPage*>(
    __zz_cib_MyHelper::GetPage_10<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfPage*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nIndex)>(std::move(nIndex))
    )
  );
}

::PoDoFo::PdfFont* PoDoFo::PdfDocument::CreateFont(const char* pszFontName, bool bSymbolCharset, const ::PoDoFo::PdfEncoding* const pEncoding, ::PoDoFo::PdfFontCache::EFontCreationFlags eFontCreationFlags, bool bEmbedd) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfFont*>(
    __zz_cib_MyHelper::CreateFont_11<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfFont*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszFontName)>(std::move(pszFontName)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bSymbolCharset)>(std::move(bSymbolCharset)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pEncoding)>(std::move(pEncoding)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eFontCreationFlags)>(std::move(eFontCreationFlags)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bEmbedd)>(std::move(bEmbedd))
    )
  );
}

::PoDoFo::PdfFont* PoDoFo::PdfDocument::CreateFont(const char* pszFontName, bool bBold, bool bItalic, bool bSymbolCharset, const ::PoDoFo::PdfEncoding* const pEncoding, ::PoDoFo::PdfFontCache::EFontCreationFlags eFontCreationFlags, bool bEmbedd, const char* pszFileName) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfFont*>(
    __zz_cib_MyHelper::CreateFont_12<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfFont*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszFontName)>(std::move(pszFontName)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bBold)>(std::move(bBold)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bItalic)>(std::move(bItalic)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bSymbolCharset)>(std::move(bSymbolCharset)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pEncoding)>(std::move(pEncoding)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eFontCreationFlags)>(std::move(eFontCreationFlags)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bEmbedd)>(std::move(bEmbedd)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszFileName)>(std::move(pszFileName))
    )
  );
}

::PoDoFo::PdfFont* PoDoFo::PdfDocument::CreateFont(FT_Face face, bool bSymbolCharset, const ::PoDoFo::PdfEncoding* const pEncoding, bool bEmbedd) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfFont*>(
    __zz_cib_MyHelper::CreateFont_13<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfFont*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(face)>(std::move(face)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bSymbolCharset)>(std::move(bSymbolCharset)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pEncoding)>(std::move(pEncoding)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bEmbedd)>(std::move(bEmbedd))
    )
  );
}

::PoDoFo::PdfFont* PoDoFo::PdfDocument::CreateDuplicateFontType1(::PoDoFo::PdfFont* pFont, const char* pszSuffix) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfFont*>(
    __zz_cib_MyHelper::CreateDuplicateFontType1_14<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfFont*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pFont)>(std::move(pFont)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszSuffix)>(std::move(pszSuffix))
    )
  );
}

::PoDoFo::PdfFont* PoDoFo::PdfDocument::CreateFontSubset(const char* pszFontName, bool bBold, bool bItalic, bool bSymbolCharset, const ::PoDoFo::PdfEncoding* const pEncoding, const char* pszFileName) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfFont*>(
    __zz_cib_MyHelper::CreateFontSubset_15<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfFont*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszFontName)>(std::move(pszFontName)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bBold)>(std::move(bBold)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bItalic)>(std::move(bItalic)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bSymbolCharset)>(std::move(bSymbolCharset)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pEncoding)>(std::move(pEncoding)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszFileName)>(std::move(pszFileName))
    )
  );
}

FT_Library PoDoFo::PdfDocument::GetFontLibrary() const {
  return __zz_cib_::__zz_cib_FromAbiType<FT_Library>(
    __zz_cib_MyHelper::GetFontLibrary_16<__zz_cib_::__zz_cib_AbiType_t<FT_Library>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfDocument::EmbedSubsetFonts() {
    __zz_cib_MyHelper::EmbedSubsetFonts_17<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

::PoDoFo::PdfPage* PoDoFo::PdfDocument::CreatePage(const ::PoDoFo::PdfRect& rSize) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfPage*>(
    __zz_cib_MyHelper::CreatePage_18<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfPage*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rSize)>(rSize)
    )
  );
}

void PoDoFo::PdfDocument::CreatePages(const ::std::vector<::PoDoFo::PdfRect>& vecSizes) {
    __zz_cib_MyHelper::CreatePages_19<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(vecSizes)>(vecSizes)
    );
  }

::PoDoFo::PdfPage* PoDoFo::PdfDocument::InsertPage(const ::PoDoFo::PdfRect& rSize, int atIndex) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfPage*>(
    __zz_cib_MyHelper::InsertPage_20<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfPage*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rSize)>(rSize),
      __zz_cib_::__zz_cib_ToAbiType<decltype(atIndex)>(std::move(atIndex))
    )
  );
}

const ::PoDoFo::PdfDocument& PoDoFo::PdfDocument::Append(const ::PoDoFo::PdfMemDocument& rDoc, bool bAppendAll) {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfDocument&>(
    __zz_cib_MyHelper::Append_21<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfDocument&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rDoc)>(rDoc),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bAppendAll)>(std::move(bAppendAll))
    )
  );
}

const ::PoDoFo::PdfDocument& PoDoFo::PdfDocument::InsertExistingPageAt(const ::PoDoFo::PdfMemDocument& rDoc, int nPageIndex, int nAtIndex) {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfDocument&>(
    __zz_cib_MyHelper::InsertExistingPageAt_22<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfDocument&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rDoc)>(rDoc),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nPageIndex)>(std::move(nPageIndex)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nAtIndex)>(std::move(nAtIndex))
    )
  );
}

::PoDoFo::PdfRect PoDoFo::PdfDocument::FillXObjectFromDocumentPage(::PoDoFo::PdfXObject* pXObj, const ::PoDoFo::PdfMemDocument& rDoc, int nPage, bool bUseTrimBox) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfRect>(
    __zz_cib_MyHelper::FillXObjectFromDocumentPage_23<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfRect>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pXObj)>(std::move(pXObj)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rDoc)>(rDoc),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nPage)>(std::move(nPage)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bUseTrimBox)>(std::move(bUseTrimBox))
    )
  );
}

::PoDoFo::PdfRect PoDoFo::PdfDocument::FillXObjectFromExistingPage(::PoDoFo::PdfXObject* pXObj, int nPage, bool bUseTrimBox) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfRect>(
    __zz_cib_MyHelper::FillXObjectFromExistingPage_24<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfRect>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pXObj)>(std::move(pXObj)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nPage)>(std::move(nPage)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bUseTrimBox)>(std::move(bUseTrimBox))
    )
  );
}

::PoDoFo::PdfRect PoDoFo::PdfDocument::FillXObjectFromPage(::PoDoFo::PdfXObject* pXObj, const ::PoDoFo::PdfPage* pPage, bool bUseTrimBox, unsigned int difference) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfRect>(
    __zz_cib_MyHelper::FillXObjectFromPage_25<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfRect>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pXObj)>(std::move(pXObj)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pPage)>(std::move(pPage)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bUseTrimBox)>(std::move(bUseTrimBox)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(difference)>(std::move(difference))
    )
  );
}

void PoDoFo::PdfDocument::AttachFile(const ::PoDoFo::PdfFileSpec& rFileSpec) {
    __zz_cib_MyHelper::AttachFile_26<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rFileSpec)>(rFileSpec)
    );
  }

::PoDoFo::PdfFileSpec* PoDoFo::PdfDocument::GetAttachment(const ::PoDoFo::PdfString& rName) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfFileSpec*>(
    __zz_cib_MyHelper::GetAttachment_27<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfFileSpec*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rName)>(rName)
    )
  );
}

void PoDoFo::PdfDocument::AddNamedDestination(const ::PoDoFo::PdfDestination& rDest, const ::PoDoFo::PdfString& rsName) {
    __zz_cib_MyHelper::AddNamedDestination_28<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rDest)>(rDest),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rsName)>(rsName)
    );
  }

void PoDoFo::PdfDocument::SetPageMode(::PoDoFo::EPdfPageMode inMode) {
    __zz_cib_MyHelper::SetPageMode_29<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(inMode)>(std::move(inMode))
    );
  }

::PoDoFo::EPdfPageMode PoDoFo::PdfDocument::GetPageMode() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfPageMode>(
    __zz_cib_MyHelper::GetPageMode_30<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::EPdfPageMode>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfDocument::SetUseFullScreen() {
    __zz_cib_MyHelper::SetUseFullScreen_31<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

void PoDoFo::PdfDocument::SetPageLayout(::PoDoFo::EPdfPageLayout inLayout) {
    __zz_cib_MyHelper::SetPageLayout_32<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(inLayout)>(std::move(inLayout))
    );
  }

void PoDoFo::PdfDocument::SetHideToolbar() {
    __zz_cib_MyHelper::SetHideToolbar_33<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

void PoDoFo::PdfDocument::SetHideMenubar() {
    __zz_cib_MyHelper::SetHideMenubar_34<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

void PoDoFo::PdfDocument::SetHideWindowUI() {
    __zz_cib_MyHelper::SetHideWindowUI_35<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

void PoDoFo::PdfDocument::SetFitWindow() {
    __zz_cib_MyHelper::SetFitWindow_36<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

void PoDoFo::PdfDocument::SetCenterWindow() {
    __zz_cib_MyHelper::SetCenterWindow_37<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

void PoDoFo::PdfDocument::SetDisplayDocTitle() {
    __zz_cib_MyHelper::SetDisplayDocTitle_38<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

void PoDoFo::PdfDocument::SetPrintScaling(::PoDoFo::PdfName& inScalingType) {
    __zz_cib_MyHelper::SetPrintScaling_39<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(inScalingType)>(inScalingType)
    );
  }

void PoDoFo::PdfDocument::SetBaseURI(const std::string& inBaseURI) {
    __zz_cib_MyHelper::SetBaseURI_40<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(inBaseURI)>(inBaseURI)
    );
  }

void PoDoFo::PdfDocument::SetLanguage(const std::string& inLanguage) {
    __zz_cib_MyHelper::SetLanguage_41<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(inLanguage)>(inLanguage)
    );
  }

void PoDoFo::PdfDocument::SetBindingDirection(::PoDoFo::PdfName& inDirection) {
    __zz_cib_MyHelper::SetBindingDirection_42<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(inDirection)>(inDirection)
    );
  }

::PoDoFo::PdfVecObjects* PoDoFo::PdfDocument::GetObjects() {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVecObjects*>(
    __zz_cib_MyHelper::GetObjects_51<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfVecObjects*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const ::PoDoFo::PdfVecObjects* PoDoFo::PdfDocument::GetObjects() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfVecObjects*>(
    __zz_cib_MyHelper::GetObjects_52<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfVecObjects*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfDocument::SetFontConfigWrapper(const ::PoDoFo::PdfFontConfigWrapper& rFontConfig) {
    __zz_cib_MyHelper::SetFontConfigWrapper_53<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rFontConfig)>(rFontConfig)
    );
  }

PoDoFo::PdfDocument::PdfDocument(bool bEmpty)
  : PoDoFo::PdfDocument(__zz_cib_MyHelper::__zz_cib_New_54(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(bEmpty)>(std::move(bEmpty))))
{}

void PoDoFo::PdfDocument::SetInfo(::PoDoFo::PdfInfo* pInfo) {
    __zz_cib_MyHelper::SetInfo_55<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pInfo)>(std::move(pInfo))
    );
  }

::PoDoFo::PdfObject* PoDoFo::PdfDocument::GetCatalog() {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::GetCatalog_56<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const ::PoDoFo::PdfObject* PoDoFo::PdfDocument::GetCatalog() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::GetCatalog_57<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfDocument::SetCatalog(::PoDoFo::PdfObject* pObject) {
    __zz_cib_MyHelper::SetCatalog_58<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pObject)>(std::move(pObject))
    );
  }

::PoDoFo::PdfObject* PoDoFo::PdfDocument::GetTrailer() {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::GetTrailer_59<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const ::PoDoFo::PdfObject* PoDoFo::PdfDocument::GetTrailer() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::GetTrailer_60<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfDocument::SetTrailer(::PoDoFo::PdfObject* pObject) {
    __zz_cib_MyHelper::SetTrailer_61<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pObject)>(std::move(pObject))
    );
  }

::PoDoFo::PdfObject* PoDoFo::PdfDocument::GetNamedObjectFromCatalog(const char* pszName) const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::GetNamedObjectFromCatalog_62<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszName)>(std::move(pszName))
    )
  );
}

void PoDoFo::PdfDocument::InitPagesTree() {
    __zz_cib_MyHelper::InitPagesTree_63<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

void PoDoFo::PdfDocument::FixObjectReferences(::PoDoFo::PdfObject* pObject, int difference) {
    __zz_cib_MyHelper::FixObjectReferences_64<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pObject)>(std::move(pObject)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(difference)>(std::move(difference))
    );
  }

void PoDoFo::PdfDocument::SetViewerPreference(const ::PoDoFo::PdfName& whichPref, const ::PoDoFo::PdfObject& valueObj) {
    __zz_cib_MyHelper::SetViewerPreference_65<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(whichPref)>(whichPref),
      __zz_cib_::__zz_cib_ToAbiType<decltype(valueObj)>(valueObj)
    );
  }

void PoDoFo::PdfDocument::SetViewerPreference(const ::PoDoFo::PdfName& whichPref, bool inValue) {
    __zz_cib_MyHelper::SetViewerPreference_66<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(whichPref)>(whichPref),
      __zz_cib_::__zz_cib_ToAbiType<decltype(inValue)>(std::move(inValue))
    );
  }

void PoDoFo::PdfDocument::Clear() {
    __zz_cib_MyHelper::Clear_67<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template<>
class __zz_cib_Generic<::PoDoFo::PdfDocument> : public ::PoDoFo::PdfDocument {
  using __zz_cib_MethodId = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class417::__zz_cib_MethodId;
  static __zz_cib_MethodTableHelper& __zz_cib_GetMethodTableHelper() {
    static __zz_cib_MethodTableHelper mtableHelper(__zz_cib_CibPoDoFoGetMethodTable(
      __zz_cib_ids::__zz_cib_Class333::__zz_cib_Class417::__zz_cib_classId));
    return mtableHelper;
  }
  explicit __zz_cib_Generic(__zz_cib_AbiType h) : ::PoDoFo::PdfDocument(h) {}
public:
  static ::PoDoFo::PdfDocument* __zz_cib_FromHandle(__zz_cib_AbiType h) {
    return new __zz_cib_Generic(h);
  }
  bool IsDocAssemblyAllowed() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::IsDocAssemblyAllowed_49>(
        __zz_cib_h
      )
    );
  }
  bool IsHighPrintAllowed() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::IsHighPrintAllowed_50>(
        __zz_cib_h
      )
    );
  }
  bool IsFillAndSignAllowed() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::IsFillAndSignAllowed_47>(
        __zz_cib_h
      )
    );
  }
  bool IsEditNotesAllowed() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::IsEditNotesAllowed_46>(
        __zz_cib_h
      )
    );
  }
  ::PoDoFo::EPdfVersion GetPdfVersion() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<::PoDoFo::EPdfVersion>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<::PoDoFo::EPdfVersion>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetPdfVersion_2>(
        __zz_cib_h
      )
    );
  }
  ::PoDoFo::EPdfWriteMode GetWriteMode() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<::PoDoFo::EPdfWriteMode>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<::PoDoFo::EPdfWriteMode>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetWriteMode_1>(
        __zz_cib_h
      )
    );
  }
  bool IsLinearized() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::IsLinearized_3>(
        __zz_cib_h
      )
    );
  }
  bool IsCopyAllowed() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::IsCopyAllowed_45>(
        __zz_cib_h
      )
    );
  }
  bool IsPrintAllowed() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::IsPrintAllowed_43>(
        __zz_cib_h
      )
    );
  }
  bool IsAccessibilityAllowed() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::IsAccessibilityAllowed_48>(
        __zz_cib_h
      )
    );
  }
  bool IsEditAllowed() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::IsEditAllowed_44>(
        __zz_cib_h
      )
    );
  }
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    auto __zz_cib_h = __zz_cib_Helper<::PoDoFo::PdfDocument>::__zz_cib_ReleaseHandle(this);
    using __zz_cib_ProcType = void(__zz_cib_decl *) (__zz_cib_AbiType);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_Delete_0>(
      __zz_cib_h
    );
  }
};
}

namespace __zz_cib_ {
template<>
::PoDoFo::PdfDocument* __zz_cib_Helper<::PoDoFo::PdfDocument>::__zz_cib_CreateProxy(__zz_cib_AbiType h) {
  switch(__zz_cib_GetClassId(&h)) {
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class456::__zz_cib_classId:
    return __zz_cib_Helper<PoDoFo::PdfMemDocument>::__zz_cib_FromHandle(
      __zz_cib_Helper<PoDoFo::PdfMemDocument>::__zz_cib_CastFrom__zz_cib_Class417(h)
    );
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class473::__zz_cib_classId:
    return __zz_cib_Helper<PoDoFo::PdfStreamedDocument>::__zz_cib_FromHandle(
      __zz_cib_Helper<PoDoFo::PdfStreamedDocument>::__zz_cib_CastFrom__zz_cib_Class417(h)
    );
  default: break;
  }
  auto* const __zz_cib_obj = ::__zz_cib_::__zz_cib_Generic<::PoDoFo::PdfDocument>::__zz_cib_FromHandle(h);
  return __zz_cib_obj;
}
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfDocument> {
  using __zz_cib_Delegatee = ::PoDoFo::PdfDocument;
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsDocAssemblyAllowed_0(const ::PoDoFo::PdfDocument* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->IsDocAssemblyAllowed()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsHighPrintAllowed_1(const ::PoDoFo::PdfDocument* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->IsHighPrintAllowed()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsFillAndSignAllowed_2(const ::PoDoFo::PdfDocument* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->IsFillAndSignAllowed()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsEditNotesAllowed_3(const ::PoDoFo::PdfDocument* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->IsEditNotesAllowed()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::EPdfVersion> __zz_cib_decl GetPdfVersion_4(const ::PoDoFo::PdfDocument* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::EPdfVersion>(
      __zz_cib_obj->GetPdfVersion()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::EPdfWriteMode> __zz_cib_decl GetWriteMode_5(const ::PoDoFo::PdfDocument* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::EPdfWriteMode>(
      __zz_cib_obj->GetWriteMode()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsLinearized_6(const ::PoDoFo::PdfDocument* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->IsLinearized()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsCopyAllowed_7(const ::PoDoFo::PdfDocument* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->IsCopyAllowed()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsPrintAllowed_8(const ::PoDoFo::PdfDocument* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->IsPrintAllowed()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsAccessibilityAllowed_9(const ::PoDoFo::PdfDocument* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->IsAccessibilityAllowed()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsEditAllowed_10(const ::PoDoFo::PdfDocument* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->IsEditAllowed()
    );
  }
  static void __zz_cib_decl __zz_cib_Delete_11(::PoDoFo::PdfDocument* __zz_cib_obj) {
    __zz_cib_Helper<::PoDoFo::PdfDocument>::__zz_cib_ReleaseHandle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class417 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::IsDocAssemblyAllowed_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::IsHighPrintAllowed_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::IsFillAndSignAllowed_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::IsEditNotesAllowed_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::GetPdfVersion_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::GetWriteMode_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::IsLinearized_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::IsCopyAllowed_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::IsPrintAllowed_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::IsAccessibilityAllowed_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::IsEditAllowed_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocument>::__zz_cib_Delete_11)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 12 };
  return &methodTable;
}
}}}

namespace __zz_cib_ {
template<>
const __zz_cib_MethodTable* __zz_cib_Helper<::PoDoFo::PdfDocument>::__zz_cib_GetProxyMethodTable() {
  return __zz_cib_::__zz_cib_Class333::__zz_cib_Class417::__zz_cib_GetMethodTable();
}
}

