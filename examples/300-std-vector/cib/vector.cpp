#include "C.h"
#include <list>
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
struct __zz_cib_Delegator<::std::vector<::C*>> : public ::std::vector<::C*> {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::std::vector<::C*>::vector;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_0() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_1(__zz_cib_AbiType_t<::std::vector<::C*>::size_type> __n, __zz_cib_AbiType_t<const ::std::vector<::C*>::value_type&> __value) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C*>::size_type>(__n),
    __zz_cib_::__zz_cib_FromAbiType<const ::std::vector<::C*>::value_type&>(__value));
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
  static __zz_cib_AbiType_t<::std::vector<::C*>&> __zz_cib_decl __zz_cib_OperatorEqual_5(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::std::vector<::C*>&> __x) {
    return __zz_cib_ToAbiType<::std::vector<::C*>&>(
      __zz_cib_obj->::std::vector<::C*>::operator=(
        __zz_cib_::__zz_cib_FromAbiType<const ::std::vector<::C*>&>(__x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C*>&> __zz_cib_decl __zz_cib_OperatorEqual_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::C*>&&> __x) {
    return __zz_cib_ToAbiType<::std::vector<::C*>&>(
      __zz_cib_obj->::std::vector<::C*>::operator=(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C*>&&>(__x)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl assign_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::C*>::size_type> __n, __zz_cib_AbiType_t<const ::std::vector<::C*>::value_type&> __val) {
    __zz_cib_obj->::std::vector<::C*>::assign(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C*>::size_type>(__n),
      __zz_cib_::__zz_cib_FromAbiType<const ::std::vector<::C*>::value_type&>(__val)
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C*>::iterator> __zz_cib_decl begin_8(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C*>::iterator>(
      __zz_cib_obj->::std::vector<::C*>::begin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C*>::const_iterator> __zz_cib_decl begin_9(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C*>::const_iterator>(
      __zz_cib_obj->::std::vector<::C*>::begin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C*>::iterator> __zz_cib_decl end_10(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C*>::iterator>(
      __zz_cib_obj->::std::vector<::C*>::end()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C*>::const_iterator> __zz_cib_decl end_11(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C*>::const_iterator>(
      __zz_cib_obj->::std::vector<::C*>::end()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C*>::reverse_iterator> __zz_cib_decl rbegin_12(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C*>::reverse_iterator>(
      __zz_cib_obj->::std::vector<::C*>::rbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C*>::const_reverse_iterator> __zz_cib_decl rbegin_13(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C*>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::C*>::rbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C*>::reverse_iterator> __zz_cib_decl rend_14(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C*>::reverse_iterator>(
      __zz_cib_obj->::std::vector<::C*>::rend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C*>::const_reverse_iterator> __zz_cib_decl rend_15(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C*>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::C*>::rend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C*>::const_iterator> __zz_cib_decl cbegin_16(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C*>::const_iterator>(
      __zz_cib_obj->::std::vector<::C*>::cbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C*>::const_iterator> __zz_cib_decl cend_17(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C*>::const_iterator>(
      __zz_cib_obj->::std::vector<::C*>::cend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C*>::const_reverse_iterator> __zz_cib_decl crbegin_18(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C*>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::C*>::crbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C*>::const_reverse_iterator> __zz_cib_decl crend_19(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C*>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::C*>::crend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C*>::size_type> __zz_cib_decl size_20(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C*>::size_type>(
      __zz_cib_obj->::std::vector<::C*>::size()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C*>::size_type> __zz_cib_decl max_size_21(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C*>::size_type>(
      __zz_cib_obj->::std::vector<::C*>::max_size()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl resize_22(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::C*>::size_type> __new_size, __zz_cib_AbiType_t<const ::std::vector<::C*>::value_type&> __x) {
    __zz_cib_obj->::std::vector<::C*>::resize(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C*>::size_type>(__new_size),
      __zz_cib_::__zz_cib_FromAbiType<const ::std::vector<::C*>::value_type&>(__x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl shrink_to_fit_23(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::vector<::C*>::shrink_to_fit();
  }
  static __zz_cib_AbiType_t<::std::vector<::C*>::size_type> __zz_cib_decl capacity_24(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C*>::size_type>(
      __zz_cib_obj->::std::vector<::C*>::capacity()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl empty_25(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::std::vector<::C*>::empty()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl reserve_26(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::C*>::size_type> __n) {
    __zz_cib_obj->::std::vector<::C*>::reserve(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C*>::size_type>(__n)
    );
  }
  static __zz_cib_AbiType_t<const __zz_cib_::return_value_t<value_type>> __zz_cib_decl __zz_cib_OperatorIndex_27(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::C*>::size_type> __n) {
    return __zz_cib_ToAbiType<const __zz_cib_::return_value_t<value_type>>(
      __zz_cib_obj->::std::vector<::C*>::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C*>::size_type>(__n)
      )
    );
  }
  static __zz_cib_AbiType_t<const __zz_cib_::return_value_t<value_type>> __zz_cib_decl at_28(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::C*>::size_type> __n) {
    return __zz_cib_ToAbiType<const __zz_cib_::return_value_t<value_type>>(
      __zz_cib_obj->::std::vector<::C*>::at(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C*>::size_type>(__n)
      )
    );
  }
  static __zz_cib_AbiType_t<const __zz_cib_::return_value_t<value_type>> __zz_cib_decl front_29(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const __zz_cib_::return_value_t<value_type>>(
      __zz_cib_obj->::std::vector<::C*>::front()
    );
  }
  static __zz_cib_AbiType_t<const __zz_cib_::return_value_t<value_type>> __zz_cib_decl back_30(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const __zz_cib_::return_value_t<value_type>>(
      __zz_cib_obj->::std::vector<::C*>::back()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_back_31(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::std::vector<::C*>::value_type&> __x) {
    __zz_cib_obj->::std::vector<::C*>::push_back(
      __zz_cib_::__zz_cib_FromAbiType<const ::std::vector<::C*>::value_type&>(__x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_back_32(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::C*>::value_type&&> __x) {
    __zz_cib_obj->::std::vector<::C*>::push_back(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C*>::value_type&&>(__x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl pop_back_33(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::vector<::C*>::pop_back();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl swap_34(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::C*>&> __x) {
    __zz_cib_obj->::std::vector<::C*>::swap(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C*>&>(__x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl clear_35(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::vector<::C*>::clear();
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class261 {
using namespace ::std;
namespace __zz_cib_Class267 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::__zz_cib_new_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::__zz_cib_new_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::__zz_cib_copy_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::__zz_cib_new_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::__zz_cib_delete_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::__zz_cib_OperatorEqual_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::__zz_cib_OperatorEqual_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::assign_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::begin_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::begin_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::end_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::end_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::rbegin_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::rbegin_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::rend_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::rend_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::cbegin_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::cend_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::crbegin_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::crend_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::size_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::max_size_21),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::resize_22),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::shrink_to_fit_23),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::capacity_24),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::empty_25),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::reserve_26),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::__zz_cib_OperatorIndex_27),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::at_28),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::front_29),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::back_30),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::push_back_31),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::push_back_32),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::pop_back_33),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::swap_34),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::clear_35)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 36 };
  return &methodTable;
}
}}}
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
  static __zz_cib_AbiType_t<::std::vector<::C>&> __zz_cib_decl __zz_cib_OperatorEqual_5(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::std::vector<::C>&> __x) {
    return __zz_cib_ToAbiType<::std::vector<::C>&>(
      __zz_cib_obj->::std::vector<::C>::operator=(
        __zz_cib_::__zz_cib_FromAbiType<const ::std::vector<::C>&>(__x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C>&> __zz_cib_decl __zz_cib_OperatorEqual_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::C>&&> __x) {
    return __zz_cib_ToAbiType<::std::vector<::C>&>(
      __zz_cib_obj->::std::vector<::C>::operator=(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C>&&>(__x)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl assign_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::C>::size_type> __n, __zz_cib_AbiType_t<const ::std::vector<::C>::value_type&> __val) {
    __zz_cib_obj->::std::vector<::C>::assign(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C>::size_type>(__n),
      __zz_cib_::__zz_cib_FromAbiType<const ::std::vector<::C>::value_type&>(__val)
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C>::iterator> __zz_cib_decl begin_8(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C>::iterator>(
      __zz_cib_obj->::std::vector<::C>::begin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C>::const_iterator> __zz_cib_decl begin_9(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C>::const_iterator>(
      __zz_cib_obj->::std::vector<::C>::begin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C>::iterator> __zz_cib_decl end_10(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C>::iterator>(
      __zz_cib_obj->::std::vector<::C>::end()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C>::const_iterator> __zz_cib_decl end_11(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C>::const_iterator>(
      __zz_cib_obj->::std::vector<::C>::end()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C>::reverse_iterator> __zz_cib_decl rbegin_12(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C>::reverse_iterator>(
      __zz_cib_obj->::std::vector<::C>::rbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C>::const_reverse_iterator> __zz_cib_decl rbegin_13(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::C>::rbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C>::reverse_iterator> __zz_cib_decl rend_14(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C>::reverse_iterator>(
      __zz_cib_obj->::std::vector<::C>::rend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C>::const_reverse_iterator> __zz_cib_decl rend_15(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::C>::rend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C>::const_iterator> __zz_cib_decl cbegin_16(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C>::const_iterator>(
      __zz_cib_obj->::std::vector<::C>::cbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C>::const_iterator> __zz_cib_decl cend_17(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C>::const_iterator>(
      __zz_cib_obj->::std::vector<::C>::cend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C>::const_reverse_iterator> __zz_cib_decl crbegin_18(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::C>::crbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C>::const_reverse_iterator> __zz_cib_decl crend_19(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::C>::crend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C>::size_type> __zz_cib_decl size_20(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C>::size_type>(
      __zz_cib_obj->::std::vector<::C>::size()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C>::size_type> __zz_cib_decl max_size_21(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C>::size_type>(
      __zz_cib_obj->::std::vector<::C>::max_size()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl resize_22(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::C>::size_type> __new_size, __zz_cib_AbiType_t<const ::std::vector<::C>::value_type&> __x) {
    __zz_cib_obj->::std::vector<::C>::resize(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C>::size_type>(__new_size),
      __zz_cib_::__zz_cib_FromAbiType<const ::std::vector<::C>::value_type&>(__x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl shrink_to_fit_23(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::vector<::C>::shrink_to_fit();
  }
  static __zz_cib_AbiType_t<::std::vector<::C>::size_type> __zz_cib_decl capacity_24(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C>::size_type>(
      __zz_cib_obj->::std::vector<::C>::capacity()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl empty_25(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::std::vector<::C>::empty()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl reserve_26(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::C>::size_type> __n) {
    __zz_cib_obj->::std::vector<::C>::reserve(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C>::size_type>(__n)
    );
  }
  static __zz_cib_AbiType_t<const __zz_cib_::return_value_t<value_type>> __zz_cib_decl __zz_cib_OperatorIndex_27(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::C>::size_type> __n) {
    return __zz_cib_ToAbiType<const __zz_cib_::return_value_t<value_type>>(
      __zz_cib_obj->::std::vector<::C>::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C>::size_type>(__n)
      )
    );
  }
  static __zz_cib_AbiType_t<const __zz_cib_::return_value_t<value_type>> __zz_cib_decl at_28(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::C>::size_type> __n) {
    return __zz_cib_ToAbiType<const __zz_cib_::return_value_t<value_type>>(
      __zz_cib_obj->::std::vector<::C>::at(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C>::size_type>(__n)
      )
    );
  }
  static __zz_cib_AbiType_t<const __zz_cib_::return_value_t<value_type>> __zz_cib_decl front_29(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const __zz_cib_::return_value_t<value_type>>(
      __zz_cib_obj->::std::vector<::C>::front()
    );
  }
  static __zz_cib_AbiType_t<const __zz_cib_::return_value_t<value_type>> __zz_cib_decl back_30(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const __zz_cib_::return_value_t<value_type>>(
      __zz_cib_obj->::std::vector<::C>::back()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_back_31(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::std::vector<::C>::value_type&> __x) {
    __zz_cib_obj->::std::vector<::C>::push_back(
      __zz_cib_::__zz_cib_FromAbiType<const ::std::vector<::C>::value_type&>(__x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_back_32(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::C>::value_type&&> __x) {
    __zz_cib_obj->::std::vector<::C>::push_back(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C>::value_type&&>(__x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl pop_back_33(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::vector<::C>::pop_back();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl swap_34(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::C>&> __x) {
    __zz_cib_obj->::std::vector<::C>::swap(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C>&>(__x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl clear_35(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::vector<::C>::clear();
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class261 {
using namespace ::std;
namespace __zz_cib_Class262 {
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
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::begin_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::begin_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::end_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::end_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::rbegin_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::rbegin_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::rend_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::rend_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::cbegin_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::cend_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::crbegin_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::crend_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::size_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::max_size_21),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::resize_22),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::shrink_to_fit_23),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::capacity_24),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::empty_25),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::reserve_26),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::__zz_cib_OperatorIndex_27),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::at_28),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::front_29),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::back_30),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::push_back_31),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::push_back_32),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::pop_back_33),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::swap_34),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::clear_35)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 36 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::std;
template <>
struct __zz_cib_Delegator<::std::vector<::std::list<::C*>>> : public ::std::vector<::std::list<::C*>> {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::std::vector<::std::list<::C*>>::vector;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_0() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_1(__zz_cib_AbiType_t<::std::vector<::std::list<::C*>>::size_type> __n, __zz_cib_AbiType_t<const ::std::vector<::std::list<::C*>>::value_type&> __value) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::std::vector<::std::list<::C*>>::size_type>(__n),
    __zz_cib_::__zz_cib_FromAbiType<const ::std::vector<::std::list<::C*>>::value_type&>(__value));
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
  static __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>&> __zz_cib_decl __zz_cib_OperatorEqual_5(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::std::vector<::std::list<::C*>>&> __x) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::C*>>&>(
      __zz_cib_obj->::std::vector<::std::list<::C*>>::operator=(
        __zz_cib_::__zz_cib_FromAbiType<const ::std::vector<::std::list<::C*>>&>(__x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>&> __zz_cib_decl __zz_cib_OperatorEqual_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>&&> __x) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::C*>>&>(
      __zz_cib_obj->::std::vector<::std::list<::C*>>::operator=(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::std::list<::C*>>&&>(__x)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl assign_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>::size_type> __n, __zz_cib_AbiType_t<const ::std::vector<::std::list<::C*>>::value_type&> __val) {
    __zz_cib_obj->::std::vector<::std::list<::C*>>::assign(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::std::list<::C*>>::size_type>(__n),
      __zz_cib_::__zz_cib_FromAbiType<const ::std::vector<::std::list<::C*>>::value_type&>(__val)
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>::iterator> __zz_cib_decl begin_8(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::C*>>::iterator>(
      __zz_cib_obj->::std::vector<::std::list<::C*>>::begin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>::const_iterator> __zz_cib_decl begin_9(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::C*>>::const_iterator>(
      __zz_cib_obj->::std::vector<::std::list<::C*>>::begin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>::iterator> __zz_cib_decl end_10(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::C*>>::iterator>(
      __zz_cib_obj->::std::vector<::std::list<::C*>>::end()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>::const_iterator> __zz_cib_decl end_11(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::C*>>::const_iterator>(
      __zz_cib_obj->::std::vector<::std::list<::C*>>::end()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>::reverse_iterator> __zz_cib_decl rbegin_12(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::C*>>::reverse_iterator>(
      __zz_cib_obj->::std::vector<::std::list<::C*>>::rbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>::const_reverse_iterator> __zz_cib_decl rbegin_13(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::C*>>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::std::list<::C*>>::rbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>::reverse_iterator> __zz_cib_decl rend_14(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::C*>>::reverse_iterator>(
      __zz_cib_obj->::std::vector<::std::list<::C*>>::rend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>::const_reverse_iterator> __zz_cib_decl rend_15(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::C*>>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::std::list<::C*>>::rend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>::const_iterator> __zz_cib_decl cbegin_16(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::C*>>::const_iterator>(
      __zz_cib_obj->::std::vector<::std::list<::C*>>::cbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>::const_iterator> __zz_cib_decl cend_17(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::C*>>::const_iterator>(
      __zz_cib_obj->::std::vector<::std::list<::C*>>::cend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>::const_reverse_iterator> __zz_cib_decl crbegin_18(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::C*>>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::std::list<::C*>>::crbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>::const_reverse_iterator> __zz_cib_decl crend_19(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::C*>>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::std::list<::C*>>::crend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>::size_type> __zz_cib_decl size_20(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::C*>>::size_type>(
      __zz_cib_obj->::std::vector<::std::list<::C*>>::size()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>::size_type> __zz_cib_decl max_size_21(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::C*>>::size_type>(
      __zz_cib_obj->::std::vector<::std::list<::C*>>::max_size()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl resize_22(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>::size_type> __new_size, __zz_cib_AbiType_t<const ::std::vector<::std::list<::C*>>::value_type&> __x) {
    __zz_cib_obj->::std::vector<::std::list<::C*>>::resize(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::std::list<::C*>>::size_type>(__new_size),
      __zz_cib_::__zz_cib_FromAbiType<const ::std::vector<::std::list<::C*>>::value_type&>(__x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl shrink_to_fit_23(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::vector<::std::list<::C*>>::shrink_to_fit();
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>::size_type> __zz_cib_decl capacity_24(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::C*>>::size_type>(
      __zz_cib_obj->::std::vector<::std::list<::C*>>::capacity()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl empty_25(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::std::vector<::std::list<::C*>>::empty()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl reserve_26(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>::size_type> __n) {
    __zz_cib_obj->::std::vector<::std::list<::C*>>::reserve(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::std::list<::C*>>::size_type>(__n)
    );
  }
  static __zz_cib_AbiType_t<const __zz_cib_::return_value_t<value_type>> __zz_cib_decl __zz_cib_OperatorIndex_27(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>::size_type> __n) {
    return __zz_cib_ToAbiType<const __zz_cib_::return_value_t<value_type>>(
      __zz_cib_obj->::std::vector<::std::list<::C*>>::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::std::list<::C*>>::size_type>(__n)
      )
    );
  }
  static __zz_cib_AbiType_t<const __zz_cib_::return_value_t<value_type>> __zz_cib_decl at_28(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>::size_type> __n) {
    return __zz_cib_ToAbiType<const __zz_cib_::return_value_t<value_type>>(
      __zz_cib_obj->::std::vector<::std::list<::C*>>::at(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::std::list<::C*>>::size_type>(__n)
      )
    );
  }
  static __zz_cib_AbiType_t<const __zz_cib_::return_value_t<value_type>> __zz_cib_decl front_29(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const __zz_cib_::return_value_t<value_type>>(
      __zz_cib_obj->::std::vector<::std::list<::C*>>::front()
    );
  }
  static __zz_cib_AbiType_t<const __zz_cib_::return_value_t<value_type>> __zz_cib_decl back_30(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const __zz_cib_::return_value_t<value_type>>(
      __zz_cib_obj->::std::vector<::std::list<::C*>>::back()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_back_31(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::std::vector<::std::list<::C*>>::value_type&> __x) {
    __zz_cib_obj->::std::vector<::std::list<::C*>>::push_back(
      __zz_cib_::__zz_cib_FromAbiType<const ::std::vector<::std::list<::C*>>::value_type&>(__x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_back_32(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>::value_type&&> __x) {
    __zz_cib_obj->::std::vector<::std::list<::C*>>::push_back(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::std::list<::C*>>::value_type&&>(__x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl pop_back_33(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::vector<::std::list<::C*>>::pop_back();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl swap_34(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>&> __x) {
    __zz_cib_obj->::std::vector<::std::list<::C*>>::swap(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::std::list<::C*>>&>(__x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl clear_35(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::vector<::std::list<::C*>>::clear();
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class261 {
using namespace ::std;
namespace __zz_cib_Class282 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::__zz_cib_new_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::__zz_cib_new_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::__zz_cib_copy_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::__zz_cib_new_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::__zz_cib_delete_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::__zz_cib_OperatorEqual_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::__zz_cib_OperatorEqual_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::assign_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::begin_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::begin_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::end_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::end_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::rbegin_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::rbegin_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::rend_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::rend_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::cbegin_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::cend_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::crbegin_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::crend_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::size_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::max_size_21),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::resize_22),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::shrink_to_fit_23),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::capacity_24),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::empty_25),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::reserve_26),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::__zz_cib_OperatorIndex_27),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::at_28),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::front_29),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::back_30),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::push_back_31),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::push_back_32),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::pop_back_33),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::swap_34),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::clear_35)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 36 };
  return &methodTable;
}
}}}
