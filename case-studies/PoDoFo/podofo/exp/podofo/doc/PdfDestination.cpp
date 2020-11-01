#include "podofo/base/PdfArray.h"
#include "podofo/base/PdfDictionary.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfRect.h"
#include "podofo/base/PdfVecObjects.h"
#include "podofo/doc/PdfAction.h"
#include "podofo/doc/PdfDestination.h"
#include "podofo/doc/PdfDocument.h"
#include "podofo/doc/PdfPage.h"

namespace PoDoFo {

PoDoFo::PdfDestination::PdfDestination(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfDestination::PdfDestination(PdfDestination&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfDestination::~PdfDestination() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_0(
    h
  );
}

PoDoFo::PdfDestination::PdfDestination(::PoDoFo::PdfVecObjects* pParent)
  : PoDoFo::PdfDestination(__zz_cib_MyHelper::__zz_cib_New_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}

PoDoFo::PdfDestination::PdfDestination(::PoDoFo::PdfObject* pObject, ::PoDoFo::PdfDocument* pDocument)
  : PoDoFo::PdfDestination(__zz_cib_MyHelper::__zz_cib_New_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pObject)>(std::move(pObject)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pDocument)>(std::move(pDocument))))
{}

PoDoFo::PdfDestination::PdfDestination(::PoDoFo::PdfObject* pObject, ::PoDoFo::PdfVecObjects* pVecObjects)
  : PoDoFo::PdfDestination(__zz_cib_MyHelper::__zz_cib_New_3(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pObject)>(std::move(pObject)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pVecObjects)>(std::move(pVecObjects))))
{}

PoDoFo::PdfDestination::PdfDestination(const ::PoDoFo::PdfPage* pPage, ::PoDoFo::EPdfDestinationFit eFit)
  : PoDoFo::PdfDestination(__zz_cib_MyHelper::__zz_cib_New_4(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pPage)>(std::move(pPage)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(eFit)>(std::move(eFit))))
{}

PoDoFo::PdfDestination::PdfDestination(const ::PoDoFo::PdfPage* pPage, const ::PoDoFo::PdfRect& rRect)
  : PoDoFo::PdfDestination(__zz_cib_MyHelper::__zz_cib_New_5(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pPage)>(std::move(pPage)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rRect)>(rRect)))
{}

PoDoFo::PdfDestination::PdfDestination(const ::PoDoFo::PdfPage* pPage, double dLeft, double dTop, double dZoom)
  : PoDoFo::PdfDestination(__zz_cib_MyHelper::__zz_cib_New_6(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pPage)>(std::move(pPage)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(dLeft)>(std::move(dLeft)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(dTop)>(std::move(dTop)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(dZoom)>(std::move(dZoom))))
{}

PoDoFo::PdfDestination::PdfDestination(const ::PoDoFo::PdfPage* pPage, ::PoDoFo::EPdfDestinationFit eFit, double dValue)
  : PoDoFo::PdfDestination(__zz_cib_MyHelper::__zz_cib_New_7(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pPage)>(std::move(pPage)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(eFit)>(std::move(eFit)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(dValue)>(std::move(dValue))))
{}

PoDoFo::PdfDestination::PdfDestination(const ::PoDoFo::PdfDestination& rhs)
  : PoDoFo::PdfDestination(__zz_cib_MyHelper::__zz_cib_Copy_8(
        __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)))
{}

const ::PoDoFo::PdfDestination& PoDoFo::PdfDestination::operator=(const ::PoDoFo::PdfDestination& rhs) {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfDestination&>(
    __zz_cib_MyHelper::__zz_cib_OperatorEqual_9<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfDestination&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}

::PoDoFo::PdfPage* PoDoFo::PdfDestination::GetPage(::PoDoFo::PdfDocument* pDoc) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfPage*>(
    __zz_cib_MyHelper::GetPage_10<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfPage*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pDoc)>(std::move(pDoc))
    )
  );
}

::PoDoFo::PdfPage* PoDoFo::PdfDestination::GetPage(::PoDoFo::PdfVecObjects* pVecObjects) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfPage*>(
    __zz_cib_MyHelper::GetPage_11<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfPage*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pVecObjects)>(std::move(pVecObjects))
    )
  );
}

::PoDoFo::EPdfDestinationType PoDoFo::PdfDestination::GetType() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfDestinationType>(
    __zz_cib_MyHelper::GetType_12<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::EPdfDestinationType>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfDestination::GetZoom() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetZoom_13<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfRect PoDoFo::PdfDestination::GetRect() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfRect>(
    __zz_cib_MyHelper::GetRect_14<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfRect>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfDestination::GetTop() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetTop_15<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfDestination::GetLeft() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetLeft_16<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfDestination::GetDValue() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetDValue_17<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfObject* PoDoFo::PdfDestination::GetObject() {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::GetObject_18<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const ::PoDoFo::PdfObject* PoDoFo::PdfDestination::GetObject() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfObject*>(
    __zz_cib_MyHelper::GetObject_19<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfObject*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfArray& PoDoFo::PdfDestination::GetArray() {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfArray&>(
    __zz_cib_MyHelper::GetArray_20<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfArray&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const ::PoDoFo::PdfArray& PoDoFo::PdfDestination::GetArray() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfArray&>(
    __zz_cib_MyHelper::GetArray_21<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfArray&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfDestination::AddToDictionary(::PoDoFo::PdfDictionary& dictionary) const {
    __zz_cib_MyHelper::AddToDictionary_22<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(dictionary)>(dictionary)
    );
  }
}
