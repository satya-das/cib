#include "podofo/base/PdfName.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfVecObjects.h"
#include "podofo/base/PdfWriter.h"
#include "podofo/doc/PdfDocument.h"
#include "podofo/doc/PdfExtGState.h"
#include "podofo/doc/PdfPage.h"

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
struct __zz_cib_Delegator<::PoDoFo::PdfExtGState> : public ::PoDoFo::PdfExtGState {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfExtGState>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfExtGState>;
  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::PoDoFo::PdfExtGState>;

  using ::PoDoFo::PdfExtGState::PdfExtGState;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<::PoDoFo::PdfVecObjects*> pParent) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVecObjects*>(pParent));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<::PoDoFo::PdfDocument*> pParent) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDocument*>(pParent));
  }
  static void __zz_cib_decl __zz_cib_Delete_3(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> __zz_cib_decl GetIdentifier_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfName&>(
      __zz_cib_obj->::PoDoFo::PdfExtGState::GetIdentifier()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetFillOpacity_5(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<float> opac) {
    __zz_cib_obj->::PoDoFo::PdfExtGState::SetFillOpacity(
      __zz_cib_::__zz_cib_FromAbiType<float>(opac)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetStrokeOpacity_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<float> opac) {
    __zz_cib_obj->::PoDoFo::PdfExtGState::SetStrokeOpacity(
      __zz_cib_::__zz_cib_FromAbiType<float>(opac)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetBlendMode_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> blendMode) {
    __zz_cib_obj->::PoDoFo::PdfExtGState::SetBlendMode(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(blendMode)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetOverprint_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> enable) {
    __zz_cib_obj->::PoDoFo::PdfExtGState::SetOverprint(
      __zz_cib_::__zz_cib_FromAbiType<bool>(enable)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetFillOverprint_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> enable) {
    __zz_cib_obj->::PoDoFo::PdfExtGState::SetFillOverprint(
      __zz_cib_::__zz_cib_FromAbiType<bool>(enable)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetStrokeOverprint_10(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> enable) {
    __zz_cib_obj->::PoDoFo::PdfExtGState::SetStrokeOverprint(
      __zz_cib_::__zz_cib_FromAbiType<bool>(enable)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetNonZeroOverprint_11(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> enable) {
    __zz_cib_obj->::PoDoFo::PdfExtGState::SetNonZeroOverprint(
      __zz_cib_::__zz_cib_FromAbiType<bool>(enable)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetRenderingIntent_12(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> intent) {
    __zz_cib_obj->::PoDoFo::PdfExtGState::SetRenderingIntent(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(intent)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetFrequency_13(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> frequency) {
    __zz_cib_obj->::PoDoFo::PdfExtGState::SetFrequency(
      __zz_cib_::__zz_cib_FromAbiType<double>(frequency)
    );
  }
  static void __zz_cib_decl __zz_cib_RegisterProxy(::PoDoFo::PdfExtGState* obj, __zz_cib_Proxy proxy, __zz_cib_ProxyDeleter deleter) {
    __zz_cib_ProxyManagerDelegator::__zz_cib_RegisterProxy(obj, proxy, deleter);
  }
  static ::PoDoFo::PdfElement* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class418(::PoDoFo::PdfExtGState* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfExtGState* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class418(::PoDoFo::PdfElement* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfExtGState*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class420 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfExtGState>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfExtGState>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfExtGState>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfExtGState>::__zz_cib_Delete_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfExtGState>::GetIdentifier_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfExtGState>::SetFillOpacity_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfExtGState>::SetStrokeOpacity_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfExtGState>::SetBlendMode_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfExtGState>::SetOverprint_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfExtGState>::SetFillOverprint_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfExtGState>::SetStrokeOverprint_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfExtGState>::SetNonZeroOverprint_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfExtGState>::SetRenderingIntent_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfExtGState>::SetFrequency_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfExtGState>::__zz_cib_CastTo__zz_cib_Class418),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfExtGState>::__zz_cib_CastFrom__zz_cib_Class418),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfExtGState>::__zz_cib_RegisterProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 17 };
  return &methodTable;
}
}}}
