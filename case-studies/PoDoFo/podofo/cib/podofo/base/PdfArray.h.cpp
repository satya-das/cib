#include "__zz_cib_stl-helpers/__zz_cib_vector-iterator.h"
#include "podofo/base/PdfArray.h"
#include "podofo/base/PdfDefines.h"
#include "podofo/base/PdfEncrypt.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfOutputDevice.h"
#include <vector>

#include <typeinfo>
#include <typeindex>
#include <cstdint>
#include <unordered_map>

extern std::unordered_map<std::type_index, std::uint32_t> __zz_cib_gClassIdRepo;

#include "__zz_cib_CibPoDoFo-class-down-cast.h"
#include "__zz_cib_CibPoDoFo-delegate-helper.h"
#include "__zz_cib_CibPoDoFo-generic.h"
#include "__zz_cib_CibPoDoFo-ids.h"
#include "__zz_cib_CibPoDoFo-type-converters.h"
#include "__zz_cib_CibPoDoFo-mtable-helper.h"
#include "__zz_cib_CibPoDoFo-proxy-mgr.h"

namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfArray> : public ::PoDoFo::PdfArray {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfArray>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfArray>;
  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::PoDoFo::PdfArray>;

  using ::PoDoFo::PdfArray::PdfArray;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<const ::PoDoFo::PdfObject&> var) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfObject&>(var));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_2(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_3(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfArray&> __zz_cib_decl __zz_cib_OperatorEqual_4(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfArray&> rhs) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfArray&>(
      __zz_cib_obj->::PoDoFo::PdfArray::operator=(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfArray&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<size_t> __zz_cib_decl GetSize_5(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<size_t>(
      __zz_cib_obj->::PoDoFo::PdfArray::GetSize()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Clear_6(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfArray::Clear();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Write_7(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfOutputDevice*> pDevice, __zz_cib_AbiType_t<::PoDoFo::EPdfWriteMode> eWriteMode, __zz_cib_AbiType_t<const ::PoDoFo::PdfEncrypt*> pEncrypt) {
    __zz_cib_obj->::PoDoFo::PdfArray::Write(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutputDevice*>(pDevice),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfWriteMode>(eWriteMode),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncrypt*>(pEncrypt)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl ContainsString_8(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const std::string&> cmpString) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfArray::ContainsString(
        __zz_cib_::__zz_cib_FromAbiType<const std::string&>(cmpString)
      )
    );
  }
  static __zz_cib_AbiType_t<size_t> __zz_cib_decl GetStringIndex_9(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const std::string&> cmpString) {
    return __zz_cib_ToAbiType<size_t>(
      __zz_cib_obj->::PoDoFo::PdfArray::GetStringIndex(
        __zz_cib_::__zz_cib_FromAbiType<const std::string&>(cmpString)
      )
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfObject*> __zz_cib_decl FindAt_10(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfArray::size_type> idx) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfArray::FindAt(
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfArray::size_type>(idx)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_decl FindAt_11(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfArray::size_type> idx) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfArray::FindAt(
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfArray::size_type>(idx)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_back_12(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfObject&> var) {
    __zz_cib_obj->::PoDoFo::PdfArray::push_back(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfObject&>(var)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl clear_13(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfArray::clear();
  }
  static __zz_cib_AbiType_t<size_t> __zz_cib_decl size_14(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<size_t>(
      __zz_cib_obj->::PoDoFo::PdfArray::size()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl empty_15(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfArray::empty()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject&> __zz_cib_decl __zz_cib_OperatorIndex_16(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfArray::size_type> __n) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject&>(
      __zz_cib_obj->::PoDoFo::PdfArray::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfArray::size_type>(__n)
      )
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfObject&> __zz_cib_decl __zz_cib_OperatorIndex_17(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfArray::size_type> __n) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfObject&>(
      __zz_cib_obj->::PoDoFo::PdfArray::operator[](
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfArray::size_type>(__n)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl resize_18(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<size_t> count, __zz_cib_AbiType_t<::PoDoFo::PdfObject> val) {
    __zz_cib_obj->::PoDoFo::PdfArray::resize(
      __zz_cib_::__zz_cib_FromAbiType<size_t>(count),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject>(val)
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>::iterator> __zz_cib_decl begin_19(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfObject>::iterator>(
      __zz_cib_obj->::PoDoFo::PdfArray::begin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>::const_iterator> __zz_cib_decl begin_20(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfObject>::const_iterator>(
      __zz_cib_obj->::PoDoFo::PdfArray::begin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>::iterator> __zz_cib_decl end_21(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfObject>::iterator>(
      __zz_cib_obj->::PoDoFo::PdfArray::end()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>::const_iterator> __zz_cib_decl end_22(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfObject>::const_iterator>(
      __zz_cib_obj->::PoDoFo::PdfArray::end()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>::reverse_iterator> __zz_cib_decl rbegin_23(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfObject>::reverse_iterator>(
      __zz_cib_obj->::PoDoFo::PdfArray::rbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>::const_reverse_iterator> __zz_cib_decl rbegin_24(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfObject>::const_reverse_iterator>(
      __zz_cib_obj->::PoDoFo::PdfArray::rbegin()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>::reverse_iterator> __zz_cib_decl rend_25(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfObject>::reverse_iterator>(
      __zz_cib_obj->::PoDoFo::PdfArray::rend()
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>::const_reverse_iterator> __zz_cib_decl rend_26(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfObject>::const_reverse_iterator>(
      __zz_cib_obj->::PoDoFo::PdfArray::rend()
    );
  }
#if  defined(_MSC_VER)  &&  _MSC_VER <= 1200    // workaround template-error in Visualstudio 6
  static __zz_cib_AbiType_t<void> __zz_cib_decl insert_27(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>::iterator> __position, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>::iterator> __first, __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>::iterator> __last) {
    __zz_cib_obj->::PoDoFo::PdfArray::insert(
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject>::iterator>(__position),
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject>::iterator>(__first),
      __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::PdfObject>::iterator>(__last)
    );
  }
#endif
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::PdfObject>::iterator> __zz_cib_decl insert_28(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::std::vector<::PoDoFo::PdfObject>::iterator&> pos, __zz_cib_AbiType_t<const ::PoDoFo::PdfObject&> val) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::PdfObject>::iterator>(
      __zz_cib_obj->::PoDoFo::PdfArray::insert(
        __zz_cib_::__zz_cib_FromAbiType<const ::std::vector<::PoDoFo::PdfObject>::iterator&>(pos),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfObject&>(val)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl erase_29(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::std::vector<::PoDoFo::PdfObject>::iterator&> pos) {
    __zz_cib_obj->::PoDoFo::PdfArray::erase(
      __zz_cib_::__zz_cib_FromAbiType<const ::std::vector<::PoDoFo::PdfObject>::iterator&>(pos)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl erase_30(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::std::vector<::PoDoFo::PdfObject>::iterator&> first, __zz_cib_AbiType_t<const ::std::vector<::PoDoFo::PdfObject>::iterator&> last) {
    __zz_cib_obj->::PoDoFo::PdfArray::erase(
      __zz_cib_::__zz_cib_FromAbiType<const ::std::vector<::PoDoFo::PdfObject>::iterator&>(first),
      __zz_cib_::__zz_cib_FromAbiType<const ::std::vector<::PoDoFo::PdfObject>::iterator&>(last)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl reserve_31(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfArray::size_type> __n) {
    __zz_cib_obj->::PoDoFo::PdfArray::reserve(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfArray::size_type>(__n)
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::reference> __zz_cib_decl front_32(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::reference>(
      __zz_cib_obj->::PoDoFo::PdfArray::front()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::const_reference> __zz_cib_decl front_33(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::const_reference>(
      __zz_cib_obj->::PoDoFo::PdfArray::front()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::reference> __zz_cib_decl back_34(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::reference>(
      __zz_cib_obj->::PoDoFo::PdfArray::back()
    );
  }
  static __zz_cib_AbiType_t<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::const_reference> __zz_cib_decl back_35(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::__zz_cib_stl_helpers::vector_iterator<::PoDoFo::PdfObject>::const_reference>(
      __zz_cib_obj->::PoDoFo::PdfArray::back()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq_36(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfArray&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfArray::operator==(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfArray&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorNotEq_37(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfArray&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfArray::operator!=(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfArray&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsDirty_38(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfArray::IsDirty()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetDirty_39(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> bDirty) {
    __zz_cib_obj->::PoDoFo::PdfArray::SetDirty(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bDirty)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetOwner_40(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfObject*> pOwner) {
    __zz_cib_obj->::PoDoFo::PdfArray::SetOwner(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pOwner)
    );
  }
  static void __zz_cib_decl __zz_cib_RegisterProxy(::PoDoFo::PdfArray* obj, __zz_cib_Proxy proxy, __zz_cib_ProxyDeleter deleter) {
    __zz_cib_ProxyManagerDelegator::__zz_cib_RegisterProxy(obj, proxy, deleter);
  }
  static ::PoDoFo::PdfDataType* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class346(::PoDoFo::PdfArray* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfArray* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class346(::PoDoFo::PdfDataType* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfArray*>(__zz_cib_obj);
  }
  static ::PoDoFo::PdfOwnedDataType* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class392(::PoDoFo::PdfArray* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfArray* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class392(::PoDoFo::PdfOwnedDataType* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfArray*>(__zz_cib_obj);
  }
  static std::uint32_t __zz_cib_decl __zz_cib_GetClassId(::PoDoFo::PdfArray** __zz_cib_obj) {
    static bool classIdRepoPopulated = false;
    if (!classIdRepoPopulated) {
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfArray))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class334::__zz_cib_classId;
      classIdRepoPopulated = true;
    }
    auto tdx = std::type_index(typeid(**__zz_cib_obj));
    auto itr = __zz_cib_gClassIdRepo.find(tdx);
    if (itr != __zz_cib_gClassIdRepo.end()) return itr->second;
    return __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class334::__zz_cib_classId;
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class334 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfArray>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfArray>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfArray>::__zz_cib_Copy_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfArray>::__zz_cib_Delete_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfArray>::__zz_cib_OperatorEqual_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfArray>::GetSize_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfArray>::Clear_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfArray>::Write_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfArray>::ContainsString_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfArray>::GetStringIndex_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfArray>::FindAt_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfArray>::FindAt_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfArray>::push_back_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfArray>::clear_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfArray>::size_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfArray>::empty_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfArray>::__zz_cib_OperatorIndex_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfArray>::__zz_cib_OperatorIndex_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfArray>::resize_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfArray>::begin_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfArray>::begin_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfArray>::end_21),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfArray>::end_22),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfArray>::rbegin_23),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfArray>::rbegin_24),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfArray>::rend_25),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfArray>::rend_26),
#if  defined(_MSC_VER)  &&  _MSC_VER <= 1200    // workaround template-error in Visualstudio 6
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfArray>::insert_27),
#else 
    reinterpret_cast<__zz_cib_MTableEntry> (0),
#endif
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfArray>::insert_28),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfArray>::erase_29),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfArray>::erase_30),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfArray>::reserve_31),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfArray>::front_32),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfArray>::front_33),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfArray>::back_34),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfArray>::back_35),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfArray>::__zz_cib_OperatorCmpEq_36),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfArray>::__zz_cib_OperatorNotEq_37),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfArray>::IsDirty_38),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfArray>::SetDirty_39),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfArray>::SetOwner_40),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfArray>::__zz_cib_CastTo__zz_cib_Class346),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfArray>::__zz_cib_CastFrom__zz_cib_Class346),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfArray>::__zz_cib_CastTo__zz_cib_Class392),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfArray>::__zz_cib_CastFrom__zz_cib_Class392),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfArray>::__zz_cib_GetClassId),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfArray>::__zz_cib_RegisterProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 47 };
  return &methodTable;
}
}}}
