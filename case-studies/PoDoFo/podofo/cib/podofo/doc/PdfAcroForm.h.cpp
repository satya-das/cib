#include "podofo/base/PdfObject.h"
#include "podofo/doc/PdfAcroForm.h"
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
struct __zz_cib_Delegator<::PoDoFo::PdfAcroForm> : public ::PoDoFo::PdfAcroForm {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAcroForm>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfAcroForm>;
  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::PoDoFo::PdfAcroForm>;

  using ::PoDoFo::PdfAcroForm::PdfAcroForm;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<::PoDoFo::PdfDocument*> pDoc, __zz_cib_AbiType_t<::PoDoFo::EPdfAcroFormDefaulAppearance> eDefaultAppearance) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDocument*>(pDoc),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfAcroFormDefaulAppearance>(eDefaultAppearance));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<::PoDoFo::PdfDocument*> pDoc, __zz_cib_AbiType_t<::PoDoFo::PdfObject*> pObject, __zz_cib_AbiType_t<::PoDoFo::EPdfAcroFormDefaulAppearance> eDefaultAppearance) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDocument*>(pDoc),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pObject),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfAcroFormDefaulAppearance>(eDefaultAppearance));
  }
  static void __zz_cib_decl __zz_cib_Delete_3(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfDocument*> __zz_cib_decl GetDocument_4(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfDocument*>(
      __zz_cib_obj->::PoDoFo::PdfAcroForm::GetDocument()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetNeedAppearances_5(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> bNeedAppearances) {
    __zz_cib_obj->::PoDoFo::PdfAcroForm::SetNeedAppearances(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bNeedAppearances)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl GetNeedAppearances_6(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfAcroForm::GetNeedAppearances()
    );
  }
  static void __zz_cib_decl __zz_cib_RegisterProxy(::PoDoFo::PdfAcroForm* obj, __zz_cib_Proxy proxy, __zz_cib_ProxyDeleter deleter) {
    __zz_cib_ProxyManagerDelegator::__zz_cib_RegisterProxy(obj, proxy, deleter);
  }
  static ::PoDoFo::PdfElement* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class418(::PoDoFo::PdfAcroForm* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfAcroForm* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class418(::PoDoFo::PdfElement* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfAcroForm*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class409 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAcroForm>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAcroForm>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAcroForm>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAcroForm>::__zz_cib_Delete_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAcroForm>::GetDocument_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAcroForm>::SetNeedAppearances_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAcroForm>::GetNeedAppearances_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAcroForm>::__zz_cib_CastTo__zz_cib_Class418),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAcroForm>::__zz_cib_CastFrom__zz_cib_Class418),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfAcroForm>::__zz_cib_RegisterProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 10 };
  return &methodTable;
}
}}}
