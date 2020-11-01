#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfDefines.h"
#include "podofo/base/PdfEncrypt.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfParser.h"
#include "podofo/base/PdfRefCountedInputDevice.h"
#include "podofo/base/PdfString.h"
#include "podofo/base/PdfVecObjects.h"
#include "podofo/base/PdfWriter.h"
#include "podofo/doc/PdfDocument.h"

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
struct __zz_cib_Delegator<::PoDoFo::PdfParser> : public ::PoDoFo::PdfParser {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParser>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::PoDoFo::PdfParser::PdfParser;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0(__zz_cib_AbiType_t<::PoDoFo::PdfVecObjects*> pVecObjects) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVecObjects*>(pVecObjects));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<::PoDoFo::PdfVecObjects*> pVecObjects, __zz_cib_AbiType_t<const char*> pszFilename, __zz_cib_AbiType_t<bool> bLoadOnDemand) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVecObjects*>(pVecObjects),
    __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFilename),
    __zz_cib_::__zz_cib_FromAbiType<bool>(bLoadOnDemand));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<::PoDoFo::PdfVecObjects*> pVecObjects, __zz_cib_AbiType_t<const char*> pBuffer, __zz_cib_AbiType_t<long> lLen, __zz_cib_AbiType_t<bool> bLoadOnDemand) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVecObjects*>(pVecObjects),
    __zz_cib_::__zz_cib_FromAbiType<const char*>(pBuffer),
    __zz_cib_::__zz_cib_FromAbiType<long>(lLen),
    __zz_cib_::__zz_cib_FromAbiType<bool>(bLoadOnDemand));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_3(__zz_cib_AbiType_t<::PoDoFo::PdfVecObjects*> pVecObjects, __zz_cib_AbiType_t<const ::PoDoFo::PdfRefCountedInputDevice&> rDevice, __zz_cib_AbiType_t<bool> bLoadOnDemand) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVecObjects*>(pVecObjects),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRefCountedInputDevice&>(rDevice),
    __zz_cib_::__zz_cib_FromAbiType<bool>(bLoadOnDemand));
  }
  static void __zz_cib_decl __zz_cib_Delete_4(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl ParseFile_5(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszFilename, __zz_cib_AbiType_t<bool> bLoadOnDemand) {
    __zz_cib_obj->::PoDoFo::PdfParser::ParseFile(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFilename),
      __zz_cib_::__zz_cib_FromAbiType<bool>(bLoadOnDemand)
    );
  }
#ifdef _WIN32
  static __zz_cib_AbiType_t<void> __zz_cib_decl ParseFile_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const wchar_t*> pszFilename, __zz_cib_AbiType_t<bool> bLoadOnDemand) {
    __zz_cib_obj->::PoDoFo::PdfParser::ParseFile(
      __zz_cib_::__zz_cib_FromAbiType<const wchar_t*>(pszFilename),
      __zz_cib_::__zz_cib_FromAbiType<bool>(bLoadOnDemand)
    );
  }
