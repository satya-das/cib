#include "podofo/base/PdfInputDevice.h"
#include "podofo/base/PdfOutputDevice.h"
#include "podofo/base/PdfRefCountedBuffer.h"
#include "podofo/doc/PdfFontMetrics.h"
#include "podofo/doc/PdfFontTTFSubset.h"
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
struct __zz_cib_Delegator<::PoDoFo::PdfFontTTFSubset> : public ::PoDoFo::PdfFontTTFSubset {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontTTFSubset>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::PoDoFo::PdfFontTTFSubset::PdfFontTTFSubset;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0(__zz_cib_AbiType_t<const char*> pszFontFileName, __zz_cib_AbiType_t<::PoDoFo::PdfFontMetrics*> pMetrics, __zz_cib_AbiType_t<unsigned short> nFaceIndex) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFontFileName),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfFontMetrics*>(pMetrics),
    __zz_cib_::__zz_cib_FromAbiType<unsigned short>(nFaceIndex));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<::PoDoFo::PdfInputDevice*> pDevice, __zz_cib_AbiType_t<::PoDoFo::PdfFontMetrics*> pMetrics, __zz_cib_AbiType_t<::PoDoFo::PdfFontTTFSubset::EFontFileType> eType, __zz_cib_AbiType_t<unsigned short> nFaceIndex) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfInputDevice*>(pDevice),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfFontMetrics*>(pMetrics),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfFontTTFSubset::EFontFileType>(eType),
    __zz_cib_::__zz_cib_FromAbiType<unsigned short>(nFaceIndex));
  }
  static void __zz_cib_decl __zz_cib_Delete_2(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl BuildFont_3(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfRefCountedBuffer&> outputBuffer, __zz_cib_AbiType_t<const std::set<pdf_utf16be>&> usedChars, __zz_cib_AbiType_t<::std::vector<unsigned char>&> cidSet) {
    __zz_cib_obj->::PoDoFo::PdfFontTTFSubset::BuildFont(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfRefCountedBuffer&>(outputBuffer),
      __zz_cib_::__zz_cib_FromAbiType<const std::set<pdf_utf16be>&>(usedChars),
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<unsigned char>&>(cidSet)
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class442 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontTTFSubset>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontTTFSubset>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontTTFSubset>::__zz_cib_Delete_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontTTFSubset>::BuildFont_3)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 4 };
  return &methodTable;
}
}}}
