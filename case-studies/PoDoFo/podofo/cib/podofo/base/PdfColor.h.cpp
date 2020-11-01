#include "podofo/base/PdfArray.h"
#include "podofo/base/PdfColor.h"
#include "podofo/base/PdfDefines.h"
#include "podofo/base/PdfName.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfVecObjects.h"

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
struct __zz_cib_Delegator<::PoDoFo::PdfColor> : public ::PoDoFo::PdfColor {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColor>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::PoDoFo::PdfColor::PdfColor;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<double> dGray) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<double>(dGray));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<double> dRed, __zz_cib_AbiType_t<double> dGreen, __zz_cib_AbiType_t<double> dBlue) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<double>(dRed),
    __zz_cib_::__zz_cib_FromAbiType<double>(dGreen),
    __zz_cib_::__zz_cib_FromAbiType<double>(dBlue));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_3(__zz_cib_AbiType_t<double> dCyan, __zz_cib_AbiType_t<double> dMagenta, __zz_cib_AbiType_t<double> dYellow, __zz_cib_AbiType_t<double> dBlack) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<double>(dCyan),
    __zz_cib_::__zz_cib_FromAbiType<double>(dMagenta),
    __zz_cib_::__zz_cib_FromAbiType<double>(dYellow),
    __zz_cib_::__zz_cib_FromAbiType<double>(dBlack));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_5(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfColor&> __zz_cib_decl __zz_cib_OperatorEqual_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfColor&> rhs) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfColor&>(
      __zz_cib_obj->::PoDoFo::PdfColor::operator=(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfColor&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq_7(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfColor&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfColor::operator==(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfColor&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorNotEq_8(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfColor&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfColor::operator!=(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfColor&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsGrayScale_9(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfColor::IsGrayScale()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsRGB_10(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfColor::IsRGB()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsCMYK_11(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfColor::IsCMYK()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsSeparation_12(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfColor::IsSeparation()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsCieLab_13(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfColor::IsCieLab()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::EPdfColorSpace> __zz_cib_decl GetColorSpace_14(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::EPdfColorSpace>(
      __zz_cib_obj->::PoDoFo::PdfColor::GetColorSpace()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::EPdfColorSpace> __zz_cib_decl GetAlternateColorSpace_15(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::EPdfColorSpace>(
      __zz_cib_obj->::PoDoFo::PdfColor::GetAlternateColorSpace()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetGrayScale_16(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfColor::GetGrayScale()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetRed_17(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfColor::GetRed()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetGreen_18(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfColor::GetGreen()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetBlue_19(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfColor::GetBlue()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetCyan_20(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfColor::GetCyan()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetMagenta_21(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfColor::GetMagenta()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetYellow_22(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfColor::GetYellow()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetBlack_23(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfColor::GetBlack()
    );
  }
  static __zz_cib_AbiType_t<const std::string> __zz_cib_decl GetName_24(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const std::string>(
      __zz_cib_obj->::PoDoFo::PdfColor::GetName()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetDensity_25(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfColor::GetDensity()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetCieL_26(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfColor::GetCieL()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetCieA_27(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfColor::GetCieA()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetCieB_28(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfColor::GetCieB()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfColor> __zz_cib_decl ConvertToGrayScale_29(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfColor>(
      __zz_cib_obj->::PoDoFo::PdfColor::ConvertToGrayScale()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfColor> __zz_cib_decl ConvertToRGB_30(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfColor>(
      __zz_cib_obj->::PoDoFo::PdfColor::ConvertToRGB()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfColor> __zz_cib_decl ConvertToCMYK_31(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfColor>(
      __zz_cib_obj->::PoDoFo::PdfColor::ConvertToCMYK()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfArray> __zz_cib_decl ToArray_32(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfArray>(
      __zz_cib_obj->::PoDoFo::PdfColor::ToArray()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfColor> __zz_cib_decl FromString_33(__zz_cib_AbiType_t<const char*> pszName) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfColor>(
      ::PoDoFo::PdfColor::FromString(
        __zz_cib_::__zz_cib_FromAbiType<const char*>(pszName)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfColor> __zz_cib_decl FromArray_34(__zz_cib_AbiType_t<const ::PoDoFo::PdfArray&> rArray) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfColor>(
      ::PoDoFo::PdfColor::FromArray(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfArray&>(rArray)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::EPdfColorSpace> __zz_cib_decl GetColorSpaceForName_35(__zz_cib_AbiType_t<const ::PoDoFo::PdfName&> rName) {
    return __zz_cib_ToAbiType<::PoDoFo::EPdfColorSpace>(
      ::PoDoFo::PdfColor::GetColorSpaceForName(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(rName)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfName> __zz_cib_decl GetNameForColorSpace_36(__zz_cib_AbiType_t<::PoDoFo::EPdfColorSpace> eColorSpace) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfName>(
      ::PoDoFo::PdfColor::GetNameForColorSpace(
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfColorSpace>(eColorSpace)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_decl BuildColorSpace_37(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfVecObjects*> pOwner) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfColor::BuildColorSpace(
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVecObjects*>(pOwner)
      )
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class336 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColor>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColor>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColor>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColor>::__zz_cib_New_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColor>::__zz_cib_Copy_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColor>::__zz_cib_Delete_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColor>::__zz_cib_OperatorEqual_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColor>::__zz_cib_OperatorCmpEq_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColor>::__zz_cib_OperatorNotEq_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColor>::IsGrayScale_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColor>::IsRGB_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColor>::IsCMYK_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColor>::IsSeparation_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColor>::IsCieLab_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColor>::GetColorSpace_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColor>::GetAlternateColorSpace_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColor>::GetGrayScale_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColor>::GetRed_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColor>::GetGreen_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColor>::GetBlue_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColor>::GetCyan_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColor>::GetMagenta_21),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColor>::GetYellow_22),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColor>::GetBlack_23),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColor>::GetName_24),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColor>::GetDensity_25),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColor>::GetCieL_26),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColor>::GetCieA_27),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColor>::GetCieB_28),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColor>::ConvertToGrayScale_29),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColor>::ConvertToRGB_30),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColor>::ConvertToCMYK_31),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColor>::ToArray_32),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColor>::FromString_33),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColor>::FromArray_34),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColor>::GetColorSpaceForName_35),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColor>::GetNameForColorSpace_36),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColor>::BuildColorSpace_37)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 38 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfColorGray> : public ::PoDoFo::PdfColorGray {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColorGray>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::PoDoFo::PdfColorGray::PdfColorGray;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0(__zz_cib_AbiType_t<double> dGray) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<double>(dGray));
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static ::PoDoFo::PdfColor* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class336(::PoDoFo::PdfColorGray* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfColorGray* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class336(::PoDoFo::PdfColor* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfColorGray*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class337 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColorGray>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColorGray>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColorGray>::__zz_cib_CastTo__zz_cib_Class336),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColorGray>::__zz_cib_CastFrom__zz_cib_Class336)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 4 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfColorRGB> : public ::PoDoFo::PdfColorRGB {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColorRGB>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::PoDoFo::PdfColorRGB::PdfColorRGB;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0(__zz_cib_AbiType_t<double> dRed, __zz_cib_AbiType_t<double> dGreen, __zz_cib_AbiType_t<double> dBlue) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<double>(dRed),
    __zz_cib_::__zz_cib_FromAbiType<double>(dGreen),
    __zz_cib_::__zz_cib_FromAbiType<double>(dBlue));
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static ::PoDoFo::PdfColor* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class336(::PoDoFo::PdfColorRGB* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfColorRGB* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class336(::PoDoFo::PdfColor* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfColorRGB*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class338 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColorRGB>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColorRGB>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColorRGB>::__zz_cib_CastTo__zz_cib_Class336),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColorRGB>::__zz_cib_CastFrom__zz_cib_Class336)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 4 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfColorCMYK> : public ::PoDoFo::PdfColorCMYK {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColorCMYK>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::PoDoFo::PdfColorCMYK::PdfColorCMYK;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0(__zz_cib_AbiType_t<double> dCyan, __zz_cib_AbiType_t<double> dMagenta, __zz_cib_AbiType_t<double> dYellow, __zz_cib_AbiType_t<double> dBlack) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<double>(dCyan),
    __zz_cib_::__zz_cib_FromAbiType<double>(dMagenta),
    __zz_cib_::__zz_cib_FromAbiType<double>(dYellow),
    __zz_cib_::__zz_cib_FromAbiType<double>(dBlack));
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static ::PoDoFo::PdfColor* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class336(::PoDoFo::PdfColorCMYK* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfColorCMYK* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class336(::PoDoFo::PdfColor* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfColorCMYK*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class339 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColorCMYK>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColorCMYK>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColorCMYK>::__zz_cib_CastTo__zz_cib_Class336),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColorCMYK>::__zz_cib_CastFrom__zz_cib_Class336)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 4 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfColorSeparationAll> : public ::PoDoFo::PdfColorSeparationAll {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColorSeparationAll>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::PoDoFo::PdfColorSeparationAll::PdfColorSeparationAll;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0() {
    return new __zz_cib_Delegatee();
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static ::PoDoFo::PdfColor* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class336(::PoDoFo::PdfColorSeparationAll* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfColorSeparationAll* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class336(::PoDoFo::PdfColor* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfColorSeparationAll*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class340 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColorSeparationAll>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColorSeparationAll>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColorSeparationAll>::__zz_cib_CastTo__zz_cib_Class336),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColorSeparationAll>::__zz_cib_CastFrom__zz_cib_Class336)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 4 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfColorSeparationNone> : public ::PoDoFo::PdfColorSeparationNone {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColorSeparationNone>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::PoDoFo::PdfColorSeparationNone::PdfColorSeparationNone;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0() {
    return new __zz_cib_Delegatee();
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static ::PoDoFo::PdfColor* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class336(::PoDoFo::PdfColorSeparationNone* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfColorSeparationNone* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class336(::PoDoFo::PdfColor* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfColorSeparationNone*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class341 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColorSeparationNone>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColorSeparationNone>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColorSeparationNone>::__zz_cib_CastTo__zz_cib_Class336),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColorSeparationNone>::__zz_cib_CastFrom__zz_cib_Class336)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 4 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfColorSeparation> : public ::PoDoFo::PdfColorSeparation {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColorSeparation>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::PoDoFo::PdfColorSeparation::PdfColorSeparation;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0(__zz_cib_AbiType_t<const std::string&> sName, __zz_cib_AbiType_t<double> dDensity, __zz_cib_AbiType_t<const ::PoDoFo::PdfColor&> alternateColor) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const std::string&>(sName),
    __zz_cib_::__zz_cib_FromAbiType<double>(dDensity),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfColor&>(alternateColor));
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static ::PoDoFo::PdfColor* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class336(::PoDoFo::PdfColorSeparation* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfColorSeparation* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class336(::PoDoFo::PdfColor* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfColorSeparation*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class342 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColorSeparation>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColorSeparation>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColorSeparation>::__zz_cib_CastTo__zz_cib_Class336),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColorSeparation>::__zz_cib_CastFrom__zz_cib_Class336)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 4 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfColorCieLab> : public ::PoDoFo::PdfColorCieLab {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColorCieLab>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::PoDoFo::PdfColorCieLab::PdfColorCieLab;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0(__zz_cib_AbiType_t<double> dCieL, __zz_cib_AbiType_t<double> dCieA, __zz_cib_AbiType_t<double> dCieB) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<double>(dCieL),
    __zz_cib_::__zz_cib_FromAbiType<double>(dCieA),
    __zz_cib_::__zz_cib_FromAbiType<double>(dCieB));
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static ::PoDoFo::PdfColor* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class336(::PoDoFo::PdfColorCieLab* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfColorCieLab* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class336(::PoDoFo::PdfColor* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfColorCieLab*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class343 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColorCieLab>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColorCieLab>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColorCieLab>::__zz_cib_CastTo__zz_cib_Class336),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfColorCieLab>::__zz_cib_CastFrom__zz_cib_Class336)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 4 };
  return &methodTable;
}
}}}
