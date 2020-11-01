#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfString.h"
#include "podofo/base/PdfVecObjects.h"
#include "podofo/doc/PdfAction.h"
#include "podofo/doc/PdfDestination.h"
#include "podofo/doc/PdfDocument.h"
#include "podofo/doc/PdfOutlines.h"

namespace PoDoFo {

PoDoFo::PdfOutlineItem::PdfOutlineItem(__zz_cib_AbiType h)
  : ::PoDoFo::PdfElement(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class418(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfOutlineItem::PdfOutlineItem(PdfOutlineItem&& rhs)
  : ::PoDoFo::PdfElement(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfOutlineItem::PdfOutlineItem(const ::PoDoFo::PdfOutlineItem& __zz_cib_param0)
  : PoDoFo::PdfOutlineItem(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfOutlineItem::~PdfOutlineItem() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

::PoDoFo::PdfOutlineItem* PoDoFo::PdfOutlineItem::CreateChild(const ::PoDoFo::PdfString& sTitle, const ::PoDoFo::PdfDestination& rDest) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutlineItem*>(
    __zz_cib_MyHelper::CreateChild_2<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfOutlineItem*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(sTitle)>(sTitle),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rDest)>(rDest)
    )
  );
}

::PoDoFo::PdfOutlineItem* PoDoFo::PdfOutlineItem::CreateNext(const ::PoDoFo::PdfString& sTitle, const ::PoDoFo::PdfDestination& rDest) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutlineItem*>(
    __zz_cib_MyHelper::CreateNext_3<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfOutlineItem*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(sTitle)>(sTitle),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rDest)>(rDest)
    )
  );
}

::PoDoFo::PdfOutlineItem* PoDoFo::PdfOutlineItem::CreateNext(const ::PoDoFo::PdfString& sTitle, const ::PoDoFo::PdfAction& rAction) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutlineItem*>(
    __zz_cib_MyHelper::CreateNext_4<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfOutlineItem*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(sTitle)>(sTitle),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rAction)>(rAction)
    )
  );
}

void PoDoFo::PdfOutlineItem::InsertChild(::PoDoFo::PdfOutlineItem* pItem) {
    __zz_cib_MyHelper::InsertChild_5<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pItem)>(std::move(pItem))
    );
  }

::PoDoFo::PdfOutlineItem* PoDoFo::PdfOutlineItem::Prev() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutlineItem*>(
    __zz_cib_MyHelper::Prev_6<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfOutlineItem*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfOutlineItem* PoDoFo::PdfOutlineItem::Next() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutlineItem*>(
    __zz_cib_MyHelper::Next_7<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfOutlineItem*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfOutlineItem* PoDoFo::PdfOutlineItem::First() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutlineItem*>(
    __zz_cib_MyHelper::First_8<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfOutlineItem*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfOutlineItem* PoDoFo::PdfOutlineItem::Last() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutlineItem*>(
    __zz_cib_MyHelper::Last_9<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfOutlineItem*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::PdfOutlineItem* PoDoFo::PdfOutlineItem::GetParentOutline() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutlineItem*>(
    __zz_cib_MyHelper::GetParentOutline_10<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfOutlineItem*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfOutlineItem::Erase() {
    __zz_cib_MyHelper::Erase_11<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

void PoDoFo::PdfOutlineItem::SetDestination(const ::PoDoFo::PdfDestination& rDest) {
    __zz_cib_MyHelper::SetDestination_12<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rDest)>(rDest)
    );
  }

::PoDoFo::PdfDestination* PoDoFo::PdfOutlineItem::GetDestination(::PoDoFo::PdfDocument* pDoc) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDestination*>(
    __zz_cib_MyHelper::GetDestination_13<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfDestination*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pDoc)>(std::move(pDoc))
    )
  );
}

void PoDoFo::PdfOutlineItem::SetAction(const ::PoDoFo::PdfAction& rAction) {
    __zz_cib_MyHelper::SetAction_14<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rAction)>(rAction)
    );
  }

::PoDoFo::PdfAction* PoDoFo::PdfOutlineItem::GetAction() {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfAction*>(
    __zz_cib_MyHelper::GetAction_15<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfAction*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfOutlineItem::SetTitle(const ::PoDoFo::PdfString& sTitle) {
    __zz_cib_MyHelper::SetTitle_16<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(sTitle)>(sTitle)
    );
  }

const ::PoDoFo::PdfString& PoDoFo::PdfOutlineItem::GetTitle() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(
    __zz_cib_MyHelper::GetTitle_17<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfString&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfOutlineItem::SetTextFormat(::PoDoFo::EPdfOutlineFormat eFormat) {
    __zz_cib_MyHelper::SetTextFormat_18<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eFormat)>(std::move(eFormat))
    );
  }

