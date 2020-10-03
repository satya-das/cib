#include "__zz_cib_helpers/__zz_cib_helper-file-defining-class.h"
#include "__zz_cib_stl-helpers/__zz_cib_vector-reverse_iterator.h"

#include "__zz_cib_StlDependencyTest-class-down-cast.h"
#include "__zz_cib_StlDependencyTest-delegate-helper.h"
#include "__zz_cib_StlDependencyTest-generic.h"
#include "__zz_cib_StlDependencyTest-ids.h"
#include "__zz_cib_StlDependencyTest-type-converters.h"
#include "__zz_cib_StlDependencyTest-mtable-helper.h"

namespace __zz_cib_ {
using namespace ::__zz_cib_stl_helpers;
template <>
struct __zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >> : public ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const > {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >::vector_reverse_iterator;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >::reference> __zz_cib_decl __zz_cib_OperatorMul_3(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >::pointer> __zz_cib_decl __zz_cib_OperatorArrow_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >::pointer>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >::operator->()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >::const_reference> __zz_cib_decl __zz_cib_OperatorMul_5(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >::const_reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >&> __zz_cib_decl __zz_cib_OperatorInc_6(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >::operator++()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >> __zz_cib_decl __zz_cib_OperatorInc_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >::operator++(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >&> __zz_cib_decl __zz_cib_OperatorDec_8(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >::operator--()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >> __zz_cib_decl __zz_cib_OperatorDec_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >::operator--(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >::reference> __zz_cib_decl __zz_cib_OperatorIndex_10(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >&> __zz_cib_decl __zz_cib_OperatorPlusEq_11(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >::operator+=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >> __zz_cib_decl __zz_cib_OperatorPlus_12(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >::operator+(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >&> __zz_cib_decl __zz_cib_OperatorMinusEq_13(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >::operator-=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >> __zz_cib_decl __zz_cib_OperatorMinus_14(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >::operator-(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq_15(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >::operator==(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorNotEq_16(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >::operator!=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLT_17(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >::operator<(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGT_18(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >::operator>(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLE_19(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >::operator<=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGE_20(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >::operator>=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >::difference_type> __zz_cib_decl __zz_cib_OperatorMinus_21(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >&> rhs) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >::difference_type>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >::operator-(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >&>(rhs)
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
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >>::__zz_cib_copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >>::__zz_cib_delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >>::__zz_cib_new_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >>::__zz_cib_OperatorMul_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >>::__zz_cib_OperatorArrow_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >>::__zz_cib_OperatorMul_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >>::__zz_cib_OperatorInc_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >>::__zz_cib_OperatorInc_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >>::__zz_cib_OperatorDec_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >>::__zz_cib_OperatorDec_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >>::__zz_cib_OperatorIndex_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >>::__zz_cib_OperatorPlusEq_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >>::__zz_cib_OperatorPlus_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >>::__zz_cib_OperatorMinusEq_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >>::__zz_cib_OperatorMinus_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >>::__zz_cib_OperatorCmpEq_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >>::__zz_cib_OperatorNotEq_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >>::__zz_cib_OperatorLT_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >>::__zz_cib_OperatorGT_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >>::__zz_cib_OperatorLE_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >>::__zz_cib_OperatorGE_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass* const >>::__zz_cib_OperatorMinus_21)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 22 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::__zz_cib_stl_helpers;
template <>
struct __zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>> : public ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*> {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>::vector_reverse_iterator;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>::reference> __zz_cib_decl __zz_cib_OperatorMul_3(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>::pointer> __zz_cib_decl __zz_cib_OperatorArrow_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>::pointer>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>::operator->()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>::const_reference> __zz_cib_decl __zz_cib_OperatorMul_5(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>::const_reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>&> __zz_cib_decl __zz_cib_OperatorInc_6(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>::operator++()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>> __zz_cib_decl __zz_cib_OperatorInc_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>::operator++(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>&> __zz_cib_decl __zz_cib_OperatorDec_8(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>::operator--()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>> __zz_cib_decl __zz_cib_OperatorDec_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>::operator--(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>::reference> __zz_cib_decl __zz_cib_OperatorIndex_10(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>&> __zz_cib_decl __zz_cib_OperatorPlusEq_11(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>::operator+=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>> __zz_cib_decl __zz_cib_OperatorPlus_12(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>::operator+(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>&> __zz_cib_decl __zz_cib_OperatorMinusEq_13(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>::operator-=(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>> __zz_cib_decl __zz_cib_OperatorMinus_14(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>::difference_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>::operator-(
        __zz_cib_::__zz_cib_FromAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>::difference_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq_15(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>::operator==(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorNotEq_16(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>::operator!=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLT_17(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>::operator<(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGT_18(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>::operator>(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLE_19(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>::operator<=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGE_20(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>::operator>=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>::difference_type> __zz_cib_decl __zz_cib_OperatorMinus_21(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>&> rhs) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>::difference_type>(
      __zz_cib_obj->::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>::operator-(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>&>(rhs)
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
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>>::__zz_cib_copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>>::__zz_cib_delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>>::__zz_cib_new_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>>::__zz_cib_OperatorMul_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>>::__zz_cib_OperatorArrow_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>>::__zz_cib_OperatorMul_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>>::__zz_cib_OperatorInc_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>>::__zz_cib_OperatorInc_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>>::__zz_cib_OperatorDec_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>>::__zz_cib_OperatorDec_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>>::__zz_cib_OperatorIndex_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>>::__zz_cib_OperatorPlusEq_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>>::__zz_cib_OperatorPlus_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>>::__zz_cib_OperatorMinusEq_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>>::__zz_cib_OperatorMinus_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>>::__zz_cib_OperatorCmpEq_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>>::__zz_cib_OperatorNotEq_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>>::__zz_cib_OperatorLT_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>>::__zz_cib_OperatorGT_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>>::__zz_cib_OperatorLE_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>>::__zz_cib_OperatorGE_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::vector_reverse_iterator<::ExampleClass*>>::__zz_cib_OperatorMinus_21)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 22 };
  return &methodTable;
}
}}}
