#include "podofo/base/PdfDefines.h"
#include "podofo/base/PdfEncoding.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfVecObjects.h"
#include "podofo/doc/PdfFont.h"
#include "podofo/doc/PdfFontFactory.h"
#include "podofo/doc/PdfFontMetrics.h"

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
struct __zz_cib_Delegator<::PoDoFo::PdfFontFactory> : public ::PoDoFo::PdfFontFactory {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontFactory>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::PoDoFo::PdfFontFactory::PdfFontFactory;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfFont*> __zz_cib_decl CreateFontObject_2(__zz_cib_AbiType_t<::PoDoFo::PdfFontMetrics*> pMetrics, __zz_cib_AbiType_t<int> nFlags, __zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding*> pEncoding, __zz_cib_AbiType_t<::PoDoFo::PdfVecObjects*> pParent) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfFont*>(
      ::PoDoFo::PdfFontFactory::CreateFontObject(
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfFontMetrics*>(pMetrics),
        __zz_cib_::__zz_cib_FromAbiType<int>(nFlags),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncoding*>(pEncoding),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVecObjects*>(pParent)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfFont*> __zz_cib_decl CreateFont_3(__zz_cib_AbiType_t<FT_Library*> pLibrary, __zz_cib_AbiType_t<::PoDoFo::PdfObject*> pObject) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfFont*>(
      ::PoDoFo::PdfFontFactory::CreateFont(
        __zz_cib_::__zz_cib_FromAbiType<FT_Library*>(pLibrary),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pObject)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfFont*> __zz_cib_decl CreateBase14Font_4(__zz_cib_AbiType_t<const char*> pszFontName, __zz_cib_AbiType_t<::PoDoFo::EPdfFontFlags> eFlags, __zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding* const> pEncoding, __zz_cib_AbiType_t<::PoDoFo::PdfVecObjects*> pParent) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfFont*>(
      ::PoDoFo::PdfFontFactory::CreateBase14Font(
        __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFontName),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfFontFlags>(eFlags),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncoding* const>(pEncoding),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVecObjects*>(pParent)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::EPdfFontType> __zz_cib_decl GetFontType_5(__zz_cib_AbiType_t<const char*> pszFilename) {
    return __zz_cib_ToAbiType<::PoDoFo::EPdfFontType>(
      ::PoDoFo::PdfFontFactory::GetFontType(
        __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFilename)
      )
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class435 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontFactory>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontFactory>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontFactory>::CreateFontObject_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontFactory>::CreateFont_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontFactory>::CreateBase14Font_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontFactory>::GetFontType_5)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 6 };
  return &methodTable;
}
}}}
