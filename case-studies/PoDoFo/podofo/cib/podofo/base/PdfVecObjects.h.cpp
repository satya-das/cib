#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfReference.h"
#include "podofo/base/PdfStream.h"
#include "podofo/base/PdfVariant.h"
#include "podofo/base/PdfVecObjects.h"
#include "podofo/base/PdfWriter.h"
#include "podofo/doc/PdfDocument.h"
#include <vector>

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
struct __zz_cib_Delegator<::PoDoFo::PdfVecObjects> : public ::PoDoFo::PdfVecObjects {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfVecObjects>;
  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::PoDoFo::PdfVecObjects>;

  using ::PoDoFo::PdfVecObjects::PdfVecObjects;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1() {
    return new __zz_cib_Delegatee();
  }
  static void __zz_cib_decl __zz_cib_Delete_2(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfDocument*> __zz_cib_decl GetParentDocument_3(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfDocument*>(
      __zz_cib_obj->::PoDoFo::PdfVecObjects::GetParentDocument()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetParentDocument_4(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfDocument*> pDocument) {
    __zz_cib_obj->::PoDoFo::PdfVecObjects::SetParentDocument(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDocument*>(pDocument)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetAutoDelete_5(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> bAutoDelete) {
    __zz_cib_obj->::PoDoFo::PdfVecObjects::SetAutoDelete(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bAutoDelete)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl AutoDelete_6(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfVecObjects::AutoDelete()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetCanReuseObjectNumbers_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> bCanReuseObjectNumbers) {
    __zz_cib_obj->::PoDoFo::PdfVecObjects::SetCanReuseObjectNumbers(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bCanReuseObjectNumbers)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl GetCanReuseObjectNumbers_8(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfVecObjects::GetCanReuseObjectNumbers()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Clear_9(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfVecObjects::Clear();
  }
  static __zz_cib_AbiType_t<size_t> __zz_cib_decl GetSize_10(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<size_t>(
      __zz_cib_obj->::PoDoFo::PdfVecObjects::GetSize()
    );
  }
  static __zz_cib_AbiType_t<size_t> __zz_cib_decl GetObjectCount_11(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<size_t>(
      __zz_cib_obj->::PoDoFo::PdfVecObjects::GetObjectCount()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_decl GetObject_12(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfReference&> ref) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfVecObjects::GetObject(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfReference&>(ref)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_decl MustGetObject_13(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfReference&> ref) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfVecObjects::MustGetObject(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfReference&>(ref)
      )
    );
  }
  static __zz_cib_AbiType_t<size_t> __zz_cib_decl GetIndex_14(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfReference&> ref) {
    return __zz_cib_ToAbiType<size_t>(
      __zz_cib_obj->::PoDoFo::PdfVecObjects::GetIndex(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfReference&>(ref)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_decl RemoveObject_15(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfReference&> ref, __zz_cib_AbiType_t<bool> bMarkAsFree) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfVecObjects::RemoveObject(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfReference&>(ref),
        __zz_cib_::__zz_cib_FromAbiType<bool>(bMarkAsFree)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_decl RemoveObject_16(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::TIVecObjects&> it) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfVecObjects::RemoveObject(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::TIVecObjects&>(it)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_decl CreateObject_17(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszType) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfVecObjects::CreateObject(
        __zz_cib_::__zz_cib_FromAbiType<const char*>(pszType)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_decl CreateObject_18(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfVariant&> rVariant) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfVecObjects::CreateObject(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfVariant&>(rVariant)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl AddFreeObject_19(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfReference&> rReference) {
    __zz_cib_obj->::PoDoFo::PdfVecObjects::AddFreeObject(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfReference&>(rReference)
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::TPdfReferenceList&> __zz_cib_decl GetFreeObjects_20(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::TPdfReferenceList&>(
      __zz_cib_obj->::PoDoFo::PdfVecObjects::GetFreeObjects()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl RenumberObjects_21(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfObject*> pTrailer, __zz_cib_AbiType_t<::PoDoFo::TPdfReferenceSet*> pNotDelete, __zz_cib_AbiType_t<bool> bDoGarbageCollection) {
    __zz_cib_obj->::PoDoFo::PdfVecObjects::RenumberObjects(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pTrailer),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::TPdfReferenceSet*>(pNotDelete),
      __zz_cib_::__zz_cib_FromAbiType<bool>(bDoGarbageCollection)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl push_back_22(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfObject*> pObj) {
    __zz_cib_obj->::PoDoFo::PdfVecObjects::push_back(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pObj)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl insert_sorted_23(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfObject*> pObj) {
    __zz_cib_obj->::PoDoFo::PdfVecObjects::insert_sorted(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pObj)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Sort_24(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfVecObjects::Sort();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetMaxReserveSize_25(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<size_t> size) {
    __zz_cib_obj->::PoDoFo::PdfVecObjects::SetMaxReserveSize(
      __zz_cib_::__zz_cib_FromAbiType<size_t>(size)
    );
  }
  static __zz_cib_AbiType_t<size_t> __zz_cib_decl GetMaxReserveSize_26(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<size_t>(
      __zz_cib_obj->::PoDoFo::PdfVecObjects::GetMaxReserveSize()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Reserve_27(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<size_t> size) {
    __zz_cib_obj->::PoDoFo::PdfVecObjects::Reserve(
      __zz_cib_::__zz_cib_FromAbiType<size_t>(size)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl GetObjectDependencies_28(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfObject*> pObj, __zz_cib_AbiType_t<::PoDoFo::TPdfReferenceList*> pList) {
    __zz_cib_obj->::PoDoFo::PdfVecObjects::GetObjectDependencies(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfObject*>(pObj),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::TPdfReferenceList*>(pList)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Attach_29(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfVecObjects::Observer*> pObserver) {
    __zz_cib_obj->::PoDoFo::PdfVecObjects::Attach(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVecObjects::Observer*>(pObserver)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Detach_30(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfVecObjects::Observer*> pObserver) {
    __zz_cib_obj->::PoDoFo::PdfVecObjects::Detach(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVecObjects::Observer*>(pObserver)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetStreamFactory_31(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfVecObjects::StreamFactory*> pFactory) {
    __zz_cib_obj->::PoDoFo::PdfVecObjects::SetStreamFactory(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVecObjects::StreamFactory*>(pFactory)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfStream*> __zz_cib_decl CreateStream_32(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfObject*> pParent) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfStream*>(
      __zz_cib_obj->::PoDoFo::PdfVecObjects::CreateStream(
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pParent)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfStream*> __zz_cib_decl CreateStream_33(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfStream&> rhs) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfStream*>(
      __zz_cib_obj->::PoDoFo::PdfVecObjects::CreateStream(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfStream&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl WriteObject_34(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfObject*> pObject) {
    __zz_cib_obj->::PoDoFo::PdfVecObjects::WriteObject(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pObject)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Finish_35(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfVecObjects::Finish();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl BeginAppendStream_36(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfStream*> pStream) {
    __zz_cib_obj->::PoDoFo::PdfVecObjects::BeginAppendStream(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfStream*>(pStream)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl EndAppendStream_37(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfStream*> pStream) {
    __zz_cib_obj->::PoDoFo::PdfVecObjects::EndAppendStream(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfStream*>(pStream)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::TIVecObjects> __zz_cib_decl begin_38(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::TIVecObjects>(
      __zz_cib_obj->::PoDoFo::PdfVecObjects::begin()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::TCIVecObjects> __zz_cib_decl begin_39(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::TCIVecObjects>(
      __zz_cib_obj->::PoDoFo::PdfVecObjects::begin()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::TIVecObjects> __zz_cib_decl end_40(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::TIVecObjects>(
      __zz_cib_obj->::PoDoFo::PdfVecObjects::end()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::TCIVecObjects> __zz_cib_decl end_41(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::TCIVecObjects>(
      __zz_cib_obj->::PoDoFo::PdfVecObjects::end()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_decl __zz_cib_OperatorIndex_42(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<size_t> index) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfVecObjects::operator[](
        __zz_cib_::__zz_cib_FromAbiType<size_t>(index)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_decl GetBack_43(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfObject*>(
      __zz_cib_obj->::PoDoFo::PdfVecObjects::GetBack()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl CollectGarbage_44(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfObject*> pTrailer) {
    __zz_cib_obj->::PoDoFo::PdfVecObjects::CollectGarbage(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pTrailer)
    );
  }
  static __zz_cib_AbiType_t<std::string> __zz_cib_decl GetNextSubsetPrefix_45(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<std::string>(
      __zz_cib_obj->::PoDoFo::PdfVecObjects::GetNextSubsetPrefix()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetObjectCount_46(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfReference&> rRef) {
    __zz_cib_obj->::PoDoFo::PdfVecObjects::SetObjectCount(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfReference&>(rRef)
    );
  }
  static void __zz_cib_decl __zz_cib_RegisterProxy(::PoDoFo::PdfVecObjects* obj, __zz_cib_Proxy proxy, __zz_cib_ProxyDeleter deleter) {
    __zz_cib_ProxyManagerDelegator::__zz_cib_RegisterProxy(obj, proxy, deleter);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class404 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects>::__zz_cib_Delete_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects>::GetParentDocument_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects>::SetParentDocument_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects>::SetAutoDelete_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects>::AutoDelete_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects>::SetCanReuseObjectNumbers_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects>::GetCanReuseObjectNumbers_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects>::Clear_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects>::GetSize_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects>::GetObjectCount_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects>::GetObject_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects>::MustGetObject_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects>::GetIndex_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects>::RemoveObject_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects>::RemoveObject_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects>::CreateObject_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects>::CreateObject_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects>::AddFreeObject_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects>::GetFreeObjects_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects>::RenumberObjects_21),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects>::push_back_22),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects>::insert_sorted_23),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects>::Sort_24),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects>::SetMaxReserveSize_25),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects>::GetMaxReserveSize_26),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects>::Reserve_27),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects>::GetObjectDependencies_28),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects>::Attach_29),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects>::Detach_30),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects>::SetStreamFactory_31),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects>::CreateStream_32),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects>::CreateStream_33),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects>::WriteObject_34),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects>::Finish_35),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects>::BeginAppendStream_36),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects>::EndAppendStream_37),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects>::begin_38),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects>::begin_39),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects>::end_40),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects>::end_41),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects>::__zz_cib_OperatorIndex_42),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects>::GetBack_43),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects>::CollectGarbage_44),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects>::GetNextSubsetPrefix_45),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects>::SetObjectCount_46),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects>::__zz_cib_RegisterProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 48 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
class __zz_cib_Generic<::PoDoFo::PdfVecObjects::Observer> : public ::PoDoFo::PdfVecObjects::Observer {
public:
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfVecObjects::Observer>;

  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::PoDoFo::PdfVecObjects::Observer>;

  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_GetMethodTable)
    : ::PoDoFo::PdfVecObjects::Observer::Observer()
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_methodTableHelper(__zz_cib_GetMethodTable)
  {}
  void Finish() override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::Finish_0>(
      __zz_cib_h
    );
  }
  void BeginAppendStream(const ::PoDoFo::PdfStream* pStream) override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(pStream)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::BeginAppendStream_1>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(pStream)>(std::move(pStream))
    );
  }
  void EndAppendStream(const ::PoDoFo::PdfStream* pStream) override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(pStream)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::EndAppendStream_2>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(pStream)>(std::move(pStream))
    );
  }
  void WriteObject(const ::PoDoFo::PdfObject* pObject) override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(pObject)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::WriteObject_3>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(pObject)>(std::move(pObject))
    );
  }
  void ParentDestructed() override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::ParentDestructed_4>(
      __zz_cib_h
    );
  }
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = void(__zz_cib_decl *) (__zz_cib_Proxy);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_Delete_5>(
      __zz_cib_h
    );
  }
  void __zz_cib_ReleaseProxy() { __zz_cib_h_ = nullptr; }
  __ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib_Generic, ::PoDoFo::PdfVecObjects::Observer)

private:
  __zz_cib_Proxy __zz_cib_h_;
  const __zz_cib_MethodTableHelper __zz_cib_methodTableHelper;

  const __zz_cib_MethodTableHelper& __zz_cib_GetMethodTableHelper() const {
    return __zz_cib_methodTableHelper;
  }
  using __zz_cib_MethodId = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class404::__zz_cib_Class405::__zz_cib_Generic::__zz_cib_MethodId;
};
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfVecObjects::Observer> : public ::PoDoFo::PdfVecObjects::Observer {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfVecObjects::Observer>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfVecObjects::Observer>;

  using ::PoDoFo::PdfVecObjects::Observer::Observer;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_GetMethodTable) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfVecObjects::Observer>(__zz_cib_proxy, __zz_cib_GetMethodTable);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl WriteObject_2(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfObject*> pObject) {
    __zz_cib_obj->WriteObject(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfObject*>(pObject)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl ParentDestructed_3(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->ParentDestructed();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl BeginAppendStream_4(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfStream*> pStream) {
    __zz_cib_obj->BeginAppendStream(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfStream*>(pStream)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl EndAppendStream_5(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfStream*> pStream) {
    __zz_cib_obj->EndAppendStream(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfStream*>(pStream)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Finish_6(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->Finish();
  }
  static void __zz_cib_decl __zz_cib_ReleaseProxy(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->__zz_cib_ReleaseProxy();
}
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class404 {
namespace __zz_cib_Class405 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects::Observer>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects::Observer>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects::Observer>::WriteObject_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects::Observer>::ParentDestructed_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects::Observer>::BeginAppendStream_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects::Observer>::EndAppendStream_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects::Observer>::Finish_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects::Observer>::__zz_cib_ReleaseProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 8 };
  return &methodTable;
}
}}}}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
class __zz_cib_Generic<::PoDoFo::PdfVecObjects::StreamFactory> : public ::PoDoFo::PdfVecObjects::StreamFactory {
public:
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfVecObjects::StreamFactory>;

  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::PoDoFo::PdfVecObjects::StreamFactory>;

  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_GetMethodTable)
    : ::PoDoFo::PdfVecObjects::StreamFactory::StreamFactory()
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_methodTableHelper(__zz_cib_GetMethodTable)
  {}
  ::PoDoFo::PdfStream* CreateStream(::PoDoFo::PdfObject* pParent) override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<::PoDoFo::PdfStream*>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(pParent)>);
    return __zz_cib_FromAbiType<::PoDoFo::PdfStream*>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::CreateStream_0>(
        __zz_cib_h,
        __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))
      )
    );
  }
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = void(__zz_cib_decl *) (__zz_cib_Proxy);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_Delete_1>(
      __zz_cib_h
    );
  }
  void __zz_cib_ReleaseProxy() { __zz_cib_h_ = nullptr; }
  __ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib_Generic, ::PoDoFo::PdfVecObjects::StreamFactory)

private:
  __zz_cib_Proxy __zz_cib_h_;
  const __zz_cib_MethodTableHelper __zz_cib_methodTableHelper;

  const __zz_cib_MethodTableHelper& __zz_cib_GetMethodTableHelper() const {
    return __zz_cib_methodTableHelper;
  }
  using __zz_cib_MethodId = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class404::__zz_cib_Class406::__zz_cib_Generic::__zz_cib_MethodId;
};
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfVecObjects::StreamFactory> : public ::PoDoFo::PdfVecObjects::StreamFactory {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfVecObjects::StreamFactory>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfVecObjects::StreamFactory>;

  using ::PoDoFo::PdfVecObjects::StreamFactory::StreamFactory;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_GetMethodTable) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfVecObjects::StreamFactory>(__zz_cib_proxy, __zz_cib_GetMethodTable);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfStream*> __zz_cib_decl CreateStream_2(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfObject*> pParent) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfStream*>(
      __zz_cib_obj->CreateStream(
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pParent)
      )
    );
  }
  static void __zz_cib_decl __zz_cib_ReleaseProxy(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->__zz_cib_ReleaseProxy();
}
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class404 {
namespace __zz_cib_Class406 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects::StreamFactory>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects::StreamFactory>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects::StreamFactory>::CreateStream_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects::StreamFactory>::__zz_cib_ReleaseProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 4 };
  return &methodTable;
}
}}}}
