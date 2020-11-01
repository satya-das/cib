#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfReference.h"
#include "podofo/base/PdfStream.h"
#include "podofo/base/PdfVariant.h"
#include "podofo/base/PdfVecObjects.h"
#include "podofo/base/PdfWriter.h"
#include "podofo/doc/PdfDocument.h"
#include <vector>

namespace PoDoFo {

PoDoFo::PdfVecObjects::PdfVecObjects(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfVecObjects::PdfVecObjects(PdfVecObjects&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfVecObjects::PdfVecObjects(const ::PoDoFo::PdfVecObjects& __zz_cib_param0)
  : PoDoFo::PdfVecObjects(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfVecObjects::PdfVecObjects()
  : PoDoFo::PdfVecObjects(__zz_cib_MyHelper::__zz_cib_New_1())
{}

PoDoFo::PdfVecObjects::~PdfVecObjects() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_2(
    h
  );
}

::PoDoFo::PdfDocument* PoDoFo::PdfVecObjects::GetParentDocument() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDocument*>(
    __zz_cib_MyHelper::GetParentDocument_3<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfDocument*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfVecObjects::SetParentDocument(::PoDoFo::PdfDocument* pDocument) {
    __zz_cib_MyHelper::SetParentDocument_4<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pDocument)>(std::move(pDocument))
    );
  }

void PoDoFo::PdfVecObjects::SetAutoDelete(bool bAutoDelete) {
    __zz_cib_MyHelper::SetAutoDelete_5<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bAutoDelete)>(std::move(bAutoDelete))
    );
  }

bool PoDoFo::PdfVecObjects::AutoDelete() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::AutoDelete_6<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfVecObjects::SetCanReuseObjectNumbers(bool bCanReuseObjectNumbers) {
    __zz_cib_MyHelper::SetCanReuseObjectNumbers_7<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bCanReuseObjectNumbers)>(std::move(bCanReuseObjectNumbers))
    );
  }

bool PoDoFo::PdfVecObjects::GetCanReuseObjectNumbers() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::GetCanReuseObjectNumbers_8<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfVecObjects::Clear() {
    __zz_cib_MyHelper::Clear_9<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

size_t PoDoFo::PdfVecObjects::GetSize() const {
  return __zz_cib_::__zz_cib_FromAbiType<size_t>(
    __zz_cib_MyHelper::GetSize_10<__zz_cib_::__zz_cib_AbiType_t<size_t>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

size_t PoDoFo::PdfVecObjects::GetObjectCount() const {
  return __zz_cib_::__zz_cib_FromAbiType<size_t>(
    __zz_cib_MyHelper::GetObjectCount_11<__zz_cib_::__zz_cib_AbiType_t<size_t>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfObject* PoDoFo::PdfVecObjects::GetObject(const ::PoDoFo::PdfReference& ref) const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::GetObject_12<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(ref)>(ref)
    )
  );
}

::PoDoFo::PdfObject* PoDoFo::PdfVecObjects::MustGetObject(const ::PoDoFo::PdfReference& ref) const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::MustGetObject_13<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(ref)>(ref)
    )
  );
}

size_t PoDoFo::PdfVecObjects::GetIndex(const ::PoDoFo::PdfReference& ref) const {
  return __zz_cib_::__zz_cib_FromAbiType<size_t>(
    __zz_cib_MyHelper::GetIndex_14<__zz_cib_::__zz_cib_AbiType_t<size_t>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(ref)>(ref)
    )
  );
}

::PoDoFo::PdfObject* PoDoFo::PdfVecObjects::RemoveObject(const ::PoDoFo::PdfReference& ref, bool bMarkAsFree) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::RemoveObject_15<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(ref)>(ref),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bMarkAsFree)>(std::move(bMarkAsFree))
    )
  );
}

::PoDoFo::PdfObject* PoDoFo::PdfVecObjects::RemoveObject(const ::PoDoFo::TIVecObjects& it) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::RemoveObject_16<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(it)>(it)
    )
  );
}

::PoDoFo::PdfObject* PoDoFo::PdfVecObjects::CreateObject(const char* pszType) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::CreateObject_17<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszType)>(std::move(pszType))
    )
  );
}

::PoDoFo::PdfObject* PoDoFo::PdfVecObjects::CreateObject(const ::PoDoFo::PdfVariant& rVariant) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::CreateObject_18<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rVariant)>(rVariant)
    )
  );
}

void PoDoFo::PdfVecObjects::AddFreeObject(const ::PoDoFo::PdfReference& rReference) {
    __zz_cib_MyHelper::AddFreeObject_19<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rReference)>(rReference)
    );
  }

const ::PoDoFo::TPdfReferenceList& PoDoFo::PdfVecObjects::GetFreeObjects() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::TPdfReferenceList&>(
    __zz_cib_MyHelper::GetFreeObjects_20<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::TPdfReferenceList&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfVecObjects::RenumberObjects(::PoDoFo::PdfObject* pTrailer, ::PoDoFo::TPdfReferenceSet* pNotDelete, bool bDoGarbageCollection) {
    __zz_cib_MyHelper::RenumberObjects_21<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pTrailer)>(std::move(pTrailer)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pNotDelete)>(std::move(pNotDelete)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bDoGarbageCollection)>(std::move(bDoGarbageCollection))
    );
  }

