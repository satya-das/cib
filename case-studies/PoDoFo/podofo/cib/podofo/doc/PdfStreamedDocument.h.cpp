#include "podofo/base/PdfDefines.h"
#include "podofo/base/PdfEncrypt.h"
#include "podofo/base/PdfOutputDevice.h"
#include "podofo/doc/PdfElement.h"
#include "podofo/doc/PdfImage.h"
#include "podofo/doc/PdfStreamedDocument.h"

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
struct __zz_cib_Delegator<::PoDoFo::PdfStreamedDocument> : public ::PoDoFo::PdfStreamedDocument {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStreamedDocument>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::PoDoFo::PdfStreamedDocument::PdfStreamedDocument;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0(__zz_cib_AbiType_t<::PoDoFo::PdfOutputDevice*> pDevice, __zz_cib_AbiType_t<::PoDoFo::EPdfVersion> eVersion, __zz_cib_AbiType_t<::PoDoFo::PdfEncrypt*> pEncrypt, __zz_cib_AbiType_t<::PoDoFo::EPdfWriteMode> eWriteMode) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutputDevice*>(pDevice),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfVersion>(eVersion),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfEncrypt*>(pEncrypt),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfWriteMode>(eWriteMode));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<const char*> pszFilename, __zz_cib_AbiType_t<::PoDoFo::EPdfVersion> eVersion, __zz_cib_AbiType_t<::PoDoFo::PdfEncrypt*> pEncrypt, __zz_cib_AbiType_t<::PoDoFo::EPdfWriteMode> eWriteMode) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFilename),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfVersion>(eVersion),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfEncrypt*>(pEncrypt),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfWriteMode>(eWriteMode));
  }
  static void __zz_cib_decl __zz_cib_Delete_2(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Close_3(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfStreamedDocument::Close();
  }
  static __zz_cib_AbiType_t<::PoDoFo::EPdfWriteMode> __zz_cib_decl GetWriteMode_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::EPdfWriteMode>(
      __zz_cib_obj->::PoDoFo::PdfStreamedDocument::GetWriteMode()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::EPdfVersion> __zz_cib_decl GetPdfVersion_5(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::EPdfVersion>(
      __zz_cib_obj->::PoDoFo::PdfStreamedDocument::GetPdfVersion()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsLinearized_6(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfStreamedDocument::IsLinearized()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsPrintAllowed_7(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfStreamedDocument::IsPrintAllowed()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsEditAllowed_8(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfStreamedDocument::IsEditAllowed()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsCopyAllowed_9(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfStreamedDocument::IsCopyAllowed()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsEditNotesAllowed_10(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfStreamedDocument::IsEditNotesAllowed()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsFillAndSignAllowed_11(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfStreamedDocument::IsFillAndSignAllowed()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsAccessibilityAllowed_12(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfStreamedDocument::IsAccessibilityAllowed()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsDocAssemblyAllowed_13(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfStreamedDocument::IsDocAssemblyAllowed()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsHighPrintAllowed_14(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfStreamedDocument::IsHighPrintAllowed()
    );
  }
  static ::PoDoFo::PdfDocument* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class417(::PoDoFo::PdfStreamedDocument* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfStreamedDocument* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class417(::PoDoFo::PdfDocument* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfStreamedDocument*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class473 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStreamedDocument>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStreamedDocument>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStreamedDocument>::__zz_cib_Delete_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStreamedDocument>::Close_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStreamedDocument>::GetWriteMode_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStreamedDocument>::GetPdfVersion_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStreamedDocument>::IsLinearized_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStreamedDocument>::IsPrintAllowed_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStreamedDocument>::IsEditAllowed_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStreamedDocument>::IsCopyAllowed_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStreamedDocument>::IsEditNotesAllowed_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStreamedDocument>::IsFillAndSignAllowed_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStreamedDocument>::IsAccessibilityAllowed_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStreamedDocument>::IsDocAssemblyAllowed_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStreamedDocument>::IsHighPrintAllowed_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStreamedDocument>::__zz_cib_CastTo__zz_cib_Class417),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStreamedDocument>::__zz_cib_CastFrom__zz_cib_Class417)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 17 };
  return &methodTable;
}
}}}
