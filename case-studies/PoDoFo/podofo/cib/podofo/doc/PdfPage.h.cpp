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
struct __zz_cib_Delegator<::PoDoFo::PdfPage> : public ::PoDoFo::PdfPage {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfPage>;
  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::PoDoFo::PdfPage>;

  using ::PoDoFo::PdfPage::PdfPage;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<const ::PoDoFo::PdfRect&> rSize, __zz_cib_AbiType_t<::PoDoFo::PdfDocument*> pParent) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect&>(rSize),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDocument*>(pParent));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<const ::PoDoFo::PdfRect&> rSize, __zz_cib_AbiType_t<::PoDoFo::PdfVecObjects*> pParent) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect&>(rSize),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVecObjects*>(pParent));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_3(__zz_cib_AbiType_t<::PoDoFo::PdfObject*> pObject, __zz_cib_AbiType_t<const std::deque<PdfObject*>&> listOfParents) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pObject),
    __zz_cib_::__zz_cib_FromAbiType<const std::deque<PdfObject*>&>(listOfParents));
  }
  static void __zz_cib_decl __zz_cib_Delete_4(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfRect> __zz_cib_decl GetPageSize_5(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfRect>(
      __zz_cib_obj->::PoDoFo::PdfPage::GetPageSize()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl SetPageWidth_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> newWidth) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfPage::SetPageWidth(
        __zz_cib_::__zz_cib_FromAbiType<int>(newWidth)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl SetPageHeight_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> newHeight) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfPage::SetPageHeight(
        __zz_cib_::__zz_cib_FromAbiType<int>(newHeight)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetTrimBox_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfRect&> rSize) {
    __zz_cib_obj->::PoDoFo::PdfPage::SetTrimBox(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect&>(rSize)
    );
  }
  static __zz_cib_AbiType_t<unsigned int> __zz_cib_decl GetPageNumber_9(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<unsigned int>(
      __zz_cib_obj->::PoDoFo::PdfPage::GetPageNumber()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfRect> __zz_cib_decl CreateStandardPageSize_10(__zz_cib_AbiType_t<const ::PoDoFo::EPdfPageSize> ePageSize, __zz_cib_AbiType_t<bool> bLandscape) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfRect>(
      ::PoDoFo::PdfPage::CreateStandardPageSize(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::EPdfPageSize>(ePageSize),
        __zz_cib_::__zz_cib_FromAbiType<bool>(bLandscape)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_decl GetContents_11(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfPage::GetContents()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_decl GetContentsForAppending_12(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfPage::GetContentsForAppending()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_decl GetResources_13(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfPage::GetResources()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfRect> __zz_cib_decl GetMediaBox_14(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfRect>(
      __zz_cib_obj->::PoDoFo::PdfPage::GetMediaBox()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfRect> __zz_cib_decl GetCropBox_15(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfRect>(
      __zz_cib_obj->::PoDoFo::PdfPage::GetCropBox()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfRect> __zz_cib_decl GetTrimBox_16(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfRect>(
      __zz_cib_obj->::PoDoFo::PdfPage::GetTrimBox()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfRect> __zz_cib_decl GetBleedBox_17(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfRect>(
      __zz_cib_obj->::PoDoFo::PdfPage::GetBleedBox()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfRect> __zz_cib_decl GetArtBox_18(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfRect>(
      __zz_cib_obj->::PoDoFo::PdfPage::GetArtBox()
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl GetRotation_19(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::PoDoFo::PdfPage::GetRotation()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetRotation_20(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> nRotation) {
    __zz_cib_obj->::PoDoFo::PdfPage::SetRotation(
      __zz_cib_::__zz_cib_FromAbiType<int>(nRotation)
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl GetNumAnnots_21(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::PoDoFo::PdfPage::GetNumAnnots()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfAnnotation*> __zz_cib_decl CreateAnnotation_22(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::EPdfAnnotation> eType, __zz_cib_AbiType_t<const ::PoDoFo::PdfRect&> rRect) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfAnnotation*>(
      __zz_cib_obj->::PoDoFo::PdfPage::CreateAnnotation(
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfAnnotation>(eType),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect&>(rRect)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfAnnotation*> __zz_cib_decl GetAnnotation_23(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> index) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfAnnotation*>(
      __zz_cib_obj->::PoDoFo::PdfPage::GetAnnotation(
        __zz_cib_::__zz_cib_FromAbiType<int>(index)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl DeleteAnnotation_24(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> index) {
    __zz_cib_obj->::PoDoFo::PdfPage::DeleteAnnotation(
      __zz_cib_::__zz_cib_FromAbiType<int>(index)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl DeleteAnnotation_25(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfReference&> ref) {
    __zz_cib_obj->::PoDoFo::PdfPage::DeleteAnnotation(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfReference&>(ref)
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl GetNumFields_26(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::PoDoFo::PdfPage::GetNumFields()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfField> __zz_cib_decl GetField_27(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> index) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfField>(
      __zz_cib_obj->::PoDoFo::PdfPage::GetField(
        __zz_cib_::__zz_cib_FromAbiType<int>(index)
      )
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfField> __zz_cib_decl GetField_28(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> index) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfField>(
      __zz_cib_obj->::PoDoFo::PdfPage::GetField(
        __zz_cib_::__zz_cib_FromAbiType<int>(index)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_decl GetFromResources_29(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> rType, __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> rKey) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfPage::GetFromResources(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(rType),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(rKey)
      )
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfObject*> __zz_cib_decl GetInheritedKey_30(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> rName) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfPage::GetInheritedKey(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(rName)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_decl GetOwnAnnotationsArray_31(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> bCreate, __zz_cib_AbiType_t<::PoDoFo::PdfDocument*> pDocument) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfPage::GetOwnAnnotationsArray(
        __zz_cib_::__zz_cib_FromAbiType<bool>(bCreate),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDocument*>(pDocument)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetICCProfile_32(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszCSTag, __zz_cib_AbiType_t<::PoDoFo::PdfInputStream*> pStream, __zz_cib_AbiType_t<::PoDoFo::pdf_int64> nColorComponents, __zz_cib_AbiType_t<::PoDoFo::EPdfColorSpace> eAlternateColorSpace) {
    __zz_cib_obj->::PoDoFo::PdfPage::SetICCProfile(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pszCSTag),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfInputStream*>(pStream),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_int64>(nColorComponents),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfColorSpace>(eAlternateColorSpace)
    );
  }
  static void __zz_cib_decl __zz_cib_RegisterProxy(::PoDoFo::PdfPage* obj, __zz_cib_Proxy proxy, __zz_cib_ProxyDeleter deleter) {
    __zz_cib_ProxyManagerDelegator::__zz_cib_RegisterProxy(obj, proxy, deleter);
  }
  static ::PoDoFo::PdfElement* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class418(::PoDoFo::PdfPage* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfPage* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class418(::PoDoFo::PdfElement* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfPage*>(__zz_cib_obj);
  }
  static ::PoDoFo::PdfCanvas* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class335(::PoDoFo::PdfPage* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfPage* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class335(::PoDoFo::PdfCanvas* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfPage*>(__zz_cib_obj);
  }
  static std::uint32_t __zz_cib_decl __zz_cib_GetClassId(::PoDoFo::PdfPage** __zz_cib_obj) {
    static bool classIdRepoPopulated = false;
    if (!classIdRepoPopulated) {
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfPage))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class460::__zz_cib_classId;
      classIdRepoPopulated = true;
    }
    auto tdx = std::type_index(typeid(**__zz_cib_obj));
    auto itr = __zz_cib_gClassIdRepo.find(tdx);
    if (itr != __zz_cib_gClassIdRepo.end()) return itr->second;
    return __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class460::__zz_cib_classId;
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class460 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::__zz_cib_New_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::__zz_cib_Delete_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::GetPageSize_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::SetPageWidth_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::SetPageHeight_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::SetTrimBox_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::GetPageNumber_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::CreateStandardPageSize_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::GetContents_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::GetContentsForAppending_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::GetResources_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::GetMediaBox_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::GetCropBox_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::GetTrimBox_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::GetBleedBox_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::GetArtBox_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::GetRotation_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::SetRotation_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::GetNumAnnots_21),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::CreateAnnotation_22),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::GetAnnotation_23),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::DeleteAnnotation_24),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::DeleteAnnotation_25),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::GetNumFields_26),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::GetField_27),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::GetField_28),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::GetFromResources_29),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::GetInheritedKey_30),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::GetOwnAnnotationsArray_31),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::SetICCProfile_32),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::__zz_cib_CastTo__zz_cib_Class418),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::__zz_cib_CastFrom__zz_cib_Class418),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::__zz_cib_CastTo__zz_cib_Class335),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::__zz_cib_CastFrom__zz_cib_Class335),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::__zz_cib_GetClassId),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfPage>::__zz_cib_RegisterProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 39 };
  return &methodTable;
}
}}}
