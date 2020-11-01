#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfDefines.h"
#include "podofo/base/PdfDictionary.h"
#include "podofo/base/PdfInputStream.h"
#include "podofo/base/PdfName.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfRect.h"
#include "podofo/base/PdfReference.h"
#include "podofo/base/PdfVecObjects.h"
#include "podofo/doc/PdfAnnotation.h"
#include "podofo/doc/PdfDocument.h"
#include "podofo/doc/PdfField.h"
#include "podofo/doc/PdfPage.h"

#include "__zz_cib_internal/__zz_cib_CibPoDoFo-generic.h"

namespace PoDoFo {

PoDoFo::PdfPage::PdfPage(__zz_cib_AbiType h)
  : ::PoDoFo::PdfElement(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class418(h))
  , ::PoDoFo::PdfCanvas(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class335(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfPage::PdfPage(PdfPage&& rhs)
  : ::PoDoFo::PdfElement(std::move(rhs))
  , ::PoDoFo::PdfCanvas(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfPage::PdfPage(const ::PoDoFo::PdfPage& __zz_cib_param0)
  : PoDoFo::PdfPage(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfPage::PdfPage(const ::PoDoFo::PdfRect& rSize, ::PoDoFo::PdfDocument* pParent)
  : PoDoFo::PdfPage(__zz_cib_MyHelper::__zz_cib_New_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(rSize)>(rSize),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}

PoDoFo::PdfPage::PdfPage(const ::PoDoFo::PdfRect& rSize, ::PoDoFo::PdfVecObjects* pParent)
  : PoDoFo::PdfPage(__zz_cib_MyHelper::__zz_cib_New_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(rSize)>(rSize),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}

PoDoFo::PdfPage::PdfPage(::PoDoFo::PdfObject* pObject, const std::deque<PdfObject*>& listOfParents)
  : PoDoFo::PdfPage(__zz_cib_MyHelper::__zz_cib_New_3(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pObject)>(std::move(pObject)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(listOfParents)>(listOfParents)))
{}

PoDoFo::PdfPage::~PdfPage() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_4(
    h
  );
}

::PoDoFo::PdfRect PoDoFo::PdfPage::GetPageSize() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfRect>(
    __zz_cib_MyHelper::GetPageSize_5<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfRect>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfPage::SetPageWidth(int newWidth) {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::SetPageWidth_6<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(newWidth)>(std::move(newWidth))
    )
  );
}

bool PoDoFo::PdfPage::SetPageHeight(int newHeight) {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::SetPageHeight_7<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(newHeight)>(std::move(newHeight))
    )
  );
}

void PoDoFo::PdfPage::SetTrimBox(const ::PoDoFo::PdfRect& rSize) {
    __zz_cib_MyHelper::SetTrimBox_8<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rSize)>(rSize)
    );
  }

unsigned int PoDoFo::PdfPage::GetPageNumber() const {
  return __zz_cib_::__zz_cib_FromAbiType<unsigned int>(
    __zz_cib_MyHelper::GetPageNumber_9<__zz_cib_::__zz_cib_AbiType_t<unsigned int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfRect PoDoFo::PdfPage::CreateStandardPageSize(const ::PoDoFo::EPdfPageSize ePageSize, bool bLandscape) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfRect>(
    __zz_cib_MyHelper::CreateStandardPageSize_10<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfRect>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(ePageSize)>(std::move(ePageSize)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bLandscape)>(std::move(bLandscape))
    )
  );
}

