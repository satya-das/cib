#include "podofo/base/PdfArray.h"
#include "podofo/base/PdfRect.h"
#include "podofo/base/PdfVariant.h"
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
struct __zz_cib_Delegator<::PoDoFo::PdfRect> : public ::PoDoFo::PdfRect {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfRect>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfRect>;
  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::PoDoFo::PdfRect>;

  using ::PoDoFo::PdfRect::PdfRect;

  static void __zz_cib_decl __zz_cib_Delete_0(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<double> left, __zz_cib_AbiType_t<double> bottom, __zz_cib_AbiType_t<double> width, __zz_cib_AbiType_t<double> height) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<double>(left),
    __zz_cib_::__zz_cib_FromAbiType<double>(bottom),
    __zz_cib_::__zz_cib_FromAbiType<double>(width),
    __zz_cib_::__zz_cib_FromAbiType<double>(height));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_3(__zz_cib_AbiType_t<const ::PoDoFo::PdfArray&> inArray) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfArray&>(inArray));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl ToVariant_5(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfVariant&> var) {
    __zz_cib_obj->::PoDoFo::PdfRect::ToVariant(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVariant&>(var)
    );
  }
  static __zz_cib_AbiType_t<std::string> __zz_cib_decl ToString_6(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<std::string>(
      __zz_cib_obj->::PoDoFo::PdfRect::ToString()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl FromArray_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfArray&> inArray) {
    __zz_cib_obj->::PoDoFo::PdfRect::FromArray(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfArray&>(inArray)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Intersect_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfRect&> rRect) {
    __zz_cib_obj->::PoDoFo::PdfRect::Intersect(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect&>(rRect)
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetBottom_9(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfRect::GetBottom()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetBottom_10(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> dBottom) {
    __zz_cib_obj->::PoDoFo::PdfRect::SetBottom(
      __zz_cib_::__zz_cib_FromAbiType<double>(dBottom)
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetLeft_11(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfRect::GetLeft()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetLeft_12(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> lLeft) {
    __zz_cib_obj->::PoDoFo::PdfRect::SetLeft(
      __zz_cib_::__zz_cib_FromAbiType<double>(lLeft)
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetWidth_13(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfRect::GetWidth()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetWidth_14(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> lWidth) {
    __zz_cib_obj->::PoDoFo::PdfRect::SetWidth(
      __zz_cib_::__zz_cib_FromAbiType<double>(lWidth)
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetHeight_15(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfRect::GetHeight()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetHeight_16(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> lHeight) {
    __zz_cib_obj->::PoDoFo::PdfRect::SetHeight(
      __zz_cib_::__zz_cib_FromAbiType<double>(lHeight)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfRect&> __zz_cib_decl __zz_cib_OperatorEqual_17(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfRect&> rhs) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfRect&>(
      __zz_cib_obj->::PoDoFo::PdfRect::operator=(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect&>(rhs)
      )
    );
  }
  static void __zz_cib_decl __zz_cib_RegisterProxy(::PoDoFo::PdfRect* obj, __zz_cib_Proxy proxy, __zz_cib_ProxyDeleter deleter) {
    __zz_cib_ProxyManagerDelegator::__zz_cib_RegisterProxy(obj, proxy, deleter);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class396 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfRect>::__zz_cib_Delete_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfRect>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfRect>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfRect>::__zz_cib_New_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfRect>::__zz_cib_Copy_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfRect>::ToVariant_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfRect>::ToString_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfRect>::FromArray_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfRect>::Intersect_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfRect>::GetBottom_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfRect>::SetBottom_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfRect>::GetLeft_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfRect>::SetLeft_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfRect>::GetWidth_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfRect>::SetWidth_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfRect>::GetHeight_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfRect>::SetHeight_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfRect>::__zz_cib_OperatorEqual_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfRect>::__zz_cib_RegisterProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 19 };
  return &methodTable;
}
}}}
