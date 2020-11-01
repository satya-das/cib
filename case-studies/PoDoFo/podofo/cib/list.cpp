#include "podofo/base/PdfReference.h"
#include "podofo/doc/PdfFunction.h"
#include <list>

#include "__zz_cib_CibPoDoFo-class-down-cast.h"
#include "__zz_cib_CibPoDoFo-delegate-helper.h"
#include "__zz_cib_CibPoDoFo-generic.h"
#include "__zz_cib_CibPoDoFo-ids.h"
#include "__zz_cib_CibPoDoFo-type-converters.h"
#include "__zz_cib_CibPoDoFo-mtable-helper.h"
#include "__zz_cib_CibPoDoFo-proxy-mgr.h"

namespace __zz_cib_ {
using namespace ::std;
template <>
struct __zz_cib_Delegator<::std::list<::PoDoFo::PdfFunction>> : public ::std::list<::PoDoFo::PdfFunction> {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfFunction>>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::std::list<::PoDoFo::PdfFunction>::list;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::size_type> n) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfFunction>::size_type>(n));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::size_type> n, __zz_cib_AbiType_t<const ::PoDoFo::PdfFunction&> value) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfFunction>::size_type>(n),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfFunction&>(value));
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
  static __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>&> __zz_cib_decl __zz_cib_OperatorEqual_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::std::list<::PoDoFo::PdfFunction>&> x) {
    return __zz_cib_ToAbiType<::std::list<::PoDoFo::PdfFunction>&>(
      __zz_cib_obj->::std::list<::PoDoFo::PdfFunction>::operator=(
        __zz_cib_::__zz_cib_FromAbiType<const ::std::list<::PoDoFo::PdfFunction>&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>&> __zz_cib_decl __zz_cib_OperatorEqual_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>&&> x) {
    return __zz_cib_ToAbiType<::std::list<::PoDoFo::PdfFunction>&>(
      __zz_cib_obj->::std::list<::PoDoFo::PdfFunction>::operator=(
        __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfFunction>&&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl assign_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::size_type> n, __zz_cib_AbiType_t<const ::PoDoFo::PdfFunction&> t) {
    __zz_cib_obj->::std::list<::PoDoFo::PdfFunction>::assign(
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfFunction>::size_type>(n),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfFunction&>(t)
    );
  }
  static __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::iterator> __zz_cib_decl begin_9(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::PoDoFo::PdfFunction>::iterator>(
      __zz_cib_obj->::std::list<::PoDoFo::PdfFunction>::begin()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::const_iterator> __zz_cib_decl begin_10(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::PoDoFo::PdfFunction>::const_iterator>(
      __zz_cib_obj->::std::list<::PoDoFo::PdfFunction>::begin()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::iterator> __zz_cib_decl end_11(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::PoDoFo::PdfFunction>::iterator>(
      __zz_cib_obj->::std::list<::PoDoFo::PdfFunction>::end()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::const_iterator> __zz_cib_decl end_12(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::PoDoFo::PdfFunction>::const_iterator>(
      __zz_cib_obj->::std::list<::PoDoFo::PdfFunction>::end()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::reverse_iterator> __zz_cib_decl rbegin_13(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::PoDoFo::PdfFunction>::reverse_iterator>(
      __zz_cib_obj->::std::list<::PoDoFo::PdfFunction>::rbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::const_reverse_iterator> __zz_cib_decl rbegin_14(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::PoDoFo::PdfFunction>::const_reverse_iterator>(
      __zz_cib_obj->::std::list<::PoDoFo::PdfFunction>::rbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::reverse_iterator> __zz_cib_decl rend_15(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::PoDoFo::PdfFunction>::reverse_iterator>(
      __zz_cib_obj->::std::list<::PoDoFo::PdfFunction>::rend()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::const_reverse_iterator> __zz_cib_decl rend_16(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::PoDoFo::PdfFunction>::const_reverse_iterator>(
      __zz_cib_obj->::std::list<::PoDoFo::PdfFunction>::rend()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::const_iterator> __zz_cib_decl cbegin_17(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::PoDoFo::PdfFunction>::const_iterator>(
      __zz_cib_obj->::std::list<::PoDoFo::PdfFunction>::cbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::const_iterator> __zz_cib_decl cend_18(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::PoDoFo::PdfFunction>::const_iterator>(
      __zz_cib_obj->::std::list<::PoDoFo::PdfFunction>::cend()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::const_reverse_iterator> __zz_cib_decl crbegin_19(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::PoDoFo::PdfFunction>::const_reverse_iterator>(
      __zz_cib_obj->::std::list<::PoDoFo::PdfFunction>::crbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::const_reverse_iterator> __zz_cib_decl crend_20(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::PoDoFo::PdfFunction>::const_reverse_iterator>(
      __zz_cib_obj->::std::list<::PoDoFo::PdfFunction>::crend()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl empty_21(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::std::list<::PoDoFo::PdfFunction>::empty()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::size_type> __zz_cib_decl size_22(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::PoDoFo::PdfFunction>::size_type>(
      __zz_cib_obj->::std::list<::PoDoFo::PdfFunction>::size()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::size_type> __zz_cib_decl max_size_23(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::PoDoFo::PdfFunction>::size_type>(
      __zz_cib_obj->::std::list<::PoDoFo::PdfFunction>::max_size()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl resize_24(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::size_type> sz) {
    __zz_cib_obj->::std::list<::PoDoFo::PdfFunction>::resize(
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfFunction>::size_type>(sz)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl resize_25(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::size_type> sz, __zz_cib_AbiType_t<const ::PoDoFo::PdfFunction&> c) {
    __zz_cib_obj->::std::list<::PoDoFo::PdfFunction>::resize(
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfFunction>::size_type>(sz),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfFunction&>(c)
    );
  }
  static __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::reference> __zz_cib_decl front_26(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::PoDoFo::PdfFunction>::reference>(
      __zz_cib_obj->::std::list<::PoDoFo::PdfFunction>::front()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::const_reference> __zz_cib_decl front_27(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::PoDoFo::PdfFunction>::const_reference>(
      __zz_cib_obj->::std::list<::PoDoFo::PdfFunction>::front()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::reference> __zz_cib_decl back_28(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::PoDoFo::PdfFunction>::reference>(
      __zz_cib_obj->::std::list<::PoDoFo::PdfFunction>::back()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::const_reference> __zz_cib_decl back_29(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::PoDoFo::PdfFunction>::const_reference>(
      __zz_cib_obj->::std::list<::PoDoFo::PdfFunction>::back()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_front_30(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfFunction&> x) {
    __zz_cib_obj->::std::list<::PoDoFo::PdfFunction>::push_front(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfFunction&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_front_31(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfFunction&&> x) {
    __zz_cib_obj->::std::list<::PoDoFo::PdfFunction>::push_front(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfFunction&&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl pop_front_32(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::list<::PoDoFo::PdfFunction>::pop_front();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_back_33(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfFunction&> x) {
    __zz_cib_obj->::std::list<::PoDoFo::PdfFunction>::push_back(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfFunction&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_back_34(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfFunction&&> x) {
    __zz_cib_obj->::std::list<::PoDoFo::PdfFunction>::push_back(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfFunction&&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl pop_back_35(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::list<::PoDoFo::PdfFunction>::pop_back();
  }
  static __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::iterator> __zz_cib_decl insert_36(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::const_iterator> position, __zz_cib_AbiType_t<const ::PoDoFo::PdfFunction&> x) {
    return __zz_cib_ToAbiType<::std::list<::PoDoFo::PdfFunction>::iterator>(
      __zz_cib_obj->::std::list<::PoDoFo::PdfFunction>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfFunction>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfFunction&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::iterator> __zz_cib_decl insert_37(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::const_iterator> position, __zz_cib_AbiType_t<::PoDoFo::PdfFunction&&> x) {
    return __zz_cib_ToAbiType<::std::list<::PoDoFo::PdfFunction>::iterator>(
      __zz_cib_obj->::std::list<::PoDoFo::PdfFunction>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfFunction>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfFunction&&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::iterator> __zz_cib_decl insert_38(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::const_iterator> position, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::size_type> n, __zz_cib_AbiType_t<const ::PoDoFo::PdfFunction&> x) {
    return __zz_cib_ToAbiType<::std::list<::PoDoFo::PdfFunction>::iterator>(
      __zz_cib_obj->::std::list<::PoDoFo::PdfFunction>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfFunction>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfFunction>::size_type>(n),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfFunction&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::iterator> __zz_cib_decl erase_39(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::const_iterator> position) {
    return __zz_cib_ToAbiType<::std::list<::PoDoFo::PdfFunction>::iterator>(
      __zz_cib_obj->::std::list<::PoDoFo::PdfFunction>::erase(
        __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfFunction>::const_iterator>(position)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::iterator> __zz_cib_decl erase_40(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::const_iterator> position, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::const_iterator> last) {
    return __zz_cib_ToAbiType<::std::list<::PoDoFo::PdfFunction>::iterator>(
      __zz_cib_obj->::std::list<::PoDoFo::PdfFunction>::erase(
        __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfFunction>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfFunction>::const_iterator>(last)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl swap_41(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>&> __zz_cib_param0) {
    __zz_cib_obj->::std::list<::PoDoFo::PdfFunction>::swap(
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfFunction>&>(__zz_cib_param0)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl clear_42(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::list<::PoDoFo::PdfFunction>::clear();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl splice_43(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::const_iterator> position, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>&> x) {
    __zz_cib_obj->::std::list<::PoDoFo::PdfFunction>::splice(
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfFunction>::const_iterator>(position),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfFunction>&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl splice_44(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::const_iterator> position, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>&&> x) {
    __zz_cib_obj->::std::list<::PoDoFo::PdfFunction>::splice(
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfFunction>::const_iterator>(position),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfFunction>&&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl splice_45(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::const_iterator> position, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>&> x, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::const_iterator> i) {
    __zz_cib_obj->::std::list<::PoDoFo::PdfFunction>::splice(
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfFunction>::const_iterator>(position),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfFunction>&>(x),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfFunction>::const_iterator>(i)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl splice_46(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::const_iterator> position, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>&&> x, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::const_iterator> i) {
    __zz_cib_obj->::std::list<::PoDoFo::PdfFunction>::splice(
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfFunction>::const_iterator>(position),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfFunction>&&>(x),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfFunction>::const_iterator>(i)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl splice_47(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::const_iterator> position, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>&> x, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::const_iterator> first, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::const_iterator> last) {
    __zz_cib_obj->::std::list<::PoDoFo::PdfFunction>::splice(
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfFunction>::const_iterator>(position),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfFunction>&>(x),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfFunction>::const_iterator>(first),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfFunction>::const_iterator>(last)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl splice_48(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::const_iterator> position, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>&&> x, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::const_iterator> first, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfFunction>::const_iterator> last) {
    __zz_cib_obj->::std::list<::PoDoFo::PdfFunction>::splice(
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfFunction>::const_iterator>(position),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfFunction>&&>(x),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfFunction>::const_iterator>(first),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfFunction>::const_iterator>(last)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl reverse_49(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::list<::PoDoFo::PdfFunction>::reverse();
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class261 {
using namespace ::std;
namespace __zz_cib_Class297 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfFunction>>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfFunction>>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfFunction>>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfFunction>>::__zz_cib_Copy_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfFunction>>::__zz_cib_New_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfFunction>>::__zz_cib_Delete_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfFunction>>::__zz_cib_OperatorEqual_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfFunction>>::__zz_cib_OperatorEqual_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfFunction>>::assign_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfFunction>>::begin_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfFunction>>::begin_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfFunction>>::end_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfFunction>>::end_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfFunction>>::rbegin_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfFunction>>::rbegin_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfFunction>>::rend_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfFunction>>::rend_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfFunction>>::cbegin_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfFunction>>::cend_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfFunction>>::crbegin_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfFunction>>::crend_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfFunction>>::empty_21),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfFunction>>::size_22),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfFunction>>::max_size_23),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfFunction>>::resize_24),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfFunction>>::resize_25),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfFunction>>::front_26),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfFunction>>::front_27),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfFunction>>::back_28),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfFunction>>::back_29),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfFunction>>::push_front_30),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfFunction>>::push_front_31),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfFunction>>::pop_front_32),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfFunction>>::push_back_33),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfFunction>>::push_back_34),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfFunction>>::pop_back_35),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfFunction>>::insert_36),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfFunction>>::insert_37),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfFunction>>::insert_38),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfFunction>>::erase_39),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfFunction>>::erase_40),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfFunction>>::swap_41),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfFunction>>::clear_42),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfFunction>>::splice_43),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfFunction>>::splice_44),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfFunction>>::splice_45),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfFunction>>::splice_46),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfFunction>>::splice_47),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfFunction>>::splice_48),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfFunction>>::reverse_49)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 50 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::std;
template <>
struct __zz_cib_Delegator<::std::list<::PoDoFo::PdfReference*>> : public ::std::list<::PoDoFo::PdfReference*> {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfReference*>>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::std::list<::PoDoFo::PdfReference*>::list;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>::size_type> n) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfReference*>::size_type>(n));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>::size_type> n, __zz_cib_AbiType_t<::PoDoFo::PdfReference* const&> value) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfReference*>::size_type>(n),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfReference* const&>(value));
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
  static __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>&> __zz_cib_decl __zz_cib_OperatorEqual_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::std::list<::PoDoFo::PdfReference*>&> x) {
    return __zz_cib_ToAbiType<::std::list<::PoDoFo::PdfReference*>&>(
      __zz_cib_obj->::std::list<::PoDoFo::PdfReference*>::operator=(
        __zz_cib_::__zz_cib_FromAbiType<const ::std::list<::PoDoFo::PdfReference*>&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>&> __zz_cib_decl __zz_cib_OperatorEqual_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>&&> x) {
    return __zz_cib_ToAbiType<::std::list<::PoDoFo::PdfReference*>&>(
      __zz_cib_obj->::std::list<::PoDoFo::PdfReference*>::operator=(
        __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfReference*>&&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl assign_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>::size_type> n, __zz_cib_AbiType_t<::PoDoFo::PdfReference* const&> t) {
    __zz_cib_obj->::std::list<::PoDoFo::PdfReference*>::assign(
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfReference*>::size_type>(n),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfReference* const&>(t)
    );
  }
  static __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>::iterator> __zz_cib_decl begin_9(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::PoDoFo::PdfReference*>::iterator>(
      __zz_cib_obj->::std::list<::PoDoFo::PdfReference*>::begin()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>::const_iterator> __zz_cib_decl begin_10(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::PoDoFo::PdfReference*>::const_iterator>(
      __zz_cib_obj->::std::list<::PoDoFo::PdfReference*>::begin()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>::iterator> __zz_cib_decl end_11(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::PoDoFo::PdfReference*>::iterator>(
      __zz_cib_obj->::std::list<::PoDoFo::PdfReference*>::end()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>::const_iterator> __zz_cib_decl end_12(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::PoDoFo::PdfReference*>::const_iterator>(
      __zz_cib_obj->::std::list<::PoDoFo::PdfReference*>::end()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>::reverse_iterator> __zz_cib_decl rbegin_13(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::PoDoFo::PdfReference*>::reverse_iterator>(
      __zz_cib_obj->::std::list<::PoDoFo::PdfReference*>::rbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>::const_reverse_iterator> __zz_cib_decl rbegin_14(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::PoDoFo::PdfReference*>::const_reverse_iterator>(
      __zz_cib_obj->::std::list<::PoDoFo::PdfReference*>::rbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>::reverse_iterator> __zz_cib_decl rend_15(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::PoDoFo::PdfReference*>::reverse_iterator>(
      __zz_cib_obj->::std::list<::PoDoFo::PdfReference*>::rend()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>::const_reverse_iterator> __zz_cib_decl rend_16(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::PoDoFo::PdfReference*>::const_reverse_iterator>(
      __zz_cib_obj->::std::list<::PoDoFo::PdfReference*>::rend()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>::const_iterator> __zz_cib_decl cbegin_17(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::PoDoFo::PdfReference*>::const_iterator>(
      __zz_cib_obj->::std::list<::PoDoFo::PdfReference*>::cbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>::const_iterator> __zz_cib_decl cend_18(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::PoDoFo::PdfReference*>::const_iterator>(
      __zz_cib_obj->::std::list<::PoDoFo::PdfReference*>::cend()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>::const_reverse_iterator> __zz_cib_decl crbegin_19(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::PoDoFo::PdfReference*>::const_reverse_iterator>(
      __zz_cib_obj->::std::list<::PoDoFo::PdfReference*>::crbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>::const_reverse_iterator> __zz_cib_decl crend_20(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::PoDoFo::PdfReference*>::const_reverse_iterator>(
      __zz_cib_obj->::std::list<::PoDoFo::PdfReference*>::crend()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl empty_21(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::std::list<::PoDoFo::PdfReference*>::empty()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>::size_type> __zz_cib_decl size_22(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::PoDoFo::PdfReference*>::size_type>(
      __zz_cib_obj->::std::list<::PoDoFo::PdfReference*>::size()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>::size_type> __zz_cib_decl max_size_23(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::PoDoFo::PdfReference*>::size_type>(
      __zz_cib_obj->::std::list<::PoDoFo::PdfReference*>::max_size()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl resize_24(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>::size_type> sz) {
    __zz_cib_obj->::std::list<::PoDoFo::PdfReference*>::resize(
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfReference*>::size_type>(sz)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl resize_25(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>::size_type> sz, __zz_cib_AbiType_t<::PoDoFo::PdfReference* const&> c) {
    __zz_cib_obj->::std::list<::PoDoFo::PdfReference*>::resize(
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfReference*>::size_type>(sz),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfReference* const&>(c)
    );
  }
  static __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>::reference> __zz_cib_decl front_26(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::PoDoFo::PdfReference*>::reference>(
      __zz_cib_obj->::std::list<::PoDoFo::PdfReference*>::front()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>::const_reference> __zz_cib_decl front_27(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::PoDoFo::PdfReference*>::const_reference>(
      __zz_cib_obj->::std::list<::PoDoFo::PdfReference*>::front()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>::reference> __zz_cib_decl back_28(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::PoDoFo::PdfReference*>::reference>(
      __zz_cib_obj->::std::list<::PoDoFo::PdfReference*>::back()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>::const_reference> __zz_cib_decl back_29(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::PoDoFo::PdfReference*>::const_reference>(
      __zz_cib_obj->::std::list<::PoDoFo::PdfReference*>::back()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_front_30(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfReference* const&> x) {
    __zz_cib_obj->::std::list<::PoDoFo::PdfReference*>::push_front(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfReference* const&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_front_31(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfReference*&&> x) {
    __zz_cib_obj->::std::list<::PoDoFo::PdfReference*>::push_front(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfReference*&&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl pop_front_32(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::list<::PoDoFo::PdfReference*>::pop_front();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_back_33(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfReference* const&> x) {
    __zz_cib_obj->::std::list<::PoDoFo::PdfReference*>::push_back(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfReference* const&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_back_34(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfReference*&&> x) {
    __zz_cib_obj->::std::list<::PoDoFo::PdfReference*>::push_back(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfReference*&&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl pop_back_35(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::list<::PoDoFo::PdfReference*>::pop_back();
  }
  static __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>::iterator> __zz_cib_decl insert_36(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>::const_iterator> position, __zz_cib_AbiType_t<::PoDoFo::PdfReference* const&> x) {
    return __zz_cib_ToAbiType<::std::list<::PoDoFo::PdfReference*>::iterator>(
      __zz_cib_obj->::std::list<::PoDoFo::PdfReference*>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfReference*>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfReference* const&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>::iterator> __zz_cib_decl insert_37(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>::const_iterator> position, __zz_cib_AbiType_t<::PoDoFo::PdfReference*&&> x) {
    return __zz_cib_ToAbiType<::std::list<::PoDoFo::PdfReference*>::iterator>(
      __zz_cib_obj->::std::list<::PoDoFo::PdfReference*>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfReference*>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfReference*&&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>::iterator> __zz_cib_decl insert_38(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>::const_iterator> position, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>::size_type> n, __zz_cib_AbiType_t<::PoDoFo::PdfReference* const&> x) {
    return __zz_cib_ToAbiType<::std::list<::PoDoFo::PdfReference*>::iterator>(
      __zz_cib_obj->::std::list<::PoDoFo::PdfReference*>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfReference*>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfReference*>::size_type>(n),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfReference* const&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>::iterator> __zz_cib_decl erase_39(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>::const_iterator> position) {
    return __zz_cib_ToAbiType<::std::list<::PoDoFo::PdfReference*>::iterator>(
      __zz_cib_obj->::std::list<::PoDoFo::PdfReference*>::erase(
        __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfReference*>::const_iterator>(position)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>::iterator> __zz_cib_decl erase_40(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>::const_iterator> position, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>::const_iterator> last) {
    return __zz_cib_ToAbiType<::std::list<::PoDoFo::PdfReference*>::iterator>(
      __zz_cib_obj->::std::list<::PoDoFo::PdfReference*>::erase(
        __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfReference*>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfReference*>::const_iterator>(last)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl swap_41(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>&> __zz_cib_param0) {
    __zz_cib_obj->::std::list<::PoDoFo::PdfReference*>::swap(
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfReference*>&>(__zz_cib_param0)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl clear_42(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::list<::PoDoFo::PdfReference*>::clear();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl splice_43(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>::const_iterator> position, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>&> x) {
    __zz_cib_obj->::std::list<::PoDoFo::PdfReference*>::splice(
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfReference*>::const_iterator>(position),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfReference*>&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl splice_44(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>::const_iterator> position, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>&&> x) {
    __zz_cib_obj->::std::list<::PoDoFo::PdfReference*>::splice(
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfReference*>::const_iterator>(position),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfReference*>&&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl splice_45(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>::const_iterator> position, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>&> x, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>::const_iterator> i) {
    __zz_cib_obj->::std::list<::PoDoFo::PdfReference*>::splice(
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfReference*>::const_iterator>(position),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfReference*>&>(x),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfReference*>::const_iterator>(i)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl splice_46(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>::const_iterator> position, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>&&> x, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>::const_iterator> i) {
    __zz_cib_obj->::std::list<::PoDoFo::PdfReference*>::splice(
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfReference*>::const_iterator>(position),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfReference*>&&>(x),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfReference*>::const_iterator>(i)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl splice_47(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>::const_iterator> position, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>&> x, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>::const_iterator> first, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>::const_iterator> last) {
    __zz_cib_obj->::std::list<::PoDoFo::PdfReference*>::splice(
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfReference*>::const_iterator>(position),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfReference*>&>(x),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfReference*>::const_iterator>(first),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfReference*>::const_iterator>(last)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl splice_48(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>::const_iterator> position, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>&&> x, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>::const_iterator> first, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>::const_iterator> last) {
    __zz_cib_obj->::std::list<::PoDoFo::PdfReference*>::splice(
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfReference*>::const_iterator>(position),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfReference*>&&>(x),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfReference*>::const_iterator>(first),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfReference*>::const_iterator>(last)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl reverse_49(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::list<::PoDoFo::PdfReference*>::reverse();
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class261 {
using namespace ::std;
namespace __zz_cib_Class322 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfReference*>>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfReference*>>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfReference*>>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfReference*>>::__zz_cib_Copy_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfReference*>>::__zz_cib_New_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfReference*>>::__zz_cib_Delete_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfReference*>>::__zz_cib_OperatorEqual_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfReference*>>::__zz_cib_OperatorEqual_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfReference*>>::assign_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfReference*>>::begin_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfReference*>>::begin_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfReference*>>::end_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfReference*>>::end_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfReference*>>::rbegin_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfReference*>>::rbegin_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfReference*>>::rend_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfReference*>>::rend_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfReference*>>::cbegin_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfReference*>>::cend_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfReference*>>::crbegin_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfReference*>>::crend_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfReference*>>::empty_21),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfReference*>>::size_22),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfReference*>>::max_size_23),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfReference*>>::resize_24),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfReference*>>::resize_25),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfReference*>>::front_26),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfReference*>>::front_27),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfReference*>>::back_28),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfReference*>>::back_29),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfReference*>>::push_front_30),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfReference*>>::push_front_31),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfReference*>>::pop_front_32),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfReference*>>::push_back_33),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfReference*>>::push_back_34),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfReference*>>::pop_back_35),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfReference*>>::insert_36),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfReference*>>::insert_37),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfReference*>>::insert_38),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfReference*>>::erase_39),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfReference*>>::erase_40),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfReference*>>::swap_41),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfReference*>>::clear_42),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfReference*>>::splice_43),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfReference*>>::splice_44),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfReference*>>::splice_45),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfReference*>>::splice_46),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfReference*>>::splice_47),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfReference*>>::splice_48),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<::PoDoFo::PdfReference*>>::reverse_49)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 50 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::std;
template <>
struct __zz_cib_Delegator<::std::list<char>> : public ::std::list<char> {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::std::list<char>>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::std::list<char>::list;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<::std::list<char>::size_type> n) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::std::list<char>::size_type>(n));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<::std::list<char>::size_type> n, __zz_cib_AbiType_t<const char&> value) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::std::list<char>::size_type>(n),
    __zz_cib_::__zz_cib_FromAbiType<const char&>(value));
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
  static __zz_cib_AbiType_t<::std::list<char>&> __zz_cib_decl __zz_cib_OperatorEqual_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::std::list<char>&> x) {
    return __zz_cib_ToAbiType<::std::list<char>&>(
      __zz_cib_obj->::std::list<char>::operator=(
        __zz_cib_::__zz_cib_FromAbiType<const ::std::list<char>&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::list<char>&> __zz_cib_decl __zz_cib_OperatorEqual_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<char>&&> x) {
    return __zz_cib_ToAbiType<::std::list<char>&>(
      __zz_cib_obj->::std::list<char>::operator=(
        __zz_cib_::__zz_cib_FromAbiType<::std::list<char>&&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl assign_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<char>::size_type> n, __zz_cib_AbiType_t<const char&> t) {
    __zz_cib_obj->::std::list<char>::assign(
      __zz_cib_::__zz_cib_FromAbiType<::std::list<char>::size_type>(n),
      __zz_cib_::__zz_cib_FromAbiType<const char&>(t)
    );
  }
  static __zz_cib_AbiType_t<::std::list<char>::iterator> __zz_cib_decl begin_9(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<char>::iterator>(
      __zz_cib_obj->::std::list<char>::begin()
    );
  }
  static __zz_cib_AbiType_t<::std::list<char>::const_iterator> __zz_cib_decl begin_10(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<char>::const_iterator>(
      __zz_cib_obj->::std::list<char>::begin()
    );
  }
  static __zz_cib_AbiType_t<::std::list<char>::iterator> __zz_cib_decl end_11(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<char>::iterator>(
      __zz_cib_obj->::std::list<char>::end()
    );
  }
  static __zz_cib_AbiType_t<::std::list<char>::const_iterator> __zz_cib_decl end_12(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<char>::const_iterator>(
      __zz_cib_obj->::std::list<char>::end()
    );
  }
  static __zz_cib_AbiType_t<::std::list<char>::reverse_iterator> __zz_cib_decl rbegin_13(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<char>::reverse_iterator>(
      __zz_cib_obj->::std::list<char>::rbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::list<char>::const_reverse_iterator> __zz_cib_decl rbegin_14(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<char>::const_reverse_iterator>(
      __zz_cib_obj->::std::list<char>::rbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::list<char>::reverse_iterator> __zz_cib_decl rend_15(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<char>::reverse_iterator>(
      __zz_cib_obj->::std::list<char>::rend()
    );
  }
  static __zz_cib_AbiType_t<::std::list<char>::const_reverse_iterator> __zz_cib_decl rend_16(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<char>::const_reverse_iterator>(
      __zz_cib_obj->::std::list<char>::rend()
    );
  }
  static __zz_cib_AbiType_t<::std::list<char>::const_iterator> __zz_cib_decl cbegin_17(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<char>::const_iterator>(
      __zz_cib_obj->::std::list<char>::cbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::list<char>::const_iterator> __zz_cib_decl cend_18(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<char>::const_iterator>(
      __zz_cib_obj->::std::list<char>::cend()
    );
  }
  static __zz_cib_AbiType_t<::std::list<char>::const_reverse_iterator> __zz_cib_decl crbegin_19(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<char>::const_reverse_iterator>(
      __zz_cib_obj->::std::list<char>::crbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::list<char>::const_reverse_iterator> __zz_cib_decl crend_20(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<char>::const_reverse_iterator>(
      __zz_cib_obj->::std::list<char>::crend()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl empty_21(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::std::list<char>::empty()
    );
  }
  static __zz_cib_AbiType_t<::std::list<char>::size_type> __zz_cib_decl size_22(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<char>::size_type>(
      __zz_cib_obj->::std::list<char>::size()
    );
  }
  static __zz_cib_AbiType_t<::std::list<char>::size_type> __zz_cib_decl max_size_23(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<char>::size_type>(
      __zz_cib_obj->::std::list<char>::max_size()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl resize_24(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<char>::size_type> sz) {
    __zz_cib_obj->::std::list<char>::resize(
      __zz_cib_::__zz_cib_FromAbiType<::std::list<char>::size_type>(sz)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl resize_25(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<char>::size_type> sz, __zz_cib_AbiType_t<const char&> c) {
    __zz_cib_obj->::std::list<char>::resize(
      __zz_cib_::__zz_cib_FromAbiType<::std::list<char>::size_type>(sz),
      __zz_cib_::__zz_cib_FromAbiType<const char&>(c)
    );
  }
  static __zz_cib_AbiType_t<::std::list<char>::reference> __zz_cib_decl front_26(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<char>::reference>(
      __zz_cib_obj->::std::list<char>::front()
    );
  }
  static __zz_cib_AbiType_t<::std::list<char>::value_type> __zz_cib_decl front_27(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<char>::value_type>(
      __zz_cib_obj->::std::list<char>::front()
    );
  }
  static __zz_cib_AbiType_t<::std::list<char>::reference> __zz_cib_decl back_28(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<char>::reference>(
      __zz_cib_obj->::std::list<char>::back()
    );
  }
  static __zz_cib_AbiType_t<::std::list<char>::value_type> __zz_cib_decl back_29(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<char>::value_type>(
      __zz_cib_obj->::std::list<char>::back()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_front_30(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char&> x) {
    __zz_cib_obj->::std::list<char>::push_front(
      __zz_cib_::__zz_cib_FromAbiType<const char&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_front_31(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<char&&> x) {
    __zz_cib_obj->::std::list<char>::push_front(
      __zz_cib_::__zz_cib_FromAbiType<char&&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl pop_front_32(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::list<char>::pop_front();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_back_33(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char&> x) {
    __zz_cib_obj->::std::list<char>::push_back(
      __zz_cib_::__zz_cib_FromAbiType<const char&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_back_34(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<char&&> x) {
    __zz_cib_obj->::std::list<char>::push_back(
      __zz_cib_::__zz_cib_FromAbiType<char&&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl pop_back_35(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::list<char>::pop_back();
  }
  static __zz_cib_AbiType_t<::std::list<char>::iterator> __zz_cib_decl insert_36(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<char>::const_iterator> position, __zz_cib_AbiType_t<const char&> x) {
    return __zz_cib_ToAbiType<::std::list<char>::iterator>(
      __zz_cib_obj->::std::list<char>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::list<char>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<const char&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::list<char>::iterator> __zz_cib_decl insert_37(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<char>::const_iterator> position, __zz_cib_AbiType_t<char&&> x) {
    return __zz_cib_ToAbiType<::std::list<char>::iterator>(
      __zz_cib_obj->::std::list<char>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::list<char>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<char&&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::list<char>::iterator> __zz_cib_decl insert_38(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<char>::const_iterator> position, __zz_cib_AbiType_t<::std::list<char>::size_type> n, __zz_cib_AbiType_t<const char&> x) {
    return __zz_cib_ToAbiType<::std::list<char>::iterator>(
      __zz_cib_obj->::std::list<char>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::list<char>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<::std::list<char>::size_type>(n),
        __zz_cib_::__zz_cib_FromAbiType<const char&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::list<char>::iterator> __zz_cib_decl erase_39(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<char>::const_iterator> position) {
    return __zz_cib_ToAbiType<::std::list<char>::iterator>(
      __zz_cib_obj->::std::list<char>::erase(
        __zz_cib_::__zz_cib_FromAbiType<::std::list<char>::const_iterator>(position)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::list<char>::iterator> __zz_cib_decl erase_40(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<char>::const_iterator> position, __zz_cib_AbiType_t<::std::list<char>::const_iterator> last) {
    return __zz_cib_ToAbiType<::std::list<char>::iterator>(
      __zz_cib_obj->::std::list<char>::erase(
        __zz_cib_::__zz_cib_FromAbiType<::std::list<char>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<::std::list<char>::const_iterator>(last)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl swap_41(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<char>&> __zz_cib_param0) {
    __zz_cib_obj->::std::list<char>::swap(
      __zz_cib_::__zz_cib_FromAbiType<::std::list<char>&>(__zz_cib_param0)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl clear_42(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::list<char>::clear();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl splice_43(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<char>::const_iterator> position, __zz_cib_AbiType_t<::std::list<char>&> x) {
    __zz_cib_obj->::std::list<char>::splice(
      __zz_cib_::__zz_cib_FromAbiType<::std::list<char>::const_iterator>(position),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<char>&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl splice_44(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<char>::const_iterator> position, __zz_cib_AbiType_t<::std::list<char>&&> x) {
    __zz_cib_obj->::std::list<char>::splice(
      __zz_cib_::__zz_cib_FromAbiType<::std::list<char>::const_iterator>(position),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<char>&&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl splice_45(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<char>::const_iterator> position, __zz_cib_AbiType_t<::std::list<char>&> x, __zz_cib_AbiType_t<::std::list<char>::const_iterator> i) {
    __zz_cib_obj->::std::list<char>::splice(
      __zz_cib_::__zz_cib_FromAbiType<::std::list<char>::const_iterator>(position),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<char>&>(x),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<char>::const_iterator>(i)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl splice_46(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<char>::const_iterator> position, __zz_cib_AbiType_t<::std::list<char>&&> x, __zz_cib_AbiType_t<::std::list<char>::const_iterator> i) {
    __zz_cib_obj->::std::list<char>::splice(
      __zz_cib_::__zz_cib_FromAbiType<::std::list<char>::const_iterator>(position),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<char>&&>(x),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<char>::const_iterator>(i)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl splice_47(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<char>::const_iterator> position, __zz_cib_AbiType_t<::std::list<char>&> x, __zz_cib_AbiType_t<::std::list<char>::const_iterator> first, __zz_cib_AbiType_t<::std::list<char>::const_iterator> last) {
    __zz_cib_obj->::std::list<char>::splice(
      __zz_cib_::__zz_cib_FromAbiType<::std::list<char>::const_iterator>(position),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<char>&>(x),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<char>::const_iterator>(first),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<char>::const_iterator>(last)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl splice_48(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<char>::const_iterator> position, __zz_cib_AbiType_t<::std::list<char>&&> x, __zz_cib_AbiType_t<::std::list<char>::const_iterator> first, __zz_cib_AbiType_t<::std::list<char>::const_iterator> last) {
    __zz_cib_obj->::std::list<char>::splice(
      __zz_cib_::__zz_cib_FromAbiType<::std::list<char>::const_iterator>(position),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<char>&&>(x),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<char>::const_iterator>(first),
      __zz_cib_::__zz_cib_FromAbiType<::std::list<char>::const_iterator>(last)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl reverse_49(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::list<char>::reverse();
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class261 {
using namespace ::std;
namespace __zz_cib_Class292 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<char>>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<char>>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<char>>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<char>>::__zz_cib_Copy_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<char>>::__zz_cib_New_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<char>>::__zz_cib_Delete_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<char>>::__zz_cib_OperatorEqual_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<char>>::__zz_cib_OperatorEqual_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<char>>::assign_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<char>>::begin_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<char>>::begin_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<char>>::end_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<char>>::end_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<char>>::rbegin_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<char>>::rbegin_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<char>>::rend_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<char>>::rend_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<char>>::cbegin_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<char>>::cend_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<char>>::crbegin_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<char>>::crend_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<char>>::empty_21),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<char>>::size_22),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<char>>::max_size_23),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<char>>::resize_24),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<char>>::resize_25),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<char>>::front_26),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<char>>::front_27),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<char>>::back_28),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<char>>::back_29),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<char>>::push_front_30),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<char>>::push_front_31),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<char>>::pop_front_32),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<char>>::push_back_33),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<char>>::push_back_34),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<char>>::pop_back_35),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<char>>::insert_36),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<char>>::insert_37),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<char>>::insert_38),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<char>>::erase_39),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<char>>::erase_40),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<char>>::swap_41),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<char>>::clear_42),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<char>>::splice_43),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<char>>::splice_44),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<char>>::splice_45),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<char>>::splice_46),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<char>>::splice_47),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<char>>::splice_48),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::list<char>>::reverse_49)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 50 };
  return &methodTable;
}
}}}