::PoDoFo::PdfObject* PoDoFo::PdfPage::GetContents() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::GetContents_11<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfObject* PoDoFo::PdfPage::GetContentsForAppending() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::GetContentsForAppending_12<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfObject* PoDoFo::PdfPage::GetResources() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::GetResources_13<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfRect PoDoFo::PdfPage::GetMediaBox() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfRect>(
    __zz_cib_MyHelper::GetMediaBox_14<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfRect>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfRect PoDoFo::PdfPage::GetCropBox() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfRect>(
    __zz_cib_MyHelper::GetCropBox_15<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfRect>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfRect PoDoFo::PdfPage::GetTrimBox() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfRect>(
    __zz_cib_MyHelper::GetTrimBox_16<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfRect>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfRect PoDoFo::PdfPage::GetBleedBox() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfRect>(
    __zz_cib_MyHelper::GetBleedBox_17<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfRect>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfRect PoDoFo::PdfPage::GetArtBox() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfRect>(
    __zz_cib_MyHelper::GetArtBox_18<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfRect>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

int PoDoFo::PdfPage::GetRotation() const {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::GetRotation_19<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfPage::SetRotation(int nRotation) {
    __zz_cib_MyHelper::SetRotation_20<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nRotation)>(std::move(nRotation))
    );
  }

int PoDoFo::PdfPage::GetNumAnnots() const {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::GetNumAnnots_21<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfAnnotation* PoDoFo::PdfPage::CreateAnnotation(::PoDoFo::EPdfAnnotation eType, const ::PoDoFo::PdfRect& rRect) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfAnnotation*>(
    __zz_cib_MyHelper::CreateAnnotation_22<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfAnnotation*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eType)>(std::move(eType)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rRect)>(rRect)
    )
  );
}

::PoDoFo::PdfAnnotation* PoDoFo::PdfPage::GetAnnotation(int index) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfAnnotation*>(
    __zz_cib_MyHelper::GetAnnotation_23<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfAnnotation*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(index)>(std::move(index))
    )
  );
}

void PoDoFo::PdfPage::DeleteAnnotation(int index) {
    __zz_cib_MyHelper::DeleteAnnotation_24<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(index)>(std::move(index))
    );
  }

void PoDoFo::PdfPage::DeleteAnnotation(const ::PoDoFo::PdfReference& ref) {
    __zz_cib_MyHelper::DeleteAnnotation_25<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(ref)>(ref)
    );
  }

int PoDoFo::PdfPage::GetNumFields() const {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::GetNumFields_26<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfField PoDoFo::PdfPage::GetField(int index) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfField>(
    __zz_cib_MyHelper::GetField_27<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfField>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(index)>(std::move(index))
    )
  );
}

const ::PoDoFo::PdfField PoDoFo::PdfPage::GetField(int index) const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfField>(
    __zz_cib_MyHelper::GetField_28<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfField>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(index)>(std::move(index))
    )
  );
}

::PoDoFo::PdfObject* PoDoFo::PdfPage::GetFromResources(const ::PoDoFo::PdfName& rType, const ::PoDoFo::PdfName& rKey) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::GetFromResources_29<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rType)>(rType),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rKey)>(rKey)
    )
  );
}

const ::PoDoFo::PdfObject* PoDoFo::PdfPage::GetInheritedKey(const ::PoDoFo::PdfName& rName) const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::GetInheritedKey_30<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rName)>(rName)
    )
  );
}

::PoDoFo::PdfObject* PoDoFo::PdfPage::GetOwnAnnotationsArray(bool bCreate, ::PoDoFo::PdfDocument* pDocument) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::GetOwnAnnotationsArray_31<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bCreate)>(std::move(bCreate)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pDocument)>(std::move(pDocument))
    )
  );
}

