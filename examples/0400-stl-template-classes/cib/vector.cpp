#include "C.h"
#include "__zz_cib_stl-helpers/__zz_cib_vector-iterator.h"
#include <list>
#include <vector>

#include "__zz_cib_Example-class-down-cast.h"
#include "__zz_cib_Example-delegate-helper.h"
#include "__zz_cib_Example-generic.h"
#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-type-converters.h"
#include "__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_Example-proxy-mgr.h"

namespace __zz_cib_ {
using namespace ::std;
template <>
struct __zz_cib_Delegator<::std::vector<::C*>> : public ::std::vector<::C*> {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::std::vector<::C*>::vector;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<::std::vector<::C*>::size_type> n) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C*>::size_type>(n));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<::std::vector<::C*>::size_type> n, __zz_cib_AbiType_t<::C* const&> value) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C*>::size_type>(n),
    __zz_cib_::__zz_cib_FromAbiType<::C* const&>(value));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_3(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_4(__zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(std::move(*__zz_cib_obj));
  }
  static void __zz_cib_decl __zz_cib_Delete_5(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<::std::vector<::C*>&> __zz_cib_decl __zz_cib_OperatorEqual_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::std::vector<::C*>&> x) {
    return __zz_cib_ToAbiType<::std::vector<::C*>&>(
      __zz_cib_obj->::std::vector<::C*>::operator=(
        __zz_cib_::__zz_cib_FromAbiType<const ::std::vector<::C*>&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C*>&> __zz_cib_decl __zz_cib_OperatorEqual_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::C*>&&> x) {
    return __zz_cib_ToAbiType<::std::vector<::C*>&>(
      __zz_cib_obj->::std::vector<::C*>::operator=(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C*>&&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl assign_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::C*>::size_type> n, __zz_cib_AbiType_t<::C* const&> u) {
    __zz_cib_obj->::std::vector<::C*>::assign(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C*>::size_type>(n),
      __zz_cib_::__zz_cib_FromAbiType<::C* const&>(u)
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C*>::iterator> __zz_cib_decl begin_9(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C*>::iterator>(
      __zz_cib_obj->::std::vector<::C*>::begin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C*>::const_iterator> __zz_cib_decl begin_10(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C*>::const_iterator>(
      __zz_cib_obj->::std::vector<::C*>::begin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C*>::iterator> __zz_cib_decl end_11(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C*>::iterator>(
      __zz_cib_obj->::std::vector<::C*>::end()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C*>::const_iterator> __zz_cib_decl end_12(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C*>::const_iterator>(
      __zz_cib_obj->::std::vector<::C*>::end()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C*>::reverse_iterator> __zz_cib_decl rbegin_13(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C*>::reverse_iterator>(
      __zz_cib_obj->::std::vector<::C*>::rbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C*>::const_reverse_iterator> __zz_cib_decl rbegin_14(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C*>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::C*>::rbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C*>::reverse_iterator> __zz_cib_decl rend_15(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C*>::reverse_iterator>(
      __zz_cib_obj->::std::vector<::C*>::rend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C*>::const_reverse_iterator> __zz_cib_decl rend_16(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C*>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::C*>::rend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C*>::const_iterator> __zz_cib_decl cbegin_17(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C*>::const_iterator>(
      __zz_cib_obj->::std::vector<::C*>::cbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C*>::const_iterator> __zz_cib_decl cend_18(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C*>::const_iterator>(
      __zz_cib_obj->::std::vector<::C*>::cend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C*>::const_reverse_iterator> __zz_cib_decl crbegin_19(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C*>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::C*>::crbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C*>::const_reverse_iterator> __zz_cib_decl crend_20(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C*>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::C*>::crend()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl empty_21(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::std::vector<::C*>::empty()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C*>::size_type> __zz_cib_decl size_22(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C*>::size_type>(
      __zz_cib_obj->::std::vector<::C*>::size()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C*>::size_type> __zz_cib_decl max_size_23(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C*>::size_type>(
      __zz_cib_obj->::std::vector<::C*>::max_size()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C*>::size_type> __zz_cib_decl capacity_24(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C*>::size_type>(
      __zz_cib_obj->::std::vector<::C*>::capacity()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl resize_25(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::C*>::size_type> sz) {
    __zz_cib_obj->::std::vector<::C*>::resize(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C*>::size_type>(sz)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl resize_26(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::C*>::size_type> sz, __zz_cib_AbiType_t<::C* const&> c) {
    __zz_cib_obj->::std::vector<::C*>::resize(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C*>::size_type>(sz),
      __zz_cib_::__zz_cib_FromAbiType<::C* const&>(c)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl reserve_27(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::C*>::size_type> n) {
    __zz_cib_obj->::std::vector<::C*>::reserve(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C*>::size_type>(n)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl shrink_to_fit_28(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::vector<::C*>::shrink_to_fit();
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C*>::reference> __zz_cib_decl __zz_cib_OperatorIndex_29(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::C*>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C*>::reference>(
      __zz_cib_obj->::std::vector<::C*>::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C*>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C*>::const_reference> __zz_cib_decl __zz_cib_OperatorIndex_30(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::C*>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C*>::const_reference>(
      __zz_cib_obj->::std::vector<::C*>::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C*>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C*>::const_reference> __zz_cib_decl at_31(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::C*>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C*>::const_reference>(
      __zz_cib_obj->::std::vector<::C*>::at(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C*>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C*>::reference> __zz_cib_decl at_32(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::C*>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C*>::reference>(
      __zz_cib_obj->::std::vector<::C*>::at(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C*>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C*>::reference> __zz_cib_decl front_33(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C*>::reference>(
      __zz_cib_obj->::std::vector<::C*>::front()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C*>::const_reference> __zz_cib_decl front_34(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C*>::const_reference>(
      __zz_cib_obj->::std::vector<::C*>::front()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C*>::reference> __zz_cib_decl back_35(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C*>::reference>(
      __zz_cib_obj->::std::vector<::C*>::back()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C*>::const_reference> __zz_cib_decl back_36(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C*>::const_reference>(
      __zz_cib_obj->::std::vector<::C*>::back()
    );
  }
  static __zz_cib_AbiType_t<::C**> __zz_cib_decl data_37(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::C**>(
      __zz_cib_obj->::std::vector<::C*>::data()
    );
  }
  static __zz_cib_AbiType_t<::C* const *> __zz_cib_decl data_38(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::C* const *>(
      __zz_cib_obj->::std::vector<::C*>::data()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_back_39(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::C* const&> x) {
    __zz_cib_obj->::std::vector<::C*>::push_back(
      __zz_cib_::__zz_cib_FromAbiType<::C* const&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_back_40(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::C*&&> x) {
    __zz_cib_obj->::std::vector<::C*>::push_back(
      __zz_cib_::__zz_cib_FromAbiType<::C*&&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl pop_back_41(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::vector<::C*>::pop_back();
  }
  static __zz_cib_AbiType_t<::std::vector<::C*>::iterator> __zz_cib_decl insert_42(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::C*>::const_iterator> position, __zz_cib_AbiType_t<::C* const&> x) {
    return __zz_cib_ToAbiType<::std::vector<::C*>::iterator>(
      __zz_cib_obj->::std::vector<::C*>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C*>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<::C* const&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C*>::iterator> __zz_cib_decl insert_43(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::C*>::const_iterator> position, __zz_cib_AbiType_t<::C*&&> x) {
    return __zz_cib_ToAbiType<::std::vector<::C*>::iterator>(
      __zz_cib_obj->::std::vector<::C*>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C*>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<::C*&&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C*>::iterator> __zz_cib_decl insert_44(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::C*>::const_iterator> position, __zz_cib_AbiType_t<::std::vector<::C*>::size_type> n, __zz_cib_AbiType_t<::C* const&> x) {
    return __zz_cib_ToAbiType<::std::vector<::C*>::iterator>(
      __zz_cib_obj->::std::vector<::C*>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C*>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C*>::size_type>(n),
        __zz_cib_::__zz_cib_FromAbiType<::C* const&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C*>::iterator> __zz_cib_decl erase_45(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::C*>::const_iterator> position) {
    return __zz_cib_ToAbiType<::std::vector<::C*>::iterator>(
      __zz_cib_obj->::std::vector<::C*>::erase(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C*>::const_iterator>(position)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C*>::iterator> __zz_cib_decl erase_46(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::C*>::const_iterator> first, __zz_cib_AbiType_t<::std::vector<::C*>::const_iterator> last) {
    return __zz_cib_ToAbiType<::std::vector<::C*>::iterator>(
      __zz_cib_obj->::std::vector<::C*>::erase(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C*>::const_iterator>(first),
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C*>::const_iterator>(last)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl swap_47(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::C*>&> __zz_cib_param0) {
    __zz_cib_obj->::std::vector<::C*>::swap(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C*>&>(__zz_cib_param0)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl clear_48(__zz_cib_Delegatee* __zz_cib_obj) {
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
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::__zz_cib_Copy_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::__zz_cib_New_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::__zz_cib_Delete_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::__zz_cib_OperatorEqual_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::__zz_cib_OperatorEqual_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::assign_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::begin_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::begin_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::end_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::end_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::rbegin_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::rbegin_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::rend_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::rend_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::cbegin_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::cend_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::crbegin_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::crend_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::empty_21),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::size_22),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::max_size_23),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::capacity_24),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::resize_25),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::resize_26),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::reserve_27),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::shrink_to_fit_28),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::__zz_cib_OperatorIndex_29),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::__zz_cib_OperatorIndex_30),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::at_31),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::at_32),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::front_33),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::front_34),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::back_35),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::back_36),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::data_37),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::data_38),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::push_back_39),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::push_back_40),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::pop_back_41),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::insert_42),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::insert_43),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::insert_44),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::erase_45),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::erase_46),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::swap_47),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C*>>::clear_48)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 49 };
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

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<::std::vector<::C>::size_type> n) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C>::size_type>(n));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<::std::vector<::C>::size_type> n, __zz_cib_AbiType_t<const ::C&> value) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C>::size_type>(n),
    __zz_cib_::__zz_cib_FromAbiType<const ::C&>(value));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_3(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_4(__zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(std::move(*__zz_cib_obj));
  }
  static void __zz_cib_decl __zz_cib_Delete_5(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<::std::vector<::C>&> __zz_cib_decl __zz_cib_OperatorEqual_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::std::vector<::C>&> x) {
    return __zz_cib_ToAbiType<::std::vector<::C>&>(
      __zz_cib_obj->::std::vector<::C>::operator=(
        __zz_cib_::__zz_cib_FromAbiType<const ::std::vector<::C>&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C>&> __zz_cib_decl __zz_cib_OperatorEqual_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::C>&&> x) {
    return __zz_cib_ToAbiType<::std::vector<::C>&>(
      __zz_cib_obj->::std::vector<::C>::operator=(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C>&&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl assign_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::C>::size_type> n, __zz_cib_AbiType_t<const ::C&> u) {
    __zz_cib_obj->::std::vector<::C>::assign(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C>::size_type>(n),
      __zz_cib_::__zz_cib_FromAbiType<const ::C&>(u)
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C>::iterator> __zz_cib_decl begin_9(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C>::iterator>(
      __zz_cib_obj->::std::vector<::C>::begin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C>::const_iterator> __zz_cib_decl begin_10(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C>::const_iterator>(
      __zz_cib_obj->::std::vector<::C>::begin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C>::iterator> __zz_cib_decl end_11(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C>::iterator>(
      __zz_cib_obj->::std::vector<::C>::end()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C>::const_iterator> __zz_cib_decl end_12(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C>::const_iterator>(
      __zz_cib_obj->::std::vector<::C>::end()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C>::reverse_iterator> __zz_cib_decl rbegin_13(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C>::reverse_iterator>(
      __zz_cib_obj->::std::vector<::C>::rbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C>::const_reverse_iterator> __zz_cib_decl rbegin_14(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::C>::rbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C>::reverse_iterator> __zz_cib_decl rend_15(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C>::reverse_iterator>(
      __zz_cib_obj->::std::vector<::C>::rend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C>::const_reverse_iterator> __zz_cib_decl rend_16(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::C>::rend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C>::const_iterator> __zz_cib_decl cbegin_17(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C>::const_iterator>(
      __zz_cib_obj->::std::vector<::C>::cbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C>::const_iterator> __zz_cib_decl cend_18(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C>::const_iterator>(
      __zz_cib_obj->::std::vector<::C>::cend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C>::const_reverse_iterator> __zz_cib_decl crbegin_19(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::C>::crbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C>::const_reverse_iterator> __zz_cib_decl crend_20(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::C>::crend()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl empty_21(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::std::vector<::C>::empty()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C>::size_type> __zz_cib_decl size_22(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C>::size_type>(
      __zz_cib_obj->::std::vector<::C>::size()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C>::size_type> __zz_cib_decl max_size_23(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C>::size_type>(
      __zz_cib_obj->::std::vector<::C>::max_size()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C>::size_type> __zz_cib_decl capacity_24(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::C>::size_type>(
      __zz_cib_obj->::std::vector<::C>::capacity()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl resize_25(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::C>::size_type> sz) {
    __zz_cib_obj->::std::vector<::C>::resize(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C>::size_type>(sz)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl resize_26(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::C>::size_type> sz, __zz_cib_AbiType_t<const ::C&> c) {
    __zz_cib_obj->::std::vector<::C>::resize(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C>::size_type>(sz),
      __zz_cib_::__zz_cib_FromAbiType<const ::C&>(c)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl reserve_27(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::C>::size_type> n) {
    __zz_cib_obj->::std::vector<::C>::reserve(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C>::size_type>(n)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl shrink_to_fit_28(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::vector<::C>::shrink_to_fit();
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C>::reference> __zz_cib_decl __zz_cib_OperatorIndex_29(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::C>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C>::reference>(
      __zz_cib_obj->::std::vector<::C>::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C>::const_reference> __zz_cib_decl __zz_cib_OperatorIndex_30(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::C>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C>::const_reference>(
      __zz_cib_obj->::std::vector<::C>::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C>::const_reference> __zz_cib_decl at_31(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::C>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C>::const_reference>(
      __zz_cib_obj->::std::vector<::C>::at(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C>::reference> __zz_cib_decl at_32(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::C>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C>::reference>(
      __zz_cib_obj->::std::vector<::C>::at(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C>::reference> __zz_cib_decl front_33(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C>::reference>(
      __zz_cib_obj->::std::vector<::C>::front()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C>::const_reference> __zz_cib_decl front_34(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C>::const_reference>(
      __zz_cib_obj->::std::vector<::C>::front()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C>::reference> __zz_cib_decl back_35(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C>::reference>(
      __zz_cib_obj->::std::vector<::C>::back()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::C>::const_reference> __zz_cib_decl back_36(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::C>::const_reference>(
      __zz_cib_obj->::std::vector<::C>::back()
    );
  }
  static __zz_cib_AbiType_t<::C*> __zz_cib_decl data_37(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::C*>(
      __zz_cib_obj->::std::vector<::C>::data()
    );
  }
  static __zz_cib_AbiType_t<const ::C*> __zz_cib_decl data_38(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::C*>(
      __zz_cib_obj->::std::vector<::C>::data()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_back_39(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::C&> x) {
    __zz_cib_obj->::std::vector<::C>::push_back(
      __zz_cib_::__zz_cib_FromAbiType<const ::C&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_back_40(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::C&&> x) {
    __zz_cib_obj->::std::vector<::C>::push_back(
      __zz_cib_::__zz_cib_FromAbiType<::C&&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl pop_back_41(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::vector<::C>::pop_back();
  }
  static __zz_cib_AbiType_t<::std::vector<::C>::iterator> __zz_cib_decl insert_42(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::C>::const_iterator> position, __zz_cib_AbiType_t<const ::C&> x) {
    return __zz_cib_ToAbiType<::std::vector<::C>::iterator>(
      __zz_cib_obj->::std::vector<::C>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<const ::C&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C>::iterator> __zz_cib_decl insert_43(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::C>::const_iterator> position, __zz_cib_AbiType_t<::C&&> x) {
    return __zz_cib_ToAbiType<::std::vector<::C>::iterator>(
      __zz_cib_obj->::std::vector<::C>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<::C&&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C>::iterator> __zz_cib_decl insert_44(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::C>::const_iterator> position, __zz_cib_AbiType_t<::std::vector<::C>::size_type> n, __zz_cib_AbiType_t<const ::C&> x) {
    return __zz_cib_ToAbiType<::std::vector<::C>::iterator>(
      __zz_cib_obj->::std::vector<::C>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C>::size_type>(n),
        __zz_cib_::__zz_cib_FromAbiType<const ::C&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C>::iterator> __zz_cib_decl erase_45(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::C>::const_iterator> position) {
    return __zz_cib_ToAbiType<::std::vector<::C>::iterator>(
      __zz_cib_obj->::std::vector<::C>::erase(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C>::const_iterator>(position)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::C>::iterator> __zz_cib_decl erase_46(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::C>::const_iterator> first, __zz_cib_AbiType_t<::std::vector<::C>::const_iterator> last) {
    return __zz_cib_ToAbiType<::std::vector<::C>::iterator>(
      __zz_cib_obj->::std::vector<::C>::erase(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C>::const_iterator>(first),
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C>::const_iterator>(last)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl swap_47(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::C>&> __zz_cib_param0) {
    __zz_cib_obj->::std::vector<::C>::swap(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::C>&>(__zz_cib_param0)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl clear_48(__zz_cib_Delegatee* __zz_cib_obj) {
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
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::__zz_cib_Copy_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::__zz_cib_New_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::__zz_cib_Delete_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::__zz_cib_OperatorEqual_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::__zz_cib_OperatorEqual_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::assign_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::begin_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::begin_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::end_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::end_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::rbegin_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::rbegin_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::rend_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::rend_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::cbegin_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::cend_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::crbegin_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::crend_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::empty_21),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::size_22),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::max_size_23),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::capacity_24),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::resize_25),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::resize_26),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::reserve_27),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::shrink_to_fit_28),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::__zz_cib_OperatorIndex_29),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::__zz_cib_OperatorIndex_30),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::at_31),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::at_32),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::front_33),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::front_34),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::back_35),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::back_36),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::data_37),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::data_38),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::push_back_39),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::push_back_40),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::pop_back_41),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::insert_42),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::insert_43),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::insert_44),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::erase_45),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::erase_46),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::swap_47),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::C>>::clear_48)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 49 };
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

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<::std::vector<::std::list<::C*>>::size_type> n) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::std::vector<::std::list<::C*>>::size_type>(n));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<::std::vector<::std::list<::C*>>::size_type> n, __zz_cib_AbiType_t<const ::std::list<::C*>&> value) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::std::vector<::std::list<::C*>>::size_type>(n),
    __zz_cib_::__zz_cib_FromAbiType<const ::std::list<::C*>&>(value));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_3(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_4(__zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(std::move(*__zz_cib_obj));
  }
  static void __zz_cib_decl __zz_cib_Delete_5(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>&> __zz_cib_decl __zz_cib_OperatorEqual_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::std::vector<::std::list<::C*>>&> x) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::C*>>&>(
      __zz_cib_obj->::std::vector<::std::list<::C*>>::operator=(
        __zz_cib_::__zz_cib_FromAbiType<const ::std::vector<::std::list<::C*>>&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>&> __zz_cib_decl __zz_cib_OperatorEqual_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>&&> x) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::C*>>&>(
      __zz_cib_obj->::std::vector<::std::list<::C*>>::operator=(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::std::list<::C*>>&&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl assign_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>::size_type> n, __zz_cib_AbiType_t<const ::std::list<::C*>&> u) {
    __zz_cib_obj->::std::vector<::std::list<::C*>>::assign(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::std::list<::C*>>::size_type>(n),
      __zz_cib_::__zz_cib_FromAbiType<const ::std::list<::C*>&>(u)
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>::iterator> __zz_cib_decl begin_9(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::C*>>::iterator>(
      __zz_cib_obj->::std::vector<::std::list<::C*>>::begin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>::const_iterator> __zz_cib_decl begin_10(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::C*>>::const_iterator>(
      __zz_cib_obj->::std::vector<::std::list<::C*>>::begin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>::iterator> __zz_cib_decl end_11(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::C*>>::iterator>(
      __zz_cib_obj->::std::vector<::std::list<::C*>>::end()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>::const_iterator> __zz_cib_decl end_12(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::C*>>::const_iterator>(
      __zz_cib_obj->::std::vector<::std::list<::C*>>::end()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>::reverse_iterator> __zz_cib_decl rbegin_13(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::C*>>::reverse_iterator>(
      __zz_cib_obj->::std::vector<::std::list<::C*>>::rbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>::const_reverse_iterator> __zz_cib_decl rbegin_14(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::C*>>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::std::list<::C*>>::rbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>::reverse_iterator> __zz_cib_decl rend_15(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::C*>>::reverse_iterator>(
      __zz_cib_obj->::std::vector<::std::list<::C*>>::rend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>::const_reverse_iterator> __zz_cib_decl rend_16(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::C*>>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::std::list<::C*>>::rend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>::const_iterator> __zz_cib_decl cbegin_17(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::C*>>::const_iterator>(
      __zz_cib_obj->::std::vector<::std::list<::C*>>::cbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>::const_iterator> __zz_cib_decl cend_18(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::C*>>::const_iterator>(
      __zz_cib_obj->::std::vector<::std::list<::C*>>::cend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>::const_reverse_iterator> __zz_cib_decl crbegin_19(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::C*>>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::std::list<::C*>>::crbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>::const_reverse_iterator> __zz_cib_decl crend_20(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::C*>>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::std::list<::C*>>::crend()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl empty_21(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::std::vector<::std::list<::C*>>::empty()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>::size_type> __zz_cib_decl size_22(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::C*>>::size_type>(
      __zz_cib_obj->::std::vector<::std::list<::C*>>::size()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>::size_type> __zz_cib_decl max_size_23(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::C*>>::size_type>(
      __zz_cib_obj->::std::vector<::std::list<::C*>>::max_size()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>::size_type> __zz_cib_decl capacity_24(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::C*>>::size_type>(
      __zz_cib_obj->::std::vector<::std::list<::C*>>::capacity()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl resize_25(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>::size_type> sz) {
    __zz_cib_obj->::std::vector<::std::list<::C*>>::resize(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::std::list<::C*>>::size_type>(sz)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl resize_26(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>::size_type> sz, __zz_cib_AbiType_t<const ::std::list<::C*>&> c) {
    __zz_cib_obj->::std::vector<::std::list<::C*>>::resize(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::std::list<::C*>>::size_type>(sz),
      __zz_cib_::__zz_cib_FromAbiType<const ::std::list<::C*>&>(c)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl reserve_27(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>::size_type> n) {
    __zz_cib_obj->::std::vector<::std::list<::C*>>::reserve(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::std::list<::C*>>::size_type>(n)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl shrink_to_fit_28(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::vector<::std::list<::C*>>::shrink_to_fit();
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>::reference> __zz_cib_decl __zz_cib_OperatorIndex_29(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>::reference>(
      __zz_cib_obj->::std::vector<::std::list<::C*>>::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::std::list<::C*>>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>::const_reference> __zz_cib_decl __zz_cib_OperatorIndex_30(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>::const_reference>(
      __zz_cib_obj->::std::vector<::std::list<::C*>>::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::std::list<::C*>>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>::const_reference> __zz_cib_decl at_31(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>::const_reference>(
      __zz_cib_obj->::std::vector<::std::list<::C*>>::at(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::std::list<::C*>>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>::reference> __zz_cib_decl at_32(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>::reference>(
      __zz_cib_obj->::std::vector<::std::list<::C*>>::at(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::std::list<::C*>>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>::reference> __zz_cib_decl front_33(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>::reference>(
      __zz_cib_obj->::std::vector<::std::list<::C*>>::front()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>::const_reference> __zz_cib_decl front_34(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>::const_reference>(
      __zz_cib_obj->::std::vector<::std::list<::C*>>::front()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>::reference> __zz_cib_decl back_35(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>::reference>(
      __zz_cib_obj->::std::vector<::std::list<::C*>>::back()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>::const_reference> __zz_cib_decl back_36(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::std::list<::C*>>::const_reference>(
      __zz_cib_obj->::std::vector<::std::list<::C*>>::back()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::C*>*> __zz_cib_decl data_37(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::C*>*>(
      __zz_cib_obj->::std::vector<::std::list<::C*>>::data()
    );
  }
  static __zz_cib_AbiType_t<const ::std::list<::C*>*> __zz_cib_decl data_38(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::std::list<::C*>*>(
      __zz_cib_obj->::std::vector<::std::list<::C*>>::data()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_back_39(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::std::list<::C*>&> x) {
    __zz_cib_obj->::std::vector<::std::list<::C*>>::push_back(
      __zz_cib_::__zz_cib_FromAbiType<const ::std::list<::C*>&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_back_40(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::C*>&&> x) {
    __zz_cib_obj->::std::vector<::std::list<::C*>>::push_back(
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::C*>&&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl pop_back_41(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::vector<::std::list<::C*>>::pop_back();
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>::iterator> __zz_cib_decl insert_42(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>::const_iterator> position, __zz_cib_AbiType_t<const ::std::list<::C*>&> x) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::C*>>::iterator>(
      __zz_cib_obj->::std::vector<::std::list<::C*>>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::std::list<::C*>>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<const ::std::list<::C*>&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>::iterator> __zz_cib_decl insert_43(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>::const_iterator> position, __zz_cib_AbiType_t<::std::list<::C*>&&> x) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::C*>>::iterator>(
      __zz_cib_obj->::std::vector<::std::list<::C*>>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::std::list<::C*>>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<::std::list<::C*>&&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>::iterator> __zz_cib_decl insert_44(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>::const_iterator> position, __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>::size_type> n, __zz_cib_AbiType_t<const ::std::list<::C*>&> x) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::C*>>::iterator>(
      __zz_cib_obj->::std::vector<::std::list<::C*>>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::std::list<::C*>>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::std::list<::C*>>::size_type>(n),
        __zz_cib_::__zz_cib_FromAbiType<const ::std::list<::C*>&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>::iterator> __zz_cib_decl erase_45(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>::const_iterator> position) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::C*>>::iterator>(
      __zz_cib_obj->::std::vector<::std::list<::C*>>::erase(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::std::list<::C*>>::const_iterator>(position)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>::iterator> __zz_cib_decl erase_46(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>::const_iterator> first, __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>::const_iterator> last) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::C*>>::iterator>(
      __zz_cib_obj->::std::vector<::std::list<::C*>>::erase(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::std::list<::C*>>::const_iterator>(first),
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::std::list<::C*>>::const_iterator>(last)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl swap_47(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::std::list<::C*>>&> __zz_cib_param0) {
    __zz_cib_obj->::std::vector<::std::list<::C*>>::swap(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::std::list<::C*>>&>(__zz_cib_param0)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl clear_48(__zz_cib_Delegatee* __zz_cib_obj) {
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
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::__zz_cib_Copy_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::__zz_cib_New_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::__zz_cib_Delete_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::__zz_cib_OperatorEqual_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::__zz_cib_OperatorEqual_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::assign_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::begin_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::begin_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::end_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::end_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::rbegin_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::rbegin_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::rend_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::rend_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::cbegin_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::cend_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::crbegin_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::crend_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::empty_21),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::size_22),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::max_size_23),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::capacity_24),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::resize_25),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::resize_26),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::reserve_27),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::shrink_to_fit_28),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::__zz_cib_OperatorIndex_29),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::__zz_cib_OperatorIndex_30),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::at_31),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::at_32),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::front_33),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::front_34),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::back_35),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::back_36),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::data_37),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::data_38),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::push_back_39),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::push_back_40),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::pop_back_41),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::insert_42),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::insert_43),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::insert_44),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::erase_45),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::erase_46),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::swap_47),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::C*>>>::clear_48)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 49 };
  return &methodTable;
}
}}}
