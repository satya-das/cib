#include "podofo/base/PdfEncoding.h"
#include "podofo/base/PdfEncodingFactory.h"
#include "podofo/base/PdfObject.h"
#include "podofo/doc/PdfIdentityEncoding.h"

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
struct __zz_cib_Delegator<::PoDoFo::PdfEncodingFactory> : public ::PoDoFo::PdfEncodingFactory {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncodingFactory>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::PoDoFo::PdfEncodingFactory::PdfEncodingFactory;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding*> __zz_cib_decl GlobalPdfDocEncodingInstance_2() {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfEncoding*>(
      ::PoDoFo::PdfEncodingFactory::GlobalPdfDocEncodingInstance()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding*> __zz_cib_decl GlobalWinAnsiEncodingInstance_3() {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfEncoding*>(
      ::PoDoFo::PdfEncodingFactory::GlobalWinAnsiEncodingInstance()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding*> __zz_cib_decl GlobalMacRomanEncodingInstance_4() {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfEncoding*>(
      ::PoDoFo::PdfEncodingFactory::GlobalMacRomanEncodingInstance()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding*> __zz_cib_decl GlobalStandardEncodingInstance_5() {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfEncoding*>(
      ::PoDoFo::PdfEncodingFactory::GlobalStandardEncodingInstance()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding*> __zz_cib_decl GlobalMacExpertEncodingInstance_6() {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfEncoding*>(
      ::PoDoFo::PdfEncodingFactory::GlobalMacExpertEncodingInstance()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding*> __zz_cib_decl GlobalSymbolEncodingInstance_7() {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfEncoding*>(
      ::PoDoFo::PdfEncodingFactory::GlobalSymbolEncodingInstance()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding*> __zz_cib_decl GlobalZapfDingbatsEncodingInstance_8() {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfEncoding*>(
      ::PoDoFo::PdfEncodingFactory::GlobalZapfDingbatsEncodingInstance()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding*> __zz_cib_decl GlobalIdentityEncodingInstance_9() {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfEncoding*>(
      ::PoDoFo::PdfEncodingFactory::GlobalIdentityEncodingInstance()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding*> __zz_cib_decl GlobalWin1250EncodingInstance_10() {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfEncoding*>(
      ::PoDoFo::PdfEncodingFactory::GlobalWin1250EncodingInstance()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding*> __zz_cib_decl GlobalIso88592EncodingInstance_11() {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfEncoding*>(
      ::PoDoFo::PdfEncodingFactory::GlobalIso88592EncodingInstance()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl FreeGlobalEncodingInstances_12() {
    ::PoDoFo::PdfEncodingFactory::FreeGlobalEncodingInstances();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl PoDoFoClientAttached_13() {
    ::PoDoFo::PdfEncodingFactory::PoDoFoClientAttached();
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class362 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncodingFactory>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncodingFactory>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncodingFactory>::GlobalPdfDocEncodingInstance_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncodingFactory>::GlobalWinAnsiEncodingInstance_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncodingFactory>::GlobalMacRomanEncodingInstance_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncodingFactory>::GlobalStandardEncodingInstance_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncodingFactory>::GlobalMacExpertEncodingInstance_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncodingFactory>::GlobalSymbolEncodingInstance_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncodingFactory>::GlobalZapfDingbatsEncodingInstance_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncodingFactory>::GlobalIdentityEncodingInstance_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncodingFactory>::GlobalWin1250EncodingInstance_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncodingFactory>::GlobalIso88592EncodingInstance_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncodingFactory>::FreeGlobalEncodingInstances_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncodingFactory>::PoDoFoClientAttached_13)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 14 };
  return &methodTable;
}
}}}