::PoDoFo::EPdfOutlineFormat PoDoFo::PdfOutlineItem::GetTextFormat() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfOutlineFormat>(
    __zz_cib_MyHelper::GetTextFormat_19<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::EPdfOutlineFormat>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfOutlineItem::SetTextColor(double r, double g, double b) {
    __zz_cib_MyHelper::SetTextColor_20<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(r)>(std::move(r)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(g)>(std::move(g)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(b)>(std::move(b))
    );
  }

double PoDoFo::PdfOutlineItem::GetTextColorRed() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetTextColorRed_21<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfOutlineItem::GetTextColorBlue() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetTextColorBlue_22<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfOutlineItem::GetTextColorGreen() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetTextColorGreen_23<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

PoDoFo::PdfOutlineItem::PdfOutlineItem(::PoDoFo::PdfVecObjects* pParent)
  : PoDoFo::PdfOutlineItem(__zz_cib_MyHelper::__zz_cib_New_24(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}

PoDoFo::PdfOutlineItem::PdfOutlineItem(const ::PoDoFo::PdfString& sTitle, const ::PoDoFo::PdfDestination& rDest, ::PoDoFo::PdfOutlineItem* pParentOutline, ::PoDoFo::PdfVecObjects* pParent)
  : PoDoFo::PdfOutlineItem(__zz_cib_MyHelper::__zz_cib_New_25(
        __zz_cib_::__zz_cib_ToAbiType<decltype(sTitle)>(sTitle),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rDest)>(rDest),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParentOutline)>(std::move(pParentOutline)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}

PoDoFo::PdfOutlineItem::PdfOutlineItem(const ::PoDoFo::PdfString& sTitle, const ::PoDoFo::PdfAction& rAction, ::PoDoFo::PdfOutlineItem* pParentOutline, ::PoDoFo::PdfVecObjects* pParent)
  : PoDoFo::PdfOutlineItem(__zz_cib_MyHelper::__zz_cib_New_26(
        __zz_cib_::__zz_cib_ToAbiType<decltype(sTitle)>(sTitle),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rAction)>(rAction),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParentOutline)>(std::move(pParentOutline)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}

PoDoFo::PdfOutlineItem::PdfOutlineItem(::PoDoFo::PdfObject* pObject, ::PoDoFo::PdfOutlineItem* pParentOutline, ::PoDoFo::PdfOutlineItem* pPrevious)
  : PoDoFo::PdfOutlineItem(__zz_cib_MyHelper::__zz_cib_New_27(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pObject)>(std::move(pObject)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParentOutline)>(std::move(pParentOutline)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pPrevious)>(std::move(pPrevious))))
{}
}
namespace PoDoFo {

PoDoFo::PdfOutlines::PdfOutlines(__zz_cib_AbiType h)
  : ::PoDoFo::PdfOutlineItem(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class458(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfOutlines::PdfOutlines(PdfOutlines&& rhs)
  : ::PoDoFo::PdfOutlineItem(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfOutlines::PdfOutlines(const ::PoDoFo::PdfOutlines& __zz_cib_param0)
  : PoDoFo::PdfOutlines(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfOutlines::PdfOutlines(::PoDoFo::PdfVecObjects* pParent)
  : PoDoFo::PdfOutlines(__zz_cib_MyHelper::__zz_cib_New_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}

PoDoFo::PdfOutlines::PdfOutlines(::PoDoFo::PdfObject* pObject)
  : PoDoFo::PdfOutlines(__zz_cib_MyHelper::__zz_cib_New_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pObject)>(std::move(pObject))))
{}

PoDoFo::PdfOutlines::~PdfOutlines() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_3(
    h
  );
}

::PoDoFo::PdfOutlineItem* PoDoFo::PdfOutlines::CreateRoot(const ::PoDoFo::PdfString& sTitle) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutlineItem*>(
    __zz_cib_MyHelper::CreateRoot_4<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfOutlineItem*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(sTitle)>(sTitle)
    )
  );
}
}
