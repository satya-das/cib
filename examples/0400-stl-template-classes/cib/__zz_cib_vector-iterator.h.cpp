#include "C.h"
#include "__zz_cib_stl-helpers/__zz_cib_vector-iterator.h"
#include <list>

#include "__zz_cib_Example-class-down-cast.h"
#include "__zz_cib_Example-delegate-helper.h"
#include "__zz_cib_Example-generic.h"
#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-type-converters.h"
#include "__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_Example-proxy-mgr.h"

namespace __zz_cib_ {
using namespace ::__zz_cib_stl_helpers;
template <>
struct __zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C const >> : public ::__zz_cib_stl_helpers::vector_iterator<::C const > {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C const >>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::__zz_cib_stl_helpers::vector_iterator<::C const >::vector_iterator;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C const >::reference> __zz_cib_decl __zz_cib_OperatorMul_3(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C const >::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C const >::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C const >::pointer> __zz_cib_decl __zz_cib_OperatorArrow_4(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C const >::pointer>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C const >::operator->()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C const >::const_reference> __zz_cib_decl __zz_cib_OperatorMul_5(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C const >::const_reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C const >::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C const >&> __zz_cib_decl __zz_cib_OperatorInc_6(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C const >::operator++()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C const >> __zz_cib_decl __zz_cib_OperatorInc_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C const >::operator++(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C const >&> __zz_cib_decl __zz_cib_OperatorDec_8(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C const >::operator--()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C const >> __zz_cib_decl __zz_cib_OperatorDec_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C const >::operator--(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C const >::reference> __zz_cib_decl __zz_cib_OperatorIndex_10(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C const >::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C const >::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::C const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C const >&> __zz_cib_decl __zz_cib_OperatorPlusEq_11(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C const >::operator+=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::C const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C const >> __zz_cib_decl __zz_cib_OperatorPlus_12(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C const >::operator+(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::C const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C const >&> __zz_cib_decl __zz_cib_OperatorMinusEq_13(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C const >::operator-=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::C const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C const >> __zz_cib_decl __zz_cib_OperatorMinus_14(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C const >::operator-(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::C const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq_15(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_iterator<::C const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C const >::operator==(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_iterator<::C const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorNotEq_16(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_iterator<::C const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C const >::operator!=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_iterator<::C const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLT_17(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_iterator<::C const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C const >::operator<(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_iterator<::C const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGT_18(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_iterator<::C const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C const >::operator>(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_iterator<::C const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLE_19(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_iterator<::C const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C const >::operator<=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_iterator<::C const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGE_20(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_iterator<::C const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C const >::operator>=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_iterator<::C const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C const >::difference_type> __zz_cib_decl __zz_cib_OperatorMinus_21(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_iterator<::C const >&> rhs) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C const >::difference_type>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C const >::operator-(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_iterator<::C const >&>(rhs)
      )
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class256 {
using namespace ::__zz_cib_stl_helpers;
namespace __zz_cib_Class258 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C const >>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C const >>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C const >>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C const >>::__zz_cib_OperatorMul_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C const >>::__zz_cib_OperatorArrow_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C const >>::__zz_cib_OperatorMul_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C const >>::__zz_cib_OperatorInc_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C const >>::__zz_cib_OperatorInc_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C const >>::__zz_cib_OperatorDec_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C const >>::__zz_cib_OperatorDec_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C const >>::__zz_cib_OperatorIndex_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C const >>::__zz_cib_OperatorPlusEq_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C const >>::__zz_cib_OperatorPlus_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C const >>::__zz_cib_OperatorMinusEq_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C const >>::__zz_cib_OperatorMinus_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C const >>::__zz_cib_OperatorCmpEq_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C const >>::__zz_cib_OperatorNotEq_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C const >>::__zz_cib_OperatorLT_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C const >>::__zz_cib_OperatorGT_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C const >>::__zz_cib_OperatorLE_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C const >>::__zz_cib_OperatorGE_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C const >>::__zz_cib_OperatorMinus_21)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 22 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::__zz_cib_stl_helpers;
template <>
struct __zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C* const >> : public ::__zz_cib_stl_helpers::vector_iterator<::C* const > {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C* const >>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::__zz_cib_stl_helpers::vector_iterator<::C* const >::vector_iterator;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C* const >::reference> __zz_cib_decl __zz_cib_OperatorMul_3(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C* const >::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C* const >::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C* const >::pointer> __zz_cib_decl __zz_cib_OperatorArrow_4(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C* const >::pointer>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C* const >::operator->()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C* const >::const_reference> __zz_cib_decl __zz_cib_OperatorMul_5(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C* const >::const_reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C* const >::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C* const >&> __zz_cib_decl __zz_cib_OperatorInc_6(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C* const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C* const >::operator++()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C* const >> __zz_cib_decl __zz_cib_OperatorInc_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C* const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C* const >::operator++(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C* const >&> __zz_cib_decl __zz_cib_OperatorDec_8(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C* const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C* const >::operator--()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C* const >> __zz_cib_decl __zz_cib_OperatorDec_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C* const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C* const >::operator--(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C* const >::reference> __zz_cib_decl __zz_cib_OperatorIndex_10(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C* const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C* const >::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C* const >::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::C* const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C* const >&> __zz_cib_decl __zz_cib_OperatorPlusEq_11(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C* const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C* const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C* const >::operator+=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::C* const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C* const >> __zz_cib_decl __zz_cib_OperatorPlus_12(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C* const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C* const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C* const >::operator+(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::C* const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C* const >&> __zz_cib_decl __zz_cib_OperatorMinusEq_13(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C* const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C* const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C* const >::operator-=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::C* const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C* const >> __zz_cib_decl __zz_cib_OperatorMinus_14(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C* const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C* const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C* const >::operator-(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::C* const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq_15(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_iterator<::C* const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C* const >::operator==(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_iterator<::C* const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorNotEq_16(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_iterator<::C* const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C* const >::operator!=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_iterator<::C* const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLT_17(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_iterator<::C* const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C* const >::operator<(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_iterator<::C* const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGT_18(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_iterator<::C* const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C* const >::operator>(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_iterator<::C* const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLE_19(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_iterator<::C* const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C* const >::operator<=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_iterator<::C* const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGE_20(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_iterator<::C* const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C* const >::operator>=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_iterator<::C* const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C* const >::difference_type> __zz_cib_decl __zz_cib_OperatorMinus_21(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_iterator<::C* const >&> rhs) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C* const >::difference_type>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C* const >::operator-(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_iterator<::C* const >&>(rhs)
      )
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class256 {
using namespace ::__zz_cib_stl_helpers;
namespace __zz_cib_Class264 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C* const >>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C* const >>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C* const >>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C* const >>::__zz_cib_OperatorMul_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C* const >>::__zz_cib_OperatorArrow_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C* const >>::__zz_cib_OperatorMul_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C* const >>::__zz_cib_OperatorInc_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C* const >>::__zz_cib_OperatorInc_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C* const >>::__zz_cib_OperatorDec_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C* const >>::__zz_cib_OperatorDec_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C* const >>::__zz_cib_OperatorIndex_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C* const >>::__zz_cib_OperatorPlusEq_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C* const >>::__zz_cib_OperatorPlus_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C* const >>::__zz_cib_OperatorMinusEq_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C* const >>::__zz_cib_OperatorMinus_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C* const >>::__zz_cib_OperatorCmpEq_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C* const >>::__zz_cib_OperatorNotEq_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C* const >>::__zz_cib_OperatorLT_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C* const >>::__zz_cib_OperatorGT_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C* const >>::__zz_cib_OperatorLE_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C* const >>::__zz_cib_OperatorGE_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C* const >>::__zz_cib_OperatorMinus_21)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 22 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::__zz_cib_stl_helpers;
template <>
struct __zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C*>> : public ::__zz_cib_stl_helpers::vector_iterator<::C*> {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C*>>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::__zz_cib_stl_helpers::vector_iterator<::C*>::vector_iterator;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C*>::reference> __zz_cib_decl __zz_cib_OperatorMul_3(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C*>::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C*>::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C*>::pointer> __zz_cib_decl __zz_cib_OperatorArrow_4(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C*>::pointer>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C*>::operator->()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C*>::const_reference> __zz_cib_decl __zz_cib_OperatorMul_5(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C*>::const_reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C*>::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C*>&> __zz_cib_decl __zz_cib_OperatorInc_6(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C*>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C*>::operator++()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C*>> __zz_cib_decl __zz_cib_OperatorInc_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C*>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C*>::operator++(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C*>&> __zz_cib_decl __zz_cib_OperatorDec_8(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C*>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C*>::operator--()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C*>> __zz_cib_decl __zz_cib_OperatorDec_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C*>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C*>::operator--(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C*>::reference> __zz_cib_decl __zz_cib_OperatorIndex_10(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C*>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C*>::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C*>::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::C*>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C*>&> __zz_cib_decl __zz_cib_OperatorPlusEq_11(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C*>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C*>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C*>::operator+=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::C*>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C*>> __zz_cib_decl __zz_cib_OperatorPlus_12(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C*>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C*>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C*>::operator+(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::C*>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C*>&> __zz_cib_decl __zz_cib_OperatorMinusEq_13(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C*>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C*>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C*>::operator-=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::C*>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C*>> __zz_cib_decl __zz_cib_OperatorMinus_14(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C*>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C*>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C*>::operator-(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::C*>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq_15(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_iterator<::C*>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C*>::operator==(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_iterator<::C*>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorNotEq_16(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_iterator<::C*>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C*>::operator!=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_iterator<::C*>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLT_17(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_iterator<::C*>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C*>::operator<(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_iterator<::C*>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGT_18(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_iterator<::C*>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C*>::operator>(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_iterator<::C*>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLE_19(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_iterator<::C*>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C*>::operator<=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_iterator<::C*>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGE_20(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_iterator<::C*>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C*>::operator>=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_iterator<::C*>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C*>::difference_type> __zz_cib_decl __zz_cib_OperatorMinus_21(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_iterator<::C*>&> rhs) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C*>::difference_type>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C*>::operator-(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_iterator<::C*>&>(rhs)
      )
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class256 {
using namespace ::__zz_cib_stl_helpers;
namespace __zz_cib_Class263 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C*>>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C*>>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C*>>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C*>>::__zz_cib_OperatorMul_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C*>>::__zz_cib_OperatorArrow_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C*>>::__zz_cib_OperatorMul_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C*>>::__zz_cib_OperatorInc_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C*>>::__zz_cib_OperatorInc_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C*>>::__zz_cib_OperatorDec_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C*>>::__zz_cib_OperatorDec_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C*>>::__zz_cib_OperatorIndex_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C*>>::__zz_cib_OperatorPlusEq_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C*>>::__zz_cib_OperatorPlus_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C*>>::__zz_cib_OperatorMinusEq_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C*>>::__zz_cib_OperatorMinus_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C*>>::__zz_cib_OperatorCmpEq_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C*>>::__zz_cib_OperatorNotEq_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C*>>::__zz_cib_OperatorLT_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C*>>::__zz_cib_OperatorGT_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C*>>::__zz_cib_OperatorLE_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C*>>::__zz_cib_OperatorGE_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C*>>::__zz_cib_OperatorMinus_21)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 22 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::__zz_cib_stl_helpers;
template <>
struct __zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C>> : public ::__zz_cib_stl_helpers::vector_iterator<::C> {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C>>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::__zz_cib_stl_helpers::vector_iterator<::C>::vector_iterator;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C>::reference> __zz_cib_decl __zz_cib_OperatorMul_3(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C>::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C>::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C>::pointer> __zz_cib_decl __zz_cib_OperatorArrow_4(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C>::pointer>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C>::operator->()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C>::const_reference> __zz_cib_decl __zz_cib_OperatorMul_5(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C>::const_reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C>::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C>&> __zz_cib_decl __zz_cib_OperatorInc_6(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C>::operator++()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C>> __zz_cib_decl __zz_cib_OperatorInc_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C>::operator++(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C>&> __zz_cib_decl __zz_cib_OperatorDec_8(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C>::operator--()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C>> __zz_cib_decl __zz_cib_OperatorDec_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C>::operator--(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C>::reference> __zz_cib_decl __zz_cib_OperatorIndex_10(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C>::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C>::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::C>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C>&> __zz_cib_decl __zz_cib_OperatorPlusEq_11(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C>::operator+=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::C>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C>> __zz_cib_decl __zz_cib_OperatorPlus_12(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C>::operator+(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::C>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C>&> __zz_cib_decl __zz_cib_OperatorMinusEq_13(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C>::operator-=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::C>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C>> __zz_cib_decl __zz_cib_OperatorMinus_14(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C>::operator-(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::C>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq_15(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_iterator<::C>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C>::operator==(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_iterator<::C>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorNotEq_16(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_iterator<::C>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C>::operator!=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_iterator<::C>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLT_17(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_iterator<::C>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C>::operator<(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_iterator<::C>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGT_18(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_iterator<::C>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C>::operator>(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_iterator<::C>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLE_19(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_iterator<::C>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C>::operator<=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_iterator<::C>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGE_20(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_iterator<::C>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C>::operator>=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_iterator<::C>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C>::difference_type> __zz_cib_decl __zz_cib_OperatorMinus_21(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_iterator<::C>&> rhs) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C>::difference_type>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::C>::operator-(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_iterator<::C>&>(rhs)
      )
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class256 {
using namespace ::__zz_cib_stl_helpers;
namespace __zz_cib_Class257 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C>>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C>>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C>>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C>>::__zz_cib_OperatorMul_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C>>::__zz_cib_OperatorArrow_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C>>::__zz_cib_OperatorMul_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C>>::__zz_cib_OperatorInc_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C>>::__zz_cib_OperatorInc_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C>>::__zz_cib_OperatorDec_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C>>::__zz_cib_OperatorDec_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C>>::__zz_cib_OperatorIndex_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C>>::__zz_cib_OperatorPlusEq_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C>>::__zz_cib_OperatorPlus_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C>>::__zz_cib_OperatorMinusEq_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C>>::__zz_cib_OperatorMinus_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C>>::__zz_cib_OperatorCmpEq_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C>>::__zz_cib_OperatorNotEq_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C>>::__zz_cib_OperatorLT_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C>>::__zz_cib_OperatorGT_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C>>::__zz_cib_OperatorLE_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C>>::__zz_cib_OperatorGE_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::C>>::__zz_cib_OperatorMinus_21)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 22 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::__zz_cib_stl_helpers;
template <>
struct __zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >> : public ::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const > {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >::vector_iterator;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >::reference> __zz_cib_decl __zz_cib_OperatorMul_3(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >::pointer> __zz_cib_decl __zz_cib_OperatorArrow_4(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >::pointer>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >::operator->()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >::const_reference> __zz_cib_decl __zz_cib_OperatorMul_5(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >::const_reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >&> __zz_cib_decl __zz_cib_OperatorInc_6(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >::operator++()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >> __zz_cib_decl __zz_cib_OperatorInc_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >::operator++(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >&> __zz_cib_decl __zz_cib_OperatorDec_8(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >::operator--()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >> __zz_cib_decl __zz_cib_OperatorDec_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >::operator--(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >::reference> __zz_cib_decl __zz_cib_OperatorIndex_10(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >&> __zz_cib_decl __zz_cib_OperatorPlusEq_11(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >::operator+=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >> __zz_cib_decl __zz_cib_OperatorPlus_12(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >::operator+(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >&> __zz_cib_decl __zz_cib_OperatorMinusEq_13(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >::operator-=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >> __zz_cib_decl __zz_cib_OperatorMinus_14(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >::operator-(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq_15(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >::operator==(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorNotEq_16(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >::operator!=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLT_17(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >::operator<(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGT_18(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >::operator>(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLE_19(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >::operator<=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGE_20(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >::operator>=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >::difference_type> __zz_cib_decl __zz_cib_OperatorMinus_21(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >&> rhs) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >::difference_type>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >::operator-(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >&>(rhs)
      )
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class256 {
using namespace ::__zz_cib_stl_helpers;
namespace __zz_cib_Class279 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >>::__zz_cib_OperatorMul_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >>::__zz_cib_OperatorArrow_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >>::__zz_cib_OperatorMul_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >>::__zz_cib_OperatorInc_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >>::__zz_cib_OperatorInc_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >>::__zz_cib_OperatorDec_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >>::__zz_cib_OperatorDec_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >>::__zz_cib_OperatorIndex_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >>::__zz_cib_OperatorPlusEq_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >>::__zz_cib_OperatorPlus_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >>::__zz_cib_OperatorMinusEq_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >>::__zz_cib_OperatorMinus_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >>::__zz_cib_OperatorCmpEq_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >>::__zz_cib_OperatorNotEq_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >>::__zz_cib_OperatorLT_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >>::__zz_cib_OperatorGT_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >>::__zz_cib_OperatorLE_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >>::__zz_cib_OperatorGE_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*> const >>::__zz_cib_OperatorMinus_21)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 22 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::__zz_cib_stl_helpers;
template <>
struct __zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>> : public ::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>> {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>::vector_iterator;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>::reference> __zz_cib_decl __zz_cib_OperatorMul_3(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>::pointer> __zz_cib_decl __zz_cib_OperatorArrow_4(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>::pointer>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>::operator->()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>::const_reference> __zz_cib_decl __zz_cib_OperatorMul_5(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>::const_reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>&> __zz_cib_decl __zz_cib_OperatorInc_6(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>::operator++()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>> __zz_cib_decl __zz_cib_OperatorInc_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>::operator++(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>&> __zz_cib_decl __zz_cib_OperatorDec_8(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>::operator--()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>> __zz_cib_decl __zz_cib_OperatorDec_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>::operator--(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>::reference> __zz_cib_decl __zz_cib_OperatorIndex_10(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>&> __zz_cib_decl __zz_cib_OperatorPlusEq_11(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>::operator+=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>> __zz_cib_decl __zz_cib_OperatorPlus_12(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>::operator+(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>&> __zz_cib_decl __zz_cib_OperatorMinusEq_13(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>::operator-=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>> __zz_cib_decl __zz_cib_OperatorMinus_14(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>::operator-(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq_15(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>::operator==(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorNotEq_16(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>::operator!=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLT_17(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>::operator<(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGT_18(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>::operator>(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLE_19(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>::operator<=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGE_20(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>::operator>=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>::difference_type> __zz_cib_decl __zz_cib_OperatorMinus_21(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>&> rhs) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>::difference_type>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>::operator-(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>&>(rhs)
      )
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class256 {
using namespace ::__zz_cib_stl_helpers;
namespace __zz_cib_Class278 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>>::__zz_cib_OperatorMul_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>>::__zz_cib_OperatorArrow_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>>::__zz_cib_OperatorMul_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>>::__zz_cib_OperatorInc_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>>::__zz_cib_OperatorInc_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>>::__zz_cib_OperatorDec_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>>::__zz_cib_OperatorDec_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>>::__zz_cib_OperatorIndex_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>>::__zz_cib_OperatorPlusEq_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>>::__zz_cib_OperatorPlus_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>>::__zz_cib_OperatorMinusEq_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>>::__zz_cib_OperatorMinus_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>>::__zz_cib_OperatorCmpEq_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>>::__zz_cib_OperatorNotEq_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>>::__zz_cib_OperatorLT_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>>::__zz_cib_OperatorGT_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>>::__zz_cib_OperatorLE_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>>::__zz_cib_OperatorGE_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>>::__zz_cib_OperatorMinus_21)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 22 };
  return &methodTable;
}
}}}
