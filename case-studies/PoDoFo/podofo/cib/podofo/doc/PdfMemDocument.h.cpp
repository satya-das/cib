#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfDefines.h"
#include "podofo/base/PdfDictionary.h"
#include "podofo/base/PdfEncrypt.h"
#include "podofo/base/PdfName.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfOutputDevice.h"
#include "podofo/base/PdfParser.h"
#include "podofo/base/PdfRect.h"
#include "podofo/base/PdfRefCountedInputDevice.h"
#include "podofo/base/PdfReference.h"
#include "podofo/base/PdfVecObjects.h"
#include "podofo/base/PdfWriter.h"
#include "podofo/doc/PdfAcroForm.h"
#include "podofo/doc/PdfDestination.h"
#include "podofo/doc/PdfFileSpec.h"
#include "podofo/doc/PdfFont.h"
#include "podofo/doc/PdfInfo.h"
#include "podofo/doc/PdfMemDocument.h"
#include "podofo/doc/PdfNamesTree.h"
#include "podofo/doc/PdfOutlines.h"
#include "podofo/doc/PdfPage.h"
#include "podofo/doc/PdfPagesTree.h"
#include <vector>

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
struct __zz_cib_Delegator<::PoDoFo::PdfMemDocument> : public ::PoDoFo::PdfMemDocument {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::PoDoFo::PdfMemDocument::PdfMemDocument;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<bool> bOnlyTrailer) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<bool>(bOnlyTrailer));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<const char*> pszFilename, __zz_cib_AbiType_t<bool> bForUpdate) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFilename),
    __zz_cib_::__zz_cib_FromAbiType<bool>(bForUpdate));
  }
  static void __zz_cib_decl __zz_cib_Delete_3(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Load_4(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszFilename, __zz_cib_AbiType_t<bool> bForUpdate) {
    __zz_cib_obj->::PoDoFo::PdfMemDocument::Load(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFilename),
      __zz_cib_::__zz_cib_FromAbiType<bool>(bForUpdate)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl LoadFromBuffer_5(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pBuffer, __zz_cib_AbiType_t<long> lLen, __zz_cib_AbiType_t<bool> bForUpdate) {
    __zz_cib_obj->::PoDoFo::PdfMemDocument::LoadFromBuffer(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pBuffer),
      __zz_cib_::__zz_cib_FromAbiType<long>(lLen),
      __zz_cib_::__zz_cib_FromAbiType<bool>(bForUpdate)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl LoadFromDevice_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfRefCountedInputDevice&> rDevice, __zz_cib_AbiType_t<bool> bForUpdate) {
    __zz_cib_obj->::PoDoFo::PdfMemDocument::LoadFromDevice(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRefCountedInputDevice&>(rDevice),
      __zz_cib_::__zz_cib_FromAbiType<bool>(bForUpdate)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsLoaded_7(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfMemDocument::IsLoaded()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Write_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszFilename) {
    __zz_cib_obj->::PoDoFo::PdfMemDocument::Write(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFilename)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Write_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfOutputDevice*> pDevice) {
    __zz_cib_obj->::PoDoFo::PdfMemDocument::Write(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutputDevice*>(pDevice)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl WriteUpdate_10(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszFilename) {
    __zz_cib_obj->::PoDoFo::PdfMemDocument::WriteUpdate(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFilename)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl WriteUpdate_11(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfOutputDevice*> pDevice, __zz_cib_AbiType_t<bool> bTruncate) {
    __zz_cib_obj->::PoDoFo::PdfMemDocument::WriteUpdate(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutputDevice*>(pDevice),
      __zz_cib_::__zz_cib_FromAbiType<bool>(bTruncate)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetWriteMode_12(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::EPdfWriteMode> eWriteMode) {
    __zz_cib_obj->::PoDoFo::PdfMemDocument::SetWriteMode(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfWriteMode>(eWriteMode)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::EPdfWriteMode> __zz_cib_decl GetWriteMode_13(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::EPdfWriteMode>(
      __zz_cib_obj->::PoDoFo::PdfMemDocument::GetWriteMode()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetPdfVersion_14(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::EPdfVersion> eVersion) {
    __zz_cib_obj->::PoDoFo::PdfMemDocument::SetPdfVersion(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfVersion>(eVersion)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::EPdfVersion> __zz_cib_decl GetPdfVersion_15(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::EPdfVersion>(
      __zz_cib_obj->::PoDoFo::PdfMemDocument::GetPdfVersion()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl AddPdfExtension_16(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> ns, __zz_cib_AbiType_t<::PoDoFo::pdf_int64> level) {
    __zz_cib_obj->::PoDoFo::PdfMemDocument::AddPdfExtension(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(ns),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_int64>(level)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl HasPdfExtension_17(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> ns, __zz_cib_AbiType_t<::PoDoFo::pdf_int64> level) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfMemDocument::HasPdfExtension(
        __zz_cib_::__zz_cib_FromAbiType<const char*>(ns),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_int64>(level)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl RemovePdfExtension_18(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> ns, __zz_cib_AbiType_t<::PoDoFo::pdf_int64> level) {
    __zz_cib_obj->::PoDoFo::PdfMemDocument::RemovePdfExtension(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(ns),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_int64>(level)
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfExtension>> __zz_cib_decl GetPdfExtensions_19(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfExtension>>(
      __zz_cib_obj->::PoDoFo::PdfMemDocument::GetPdfExtensions()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetPassword_20(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const std::string&> sPassword) {
    __zz_cib_obj->::PoDoFo::PdfMemDocument::SetPassword(
      __zz_cib_::__zz_cib_FromAbiType<const std::string&>(sPassword)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetEncrypted_21(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const std::string&> userPassword, __zz_cib_AbiType_t<const std::string&> ownerPassword, __zz_cib_AbiType_t<int> protection, __zz_cib_AbiType_t<::PoDoFo::PdfEncrypt::EPdfEncryptAlgorithm> eAlgorithm, __zz_cib_AbiType_t<::PoDoFo::PdfEncrypt::EPdfKeyLength> eKeyLength) {
    __zz_cib_obj->::PoDoFo::PdfMemDocument::SetEncrypted(
      __zz_cib_::__zz_cib_FromAbiType<const std::string&>(userPassword),
      __zz_cib_::__zz_cib_FromAbiType<const std::string&>(ownerPassword),
      __zz_cib_::__zz_cib_FromAbiType<int>(protection),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfEncrypt::EPdfEncryptAlgorithm>(eAlgorithm),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfEncrypt::EPdfKeyLength>(eKeyLength)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetEncrypted_22(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfEncrypt&> pEncrypt) {
    __zz_cib_obj->::PoDoFo::PdfMemDocument::SetEncrypted(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncrypt&>(pEncrypt)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl GetEncrypted_23(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfMemDocument::GetEncrypted()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsLinearized_24(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfMemDocument::IsLinearized()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfVecObjects&> __zz_cib_decl GetObjects_25(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfVecObjects&>(
      __zz_cib_obj->::PoDoFo::PdfMemDocument::GetObjects()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfVecObjects&> __zz_cib_decl GetObjects_26(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfVecObjects&>(
      __zz_cib_obj->::PoDoFo::PdfMemDocument::GetObjects()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_decl GetCatalog_27(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfMemDocument::GetCatalog()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfObject*> __zz_cib_decl GetCatalog_28(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfMemDocument::GetCatalog()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfObject*> __zz_cib_decl GetTrailer_29(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfMemDocument::GetTrailer()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_decl GetStructTreeRoot_30(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfMemDocument::GetStructTreeRoot()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_decl GetMetadata_31(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfMemDocument::GetMetadata()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_decl GetMarkInfo_32(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfMemDocument::GetMarkInfo()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_decl GetLanguage_33(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfMemDocument::GetLanguage()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfFont*> __zz_cib_decl GetFont_34(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfObject*> pObject) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfFont*>(
      __zz_cib_obj->::PoDoFo::PdfMemDocument::GetFont(
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pObject)
      )
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfMemDocument&> __zz_cib_decl InsertPages_35(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfMemDocument&> rDoc, __zz_cib_AbiType_t<int> inFirstPage, __zz_cib_AbiType_t<int> inNumPages) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfMemDocument&>(
      __zz_cib_obj->::PoDoFo::PdfMemDocument::InsertPages(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfMemDocument&>(rDoc),
        __zz_cib_::__zz_cib_FromAbiType<int>(inFirstPage),
        __zz_cib_::__zz_cib_FromAbiType<int>(inNumPages)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl DeletePages_36(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> inFirstPage, __zz_cib_AbiType_t<int> inNumPages) {
    __zz_cib_obj->::PoDoFo::PdfMemDocument::DeletePages(
      __zz_cib_::__zz_cib_FromAbiType<int>(inFirstPage),
      __zz_cib_::__zz_cib_FromAbiType<int>(inNumPages)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsPrintAllowed_37(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfMemDocument::IsPrintAllowed()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsEditAllowed_38(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfMemDocument::IsEditAllowed()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsCopyAllowed_39(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfMemDocument::IsCopyAllowed()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsEditNotesAllowed_40(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfMemDocument::IsEditNotesAllowed()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsFillAndSignAllowed_41(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfMemDocument::IsFillAndSignAllowed()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsAccessibilityAllowed_42(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfMemDocument::IsAccessibilityAllowed()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsDocAssemblyAllowed_43(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfMemDocument::IsDocAssemblyAllowed()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsHighPrintAllowed_44(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfMemDocument::IsHighPrintAllowed()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl FreeObjectMemory_45(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfReference&> rRef, __zz_cib_AbiType_t<bool> bForce) {
    __zz_cib_obj->::PoDoFo::PdfMemDocument::FreeObjectMemory(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfReference&>(rRef),
      __zz_cib_::__zz_cib_FromAbiType<bool>(bForce)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl FreeObjectMemory_46(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfObject*> pObj, __zz_cib_AbiType_t<bool> bForce) {
    __zz_cib_obj->::PoDoFo::PdfMemDocument::FreeObjectMemory(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pObj),
      __zz_cib_::__zz_cib_FromAbiType<bool>(bForce)
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfEncrypt*> __zz_cib_decl GetEncrypt_47(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfEncrypt*>(
      __zz_cib_obj->::PoDoFo::PdfMemDocument::GetEncrypt()
    );
  }
  static ::PoDoFo::PdfDocument* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class417(::PoDoFo::PdfMemDocument* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfMemDocument* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class417(::PoDoFo::PdfDocument* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfMemDocument*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class456 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::__zz_cib_Delete_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::Load_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::LoadFromBuffer_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::LoadFromDevice_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::IsLoaded_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::Write_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::Write_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::WriteUpdate_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::WriteUpdate_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::SetWriteMode_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::GetWriteMode_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::SetPdfVersion_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::GetPdfVersion_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::AddPdfExtension_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::HasPdfExtension_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::RemovePdfExtension_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::GetPdfExtensions_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::SetPassword_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::SetEncrypted_21),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::SetEncrypted_22),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::GetEncrypted_23),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::IsLinearized_24),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::GetObjects_25),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::GetObjects_26),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::GetCatalog_27),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::GetCatalog_28),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::GetTrailer_29),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::GetStructTreeRoot_30),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::GetMetadata_31),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::GetMarkInfo_32),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::GetLanguage_33),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::GetFont_34),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::InsertPages_35),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::DeletePages_36),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::IsPrintAllowed_37),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::IsEditAllowed_38),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::IsCopyAllowed_39),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::IsEditNotesAllowed_40),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::IsFillAndSignAllowed_41),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::IsAccessibilityAllowed_42),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::IsDocAssemblyAllowed_43),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::IsHighPrintAllowed_44),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::FreeObjectMemory_45),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::FreeObjectMemory_46),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::GetEncrypt_47),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::__zz_cib_CastTo__zz_cib_Class417),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemDocument>::__zz_cib_CastFrom__zz_cib_Class417)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 50 };
  return &methodTable;
}
}}}