void PoDoFo::PdfPage::SetICCProfile(const char* pszCSTag, ::PoDoFo::PdfInputStream* pStream, ::PoDoFo::pdf_int64 nColorComponents, ::PoDoFo::EPdfColorSpace eAlternateColorSpace) {
    __zz_cib_MyHelper::SetICCProfile_32<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszCSTag)>(std::move(pszCSTag)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pStream)>(std::move(pStream)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nColorComponents)>(std::move(nColorComponents)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eAlternateColorSpace)>(std::move(eAlternateColorSpace))
    );
  }
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template<>
class __zz_cib_Generic<::PoDoFo::PdfPage> : public ::PoDoFo::PdfPage {
  using __zz_cib_MethodId = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class460::__zz_cib_MethodId;
  static __zz_cib_MethodTableHelper& __zz_cib_GetMethodTableHelper() {
    static __zz_cib_MethodTableHelper mtableHelper(__zz_cib_CibPoDoFoGetMethodTable(
      __zz_cib_ids::__zz_cib_Class333::__zz_cib_Class460::__zz_cib_classId));
    return mtableHelper;
  }
  explicit __zz_cib_Generic(__zz_cib_AbiType h) : ::PoDoFo::PdfPage(h) {}
public:
  static ::PoDoFo::PdfPage* __zz_cib_FromHandle(__zz_cib_AbiType h) {
    return new __zz_cib_Generic(h);
  }
  void SetICCProfile(const char* pszCSTag, ::PoDoFo::PdfInputStream* pStream, ::PoDoFo::pdf_int64 nColorComponents, ::PoDoFo::EPdfColorSpace eAlternateColorSpace) override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_AbiType, __zz_cib_AbiType_t<decltype(pszCSTag)>, __zz_cib_AbiType_t<decltype(pStream)>, __zz_cib_AbiType_t<decltype(nColorComponents)>, __zz_cib_AbiType_t<decltype(eAlternateColorSpace)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::SetICCProfile_32>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszCSTag)>(std::move(pszCSTag)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pStream)>(std::move(pStream)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nColorComponents)>(std::move(nColorComponents)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eAlternateColorSpace)>(std::move(eAlternateColorSpace))
    );
  }
  void SetRotation(int nRotation) override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_AbiType, __zz_cib_AbiType_t<decltype(nRotation)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::SetRotation_20>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(nRotation)>(std::move(nRotation))
    );
  }
  ::PoDoFo::PdfRect GetArtBox() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<::PoDoFo::PdfRect>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<::PoDoFo::PdfRect>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetArtBox_18>(
        __zz_cib_h
      )
    );
  }
  ::PoDoFo::PdfRect GetTrimBox() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<::PoDoFo::PdfRect>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<::PoDoFo::PdfRect>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetTrimBox_16>(
        __zz_cib_h
      )
    );
  }
  ::PoDoFo::PdfObject* GetContents() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<::PoDoFo::PdfObject*>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetContents_11>(
        __zz_cib_h
      )
    );
  }
  int GetNumAnnots() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<int>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<int>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetNumAnnots_21>(
        __zz_cib_h
      )
    );
  }
  ::PoDoFo::PdfObject* GetResources() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<::PoDoFo::PdfObject*>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetResources_13>(
        __zz_cib_h
      )
    );
  }
  ::PoDoFo::PdfRect GetMediaBox() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<::PoDoFo::PdfRect>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<::PoDoFo::PdfRect>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetMediaBox_14>(
        __zz_cib_h
      )
    );
  }
  ::PoDoFo::PdfRect GetPageSize() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<::PoDoFo::PdfRect>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<::PoDoFo::PdfRect>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetPageSize_5>(
        __zz_cib_h
      )
    );
  }
  int GetRotation() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<int>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<int>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetRotation_19>(
        __zz_cib_h
      )
    );
  }
  ::PoDoFo::PdfRect GetBleedBox() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<::PoDoFo::PdfRect>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<::PoDoFo::PdfRect>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetBleedBox_17>(
        __zz_cib_h
      )
    );
  }
  ::PoDoFo::PdfObject* GetContentsForAppending() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<::PoDoFo::PdfObject*>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetContentsForAppending_12>(
        __zz_cib_h
      )
    );
  }
  ::PoDoFo::PdfRect GetCropBox() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<::PoDoFo::PdfRect>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<::PoDoFo::PdfRect>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetCropBox_15>(
        __zz_cib_h
      )
    );
  }
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    auto __zz_cib_h = __zz_cib_Helper<::PoDoFo::PdfPage>::__zz_cib_ReleaseHandle(this);
    using __zz_cib_ProcType = void(__zz_cib_decl *) (__zz_cib_AbiType);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_Delete_4>(
      __zz_cib_h
    );
  }
};
}

namespace __zz_cib_ {
template<>
::PoDoFo::PdfPage* __zz_cib_Helper<::PoDoFo::PdfPage>::__zz_cib_CreateProxy(__zz_cib_AbiType h) {
  switch(__zz_cib_GetClassId(&h)) {
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class460::__zz_cib_classId: {
    auto* const __zz_cib_obj = new ::PoDoFo::PdfPage(h);
    __zz_cib_RegisterProxy(h, __zz_cib_obj);
    return __zz_cib_obj;
  }
  default: break;
  }
  auto* const __zz_cib_obj = ::__zz_cib_::__zz_cib_Generic<::PoDoFo::PdfPage>::__zz_cib_FromHandle(h);
  __zz_cib_RegisterProxy(h, __zz_cib_obj);
  return __zz_cib_obj;
}
}
