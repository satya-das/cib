#include "podofo/doc/PdfFontConfigWrapper.h"

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
struct __zz_cib_Delegator<::PoDoFo::PdfFontConfigWrapper> : public ::PoDoFo::PdfFontConfigWrapper {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontConfigWrapper>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::PoDoFo::PdfFontConfigWrapper::PdfFontConfigWrapper;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_1(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_2(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<void*> __zz_cib_decl GetFontConfig_3(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<void*>(
      __zz_cib_obj->::PoDoFo::PdfFontConfigWrapper::GetFontConfig()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfFontConfigWrapper&> __zz_cib_decl __zz_cib_OperatorEqual_4(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfFontConfigWrapper&> rhs) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfFontConfigWrapper&>(
      __zz_cib_obj->::PoDoFo::PdfFontConfigWrapper::operator=(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfFontConfigWrapper&>(rhs)
      )
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class434 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontConfigWrapper>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontConfigWrapper>::__zz_cib_Copy_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontConfigWrapper>::__zz_cib_Delete_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontConfigWrapper>::GetFontConfig_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontConfigWrapper>::__zz_cib_OperatorEqual_4)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 5 };
  return &methodTable;
}
}}}
