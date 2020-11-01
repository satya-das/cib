#include "__zz_cib_stl-helpers/__zz_cib_bidirectional_reverse_iterator.h"
#include "podofo/base/PdfReference.h"
#include "podofo/doc/PdfFunction.h"

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
struct __zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction const >> : public ::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction const > {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction const >>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction const >::bidirectional_reverse_iterator;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction const >::reference> __zz_cib_decl __zz_cib_OperatorMul_3(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction const >::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction const >::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction const >::pointer> __zz_cib_decl __zz_cib_OperatorArrow_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction const >::pointer>(
      __zz_cib_obj->::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction const >::operator->()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction const >&> __zz_cib_decl __zz_cib_OperatorInc_5(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction const >::operator++()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction const >> __zz_cib_decl __zz_cib_OperatorInc_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction const >::operator++(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction const >&> __zz_cib_decl __zz_cib_OperatorDec_7(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction const >::operator--()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction const >> __zz_cib_decl __zz_cib_OperatorDec_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction const >::operator--(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction const >::operator==(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorNotEq_10(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction const >::operator!=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction const >&>(rhs)
      )
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class256 {
using namespace ::__zz_cib_stl_helpers;
namespace __zz_cib_Class296 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction const >>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction const >>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction const >>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction const >>::__zz_cib_OperatorMul_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction const >>::__zz_cib_OperatorArrow_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction const >>::__zz_cib_OperatorInc_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction const >>::__zz_cib_OperatorInc_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction const >>::__zz_cib_OperatorDec_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction const >>::__zz_cib_OperatorDec_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction const >>::__zz_cib_OperatorCmpEq_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction const >>::__zz_cib_OperatorNotEq_10)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 11 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::__zz_cib_stl_helpers;
template <>
struct __zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction>> : public ::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction> {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction>>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction>::bidirectional_reverse_iterator;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction>::reference> __zz_cib_decl __zz_cib_OperatorMul_3(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction>::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction>::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction>::pointer> __zz_cib_decl __zz_cib_OperatorArrow_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction>::pointer>(
      __zz_cib_obj->::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction>::operator->()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction>&> __zz_cib_decl __zz_cib_OperatorInc_5(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction>::operator++()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction>> __zz_cib_decl __zz_cib_OperatorInc_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction>::operator++(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction>&> __zz_cib_decl __zz_cib_OperatorDec_7(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction>::operator--()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction>> __zz_cib_decl __zz_cib_OperatorDec_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction>::operator--(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction>::operator==(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorNotEq_10(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction>::operator!=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction>&>(rhs)
      )
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class256 {
using namespace ::__zz_cib_stl_helpers;
namespace __zz_cib_Class295 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction>>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction>>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction>>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction>>::__zz_cib_OperatorMul_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction>>::__zz_cib_OperatorArrow_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction>>::__zz_cib_OperatorInc_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction>>::__zz_cib_OperatorInc_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction>>::__zz_cib_OperatorDec_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction>>::__zz_cib_OperatorDec_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction>>::__zz_cib_OperatorCmpEq_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfFunction>>::__zz_cib_OperatorNotEq_10)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 11 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::__zz_cib_stl_helpers;
template <>
struct __zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference* const >> : public ::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference* const > {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference* const >>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference* const >::bidirectional_reverse_iterator;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference* const >::reference> __zz_cib_decl __zz_cib_OperatorMul_3(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference* const >::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference* const >::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference* const >::pointer> __zz_cib_decl __zz_cib_OperatorArrow_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference* const >::pointer>(
      __zz_cib_obj->::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference* const >::operator->()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference* const >&> __zz_cib_decl __zz_cib_OperatorInc_5(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference* const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference* const >::operator++()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference* const >> __zz_cib_decl __zz_cib_OperatorInc_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference* const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference* const >::operator++(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference* const >&> __zz_cib_decl __zz_cib_OperatorDec_7(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference* const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference* const >::operator--()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference* const >> __zz_cib_decl __zz_cib_OperatorDec_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference* const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference* const >::operator--(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference* const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference* const >::operator==(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference* const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorNotEq_10(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference* const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference* const >::operator!=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference* const >&>(rhs)
      )
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class256 {
using namespace ::__zz_cib_stl_helpers;
namespace __zz_cib_Class321 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference* const >>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference* const >>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference* const >>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference* const >>::__zz_cib_OperatorMul_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference* const >>::__zz_cib_OperatorArrow_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference* const >>::__zz_cib_OperatorInc_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference* const >>::__zz_cib_OperatorInc_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference* const >>::__zz_cib_OperatorDec_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference* const >>::__zz_cib_OperatorDec_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference* const >>::__zz_cib_OperatorCmpEq_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference* const >>::__zz_cib_OperatorNotEq_10)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 11 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::__zz_cib_stl_helpers;
template <>
struct __zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference*>> : public ::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference*> {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference*>>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference*>::bidirectional_reverse_iterator;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference*>::reference> __zz_cib_decl __zz_cib_OperatorMul_3(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference*>::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference*>::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference*>::pointer> __zz_cib_decl __zz_cib_OperatorArrow_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference*>::pointer>(
      __zz_cib_obj->::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference*>::operator->()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference*>&> __zz_cib_decl __zz_cib_OperatorInc_5(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference*>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference*>::operator++()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference*>> __zz_cib_decl __zz_cib_OperatorInc_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference*>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference*>::operator++(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference*>&> __zz_cib_decl __zz_cib_OperatorDec_7(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference*>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference*>::operator--()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference*>> __zz_cib_decl __zz_cib_OperatorDec_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference*>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference*>::operator--(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference*>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference*>::operator==(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference*>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorNotEq_10(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference*>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference*>::operator!=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference*>&>(rhs)
      )
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class256 {
using namespace ::__zz_cib_stl_helpers;
namespace __zz_cib_Class320 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference*>>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference*>>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference*>>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference*>>::__zz_cib_OperatorMul_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference*>>::__zz_cib_OperatorArrow_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference*>>::__zz_cib_OperatorInc_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference*>>::__zz_cib_OperatorInc_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference*>>::__zz_cib_OperatorDec_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference*>>::__zz_cib_OperatorDec_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference*>>::__zz_cib_OperatorCmpEq_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<::PoDoFo::PdfReference*>>::__zz_cib_OperatorNotEq_10)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 11 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::__zz_cib_stl_helpers;
template <>
struct __zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char const >> : public ::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char const > {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char const >>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char const >::bidirectional_reverse_iterator;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char const >::reference> __zz_cib_decl __zz_cib_OperatorMul_3(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char const >::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char const >::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char const >::pointer> __zz_cib_decl __zz_cib_OperatorArrow_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char const >::pointer>(
      __zz_cib_obj->::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char const >::operator->()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char const >&> __zz_cib_decl __zz_cib_OperatorInc_5(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char const >::operator++()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char const >> __zz_cib_decl __zz_cib_OperatorInc_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char const >::operator++(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char const >&> __zz_cib_decl __zz_cib_OperatorDec_7(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char const >&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char const >::operator--()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char const >> __zz_cib_decl __zz_cib_OperatorDec_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char const >>(
      __zz_cib_obj->::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char const >::operator--(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char const >::operator==(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char const >&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorNotEq_10(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char const >&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char const >::operator!=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char const >&>(rhs)
      )
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class256 {
using namespace ::__zz_cib_stl_helpers;
namespace __zz_cib_Class291 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char const >>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char const >>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char const >>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char const >>::__zz_cib_OperatorMul_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char const >>::__zz_cib_OperatorArrow_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char const >>::__zz_cib_OperatorInc_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char const >>::__zz_cib_OperatorInc_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char const >>::__zz_cib_OperatorDec_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char const >>::__zz_cib_OperatorDec_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char const >>::__zz_cib_OperatorCmpEq_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char const >>::__zz_cib_OperatorNotEq_10)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 11 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::__zz_cib_stl_helpers;
template <>
struct __zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char>> : public ::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char> {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char>>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char>::bidirectional_reverse_iterator;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char>::reference> __zz_cib_decl __zz_cib_OperatorMul_3(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char>::reference>(
      __zz_cib_obj->::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char>::operator*()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char>::pointer> __zz_cib_decl __zz_cib_OperatorArrow_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char>::pointer>(
      __zz_cib_obj->::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char>::operator->()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char>&> __zz_cib_decl __zz_cib_OperatorInc_5(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char>::operator++()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char>> __zz_cib_decl __zz_cib_OperatorInc_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char>::operator++(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char>&> __zz_cib_decl __zz_cib_OperatorDec_7(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char>&>(
      __zz_cib_obj->::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char>::operator--()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char>> __zz_cib_decl __zz_cib_OperatorDec_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char>>(
      __zz_cib_obj->::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char>::operator--(
        __zz_cib_::__zz_cib_FromAbiType<int>(__zz_cib_param0)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char>::operator==(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char>&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorNotEq_10(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char>&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char>::operator!=(
        __zz_cib_::__zz_cib_FromAbiType<const ::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char>&>(rhs)
      )
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class256 {
using namespace ::__zz_cib_stl_helpers;
namespace __zz_cib_Class290 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char>>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char>>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char>>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char>>::__zz_cib_OperatorMul_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char>>::__zz_cib_OperatorArrow_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char>>::__zz_cib_OperatorInc_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char>>::__zz_cib_OperatorInc_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char>>::__zz_cib_OperatorDec_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char>>::__zz_cib_OperatorDec_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char>>::__zz_cib_OperatorCmpEq_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::__zz_cib_stl_helpers::bidirectional_reverse_iterator<char>>::__zz_cib_OperatorNotEq_10)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 11 };
  return &methodTable;
}
}}}
