#include "podofo/base/PdfCanvas.h"
#include "podofo/base/PdfContentsTokenizer.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfTokenizer.h"
#include "podofo/base/PdfVariant.h"
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
struct __zz_cib_Delegator<::PoDoFo::PdfContentsTokenizer> : public ::PoDoFo::PdfContentsTokenizer {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfContentsTokenizer>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::PoDoFo::PdfContentsTokenizer::PdfContentsTokenizer;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0(__zz_cib_AbiType_t<const char*> pBuffer, __zz_cib_AbiType_t<long> lLen) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const char*>(pBuffer),
    __zz_cib_::__zz_cib_FromAbiType<long>(lLen));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<::PoDoFo::PdfCanvas*> pCanvas) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfCanvas*>(pCanvas));
  }
  static void __zz_cib_decl __zz_cib_Delete_2(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl ReadNext_3(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::EPdfContentsType&> reType, __zz_cib_AbiType_t<const char*&> rpszKeyword, __zz_cib_AbiType_t<::PoDoFo::PdfVariant&> rVariant) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfContentsTokenizer::ReadNext(
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfContentsType&>(reType),
        __zz_cib_::__zz_cib_FromAbiType<const char*&>(rpszKeyword),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVariant&>(rVariant)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl GetNextToken_4(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*&> pszToken, __zz_cib_AbiType_t<::PoDoFo::EPdfTokenType*> peType) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfContentsTokenizer::GetNextToken(
        __zz_cib_::__zz_cib_FromAbiType<const char*&>(pszToken),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfTokenType*>(peType)
      )
    );
  }
  static ::PoDoFo::PdfTokenizer* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class402(::PoDoFo::PdfContentsTokenizer* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfContentsTokenizer* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class402(::PoDoFo::PdfTokenizer* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfContentsTokenizer*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class344 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfContentsTokenizer>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfContentsTokenizer>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfContentsTokenizer>::__zz_cib_Delete_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfContentsTokenizer>::ReadNext_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfContentsTokenizer>::GetNextToken_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfContentsTokenizer>::__zz_cib_CastTo__zz_cib_Class402),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfContentsTokenizer>::__zz_cib_CastFrom__zz_cib_Class402)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 7 };
  return &methodTable;
}
}}}
