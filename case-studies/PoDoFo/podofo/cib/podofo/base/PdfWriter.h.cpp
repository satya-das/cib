#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfDefines.h"
#include "podofo/base/PdfDictionary.h"
#include "podofo/base/PdfEncrypt.h"
#include "podofo/base/PdfImmediateWriter.h"
#include "podofo/base/PdfInputDevice.h"
#include "podofo/base/PdfName.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfOutputDevice.h"
#include "podofo/base/PdfParser.h"
#include "podofo/base/PdfString.h"
#include "podofo/base/PdfVecObjects.h"
#include "podofo/base/PdfWriter.h"
#include "podofo/doc/PdfHintStream.h"
#include "podofo/doc/PdfPage.h"
#include "podofo/doc/PdfPagesTree.h"

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
struct __zz_cib_Delegator<::PoDoFo::PdfWriter> : public ::PoDoFo::PdfWriter {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfWriter>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::PoDoFo::PdfWriter::PdfWriter;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<::PoDoFo::PdfParser*> pParser) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfParser*>(pParser));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<::PoDoFo::PdfVecObjects*> pVecObjects, __zz_cib_AbiType_t<const ::PoDoFo::PdfObject*> pTrailer) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVecObjects*>(pVecObjects),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfObject*>(pTrailer));
  }
  static void __zz_cib_decl __zz_cib_Delete_3(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Write_4(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszFilename) {
    __zz_cib_obj->::PoDoFo::PdfWriter::Write(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFilename)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Write_5(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfOutputDevice*> pDevice) {
    __zz_cib_obj->::PoDoFo::PdfWriter::Write(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutputDevice*>(pDevice)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl WriteUpdate_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfOutputDevice*> pDevice, __zz_cib_AbiType_t<::PoDoFo::PdfInputDevice*> pSourceInputDevice, __zz_cib_AbiType_t<bool> bRewriteXRefTable) {
    __zz_cib_obj->::PoDoFo::PdfWriter::WriteUpdate(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutputDevice*>(pDevice),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfInputDevice*>(pSourceInputDevice),
      __zz_cib_::__zz_cib_FromAbiType<bool>(bRewriteXRefTable)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetWriteMode_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::EPdfWriteMode> eWriteMode) {
    __zz_cib_obj->::PoDoFo::PdfWriter::SetWriteMode(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfWriteMode>(eWriteMode)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::EPdfWriteMode> __zz_cib_decl GetWriteMode_8(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::EPdfWriteMode>(
      __zz_cib_obj->::PoDoFo::PdfWriter::GetWriteMode()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetPdfVersion_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::EPdfVersion> eVersion) {
    __zz_cib_obj->::PoDoFo::PdfWriter::SetPdfVersion(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfVersion>(eVersion)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::EPdfVersion> __zz_cib_decl GetPdfVersion_10(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::EPdfVersion>(
      __zz_cib_obj->::PoDoFo::PdfWriter::GetPdfVersion()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetLinearized_11(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> bLinearize) {
    __zz_cib_obj->::PoDoFo::PdfWriter::SetLinearized(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bLinearize)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl GetLinearized_12(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfWriter::GetLinearized()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetUseXRefStream_13(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> bStream) {
    __zz_cib_obj->::PoDoFo::PdfWriter::SetUseXRefStream(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bStream)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl GetUseXRefStream_14(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfWriter::GetUseXRefStream()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetPrevXRefOffset_15(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::pdf_int64> lPrevXRefOffset) {
    __zz_cib_obj->::PoDoFo::PdfWriter::SetPrevXRefOffset(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_int64>(lPrevXRefOffset)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_int64> __zz_cib_decl GetPrevXRefOffset_16(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_int64>(
      __zz_cib_obj->::PoDoFo::PdfWriter::GetPrevXRefOffset()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetIncrementalUpdate_17(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> bIncrementalUpdate) {
    __zz_cib_obj->::PoDoFo::PdfWriter::SetIncrementalUpdate(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bIncrementalUpdate)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl GetIncrementalUpdate_18(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfWriter::GetIncrementalUpdate()
    );
  }
  static __zz_cib_AbiType_t<const char*> __zz_cib_decl GetPdfVersionString_19(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const char*>(
      __zz_cib_obj->::PoDoFo::PdfWriter::GetPdfVersionString()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetEncrypted_20(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfEncrypt&> rEncrypt) {
    __zz_cib_obj->::PoDoFo::PdfWriter::SetEncrypted(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncrypt&>(rEncrypt)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl GetEncrypted_21(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfWriter::GetEncrypted()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl GetByteOffset_22(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfObject*> pObject, __zz_cib_AbiType_t<::PoDoFo::pdf_long*> pulOffset) {
    __zz_cib_obj->::PoDoFo::PdfWriter::GetByteOffset(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pObject),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long*>(pulOffset)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl WriteToBuffer_23(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<char**> ppBuffer, __zz_cib_AbiType_t<::PoDoFo::pdf_long*> pulLen) {
    __zz_cib_obj->::PoDoFo::PdfWriter::WriteToBuffer(
      __zz_cib_::__zz_cib_FromAbiType<char**>(ppBuffer),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long*>(pulLen)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl FillTrailerObject_24(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfObject*> pTrailer, __zz_cib_AbiType_t<::PoDoFo::pdf_long> lSize, __zz_cib_AbiType_t<bool> bOnlySizeKey) {
    __zz_cib_obj->::PoDoFo::PdfWriter::FillTrailerObject(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pTrailer),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(lSize),
      __zz_cib_::__zz_cib_FromAbiType<bool>(bOnlySizeKey)
    );
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_25(__zz_cib_AbiType_t<::PoDoFo::PdfVecObjects*> pVecObjects) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVecObjects*>(pVecObjects));
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl WritePdfHeader_26(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfOutputDevice*> pDevice) {
    __zz_cib_obj->::PoDoFo::PdfWriter::WritePdfHeader(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutputDevice*>(pDevice)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl WritePdfObjects_27(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfOutputDevice*> pDevice, __zz_cib_AbiType_t<const ::PoDoFo::PdfVecObjects&> vecObjects, __zz_cib_AbiType_t<::PoDoFo::PdfXRef*> pXref, __zz_cib_AbiType_t<bool> bRewriteXRefTable) {
    __zz_cib_obj->::PoDoFo::PdfWriter::WritePdfObjects(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutputDevice*>(pDevice),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfVecObjects&>(vecObjects),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfXRef*>(pXref),
      __zz_cib_::__zz_cib_FromAbiType<bool>(bRewriteXRefTable)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl CreateFileIdentifier_28(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfString&> identifier, __zz_cib_AbiType_t<const ::PoDoFo::PdfObject*> pTrailer, __zz_cib_AbiType_t<::PoDoFo::PdfString*> pOriginalIdentifier) {
    __zz_cib_obj->::PoDoFo::PdfWriter::CreateFileIdentifier(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfString&>(identifier),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfObject*>(pTrailer),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfString*>(pOriginalIdentifier)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Write_29(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfOutputDevice*> pDevice, __zz_cib_AbiType_t<bool> bRewriteXRefTable) {
    __zz_cib_obj->::PoDoFo::PdfWriter::Write(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutputDevice*>(pDevice),
      __zz_cib_::__zz_cib_FromAbiType<bool>(bRewriteXRefTable)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl WriteLinearized_30(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfOutputDevice*> pDevice) {
    __zz_cib_obj->::PoDoFo::PdfWriter::WriteLinearized(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutputDevice*>(pDevice)
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class408 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfWriter>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfWriter>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfWriter>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfWriter>::__zz_cib_Delete_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfWriter>::Write_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfWriter>::Write_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfWriter>::WriteUpdate_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfWriter>::SetWriteMode_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfWriter>::GetWriteMode_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfWriter>::SetPdfVersion_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfWriter>::GetPdfVersion_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfWriter>::SetLinearized_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfWriter>::GetLinearized_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfWriter>::SetUseXRefStream_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfWriter>::GetUseXRefStream_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfWriter>::SetPrevXRefOffset_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfWriter>::GetPrevXRefOffset_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfWriter>::SetIncrementalUpdate_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfWriter>::GetIncrementalUpdate_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfWriter>::GetPdfVersionString_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfWriter>::SetEncrypted_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfWriter>::GetEncrypted_21),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfWriter>::GetByteOffset_22),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfWriter>::WriteToBuffer_23),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfWriter>::FillTrailerObject_24),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfWriter>::__zz_cib_New_25),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfWriter>::WritePdfHeader_26),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfWriter>::WritePdfObjects_27),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfWriter>::CreateFileIdentifier_28),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfWriter>::Write_29),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfWriter>::WriteLinearized_30)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 31 };
  return &methodTable;
}
}}}
