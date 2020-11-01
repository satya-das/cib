#include "__zz_cib_stl-helpers/__zz_cib_vector-iterator.h"
#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfDefines.h"
#include "podofo/base/PdfExtension.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfRect.h"
#include "podofo/base/PdfString.h"
#include "podofo/doc/PdfFontCache.h"
#include "podofo/doc/PdfPage.h"
#include <list>
#include <vector>

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
struct __zz_cib_Delegator<::std::vector<::PoDoFo::EPdfFilter>> : public ::std::vector<::PoDoFo::EPdfFilter> {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::EPdfFilter>>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::std::vector<::PoDoFo::EPdfFilter>::vector;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<::std::vector<::PoDoFo::EPdfFilter>::size_type> n) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::EPdfFilter>::size_type>(n));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<::std::vector<::PoDoFo::EPdfFilter>::size_type> n, __zz_cib_AbiType_t<const ::PoDoFo::EPdfFilter&> value) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::EPdfFilter>::size_type>(n),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::EPdfFilter&>(value));
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
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::EPdfFilter>&> __zz_cib_decl __zz_cib_OperatorEqual_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::std::vector<::PoDoFo::EPdfFilter>&> x) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::EPdfFilter>&>(
      __zz_cib_obj->::std::vector<::PoDoFo::EPdfFilter>::operator=(
        __zz_cib_::__zz_cib_FromAbiType<const ::std::vector<::PoDoFo::EPdfFilter>&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::EPdfFilter>&> __zz_cib_decl __zz_cib_OperatorEqual_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::EPdfFilter>&&> x) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::EPdfFilter>&>(
      __zz_cib_obj->::std::vector<::PoDoFo::EPdfFilter>::operator=(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::EPdfFilter>&&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl assign_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::EPdfFilter>::size_type> n, __zz_cib_AbiType_t<const ::PoDoFo::EPdfFilter&> u) {
    __zz_cib_obj->::std::vector<::PoDoFo::EPdfFilter>::assign(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::EPdfFilter>::size_type>(n),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::EPdfFilter&>(u)
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::EPdfFilter>::iterator> __zz_cib_decl begin_9(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::EPdfFilter>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::EPdfFilter>::begin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::EPdfFilter>::const_iterator> __zz_cib_decl begin_10(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::EPdfFilter>::const_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::EPdfFilter>::begin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::EPdfFilter>::iterator> __zz_cib_decl end_11(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::EPdfFilter>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::EPdfFilter>::end()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::EPdfFilter>::const_iterator> __zz_cib_decl end_12(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::EPdfFilter>::const_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::EPdfFilter>::end()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::EPdfFilter>::reverse_iterator> __zz_cib_decl rbegin_13(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::EPdfFilter>::reverse_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::EPdfFilter>::rbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::EPdfFilter>::const_reverse_iterator> __zz_cib_decl rbegin_14(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::EPdfFilter>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::EPdfFilter>::rbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::EPdfFilter>::reverse_iterator> __zz_cib_decl rend_15(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::EPdfFilter>::reverse_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::EPdfFilter>::rend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::EPdfFilter>::const_reverse_iterator> __zz_cib_decl rend_16(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::EPdfFilter>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::EPdfFilter>::rend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::EPdfFilter>::const_iterator> __zz_cib_decl cbegin_17(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::EPdfFilter>::const_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::EPdfFilter>::cbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::EPdfFilter>::const_iterator> __zz_cib_decl cend_18(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::EPdfFilter>::const_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::EPdfFilter>::cend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::EPdfFilter>::const_reverse_iterator> __zz_cib_decl crbegin_19(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::EPdfFilter>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::EPdfFilter>::crbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::EPdfFilter>::const_reverse_iterator> __zz_cib_decl crend_20(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::EPdfFilter>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::EPdfFilter>::crend()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl empty_21(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::std::vector<::PoDoFo::EPdfFilter>::empty()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::EPdfFilter>::size_type> __zz_cib_decl size_22(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::EPdfFilter>::size_type>(
      __zz_cib_obj->::std::vector<::PoDoFo::EPdfFilter>::size()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::EPdfFilter>::size_type> __zz_cib_decl max_size_23(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::EPdfFilter>::size_type>(
      __zz_cib_obj->::std::vector<::PoDoFo::EPdfFilter>::max_size()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::EPdfFilter>::size_type> __zz_cib_decl capacity_24(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::EPdfFilter>::size_type>(
      __zz_cib_obj->::std::vector<::PoDoFo::EPdfFilter>::capacity()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl resize_25(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::EPdfFilter>::size_type> sz) {
    __zz_cib_obj->::std::vector<::PoDoFo::EPdfFilter>::resize(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::EPdfFilter>::size_type>(sz)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl resize_26(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::EPdfFilter>::size_type> sz, __zz_cib_AbiType_t<const ::PoDoFo::EPdfFilter&> c) {
    __zz_cib_obj->::std::vector<::PoDoFo::EPdfFilter>::resize(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::EPdfFilter>::size_type>(sz),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::EPdfFilter&>(c)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl reserve_27(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::EPdfFilter>::size_type> n) {
    __zz_cib_obj->::std::vector<::PoDoFo::EPdfFilter>::reserve(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::EPdfFilter>::size_type>(n)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl shrink_to_fit_28(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::vector<::PoDoFo::EPdfFilter>::shrink_to_fit();
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::EPdfFilter>::reference> __zz_cib_decl __zz_cib_OperatorIndex_29(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::EPdfFilter>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::EPdfFilter>::reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::EPdfFilter>::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::EPdfFilter>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::EPdfFilter>::const_reference> __zz_cib_decl __zz_cib_OperatorIndex_30(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::EPdfFilter>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::EPdfFilter>::const_reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::EPdfFilter>::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::EPdfFilter>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::EPdfFilter>::const_reference> __zz_cib_decl at_31(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::EPdfFilter>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::EPdfFilter>::const_reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::EPdfFilter>::at(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::EPdfFilter>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::EPdfFilter>::reference> __zz_cib_decl at_32(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::EPdfFilter>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::EPdfFilter>::reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::EPdfFilter>::at(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::EPdfFilter>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::EPdfFilter>::reference> __zz_cib_decl front_33(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::EPdfFilter>::reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::EPdfFilter>::front()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::EPdfFilter>::const_reference> __zz_cib_decl front_34(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::EPdfFilter>::const_reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::EPdfFilter>::front()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::EPdfFilter>::reference> __zz_cib_decl back_35(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::EPdfFilter>::reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::EPdfFilter>::back()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::EPdfFilter>::const_reference> __zz_cib_decl back_36(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::EPdfFilter>::const_reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::EPdfFilter>::back()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::EPdfFilter*> __zz_cib_decl data_37(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::EPdfFilter*>(
      __zz_cib_obj->::std::vector<::PoDoFo::EPdfFilter>::data()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::EPdfFilter*> __zz_cib_decl data_38(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::EPdfFilter*>(
      __zz_cib_obj->::std::vector<::PoDoFo::EPdfFilter>::data()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_back_39(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::EPdfFilter&> x) {
    __zz_cib_obj->::std::vector<::PoDoFo::EPdfFilter>::push_back(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::EPdfFilter&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_back_40(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::EPdfFilter&&> x) {
    __zz_cib_obj->::std::vector<::PoDoFo::EPdfFilter>::push_back(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfFilter&&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl pop_back_41(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::vector<::PoDoFo::EPdfFilter>::pop_back();
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::EPdfFilter>::iterator> __zz_cib_decl insert_42(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::EPdfFilter>::const_iterator> position, __zz_cib_AbiType_t<const ::PoDoFo::EPdfFilter&> x) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::EPdfFilter>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::EPdfFilter>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::EPdfFilter>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::EPdfFilter&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::EPdfFilter>::iterator> __zz_cib_decl insert_43(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::EPdfFilter>::const_iterator> position, __zz_cib_AbiType_t<::PoDoFo::EPdfFilter&&> x) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::EPdfFilter>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::EPdfFilter>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::EPdfFilter>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfFilter&&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::EPdfFilter>::iterator> __zz_cib_decl insert_44(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::EPdfFilter>::const_iterator> position, __zz_cib_AbiType_t<::std::vector<::PoDoFo::EPdfFilter>::size_type> n, __zz_cib_AbiType_t<const ::PoDoFo::EPdfFilter&> x) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::EPdfFilter>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::EPdfFilter>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::EPdfFilter>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::EPdfFilter>::size_type>(n),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::EPdfFilter&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::EPdfFilter>::iterator> __zz_cib_decl erase_45(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::EPdfFilter>::const_iterator> position) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::EPdfFilter>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::EPdfFilter>::erase(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::EPdfFilter>::const_iterator>(position)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::EPdfFilter>::iterator> __zz_cib_decl erase_46(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::EPdfFilter>::const_iterator> first, __zz_cib_AbiType_t<::std::vector<::PoDoFo::EPdfFilter>::const_iterator> last) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::EPdfFilter>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::EPdfFilter>::erase(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::EPdfFilter>::const_iterator>(first),
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::EPdfFilter>::const_iterator>(last)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl swap_47(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::EPdfFilter>&> __zz_cib_param0) {
    __zz_cib_obj->::std::vector<::PoDoFo::EPdfFilter>::swap(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::EPdfFilter>&>(__zz_cib_param0)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl clear_48(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::vector<::PoDoFo::EPdfFilter>::clear();
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class261 {
using namespace ::std;
namespace __zz_cib_Class267 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::EPdfFilter>>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::EPdfFilter>>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::EPdfFilter>>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::EPdfFilter>>::__zz_cib_Copy_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::EPdfFilter>>::__zz_cib_New_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::EPdfFilter>>::__zz_cib_Delete_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::EPdfFilter>>::__zz_cib_OperatorEqual_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::EPdfFilter>>::__zz_cib_OperatorEqual_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::EPdfFilter>>::assign_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::EPdfFilter>>::begin_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::EPdfFilter>>::begin_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::EPdfFilter>>::end_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::EPdfFilter>>::end_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::EPdfFilter>>::rbegin_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::EPdfFilter>>::rbegin_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::EPdfFilter>>::rend_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::EPdfFilter>>::rend_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::EPdfFilter>>::cbegin_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::EPdfFilter>>::cend_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::EPdfFilter>>::crbegin_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::EPdfFilter>>::crend_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::EPdfFilter>>::empty_21),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::EPdfFilter>>::size_22),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::EPdfFilter>>::max_size_23),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::EPdfFilter>>::capacity_24),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::EPdfFilter>>::resize_25),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::EPdfFilter>>::resize_26),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::EPdfFilter>>::reserve_27),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::EPdfFilter>>::shrink_to_fit_28),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::EPdfFilter>>::__zz_cib_OperatorIndex_29),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::EPdfFilter>>::__zz_cib_OperatorIndex_30),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::EPdfFilter>>::at_31),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::EPdfFilter>>::at_32),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::EPdfFilter>>::front_33),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::EPdfFilter>>::front_34),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::EPdfFilter>>::back_35),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::EPdfFilter>>::back_36),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::EPdfFilter>>::data_37),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::EPdfFilter>>::data_38),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::EPdfFilter>>::push_back_39),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::EPdfFilter>>::push_back_40),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::EPdfFilter>>::pop_back_41),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::EPdfFilter>>::insert_42),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::EPdfFilter>>::insert_43),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::EPdfFilter>>::insert_44),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::EPdfFilter>>::erase_45),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::EPdfFilter>>::erase_46),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::EPdfFilter>>::swap_47),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::EPdfFilter>>::clear_48)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 49 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::std;
template <>
struct __zz_cib_Delegator<::std::vector<::PoDoFo::PdfExtension>> : public ::std::vector<::PoDoFo::PdfExtension> {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfExtension>>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::std::vector<::PoDoFo::PdfExtension>::vector;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfExtension>::size_type> n) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfExtension>::size_type>(n));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfExtension>::size_type> n, __zz_cib_AbiType_t<const ::PoDoFo::PdfExtension&> value) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfExtension>::size_type>(n),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfExtension&>(value));
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
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfExtension>&> __zz_cib_decl __zz_cib_OperatorEqual_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::std::vector<::PoDoFo::PdfExtension>&> x) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfExtension>&>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfExtension>::operator=(
        __zz_cib_::__zz_cib_FromAbiType<const ::std::vector<::PoDoFo::PdfExtension>&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfExtension>&> __zz_cib_decl __zz_cib_OperatorEqual_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfExtension>&&> x) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfExtension>&>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfExtension>::operator=(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfExtension>&&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl assign_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfExtension>::size_type> n, __zz_cib_AbiType_t<const ::PoDoFo::PdfExtension&> u) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfExtension>::assign(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfExtension>::size_type>(n),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfExtension&>(u)
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfExtension>::iterator> __zz_cib_decl begin_9(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfExtension>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfExtension>::begin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfExtension>::const_iterator> __zz_cib_decl begin_10(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfExtension>::const_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfExtension>::begin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfExtension>::iterator> __zz_cib_decl end_11(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfExtension>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfExtension>::end()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfExtension>::const_iterator> __zz_cib_decl end_12(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfExtension>::const_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfExtension>::end()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfExtension>::reverse_iterator> __zz_cib_decl rbegin_13(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfExtension>::reverse_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfExtension>::rbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfExtension>::const_reverse_iterator> __zz_cib_decl rbegin_14(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfExtension>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfExtension>::rbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfExtension>::reverse_iterator> __zz_cib_decl rend_15(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfExtension>::reverse_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfExtension>::rend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfExtension>::const_reverse_iterator> __zz_cib_decl rend_16(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfExtension>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfExtension>::rend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfExtension>::const_iterator> __zz_cib_decl cbegin_17(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfExtension>::const_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfExtension>::cbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfExtension>::const_iterator> __zz_cib_decl cend_18(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfExtension>::const_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfExtension>::cend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfExtension>::const_reverse_iterator> __zz_cib_decl crbegin_19(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfExtension>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfExtension>::crbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfExtension>::const_reverse_iterator> __zz_cib_decl crend_20(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfExtension>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfExtension>::crend()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl empty_21(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfExtension>::empty()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfExtension>::size_type> __zz_cib_decl size_22(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfExtension>::size_type>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfExtension>::size()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfExtension>::size_type> __zz_cib_decl max_size_23(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfExtension>::size_type>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfExtension>::max_size()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfExtension>::size_type> __zz_cib_decl capacity_24(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfExtension>::size_type>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfExtension>::capacity()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl resize_25(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfExtension>::size_type> sz) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfExtension>::resize(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfExtension>::size_type>(sz)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl resize_26(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfExtension>::size_type> sz, __zz_cib_AbiType_t<const ::PoDoFo::PdfExtension&> c) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfExtension>::resize(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfExtension>::size_type>(sz),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfExtension&>(c)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl reserve_27(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfExtension>::size_type> n) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfExtension>::reserve(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfExtension>::size_type>(n)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl shrink_to_fit_28(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfExtension>::shrink_to_fit();
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfExtension>::reference> __zz_cib_decl __zz_cib_OperatorIndex_29(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfExtension>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfExtension>::reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfExtension>::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfExtension>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfExtension>::const_reference> __zz_cib_decl __zz_cib_OperatorIndex_30(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfExtension>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfExtension>::const_reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfExtension>::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfExtension>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfExtension>::const_reference> __zz_cib_decl at_31(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfExtension>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfExtension>::const_reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfExtension>::at(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfExtension>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfExtension>::reference> __zz_cib_decl at_32(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfExtension>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfExtension>::reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfExtension>::at(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfExtension>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfExtension>::reference> __zz_cib_decl front_33(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfExtension>::reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfExtension>::front()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfExtension>::const_reference> __zz_cib_decl front_34(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfExtension>::const_reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfExtension>::front()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfExtension>::reference> __zz_cib_decl back_35(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfExtension>::reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfExtension>::back()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfExtension>::const_reference> __zz_cib_decl back_36(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfExtension>::const_reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfExtension>::back()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfExtension*> __zz_cib_decl data_37(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfExtension*>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfExtension>::data()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfExtension*> __zz_cib_decl data_38(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfExtension*>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfExtension>::data()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_back_39(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfExtension&> x) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfExtension>::push_back(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfExtension&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_back_40(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfExtension&&> x) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfExtension>::push_back(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfExtension&&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl pop_back_41(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfExtension>::pop_back();
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfExtension>::iterator> __zz_cib_decl insert_42(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfExtension>::const_iterator> position, __zz_cib_AbiType_t<const ::PoDoFo::PdfExtension&> x) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfExtension>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfExtension>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfExtension>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfExtension&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfExtension>::iterator> __zz_cib_decl insert_43(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfExtension>::const_iterator> position, __zz_cib_AbiType_t<::PoDoFo::PdfExtension&&> x) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfExtension>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfExtension>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfExtension>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfExtension&&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfExtension>::iterator> __zz_cib_decl insert_44(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfExtension>::const_iterator> position, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfExtension>::size_type> n, __zz_cib_AbiType_t<const ::PoDoFo::PdfExtension&> x) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfExtension>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfExtension>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfExtension>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfExtension>::size_type>(n),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfExtension&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfExtension>::iterator> __zz_cib_decl erase_45(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfExtension>::const_iterator> position) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfExtension>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfExtension>::erase(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfExtension>::const_iterator>(position)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfExtension>::iterator> __zz_cib_decl erase_46(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfExtension>::const_iterator> first, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfExtension>::const_iterator> last) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfExtension>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfExtension>::erase(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfExtension>::const_iterator>(first),
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfExtension>::const_iterator>(last)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl swap_47(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfExtension>&> __zz_cib_param0) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfExtension>::swap(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfExtension>&>(__zz_cib_param0)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl clear_48(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfExtension>::clear();
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class261 {
using namespace ::std;
namespace __zz_cib_Class302 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfExtension>>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfExtension>>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfExtension>>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfExtension>>::__zz_cib_Copy_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfExtension>>::__zz_cib_New_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfExtension>>::__zz_cib_Delete_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfExtension>>::__zz_cib_OperatorEqual_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfExtension>>::__zz_cib_OperatorEqual_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfExtension>>::assign_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfExtension>>::begin_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfExtension>>::begin_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfExtension>>::end_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfExtension>>::end_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfExtension>>::rbegin_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfExtension>>::rbegin_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfExtension>>::rend_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfExtension>>::rend_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfExtension>>::cbegin_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfExtension>>::cend_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfExtension>>::crbegin_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfExtension>>::crend_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfExtension>>::empty_21),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfExtension>>::size_22),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfExtension>>::max_size_23),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfExtension>>::capacity_24),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfExtension>>::resize_25),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfExtension>>::resize_26),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfExtension>>::reserve_27),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfExtension>>::shrink_to_fit_28),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfExtension>>::__zz_cib_OperatorIndex_29),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfExtension>>::__zz_cib_OperatorIndex_30),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfExtension>>::at_31),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfExtension>>::at_32),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfExtension>>::front_33),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfExtension>>::front_34),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfExtension>>::back_35),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfExtension>>::back_36),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfExtension>>::data_37),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfExtension>>::data_38),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfExtension>>::push_back_39),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfExtension>>::push_back_40),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfExtension>>::pop_back_41),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfExtension>>::insert_42),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfExtension>>::insert_43),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfExtension>>::insert_44),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfExtension>>::erase_45),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfExtension>>::erase_46),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfExtension>>::swap_47),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfExtension>>::clear_48)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 49 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::std;
template <>
struct __zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject*>> : public ::std::vector<::PoDoFo::PdfObject*> {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject*>>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::std::vector<::PoDoFo::PdfObject*>::vector;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject*>::size_type> n) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject*>::size_type>(n));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject*>::size_type> n, __zz_cib_AbiType_t<::PoDoFo::PdfObject* const&> value) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject*>::size_type>(n),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject* const&>(value));
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
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject*>&> __zz_cib_decl __zz_cib_OperatorEqual_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::std::vector<::PoDoFo::PdfObject*>&> x) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfObject*>&>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject*>::operator=(
        __zz_cib_::__zz_cib_FromAbiType<const ::std::vector<::PoDoFo::PdfObject*>&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject*>&> __zz_cib_decl __zz_cib_OperatorEqual_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject*>&&> x) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfObject*>&>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject*>::operator=(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject*>&&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl assign_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject*>::size_type> n, __zz_cib_AbiType_t<::PoDoFo::PdfObject* const&> u) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfObject*>::assign(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject*>::size_type>(n),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject* const&>(u)
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject*>::iterator> __zz_cib_decl begin_9(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfObject*>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject*>::begin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject*>::const_iterator> __zz_cib_decl begin_10(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfObject*>::const_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject*>::begin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject*>::iterator> __zz_cib_decl end_11(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfObject*>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject*>::end()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject*>::const_iterator> __zz_cib_decl end_12(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfObject*>::const_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject*>::end()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject*>::reverse_iterator> __zz_cib_decl rbegin_13(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfObject*>::reverse_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject*>::rbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject*>::const_reverse_iterator> __zz_cib_decl rbegin_14(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfObject*>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject*>::rbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject*>::reverse_iterator> __zz_cib_decl rend_15(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfObject*>::reverse_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject*>::rend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject*>::const_reverse_iterator> __zz_cib_decl rend_16(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfObject*>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject*>::rend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject*>::const_iterator> __zz_cib_decl cbegin_17(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfObject*>::const_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject*>::cbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject*>::const_iterator> __zz_cib_decl cend_18(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfObject*>::const_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject*>::cend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject*>::const_reverse_iterator> __zz_cib_decl crbegin_19(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfObject*>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject*>::crbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject*>::const_reverse_iterator> __zz_cib_decl crend_20(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfObject*>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject*>::crend()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl empty_21(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject*>::empty()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject*>::size_type> __zz_cib_decl size_22(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfObject*>::size_type>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject*>::size()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject*>::size_type> __zz_cib_decl max_size_23(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfObject*>::size_type>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject*>::max_size()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject*>::size_type> __zz_cib_decl capacity_24(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfObject*>::size_type>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject*>::capacity()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl resize_25(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject*>::size_type> sz) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfObject*>::resize(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject*>::size_type>(sz)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl resize_26(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject*>::size_type> sz, __zz_cib_AbiType_t<::PoDoFo::PdfObject* const&> c) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfObject*>::resize(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject*>::size_type>(sz),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject* const&>(c)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl reserve_27(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject*>::size_type> n) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfObject*>::reserve(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject*>::size_type>(n)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl shrink_to_fit_28(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfObject*>::shrink_to_fit();
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject*>::reference> __zz_cib_decl __zz_cib_OperatorIndex_29(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject*>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject*>::reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject*>::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject*>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject*>::const_reference> __zz_cib_decl __zz_cib_OperatorIndex_30(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject*>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject*>::const_reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject*>::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject*>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject*>::const_reference> __zz_cib_decl at_31(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject*>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject*>::const_reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject*>::at(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject*>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject*>::reference> __zz_cib_decl at_32(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject*>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject*>::reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject*>::at(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject*>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject*>::reference> __zz_cib_decl front_33(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject*>::reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject*>::front()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject*>::const_reference> __zz_cib_decl front_34(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject*>::const_reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject*>::front()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject*>::reference> __zz_cib_decl back_35(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject*>::reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject*>::back()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject*>::const_reference> __zz_cib_decl back_36(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject*>::const_reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject*>::back()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject**> __zz_cib_decl data_37(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject**>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject*>::data()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject* const *> __zz_cib_decl data_38(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject* const *>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject*>::data()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_back_39(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfObject* const&> x) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfObject*>::push_back(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject* const&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_back_40(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfObject*&&> x) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfObject*>::push_back(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*&&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl pop_back_41(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfObject*>::pop_back();
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject*>::iterator> __zz_cib_decl insert_42(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject*>::const_iterator> position, __zz_cib_AbiType_t<::PoDoFo::PdfObject* const&> x) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfObject*>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject*>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject*>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject* const&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject*>::iterator> __zz_cib_decl insert_43(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject*>::const_iterator> position, __zz_cib_AbiType_t<::PoDoFo::PdfObject*&&> x) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfObject*>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject*>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject*>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*&&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject*>::iterator> __zz_cib_decl insert_44(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject*>::const_iterator> position, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject*>::size_type> n, __zz_cib_AbiType_t<::PoDoFo::PdfObject* const&> x) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfObject*>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject*>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject*>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject*>::size_type>(n),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject* const&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject*>::iterator> __zz_cib_decl erase_45(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject*>::const_iterator> position) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfObject*>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject*>::erase(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject*>::const_iterator>(position)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject*>::iterator> __zz_cib_decl erase_46(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject*>::const_iterator> first, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject*>::const_iterator> last) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfObject*>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject*>::erase(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject*>::const_iterator>(first),
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject*>::const_iterator>(last)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl swap_47(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject*>&> __zz_cib_param0) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfObject*>::swap(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject*>&>(__zz_cib_param0)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl clear_48(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfObject*>::clear();
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class261 {
using namespace ::std;
namespace __zz_cib_Class307 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject*>>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject*>>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject*>>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject*>>::__zz_cib_Copy_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject*>>::__zz_cib_New_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject*>>::__zz_cib_Delete_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject*>>::__zz_cib_OperatorEqual_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject*>>::__zz_cib_OperatorEqual_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject*>>::assign_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject*>>::begin_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject*>>::begin_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject*>>::end_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject*>>::end_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject*>>::rbegin_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject*>>::rbegin_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject*>>::rend_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject*>>::rend_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject*>>::cbegin_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject*>>::cend_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject*>>::crbegin_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject*>>::crend_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject*>>::empty_21),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject*>>::size_22),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject*>>::max_size_23),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject*>>::capacity_24),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject*>>::resize_25),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject*>>::resize_26),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject*>>::reserve_27),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject*>>::shrink_to_fit_28),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject*>>::__zz_cib_OperatorIndex_29),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject*>>::__zz_cib_OperatorIndex_30),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject*>>::at_31),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject*>>::at_32),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject*>>::front_33),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject*>>::front_34),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject*>>::back_35),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject*>>::back_36),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject*>>::data_37),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject*>>::data_38),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject*>>::push_back_39),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject*>>::push_back_40),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject*>>::pop_back_41),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject*>>::insert_42),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject*>>::insert_43),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject*>>::insert_44),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject*>>::erase_45),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject*>>::erase_46),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject*>>::swap_47),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject*>>::clear_48)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 49 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::std;
template <>
struct __zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject>> : public ::std::vector<::PoDoFo::PdfObject> {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject>>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::std::vector<::PoDoFo::PdfObject>::vector;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>::size_type> n) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject>::size_type>(n));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>::size_type> n, __zz_cib_AbiType_t<const ::PoDoFo::PdfObject&> value) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject>::size_type>(n),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfObject&>(value));
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
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>&> __zz_cib_decl __zz_cib_OperatorEqual_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::std::vector<::PoDoFo::PdfObject>&> x) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfObject>&>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject>::operator=(
        __zz_cib_::__zz_cib_FromAbiType<const ::std::vector<::PoDoFo::PdfObject>&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>&> __zz_cib_decl __zz_cib_OperatorEqual_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>&&> x) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfObject>&>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject>::operator=(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject>&&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl assign_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>::size_type> n, __zz_cib_AbiType_t<const ::PoDoFo::PdfObject&> u) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfObject>::assign(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject>::size_type>(n),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfObject&>(u)
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>::iterator> __zz_cib_decl begin_9(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfObject>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject>::begin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>::const_iterator> __zz_cib_decl begin_10(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfObject>::const_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject>::begin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>::iterator> __zz_cib_decl end_11(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfObject>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject>::end()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>::const_iterator> __zz_cib_decl end_12(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfObject>::const_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject>::end()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>::reverse_iterator> __zz_cib_decl rbegin_13(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfObject>::reverse_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject>::rbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>::const_reverse_iterator> __zz_cib_decl rbegin_14(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfObject>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject>::rbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>::reverse_iterator> __zz_cib_decl rend_15(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfObject>::reverse_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject>::rend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>::const_reverse_iterator> __zz_cib_decl rend_16(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfObject>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject>::rend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>::const_iterator> __zz_cib_decl cbegin_17(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfObject>::const_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject>::cbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>::const_iterator> __zz_cib_decl cend_18(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfObject>::const_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject>::cend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>::const_reverse_iterator> __zz_cib_decl crbegin_19(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfObject>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject>::crbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>::const_reverse_iterator> __zz_cib_decl crend_20(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfObject>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject>::crend()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl empty_21(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject>::empty()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>::size_type> __zz_cib_decl size_22(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfObject>::size_type>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject>::size()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>::size_type> __zz_cib_decl max_size_23(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfObject>::size_type>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject>::max_size()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>::size_type> __zz_cib_decl capacity_24(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfObject>::size_type>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject>::capacity()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl resize_25(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>::size_type> sz) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfObject>::resize(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject>::size_type>(sz)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl resize_26(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>::size_type> sz, __zz_cib_AbiType_t<const ::PoDoFo::PdfObject&> c) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfObject>::resize(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject>::size_type>(sz),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfObject&>(c)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl reserve_27(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>::size_type> n) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfObject>::reserve(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject>::size_type>(n)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl shrink_to_fit_28(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfObject>::shrink_to_fit();
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::reference> __zz_cib_decl __zz_cib_OperatorIndex_29(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject>::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::const_reference> __zz_cib_decl __zz_cib_OperatorIndex_30(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::const_reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject>::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::const_reference> __zz_cib_decl at_31(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::const_reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject>::at(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::reference> __zz_cib_decl at_32(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject>::at(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::reference> __zz_cib_decl front_33(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject>::front()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::const_reference> __zz_cib_decl front_34(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::const_reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject>::front()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::reference> __zz_cib_decl back_35(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject>::back()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::const_reference> __zz_cib_decl back_36(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::const_reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject>::back()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_decl data_37(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject>::data()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfObject*> __zz_cib_decl data_38(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfObject*>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject>::data()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_back_39(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfObject&> x) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfObject>::push_back(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfObject&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_back_40(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfObject&&> x) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfObject>::push_back(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject&&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl pop_back_41(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfObject>::pop_back();
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>::iterator> __zz_cib_decl insert_42(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>::const_iterator> position, __zz_cib_AbiType_t<const ::PoDoFo::PdfObject&> x) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfObject>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfObject&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>::iterator> __zz_cib_decl insert_43(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>::const_iterator> position, __zz_cib_AbiType_t<::PoDoFo::PdfObject&&> x) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfObject>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject&&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>::iterator> __zz_cib_decl insert_44(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>::const_iterator> position, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>::size_type> n, __zz_cib_AbiType_t<const ::PoDoFo::PdfObject&> x) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfObject>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject>::size_type>(n),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfObject&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>::iterator> __zz_cib_decl erase_45(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>::const_iterator> position) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfObject>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject>::erase(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject>::const_iterator>(position)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>::iterator> __zz_cib_decl erase_46(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>::const_iterator> first, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>::const_iterator> last) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfObject>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfObject>::erase(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject>::const_iterator>(first),
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject>::const_iterator>(last)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl swap_47(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>&> __zz_cib_param0) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfObject>::swap(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject>&>(__zz_cib_param0)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl clear_48(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfObject>::clear();
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class261 {
using namespace ::std;
namespace __zz_cib_Class262 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject>>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject>>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject>>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject>>::__zz_cib_Copy_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject>>::__zz_cib_New_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject>>::__zz_cib_Delete_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject>>::__zz_cib_OperatorEqual_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject>>::__zz_cib_OperatorEqual_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject>>::assign_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject>>::begin_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject>>::begin_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject>>::end_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject>>::end_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject>>::rbegin_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject>>::rbegin_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject>>::rend_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject>>::rend_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject>>::cbegin_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject>>::cend_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject>>::crbegin_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject>>::crend_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject>>::empty_21),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject>>::size_22),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject>>::max_size_23),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject>>::capacity_24),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject>>::resize_25),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject>>::resize_26),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject>>::reserve_27),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject>>::shrink_to_fit_28),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject>>::__zz_cib_OperatorIndex_29),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject>>::__zz_cib_OperatorIndex_30),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject>>::at_31),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject>>::at_32),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject>>::front_33),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject>>::front_34),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject>>::back_35),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject>>::back_36),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject>>::data_37),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject>>::data_38),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject>>::push_back_39),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject>>::push_back_40),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject>>::pop_back_41),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject>>::insert_42),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject>>::insert_43),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject>>::insert_44),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject>>::erase_45),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject>>::erase_46),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject>>::swap_47),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfObject>>::clear_48)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 49 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::std;
template <>
struct __zz_cib_Delegator<::std::vector<::PoDoFo::PdfPage*>> : public ::std::vector<::PoDoFo::PdfPage*> {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfPage*>>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::std::vector<::PoDoFo::PdfPage*>::vector;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfPage*>::size_type> n) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfPage*>::size_type>(n));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfPage*>::size_type> n, __zz_cib_AbiType_t<::PoDoFo::PdfPage* const&> value) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfPage*>::size_type>(n),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfPage* const&>(value));
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
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfPage*>&> __zz_cib_decl __zz_cib_OperatorEqual_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::std::vector<::PoDoFo::PdfPage*>&> x) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfPage*>&>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfPage*>::operator=(
        __zz_cib_::__zz_cib_FromAbiType<const ::std::vector<::PoDoFo::PdfPage*>&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfPage*>&> __zz_cib_decl __zz_cib_OperatorEqual_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfPage*>&&> x) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfPage*>&>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfPage*>::operator=(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfPage*>&&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl assign_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfPage*>::size_type> n, __zz_cib_AbiType_t<::PoDoFo::PdfPage* const&> u) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfPage*>::assign(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfPage*>::size_type>(n),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfPage* const&>(u)
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfPage*>::iterator> __zz_cib_decl begin_9(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfPage*>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfPage*>::begin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfPage*>::const_iterator> __zz_cib_decl begin_10(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfPage*>::const_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfPage*>::begin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfPage*>::iterator> __zz_cib_decl end_11(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfPage*>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfPage*>::end()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfPage*>::const_iterator> __zz_cib_decl end_12(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfPage*>::const_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfPage*>::end()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfPage*>::reverse_iterator> __zz_cib_decl rbegin_13(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfPage*>::reverse_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfPage*>::rbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfPage*>::const_reverse_iterator> __zz_cib_decl rbegin_14(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfPage*>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfPage*>::rbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfPage*>::reverse_iterator> __zz_cib_decl rend_15(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfPage*>::reverse_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfPage*>::rend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfPage*>::const_reverse_iterator> __zz_cib_decl rend_16(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfPage*>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfPage*>::rend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfPage*>::const_iterator> __zz_cib_decl cbegin_17(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfPage*>::const_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfPage*>::cbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfPage*>::const_iterator> __zz_cib_decl cend_18(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfPage*>::const_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfPage*>::cend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfPage*>::const_reverse_iterator> __zz_cib_decl crbegin_19(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfPage*>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfPage*>::crbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfPage*>::const_reverse_iterator> __zz_cib_decl crend_20(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfPage*>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfPage*>::crend()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl empty_21(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfPage*>::empty()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfPage*>::size_type> __zz_cib_decl size_22(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfPage*>::size_type>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfPage*>::size()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfPage*>::size_type> __zz_cib_decl max_size_23(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfPage*>::size_type>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfPage*>::max_size()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfPage*>::size_type> __zz_cib_decl capacity_24(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfPage*>::size_type>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfPage*>::capacity()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl resize_25(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfPage*>::size_type> sz) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfPage*>::resize(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfPage*>::size_type>(sz)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl resize_26(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfPage*>::size_type> sz, __zz_cib_AbiType_t<::PoDoFo::PdfPage* const&> c) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfPage*>::resize(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfPage*>::size_type>(sz),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfPage* const&>(c)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl reserve_27(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfPage*>::size_type> n) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfPage*>::reserve(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfPage*>::size_type>(n)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl shrink_to_fit_28(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfPage*>::shrink_to_fit();
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfPage*>::reference> __zz_cib_decl __zz_cib_OperatorIndex_29(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfPage*>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfPage*>::reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfPage*>::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfPage*>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfPage*>::const_reference> __zz_cib_decl __zz_cib_OperatorIndex_30(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfPage*>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfPage*>::const_reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfPage*>::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfPage*>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfPage*>::const_reference> __zz_cib_decl at_31(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfPage*>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfPage*>::const_reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfPage*>::at(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfPage*>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfPage*>::reference> __zz_cib_decl at_32(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfPage*>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfPage*>::reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfPage*>::at(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfPage*>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfPage*>::reference> __zz_cib_decl front_33(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfPage*>::reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfPage*>::front()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfPage*>::const_reference> __zz_cib_decl front_34(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfPage*>::const_reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfPage*>::front()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfPage*>::reference> __zz_cib_decl back_35(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfPage*>::reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfPage*>::back()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfPage*>::const_reference> __zz_cib_decl back_36(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfPage*>::const_reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfPage*>::back()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfPage**> __zz_cib_decl data_37(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfPage**>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfPage*>::data()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfPage* const *> __zz_cib_decl data_38(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfPage* const *>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfPage*>::data()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_back_39(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfPage* const&> x) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfPage*>::push_back(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfPage* const&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_back_40(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfPage*&&> x) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfPage*>::push_back(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfPage*&&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl pop_back_41(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfPage*>::pop_back();
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfPage*>::iterator> __zz_cib_decl insert_42(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfPage*>::const_iterator> position, __zz_cib_AbiType_t<::PoDoFo::PdfPage* const&> x) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfPage*>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfPage*>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfPage*>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfPage* const&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfPage*>::iterator> __zz_cib_decl insert_43(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfPage*>::const_iterator> position, __zz_cib_AbiType_t<::PoDoFo::PdfPage*&&> x) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfPage*>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfPage*>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfPage*>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfPage*&&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfPage*>::iterator> __zz_cib_decl insert_44(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfPage*>::const_iterator> position, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfPage*>::size_type> n, __zz_cib_AbiType_t<::PoDoFo::PdfPage* const&> x) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfPage*>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfPage*>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfPage*>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfPage*>::size_type>(n),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfPage* const&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfPage*>::iterator> __zz_cib_decl erase_45(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfPage*>::const_iterator> position) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfPage*>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfPage*>::erase(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfPage*>::const_iterator>(position)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfPage*>::iterator> __zz_cib_decl erase_46(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfPage*>::const_iterator> first, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfPage*>::const_iterator> last) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfPage*>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfPage*>::erase(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfPage*>::const_iterator>(first),
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfPage*>::const_iterator>(last)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl swap_47(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfPage*>&> __zz_cib_param0) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfPage*>::swap(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfPage*>&>(__zz_cib_param0)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl clear_48(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfPage*>::clear();
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class261 {
using namespace ::std;
namespace __zz_cib_Class312 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfPage*>>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfPage*>>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfPage*>>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfPage*>>::__zz_cib_Copy_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfPage*>>::__zz_cib_New_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfPage*>>::__zz_cib_Delete_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfPage*>>::__zz_cib_OperatorEqual_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfPage*>>::__zz_cib_OperatorEqual_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfPage*>>::assign_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfPage*>>::begin_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfPage*>>::begin_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfPage*>>::end_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfPage*>>::end_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfPage*>>::rbegin_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfPage*>>::rbegin_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfPage*>>::rend_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfPage*>>::rend_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfPage*>>::cbegin_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfPage*>>::cend_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfPage*>>::crbegin_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfPage*>>::crend_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfPage*>>::empty_21),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfPage*>>::size_22),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfPage*>>::max_size_23),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfPage*>>::capacity_24),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfPage*>>::resize_25),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfPage*>>::resize_26),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfPage*>>::reserve_27),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfPage*>>::shrink_to_fit_28),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfPage*>>::__zz_cib_OperatorIndex_29),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfPage*>>::__zz_cib_OperatorIndex_30),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfPage*>>::at_31),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfPage*>>::at_32),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfPage*>>::front_33),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfPage*>>::front_34),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfPage*>>::back_35),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfPage*>>::back_36),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfPage*>>::data_37),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfPage*>>::data_38),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfPage*>>::push_back_39),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfPage*>>::push_back_40),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfPage*>>::pop_back_41),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfPage*>>::insert_42),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfPage*>>::insert_43),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfPage*>>::insert_44),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfPage*>>::erase_45),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfPage*>>::erase_46),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfPage*>>::swap_47),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfPage*>>::clear_48)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 49 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::std;
template <>
struct __zz_cib_Delegator<::std::vector<::PoDoFo::PdfRect>> : public ::std::vector<::PoDoFo::PdfRect> {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfRect>>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::std::vector<::PoDoFo::PdfRect>::vector;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfRect>::size_type> n) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfRect>::size_type>(n));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfRect>::size_type> n, __zz_cib_AbiType_t<const ::PoDoFo::PdfRect&> value) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfRect>::size_type>(n),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect&>(value));
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
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfRect>&> __zz_cib_decl __zz_cib_OperatorEqual_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::std::vector<::PoDoFo::PdfRect>&> x) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfRect>&>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfRect>::operator=(
        __zz_cib_::__zz_cib_FromAbiType<const ::std::vector<::PoDoFo::PdfRect>&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfRect>&> __zz_cib_decl __zz_cib_OperatorEqual_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfRect>&&> x) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfRect>&>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfRect>::operator=(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfRect>&&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl assign_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfRect>::size_type> n, __zz_cib_AbiType_t<const ::PoDoFo::PdfRect&> u) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfRect>::assign(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfRect>::size_type>(n),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect&>(u)
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfRect>::iterator> __zz_cib_decl begin_9(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfRect>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfRect>::begin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfRect>::const_iterator> __zz_cib_decl begin_10(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfRect>::const_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfRect>::begin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfRect>::iterator> __zz_cib_decl end_11(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfRect>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfRect>::end()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfRect>::const_iterator> __zz_cib_decl end_12(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfRect>::const_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfRect>::end()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfRect>::reverse_iterator> __zz_cib_decl rbegin_13(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfRect>::reverse_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfRect>::rbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfRect>::const_reverse_iterator> __zz_cib_decl rbegin_14(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfRect>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfRect>::rbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfRect>::reverse_iterator> __zz_cib_decl rend_15(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfRect>::reverse_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfRect>::rend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfRect>::const_reverse_iterator> __zz_cib_decl rend_16(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfRect>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfRect>::rend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfRect>::const_iterator> __zz_cib_decl cbegin_17(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfRect>::const_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfRect>::cbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfRect>::const_iterator> __zz_cib_decl cend_18(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfRect>::const_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfRect>::cend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfRect>::const_reverse_iterator> __zz_cib_decl crbegin_19(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfRect>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfRect>::crbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfRect>::const_reverse_iterator> __zz_cib_decl crend_20(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfRect>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfRect>::crend()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl empty_21(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfRect>::empty()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfRect>::size_type> __zz_cib_decl size_22(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfRect>::size_type>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfRect>::size()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfRect>::size_type> __zz_cib_decl max_size_23(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfRect>::size_type>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfRect>::max_size()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfRect>::size_type> __zz_cib_decl capacity_24(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfRect>::size_type>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfRect>::capacity()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl resize_25(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfRect>::size_type> sz) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfRect>::resize(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfRect>::size_type>(sz)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl resize_26(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfRect>::size_type> sz, __zz_cib_AbiType_t<const ::PoDoFo::PdfRect&> c) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfRect>::resize(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfRect>::size_type>(sz),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect&>(c)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl reserve_27(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfRect>::size_type> n) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfRect>::reserve(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfRect>::size_type>(n)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl shrink_to_fit_28(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfRect>::shrink_to_fit();
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfRect>::reference> __zz_cib_decl __zz_cib_OperatorIndex_29(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfRect>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfRect>::reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfRect>::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfRect>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfRect>::const_reference> __zz_cib_decl __zz_cib_OperatorIndex_30(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfRect>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfRect>::const_reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfRect>::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfRect>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfRect>::const_reference> __zz_cib_decl at_31(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfRect>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfRect>::const_reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfRect>::at(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfRect>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfRect>::reference> __zz_cib_decl at_32(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfRect>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfRect>::reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfRect>::at(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfRect>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfRect>::reference> __zz_cib_decl front_33(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfRect>::reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfRect>::front()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfRect>::const_reference> __zz_cib_decl front_34(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfRect>::const_reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfRect>::front()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfRect>::reference> __zz_cib_decl back_35(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfRect>::reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfRect>::back()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfRect>::const_reference> __zz_cib_decl back_36(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfRect>::const_reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfRect>::back()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfRect*> __zz_cib_decl data_37(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfRect*>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfRect>::data()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfRect*> __zz_cib_decl data_38(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfRect*>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfRect>::data()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_back_39(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfRect&> x) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfRect>::push_back(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_back_40(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfRect&&> x) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfRect>::push_back(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfRect&&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl pop_back_41(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfRect>::pop_back();
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfRect>::iterator> __zz_cib_decl insert_42(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfRect>::const_iterator> position, __zz_cib_AbiType_t<const ::PoDoFo::PdfRect&> x) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfRect>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfRect>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfRect>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfRect>::iterator> __zz_cib_decl insert_43(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfRect>::const_iterator> position, __zz_cib_AbiType_t<::PoDoFo::PdfRect&&> x) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfRect>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfRect>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfRect>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfRect&&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfRect>::iterator> __zz_cib_decl insert_44(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfRect>::const_iterator> position, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfRect>::size_type> n, __zz_cib_AbiType_t<const ::PoDoFo::PdfRect&> x) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfRect>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfRect>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfRect>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfRect>::size_type>(n),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRect&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfRect>::iterator> __zz_cib_decl erase_45(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfRect>::const_iterator> position) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfRect>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfRect>::erase(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfRect>::const_iterator>(position)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfRect>::iterator> __zz_cib_decl erase_46(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfRect>::const_iterator> first, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfRect>::const_iterator> last) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfRect>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfRect>::erase(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfRect>::const_iterator>(first),
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfRect>::const_iterator>(last)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl swap_47(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfRect>&> __zz_cib_param0) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfRect>::swap(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfRect>&>(__zz_cib_param0)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl clear_48(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfRect>::clear();
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class261 {
using namespace ::std;
namespace __zz_cib_Class282 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfRect>>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfRect>>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfRect>>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfRect>>::__zz_cib_Copy_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfRect>>::__zz_cib_New_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfRect>>::__zz_cib_Delete_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfRect>>::__zz_cib_OperatorEqual_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfRect>>::__zz_cib_OperatorEqual_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfRect>>::assign_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfRect>>::begin_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfRect>>::begin_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfRect>>::end_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfRect>>::end_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfRect>>::rbegin_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfRect>>::rbegin_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfRect>>::rend_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfRect>>::rend_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfRect>>::cbegin_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfRect>>::cend_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfRect>>::crbegin_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfRect>>::crend_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfRect>>::empty_21),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfRect>>::size_22),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfRect>>::max_size_23),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfRect>>::capacity_24),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfRect>>::resize_25),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfRect>>::resize_26),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfRect>>::reserve_27),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfRect>>::shrink_to_fit_28),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfRect>>::__zz_cib_OperatorIndex_29),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfRect>>::__zz_cib_OperatorIndex_30),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfRect>>::at_31),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfRect>>::at_32),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfRect>>::front_33),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfRect>>::front_34),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfRect>>::back_35),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfRect>>::back_36),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfRect>>::data_37),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfRect>>::data_38),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfRect>>::push_back_39),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfRect>>::push_back_40),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfRect>>::pop_back_41),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfRect>>::insert_42),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfRect>>::insert_43),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfRect>>::insert_44),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfRect>>::erase_45),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfRect>>::erase_46),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfRect>>::swap_47),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfRect>>::clear_48)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 49 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::std;
template <>
struct __zz_cib_Delegator<::std::vector<::PoDoFo::PdfString>> : public ::std::vector<::PoDoFo::PdfString> {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfString>>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::std::vector<::PoDoFo::PdfString>::vector;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfString>::size_type> n) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfString>::size_type>(n));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfString>::size_type> n, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> value) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfString>::size_type>(n),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(value));
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
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfString>&> __zz_cib_decl __zz_cib_OperatorEqual_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::std::vector<::PoDoFo::PdfString>&> x) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfString>&>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfString>::operator=(
        __zz_cib_::__zz_cib_FromAbiType<const ::std::vector<::PoDoFo::PdfString>&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfString>&> __zz_cib_decl __zz_cib_OperatorEqual_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfString>&&> x) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfString>&>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfString>::operator=(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfString>&&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl assign_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfString>::size_type> n, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> u) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfString>::assign(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfString>::size_type>(n),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(u)
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfString>::iterator> __zz_cib_decl begin_9(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfString>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfString>::begin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfString>::const_iterator> __zz_cib_decl begin_10(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfString>::const_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfString>::begin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfString>::iterator> __zz_cib_decl end_11(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfString>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfString>::end()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfString>::const_iterator> __zz_cib_decl end_12(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfString>::const_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfString>::end()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfString>::reverse_iterator> __zz_cib_decl rbegin_13(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfString>::reverse_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfString>::rbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfString>::const_reverse_iterator> __zz_cib_decl rbegin_14(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfString>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfString>::rbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfString>::reverse_iterator> __zz_cib_decl rend_15(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfString>::reverse_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfString>::rend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfString>::const_reverse_iterator> __zz_cib_decl rend_16(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfString>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfString>::rend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfString>::const_iterator> __zz_cib_decl cbegin_17(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfString>::const_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfString>::cbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfString>::const_iterator> __zz_cib_decl cend_18(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfString>::const_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfString>::cend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfString>::const_reverse_iterator> __zz_cib_decl crbegin_19(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfString>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfString>::crbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfString>::const_reverse_iterator> __zz_cib_decl crend_20(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfString>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfString>::crend()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl empty_21(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfString>::empty()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfString>::size_type> __zz_cib_decl size_22(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfString>::size_type>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfString>::size()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfString>::size_type> __zz_cib_decl max_size_23(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfString>::size_type>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfString>::max_size()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfString>::size_type> __zz_cib_decl capacity_24(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfString>::size_type>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfString>::capacity()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl resize_25(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfString>::size_type> sz) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfString>::resize(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfString>::size_type>(sz)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl resize_26(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfString>::size_type> sz, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> c) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfString>::resize(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfString>::size_type>(sz),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(c)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl reserve_27(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfString>::size_type> n) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfString>::reserve(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfString>::size_type>(n)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl shrink_to_fit_28(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfString>::shrink_to_fit();
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfString>::reference> __zz_cib_decl __zz_cib_OperatorIndex_29(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfString>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfString>::reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfString>::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfString>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfString>::const_reference> __zz_cib_decl __zz_cib_OperatorIndex_30(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfString>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfString>::const_reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfString>::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfString>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfString>::const_reference> __zz_cib_decl at_31(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfString>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfString>::const_reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfString>::at(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfString>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfString>::reference> __zz_cib_decl at_32(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfString>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfString>::reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfString>::at(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfString>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfString>::reference> __zz_cib_decl front_33(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfString>::reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfString>::front()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfString>::const_reference> __zz_cib_decl front_34(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfString>::const_reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfString>::front()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfString>::reference> __zz_cib_decl back_35(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfString>::reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfString>::back()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfString>::const_reference> __zz_cib_decl back_36(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfString>::const_reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfString>::back()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfString*> __zz_cib_decl data_37(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfString*>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfString>::data()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfString*> __zz_cib_decl data_38(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfString*>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfString>::data()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_back_39(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> x) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfString>::push_back(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_back_40(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfString&&> x) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfString>::push_back(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfString&&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl pop_back_41(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfString>::pop_back();
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfString>::iterator> __zz_cib_decl insert_42(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfString>::const_iterator> position, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> x) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfString>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfString>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfString>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfString>::iterator> __zz_cib_decl insert_43(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfString>::const_iterator> position, __zz_cib_AbiType_t<::PoDoFo::PdfString&&> x) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfString>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfString>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfString>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfString&&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfString>::iterator> __zz_cib_decl insert_44(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfString>::const_iterator> position, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfString>::size_type> n, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> x) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfString>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfString>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfString>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfString>::size_type>(n),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfString>::iterator> __zz_cib_decl erase_45(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfString>::const_iterator> position) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfString>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfString>::erase(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfString>::const_iterator>(position)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfString>::iterator> __zz_cib_decl erase_46(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfString>::const_iterator> first, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfString>::const_iterator> last) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfString>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::PdfString>::erase(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfString>::const_iterator>(first),
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfString>::const_iterator>(last)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl swap_47(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfString>&> __zz_cib_param0) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfString>::swap(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfString>&>(__zz_cib_param0)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl clear_48(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::vector<::PoDoFo::PdfString>::clear();
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class261 {
using namespace ::std;
namespace __zz_cib_Class317 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfString>>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfString>>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfString>>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfString>>::__zz_cib_Copy_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfString>>::__zz_cib_New_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfString>>::__zz_cib_Delete_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfString>>::__zz_cib_OperatorEqual_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfString>>::__zz_cib_OperatorEqual_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfString>>::assign_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfString>>::begin_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfString>>::begin_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfString>>::end_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfString>>::end_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfString>>::rbegin_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfString>>::rbegin_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfString>>::rend_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfString>>::rend_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfString>>::cbegin_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfString>>::cend_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfString>>::crbegin_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfString>>::crend_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfString>>::empty_21),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfString>>::size_22),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfString>>::max_size_23),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfString>>::capacity_24),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfString>>::resize_25),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfString>>::resize_26),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfString>>::reserve_27),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfString>>::shrink_to_fit_28),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfString>>::__zz_cib_OperatorIndex_29),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfString>>::__zz_cib_OperatorIndex_30),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfString>>::at_31),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfString>>::at_32),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfString>>::front_33),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfString>>::front_34),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfString>>::back_35),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfString>>::back_36),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfString>>::data_37),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfString>>::data_38),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfString>>::push_back_39),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfString>>::push_back_40),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfString>>::pop_back_41),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfString>>::insert_42),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfString>>::insert_43),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfString>>::insert_44),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfString>>::erase_45),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfString>>::erase_46),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfString>>::swap_47),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::PdfString>>::clear_48)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 49 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::std;
template <>
struct __zz_cib_Delegator<::std::vector<::PoDoFo::TFontCacheElement>> : public ::std::vector<::PoDoFo::TFontCacheElement> {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::TFontCacheElement>>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::std::vector<::PoDoFo::TFontCacheElement>::vector;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>::size_type> n) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::TFontCacheElement>::size_type>(n));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>::size_type> n, __zz_cib_AbiType_t<const ::PoDoFo::TFontCacheElement&> value) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::TFontCacheElement>::size_type>(n),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::TFontCacheElement&>(value));
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
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>&> __zz_cib_decl __zz_cib_OperatorEqual_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::std::vector<::PoDoFo::TFontCacheElement>&> x) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::TFontCacheElement>&>(
      __zz_cib_obj->::std::vector<::PoDoFo::TFontCacheElement>::operator=(
        __zz_cib_::__zz_cib_FromAbiType<const ::std::vector<::PoDoFo::TFontCacheElement>&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>&> __zz_cib_decl __zz_cib_OperatorEqual_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>&&> x) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::TFontCacheElement>&>(
      __zz_cib_obj->::std::vector<::PoDoFo::TFontCacheElement>::operator=(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::TFontCacheElement>&&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl assign_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>::size_type> n, __zz_cib_AbiType_t<const ::PoDoFo::TFontCacheElement&> u) {
    __zz_cib_obj->::std::vector<::PoDoFo::TFontCacheElement>::assign(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::TFontCacheElement>::size_type>(n),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::TFontCacheElement&>(u)
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>::iterator> __zz_cib_decl begin_9(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::TFontCacheElement>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::TFontCacheElement>::begin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>::const_iterator> __zz_cib_decl begin_10(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::TFontCacheElement>::const_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::TFontCacheElement>::begin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>::iterator> __zz_cib_decl end_11(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::TFontCacheElement>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::TFontCacheElement>::end()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>::const_iterator> __zz_cib_decl end_12(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::TFontCacheElement>::const_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::TFontCacheElement>::end()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>::reverse_iterator> __zz_cib_decl rbegin_13(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::TFontCacheElement>::reverse_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::TFontCacheElement>::rbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>::const_reverse_iterator> __zz_cib_decl rbegin_14(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::TFontCacheElement>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::TFontCacheElement>::rbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>::reverse_iterator> __zz_cib_decl rend_15(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::TFontCacheElement>::reverse_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::TFontCacheElement>::rend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>::const_reverse_iterator> __zz_cib_decl rend_16(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::TFontCacheElement>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::TFontCacheElement>::rend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>::const_iterator> __zz_cib_decl cbegin_17(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::TFontCacheElement>::const_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::TFontCacheElement>::cbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>::const_iterator> __zz_cib_decl cend_18(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::TFontCacheElement>::const_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::TFontCacheElement>::cend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>::const_reverse_iterator> __zz_cib_decl crbegin_19(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::TFontCacheElement>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::TFontCacheElement>::crbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>::const_reverse_iterator> __zz_cib_decl crend_20(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::TFontCacheElement>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::TFontCacheElement>::crend()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl empty_21(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::std::vector<::PoDoFo::TFontCacheElement>::empty()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>::size_type> __zz_cib_decl size_22(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::TFontCacheElement>::size_type>(
      __zz_cib_obj->::std::vector<::PoDoFo::TFontCacheElement>::size()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>::size_type> __zz_cib_decl max_size_23(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::TFontCacheElement>::size_type>(
      __zz_cib_obj->::std::vector<::PoDoFo::TFontCacheElement>::max_size()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>::size_type> __zz_cib_decl capacity_24(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::TFontCacheElement>::size_type>(
      __zz_cib_obj->::std::vector<::PoDoFo::TFontCacheElement>::capacity()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl resize_25(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>::size_type> sz) {
    __zz_cib_obj->::std::vector<::PoDoFo::TFontCacheElement>::resize(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::TFontCacheElement>::size_type>(sz)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl resize_26(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>::size_type> sz, __zz_cib_AbiType_t<const ::PoDoFo::TFontCacheElement&> c) {
    __zz_cib_obj->::std::vector<::PoDoFo::TFontCacheElement>::resize(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::TFontCacheElement>::size_type>(sz),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::TFontCacheElement&>(c)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl reserve_27(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>::size_type> n) {
    __zz_cib_obj->::std::vector<::PoDoFo::TFontCacheElement>::reserve(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::TFontCacheElement>::size_type>(n)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl shrink_to_fit_28(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::vector<::PoDoFo::TFontCacheElement>::shrink_to_fit();
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::TFontCacheElement>::reference> __zz_cib_decl __zz_cib_OperatorIndex_29(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::TFontCacheElement>::reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::TFontCacheElement>::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::TFontCacheElement>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::TFontCacheElement>::const_reference> __zz_cib_decl __zz_cib_OperatorIndex_30(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::TFontCacheElement>::const_reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::TFontCacheElement>::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::TFontCacheElement>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::TFontCacheElement>::const_reference> __zz_cib_decl at_31(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::TFontCacheElement>::const_reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::TFontCacheElement>::at(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::TFontCacheElement>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::TFontCacheElement>::reference> __zz_cib_decl at_32(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::TFontCacheElement>::reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::TFontCacheElement>::at(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::TFontCacheElement>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::TFontCacheElement>::reference> __zz_cib_decl front_33(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::TFontCacheElement>::reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::TFontCacheElement>::front()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::TFontCacheElement>::const_reference> __zz_cib_decl front_34(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::TFontCacheElement>::const_reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::TFontCacheElement>::front()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::TFontCacheElement>::reference> __zz_cib_decl back_35(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::TFontCacheElement>::reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::TFontCacheElement>::back()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::TFontCacheElement>::const_reference> __zz_cib_decl back_36(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::TFontCacheElement>::const_reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::TFontCacheElement>::back()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::TFontCacheElement*> __zz_cib_decl data_37(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::TFontCacheElement*>(
      __zz_cib_obj->::std::vector<::PoDoFo::TFontCacheElement>::data()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::TFontCacheElement*> __zz_cib_decl data_38(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::TFontCacheElement*>(
      __zz_cib_obj->::std::vector<::PoDoFo::TFontCacheElement>::data()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_back_39(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::TFontCacheElement&> x) {
    __zz_cib_obj->::std::vector<::PoDoFo::TFontCacheElement>::push_back(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::TFontCacheElement&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_back_40(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::TFontCacheElement&&> x) {
    __zz_cib_obj->::std::vector<::PoDoFo::TFontCacheElement>::push_back(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::TFontCacheElement&&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl pop_back_41(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::vector<::PoDoFo::TFontCacheElement>::pop_back();
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>::iterator> __zz_cib_decl insert_42(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>::const_iterator> position, __zz_cib_AbiType_t<const ::PoDoFo::TFontCacheElement&> x) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::TFontCacheElement>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::TFontCacheElement>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::TFontCacheElement>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::TFontCacheElement&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>::iterator> __zz_cib_decl insert_43(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>::const_iterator> position, __zz_cib_AbiType_t<::PoDoFo::TFontCacheElement&&> x) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::TFontCacheElement>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::TFontCacheElement>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::TFontCacheElement>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::TFontCacheElement&&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>::iterator> __zz_cib_decl insert_44(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>::const_iterator> position, __zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>::size_type> n, __zz_cib_AbiType_t<const ::PoDoFo::TFontCacheElement&> x) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::TFontCacheElement>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::TFontCacheElement>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::TFontCacheElement>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::TFontCacheElement>::size_type>(n),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::TFontCacheElement&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>::iterator> __zz_cib_decl erase_45(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>::const_iterator> position) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::TFontCacheElement>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::TFontCacheElement>::erase(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::TFontCacheElement>::const_iterator>(position)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>::iterator> __zz_cib_decl erase_46(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>::const_iterator> first, __zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>::const_iterator> last) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::TFontCacheElement>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::TFontCacheElement>::erase(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::TFontCacheElement>::const_iterator>(first),
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::TFontCacheElement>::const_iterator>(last)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl swap_47(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::TFontCacheElement>&> __zz_cib_param0) {
    __zz_cib_obj->::std::vector<::PoDoFo::TFontCacheElement>::swap(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::TFontCacheElement>&>(__zz_cib_param0)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl clear_48(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::vector<::PoDoFo::TFontCacheElement>::clear();
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class261 {
using namespace ::std;
namespace __zz_cib_Class332 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::TFontCacheElement>>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::TFontCacheElement>>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::TFontCacheElement>>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::TFontCacheElement>>::__zz_cib_Copy_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::TFontCacheElement>>::__zz_cib_New_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::TFontCacheElement>>::__zz_cib_Delete_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::TFontCacheElement>>::__zz_cib_OperatorEqual_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::TFontCacheElement>>::__zz_cib_OperatorEqual_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::TFontCacheElement>>::assign_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::TFontCacheElement>>::begin_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::TFontCacheElement>>::begin_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::TFontCacheElement>>::end_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::TFontCacheElement>>::end_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::TFontCacheElement>>::rbegin_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::TFontCacheElement>>::rbegin_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::TFontCacheElement>>::rend_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::TFontCacheElement>>::rend_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::TFontCacheElement>>::cbegin_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::TFontCacheElement>>::cend_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::TFontCacheElement>>::crbegin_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::TFontCacheElement>>::crend_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::TFontCacheElement>>::empty_21),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::TFontCacheElement>>::size_22),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::TFontCacheElement>>::max_size_23),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::TFontCacheElement>>::capacity_24),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::TFontCacheElement>>::resize_25),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::TFontCacheElement>>::resize_26),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::TFontCacheElement>>::reserve_27),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::TFontCacheElement>>::shrink_to_fit_28),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::TFontCacheElement>>::__zz_cib_OperatorIndex_29),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::TFontCacheElement>>::__zz_cib_OperatorIndex_30),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::TFontCacheElement>>::at_31),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::TFontCacheElement>>::at_32),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::TFontCacheElement>>::front_33),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::TFontCacheElement>>::front_34),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::TFontCacheElement>>::back_35),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::TFontCacheElement>>::back_36),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::TFontCacheElement>>::data_37),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::TFontCacheElement>>::data_38),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::TFontCacheElement>>::push_back_39),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::TFontCacheElement>>::push_back_40),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::TFontCacheElement>>::pop_back_41),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::TFontCacheElement>>::insert_42),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::TFontCacheElement>>::insert_43),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::TFontCacheElement>>::insert_44),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::TFontCacheElement>>::erase_45),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::TFontCacheElement>>::erase_46),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::TFontCacheElement>>::swap_47),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::TFontCacheElement>>::clear_48)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 49 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::std;
template <>
struct __zz_cib_Delegator<::std::vector<::PoDoFo::pdf_int64>> : public ::std::vector<::PoDoFo::pdf_int64> {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::pdf_int64>>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::std::vector<::PoDoFo::pdf_int64>::vector;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<::std::vector<::PoDoFo::pdf_int64>::size_type> n) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::pdf_int64>::size_type>(n));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<::std::vector<::PoDoFo::pdf_int64>::size_type> n, __zz_cib_AbiType_t<const ::PoDoFo::pdf_int64&> value) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::pdf_int64>::size_type>(n),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::pdf_int64&>(value));
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
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::pdf_int64>&> __zz_cib_decl __zz_cib_OperatorEqual_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::std::vector<::PoDoFo::pdf_int64>&> x) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::pdf_int64>&>(
      __zz_cib_obj->::std::vector<::PoDoFo::pdf_int64>::operator=(
        __zz_cib_::__zz_cib_FromAbiType<const ::std::vector<::PoDoFo::pdf_int64>&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::pdf_int64>&> __zz_cib_decl __zz_cib_OperatorEqual_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::pdf_int64>&&> x) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::pdf_int64>&>(
      __zz_cib_obj->::std::vector<::PoDoFo::pdf_int64>::operator=(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::pdf_int64>&&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl assign_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::pdf_int64>::size_type> n, __zz_cib_AbiType_t<const ::PoDoFo::pdf_int64&> u) {
    __zz_cib_obj->::std::vector<::PoDoFo::pdf_int64>::assign(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::pdf_int64>::size_type>(n),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::pdf_int64&>(u)
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::pdf_int64>::iterator> __zz_cib_decl begin_9(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::pdf_int64>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::pdf_int64>::begin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::pdf_int64>::const_iterator> __zz_cib_decl begin_10(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::pdf_int64>::const_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::pdf_int64>::begin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::pdf_int64>::iterator> __zz_cib_decl end_11(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::pdf_int64>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::pdf_int64>::end()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::pdf_int64>::const_iterator> __zz_cib_decl end_12(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::pdf_int64>::const_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::pdf_int64>::end()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::pdf_int64>::reverse_iterator> __zz_cib_decl rbegin_13(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::pdf_int64>::reverse_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::pdf_int64>::rbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::pdf_int64>::const_reverse_iterator> __zz_cib_decl rbegin_14(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::pdf_int64>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::pdf_int64>::rbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::pdf_int64>::reverse_iterator> __zz_cib_decl rend_15(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::pdf_int64>::reverse_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::pdf_int64>::rend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::pdf_int64>::const_reverse_iterator> __zz_cib_decl rend_16(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::pdf_int64>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::pdf_int64>::rend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::pdf_int64>::const_iterator> __zz_cib_decl cbegin_17(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::pdf_int64>::const_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::pdf_int64>::cbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::pdf_int64>::const_iterator> __zz_cib_decl cend_18(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::pdf_int64>::const_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::pdf_int64>::cend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::pdf_int64>::const_reverse_iterator> __zz_cib_decl crbegin_19(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::pdf_int64>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::pdf_int64>::crbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::pdf_int64>::const_reverse_iterator> __zz_cib_decl crend_20(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::pdf_int64>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::pdf_int64>::crend()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl empty_21(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::std::vector<::PoDoFo::pdf_int64>::empty()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::pdf_int64>::size_type> __zz_cib_decl size_22(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::pdf_int64>::size_type>(
      __zz_cib_obj->::std::vector<::PoDoFo::pdf_int64>::size()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::pdf_int64>::size_type> __zz_cib_decl max_size_23(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::pdf_int64>::size_type>(
      __zz_cib_obj->::std::vector<::PoDoFo::pdf_int64>::max_size()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::pdf_int64>::size_type> __zz_cib_decl capacity_24(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::pdf_int64>::size_type>(
      __zz_cib_obj->::std::vector<::PoDoFo::pdf_int64>::capacity()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl resize_25(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::pdf_int64>::size_type> sz) {
    __zz_cib_obj->::std::vector<::PoDoFo::pdf_int64>::resize(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::pdf_int64>::size_type>(sz)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl resize_26(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::pdf_int64>::size_type> sz, __zz_cib_AbiType_t<const ::PoDoFo::pdf_int64&> c) {
    __zz_cib_obj->::std::vector<::PoDoFo::pdf_int64>::resize(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::pdf_int64>::size_type>(sz),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::pdf_int64&>(c)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl reserve_27(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::pdf_int64>::size_type> n) {
    __zz_cib_obj->::std::vector<::PoDoFo::pdf_int64>::reserve(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::pdf_int64>::size_type>(n)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl shrink_to_fit_28(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::vector<::PoDoFo::pdf_int64>::shrink_to_fit();
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::pdf_int64>::reference> __zz_cib_decl __zz_cib_OperatorIndex_29(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::pdf_int64>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::pdf_int64>::reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::pdf_int64>::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::pdf_int64>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::pdf_int64>::const_reference> __zz_cib_decl __zz_cib_OperatorIndex_30(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::pdf_int64>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::pdf_int64>::const_reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::pdf_int64>::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::pdf_int64>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::pdf_int64>::const_reference> __zz_cib_decl at_31(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::pdf_int64>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::pdf_int64>::const_reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::pdf_int64>::at(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::pdf_int64>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::pdf_int64>::reference> __zz_cib_decl at_32(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::pdf_int64>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::pdf_int64>::reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::pdf_int64>::at(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::pdf_int64>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::pdf_int64>::reference> __zz_cib_decl front_33(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::pdf_int64>::reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::pdf_int64>::front()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::pdf_int64>::const_reference> __zz_cib_decl front_34(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::pdf_int64>::const_reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::pdf_int64>::front()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::pdf_int64>::reference> __zz_cib_decl back_35(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::pdf_int64>::reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::pdf_int64>::back()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::pdf_int64>::const_reference> __zz_cib_decl back_36(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::pdf_int64>::const_reference>(
      __zz_cib_obj->::std::vector<::PoDoFo::pdf_int64>::back()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_int64*> __zz_cib_decl data_37(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_int64*>(
      __zz_cib_obj->::std::vector<::PoDoFo::pdf_int64>::data()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::pdf_int64*> __zz_cib_decl data_38(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::pdf_int64*>(
      __zz_cib_obj->::std::vector<::PoDoFo::pdf_int64>::data()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_back_39(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::pdf_int64&> x) {
    __zz_cib_obj->::std::vector<::PoDoFo::pdf_int64>::push_back(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::pdf_int64&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_back_40(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::pdf_int64&&> x) {
    __zz_cib_obj->::std::vector<::PoDoFo::pdf_int64>::push_back(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_int64&&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl pop_back_41(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::vector<::PoDoFo::pdf_int64>::pop_back();
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::pdf_int64>::iterator> __zz_cib_decl insert_42(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::pdf_int64>::const_iterator> position, __zz_cib_AbiType_t<const ::PoDoFo::pdf_int64&> x) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::pdf_int64>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::pdf_int64>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::pdf_int64>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::pdf_int64&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::pdf_int64>::iterator> __zz_cib_decl insert_43(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::pdf_int64>::const_iterator> position, __zz_cib_AbiType_t<::PoDoFo::pdf_int64&&> x) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::pdf_int64>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::pdf_int64>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::pdf_int64>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_int64&&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::pdf_int64>::iterator> __zz_cib_decl insert_44(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::pdf_int64>::const_iterator> position, __zz_cib_AbiType_t<::std::vector<::PoDoFo::pdf_int64>::size_type> n, __zz_cib_AbiType_t<const ::PoDoFo::pdf_int64&> x) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::pdf_int64>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::pdf_int64>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::pdf_int64>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::pdf_int64>::size_type>(n),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::pdf_int64&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::pdf_int64>::iterator> __zz_cib_decl erase_45(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::pdf_int64>::const_iterator> position) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::pdf_int64>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::pdf_int64>::erase(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::pdf_int64>::const_iterator>(position)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::pdf_int64>::iterator> __zz_cib_decl erase_46(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::pdf_int64>::const_iterator> first, __zz_cib_AbiType_t<::std::vector<::PoDoFo::pdf_int64>::const_iterator> last) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::pdf_int64>::iterator>(
      __zz_cib_obj->::std::vector<::PoDoFo::pdf_int64>::erase(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::pdf_int64>::const_iterator>(first),
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::pdf_int64>::const_iterator>(last)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl swap_47(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::pdf_int64>&> __zz_cib_param0) {
    __zz_cib_obj->::std::vector<::PoDoFo::pdf_int64>::swap(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::pdf_int64>&>(__zz_cib_param0)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl clear_48(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::vector<::PoDoFo::pdf_int64>::clear();
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class261 {
using namespace ::std;
namespace __zz_cib_Class272 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::pdf_int64>>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::pdf_int64>>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::pdf_int64>>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::pdf_int64>>::__zz_cib_Copy_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::pdf_int64>>::__zz_cib_New_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::pdf_int64>>::__zz_cib_Delete_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::pdf_int64>>::__zz_cib_OperatorEqual_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::pdf_int64>>::__zz_cib_OperatorEqual_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::pdf_int64>>::assign_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::pdf_int64>>::begin_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::pdf_int64>>::begin_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::pdf_int64>>::end_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::pdf_int64>>::end_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::pdf_int64>>::rbegin_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::pdf_int64>>::rbegin_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::pdf_int64>>::rend_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::pdf_int64>>::rend_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::pdf_int64>>::cbegin_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::pdf_int64>>::cend_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::pdf_int64>>::crbegin_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::pdf_int64>>::crend_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::pdf_int64>>::empty_21),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::pdf_int64>>::size_22),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::pdf_int64>>::max_size_23),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::pdf_int64>>::capacity_24),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::pdf_int64>>::resize_25),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::pdf_int64>>::resize_26),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::pdf_int64>>::reserve_27),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::pdf_int64>>::shrink_to_fit_28),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::pdf_int64>>::__zz_cib_OperatorIndex_29),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::pdf_int64>>::__zz_cib_OperatorIndex_30),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::pdf_int64>>::at_31),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::pdf_int64>>::at_32),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::pdf_int64>>::front_33),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::pdf_int64>>::front_34),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::pdf_int64>>::back_35),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::pdf_int64>>::back_36),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::pdf_int64>>::data_37),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::pdf_int64>>::data_38),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::pdf_int64>>::push_back_39),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::pdf_int64>>::push_back_40),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::pdf_int64>>::pop_back_41),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::pdf_int64>>::insert_42),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::pdf_int64>>::insert_43),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::pdf_int64>>::insert_44),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::pdf_int64>>::erase_45),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::pdf_int64>>::erase_46),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::pdf_int64>>::swap_47),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::PoDoFo::pdf_int64>>::clear_48)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 49 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::std;
template <>
struct __zz_cib_Delegator<::std::vector<::std::list<::PoDoFo::PdfReference*>>> : public ::std::vector<::std::list<::PoDoFo::PdfReference*>> {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::PoDoFo::PdfReference*>>>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::std::vector<::std::list<::PoDoFo::PdfReference*>>::vector;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<::std::vector<::std::list<::PoDoFo::PdfReference*>>::size_type> n) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::std::vector<::std::list<::PoDoFo::PdfReference*>>::size_type>(n));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<::std::vector<::std::list<::PoDoFo::PdfReference*>>::size_type> n, __zz_cib_AbiType_t<const ::std::list<::PoDoFo::PdfReference*>&> value) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::std::vector<::std::list<::PoDoFo::PdfReference*>>::size_type>(n),
    __zz_cib_::__zz_cib_FromAbiType<const ::std::list<::PoDoFo::PdfReference*>&>(value));
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
  static __zz_cib_AbiType_t<::std::vector<::std::list<::PoDoFo::PdfReference*>>&> __zz_cib_decl __zz_cib_OperatorEqual_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::std::vector<::std::list<::PoDoFo::PdfReference*>>&> x) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::PoDoFo::PdfReference*>>&>(
      __zz_cib_obj->::std::vector<::std::list<::PoDoFo::PdfReference*>>::operator=(
        __zz_cib_::__zz_cib_FromAbiType<const ::std::vector<::std::list<::PoDoFo::PdfReference*>>&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::PoDoFo::PdfReference*>>&> __zz_cib_decl __zz_cib_OperatorEqual_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::std::list<::PoDoFo::PdfReference*>>&&> x) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::PoDoFo::PdfReference*>>&>(
      __zz_cib_obj->::std::vector<::std::list<::PoDoFo::PdfReference*>>::operator=(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::std::list<::PoDoFo::PdfReference*>>&&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl assign_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::std::list<::PoDoFo::PdfReference*>>::size_type> n, __zz_cib_AbiType_t<const ::std::list<::PoDoFo::PdfReference*>&> u) {
    __zz_cib_obj->::std::vector<::std::list<::PoDoFo::PdfReference*>>::assign(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::std::list<::PoDoFo::PdfReference*>>::size_type>(n),
      __zz_cib_::__zz_cib_FromAbiType<const ::std::list<::PoDoFo::PdfReference*>&>(u)
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::PoDoFo::PdfReference*>>::iterator> __zz_cib_decl begin_9(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::PoDoFo::PdfReference*>>::iterator>(
      __zz_cib_obj->::std::vector<::std::list<::PoDoFo::PdfReference*>>::begin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::PoDoFo::PdfReference*>>::const_iterator> __zz_cib_decl begin_10(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::PoDoFo::PdfReference*>>::const_iterator>(
      __zz_cib_obj->::std::vector<::std::list<::PoDoFo::PdfReference*>>::begin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::PoDoFo::PdfReference*>>::iterator> __zz_cib_decl end_11(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::PoDoFo::PdfReference*>>::iterator>(
      __zz_cib_obj->::std::vector<::std::list<::PoDoFo::PdfReference*>>::end()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::PoDoFo::PdfReference*>>::const_iterator> __zz_cib_decl end_12(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::PoDoFo::PdfReference*>>::const_iterator>(
      __zz_cib_obj->::std::vector<::std::list<::PoDoFo::PdfReference*>>::end()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::PoDoFo::PdfReference*>>::reverse_iterator> __zz_cib_decl rbegin_13(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::PoDoFo::PdfReference*>>::reverse_iterator>(
      __zz_cib_obj->::std::vector<::std::list<::PoDoFo::PdfReference*>>::rbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::PoDoFo::PdfReference*>>::const_reverse_iterator> __zz_cib_decl rbegin_14(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::PoDoFo::PdfReference*>>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::std::list<::PoDoFo::PdfReference*>>::rbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::PoDoFo::PdfReference*>>::reverse_iterator> __zz_cib_decl rend_15(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::PoDoFo::PdfReference*>>::reverse_iterator>(
      __zz_cib_obj->::std::vector<::std::list<::PoDoFo::PdfReference*>>::rend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::PoDoFo::PdfReference*>>::const_reverse_iterator> __zz_cib_decl rend_16(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::PoDoFo::PdfReference*>>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::std::list<::PoDoFo::PdfReference*>>::rend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::PoDoFo::PdfReference*>>::const_iterator> __zz_cib_decl cbegin_17(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::PoDoFo::PdfReference*>>::const_iterator>(
      __zz_cib_obj->::std::vector<::std::list<::PoDoFo::PdfReference*>>::cbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::PoDoFo::PdfReference*>>::const_iterator> __zz_cib_decl cend_18(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::PoDoFo::PdfReference*>>::const_iterator>(
      __zz_cib_obj->::std::vector<::std::list<::PoDoFo::PdfReference*>>::cend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::PoDoFo::PdfReference*>>::const_reverse_iterator> __zz_cib_decl crbegin_19(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::PoDoFo::PdfReference*>>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::std::list<::PoDoFo::PdfReference*>>::crbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::PoDoFo::PdfReference*>>::const_reverse_iterator> __zz_cib_decl crend_20(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::PoDoFo::PdfReference*>>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<::std::list<::PoDoFo::PdfReference*>>::crend()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl empty_21(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::std::vector<::std::list<::PoDoFo::PdfReference*>>::empty()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::PoDoFo::PdfReference*>>::size_type> __zz_cib_decl size_22(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::PoDoFo::PdfReference*>>::size_type>(
      __zz_cib_obj->::std::vector<::std::list<::PoDoFo::PdfReference*>>::size()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::PoDoFo::PdfReference*>>::size_type> __zz_cib_decl max_size_23(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::PoDoFo::PdfReference*>>::size_type>(
      __zz_cib_obj->::std::vector<::std::list<::PoDoFo::PdfReference*>>::max_size()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::PoDoFo::PdfReference*>>::size_type> __zz_cib_decl capacity_24(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::PoDoFo::PdfReference*>>::size_type>(
      __zz_cib_obj->::std::vector<::std::list<::PoDoFo::PdfReference*>>::capacity()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl resize_25(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::std::list<::PoDoFo::PdfReference*>>::size_type> sz) {
    __zz_cib_obj->::std::vector<::std::list<::PoDoFo::PdfReference*>>::resize(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::std::list<::PoDoFo::PdfReference*>>::size_type>(sz)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl resize_26(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::std::list<::PoDoFo::PdfReference*>>::size_type> sz, __zz_cib_AbiType_t<const ::std::list<::PoDoFo::PdfReference*>&> c) {
    __zz_cib_obj->::std::vector<::std::list<::PoDoFo::PdfReference*>>::resize(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::std::list<::PoDoFo::PdfReference*>>::size_type>(sz),
      __zz_cib_::__zz_cib_FromAbiType<const ::std::list<::PoDoFo::PdfReference*>&>(c)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl reserve_27(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::std::list<::PoDoFo::PdfReference*>>::size_type> n) {
    __zz_cib_obj->::std::vector<::std::list<::PoDoFo::PdfReference*>>::reserve(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::std::list<::PoDoFo::PdfReference*>>::size_type>(n)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl shrink_to_fit_28(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::vector<::std::list<::PoDoFo::PdfReference*>>::shrink_to_fit();
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::std::list<::PoDoFo::PdfReference*>>::reference> __zz_cib_decl __zz_cib_OperatorIndex_29(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::std::list<::PoDoFo::PdfReference*>>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::std::list<::PoDoFo::PdfReference*>>::reference>(
      __zz_cib_obj->::std::vector<::std::list<::PoDoFo::PdfReference*>>::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::std::list<::PoDoFo::PdfReference*>>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::std::list<::PoDoFo::PdfReference*>>::const_reference> __zz_cib_decl __zz_cib_OperatorIndex_30(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::std::list<::PoDoFo::PdfReference*>>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::std::list<::PoDoFo::PdfReference*>>::const_reference>(
      __zz_cib_obj->::std::vector<::std::list<::PoDoFo::PdfReference*>>::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::std::list<::PoDoFo::PdfReference*>>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::std::list<::PoDoFo::PdfReference*>>::const_reference> __zz_cib_decl at_31(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::std::list<::PoDoFo::PdfReference*>>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::std::list<::PoDoFo::PdfReference*>>::const_reference>(
      __zz_cib_obj->::std::vector<::std::list<::PoDoFo::PdfReference*>>::at(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::std::list<::PoDoFo::PdfReference*>>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::std::list<::PoDoFo::PdfReference*>>::reference> __zz_cib_decl at_32(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::std::list<::PoDoFo::PdfReference*>>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::std::list<::PoDoFo::PdfReference*>>::reference>(
      __zz_cib_obj->::std::vector<::std::list<::PoDoFo::PdfReference*>>::at(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::std::list<::PoDoFo::PdfReference*>>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::std::list<::PoDoFo::PdfReference*>>::reference> __zz_cib_decl front_33(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::std::list<::PoDoFo::PdfReference*>>::reference>(
      __zz_cib_obj->::std::vector<::std::list<::PoDoFo::PdfReference*>>::front()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::std::list<::PoDoFo::PdfReference*>>::const_reference> __zz_cib_decl front_34(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::std::list<::PoDoFo::PdfReference*>>::const_reference>(
      __zz_cib_obj->::std::vector<::std::list<::PoDoFo::PdfReference*>>::front()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::std::list<::PoDoFo::PdfReference*>>::reference> __zz_cib_decl back_35(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::std::list<::PoDoFo::PdfReference*>>::reference>(
      __zz_cib_obj->::std::vector<::std::list<::PoDoFo::PdfReference*>>::back()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::std::list<::PoDoFo::PdfReference*>>::const_reference> __zz_cib_decl back_36(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::std::list<::PoDoFo::PdfReference*>>::const_reference>(
      __zz_cib_obj->::std::vector<::std::list<::PoDoFo::PdfReference*>>::back()
    );
  }
  static __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>*> __zz_cib_decl data_37(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::list<::PoDoFo::PdfReference*>*>(
      __zz_cib_obj->::std::vector<::std::list<::PoDoFo::PdfReference*>>::data()
    );
  }
  static __zz_cib_AbiType_t<const ::std::list<::PoDoFo::PdfReference*>*> __zz_cib_decl data_38(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::std::list<::PoDoFo::PdfReference*>*>(
      __zz_cib_obj->::std::vector<::std::list<::PoDoFo::PdfReference*>>::data()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_back_39(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::std::list<::PoDoFo::PdfReference*>&> x) {
    __zz_cib_obj->::std::vector<::std::list<::PoDoFo::PdfReference*>>::push_back(
      __zz_cib_::__zz_cib_FromAbiType<const ::std::list<::PoDoFo::PdfReference*>&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_back_40(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>&&> x) {
    __zz_cib_obj->::std::vector<::std::list<::PoDoFo::PdfReference*>>::push_back(
      __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfReference*>&&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl pop_back_41(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::vector<::std::list<::PoDoFo::PdfReference*>>::pop_back();
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::PoDoFo::PdfReference*>>::iterator> __zz_cib_decl insert_42(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::std::list<::PoDoFo::PdfReference*>>::const_iterator> position, __zz_cib_AbiType_t<const ::std::list<::PoDoFo::PdfReference*>&> x) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::PoDoFo::PdfReference*>>::iterator>(
      __zz_cib_obj->::std::vector<::std::list<::PoDoFo::PdfReference*>>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::std::list<::PoDoFo::PdfReference*>>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<const ::std::list<::PoDoFo::PdfReference*>&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::PoDoFo::PdfReference*>>::iterator> __zz_cib_decl insert_43(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::std::list<::PoDoFo::PdfReference*>>::const_iterator> position, __zz_cib_AbiType_t<::std::list<::PoDoFo::PdfReference*>&&> x) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::PoDoFo::PdfReference*>>::iterator>(
      __zz_cib_obj->::std::vector<::std::list<::PoDoFo::PdfReference*>>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::std::list<::PoDoFo::PdfReference*>>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<::std::list<::PoDoFo::PdfReference*>&&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::PoDoFo::PdfReference*>>::iterator> __zz_cib_decl insert_44(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::std::list<::PoDoFo::PdfReference*>>::const_iterator> position, __zz_cib_AbiType_t<::std::vector<::std::list<::PoDoFo::PdfReference*>>::size_type> n, __zz_cib_AbiType_t<const ::std::list<::PoDoFo::PdfReference*>&> x) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::PoDoFo::PdfReference*>>::iterator>(
      __zz_cib_obj->::std::vector<::std::list<::PoDoFo::PdfReference*>>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::std::list<::PoDoFo::PdfReference*>>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::std::list<::PoDoFo::PdfReference*>>::size_type>(n),
        __zz_cib_::__zz_cib_FromAbiType<const ::std::list<::PoDoFo::PdfReference*>&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::PoDoFo::PdfReference*>>::iterator> __zz_cib_decl erase_45(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::std::list<::PoDoFo::PdfReference*>>::const_iterator> position) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::PoDoFo::PdfReference*>>::iterator>(
      __zz_cib_obj->::std::vector<::std::list<::PoDoFo::PdfReference*>>::erase(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::std::list<::PoDoFo::PdfReference*>>::const_iterator>(position)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::std::list<::PoDoFo::PdfReference*>>::iterator> __zz_cib_decl erase_46(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::std::list<::PoDoFo::PdfReference*>>::const_iterator> first, __zz_cib_AbiType_t<::std::vector<::std::list<::PoDoFo::PdfReference*>>::const_iterator> last) {
    return __zz_cib_ToAbiType<::std::vector<::std::list<::PoDoFo::PdfReference*>>::iterator>(
      __zz_cib_obj->::std::vector<::std::list<::PoDoFo::PdfReference*>>::erase(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::std::list<::PoDoFo::PdfReference*>>::const_iterator>(first),
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<::std::list<::PoDoFo::PdfReference*>>::const_iterator>(last)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl swap_47(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::std::list<::PoDoFo::PdfReference*>>&> __zz_cib_param0) {
    __zz_cib_obj->::std::vector<::std::list<::PoDoFo::PdfReference*>>::swap(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::std::list<::PoDoFo::PdfReference*>>&>(__zz_cib_param0)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl clear_48(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::vector<::std::list<::PoDoFo::PdfReference*>>::clear();
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class261 {
using namespace ::std;
namespace __zz_cib_Class327 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::PoDoFo::PdfReference*>>>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::PoDoFo::PdfReference*>>>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::PoDoFo::PdfReference*>>>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::PoDoFo::PdfReference*>>>::__zz_cib_Copy_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::PoDoFo::PdfReference*>>>::__zz_cib_New_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::PoDoFo::PdfReference*>>>::__zz_cib_Delete_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::PoDoFo::PdfReference*>>>::__zz_cib_OperatorEqual_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::PoDoFo::PdfReference*>>>::__zz_cib_OperatorEqual_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::PoDoFo::PdfReference*>>>::assign_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::PoDoFo::PdfReference*>>>::begin_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::PoDoFo::PdfReference*>>>::begin_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::PoDoFo::PdfReference*>>>::end_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::PoDoFo::PdfReference*>>>::end_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::PoDoFo::PdfReference*>>>::rbegin_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::PoDoFo::PdfReference*>>>::rbegin_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::PoDoFo::PdfReference*>>>::rend_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::PoDoFo::PdfReference*>>>::rend_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::PoDoFo::PdfReference*>>>::cbegin_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::PoDoFo::PdfReference*>>>::cend_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::PoDoFo::PdfReference*>>>::crbegin_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::PoDoFo::PdfReference*>>>::crend_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::PoDoFo::PdfReference*>>>::empty_21),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::PoDoFo::PdfReference*>>>::size_22),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::PoDoFo::PdfReference*>>>::max_size_23),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::PoDoFo::PdfReference*>>>::capacity_24),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::PoDoFo::PdfReference*>>>::resize_25),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::PoDoFo::PdfReference*>>>::resize_26),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::PoDoFo::PdfReference*>>>::reserve_27),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::PoDoFo::PdfReference*>>>::shrink_to_fit_28),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::PoDoFo::PdfReference*>>>::__zz_cib_OperatorIndex_29),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::PoDoFo::PdfReference*>>>::__zz_cib_OperatorIndex_30),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::PoDoFo::PdfReference*>>>::at_31),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::PoDoFo::PdfReference*>>>::at_32),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::PoDoFo::PdfReference*>>>::front_33),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::PoDoFo::PdfReference*>>>::front_34),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::PoDoFo::PdfReference*>>>::back_35),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::PoDoFo::PdfReference*>>>::back_36),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::PoDoFo::PdfReference*>>>::data_37),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::PoDoFo::PdfReference*>>>::data_38),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::PoDoFo::PdfReference*>>>::push_back_39),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::PoDoFo::PdfReference*>>>::push_back_40),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::PoDoFo::PdfReference*>>>::pop_back_41),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::PoDoFo::PdfReference*>>>::insert_42),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::PoDoFo::PdfReference*>>>::insert_43),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::PoDoFo::PdfReference*>>>::insert_44),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::PoDoFo::PdfReference*>>>::erase_45),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::PoDoFo::PdfReference*>>>::erase_46),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::PoDoFo::PdfReference*>>>::swap_47),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<::std::list<::PoDoFo::PdfReference*>>>::clear_48)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 49 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::std;
template <>
struct __zz_cib_Delegator<::std::vector<char>> : public ::std::vector<char> {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::std::vector<char>>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::std::vector<char>::vector;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<::std::vector<char>::size_type> n) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::std::vector<char>::size_type>(n));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<::std::vector<char>::size_type> n, __zz_cib_AbiType_t<const char&> value) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::std::vector<char>::size_type>(n),
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
  static __zz_cib_AbiType_t<::std::vector<char>&> __zz_cib_decl __zz_cib_OperatorEqual_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::std::vector<char>&> x) {
    return __zz_cib_ToAbiType<::std::vector<char>&>(
      __zz_cib_obj->::std::vector<char>::operator=(
        __zz_cib_::__zz_cib_FromAbiType<const ::std::vector<char>&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<char>&> __zz_cib_decl __zz_cib_OperatorEqual_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<char>&&> x) {
    return __zz_cib_ToAbiType<::std::vector<char>&>(
      __zz_cib_obj->::std::vector<char>::operator=(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<char>&&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl assign_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<char>::size_type> n, __zz_cib_AbiType_t<const char&> u) {
    __zz_cib_obj->::std::vector<char>::assign(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<char>::size_type>(n),
      __zz_cib_::__zz_cib_FromAbiType<const char&>(u)
    );
  }
  static __zz_cib_AbiType_t<::std::vector<char>::iterator> __zz_cib_decl begin_9(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<char>::iterator>(
      __zz_cib_obj->::std::vector<char>::begin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<char>::const_iterator> __zz_cib_decl begin_10(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<char>::const_iterator>(
      __zz_cib_obj->::std::vector<char>::begin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<char>::iterator> __zz_cib_decl end_11(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<char>::iterator>(
      __zz_cib_obj->::std::vector<char>::end()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<char>::const_iterator> __zz_cib_decl end_12(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<char>::const_iterator>(
      __zz_cib_obj->::std::vector<char>::end()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<char>::reverse_iterator> __zz_cib_decl rbegin_13(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<char>::reverse_iterator>(
      __zz_cib_obj->::std::vector<char>::rbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<char>::const_reverse_iterator> __zz_cib_decl rbegin_14(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<char>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<char>::rbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<char>::reverse_iterator> __zz_cib_decl rend_15(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<char>::reverse_iterator>(
      __zz_cib_obj->::std::vector<char>::rend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<char>::const_reverse_iterator> __zz_cib_decl rend_16(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<char>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<char>::rend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<char>::const_iterator> __zz_cib_decl cbegin_17(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<char>::const_iterator>(
      __zz_cib_obj->::std::vector<char>::cbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<char>::const_iterator> __zz_cib_decl cend_18(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<char>::const_iterator>(
      __zz_cib_obj->::std::vector<char>::cend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<char>::const_reverse_iterator> __zz_cib_decl crbegin_19(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<char>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<char>::crbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<char>::const_reverse_iterator> __zz_cib_decl crend_20(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<char>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<char>::crend()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl empty_21(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::std::vector<char>::empty()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<char>::size_type> __zz_cib_decl size_22(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<char>::size_type>(
      __zz_cib_obj->::std::vector<char>::size()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<char>::size_type> __zz_cib_decl max_size_23(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<char>::size_type>(
      __zz_cib_obj->::std::vector<char>::max_size()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<char>::size_type> __zz_cib_decl capacity_24(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<char>::size_type>(
      __zz_cib_obj->::std::vector<char>::capacity()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl resize_25(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<char>::size_type> sz) {
    __zz_cib_obj->::std::vector<char>::resize(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<char>::size_type>(sz)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl resize_26(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<char>::size_type> sz, __zz_cib_AbiType_t<const char&> c) {
    __zz_cib_obj->::std::vector<char>::resize(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<char>::size_type>(sz),
      __zz_cib_::__zz_cib_FromAbiType<const char&>(c)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl reserve_27(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<char>::size_type> n) {
    __zz_cib_obj->::std::vector<char>::reserve(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<char>::size_type>(n)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl shrink_to_fit_28(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::vector<char>::shrink_to_fit();
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<char>::reference> __zz_cib_decl __zz_cib_OperatorIndex_29(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<char>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<char>::reference>(
      __zz_cib_obj->::std::vector<char>::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<char>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<char>::const_reference> __zz_cib_decl __zz_cib_OperatorIndex_30(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<char>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<char>::const_reference>(
      __zz_cib_obj->::std::vector<char>::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<char>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<char>::const_reference> __zz_cib_decl at_31(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<char>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<char>::const_reference>(
      __zz_cib_obj->::std::vector<char>::at(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<char>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<char>::reference> __zz_cib_decl at_32(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<char>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<char>::reference>(
      __zz_cib_obj->::std::vector<char>::at(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<char>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<char>::reference> __zz_cib_decl front_33(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<char>::reference>(
      __zz_cib_obj->::std::vector<char>::front()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<char>::const_reference> __zz_cib_decl front_34(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<char>::const_reference>(
      __zz_cib_obj->::std::vector<char>::front()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<char>::reference> __zz_cib_decl back_35(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<char>::reference>(
      __zz_cib_obj->::std::vector<char>::back()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<char>::const_reference> __zz_cib_decl back_36(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<char>::const_reference>(
      __zz_cib_obj->::std::vector<char>::back()
    );
  }
  static __zz_cib_AbiType_t<char*> __zz_cib_decl data_37(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<char*>(
      __zz_cib_obj->::std::vector<char>::data()
    );
  }
  static __zz_cib_AbiType_t<const char*> __zz_cib_decl data_38(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const char*>(
      __zz_cib_obj->::std::vector<char>::data()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_back_39(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char&> x) {
    __zz_cib_obj->::std::vector<char>::push_back(
      __zz_cib_::__zz_cib_FromAbiType<const char&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_back_40(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<char&&> x) {
    __zz_cib_obj->::std::vector<char>::push_back(
      __zz_cib_::__zz_cib_FromAbiType<char&&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl pop_back_41(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::vector<char>::pop_back();
  }
  static __zz_cib_AbiType_t<::std::vector<char>::iterator> __zz_cib_decl insert_42(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<char>::const_iterator> position, __zz_cib_AbiType_t<const char&> x) {
    return __zz_cib_ToAbiType<::std::vector<char>::iterator>(
      __zz_cib_obj->::std::vector<char>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<char>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<const char&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<char>::iterator> __zz_cib_decl insert_43(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<char>::const_iterator> position, __zz_cib_AbiType_t<char&&> x) {
    return __zz_cib_ToAbiType<::std::vector<char>::iterator>(
      __zz_cib_obj->::std::vector<char>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<char>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<char&&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<char>::iterator> __zz_cib_decl insert_44(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<char>::const_iterator> position, __zz_cib_AbiType_t<::std::vector<char>::size_type> n, __zz_cib_AbiType_t<const char&> x) {
    return __zz_cib_ToAbiType<::std::vector<char>::iterator>(
      __zz_cib_obj->::std::vector<char>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<char>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<char>::size_type>(n),
        __zz_cib_::__zz_cib_FromAbiType<const char&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<char>::iterator> __zz_cib_decl erase_45(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<char>::const_iterator> position) {
    return __zz_cib_ToAbiType<::std::vector<char>::iterator>(
      __zz_cib_obj->::std::vector<char>::erase(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<char>::const_iterator>(position)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<char>::iterator> __zz_cib_decl erase_46(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<char>::const_iterator> first, __zz_cib_AbiType_t<::std::vector<char>::const_iterator> last) {
    return __zz_cib_ToAbiType<::std::vector<char>::iterator>(
      __zz_cib_obj->::std::vector<char>::erase(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<char>::const_iterator>(first),
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<char>::const_iterator>(last)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl swap_47(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<char>&> __zz_cib_param0) {
    __zz_cib_obj->::std::vector<char>::swap(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<char>&>(__zz_cib_param0)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl clear_48(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::vector<char>::clear();
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class261 {
using namespace ::std;
namespace __zz_cib_Class277 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<char>>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<char>>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<char>>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<char>>::__zz_cib_Copy_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<char>>::__zz_cib_New_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<char>>::__zz_cib_Delete_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<char>>::__zz_cib_OperatorEqual_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<char>>::__zz_cib_OperatorEqual_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<char>>::assign_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<char>>::begin_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<char>>::begin_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<char>>::end_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<char>>::end_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<char>>::rbegin_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<char>>::rbegin_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<char>>::rend_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<char>>::rend_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<char>>::cbegin_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<char>>::cend_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<char>>::crbegin_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<char>>::crend_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<char>>::empty_21),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<char>>::size_22),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<char>>::max_size_23),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<char>>::capacity_24),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<char>>::resize_25),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<char>>::resize_26),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<char>>::reserve_27),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<char>>::shrink_to_fit_28),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<char>>::__zz_cib_OperatorIndex_29),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<char>>::__zz_cib_OperatorIndex_30),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<char>>::at_31),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<char>>::at_32),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<char>>::front_33),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<char>>::front_34),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<char>>::back_35),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<char>>::back_36),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<char>>::data_37),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<char>>::data_38),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<char>>::push_back_39),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<char>>::push_back_40),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<char>>::pop_back_41),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<char>>::insert_42),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<char>>::insert_43),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<char>>::insert_44),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<char>>::erase_45),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<char>>::erase_46),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<char>>::swap_47),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<char>>::clear_48)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 49 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::std;
template <>
struct __zz_cib_Delegator<::std::vector<unsigned char>> : public ::std::vector<unsigned char> {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::std::vector<unsigned char>>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::std::vector<unsigned char>::vector;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<::std::vector<unsigned char>::size_type> n) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::std::vector<unsigned char>::size_type>(n));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<::std::vector<unsigned char>::size_type> n, __zz_cib_AbiType_t<const unsigned char&> value) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::std::vector<unsigned char>::size_type>(n),
    __zz_cib_::__zz_cib_FromAbiType<const unsigned char&>(value));
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
  static __zz_cib_AbiType_t<::std::vector<unsigned char>&> __zz_cib_decl __zz_cib_OperatorEqual_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::std::vector<unsigned char>&> x) {
    return __zz_cib_ToAbiType<::std::vector<unsigned char>&>(
      __zz_cib_obj->::std::vector<unsigned char>::operator=(
        __zz_cib_::__zz_cib_FromAbiType<const ::std::vector<unsigned char>&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<unsigned char>&> __zz_cib_decl __zz_cib_OperatorEqual_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<unsigned char>&&> x) {
    return __zz_cib_ToAbiType<::std::vector<unsigned char>&>(
      __zz_cib_obj->::std::vector<unsigned char>::operator=(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<unsigned char>&&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl assign_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<unsigned char>::size_type> n, __zz_cib_AbiType_t<const unsigned char&> u) {
    __zz_cib_obj->::std::vector<unsigned char>::assign(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<unsigned char>::size_type>(n),
      __zz_cib_::__zz_cib_FromAbiType<const unsigned char&>(u)
    );
  }
  static __zz_cib_AbiType_t<::std::vector<unsigned char>::iterator> __zz_cib_decl begin_9(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<unsigned char>::iterator>(
      __zz_cib_obj->::std::vector<unsigned char>::begin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<unsigned char>::const_iterator> __zz_cib_decl begin_10(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<unsigned char>::const_iterator>(
      __zz_cib_obj->::std::vector<unsigned char>::begin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<unsigned char>::iterator> __zz_cib_decl end_11(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<unsigned char>::iterator>(
      __zz_cib_obj->::std::vector<unsigned char>::end()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<unsigned char>::const_iterator> __zz_cib_decl end_12(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<unsigned char>::const_iterator>(
      __zz_cib_obj->::std::vector<unsigned char>::end()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<unsigned char>::reverse_iterator> __zz_cib_decl rbegin_13(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<unsigned char>::reverse_iterator>(
      __zz_cib_obj->::std::vector<unsigned char>::rbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<unsigned char>::const_reverse_iterator> __zz_cib_decl rbegin_14(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<unsigned char>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<unsigned char>::rbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<unsigned char>::reverse_iterator> __zz_cib_decl rend_15(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<unsigned char>::reverse_iterator>(
      __zz_cib_obj->::std::vector<unsigned char>::rend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<unsigned char>::const_reverse_iterator> __zz_cib_decl rend_16(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<unsigned char>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<unsigned char>::rend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<unsigned char>::const_iterator> __zz_cib_decl cbegin_17(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<unsigned char>::const_iterator>(
      __zz_cib_obj->::std::vector<unsigned char>::cbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<unsigned char>::const_iterator> __zz_cib_decl cend_18(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<unsigned char>::const_iterator>(
      __zz_cib_obj->::std::vector<unsigned char>::cend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<unsigned char>::const_reverse_iterator> __zz_cib_decl crbegin_19(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<unsigned char>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<unsigned char>::crbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<unsigned char>::const_reverse_iterator> __zz_cib_decl crend_20(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<unsigned char>::const_reverse_iterator>(
      __zz_cib_obj->::std::vector<unsigned char>::crend()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl empty_21(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::std::vector<unsigned char>::empty()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<unsigned char>::size_type> __zz_cib_decl size_22(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<unsigned char>::size_type>(
      __zz_cib_obj->::std::vector<unsigned char>::size()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<unsigned char>::size_type> __zz_cib_decl max_size_23(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<unsigned char>::size_type>(
      __zz_cib_obj->::std::vector<unsigned char>::max_size()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<unsigned char>::size_type> __zz_cib_decl capacity_24(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<unsigned char>::size_type>(
      __zz_cib_obj->::std::vector<unsigned char>::capacity()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl resize_25(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<unsigned char>::size_type> sz) {
    __zz_cib_obj->::std::vector<unsigned char>::resize(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<unsigned char>::size_type>(sz)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl resize_26(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<unsigned char>::size_type> sz, __zz_cib_AbiType_t<const unsigned char&> c) {
    __zz_cib_obj->::std::vector<unsigned char>::resize(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<unsigned char>::size_type>(sz),
      __zz_cib_::__zz_cib_FromAbiType<const unsigned char&>(c)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl reserve_27(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<unsigned char>::size_type> n) {
    __zz_cib_obj->::std::vector<unsigned char>::reserve(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<unsigned char>::size_type>(n)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl shrink_to_fit_28(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::vector<unsigned char>::shrink_to_fit();
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<unsigned char>::reference> __zz_cib_decl __zz_cib_OperatorIndex_29(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<unsigned char>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<unsigned char>::reference>(
      __zz_cib_obj->::std::vector<unsigned char>::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<unsigned char>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<unsigned char>::const_reference> __zz_cib_decl __zz_cib_OperatorIndex_30(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<unsigned char>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<unsigned char>::const_reference>(
      __zz_cib_obj->::std::vector<unsigned char>::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<unsigned char>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<unsigned char>::const_reference> __zz_cib_decl at_31(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<unsigned char>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<unsigned char>::const_reference>(
      __zz_cib_obj->::std::vector<unsigned char>::at(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<unsigned char>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<unsigned char>::reference> __zz_cib_decl at_32(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<unsigned char>::size_type> n) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<unsigned char>::reference>(
      __zz_cib_obj->::std::vector<unsigned char>::at(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<unsigned char>::size_type>(n)
      )
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<unsigned char>::reference> __zz_cib_decl front_33(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<unsigned char>::reference>(
      __zz_cib_obj->::std::vector<unsigned char>::front()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<unsigned char>::const_reference> __zz_cib_decl front_34(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<unsigned char>::const_reference>(
      __zz_cib_obj->::std::vector<unsigned char>::front()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<unsigned char>::reference> __zz_cib_decl back_35(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<unsigned char>::reference>(
      __zz_cib_obj->::std::vector<unsigned char>::back()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<unsigned char>::const_reference> __zz_cib_decl back_36(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<unsigned char>::const_reference>(
      __zz_cib_obj->::std::vector<unsigned char>::back()
    );
  }
  static __zz_cib_AbiType_t<unsigned char*> __zz_cib_decl data_37(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<unsigned char*>(
      __zz_cib_obj->::std::vector<unsigned char>::data()
    );
  }
  static __zz_cib_AbiType_t<const unsigned char*> __zz_cib_decl data_38(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const unsigned char*>(
      __zz_cib_obj->::std::vector<unsigned char>::data()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_back_39(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const unsigned char&> x) {
    __zz_cib_obj->::std::vector<unsigned char>::push_back(
      __zz_cib_::__zz_cib_FromAbiType<const unsigned char&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_back_40(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<unsigned char&&> x) {
    __zz_cib_obj->::std::vector<unsigned char>::push_back(
      __zz_cib_::__zz_cib_FromAbiType<unsigned char&&>(x)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl pop_back_41(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::vector<unsigned char>::pop_back();
  }
  static __zz_cib_AbiType_t<::std::vector<unsigned char>::iterator> __zz_cib_decl insert_42(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<unsigned char>::const_iterator> position, __zz_cib_AbiType_t<const unsigned char&> x) {
    return __zz_cib_ToAbiType<::std::vector<unsigned char>::iterator>(
      __zz_cib_obj->::std::vector<unsigned char>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<unsigned char>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<const unsigned char&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<unsigned char>::iterator> __zz_cib_decl insert_43(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<unsigned char>::const_iterator> position, __zz_cib_AbiType_t<unsigned char&&> x) {
    return __zz_cib_ToAbiType<::std::vector<unsigned char>::iterator>(
      __zz_cib_obj->::std::vector<unsigned char>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<unsigned char>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<unsigned char&&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<unsigned char>::iterator> __zz_cib_decl insert_44(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<unsigned char>::const_iterator> position, __zz_cib_AbiType_t<::std::vector<unsigned char>::size_type> n, __zz_cib_AbiType_t<const unsigned char&> x) {
    return __zz_cib_ToAbiType<::std::vector<unsigned char>::iterator>(
      __zz_cib_obj->::std::vector<unsigned char>::insert(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<unsigned char>::const_iterator>(position),
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<unsigned char>::size_type>(n),
        __zz_cib_::__zz_cib_FromAbiType<const unsigned char&>(x)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<unsigned char>::iterator> __zz_cib_decl erase_45(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<unsigned char>::const_iterator> position) {
    return __zz_cib_ToAbiType<::std::vector<unsigned char>::iterator>(
      __zz_cib_obj->::std::vector<unsigned char>::erase(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<unsigned char>::const_iterator>(position)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<unsigned char>::iterator> __zz_cib_decl erase_46(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<unsigned char>::const_iterator> first, __zz_cib_AbiType_t<::std::vector<unsigned char>::const_iterator> last) {
    return __zz_cib_ToAbiType<::std::vector<unsigned char>::iterator>(
      __zz_cib_obj->::std::vector<unsigned char>::erase(
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<unsigned char>::const_iterator>(first),
        __zz_cib_::__zz_cib_FromAbiType<::std::vector<unsigned char>::const_iterator>(last)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl swap_47(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<unsigned char>&> __zz_cib_param0) {
    __zz_cib_obj->::std::vector<unsigned char>::swap(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<unsigned char>&>(__zz_cib_param0)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl clear_48(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::std::vector<unsigned char>::clear();
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class261 {
using namespace ::std;
namespace __zz_cib_Class287 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<unsigned char>>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<unsigned char>>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<unsigned char>>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<unsigned char>>::__zz_cib_Copy_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<unsigned char>>::__zz_cib_New_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<unsigned char>>::__zz_cib_Delete_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<unsigned char>>::__zz_cib_OperatorEqual_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<unsigned char>>::__zz_cib_OperatorEqual_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<unsigned char>>::assign_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<unsigned char>>::begin_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<unsigned char>>::begin_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<unsigned char>>::end_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<unsigned char>>::end_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<unsigned char>>::rbegin_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<unsigned char>>::rbegin_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<unsigned char>>::rend_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<unsigned char>>::rend_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<unsigned char>>::cbegin_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<unsigned char>>::cend_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<unsigned char>>::crbegin_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<unsigned char>>::crend_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<unsigned char>>::empty_21),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<unsigned char>>::size_22),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<unsigned char>>::max_size_23),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<unsigned char>>::capacity_24),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<unsigned char>>::resize_25),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<unsigned char>>::resize_26),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<unsigned char>>::reserve_27),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<unsigned char>>::shrink_to_fit_28),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<unsigned char>>::__zz_cib_OperatorIndex_29),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<unsigned char>>::__zz_cib_OperatorIndex_30),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<unsigned char>>::at_31),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<unsigned char>>::at_32),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<unsigned char>>::front_33),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<unsigned char>>::front_34),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<unsigned char>>::back_35),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<unsigned char>>::back_36),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<unsigned char>>::data_37),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<unsigned char>>::data_38),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<unsigned char>>::push_back_39),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<unsigned char>>::push_back_40),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<unsigned char>>::pop_back_41),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<unsigned char>>::insert_42),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<unsigned char>>::insert_43),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<unsigned char>>::insert_44),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<unsigned char>>::erase_45),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<unsigned char>>::erase_46),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<unsigned char>>::swap_47),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::std::vector<unsigned char>>::clear_48)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 49 };
  return &methodTable;
}
}}}
