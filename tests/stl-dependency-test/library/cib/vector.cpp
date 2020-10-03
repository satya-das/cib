#include "__zz_cib_stl-helpers/__zz_cib_vector-iterator.h"
#include "file-defining-class.h"
#include <vector>

#include "__zz_cib_StlDependencyTest-class-down-cast.h"
#include "__zz_cib_StlDependencyTest-delegate-helper.h"
#include "__zz_cib_StlDependencyTest-generic.h"
#include "__zz_cib_StlDependencyTest-ids.h"
#include "__zz_cib_StlDependencyTest-library-type-converters.h"
#include "__zz_cib_StlDependencyTest-mtable-helper.h"

namespace __zz_cib_ {
using namespace ::std;
template <>
struct __zz_cib_Delegator<::std::vector<::ExampleClass*>> : public ::std::vector<::ExampleClass*> {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::std::vector<::ExampleClass*>>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::std::vector<::ExampleClass*>::vector;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_0() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_1(__zz_cib_AbiType_t<::std::vector<::ExampleClass*>::size_type> n) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::std::vector<::ExampleClass*>::size_type>(n));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_2(__zz_cib_AbiType_t<::std::vector<::ExampleClass*>::size_type> n, __zz_cib_AbiType_t<::ExampleClass* const&> value) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::std::vector<::ExampleClass*>::size_type>(n),
    __zz_cib_::__zz_cib_FromAbiType<::ExampleClass* const&>(value));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_copy_3(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_4(__zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(std::move(*__zz_cib_obj));
  }
  static void __zz_cib_decl __zz_cib_delete_5(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<::std::vector<::ExampleClass*>&> __zz_cib_decl __zz_cib_OperatorEqual_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::std::vector<::ExampleClass*>&> x) {
    return __zz_cib_ToAbiType<::std::vector<::ExampleClass*>&>(
      __zz_cib_obj->::std::vector<::ExampleClass*>::operator=(
        __zz_cib_::__zz_cib_FromAbiType<const ::std::vector<::ExampleClass*>&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::ExampleClass*>&> __zz_cib_decl __zz_cib_OperatorEqual_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::ExampleClass*>&&> x) {
    return __zz_cib_ToAbiType<::std::vector<::ExampleClass*>&>(
      __zz_cib_obj->::std::vector<::ExampleClass*>::operator=(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::ExampleClass*>&&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl assign_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::ExampleClass*>::size_type> n, __zz_cib_AbiType_t<::ExampleClass* const&> u) {
    __zz_cib_obj->::std::vector<::ExampleClass*>::assign(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::ExampleClass*>::size_type>(n),
      __zz_cib_::__zz_cib_FromAbiType<::ExampleClass* const&>(u)
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::ExampleClass*>::iterator> __zz_cib_decl begin_9(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::ExampleClass*>::iterator>(
      __zz_cib_obj->::std::vector<::ExampleClass*>::begin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::ExampleClass*>::const_iterator> __zz_cib_decl begin_10(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::ExampleClass*>::const_iterator>(
      __zz_cib_obj->::std::vector<::ExampleClass*>::begin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::ExampleClass*>::iterator> __zz_cib_decl end_11(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::ExampleClass*>::iterator>(
      __zz_cib_obj->::std::vector<::ExampleClass*>::end()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::ExampleClass*>::const_iterator> __zz_cib_decl end_12(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::ExampleClass*>::const_iterator>(
      __zz_cib_obj->::std::vector<::ExampleClass*>::end()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::ExampleClass*>::reverse_iterator> __zz_cib_decl rbegin_13(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::ExampleClass*>::reverse_iterator>(
      __zz_cib_obj->::std::vector<::ExampleClass*>::rbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::ExampleClass*>::const_reverse_iterator> __zz_cib_decl rbegin_14(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::ExampleClass*>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::ExampleClass*>::rbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::ExampleClass*>::reverse_iterator> __zz_cib_decl rend_15(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::ExampleClass*>::reverse_iterator>(
      __zz_cib_obj->::std::vector<::ExampleClass*>::rend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::ExampleClass*>::const_reverse_iterator> __zz_cib_decl rend_16(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::ExampleClass*>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::ExampleClass*>::rend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::ExampleClass*>::const_iterator> __zz_cib_decl cbegin_17(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::ExampleClass*>::const_iterator>(
      __zz_cib_obj->::std::vector<::ExampleClass*>::cbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::ExampleClass*>::const_iterator> __zz_cib_decl cend_18(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::ExampleClass*>::const_iterator>(
      __zz_cib_obj->::std::vector<::ExampleClass*>::cend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::ExampleClass*>::const_reverse_iterator> __zz_cib_decl crbegin_19(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::ExampleClass*>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::ExampleClass*>::crbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::ExampleClass*>::const_reverse_iterator> __zz_cib_decl crend_20(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::ExampleClass*>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::ExampleClass*>::crend()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl empty_21(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::std::vector<::ExampleClass*>::empty()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::ExampleClass*>::size_type> __zz_cib_decl size_22(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::ExampleClass*>::size_type>(
      __zz_cib_obj->::std::vector<::ExampleClass*>::size()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::ExampleClass*>::size_type> __zz_cib_decl max_size_23(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::ExampleClass*>::size_type>(
      __zz_cib_obj->::std::vector<::ExampleClass*>::max_size()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::ExampleClass*>::size_type> __zz_cib_decl capacity_24(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::ExampleClass*>::size_type>(
      __zz_cib_obj->::std::vector<::ExampleClass*>::capacity()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl resize_25(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::ExampleClass*>::size_type> sz) {
    __zz_cib_obj->::std::vector<::ExampleClass*>::resize(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::ExampleClass*>::size_type>(sz)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl resize_26(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::ExampleClass*>::size_type> sz, __zz_cib_AbiType_t<::ExampleClass* const&> c) {
    __zz_cib_obj->::std::vector<::ExampleClass*>::resize(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::ExampleClass*>::size_type>(sz),
      __zz_cib_::__zz_cib_FromAbiType<::ExampleClass* const&>(c)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl reserve_27(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::ExampleClass*>::size_type> n) {
    __zz_cib_obj->::std::vector<::ExampleClass*>::reserve(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::ExampleClass*>::size_type>(n)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl shrink_to_fit_28(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::vector<::ExampleClass*>::shrink_to_fit();
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>::reference> __zz_cib_decl __zz_cib_OperatorIndex_29(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::ExampleClass*>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>::reference>(
      __zz_cib_obj->::std::vector<::ExampleClass*>::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::ExampleClass*>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>::const_reference> __zz_cib_decl __zz_cib_OperatorIndex_30(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::ExampleClass*>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>::const_reference>(
      __zz_cib_obj->::std::vector<::ExampleClass*>::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::ExampleClass*>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>::const_reference> __zz_cib_decl at_31(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::ExampleClass*>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>::const_reference>(
      __zz_cib_obj->::std::vector<::ExampleClass*>::at(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::ExampleClass*>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>::reference> __zz_cib_decl at_32(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::ExampleClass*>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>::reference>(
      __zz_cib_obj->::std::vector<::ExampleClass*>::at(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::ExampleClass*>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>::reference> __zz_cib_decl front_33(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>::reference>(
      __zz_cib_obj->::std::vector<::ExampleClass*>::front()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>::const_reference> __zz_cib_decl front_34(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>::const_reference>(
      __zz_cib_obj->::std::vector<::ExampleClass*>::front()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>::reference> __zz_cib_decl back_35(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>::reference>(
      __zz_cib_obj->::std::vector<::ExampleClass*>::back()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>::const_reference> __zz_cib_decl back_36(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::ExampleClass*>::const_reference>(
      __zz_cib_obj->::std::vector<::ExampleClass*>::back()
    );
  }
  static __zz_cib_AbiType_t<::ExampleClass**> __zz_cib_decl data_37(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::ExampleClass**>(
      __zz_cib_obj->::std::vector<::ExampleClass*>::data()
    );
  }
  static __zz_cib_AbiType_t<::ExampleClass* const *> __zz_cib_decl data_38(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::ExampleClass* const *>(
      __zz_cib_obj->::std::vector<::ExampleClass*>::data()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_back_39(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::ExampleClass* const&> x) {
    __zz_cib_obj->::std::vector<::ExampleClass*>::push_back(
      __zz_cib_::__zz_cib_FromAbiType<::ExampleClass* const&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_back_40(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::ExampleClass*&&> x) {
    __zz_cib_obj->::std::vector<::ExampleClass*>::push_back(
      __zz_cib_::__zz_cib_FromAbiType<::ExampleClass*&&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl pop_back_41(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::vector<::ExampleClass*>::pop_back();
  }
  static __zz_cib_AbiType_t<::std::vector<::ExampleClass*>::iterator> __zz_cib_decl insert_42(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::ExampleClass*>::const_iterator> position, __zz_cib_AbiType_t<::ExampleClass* const&> x) {
    return __zz_cib_ToAbiType<::std::vector<::ExampleClass*>::iterator>(
      __zz_cib_obj->::std::vector<::ExampleClass*>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::ExampleClass*>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<::ExampleClass* const&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::ExampleClass*>::iterator> __zz_cib_decl insert_43(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::ExampleClass*>::const_iterator> position, __zz_cib_AbiType_t<::ExampleClass*&&> x) {
    return __zz_cib_ToAbiType<::std::vector<::ExampleClass*>::iterator>(
      __zz_cib_obj->::std::vector<::ExampleClass*>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::ExampleClass*>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<::ExampleClass*&&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::ExampleClass*>::iterator> __zz_cib_decl insert_44(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::ExampleClass*>::const_iterator> position, __zz_cib_AbiType_t<::std::vector<::ExampleClass*>::size_type> n, __zz_cib_AbiType_t<::ExampleClass* const&> x) {
    return __zz_cib_ToAbiType<::std::vector<::ExampleClass*>::iterator>(
      __zz_cib_obj->::std::vector<::ExampleClass*>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::ExampleClass*>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::ExampleClass*>::size_type>(n),
        __zz_cib_::__zz_cib_FromAbiType<::ExampleClass* const&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::ExampleClass*>::iterator> __zz_cib_decl erase_45(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::ExampleClass*>::const_iterator> position) {
    return __zz_cib_ToAbiType<::std::vector<::ExampleClass*>::iterator>(
      __zz_cib_obj->::std::vector<::ExampleClass*>::erase(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::ExampleClass*>::const_iterator>(position)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::ExampleClass*>::iterator> __zz_cib_decl erase_46(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::ExampleClass*>::const_iterator> first, __zz_cib_AbiType_t<::std::vector<::ExampleClass*>::const_iterator> last) {
    return __zz_cib_ToAbiType<::std::vector<::ExampleClass*>::iterator>(
      __zz_cib_obj->::std::vector<::ExampleClass*>::erase(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::ExampleClass*>::const_iterator>(first),
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::ExampleClass*>::const_iterator>(last)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl swap_47(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::ExampleClass*>&> __zz_cib_param0) {
    __zz_cib_obj->::std::vector<::ExampleClass*>::swap(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::ExampleClass*>&>(__zz_cib_param0)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl clear_48(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::vector<::ExampleClass*>::clear();
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class261 {
using namespace ::std;
namespace __zz_cib_Class262 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::ExampleClass*>>::__zz_cib_new_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::ExampleClass*>>::__zz_cib_new_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::ExampleClass*>>::__zz_cib_new_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::ExampleClass*>>::__zz_cib_copy_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::ExampleClass*>>::__zz_cib_new_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::ExampleClass*>>::__zz_cib_delete_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::ExampleClass*>>::__zz_cib_OperatorEqual_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::ExampleClass*>>::__zz_cib_OperatorEqual_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::ExampleClass*>>::assign_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::ExampleClass*>>::begin_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::ExampleClass*>>::begin_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::ExampleClass*>>::end_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::ExampleClass*>>::end_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::ExampleClass*>>::rbegin_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::ExampleClass*>>::rbegin_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::ExampleClass*>>::rend_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::ExampleClass*>>::rend_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::ExampleClass*>>::cbegin_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::ExampleClass*>>::cend_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::ExampleClass*>>::crbegin_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::ExampleClass*>>::crend_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::ExampleClass*>>::empty_21),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::ExampleClass*>>::size_22),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::ExampleClass*>>::max_size_23),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::ExampleClass*>>::capacity_24),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::ExampleClass*>>::resize_25),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::ExampleClass*>>::resize_26),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::ExampleClass*>>::reserve_27),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::ExampleClass*>>::shrink_to_fit_28),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::ExampleClass*>>::__zz_cib_OperatorIndex_29),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::ExampleClass*>>::__zz_cib_OperatorIndex_30),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::ExampleClass*>>::at_31),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::ExampleClass*>>::at_32),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::ExampleClass*>>::front_33),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::ExampleClass*>>::front_34),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::ExampleClass*>>::back_35),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::ExampleClass*>>::back_36),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::ExampleClass*>>::data_37),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::ExampleClass*>>::data_38),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::ExampleClass*>>::push_back_39),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::ExampleClass*>>::push_back_40),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::ExampleClass*>>::pop_back_41),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::ExampleClass*>>::insert_42),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::ExampleClass*>>::insert_43),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::ExampleClass*>>::insert_44),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::ExampleClass*>>::erase_45),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::ExampleClass*>>::erase_46),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::ExampleClass*>>::swap_47),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::ExampleClass*>>::clear_48)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 49 };
  return &methodTable;
}
}}}
