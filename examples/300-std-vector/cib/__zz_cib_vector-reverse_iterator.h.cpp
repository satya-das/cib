#include "C.h"
#include "__zz_cib_stl-helpers/__zz_cib_vector-reverse_iterator.h"

#include "__zz_cib_Example-class-down-cast.h"
#include "__zz_cib_Example-delegate-helper.h"
#include "__zz_cib_Example-generic.h"
#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-library-type-handler.h"
#include "__zz_cib_Example-mtable-helper.h"

namespace __zz_cib_ {
using namespace ::__zz_cib_stl_helpers;
template <>
struct __zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >> : public ::__zz_cib_stl_helpers::vector_reverse_iterator<::C const > {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >::vector_reverse_iterator;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_RValueAbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >::reference> __zz_cib_decl __zz_cib_OperatorMul_3(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >::operator*()
    );
  }
  static __zz_cib_RValueAbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >::pointer> __zz_cib_decl __zz_cib_OperatorArrow_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >::pointer>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >::operator->()
    );
  }
  static __zz_cib_RValueAbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >&> __zz_cib_decl __zz_cib_OperatorInc_5(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >::operator++()
    );
  }
  static __zz_cib_RValueAbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >> __zz_cib_decl __zz_cib_OperatorInc_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToRValueAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >::operator++(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >&> __zz_cib_decl __zz_cib_OperatorDec_7(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >::operator--()
    );
  }
  static __zz_cib_RValueAbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >> __zz_cib_decl __zz_cib_OperatorDec_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToRValueAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >::operator--(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >::reference> __zz_cib_decl __zz_cib_OperatorIndex_9(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >::difference_type> n) {
    return __zz_cib_ToRValueAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >&> __zz_cib_decl __zz_cib_OperatorPlusEq_10(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >::difference_type> n) {
    return __zz_cib_ToRValueAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >::operator+=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >> __zz_cib_decl __zz_cib_OperatorPlus_11(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >::difference_type> n) {
    return __zz_cib_ToRValueAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >::operator+(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >&> __zz_cib_decl __zz_cib_OperatorMinusEq_12(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >::difference_type> n) {
    return __zz_cib_ToRValueAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >::operator-=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >> __zz_cib_decl __zz_cib_OperatorMinus_13(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >::difference_type> n) {
    return __zz_cib_ToRValueAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >::operator-(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq_14(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >&> rhs) {
    return __zz_cib_ToRValueAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >::operator==(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >&>(rhs)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<bool> __zz_cib_decl __zz_cib_OperatorNotEq_15(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >&> rhs) {
    return __zz_cib_ToRValueAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >::operator!=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >&>(rhs)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLT_16(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >&> rhs) {
    return __zz_cib_ToRValueAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >::operator<(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >&>(rhs)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGT_17(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >&> rhs) {
    return __zz_cib_ToRValueAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >::operator>(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >&>(rhs)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLE_18(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >&> rhs) {
    return __zz_cib_ToRValueAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >::operator<=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >&>(rhs)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGE_19(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >&> rhs) {
    return __zz_cib_ToRValueAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >::operator>=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >&>(rhs)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >::difference_type> __zz_cib_decl __zz_cib_OperatorMinus_20(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >&> rhs) {
    return __zz_cib_ToRValueAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >::difference_type>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >::operator-(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >&>(rhs)
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
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >>::__zz_cib_copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >>::__zz_cib_delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >>::__zz_cib_new_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >>::__zz_cib_OperatorMul_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >>::__zz_cib_OperatorArrow_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >>::__zz_cib_OperatorInc_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >>::__zz_cib_OperatorInc_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >>::__zz_cib_OperatorDec_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >>::__zz_cib_OperatorDec_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >>::__zz_cib_OperatorIndex_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >>::__zz_cib_OperatorPlusEq_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >>::__zz_cib_OperatorPlus_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >>::__zz_cib_OperatorMinusEq_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >>::__zz_cib_OperatorMinus_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >>::__zz_cib_OperatorCmpEq_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >>::__zz_cib_OperatorNotEq_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >>::__zz_cib_OperatorLT_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >>::__zz_cib_OperatorGT_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >>::__zz_cib_OperatorLE_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >>::__zz_cib_OperatorGE_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C const >>::__zz_cib_OperatorMinus_20)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 21 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::__zz_cib_stl_helpers;
template <>
struct __zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >> : public ::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const > {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >::vector_reverse_iterator;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_RValueAbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >::reference> __zz_cib_decl __zz_cib_OperatorMul_3(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >::operator*()
    );
  }
  static __zz_cib_RValueAbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >::pointer> __zz_cib_decl __zz_cib_OperatorArrow_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >::pointer>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >::operator->()
    );
  }
  static __zz_cib_RValueAbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >&> __zz_cib_decl __zz_cib_OperatorInc_5(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >::operator++()
    );
  }
  static __zz_cib_RValueAbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >> __zz_cib_decl __zz_cib_OperatorInc_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToRValueAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >::operator++(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >&> __zz_cib_decl __zz_cib_OperatorDec_7(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >::operator--()
    );
  }
  static __zz_cib_RValueAbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >> __zz_cib_decl __zz_cib_OperatorDec_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToRValueAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >::operator--(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >::reference> __zz_cib_decl __zz_cib_OperatorIndex_9(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >::difference_type> n) {
    return __zz_cib_ToRValueAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >&> __zz_cib_decl __zz_cib_OperatorPlusEq_10(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >::difference_type> n) {
    return __zz_cib_ToRValueAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >::operator+=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >> __zz_cib_decl __zz_cib_OperatorPlus_11(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >::difference_type> n) {
    return __zz_cib_ToRValueAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >::operator+(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >&> __zz_cib_decl __zz_cib_OperatorMinusEq_12(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >::difference_type> n) {
    return __zz_cib_ToRValueAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >::operator-=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >> __zz_cib_decl __zz_cib_OperatorMinus_13(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >::difference_type> n) {
    return __zz_cib_ToRValueAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >::operator-(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq_14(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >&> rhs) {
    return __zz_cib_ToRValueAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >::operator==(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >&>(rhs)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<bool> __zz_cib_decl __zz_cib_OperatorNotEq_15(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >&> rhs) {
    return __zz_cib_ToRValueAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >::operator!=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >&>(rhs)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLT_16(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >&> rhs) {
    return __zz_cib_ToRValueAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >::operator<(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >&>(rhs)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGT_17(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >&> rhs) {
    return __zz_cib_ToRValueAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >::operator>(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >&>(rhs)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLE_18(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >&> rhs) {
    return __zz_cib_ToRValueAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >::operator<=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >&>(rhs)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGE_19(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >&> rhs) {
    return __zz_cib_ToRValueAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >::operator>=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >&>(rhs)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >::difference_type> __zz_cib_decl __zz_cib_OperatorMinus_20(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >&> rhs) {
    return __zz_cib_ToRValueAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >::difference_type>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >::operator-(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >&>(rhs)
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
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >>::__zz_cib_copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >>::__zz_cib_delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >>::__zz_cib_new_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >>::__zz_cib_OperatorMul_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >>::__zz_cib_OperatorArrow_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >>::__zz_cib_OperatorInc_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >>::__zz_cib_OperatorInc_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >>::__zz_cib_OperatorDec_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >>::__zz_cib_OperatorDec_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >>::__zz_cib_OperatorIndex_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >>::__zz_cib_OperatorPlusEq_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >>::__zz_cib_OperatorPlus_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >>::__zz_cib_OperatorMinusEq_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >>::__zz_cib_OperatorMinus_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >>::__zz_cib_OperatorCmpEq_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >>::__zz_cib_OperatorNotEq_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >>::__zz_cib_OperatorLT_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >>::__zz_cib_OperatorGT_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >>::__zz_cib_OperatorLE_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >>::__zz_cib_OperatorGE_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C* const >>::__zz_cib_OperatorMinus_20)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 21 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::__zz_cib_stl_helpers;
template <>
struct __zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>> : public ::__zz_cib_stl_helpers::vector_reverse_iterator<::C*> {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>::vector_reverse_iterator;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_RValueAbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>::reference> __zz_cib_decl __zz_cib_OperatorMul_3(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>::operator*()
    );
  }
  static __zz_cib_RValueAbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>::pointer> __zz_cib_decl __zz_cib_OperatorArrow_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>::pointer>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>::operator->()
    );
  }
  static __zz_cib_RValueAbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>&> __zz_cib_decl __zz_cib_OperatorInc_5(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>::operator++()
    );
  }
  static __zz_cib_RValueAbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>> __zz_cib_decl __zz_cib_OperatorInc_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToRValueAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>::operator++(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>&> __zz_cib_decl __zz_cib_OperatorDec_7(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>::operator--()
    );
  }
  static __zz_cib_RValueAbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>> __zz_cib_decl __zz_cib_OperatorDec_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToRValueAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>::operator--(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>::reference> __zz_cib_decl __zz_cib_OperatorIndex_9(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>::difference_type> n) {
    return __zz_cib_ToRValueAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>::difference_type>(n)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>&> __zz_cib_decl __zz_cib_OperatorPlusEq_10(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>::difference_type> n) {
    return __zz_cib_ToRValueAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>::operator+=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>::difference_type>(n)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>> __zz_cib_decl __zz_cib_OperatorPlus_11(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>::difference_type> n) {
    return __zz_cib_ToRValueAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>::operator+(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>::difference_type>(n)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>&> __zz_cib_decl __zz_cib_OperatorMinusEq_12(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>::difference_type> n) {
    return __zz_cib_ToRValueAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>::operator-=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>::difference_type>(n)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>> __zz_cib_decl __zz_cib_OperatorMinus_13(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>::difference_type> n) {
    return __zz_cib_ToRValueAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>::operator-(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>::difference_type>(n)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq_14(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>&> rhs) {
    return __zz_cib_ToRValueAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>::operator==(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>&>(rhs)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<bool> __zz_cib_decl __zz_cib_OperatorNotEq_15(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>&> rhs) {
    return __zz_cib_ToRValueAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>::operator!=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>&>(rhs)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLT_16(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>&> rhs) {
    return __zz_cib_ToRValueAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>::operator<(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>&>(rhs)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGT_17(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>&> rhs) {
    return __zz_cib_ToRValueAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>::operator>(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>&>(rhs)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLE_18(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>&> rhs) {
    return __zz_cib_ToRValueAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>::operator<=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>&>(rhs)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGE_19(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>&> rhs) {
    return __zz_cib_ToRValueAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>::operator>=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>&>(rhs)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>::difference_type> __zz_cib_decl __zz_cib_OperatorMinus_20(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>&> rhs) {
    return __zz_cib_ToRValueAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>::difference_type>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>::operator-(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>&>(rhs)
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
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>>::__zz_cib_copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>>::__zz_cib_delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>>::__zz_cib_new_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>>::__zz_cib_OperatorMul_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>>::__zz_cib_OperatorArrow_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>>::__zz_cib_OperatorInc_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>>::__zz_cib_OperatorInc_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>>::__zz_cib_OperatorDec_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>>::__zz_cib_OperatorDec_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>>::__zz_cib_OperatorIndex_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>>::__zz_cib_OperatorPlusEq_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>>::__zz_cib_OperatorPlus_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>>::__zz_cib_OperatorMinusEq_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>>::__zz_cib_OperatorMinus_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>>::__zz_cib_OperatorCmpEq_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>>::__zz_cib_OperatorNotEq_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>>::__zz_cib_OperatorLT_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>>::__zz_cib_OperatorGT_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>>::__zz_cib_OperatorLE_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>>::__zz_cib_OperatorGE_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C*>>::__zz_cib_OperatorMinus_20)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 21 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::__zz_cib_stl_helpers;
template <>
struct __zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C>> : public ::__zz_cib_stl_helpers::vector_reverse_iterator<::C> {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C>>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::__zz_cib_stl_helpers::vector_reverse_iterator<::C>::vector_reverse_iterator;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_RValueAbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C>::reference> __zz_cib_decl __zz_cib_OperatorMul_3(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C>::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C>::operator*()
    );
  }
  static __zz_cib_RValueAbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C>::pointer> __zz_cib_decl __zz_cib_OperatorArrow_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C>::pointer>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C>::operator->()
    );
  }
  static __zz_cib_RValueAbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C>&> __zz_cib_decl __zz_cib_OperatorInc_5(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C>::operator++()
    );
  }
  static __zz_cib_RValueAbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C>> __zz_cib_decl __zz_cib_OperatorInc_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToRValueAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C>::operator++(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C>&> __zz_cib_decl __zz_cib_OperatorDec_7(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C>::operator--()
    );
  }
  static __zz_cib_RValueAbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C>> __zz_cib_decl __zz_cib_OperatorDec_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToRValueAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C>::operator--(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C>::reference> __zz_cib_decl __zz_cib_OperatorIndex_9(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C>::difference_type> n) {
    return __zz_cib_ToRValueAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C>::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C>::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C>::difference_type>(n)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C>&> __zz_cib_decl __zz_cib_OperatorPlusEq_10(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C>::difference_type> n) {
    return __zz_cib_ToRValueAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C>::operator+=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C>::difference_type>(n)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C>> __zz_cib_decl __zz_cib_OperatorPlus_11(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C>::difference_type> n) {
    return __zz_cib_ToRValueAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C>::operator+(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C>::difference_type>(n)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C>&> __zz_cib_decl __zz_cib_OperatorMinusEq_12(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C>::difference_type> n) {
    return __zz_cib_ToRValueAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C>::operator-=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C>::difference_type>(n)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C>> __zz_cib_decl __zz_cib_OperatorMinus_13(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C>::difference_type> n) {
    return __zz_cib_ToRValueAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C>::operator-(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C>::difference_type>(n)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq_14(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::C>&> rhs) {
    return __zz_cib_ToRValueAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C>::operator==(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::C>&>(rhs)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<bool> __zz_cib_decl __zz_cib_OperatorNotEq_15(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::C>&> rhs) {
    return __zz_cib_ToRValueAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C>::operator!=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::C>&>(rhs)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLT_16(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::C>&> rhs) {
    return __zz_cib_ToRValueAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C>::operator<(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::C>&>(rhs)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGT_17(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::C>&> rhs) {
    return __zz_cib_ToRValueAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C>::operator>(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::C>&>(rhs)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLE_18(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::C>&> rhs) {
    return __zz_cib_ToRValueAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C>::operator<=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::C>&>(rhs)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGE_19(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::C>&> rhs) {
    return __zz_cib_ToRValueAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C>::operator>=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::C>&>(rhs)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::C>::difference_type> __zz_cib_decl __zz_cib_OperatorMinus_20(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::C>&> rhs) {
    return __zz_cib_ToRValueAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::C>::difference_type>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::C>::operator-(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::C>&>(rhs)
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
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C>>::__zz_cib_copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C>>::__zz_cib_delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C>>::__zz_cib_new_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C>>::__zz_cib_OperatorMul_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C>>::__zz_cib_OperatorArrow_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C>>::__zz_cib_OperatorInc_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C>>::__zz_cib_OperatorInc_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C>>::__zz_cib_OperatorDec_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C>>::__zz_cib_OperatorDec_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C>>::__zz_cib_OperatorIndex_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C>>::__zz_cib_OperatorPlusEq_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C>>::__zz_cib_OperatorPlus_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C>>::__zz_cib_OperatorMinusEq_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C>>::__zz_cib_OperatorMinus_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C>>::__zz_cib_OperatorCmpEq_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C>>::__zz_cib_OperatorNotEq_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C>>::__zz_cib_OperatorLT_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C>>::__zz_cib_OperatorGT_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C>>::__zz_cib_OperatorLE_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C>>::__zz_cib_OperatorGE_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::C>>::__zz_cib_OperatorMinus_20)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 21 };
  return &methodTable;
}
}}}