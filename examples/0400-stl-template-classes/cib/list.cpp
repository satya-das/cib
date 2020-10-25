#include "C.h"
#include <list>

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
struct __zz_cib_Delegator<::std::list<::C*>> : public ::std::list<::C*> {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::std::list<::C*>>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::std::list<::C*>::list;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<::std::list<::C*>::size_type> n) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::std::list<::C*>::size_type>(n));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<::std::list<::C*>::size_type> n, __zz_cib_AbiType_t<::C* const&> value) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::std::list<::C*>::size_type>(n),
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
  static __zz_cib_AbiType_t<::std::list<::C*>&> __zz_cib_decl __zz_cib_OperatorEqual_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::std::list<::C*>&> x) {
    return __zz_cib_ToAbiType<::std::list<::C*>&>(
      __zz_cib_obj->::std::list<::C*>::operator=(
        __zz_cib_::__zz_cib_FromAbiType<const ::std::list<::C*>&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::list<::C*>&> __zz_cib_decl __zz_cib_OperatorEqual_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::C*>&&> x) {
    return __zz_cib_ToAbiType<::std::list<::C*>&>(
      __zz_cib_obj->::std::list<::C*>::operator=(
        __zz_cib_::__zz_cib_FromAbiType<::std::list<::C*>&&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl assign_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::C*>::size_type> n, __zz_cib_AbiType_t<::C* const&> t) {
    __zz_cib_obj->::std::list<::C*>::assign(
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::C*>::size_type>(n),
      __zz_cib_::__zz_cib_FromAbiType<::C* const&>(t)
    );
  }
  static __zz_cib_AbiType_t<::std::list<::C*>::iterator> __zz_cib_decl begin_9(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::C*>::iterator>(
      __zz_cib_obj->::std::list<::C*>::begin()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::C*>::const_iterator> __zz_cib_decl begin_10(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::C*>::const_iterator>(
      __zz_cib_obj->::std::list<::C*>::begin()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::C*>::iterator> __zz_cib_decl end_11(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::C*>::iterator>(
      __zz_cib_obj->::std::list<::C*>::end()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::C*>::const_iterator> __zz_cib_decl end_12(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::C*>::const_iterator>(
      __zz_cib_obj->::std::list<::C*>::end()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::C*>::reverse_iterator> __zz_cib_decl rbegin_13(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::C*>::reverse_iterator>(
      __zz_cib_obj->::std::list<::C*>::rbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::C*>::const_reverse_iterator> __zz_cib_decl rbegin_14(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::C*>::const_reverse_iterator>(
      __zz_cib_obj->::std::list<::C*>::rbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::C*>::reverse_iterator> __zz_cib_decl rend_15(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::C*>::reverse_iterator>(
      __zz_cib_obj->::std::list<::C*>::rend()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::C*>::const_reverse_iterator> __zz_cib_decl rend_16(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::C*>::const_reverse_iterator>(
      __zz_cib_obj->::std::list<::C*>::rend()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::C*>::const_iterator> __zz_cib_decl cbegin_17(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::C*>::const_iterator>(
      __zz_cib_obj->::std::list<::C*>::cbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::C*>::const_iterator> __zz_cib_decl cend_18(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::C*>::const_iterator>(
      __zz_cib_obj->::std::list<::C*>::cend()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::C*>::const_reverse_iterator> __zz_cib_decl crbegin_19(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::C*>::const_reverse_iterator>(
      __zz_cib_obj->::std::list<::C*>::crbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::C*>::const_reverse_iterator> __zz_cib_decl crend_20(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::C*>::const_reverse_iterator>(
      __zz_cib_obj->::std::list<::C*>::crend()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl empty_21(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::std::list<::C*>::empty()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::C*>::size_type> __zz_cib_decl size_22(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::C*>::size_type>(
      __zz_cib_obj->::std::list<::C*>::size()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::C*>::size_type> __zz_cib_decl max_size_23(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::C*>::size_type>(
      __zz_cib_obj->::std::list<::C*>::max_size()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl resize_24(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::C*>::size_type> sz) {
    __zz_cib_obj->::std::list<::C*>::resize(
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::C*>::size_type>(sz)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl resize_25(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::C*>::size_type> sz, __zz_cib_AbiType_t<::C* const&> c) {
    __zz_cib_obj->::std::list<::C*>::resize(
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::C*>::size_type>(sz),
      __zz_cib_::__zz_cib_FromAbiType<::C* const&>(c)
    );
  }
  static __zz_cib_AbiType_t<::std::list<::C*>::reference> __zz_cib_decl front_26(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::C*>::reference>(
      __zz_cib_obj->::std::list<::C*>::front()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::C*>::const_reference> __zz_cib_decl front_27(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::C*>::const_reference>(
      __zz_cib_obj->::std::list<::C*>::front()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::C*>::reference> __zz_cib_decl back_28(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::C*>::reference>(
      __zz_cib_obj->::std::list<::C*>::back()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::C*>::const_reference> __zz_cib_decl back_29(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::C*>::const_reference>(
      __zz_cib_obj->::std::list<::C*>::back()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_front_30(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::C* const&> x) {
    __zz_cib_obj->::std::list<::C*>::push_front(
      __zz_cib_::__zz_cib_FromAbiType<::C* const&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_front_31(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::C*&&> x) {
    __zz_cib_obj->::std::list<::C*>::push_front(
      __zz_cib_::__zz_cib_FromAbiType<::C*&&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl pop_front_32(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::list<::C*>::pop_front();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_back_33(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::C* const&> x) {
    __zz_cib_obj->::std::list<::C*>::push_back(
      __zz_cib_::__zz_cib_FromAbiType<::C* const&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_back_34(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::C*&&> x) {
    __zz_cib_obj->::std::list<::C*>::push_back(
      __zz_cib_::__zz_cib_FromAbiType<::C*&&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl pop_back_35(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::list<::C*>::pop_back();
  }
  static __zz_cib_AbiType_t<::std::list<::C*>::iterator> __zz_cib_decl insert_36(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::C*>::const_iterator> position, __zz_cib_AbiType_t<::C* const&> x) {
    return __zz_cib_ToAbiType<::std::list<::C*>::iterator>(
      __zz_cib_obj->::std::list<::C*>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::list<::C*>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<::C* const&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::list<::C*>::iterator> __zz_cib_decl insert_37(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::C*>::const_iterator> position, __zz_cib_AbiType_t<::C*&&> x) {
    return __zz_cib_ToAbiType<::std::list<::C*>::iterator>(
      __zz_cib_obj->::std::list<::C*>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::list<::C*>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<::C*&&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::list<::C*>::iterator> __zz_cib_decl insert_38(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::C*>::const_iterator> position, __zz_cib_AbiType_t<::std::list<::C*>::size_type> n, __zz_cib_AbiType_t<::C* const&> x) {
    return __zz_cib_ToAbiType<::std::list<::C*>::iterator>(
      __zz_cib_obj->::std::list<::C*>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::list<::C*>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<::std::list<::C*>::size_type>(n),
        __zz_cib_::__zz_cib_FromAbiType<::C* const&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::list<::C*>::iterator> __zz_cib_decl erase_39(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::C*>::const_iterator> position) {
    return __zz_cib_ToAbiType<::std::list<::C*>::iterator>(
      __zz_cib_obj->::std::list<::C*>::erase(
        __zz_cib_::__zz_cib_FromAbiType<::std::list<::C*>::const_iterator>(position)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::list<::C*>::iterator> __zz_cib_decl erase_40(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::C*>::const_iterator> position, __zz_cib_AbiType_t<::std::list<::C*>::const_iterator> last) {
    return __zz_cib_ToAbiType<::std::list<::C*>::iterator>(
      __zz_cib_obj->::std::list<::C*>::erase(
        __zz_cib_::__zz_cib_FromAbiType<::std::list<::C*>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<::std::list<::C*>::const_iterator>(last)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl swap_41(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::C*>&> __zz_cib_param0) {
    __zz_cib_obj->::std::list<::C*>::swap(
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::C*>&>(__zz_cib_param0)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl clear_42(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::list<::C*>::clear();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl splice_43(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::C*>::const_iterator> position, __zz_cib_AbiType_t<::std::list<::C*>&> x) {
    __zz_cib_obj->::std::list<::C*>::splice(
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::C*>::const_iterator>(position),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::C*>&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl splice_44(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::C*>::const_iterator> position, __zz_cib_AbiType_t<::std::list<::C*>&&> x) {
    __zz_cib_obj->::std::list<::C*>::splice(
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::C*>::const_iterator>(position),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::C*>&&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl splice_45(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::C*>::const_iterator> position, __zz_cib_AbiType_t<::std::list<::C*>&> x, __zz_cib_AbiType_t<::std::list<::C*>::const_iterator> i) {
    __zz_cib_obj->::std::list<::C*>::splice(
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::C*>::const_iterator>(position),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::C*>&>(x),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::C*>::const_iterator>(i)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl splice_46(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::C*>::const_iterator> position, __zz_cib_AbiType_t<::std::list<::C*>&&> x, __zz_cib_AbiType_t<::std::list<::C*>::const_iterator> i) {
    __zz_cib_obj->::std::list<::C*>::splice(
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::C*>::const_iterator>(position),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::C*>&&>(x),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::C*>::const_iterator>(i)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl splice_47(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::C*>::const_iterator> position, __zz_cib_AbiType_t<::std::list<::C*>&> x, __zz_cib_AbiType_t<::std::list<::C*>::const_iterator> first, __zz_cib_AbiType_t<::std::list<::C*>::const_iterator> last) {
    __zz_cib_obj->::std::list<::C*>::splice(
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::C*>::const_iterator>(position),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::C*>&>(x),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::C*>::const_iterator>(first),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::C*>::const_iterator>(last)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl splice_48(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::C*>::const_iterator> position, __zz_cib_AbiType_t<::std::list<::C*>&&> x, __zz_cib_AbiType_t<::std::list<::C*>::const_iterator> first, __zz_cib_AbiType_t<::std::list<::C*>::const_iterator> last) {
    __zz_cib_obj->::std::list<::C*>::splice(
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::C*>::const_iterator>(position),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::C*>&&>(x),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::C*>::const_iterator>(first),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::C*>::const_iterator>(last)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl reverse_49(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::list<::C*>::reverse();
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class261 {
using namespace ::std;
namespace __zz_cib_Class277 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C*>>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C*>>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C*>>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C*>>::__zz_cib_Copy_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C*>>::__zz_cib_New_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C*>>::__zz_cib_Delete_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C*>>::__zz_cib_OperatorEqual_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C*>>::__zz_cib_OperatorEqual_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C*>>::assign_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C*>>::begin_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C*>>::begin_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C*>>::end_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C*>>::end_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C*>>::rbegin_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C*>>::rbegin_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C*>>::rend_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C*>>::rend_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C*>>::cbegin_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C*>>::cend_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C*>>::crbegin_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C*>>::crend_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C*>>::empty_21),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C*>>::size_22),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C*>>::max_size_23),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C*>>::resize_24),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C*>>::resize_25),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C*>>::front_26),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C*>>::front_27),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C*>>::back_28),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C*>>::back_29),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C*>>::push_front_30),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C*>>::push_front_31),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C*>>::pop_front_32),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C*>>::push_back_33),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C*>>::push_back_34),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C*>>::pop_back_35),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C*>>::insert_36),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C*>>::insert_37),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C*>>::insert_38),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C*>>::erase_39),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C*>>::erase_40),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C*>>::swap_41),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C*>>::clear_42),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C*>>::splice_43),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C*>>::splice_44),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C*>>::splice_45),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C*>>::splice_46),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C*>>::splice_47),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C*>>::splice_48),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C*>>::reverse_49)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 50 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::std;
template <>
struct __zz_cib_Delegator<::std::list<::C>> : public ::std::list<::C> {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::std::list<::C>>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::std::list<::C>::list;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<::std::list<::C>::size_type> n) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::std::list<::C>::size_type>(n));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<::std::list<::C>::size_type> n, __zz_cib_AbiType_t<const ::C&> value) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::std::list<::C>::size_type>(n),
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
  static __zz_cib_AbiType_t<::std::list<::C>&> __zz_cib_decl __zz_cib_OperatorEqual_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::std::list<::C>&> x) {
    return __zz_cib_ToAbiType<::std::list<::C>&>(
      __zz_cib_obj->::std::list<::C>::operator=(
        __zz_cib_::__zz_cib_FromAbiType<const ::std::list<::C>&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::list<::C>&> __zz_cib_decl __zz_cib_OperatorEqual_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::C>&&> x) {
    return __zz_cib_ToAbiType<::std::list<::C>&>(
      __zz_cib_obj->::std::list<::C>::operator=(
        __zz_cib_::__zz_cib_FromAbiType<::std::list<::C>&&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl assign_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::C>::size_type> n, __zz_cib_AbiType_t<const ::C&> t) {
    __zz_cib_obj->::std::list<::C>::assign(
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::C>::size_type>(n),
      __zz_cib_::__zz_cib_FromAbiType<const ::C&>(t)
    );
  }
  static __zz_cib_AbiType_t<::std::list<::C>::iterator> __zz_cib_decl begin_9(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::C>::iterator>(
      __zz_cib_obj->::std::list<::C>::begin()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::C>::const_iterator> __zz_cib_decl begin_10(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::C>::const_iterator>(
      __zz_cib_obj->::std::list<::C>::begin()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::C>::iterator> __zz_cib_decl end_11(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::C>::iterator>(
      __zz_cib_obj->::std::list<::C>::end()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::C>::const_iterator> __zz_cib_decl end_12(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::C>::const_iterator>(
      __zz_cib_obj->::std::list<::C>::end()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::C>::reverse_iterator> __zz_cib_decl rbegin_13(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::C>::reverse_iterator>(
      __zz_cib_obj->::std::list<::C>::rbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::C>::const_reverse_iterator> __zz_cib_decl rbegin_14(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::C>::const_reverse_iterator>(
      __zz_cib_obj->::std::list<::C>::rbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::C>::reverse_iterator> __zz_cib_decl rend_15(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::C>::reverse_iterator>(
      __zz_cib_obj->::std::list<::C>::rend()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::C>::const_reverse_iterator> __zz_cib_decl rend_16(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::C>::const_reverse_iterator>(
      __zz_cib_obj->::std::list<::C>::rend()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::C>::const_iterator> __zz_cib_decl cbegin_17(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::C>::const_iterator>(
      __zz_cib_obj->::std::list<::C>::cbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::C>::const_iterator> __zz_cib_decl cend_18(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::C>::const_iterator>(
      __zz_cib_obj->::std::list<::C>::cend()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::C>::const_reverse_iterator> __zz_cib_decl crbegin_19(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::C>::const_reverse_iterator>(
      __zz_cib_obj->::std::list<::C>::crbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::C>::const_reverse_iterator> __zz_cib_decl crend_20(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::C>::const_reverse_iterator>(
      __zz_cib_obj->::std::list<::C>::crend()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl empty_21(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::std::list<::C>::empty()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::C>::size_type> __zz_cib_decl size_22(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::C>::size_type>(
      __zz_cib_obj->::std::list<::C>::size()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::C>::size_type> __zz_cib_decl max_size_23(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::C>::size_type>(
      __zz_cib_obj->::std::list<::C>::max_size()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl resize_24(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::C>::size_type> sz) {
    __zz_cib_obj->::std::list<::C>::resize(
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::C>::size_type>(sz)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl resize_25(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::C>::size_type> sz, __zz_cib_AbiType_t<const ::C&> c) {
    __zz_cib_obj->::std::list<::C>::resize(
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::C>::size_type>(sz),
      __zz_cib_::__zz_cib_FromAbiType<const ::C&>(c)
    );
  }
  static __zz_cib_AbiType_t<::std::list<::C>::reference> __zz_cib_decl front_26(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::C>::reference>(
      __zz_cib_obj->::std::list<::C>::front()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::C>::const_reference> __zz_cib_decl front_27(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::C>::const_reference>(
      __zz_cib_obj->::std::list<::C>::front()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::C>::reference> __zz_cib_decl back_28(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::C>::reference>(
      __zz_cib_obj->::std::list<::C>::back()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::C>::const_reference> __zz_cib_decl back_29(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::C>::const_reference>(
      __zz_cib_obj->::std::list<::C>::back()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_front_30(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::C&> x) {
    __zz_cib_obj->::std::list<::C>::push_front(
      __zz_cib_::__zz_cib_FromAbiType<const ::C&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_front_31(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::C&&> x) {
    __zz_cib_obj->::std::list<::C>::push_front(
      __zz_cib_::__zz_cib_FromAbiType<::C&&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl pop_front_32(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::list<::C>::pop_front();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_back_33(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::C&> x) {
    __zz_cib_obj->::std::list<::C>::push_back(
      __zz_cib_::__zz_cib_FromAbiType<const ::C&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_back_34(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::C&&> x) {
    __zz_cib_obj->::std::list<::C>::push_back(
      __zz_cib_::__zz_cib_FromAbiType<::C&&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl pop_back_35(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::list<::C>::pop_back();
  }
  static __zz_cib_AbiType_t<::std::list<::C>::iterator> __zz_cib_decl insert_36(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::C>::const_iterator> position, __zz_cib_AbiType_t<const ::C&> x) {
    return __zz_cib_ToAbiType<::std::list<::C>::iterator>(
      __zz_cib_obj->::std::list<::C>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::list<::C>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<const ::C&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::list<::C>::iterator> __zz_cib_decl insert_37(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::C>::const_iterator> position, __zz_cib_AbiType_t<::C&&> x) {
    return __zz_cib_ToAbiType<::std::list<::C>::iterator>(
      __zz_cib_obj->::std::list<::C>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::list<::C>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<::C&&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::list<::C>::iterator> __zz_cib_decl insert_38(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::C>::const_iterator> position, __zz_cib_AbiType_t<::std::list<::C>::size_type> n, __zz_cib_AbiType_t<const ::C&> x) {
    return __zz_cib_ToAbiType<::std::list<::C>::iterator>(
      __zz_cib_obj->::std::list<::C>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::list<::C>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<::std::list<::C>::size_type>(n),
        __zz_cib_::__zz_cib_FromAbiType<const ::C&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::list<::C>::iterator> __zz_cib_decl erase_39(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::C>::const_iterator> position) {
    return __zz_cib_ToAbiType<::std::list<::C>::iterator>(
      __zz_cib_obj->::std::list<::C>::erase(
        __zz_cib_::__zz_cib_FromAbiType<::std::list<::C>::const_iterator>(position)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::list<::C>::iterator> __zz_cib_decl erase_40(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::C>::const_iterator> position, __zz_cib_AbiType_t<::std::list<::C>::const_iterator> last) {
    return __zz_cib_ToAbiType<::std::list<::C>::iterator>(
      __zz_cib_obj->::std::list<::C>::erase(
        __zz_cib_::__zz_cib_FromAbiType<::std::list<::C>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<::std::list<::C>::const_iterator>(last)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl swap_41(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::C>&> __zz_cib_param0) {
    __zz_cib_obj->::std::list<::C>::swap(
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::C>&>(__zz_cib_param0)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl clear_42(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::list<::C>::clear();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl splice_43(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::C>::const_iterator> position, __zz_cib_AbiType_t<::std::list<::C>&> x) {
    __zz_cib_obj->::std::list<::C>::splice(
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::C>::const_iterator>(position),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::C>&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl splice_44(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::C>::const_iterator> position, __zz_cib_AbiType_t<::std::list<::C>&&> x) {
    __zz_cib_obj->::std::list<::C>::splice(
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::C>::const_iterator>(position),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::C>&&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl splice_45(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::C>::const_iterator> position, __zz_cib_AbiType_t<::std::list<::C>&> x, __zz_cib_AbiType_t<::std::list<::C>::const_iterator> i) {
    __zz_cib_obj->::std::list<::C>::splice(
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::C>::const_iterator>(position),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::C>&>(x),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::C>::const_iterator>(i)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl splice_46(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::C>::const_iterator> position, __zz_cib_AbiType_t<::std::list<::C>&&> x, __zz_cib_AbiType_t<::std::list<::C>::const_iterator> i) {
    __zz_cib_obj->::std::list<::C>::splice(
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::C>::const_iterator>(position),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::C>&&>(x),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::C>::const_iterator>(i)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl splice_47(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::C>::const_iterator> position, __zz_cib_AbiType_t<::std::list<::C>&> x, __zz_cib_AbiType_t<::std::list<::C>::const_iterator> first, __zz_cib_AbiType_t<::std::list<::C>::const_iterator> last) {
    __zz_cib_obj->::std::list<::C>::splice(
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::C>::const_iterator>(position),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::C>&>(x),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::C>::const_iterator>(first),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::C>::const_iterator>(last)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl splice_48(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::C>::const_iterator> position, __zz_cib_AbiType_t<::std::list<::C>&&> x, __zz_cib_AbiType_t<::std::list<::C>::const_iterator> first, __zz_cib_AbiType_t<::std::list<::C>::const_iterator> last) {
    __zz_cib_obj->::std::list<::C>::splice(
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::C>::const_iterator>(position),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::C>&&>(x),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::C>::const_iterator>(first),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::C>::const_iterator>(last)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl reverse_49(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::list<::C>::reverse();
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class261 {
using namespace ::std;
namespace __zz_cib_Class272 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C>>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C>>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C>>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C>>::__zz_cib_Copy_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C>>::__zz_cib_New_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C>>::__zz_cib_Delete_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C>>::__zz_cib_OperatorEqual_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C>>::__zz_cib_OperatorEqual_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C>>::assign_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C>>::begin_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C>>::begin_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C>>::end_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C>>::end_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C>>::rbegin_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C>>::rbegin_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C>>::rend_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C>>::rend_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C>>::cbegin_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C>>::cend_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C>>::crbegin_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C>>::crend_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C>>::empty_21),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C>>::size_22),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C>>::max_size_23),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C>>::resize_24),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C>>::resize_25),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C>>::front_26),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C>>::front_27),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C>>::back_28),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C>>::back_29),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C>>::push_front_30),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C>>::push_front_31),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C>>::pop_front_32),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C>>::push_back_33),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C>>::push_back_34),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C>>::pop_back_35),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C>>::insert_36),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C>>::insert_37),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C>>::insert_38),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C>>::erase_39),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C>>::erase_40),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C>>::swap_41),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C>>::clear_42),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C>>::splice_43),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C>>::splice_44),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C>>::splice_45),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C>>::splice_46),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C>>::splice_47),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C>>::splice_48),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::C>>::reverse_49)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 50 };
  return &methodTable;
}
}}}
