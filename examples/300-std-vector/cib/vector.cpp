#include "example.h"
#include <vector>

#include "__zz_cib_Example-class-down-cast.h"
#include "__zz_cib_Example-delegate-helper.h"
#include "__zz_cib_Example-generic.h"
#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-library-type-handler.h"
#include "__zz_cib_Example-mtable-helper.h"

namespace __zz_cib_ {
using namespace ::std;
template <>
struct __zz_cib_Delegator<::std::vector<::C>> : public ::std::vector<::C> {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::std::vector<::C>>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::std::vector<::C>::vector;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_0() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_1(__zz_cib_AbiType_t<::std::vector<::C>::size_type> __n, __zz_cib_AbiType_t<const ::std::vector<::C>::value_type&> __value) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C>::size_type>(__n),
    __zz_cib_::__zz_cib_FromAbiType<const ::std::vector<::C>::value_type&>(__value));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_copy_2(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_3(__zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(std::move(*__zz_cib_obj));
  }
  static void __zz_cib_decl __zz_cib_delete_4(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_RValueAbiType_t<::std::vector<::C>&> __zz_cib_decl __zz_cib_OperatorEqual_5(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::std::vector<::C>&> __x) {
    return __zz_cib_ToRValueAbiType<::std::vector<::C>&>(
      __zz_cib_obj->::std::vector<::C>::operator=(
        __zz_cib_::__zz_cib_FromAbiType<const ::std::vector<::C>&>(__x)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<::std::vector<::C>&> __zz_cib_decl __zz_cib_OperatorEqual_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::C>&&> __x) {
    return __zz_cib_ToRValueAbiType<::std::vector<::C>&>(
      __zz_cib_obj->::std::vector<::C>::operator=(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C>&&>(__x)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<void> __zz_cib_decl assign_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::C>::size_type> __n, __zz_cib_AbiType_t<const ::std::vector<::C>::value_type&> __val) {
    __zz_cib_obj->::std::vector<::C>::assign(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C>::size_type>(__n),
      __zz_cib_::__zz_cib_FromAbiType<const ::std::vector<::C>::value_type&>(__val)
    );
  }
  static __zz_cib_RValueAbiType_t<::std::vector<::C>::size_type> __zz_cib_decl size_8(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<::std::vector<::C>::size_type>(
      __zz_cib_obj->::std::vector<::C>::size()
    );
  }
  static __zz_cib_RValueAbiType_t<::std::vector<::C>::size_type> __zz_cib_decl max_size_9(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<::std::vector<::C>::size_type>(
      __zz_cib_obj->::std::vector<::C>::max_size()
    );
  }
  static __zz_cib_RValueAbiType_t<void> __zz_cib_decl resize_10(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::C>::size_type> __new_size, __zz_cib_AbiType_t<const ::std::vector<::C>::value_type&> __x) {
    __zz_cib_obj->::std::vector<::C>::resize(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C>::size_type>(__new_size),
      __zz_cib_::__zz_cib_FromAbiType<const ::std::vector<::C>::value_type&>(__x)
    );
  }
  static __zz_cib_RValueAbiType_t<void> __zz_cib_decl shrink_to_fit_11(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::vector<::C>::shrink_to_fit();
  }
  static __zz_cib_RValueAbiType_t<::std::vector<::C>::size_type> __zz_cib_decl capacity_12(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<::std::vector<::C>::size_type>(
      __zz_cib_obj->::std::vector<::C>::capacity()
    );
  }
  static __zz_cib_RValueAbiType_t<bool> __zz_cib_decl empty_13(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<bool>(
      __zz_cib_obj->::std::vector<::C>::empty()
    );
  }
  static __zz_cib_RValueAbiType_t<void> __zz_cib_decl reserve_14(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::C>::size_type> __n) {
    __zz_cib_obj->::std::vector<::C>::reserve(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C>::size_type>(__n)
    );
  }
  static __zz_cib_RValueAbiType_t<const __zz_cib_::return_value_t<value_type>> __zz_cib_decl __zz_cib_OperatorIndex_15(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::C>::size_type> __n) {
    return __zz_cib_ToRValueAbiType<const __zz_cib_::return_value_t<value_type>>(
      __zz_cib_obj->::std::vector<::C>::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C>::size_type>(__n)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<const __zz_cib_::return_value_t<value_type>> __zz_cib_decl at_16(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::C>::size_type> __n) {
    return __zz_cib_ToRValueAbiType<const __zz_cib_::return_value_t<value_type>>(
      __zz_cib_obj->::std::vector<::C>::at(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C>::size_type>(__n)
      )
    );
  }
  static __zz_cib_RValueAbiType_t<const __zz_cib_::return_value_t<value_type>> __zz_cib_decl front_17(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<const __zz_cib_::return_value_t<value_type>>(
      __zz_cib_obj->::std::vector<::C>::front()
    );
  }
  static __zz_cib_RValueAbiType_t<const __zz_cib_::return_value_t<value_type>> __zz_cib_decl back_18(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<const __zz_cib_::return_value_t<value_type>>(
      __zz_cib_obj->::std::vector<::C>::back()
    );
  }
  static __zz_cib_RValueAbiType_t<void> __zz_cib_decl push_back_19(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::std::vector<::C>::value_type&> __x) {
    __zz_cib_obj->::std::vector<::C>::push_back(
      __zz_cib_::__zz_cib_FromAbiType<const ::std::vector<::C>::value_type&>(__x)
    );
  }
  static __zz_cib_RValueAbiType_t<void> __zz_cib_decl push_back_20(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::C>::value_type&&> __x) {
    __zz_cib_obj->::std::vector<::C>::push_back(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C>::value_type&&>(__x)
    );
  }
  static __zz_cib_RValueAbiType_t<void> __zz_cib_decl pop_back_21(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::vector<::C>::pop_back();
  }
  static __zz_cib_RValueAbiType_t<void> __zz_cib_decl swap_22(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::C>&> __x) {
    __zz_cib_obj->::std::vector<::C>::swap(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C>&>(__x)
    );
  }
  static __zz_cib_RValueAbiType_t<void> __zz_cib_decl clear_23(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::vector<::C>::clear();
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class256 {
using namespace ::std;
namespace __zz_cib_Class257 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::__zz_cib_new_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::__zz_cib_new_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::__zz_cib_copy_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::__zz_cib_new_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::__zz_cib_delete_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::__zz_cib_OperatorEqual_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::__zz_cib_OperatorEqual_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::assign_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::size_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::max_size_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::resize_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::shrink_to_fit_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::capacity_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::empty_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::reserve_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::__zz_cib_OperatorIndex_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::at_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::front_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::back_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::push_back_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::push_back_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::pop_back_21),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::swap_22),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::clear_23)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 24 };
  return &methodTable;
}
}}}
