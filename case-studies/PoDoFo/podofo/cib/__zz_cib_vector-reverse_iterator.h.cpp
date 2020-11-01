#include "__zz_cib_stl-helpers/__zz_cib_vector-reverse_iterator.h"
#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfDefines.h"
#include "podofo/base/PdfExtension.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfRect.h"
#include "podofo/base/PdfString.h"
#include "podofo/doc/PdfFontCache.h"
#include "podofo/doc/PdfPage.h"
#include <list>

#include "__zz_cib_CibPoDoFo-class-down-cast.h"
#include "__zz_cib_CibPoDoFo-delegate-helper.h"
#include "__zz_cib_CibPoDoFo-generic.h"
#include "__zz_cib_CibPoDoFo-ids.h"
#include "__zz_cib_CibPoDoFo-type-converters.h"
#include "__zz_cib_CibPoDoFo-mtable-helper.h"
#include "__zz_cib_CibPoDoFo-proxy-mgr.h"

namespace __zz_cib_ {
using namespace ::__zz_cib_stl_helpers;
template <>
struct __zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >> : public ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const > {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >::vector_reverse_iterator;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >::reference> __zz_cib_decl __zz_cib_OperatorMul_3(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >::pointer> __zz_cib_decl __zz_cib_OperatorArrow_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >::pointer>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >::operator->()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >::const_reference> __zz_cib_decl __zz_cib_OperatorMul_5(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >::const_reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >&> __zz_cib_decl __zz_cib_OperatorInc_6(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >::operator++()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >> __zz_cib_decl __zz_cib_OperatorInc_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >::operator++(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >&> __zz_cib_decl __zz_cib_OperatorDec_8(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >::operator--()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >> __zz_cib_decl __zz_cib_OperatorDec_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >::operator--(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >::reference> __zz_cib_decl __zz_cib_OperatorIndex_10(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >&> __zz_cib_decl __zz_cib_OperatorPlusEq_11(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >::operator+=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >> __zz_cib_decl __zz_cib_OperatorPlus_12(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >::operator+(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >&> __zz_cib_decl __zz_cib_OperatorMinusEq_13(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >::operator-=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >> __zz_cib_decl __zz_cib_OperatorMinus_14(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >::operator-(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq_15(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >::operator==(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorNotEq_16(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >::operator!=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLT_17(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >::operator<(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGT_18(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >::operator>(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLE_19(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >::operator<=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGE_20(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >::operator>=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >::difference_type> __zz_cib_decl __zz_cib_OperatorMinus_21(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >&> rhs) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >::difference_type>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >::operator-(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >&>(rhs)
      )
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class256 {
using namespace ::__zz_cib_stl_helpers;
namespace __zz_cib_Class266 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >>::__zz_cib_OperatorMul_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >>::__zz_cib_OperatorArrow_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >>::__zz_cib_OperatorMul_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >>::__zz_cib_OperatorInc_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >>::__zz_cib_OperatorInc_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >>::__zz_cib_OperatorDec_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >>::__zz_cib_OperatorDec_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >>::__zz_cib_OperatorIndex_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >>::__zz_cib_OperatorPlusEq_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >>::__zz_cib_OperatorPlus_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >>::__zz_cib_OperatorMinusEq_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >>::__zz_cib_OperatorMinus_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >>::__zz_cib_OperatorCmpEq_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >>::__zz_cib_OperatorNotEq_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >>::__zz_cib_OperatorLT_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >>::__zz_cib_OperatorGT_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >>::__zz_cib_OperatorLE_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >>::__zz_cib_OperatorGE_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter const >>::__zz_cib_OperatorMinus_21)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 22 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::__zz_cib_stl_helpers;
template <>
struct __zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>> : public ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter> {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>::vector_reverse_iterator;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>::reference> __zz_cib_decl __zz_cib_OperatorMul_3(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>::pointer> __zz_cib_decl __zz_cib_OperatorArrow_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>::pointer>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>::operator->()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>::const_reference> __zz_cib_decl __zz_cib_OperatorMul_5(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>::const_reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>&> __zz_cib_decl __zz_cib_OperatorInc_6(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>::operator++()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>> __zz_cib_decl __zz_cib_OperatorInc_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>::operator++(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>&> __zz_cib_decl __zz_cib_OperatorDec_8(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>::operator--()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>> __zz_cib_decl __zz_cib_OperatorDec_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>::operator--(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>::reference> __zz_cib_decl __zz_cib_OperatorIndex_10(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>&> __zz_cib_decl __zz_cib_OperatorPlusEq_11(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>::operator+=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>> __zz_cib_decl __zz_cib_OperatorPlus_12(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>::operator+(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>&> __zz_cib_decl __zz_cib_OperatorMinusEq_13(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>::operator-=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>> __zz_cib_decl __zz_cib_OperatorMinus_14(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>::operator-(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq_15(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>::operator==(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorNotEq_16(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>::operator!=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLT_17(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>::operator<(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGT_18(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>::operator>(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLE_19(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>::operator<=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGE_20(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>::operator>=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>::difference_type> __zz_cib_decl __zz_cib_OperatorMinus_21(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>&> rhs) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>::difference_type>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>::operator-(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>&>(rhs)
      )
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class256 {
using namespace ::__zz_cib_stl_helpers;
namespace __zz_cib_Class265 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>>::__zz_cib_OperatorMul_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>>::__zz_cib_OperatorArrow_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>>::__zz_cib_OperatorMul_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>>::__zz_cib_OperatorInc_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>>::__zz_cib_OperatorInc_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>>::__zz_cib_OperatorDec_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>>::__zz_cib_OperatorDec_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>>::__zz_cib_OperatorIndex_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>>::__zz_cib_OperatorPlusEq_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>>::__zz_cib_OperatorPlus_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>>::__zz_cib_OperatorMinusEq_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>>::__zz_cib_OperatorMinus_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>>::__zz_cib_OperatorCmpEq_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>>::__zz_cib_OperatorNotEq_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>>::__zz_cib_OperatorLT_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>>::__zz_cib_OperatorGT_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>>::__zz_cib_OperatorLE_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>>::__zz_cib_OperatorGE_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::EPdfFilter>>::__zz_cib_OperatorMinus_21)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 22 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::__zz_cib_stl_helpers;
template <>
struct __zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >> : public ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const > {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >::vector_reverse_iterator;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >::reference> __zz_cib_decl __zz_cib_OperatorMul_3(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >::pointer> __zz_cib_decl __zz_cib_OperatorArrow_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >::pointer>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >::operator->()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >::const_reference> __zz_cib_decl __zz_cib_OperatorMul_5(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >::const_reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >&> __zz_cib_decl __zz_cib_OperatorInc_6(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >::operator++()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >> __zz_cib_decl __zz_cib_OperatorInc_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >::operator++(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >&> __zz_cib_decl __zz_cib_OperatorDec_8(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >::operator--()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >> __zz_cib_decl __zz_cib_OperatorDec_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >::operator--(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >::reference> __zz_cib_decl __zz_cib_OperatorIndex_10(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >&> __zz_cib_decl __zz_cib_OperatorPlusEq_11(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >::operator+=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >> __zz_cib_decl __zz_cib_OperatorPlus_12(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >::operator+(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >&> __zz_cib_decl __zz_cib_OperatorMinusEq_13(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >::operator-=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >> __zz_cib_decl __zz_cib_OperatorMinus_14(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >::operator-(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq_15(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >::operator==(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorNotEq_16(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >::operator!=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLT_17(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >::operator<(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGT_18(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >::operator>(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLE_19(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >::operator<=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGE_20(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >::operator>=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >::difference_type> __zz_cib_decl __zz_cib_OperatorMinus_21(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >&> rhs) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >::difference_type>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >::operator-(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >&>(rhs)
      )
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class256 {
using namespace ::__zz_cib_stl_helpers;
namespace __zz_cib_Class301 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >>::__zz_cib_OperatorMul_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >>::__zz_cib_OperatorArrow_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >>::__zz_cib_OperatorMul_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >>::__zz_cib_OperatorInc_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >>::__zz_cib_OperatorInc_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >>::__zz_cib_OperatorDec_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >>::__zz_cib_OperatorDec_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >>::__zz_cib_OperatorIndex_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >>::__zz_cib_OperatorPlusEq_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >>::__zz_cib_OperatorPlus_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >>::__zz_cib_OperatorMinusEq_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >>::__zz_cib_OperatorMinus_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >>::__zz_cib_OperatorCmpEq_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >>::__zz_cib_OperatorNotEq_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >>::__zz_cib_OperatorLT_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >>::__zz_cib_OperatorGT_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >>::__zz_cib_OperatorLE_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >>::__zz_cib_OperatorGE_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension const >>::__zz_cib_OperatorMinus_21)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 22 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::__zz_cib_stl_helpers;
template <>
struct __zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>> : public ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension> {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>::vector_reverse_iterator;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>::reference> __zz_cib_decl __zz_cib_OperatorMul_3(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>::pointer> __zz_cib_decl __zz_cib_OperatorArrow_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>::pointer>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>::operator->()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>::const_reference> __zz_cib_decl __zz_cib_OperatorMul_5(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>::const_reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>&> __zz_cib_decl __zz_cib_OperatorInc_6(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>::operator++()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>> __zz_cib_decl __zz_cib_OperatorInc_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>::operator++(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>&> __zz_cib_decl __zz_cib_OperatorDec_8(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>::operator--()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>> __zz_cib_decl __zz_cib_OperatorDec_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>::operator--(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>::reference> __zz_cib_decl __zz_cib_OperatorIndex_10(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>&> __zz_cib_decl __zz_cib_OperatorPlusEq_11(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>::operator+=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>> __zz_cib_decl __zz_cib_OperatorPlus_12(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>::operator+(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>&> __zz_cib_decl __zz_cib_OperatorMinusEq_13(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>::operator-=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>> __zz_cib_decl __zz_cib_OperatorMinus_14(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>::operator-(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq_15(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>::operator==(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorNotEq_16(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>::operator!=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLT_17(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>::operator<(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGT_18(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>::operator>(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLE_19(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>::operator<=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGE_20(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>::operator>=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>::difference_type> __zz_cib_decl __zz_cib_OperatorMinus_21(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>&> rhs) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>::difference_type>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>::operator-(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>&>(rhs)
      )
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class256 {
using namespace ::__zz_cib_stl_helpers;
namespace __zz_cib_Class300 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>>::__zz_cib_OperatorMul_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>>::__zz_cib_OperatorArrow_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>>::__zz_cib_OperatorMul_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>>::__zz_cib_OperatorInc_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>>::__zz_cib_OperatorInc_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>>::__zz_cib_OperatorDec_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>>::__zz_cib_OperatorDec_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>>::__zz_cib_OperatorIndex_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>>::__zz_cib_OperatorPlusEq_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>>::__zz_cib_OperatorPlus_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>>::__zz_cib_OperatorMinusEq_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>>::__zz_cib_OperatorMinus_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>>::__zz_cib_OperatorCmpEq_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>>::__zz_cib_OperatorNotEq_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>>::__zz_cib_OperatorLT_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>>::__zz_cib_OperatorGT_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>>::__zz_cib_OperatorLE_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>>::__zz_cib_OperatorGE_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfExtension>>::__zz_cib_OperatorMinus_21)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 22 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::__zz_cib_stl_helpers;
template <>
struct __zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >> : public ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const > {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >::vector_reverse_iterator;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >::reference> __zz_cib_decl __zz_cib_OperatorMul_3(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >::pointer> __zz_cib_decl __zz_cib_OperatorArrow_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >::pointer>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >::operator->()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >::const_reference> __zz_cib_decl __zz_cib_OperatorMul_5(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >::const_reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >&> __zz_cib_decl __zz_cib_OperatorInc_6(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >::operator++()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >> __zz_cib_decl __zz_cib_OperatorInc_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >::operator++(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >&> __zz_cib_decl __zz_cib_OperatorDec_8(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >::operator--()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >> __zz_cib_decl __zz_cib_OperatorDec_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >::operator--(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >::reference> __zz_cib_decl __zz_cib_OperatorIndex_10(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >&> __zz_cib_decl __zz_cib_OperatorPlusEq_11(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >::operator+=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >> __zz_cib_decl __zz_cib_OperatorPlus_12(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >::operator+(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >&> __zz_cib_decl __zz_cib_OperatorMinusEq_13(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >::operator-=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >> __zz_cib_decl __zz_cib_OperatorMinus_14(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >::operator-(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq_15(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >::operator==(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorNotEq_16(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >::operator!=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLT_17(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >::operator<(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGT_18(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >::operator>(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLE_19(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >::operator<=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGE_20(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >::operator>=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >::difference_type> __zz_cib_decl __zz_cib_OperatorMinus_21(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >&> rhs) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >::difference_type>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >::operator-(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >&>(rhs)
      )
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class256 {
using namespace ::__zz_cib_stl_helpers;
namespace __zz_cib_Class260 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >>::__zz_cib_OperatorMul_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >>::__zz_cib_OperatorArrow_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >>::__zz_cib_OperatorMul_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >>::__zz_cib_OperatorInc_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >>::__zz_cib_OperatorInc_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >>::__zz_cib_OperatorDec_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >>::__zz_cib_OperatorDec_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >>::__zz_cib_OperatorIndex_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >>::__zz_cib_OperatorPlusEq_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >>::__zz_cib_OperatorPlus_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >>::__zz_cib_OperatorMinusEq_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >>::__zz_cib_OperatorMinus_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >>::__zz_cib_OperatorCmpEq_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >>::__zz_cib_OperatorNotEq_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >>::__zz_cib_OperatorLT_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >>::__zz_cib_OperatorGT_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >>::__zz_cib_OperatorLE_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >>::__zz_cib_OperatorGE_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject const >>::__zz_cib_OperatorMinus_21)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 22 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::__zz_cib_stl_helpers;
template <>
struct __zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >> : public ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const > {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >::vector_reverse_iterator;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >::reference> __zz_cib_decl __zz_cib_OperatorMul_3(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >::pointer> __zz_cib_decl __zz_cib_OperatorArrow_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >::pointer>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >::operator->()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >::const_reference> __zz_cib_decl __zz_cib_OperatorMul_5(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >::const_reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >&> __zz_cib_decl __zz_cib_OperatorInc_6(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >::operator++()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >> __zz_cib_decl __zz_cib_OperatorInc_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >::operator++(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >&> __zz_cib_decl __zz_cib_OperatorDec_8(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >::operator--()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >> __zz_cib_decl __zz_cib_OperatorDec_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >::operator--(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >::reference> __zz_cib_decl __zz_cib_OperatorIndex_10(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >&> __zz_cib_decl __zz_cib_OperatorPlusEq_11(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >::operator+=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >> __zz_cib_decl __zz_cib_OperatorPlus_12(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >::operator+(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >&> __zz_cib_decl __zz_cib_OperatorMinusEq_13(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >::operator-=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >> __zz_cib_decl __zz_cib_OperatorMinus_14(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >::operator-(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq_15(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >::operator==(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorNotEq_16(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >::operator!=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLT_17(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >::operator<(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGT_18(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >::operator>(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLE_19(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >::operator<=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGE_20(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >::operator>=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >::difference_type> __zz_cib_decl __zz_cib_OperatorMinus_21(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >&> rhs) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >::difference_type>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >::operator-(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >&>(rhs)
      )
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class256 {
using namespace ::__zz_cib_stl_helpers;
namespace __zz_cib_Class306 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >>::__zz_cib_OperatorMul_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >>::__zz_cib_OperatorArrow_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >>::__zz_cib_OperatorMul_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >>::__zz_cib_OperatorInc_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >>::__zz_cib_OperatorInc_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >>::__zz_cib_OperatorDec_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >>::__zz_cib_OperatorDec_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >>::__zz_cib_OperatorIndex_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >>::__zz_cib_OperatorPlusEq_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >>::__zz_cib_OperatorPlus_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >>::__zz_cib_OperatorMinusEq_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >>::__zz_cib_OperatorMinus_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >>::__zz_cib_OperatorCmpEq_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >>::__zz_cib_OperatorNotEq_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >>::__zz_cib_OperatorLT_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >>::__zz_cib_OperatorGT_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >>::__zz_cib_OperatorLE_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >>::__zz_cib_OperatorGE_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject* const >>::__zz_cib_OperatorMinus_21)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 22 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::__zz_cib_stl_helpers;
template <>
struct __zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>> : public ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*> {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>::vector_reverse_iterator;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>::reference> __zz_cib_decl __zz_cib_OperatorMul_3(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>::pointer> __zz_cib_decl __zz_cib_OperatorArrow_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>::pointer>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>::operator->()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>::const_reference> __zz_cib_decl __zz_cib_OperatorMul_5(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>::const_reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>&> __zz_cib_decl __zz_cib_OperatorInc_6(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>::operator++()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>> __zz_cib_decl __zz_cib_OperatorInc_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>::operator++(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>&> __zz_cib_decl __zz_cib_OperatorDec_8(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>::operator--()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>> __zz_cib_decl __zz_cib_OperatorDec_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>::operator--(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>::reference> __zz_cib_decl __zz_cib_OperatorIndex_10(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>&> __zz_cib_decl __zz_cib_OperatorPlusEq_11(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>::operator+=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>> __zz_cib_decl __zz_cib_OperatorPlus_12(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>::operator+(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>&> __zz_cib_decl __zz_cib_OperatorMinusEq_13(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>::operator-=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>> __zz_cib_decl __zz_cib_OperatorMinus_14(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>::operator-(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq_15(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>::operator==(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorNotEq_16(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>::operator!=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLT_17(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>::operator<(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGT_18(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>::operator>(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLE_19(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>::operator<=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGE_20(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>::operator>=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>::difference_type> __zz_cib_decl __zz_cib_OperatorMinus_21(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>&> rhs) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>::difference_type>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>::operator-(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>&>(rhs)
      )
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class256 {
using namespace ::__zz_cib_stl_helpers;
namespace __zz_cib_Class305 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>>::__zz_cib_OperatorMul_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>>::__zz_cib_OperatorArrow_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>>::__zz_cib_OperatorMul_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>>::__zz_cib_OperatorInc_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>>::__zz_cib_OperatorInc_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>>::__zz_cib_OperatorDec_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>>::__zz_cib_OperatorDec_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>>::__zz_cib_OperatorIndex_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>>::__zz_cib_OperatorPlusEq_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>>::__zz_cib_OperatorPlus_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>>::__zz_cib_OperatorMinusEq_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>>::__zz_cib_OperatorMinus_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>>::__zz_cib_OperatorCmpEq_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>>::__zz_cib_OperatorNotEq_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>>::__zz_cib_OperatorLT_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>>::__zz_cib_OperatorGT_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>>::__zz_cib_OperatorLE_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>>::__zz_cib_OperatorGE_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject*>>::__zz_cib_OperatorMinus_21)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 22 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::__zz_cib_stl_helpers;
template <>
struct __zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>> : public ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject> {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>::vector_reverse_iterator;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>::reference> __zz_cib_decl __zz_cib_OperatorMul_3(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>::pointer> __zz_cib_decl __zz_cib_OperatorArrow_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>::pointer>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>::operator->()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>::const_reference> __zz_cib_decl __zz_cib_OperatorMul_5(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>::const_reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>&> __zz_cib_decl __zz_cib_OperatorInc_6(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>::operator++()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>> __zz_cib_decl __zz_cib_OperatorInc_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>::operator++(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>&> __zz_cib_decl __zz_cib_OperatorDec_8(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>::operator--()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>> __zz_cib_decl __zz_cib_OperatorDec_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>::operator--(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>::reference> __zz_cib_decl __zz_cib_OperatorIndex_10(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>&> __zz_cib_decl __zz_cib_OperatorPlusEq_11(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>::operator+=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>> __zz_cib_decl __zz_cib_OperatorPlus_12(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>::operator+(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>&> __zz_cib_decl __zz_cib_OperatorMinusEq_13(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>::operator-=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>> __zz_cib_decl __zz_cib_OperatorMinus_14(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>::operator-(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq_15(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>::operator==(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorNotEq_16(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>::operator!=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLT_17(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>::operator<(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGT_18(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>::operator>(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLE_19(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>::operator<=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGE_20(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>::operator>=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>::difference_type> __zz_cib_decl __zz_cib_OperatorMinus_21(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>&> rhs) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>::difference_type>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>::operator-(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>&>(rhs)
      )
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class256 {
using namespace ::__zz_cib_stl_helpers;
namespace __zz_cib_Class259 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>>::__zz_cib_OperatorMul_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>>::__zz_cib_OperatorArrow_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>>::__zz_cib_OperatorMul_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>>::__zz_cib_OperatorInc_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>>::__zz_cib_OperatorInc_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>>::__zz_cib_OperatorDec_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>>::__zz_cib_OperatorDec_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>>::__zz_cib_OperatorIndex_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>>::__zz_cib_OperatorPlusEq_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>>::__zz_cib_OperatorPlus_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>>::__zz_cib_OperatorMinusEq_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>>::__zz_cib_OperatorMinus_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>>::__zz_cib_OperatorCmpEq_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>>::__zz_cib_OperatorNotEq_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>>::__zz_cib_OperatorLT_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>>::__zz_cib_OperatorGT_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>>::__zz_cib_OperatorLE_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>>::__zz_cib_OperatorGE_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfObject>>::__zz_cib_OperatorMinus_21)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 22 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::__zz_cib_stl_helpers;
template <>
struct __zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >> : public ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const > {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >::vector_reverse_iterator;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >::reference> __zz_cib_decl __zz_cib_OperatorMul_3(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >::pointer> __zz_cib_decl __zz_cib_OperatorArrow_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >::pointer>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >::operator->()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >::const_reference> __zz_cib_decl __zz_cib_OperatorMul_5(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >::const_reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >&> __zz_cib_decl __zz_cib_OperatorInc_6(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >::operator++()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >> __zz_cib_decl __zz_cib_OperatorInc_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >::operator++(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >&> __zz_cib_decl __zz_cib_OperatorDec_8(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >::operator--()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >> __zz_cib_decl __zz_cib_OperatorDec_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >::operator--(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >::reference> __zz_cib_decl __zz_cib_OperatorIndex_10(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >&> __zz_cib_decl __zz_cib_OperatorPlusEq_11(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >::operator+=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >> __zz_cib_decl __zz_cib_OperatorPlus_12(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >::operator+(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >&> __zz_cib_decl __zz_cib_OperatorMinusEq_13(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >::operator-=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >> __zz_cib_decl __zz_cib_OperatorMinus_14(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >::operator-(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq_15(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >::operator==(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorNotEq_16(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >::operator!=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLT_17(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >::operator<(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGT_18(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >::operator>(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLE_19(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >::operator<=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGE_20(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >::operator>=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >::difference_type> __zz_cib_decl __zz_cib_OperatorMinus_21(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >&> rhs) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >::difference_type>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >::operator-(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >&>(rhs)
      )
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class256 {
using namespace ::__zz_cib_stl_helpers;
namespace __zz_cib_Class311 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >>::__zz_cib_OperatorMul_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >>::__zz_cib_OperatorArrow_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >>::__zz_cib_OperatorMul_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >>::__zz_cib_OperatorInc_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >>::__zz_cib_OperatorInc_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >>::__zz_cib_OperatorDec_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >>::__zz_cib_OperatorDec_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >>::__zz_cib_OperatorIndex_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >>::__zz_cib_OperatorPlusEq_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >>::__zz_cib_OperatorPlus_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >>::__zz_cib_OperatorMinusEq_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >>::__zz_cib_OperatorMinus_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >>::__zz_cib_OperatorCmpEq_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >>::__zz_cib_OperatorNotEq_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >>::__zz_cib_OperatorLT_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >>::__zz_cib_OperatorGT_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >>::__zz_cib_OperatorLE_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >>::__zz_cib_OperatorGE_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage* const >>::__zz_cib_OperatorMinus_21)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 22 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::__zz_cib_stl_helpers;
template <>
struct __zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>> : public ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*> {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>::vector_reverse_iterator;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>::reference> __zz_cib_decl __zz_cib_OperatorMul_3(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>::pointer> __zz_cib_decl __zz_cib_OperatorArrow_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>::pointer>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>::operator->()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>::const_reference> __zz_cib_decl __zz_cib_OperatorMul_5(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>::const_reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>&> __zz_cib_decl __zz_cib_OperatorInc_6(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>::operator++()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>> __zz_cib_decl __zz_cib_OperatorInc_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>::operator++(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>&> __zz_cib_decl __zz_cib_OperatorDec_8(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>::operator--()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>> __zz_cib_decl __zz_cib_OperatorDec_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>::operator--(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>::reference> __zz_cib_decl __zz_cib_OperatorIndex_10(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>&> __zz_cib_decl __zz_cib_OperatorPlusEq_11(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>::operator+=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>> __zz_cib_decl __zz_cib_OperatorPlus_12(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>::operator+(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>&> __zz_cib_decl __zz_cib_OperatorMinusEq_13(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>::operator-=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>> __zz_cib_decl __zz_cib_OperatorMinus_14(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>::operator-(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq_15(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>::operator==(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorNotEq_16(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>::operator!=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLT_17(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>::operator<(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGT_18(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>::operator>(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLE_19(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>::operator<=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGE_20(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>::operator>=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>::difference_type> __zz_cib_decl __zz_cib_OperatorMinus_21(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>&> rhs) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>::difference_type>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>::operator-(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>&>(rhs)
      )
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class256 {
using namespace ::__zz_cib_stl_helpers;
namespace __zz_cib_Class310 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>>::__zz_cib_OperatorMul_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>>::__zz_cib_OperatorArrow_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>>::__zz_cib_OperatorMul_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>>::__zz_cib_OperatorInc_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>>::__zz_cib_OperatorInc_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>>::__zz_cib_OperatorDec_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>>::__zz_cib_OperatorDec_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>>::__zz_cib_OperatorIndex_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>>::__zz_cib_OperatorPlusEq_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>>::__zz_cib_OperatorPlus_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>>::__zz_cib_OperatorMinusEq_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>>::__zz_cib_OperatorMinus_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>>::__zz_cib_OperatorCmpEq_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>>::__zz_cib_OperatorNotEq_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>>::__zz_cib_OperatorLT_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>>::__zz_cib_OperatorGT_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>>::__zz_cib_OperatorLE_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>>::__zz_cib_OperatorGE_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfPage*>>::__zz_cib_OperatorMinus_21)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 22 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::__zz_cib_stl_helpers;
template <>
struct __zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >> : public ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const > {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >::vector_reverse_iterator;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >::reference> __zz_cib_decl __zz_cib_OperatorMul_3(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >::pointer> __zz_cib_decl __zz_cib_OperatorArrow_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >::pointer>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >::operator->()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >::const_reference> __zz_cib_decl __zz_cib_OperatorMul_5(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >::const_reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >&> __zz_cib_decl __zz_cib_OperatorInc_6(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >::operator++()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >> __zz_cib_decl __zz_cib_OperatorInc_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >::operator++(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >&> __zz_cib_decl __zz_cib_OperatorDec_8(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >::operator--()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >> __zz_cib_decl __zz_cib_OperatorDec_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >::operator--(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >::reference> __zz_cib_decl __zz_cib_OperatorIndex_10(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >&> __zz_cib_decl __zz_cib_OperatorPlusEq_11(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >::operator+=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >> __zz_cib_decl __zz_cib_OperatorPlus_12(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >::operator+(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >&> __zz_cib_decl __zz_cib_OperatorMinusEq_13(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >::operator-=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >> __zz_cib_decl __zz_cib_OperatorMinus_14(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >::operator-(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq_15(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >::operator==(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorNotEq_16(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >::operator!=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLT_17(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >::operator<(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGT_18(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >::operator>(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLE_19(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >::operator<=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGE_20(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >::operator>=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >::difference_type> __zz_cib_decl __zz_cib_OperatorMinus_21(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >&> rhs) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >::difference_type>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >::operator-(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >&>(rhs)
      )
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class256 {
using namespace ::__zz_cib_stl_helpers;
namespace __zz_cib_Class281 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >>::__zz_cib_OperatorMul_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >>::__zz_cib_OperatorArrow_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >>::__zz_cib_OperatorMul_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >>::__zz_cib_OperatorInc_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >>::__zz_cib_OperatorInc_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >>::__zz_cib_OperatorDec_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >>::__zz_cib_OperatorDec_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >>::__zz_cib_OperatorIndex_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >>::__zz_cib_OperatorPlusEq_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >>::__zz_cib_OperatorPlus_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >>::__zz_cib_OperatorMinusEq_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >>::__zz_cib_OperatorMinus_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >>::__zz_cib_OperatorCmpEq_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >>::__zz_cib_OperatorNotEq_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >>::__zz_cib_OperatorLT_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >>::__zz_cib_OperatorGT_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >>::__zz_cib_OperatorLE_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >>::__zz_cib_OperatorGE_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect const >>::__zz_cib_OperatorMinus_21)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 22 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::__zz_cib_stl_helpers;
template <>
struct __zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>> : public ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect> {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>::vector_reverse_iterator;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>::reference> __zz_cib_decl __zz_cib_OperatorMul_3(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>::pointer> __zz_cib_decl __zz_cib_OperatorArrow_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>::pointer>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>::operator->()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>::const_reference> __zz_cib_decl __zz_cib_OperatorMul_5(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>::const_reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>&> __zz_cib_decl __zz_cib_OperatorInc_6(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>::operator++()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>> __zz_cib_decl __zz_cib_OperatorInc_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>::operator++(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>&> __zz_cib_decl __zz_cib_OperatorDec_8(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>::operator--()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>> __zz_cib_decl __zz_cib_OperatorDec_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>::operator--(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>::reference> __zz_cib_decl __zz_cib_OperatorIndex_10(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>&> __zz_cib_decl __zz_cib_OperatorPlusEq_11(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>::operator+=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>> __zz_cib_decl __zz_cib_OperatorPlus_12(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>::operator+(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>&> __zz_cib_decl __zz_cib_OperatorMinusEq_13(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>::operator-=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>> __zz_cib_decl __zz_cib_OperatorMinus_14(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>::operator-(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq_15(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>::operator==(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorNotEq_16(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>::operator!=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLT_17(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>::operator<(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGT_18(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>::operator>(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLE_19(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>::operator<=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGE_20(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>::operator>=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>::difference_type> __zz_cib_decl __zz_cib_OperatorMinus_21(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>&> rhs) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>::difference_type>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>::operator-(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>&>(rhs)
      )
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class256 {
using namespace ::__zz_cib_stl_helpers;
namespace __zz_cib_Class280 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>>::__zz_cib_OperatorMul_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>>::__zz_cib_OperatorArrow_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>>::__zz_cib_OperatorMul_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>>::__zz_cib_OperatorInc_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>>::__zz_cib_OperatorInc_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>>::__zz_cib_OperatorDec_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>>::__zz_cib_OperatorDec_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>>::__zz_cib_OperatorIndex_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>>::__zz_cib_OperatorPlusEq_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>>::__zz_cib_OperatorPlus_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>>::__zz_cib_OperatorMinusEq_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>>::__zz_cib_OperatorMinus_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>>::__zz_cib_OperatorCmpEq_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>>::__zz_cib_OperatorNotEq_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>>::__zz_cib_OperatorLT_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>>::__zz_cib_OperatorGT_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>>::__zz_cib_OperatorLE_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>>::__zz_cib_OperatorGE_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfRect>>::__zz_cib_OperatorMinus_21)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 22 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::__zz_cib_stl_helpers;
template <>
struct __zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >> : public ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const > {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >::vector_reverse_iterator;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >::reference> __zz_cib_decl __zz_cib_OperatorMul_3(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >::pointer> __zz_cib_decl __zz_cib_OperatorArrow_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >::pointer>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >::operator->()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >::const_reference> __zz_cib_decl __zz_cib_OperatorMul_5(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >::const_reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >&> __zz_cib_decl __zz_cib_OperatorInc_6(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >::operator++()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >> __zz_cib_decl __zz_cib_OperatorInc_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >::operator++(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >&> __zz_cib_decl __zz_cib_OperatorDec_8(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >::operator--()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >> __zz_cib_decl __zz_cib_OperatorDec_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >::operator--(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >::reference> __zz_cib_decl __zz_cib_OperatorIndex_10(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >&> __zz_cib_decl __zz_cib_OperatorPlusEq_11(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >::operator+=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >> __zz_cib_decl __zz_cib_OperatorPlus_12(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >::operator+(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >&> __zz_cib_decl __zz_cib_OperatorMinusEq_13(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >::operator-=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >> __zz_cib_decl __zz_cib_OperatorMinus_14(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >::operator-(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq_15(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >::operator==(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorNotEq_16(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >::operator!=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLT_17(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >::operator<(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGT_18(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >::operator>(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLE_19(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >::operator<=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGE_20(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >::operator>=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >::difference_type> __zz_cib_decl __zz_cib_OperatorMinus_21(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >&> rhs) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >::difference_type>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >::operator-(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >&>(rhs)
      )
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class256 {
using namespace ::__zz_cib_stl_helpers;
namespace __zz_cib_Class316 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >>::__zz_cib_OperatorMul_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >>::__zz_cib_OperatorArrow_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >>::__zz_cib_OperatorMul_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >>::__zz_cib_OperatorInc_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >>::__zz_cib_OperatorInc_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >>::__zz_cib_OperatorDec_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >>::__zz_cib_OperatorDec_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >>::__zz_cib_OperatorIndex_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >>::__zz_cib_OperatorPlusEq_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >>::__zz_cib_OperatorPlus_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >>::__zz_cib_OperatorMinusEq_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >>::__zz_cib_OperatorMinus_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >>::__zz_cib_OperatorCmpEq_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >>::__zz_cib_OperatorNotEq_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >>::__zz_cib_OperatorLT_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >>::__zz_cib_OperatorGT_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >>::__zz_cib_OperatorLE_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >>::__zz_cib_OperatorGE_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString const >>::__zz_cib_OperatorMinus_21)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 22 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::__zz_cib_stl_helpers;
template <>
struct __zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>> : public ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString> {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>::vector_reverse_iterator;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>::reference> __zz_cib_decl __zz_cib_OperatorMul_3(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>::pointer> __zz_cib_decl __zz_cib_OperatorArrow_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>::pointer>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>::operator->()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>::const_reference> __zz_cib_decl __zz_cib_OperatorMul_5(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>::const_reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>&> __zz_cib_decl __zz_cib_OperatorInc_6(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>::operator++()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>> __zz_cib_decl __zz_cib_OperatorInc_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>::operator++(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>&> __zz_cib_decl __zz_cib_OperatorDec_8(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>::operator--()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>> __zz_cib_decl __zz_cib_OperatorDec_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>::operator--(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>::reference> __zz_cib_decl __zz_cib_OperatorIndex_10(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>&> __zz_cib_decl __zz_cib_OperatorPlusEq_11(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>::operator+=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>> __zz_cib_decl __zz_cib_OperatorPlus_12(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>::operator+(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>&> __zz_cib_decl __zz_cib_OperatorMinusEq_13(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>::operator-=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>> __zz_cib_decl __zz_cib_OperatorMinus_14(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>::operator-(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq_15(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>::operator==(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorNotEq_16(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>::operator!=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLT_17(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>::operator<(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGT_18(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>::operator>(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLE_19(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>::operator<=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGE_20(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>::operator>=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>::difference_type> __zz_cib_decl __zz_cib_OperatorMinus_21(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>&> rhs) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>::difference_type>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>::operator-(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>&>(rhs)
      )
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class256 {
using namespace ::__zz_cib_stl_helpers;
namespace __zz_cib_Class315 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>>::__zz_cib_OperatorMul_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>>::__zz_cib_OperatorArrow_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>>::__zz_cib_OperatorMul_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>>::__zz_cib_OperatorInc_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>>::__zz_cib_OperatorInc_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>>::__zz_cib_OperatorDec_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>>::__zz_cib_OperatorDec_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>>::__zz_cib_OperatorIndex_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>>::__zz_cib_OperatorPlusEq_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>>::__zz_cib_OperatorPlus_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>>::__zz_cib_OperatorMinusEq_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>>::__zz_cib_OperatorMinus_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>>::__zz_cib_OperatorCmpEq_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>>::__zz_cib_OperatorNotEq_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>>::__zz_cib_OperatorLT_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>>::__zz_cib_OperatorGT_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>>::__zz_cib_OperatorLE_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>>::__zz_cib_OperatorGE_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::PdfString>>::__zz_cib_OperatorMinus_21)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 22 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::__zz_cib_stl_helpers;
template <>
struct __zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >> : public ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const > {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >::vector_reverse_iterator;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >::reference> __zz_cib_decl __zz_cib_OperatorMul_3(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >::pointer> __zz_cib_decl __zz_cib_OperatorArrow_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >::pointer>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >::operator->()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >::const_reference> __zz_cib_decl __zz_cib_OperatorMul_5(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >::const_reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >&> __zz_cib_decl __zz_cib_OperatorInc_6(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >::operator++()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >> __zz_cib_decl __zz_cib_OperatorInc_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >::operator++(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >&> __zz_cib_decl __zz_cib_OperatorDec_8(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >::operator--()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >> __zz_cib_decl __zz_cib_OperatorDec_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >::operator--(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >::reference> __zz_cib_decl __zz_cib_OperatorIndex_10(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >&> __zz_cib_decl __zz_cib_OperatorPlusEq_11(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >::operator+=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >> __zz_cib_decl __zz_cib_OperatorPlus_12(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >::operator+(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >&> __zz_cib_decl __zz_cib_OperatorMinusEq_13(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >::operator-=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >> __zz_cib_decl __zz_cib_OperatorMinus_14(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >::operator-(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq_15(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >::operator==(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorNotEq_16(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >::operator!=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLT_17(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >::operator<(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGT_18(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >::operator>(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLE_19(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >::operator<=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGE_20(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >::operator>=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >::difference_type> __zz_cib_decl __zz_cib_OperatorMinus_21(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >&> rhs) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >::difference_type>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >::operator-(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >&>(rhs)
      )
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class256 {
using namespace ::__zz_cib_stl_helpers;
namespace __zz_cib_Class331 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >>::__zz_cib_OperatorMul_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >>::__zz_cib_OperatorArrow_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >>::__zz_cib_OperatorMul_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >>::__zz_cib_OperatorInc_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >>::__zz_cib_OperatorInc_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >>::__zz_cib_OperatorDec_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >>::__zz_cib_OperatorDec_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >>::__zz_cib_OperatorIndex_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >>::__zz_cib_OperatorPlusEq_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >>::__zz_cib_OperatorPlus_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >>::__zz_cib_OperatorMinusEq_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >>::__zz_cib_OperatorMinus_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >>::__zz_cib_OperatorCmpEq_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >>::__zz_cib_OperatorNotEq_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >>::__zz_cib_OperatorLT_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >>::__zz_cib_OperatorGT_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >>::__zz_cib_OperatorLE_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >>::__zz_cib_OperatorGE_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement const >>::__zz_cib_OperatorMinus_21)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 22 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::__zz_cib_stl_helpers;
template <>
struct __zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>> : public ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement> {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>::vector_reverse_iterator;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>::reference> __zz_cib_decl __zz_cib_OperatorMul_3(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>::pointer> __zz_cib_decl __zz_cib_OperatorArrow_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>::pointer>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>::operator->()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>::const_reference> __zz_cib_decl __zz_cib_OperatorMul_5(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>::const_reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>&> __zz_cib_decl __zz_cib_OperatorInc_6(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>::operator++()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>> __zz_cib_decl __zz_cib_OperatorInc_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>::operator++(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>&> __zz_cib_decl __zz_cib_OperatorDec_8(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>::operator--()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>> __zz_cib_decl __zz_cib_OperatorDec_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>::operator--(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>::reference> __zz_cib_decl __zz_cib_OperatorIndex_10(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>&> __zz_cib_decl __zz_cib_OperatorPlusEq_11(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>::operator+=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>> __zz_cib_decl __zz_cib_OperatorPlus_12(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>::operator+(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>&> __zz_cib_decl __zz_cib_OperatorMinusEq_13(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>::operator-=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>> __zz_cib_decl __zz_cib_OperatorMinus_14(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>::operator-(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq_15(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>::operator==(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorNotEq_16(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>::operator!=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLT_17(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>::operator<(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGT_18(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>::operator>(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLE_19(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>::operator<=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGE_20(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>::operator>=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>::difference_type> __zz_cib_decl __zz_cib_OperatorMinus_21(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>&> rhs) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>::difference_type>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>::operator-(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>&>(rhs)
      )
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class256 {
using namespace ::__zz_cib_stl_helpers;
namespace __zz_cib_Class330 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>>::__zz_cib_OperatorMul_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>>::__zz_cib_OperatorArrow_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>>::__zz_cib_OperatorMul_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>>::__zz_cib_OperatorInc_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>>::__zz_cib_OperatorInc_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>>::__zz_cib_OperatorDec_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>>::__zz_cib_OperatorDec_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>>::__zz_cib_OperatorIndex_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>>::__zz_cib_OperatorPlusEq_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>>::__zz_cib_OperatorPlus_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>>::__zz_cib_OperatorMinusEq_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>>::__zz_cib_OperatorMinus_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>>::__zz_cib_OperatorCmpEq_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>>::__zz_cib_OperatorNotEq_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>>::__zz_cib_OperatorLT_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>>::__zz_cib_OperatorGT_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>>::__zz_cib_OperatorLE_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>>::__zz_cib_OperatorGE_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::TFontCacheElement>>::__zz_cib_OperatorMinus_21)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 22 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::__zz_cib_stl_helpers;
template <>
struct __zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >> : public ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const > {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >::vector_reverse_iterator;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >::reference> __zz_cib_decl __zz_cib_OperatorMul_3(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >::pointer> __zz_cib_decl __zz_cib_OperatorArrow_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >::pointer>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >::operator->()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >::const_reference> __zz_cib_decl __zz_cib_OperatorMul_5(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >::const_reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >&> __zz_cib_decl __zz_cib_OperatorInc_6(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >::operator++()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >> __zz_cib_decl __zz_cib_OperatorInc_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >::operator++(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >&> __zz_cib_decl __zz_cib_OperatorDec_8(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >::operator--()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >> __zz_cib_decl __zz_cib_OperatorDec_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >::operator--(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >::reference> __zz_cib_decl __zz_cib_OperatorIndex_10(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >&> __zz_cib_decl __zz_cib_OperatorPlusEq_11(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >::operator+=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >> __zz_cib_decl __zz_cib_OperatorPlus_12(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >::operator+(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >&> __zz_cib_decl __zz_cib_OperatorMinusEq_13(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >::operator-=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >> __zz_cib_decl __zz_cib_OperatorMinus_14(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >::operator-(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq_15(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >::operator==(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorNotEq_16(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >::operator!=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLT_17(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >::operator<(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGT_18(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >::operator>(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLE_19(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >::operator<=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGE_20(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >::operator>=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >::difference_type> __zz_cib_decl __zz_cib_OperatorMinus_21(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >&> rhs) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >::difference_type>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >::operator-(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >&>(rhs)
      )
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class256 {
using namespace ::__zz_cib_stl_helpers;
namespace __zz_cib_Class271 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >>::__zz_cib_OperatorMul_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >>::__zz_cib_OperatorArrow_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >>::__zz_cib_OperatorMul_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >>::__zz_cib_OperatorInc_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >>::__zz_cib_OperatorInc_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >>::__zz_cib_OperatorDec_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >>::__zz_cib_OperatorDec_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >>::__zz_cib_OperatorIndex_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >>::__zz_cib_OperatorPlusEq_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >>::__zz_cib_OperatorPlus_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >>::__zz_cib_OperatorMinusEq_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >>::__zz_cib_OperatorMinus_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >>::__zz_cib_OperatorCmpEq_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >>::__zz_cib_OperatorNotEq_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >>::__zz_cib_OperatorLT_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >>::__zz_cib_OperatorGT_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >>::__zz_cib_OperatorLE_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >>::__zz_cib_OperatorGE_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64 const >>::__zz_cib_OperatorMinus_21)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 22 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::__zz_cib_stl_helpers;
template <>
struct __zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>> : public ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64> {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>::vector_reverse_iterator;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>::reference> __zz_cib_decl __zz_cib_OperatorMul_3(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>::pointer> __zz_cib_decl __zz_cib_OperatorArrow_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>::pointer>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>::operator->()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>::const_reference> __zz_cib_decl __zz_cib_OperatorMul_5(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>::const_reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>&> __zz_cib_decl __zz_cib_OperatorInc_6(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>::operator++()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>> __zz_cib_decl __zz_cib_OperatorInc_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>::operator++(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>&> __zz_cib_decl __zz_cib_OperatorDec_8(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>::operator--()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>> __zz_cib_decl __zz_cib_OperatorDec_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>::operator--(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>::reference> __zz_cib_decl __zz_cib_OperatorIndex_10(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>&> __zz_cib_decl __zz_cib_OperatorPlusEq_11(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>::operator+=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>> __zz_cib_decl __zz_cib_OperatorPlus_12(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>::operator+(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>&> __zz_cib_decl __zz_cib_OperatorMinusEq_13(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>::operator-=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>> __zz_cib_decl __zz_cib_OperatorMinus_14(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>::operator-(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq_15(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>::operator==(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorNotEq_16(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>::operator!=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLT_17(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>::operator<(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGT_18(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>::operator>(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLE_19(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>::operator<=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGE_20(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>::operator>=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>::difference_type> __zz_cib_decl __zz_cib_OperatorMinus_21(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>&> rhs) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>::difference_type>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>::operator-(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>&>(rhs)
      )
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class256 {
using namespace ::__zz_cib_stl_helpers;
namespace __zz_cib_Class270 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>>::__zz_cib_OperatorMul_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>>::__zz_cib_OperatorArrow_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>>::__zz_cib_OperatorMul_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>>::__zz_cib_OperatorInc_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>>::__zz_cib_OperatorInc_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>>::__zz_cib_OperatorDec_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>>::__zz_cib_OperatorDec_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>>::__zz_cib_OperatorIndex_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>>::__zz_cib_OperatorPlusEq_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>>::__zz_cib_OperatorPlus_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>>::__zz_cib_OperatorMinusEq_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>>::__zz_cib_OperatorMinus_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>>::__zz_cib_OperatorCmpEq_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>>::__zz_cib_OperatorNotEq_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>>::__zz_cib_OperatorLT_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>>::__zz_cib_OperatorGT_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>>::__zz_cib_OperatorLE_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>>::__zz_cib_OperatorGE_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::PoDoFo::pdf_int64>>::__zz_cib_OperatorMinus_21)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 22 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::__zz_cib_stl_helpers;
template <>
struct __zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >> : public ::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const > {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >::vector_reverse_iterator;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >::reference> __zz_cib_decl __zz_cib_OperatorMul_3(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >::pointer> __zz_cib_decl __zz_cib_OperatorArrow_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >::pointer>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >::operator->()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >::const_reference> __zz_cib_decl __zz_cib_OperatorMul_5(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >::const_reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >&> __zz_cib_decl __zz_cib_OperatorInc_6(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >::operator++()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >> __zz_cib_decl __zz_cib_OperatorInc_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >::operator++(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >&> __zz_cib_decl __zz_cib_OperatorDec_8(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >::operator--()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >> __zz_cib_decl __zz_cib_OperatorDec_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >::operator--(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >::reference> __zz_cib_decl __zz_cib_OperatorIndex_10(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >&> __zz_cib_decl __zz_cib_OperatorPlusEq_11(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >::operator+=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >> __zz_cib_decl __zz_cib_OperatorPlus_12(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >::operator+(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >&> __zz_cib_decl __zz_cib_OperatorMinusEq_13(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >::operator-=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >> __zz_cib_decl __zz_cib_OperatorMinus_14(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >::operator-(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq_15(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >::operator==(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorNotEq_16(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >::operator!=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLT_17(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >::operator<(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGT_18(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >::operator>(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLE_19(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >::operator<=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGE_20(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >::operator>=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >::difference_type> __zz_cib_decl __zz_cib_OperatorMinus_21(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >&> rhs) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >::difference_type>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >::operator-(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >&>(rhs)
      )
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class256 {
using namespace ::__zz_cib_stl_helpers;
namespace __zz_cib_Class326 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >>::__zz_cib_OperatorMul_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >>::__zz_cib_OperatorArrow_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >>::__zz_cib_OperatorMul_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >>::__zz_cib_OperatorInc_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >>::__zz_cib_OperatorInc_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >>::__zz_cib_OperatorDec_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >>::__zz_cib_OperatorDec_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >>::__zz_cib_OperatorIndex_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >>::__zz_cib_OperatorPlusEq_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >>::__zz_cib_OperatorPlus_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >>::__zz_cib_OperatorMinusEq_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >>::__zz_cib_OperatorMinus_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >>::__zz_cib_OperatorCmpEq_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >>::__zz_cib_OperatorNotEq_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >>::__zz_cib_OperatorLT_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >>::__zz_cib_OperatorGT_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >>::__zz_cib_OperatorLE_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >>::__zz_cib_OperatorGE_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*> const >>::__zz_cib_OperatorMinus_21)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 22 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::__zz_cib_stl_helpers;
template <>
struct __zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>> : public ::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>> {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>::vector_reverse_iterator;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>::reference> __zz_cib_decl __zz_cib_OperatorMul_3(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>::pointer> __zz_cib_decl __zz_cib_OperatorArrow_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>::pointer>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>::operator->()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>::const_reference> __zz_cib_decl __zz_cib_OperatorMul_5(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>::const_reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>&> __zz_cib_decl __zz_cib_OperatorInc_6(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>::operator++()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>> __zz_cib_decl __zz_cib_OperatorInc_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>::operator++(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>&> __zz_cib_decl __zz_cib_OperatorDec_8(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>::operator--()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>> __zz_cib_decl __zz_cib_OperatorDec_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>::operator--(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>::reference> __zz_cib_decl __zz_cib_OperatorIndex_10(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>&> __zz_cib_decl __zz_cib_OperatorPlusEq_11(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>::operator+=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>> __zz_cib_decl __zz_cib_OperatorPlus_12(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>::operator+(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>&> __zz_cib_decl __zz_cib_OperatorMinusEq_13(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>::operator-=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>> __zz_cib_decl __zz_cib_OperatorMinus_14(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>::operator-(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq_15(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>::operator==(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorNotEq_16(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>::operator!=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLT_17(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>::operator<(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGT_18(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>::operator>(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLE_19(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>::operator<=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGE_20(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>::operator>=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>::difference_type> __zz_cib_decl __zz_cib_OperatorMinus_21(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>&> rhs) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>::difference_type>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>::operator-(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>&>(rhs)
      )
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class256 {
using namespace ::__zz_cib_stl_helpers;
namespace __zz_cib_Class325 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>>::__zz_cib_OperatorMul_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>>::__zz_cib_OperatorArrow_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>>::__zz_cib_OperatorMul_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>>::__zz_cib_OperatorInc_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>>::__zz_cib_OperatorInc_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>>::__zz_cib_OperatorDec_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>>::__zz_cib_OperatorDec_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>>::__zz_cib_OperatorIndex_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>>::__zz_cib_OperatorPlusEq_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>>::__zz_cib_OperatorPlus_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>>::__zz_cib_OperatorMinusEq_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>>::__zz_cib_OperatorMinus_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>>::__zz_cib_OperatorCmpEq_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>>::__zz_cib_OperatorNotEq_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>>::__zz_cib_OperatorLT_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>>::__zz_cib_OperatorGT_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>>::__zz_cib_OperatorLE_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>>::__zz_cib_OperatorGE_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::std::list<::PoDoFo::PdfReference*>>>::__zz_cib_OperatorMinus_21)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 22 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::__zz_cib_stl_helpers;
template <>
struct __zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >> : public ::__zz_cib_stl_helpers::vector_reverse_iterator<char const > {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::__zz_cib_stl_helpers::vector_reverse_iterator<char const >::vector_reverse_iterator;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >::reference> __zz_cib_decl __zz_cib_OperatorMul_3(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<char const >::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >::pointer> __zz_cib_decl __zz_cib_OperatorArrow_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >::pointer>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<char const >::operator->()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >::const_reference> __zz_cib_decl __zz_cib_OperatorMul_5(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >::const_reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<char const >::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >&> __zz_cib_decl __zz_cib_OperatorInc_6(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<char const >::operator++()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >> __zz_cib_decl __zz_cib_OperatorInc_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<char const >::operator++(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >&> __zz_cib_decl __zz_cib_OperatorDec_8(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<char const >::operator--()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >> __zz_cib_decl __zz_cib_OperatorDec_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<char const >::operator--(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >::reference> __zz_cib_decl __zz_cib_OperatorIndex_10(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<char const >::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >&> __zz_cib_decl __zz_cib_OperatorPlusEq_11(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<char const >::operator+=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >> __zz_cib_decl __zz_cib_OperatorPlus_12(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<char const >::operator+(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >&> __zz_cib_decl __zz_cib_OperatorMinusEq_13(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<char const >::operator-=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >> __zz_cib_decl __zz_cib_OperatorMinus_14(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<char const >::operator-(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq_15(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<char const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<char const >::operator==(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<char const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorNotEq_16(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<char const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<char const >::operator!=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<char const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLT_17(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<char const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<char const >::operator<(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<char const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGT_18(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<char const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<char const >::operator>(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<char const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLE_19(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<char const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<char const >::operator<=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<char const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGE_20(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<char const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<char const >::operator>=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<char const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >::difference_type> __zz_cib_decl __zz_cib_OperatorMinus_21(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<char const >&> rhs) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >::difference_type>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<char const >::operator-(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<char const >&>(rhs)
      )
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class256 {
using namespace ::__zz_cib_stl_helpers;
namespace __zz_cib_Class276 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >>::__zz_cib_OperatorMul_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >>::__zz_cib_OperatorArrow_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >>::__zz_cib_OperatorMul_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >>::__zz_cib_OperatorInc_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >>::__zz_cib_OperatorInc_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >>::__zz_cib_OperatorDec_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >>::__zz_cib_OperatorDec_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >>::__zz_cib_OperatorIndex_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >>::__zz_cib_OperatorPlusEq_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >>::__zz_cib_OperatorPlus_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >>::__zz_cib_OperatorMinusEq_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >>::__zz_cib_OperatorMinus_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >>::__zz_cib_OperatorCmpEq_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >>::__zz_cib_OperatorNotEq_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >>::__zz_cib_OperatorLT_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >>::__zz_cib_OperatorGT_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >>::__zz_cib_OperatorLE_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >>::__zz_cib_OperatorGE_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<char const >>::__zz_cib_OperatorMinus_21)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 22 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::__zz_cib_stl_helpers;
template <>
struct __zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<char>> : public ::__zz_cib_stl_helpers::vector_reverse_iterator<char> {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<char>>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::__zz_cib_stl_helpers::vector_reverse_iterator<char>::vector_reverse_iterator;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<char>::reference> __zz_cib_decl __zz_cib_OperatorMul_3(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<char>::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<char>::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<char>::pointer> __zz_cib_decl __zz_cib_OperatorArrow_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<char>::pointer>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<char>::operator->()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<char>::const_reference> __zz_cib_decl __zz_cib_OperatorMul_5(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<char>::const_reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<char>::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<char>&> __zz_cib_decl __zz_cib_OperatorInc_6(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<char>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<char>::operator++()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<char>> __zz_cib_decl __zz_cib_OperatorInc_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<char>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<char>::operator++(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<char>&> __zz_cib_decl __zz_cib_OperatorDec_8(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<char>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<char>::operator--()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<char>> __zz_cib_decl __zz_cib_OperatorDec_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<char>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<char>::operator--(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<char>::reference> __zz_cib_decl __zz_cib_OperatorIndex_10(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<char>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<char>::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<char>::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<char>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<char>&> __zz_cib_decl __zz_cib_OperatorPlusEq_11(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<char>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<char>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<char>::operator+=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<char>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<char>> __zz_cib_decl __zz_cib_OperatorPlus_12(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<char>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<char>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<char>::operator+(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<char>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<char>&> __zz_cib_decl __zz_cib_OperatorMinusEq_13(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<char>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<char>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<char>::operator-=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<char>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<char>> __zz_cib_decl __zz_cib_OperatorMinus_14(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<char>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<char>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<char>::operator-(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<char>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq_15(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<char>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<char>::operator==(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<char>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorNotEq_16(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<char>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<char>::operator!=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<char>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLT_17(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<char>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<char>::operator<(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<char>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGT_18(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<char>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<char>::operator>(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<char>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLE_19(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<char>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<char>::operator<=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<char>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGE_20(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<char>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<char>::operator>=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<char>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<char>::difference_type> __zz_cib_decl __zz_cib_OperatorMinus_21(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<char>&> rhs) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<char>::difference_type>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<char>::operator-(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<char>&>(rhs)
      )
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class256 {
using namespace ::__zz_cib_stl_helpers;
namespace __zz_cib_Class275 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<char>>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<char>>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<char>>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<char>>::__zz_cib_OperatorMul_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<char>>::__zz_cib_OperatorArrow_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<char>>::__zz_cib_OperatorMul_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<char>>::__zz_cib_OperatorInc_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<char>>::__zz_cib_OperatorInc_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<char>>::__zz_cib_OperatorDec_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<char>>::__zz_cib_OperatorDec_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<char>>::__zz_cib_OperatorIndex_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<char>>::__zz_cib_OperatorPlusEq_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<char>>::__zz_cib_OperatorPlus_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<char>>::__zz_cib_OperatorMinusEq_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<char>>::__zz_cib_OperatorMinus_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<char>>::__zz_cib_OperatorCmpEq_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<char>>::__zz_cib_OperatorNotEq_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<char>>::__zz_cib_OperatorLT_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<char>>::__zz_cib_OperatorGT_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<char>>::__zz_cib_OperatorLE_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<char>>::__zz_cib_OperatorGE_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<char>>::__zz_cib_OperatorMinus_21)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 22 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::__zz_cib_stl_helpers;
template <>
struct __zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >> : public ::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const > {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >::vector_reverse_iterator;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >::reference> __zz_cib_decl __zz_cib_OperatorMul_3(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >::pointer> __zz_cib_decl __zz_cib_OperatorArrow_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >::pointer>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >::operator->()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >::const_reference> __zz_cib_decl __zz_cib_OperatorMul_5(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >::const_reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >&> __zz_cib_decl __zz_cib_OperatorInc_6(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >::operator++()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >> __zz_cib_decl __zz_cib_OperatorInc_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >::operator++(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >&> __zz_cib_decl __zz_cib_OperatorDec_8(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >::operator--()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >> __zz_cib_decl __zz_cib_OperatorDec_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >::operator--(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >::reference> __zz_cib_decl __zz_cib_OperatorIndex_10(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >&> __zz_cib_decl __zz_cib_OperatorPlusEq_11(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >::operator+=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >> __zz_cib_decl __zz_cib_OperatorPlus_12(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >::operator+(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >&> __zz_cib_decl __zz_cib_OperatorMinusEq_13(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >::operator-=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >> __zz_cib_decl __zz_cib_OperatorMinus_14(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >::operator-(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq_15(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >::operator==(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorNotEq_16(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >::operator!=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLT_17(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >::operator<(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGT_18(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >::operator>(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLE_19(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >::operator<=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGE_20(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >::operator>=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >::difference_type> __zz_cib_decl __zz_cib_OperatorMinus_21(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >&> rhs) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >::difference_type>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >::operator-(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >&>(rhs)
      )
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class256 {
using namespace ::__zz_cib_stl_helpers;
namespace __zz_cib_Class286 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >>::__zz_cib_OperatorMul_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >>::__zz_cib_OperatorArrow_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >>::__zz_cib_OperatorMul_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >>::__zz_cib_OperatorInc_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >>::__zz_cib_OperatorInc_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >>::__zz_cib_OperatorDec_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >>::__zz_cib_OperatorDec_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >>::__zz_cib_OperatorIndex_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >>::__zz_cib_OperatorPlusEq_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >>::__zz_cib_OperatorPlus_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >>::__zz_cib_OperatorMinusEq_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >>::__zz_cib_OperatorMinus_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >>::__zz_cib_OperatorCmpEq_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >>::__zz_cib_OperatorNotEq_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >>::__zz_cib_OperatorLT_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >>::__zz_cib_OperatorGT_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >>::__zz_cib_OperatorLE_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >>::__zz_cib_OperatorGE_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char const >>::__zz_cib_OperatorMinus_21)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 22 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::__zz_cib_stl_helpers;
template <>
struct __zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>> : public ::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char> {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>::vector_reverse_iterator;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>::reference> __zz_cib_decl __zz_cib_OperatorMul_3(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>::pointer> __zz_cib_decl __zz_cib_OperatorArrow_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>::pointer>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>::operator->()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>::const_reference> __zz_cib_decl __zz_cib_OperatorMul_5(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>::const_reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>&> __zz_cib_decl __zz_cib_OperatorInc_6(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>::operator++()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>> __zz_cib_decl __zz_cib_OperatorInc_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>::operator++(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>&> __zz_cib_decl __zz_cib_OperatorDec_8(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>::operator--()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>> __zz_cib_decl __zz_cib_OperatorDec_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>::operator--(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>::reference> __zz_cib_decl __zz_cib_OperatorIndex_10(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>&> __zz_cib_decl __zz_cib_OperatorPlusEq_11(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>::operator+=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>> __zz_cib_decl __zz_cib_OperatorPlus_12(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>::operator+(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>&> __zz_cib_decl __zz_cib_OperatorMinusEq_13(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>::operator-=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>> __zz_cib_decl __zz_cib_OperatorMinus_14(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>::operator-(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq_15(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>::operator==(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorNotEq_16(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>::operator!=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLT_17(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>::operator<(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGT_18(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>::operator>(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLE_19(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>::operator<=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGE_20(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>::operator>=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>::difference_type> __zz_cib_decl __zz_cib_OperatorMinus_21(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>&> rhs) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>::difference_type>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>::operator-(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>&>(rhs)
      )
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class256 {
using namespace ::__zz_cib_stl_helpers;
namespace __zz_cib_Class285 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>>::__zz_cib_OperatorMul_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>>::__zz_cib_OperatorArrow_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>>::__zz_cib_OperatorMul_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>>::__zz_cib_OperatorInc_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>>::__zz_cib_OperatorInc_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>>::__zz_cib_OperatorDec_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>>::__zz_cib_OperatorDec_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>>::__zz_cib_OperatorIndex_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>>::__zz_cib_OperatorPlusEq_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>>::__zz_cib_OperatorPlus_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>>::__zz_cib_OperatorMinusEq_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>>::__zz_cib_OperatorMinus_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>>::__zz_cib_OperatorCmpEq_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>>::__zz_cib_OperatorNotEq_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>>::__zz_cib_OperatorLT_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>>::__zz_cib_OperatorGT_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>>::__zz_cib_OperatorLE_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>>::__zz_cib_OperatorGE_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<unsigned char>>::__zz_cib_OperatorMinus_21)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 22 };
  return &methodTable;
}
}}}