void PoDoFo::PdfVecObjects::push_back(::PoDoFo::PdfObject* pObj) {
    __zz_cib_MyHelper::push_back_22<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pObj)>(std::move(pObj))
    );
  }

void PoDoFo::PdfVecObjects::insert_sorted(::PoDoFo::PdfObject* pObj) {
    __zz_cib_MyHelper::insert_sorted_23<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pObj)>(std::move(pObj))
    );
  }

void PoDoFo::PdfVecObjects::Sort() {
    __zz_cib_MyHelper::Sort_24<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

void PoDoFo::PdfVecObjects::SetMaxReserveSize(size_t size) {
    __zz_cib_MyHelper::SetMaxReserveSize_25<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(size)>(std::move(size))
    );
  }

size_t PoDoFo::PdfVecObjects::GetMaxReserveSize() const {
  return __zz_cib_::__zz_cib_FromAbiType<size_t>(
    __zz_cib_MyHelper::GetMaxReserveSize_26<__zz_cib_::__zz_cib_AbiType_t<size_t>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfVecObjects::Reserve(size_t size) {
    __zz_cib_MyHelper::Reserve_27<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(size)>(std::move(size))
    );
  }

void PoDoFo::PdfVecObjects::GetObjectDependencies(const ::PoDoFo::PdfObject* pObj, ::PoDoFo::TPdfReferenceList* pList) const {
    __zz_cib_MyHelper::GetObjectDependencies_28<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pObj)>(std::move(pObj)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pList)>(std::move(pList))
    );
  }

void PoDoFo::PdfVecObjects::Attach(::PoDoFo::PdfVecObjects::Observer* pObserver) {
    __zz_cib_MyHelper::Attach_29<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pObserver)>(std::move(pObserver))
    );
  }

void PoDoFo::PdfVecObjects::Detach(::PoDoFo::PdfVecObjects::Observer* pObserver) {
    __zz_cib_MyHelper::Detach_30<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pObserver)>(std::move(pObserver))
    );
  }

void PoDoFo::PdfVecObjects::SetStreamFactory(::PoDoFo::PdfVecObjects::StreamFactory* pFactory) {
    __zz_cib_MyHelper::SetStreamFactory_31<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pFactory)>(std::move(pFactory))
    );
  }

::PoDoFo::PdfStream* PoDoFo::PdfVecObjects::CreateStream(::PoDoFo::PdfObject* pParent) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfStream*>(
    __zz_cib_MyHelper::CreateStream_32<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfStream*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))
    )
  );
}

::PoDoFo::PdfStream* PoDoFo::PdfVecObjects::CreateStream(const ::PoDoFo::PdfStream& rhs) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfStream*>(
    __zz_cib_MyHelper::CreateStream_33<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfStream*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}

void PoDoFo::PdfVecObjects::WriteObject(::PoDoFo::PdfObject* pObject) {
    __zz_cib_MyHelper::WriteObject_34<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pObject)>(std::move(pObject))
    );
  }

void PoDoFo::PdfVecObjects::Finish() {
    __zz_cib_MyHelper::Finish_35<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

void PoDoFo::PdfVecObjects::BeginAppendStream(const ::PoDoFo::PdfStream* pStream) {
    __zz_cib_MyHelper::BeginAppendStream_36<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pStream)>(std::move(pStream))
    );
  }

void PoDoFo::PdfVecObjects::EndAppendStream(const ::PoDoFo::PdfStream* pStream) {
    __zz_cib_MyHelper::EndAppendStream_37<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pStream)>(std::move(pStream))
    );
  }