#endif
  static __zz_cib_AbiType_t<void> __zz_cib_decl ParseFile_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pBuffer, __zz_cib_AbiType_t<long> lLen, __zz_cib_AbiType_t<bool> bLoadOnDemand) {
    __zz_cib_obj->::PoDoFo::PdfParser::ParseFile(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pBuffer),
      __zz_cib_::__zz_cib_FromAbiType<long>(lLen),
      __zz_cib_::__zz_cib_FromAbiType<bool>(bLoadOnDemand)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl ParseFile_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfRefCountedInputDevice&> rDevice, __zz_cib_AbiType_t<bool> bLoadOnDemand) {
    __zz_cib_obj->::PoDoFo::PdfParser::ParseFile(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRefCountedInputDevice&>(rDevice),
      __zz_cib_::__zz_cib_FromAbiType<bool>(bLoadOnDemand)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl QuickEncryptedCheck_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszFilename) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfParser::QuickEncryptedCheck(
        __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFilename)
      )
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl GetNumberOfIncrementalUpdates_10(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::PoDoFo::PdfParser::GetNumberOfIncrementalUpdates()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfVecObjects*> __zz_cib_decl GetObjects_11(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfVecObjects*>(
      __zz_cib_obj->::PoDoFo::PdfParser::GetObjects()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::EPdfVersion> __zz_cib_decl GetPdfVersion_12(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::EPdfVersion>(
      __zz_cib_obj->::PoDoFo::PdfParser::GetPdfVersion()
    );
  }
  static __zz_cib_AbiType_t<const char*> __zz_cib_decl GetPdfVersionString_13(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const char*>(
      __zz_cib_obj->::PoDoFo::PdfParser::GetPdfVersionString()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfObject*> __zz_cib_decl GetTrailer_14(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfParser::GetTrailer()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl GetLoadOnDemand_15(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfParser::GetLoadOnDemand()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsLinearized_16(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfParser::IsLinearized()
    );
  }
  static __zz_cib_AbiType_t<size_t> __zz_cib_decl GetFileSize_17(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<size_t>(
      __zz_cib_obj->::PoDoFo::PdfParser::GetFileSize()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl GetEncrypted_18(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfParser::GetEncrypted()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfEncrypt*> __zz_cib_decl GetEncrypt_19(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfEncrypt*>(
      __zz_cib_obj->::PoDoFo::PdfParser::GetEncrypt()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfEncrypt*> __zz_cib_decl TakeEncrypt_20(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfEncrypt*>(
      __zz_cib_obj->::PoDoFo::PdfParser::TakeEncrypt()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetPassword_21(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const std::string&> sPassword) {
    __zz_cib_obj->::PoDoFo::PdfParser::SetPassword(
      __zz_cib_::__zz_cib_FromAbiType<const std::string&>(sPassword)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsStrictParsing_22(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfParser::IsStrictParsing()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetStrictParsing_23(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> bStrict) {
    __zz_cib_obj->::PoDoFo::PdfParser::SetStrictParsing(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bStrict)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl GetIgnoreBrokenObjects_24() {
    return __zz_cib_ToAbiType<bool>(
      ::PoDoFo::PdfParser::GetIgnoreBrokenObjects()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetIgnoreBrokenObjects_25(__zz_cib_AbiType_t<bool> bBroken) {
    ::PoDoFo::PdfParser::SetIgnoreBrokenObjects(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bBroken)
    );
  }
  static __zz_cib_AbiType_t<long> __zz_cib_decl GetMaxObjectCount_26() {
    return __zz_cib_ToAbiType<long>(
      ::PoDoFo::PdfParser::GetMaxObjectCount()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetMaxObjectCount_27(__zz_cib_AbiType_t<long> nMaxObjects) {
    ::PoDoFo::PdfParser::SetMaxObjectCount(
      __zz_cib_::__zz_cib_FromAbiType<long>(nMaxObjects)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl GetXRefOffset_28(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->::PoDoFo::PdfParser::GetXRefOffset()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl HasXRefStream_29(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfParser::HasXRefStream()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl FindToken_30(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszToken, __zz_cib_AbiType_t<const long> lRange) {
    __zz_cib_obj->::PoDoFo::PdfParser::FindToken(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pszToken),
      __zz_cib_::__zz_cib_FromAbiType<const long>(lRange)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl FindToken2_31(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszToken, __zz_cib_AbiType_t<const long> lRange, __zz_cib_AbiType_t<size_t> searchEnd) {
    __zz_cib_obj->::PoDoFo::PdfParser::FindToken2(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pszToken),
      __zz_cib_::__zz_cib_FromAbiType<const long>(lRange),
      __zz_cib_::__zz_cib_FromAbiType<size_t>(searchEnd)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl ReadDocumentStructure_32(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfParser::ReadDocumentStructure();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl HasLinearizationDict_33(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfParser::HasLinearizationDict();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl MergeTrailer_34(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfObject*> pTrailer) {
    __zz_cib_obj->::PoDoFo::PdfParser::MergeTrailer(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfObject*>(pTrailer)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl ReadTrailer_35(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfParser::ReadTrailer();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl ReadXRef_36(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::pdf_long*> pXRefOffset) {
    __zz_cib_obj->::PoDoFo::PdfParser::ReadXRef(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long*>(pXRefOffset)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl ReadXRefContents_37(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::pdf_long> lOffset, __zz_cib_AbiType_t<bool> bPositionAtEnd) {
    __zz_cib_obj->::PoDoFo::PdfParser::ReadXRefContents(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(lOffset),
      __zz_cib_::__zz_cib_FromAbiType<bool>(bPositionAtEnd)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl ReadXRefSubsection_38(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::pdf_int64&> nFirstObject, __zz_cib_AbiType_t<::PoDoFo::pdf_int64&> nNumObjects) {
    __zz_cib_obj->::PoDoFo::PdfParser::ReadXRefSubsection(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_int64&>(nFirstObject),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_int64&>(nNumObjects)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl ReadXRefStreamContents_39(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::pdf_long> lOffset, __zz_cib_AbiType_t<bool> bReadOnlyTrailer) {
    __zz_cib_obj->::PoDoFo::PdfParser::ReadXRefStreamContents(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(lOffset),
      __zz_cib_::__zz_cib_FromAbiType<bool>(bReadOnlyTrailer)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl ReadObjects_40(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfParser::ReadObjects();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl ReadObjectsInternal_41(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfParser::ReadObjectsInternal();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl ReadObjectFromStream_42(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> nObjNo, __zz_cib_AbiType_t<int> nIndex) {
    __zz_cib_obj->::PoDoFo::PdfParser::ReadObjectFromStream(
      __zz_cib_::__zz_cib_FromAbiType<int>(nObjNo),
      __zz_cib_::__zz_cib_FromAbiType<int>(nIndex)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsPdfFile_43(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfParser::IsPdfFile()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl ReadNextTrailer_44(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfParser::ReadNextTrailer();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl CheckEOFMarker_45(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfParser::CheckEOFMarker();
  }
  static ::PoDoFo::PdfTokenizer* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class402(::PoDoFo::PdfParser* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfParser* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class402(::PoDoFo::PdfTokenizer* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfParser*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class393 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParser>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParser>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParser>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParser>::__zz_cib_New_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParser>::__zz_cib_Delete_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParser>::ParseFile_5),
#ifdef _WIN32
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParser>::ParseFile_6),
#else 
    reinterpret_cast<__zz_cib_MTableEntry> (0),
#endif
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParser>::ParseFile_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParser>::ParseFile_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParser>::QuickEncryptedCheck_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParser>::GetNumberOfIncrementalUpdates_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParser>::GetObjects_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParser>::GetPdfVersion_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParser>::GetPdfVersionString_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParser>::GetTrailer_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParser>::GetLoadOnDemand_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParser>::IsLinearized_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParser>::GetFileSize_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParser>::GetEncrypted_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParser>::GetEncrypt_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParser>::TakeEncrypt_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParser>::SetPassword_21),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParser>::IsStrictParsing_22),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParser>::SetStrictParsing_23),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParser>::GetIgnoreBrokenObjects_24),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParser>::SetIgnoreBrokenObjects_25),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParser>::GetMaxObjectCount_26),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParser>::SetMaxObjectCount_27),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParser>::GetXRefOffset_28),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParser>::HasXRefStream_29),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParser>::FindToken_30),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParser>::FindToken2_31),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParser>::ReadDocumentStructure_32),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParser>::HasLinearizationDict_33),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParser>::MergeTrailer_34),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParser>::ReadTrailer_35),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParser>::ReadXRef_36),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParser>::ReadXRefContents_37),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParser>::ReadXRefSubsection_38),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParser>::ReadXRefStreamContents_39),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParser>::ReadObjects_40),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParser>::ReadObjectsInternal_41),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParser>::ReadObjectFromStream_42),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParser>::IsPdfFile_43),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParser>::ReadNextTrailer_44),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParser>::CheckEOFMarker_45),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParser>::__zz_cib_CastTo__zz_cib_Class402),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParser>::__zz_cib_CastFrom__zz_cib_Class402)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 48 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfParser::TXRefEntry> : public ::PoDoFo::PdfParser::TXRefEntry {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParser::TXRefEntry>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::PoDoFo::PdfParser::TXRefEntry::TXRefEntry;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2() {
    return new __zz_cib_Delegatee();
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class393 {
namespace __zz_cib_Class394 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParser::TXRefEntry>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParser::TXRefEntry>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParser::TXRefEntry>::__zz_cib_New_2)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 3 };
  return &methodTable;
}
}}}}