::PoDoFo::TIVecObjects PoDoFo::PdfVecObjects::begin() {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::TIVecObjects>(
    __zz_cib_MyHelper::begin_38<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::TIVecObjects>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::TCIVecObjects PoDoFo::PdfVecObjects::begin() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::TCIVecObjects>(
    __zz_cib_MyHelper::begin_39<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::TCIVecObjects>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::TIVecObjects PoDoFo::PdfVecObjects::end() {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::TIVecObjects>(
    __zz_cib_MyHelper::end_40<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::TIVecObjects>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::TCIVecObjects PoDoFo::PdfVecObjects::end() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::TCIVecObjects>(
    __zz_cib_MyHelper::end_41<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::TCIVecObjects>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfObject* PoDoFo::PdfVecObjects::operator[](size_t index) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::__zz_cib_OperatorIndex_42<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(index)>(std::move(index))
    )
  );
}

::PoDoFo::PdfObject* PoDoFo::PdfVecObjects::GetBack() {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::GetBack_43<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfVecObjects::CollectGarbage(::PoDoFo::PdfObject* pTrailer) {
    __zz_cib_MyHelper::CollectGarbage_44<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pTrailer)>(std::move(pTrailer))
    );
  }

std::string PoDoFo::PdfVecObjects::GetNextSubsetPrefix() {
  return __zz_cib_::__zz_cib_FromAbiType<std::string>(
    __zz_cib_MyHelper::GetNextSubsetPrefix_45<__zz_cib_::__zz_cib_AbiType_t<std::string>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfVecObjects::SetObjectCount(const ::PoDoFo::PdfReference& rRef) {
    __zz_cib_MyHelper::SetObjectCount_46<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rRef)>(rRef)
    );
  }
}
namespace PoDoFo {

PoDoFo::PdfVecObjects::Observer::Observer(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfVecObjects::Observer::Observer(Observer&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfVecObjects::Observer::~Observer() {
  __zz_cib_MyHelper::__zz_cib_ReleaseProxy(this);
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

PoDoFo::PdfVecObjects::Observer::Observer()
  : PoDoFo::PdfVecObjects::Observer(__zz_cib_MyHelper::__zz_cib_New_0(this))
{}
}
namespace PoDoFo {

PoDoFo::PdfVecObjects::StreamFactory::StreamFactory(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfVecObjects::StreamFactory::StreamFactory(StreamFactory&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfVecObjects::StreamFactory::~StreamFactory() {
  __zz_cib_MyHelper::__zz_cib_ReleaseProxy(this);
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

PoDoFo::PdfVecObjects::StreamFactory::StreamFactory()
  : PoDoFo::PdfVecObjects::StreamFactory(__zz_cib_MyHelper::__zz_cib_New_0(this))
{}
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfVecObjects::Observer> {
  using __zz_cib_Delegatee = ::PoDoFo::PdfVecObjects::Observer;
  static __zz_cib_AbiType_t<void> __zz_cib_decl Finish_0(::PoDoFo::PdfVecObjects::Observer* __zz_cib_obj) {
    __zz_cib_obj->Finish();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl BeginAppendStream_1(::PoDoFo::PdfVecObjects::Observer* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfStream*> pStream) {
    __zz_cib_obj->BeginAppendStream(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfStream*>(pStream)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl EndAppendStream_2(::PoDoFo::PdfVecObjects::Observer* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfStream*> pStream) {
    __zz_cib_obj->EndAppendStream(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfStream*>(pStream)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl WriteObject_3(::PoDoFo::PdfVecObjects::Observer* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfObject*> pObject) {
    __zz_cib_obj->WriteObject(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfObject*>(pObject)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl ParentDestructed_4(::PoDoFo::PdfVecObjects::Observer* __zz_cib_obj) {
    __zz_cib_obj->ParentDestructed();
  }
  static void __zz_cib_decl __zz_cib_Delete_5(::PoDoFo::PdfVecObjects::Observer* __zz_cib_obj) {
    __zz_cib_Helper<::PoDoFo::PdfVecObjects::Observer>::__zz_cib_ReleaseHandle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class404 {
namespace __zz_cib_Class405 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects::Observer>::Finish_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects::Observer>::BeginAppendStream_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects::Observer>::EndAppendStream_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects::Observer>::WriteObject_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects::Observer>::ParentDestructed_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects::Observer>::__zz_cib_Delete_5)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 6 };
  return &methodTable;
}
}}}}

namespace __zz_cib_ {
template<>
const __zz_cib_MethodTable* __zz_cib_Helper<::PoDoFo::PdfVecObjects::Observer>::__zz_cib_GetProxyMethodTable() {
  return __zz_cib_::__zz_cib_Class333::__zz_cib_Class404::__zz_cib_Class405::__zz_cib_GetMethodTable();
}
}

namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfVecObjects::StreamFactory> {
  using __zz_cib_Delegatee = ::PoDoFo::PdfVecObjects::StreamFactory;
  static __zz_cib_AbiType_t<::PoDoFo::PdfStream*> __zz_cib_decl CreateStream_0(::PoDoFo::PdfVecObjects::StreamFactory* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfObject*> pParent) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfStream*>(
      __zz_cib_obj->CreateStream(
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pParent)
      )
    );
  }
  static void __zz_cib_decl __zz_cib_Delete_1(::PoDoFo::PdfVecObjects::StreamFactory* __zz_cib_obj) {
    __zz_cib_Helper<::PoDoFo::PdfVecObjects::StreamFactory>::__zz_cib_ReleaseHandle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class404 {
namespace __zz_cib_Class406 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects::StreamFactory>::CreateStream_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfVecObjects::StreamFactory>::__zz_cib_Delete_1)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 2 };
  return &methodTable;
}
}}}}

namespace __zz_cib_ {
template<>
const __zz_cib_MethodTable* __zz_cib_Helper<::PoDoFo::PdfVecObjects::StreamFactory>::__zz_cib_GetProxyMethodTable() {
  return __zz_cib_::__zz_cib_Class333::__zz_cib_Class404::__zz_cib_Class406::__zz_cib_GetMethodTable();
}
}

