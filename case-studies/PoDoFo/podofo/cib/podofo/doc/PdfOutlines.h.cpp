#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfString.h"
#include "podofo/base/PdfVecObjects.h"
#include "podofo/doc/PdfAction.h"
#include "podofo/doc/PdfDestination.h"
#include "podofo/doc/PdfDocument.h"
#include "podofo/doc/PdfOutlines.h"

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
struct __zz_cib_Delegator<::PoDoFo::PdfOutlineItem> : public ::PoDoFo::PdfOutlineItem {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutlineItem>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfOutlineItem>;
  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::PoDoFo::PdfOutlineItem>;

  using ::PoDoFo::PdfOutlineItem::PdfOutlineItem;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfOutlineItem*> __zz_cib_decl CreateChild_2(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> sTitle, __zz_cib_AbiType_t<const ::PoDoFo::PdfDestination&> rDest) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfOutlineItem*>(
      __zz_cib_obj->::PoDoFo::PdfOutlineItem::CreateChild(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(sTitle),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfDestination&>(rDest)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfOutlineItem*> __zz_cib_decl CreateNext_3(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> sTitle, __zz_cib_AbiType_t<const ::PoDoFo::PdfDestination&> rDest) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfOutlineItem*>(
      __zz_cib_obj->::PoDoFo::PdfOutlineItem::CreateNext(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(sTitle),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfDestination&>(rDest)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfOutlineItem*> __zz_cib_decl CreateNext_4(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> sTitle, __zz_cib_AbiType_t<const ::PoDoFo::PdfAction&> rAction) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfOutlineItem*>(
      __zz_cib_obj->::PoDoFo::PdfOutlineItem::CreateNext(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(sTitle),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfAction&>(rAction)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl InsertChild_5(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfOutlineItem*> pItem) {
    __zz_cib_obj->::PoDoFo::PdfOutlineItem::InsertChild(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutlineItem*>(pItem)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfOutlineItem*> __zz_cib_decl Prev_6(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfOutlineItem*>(
      __zz_cib_obj->::PoDoFo::PdfOutlineItem::Prev()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfOutlineItem*> __zz_cib_decl Next_7(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfOutlineItem*>(
      __zz_cib_obj->::PoDoFo::PdfOutlineItem::Next()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfOutlineItem*> __zz_cib_decl First_8(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfOutlineItem*>(
      __zz_cib_obj->::PoDoFo::PdfOutlineItem::First()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfOutlineItem*> __zz_cib_decl Last_9(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfOutlineItem*>(
      __zz_cib_obj->::PoDoFo::PdfOutlineItem::Last()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfOutlineItem*> __zz_cib_decl GetParentOutline_10(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfOutlineItem*>(
      __zz_cib_obj->::PoDoFo::PdfOutlineItem::GetParentOutline()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Erase_11(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfOutlineItem::Erase();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetDestination_12(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfDestination&> rDest) {
    __zz_cib_obj->::PoDoFo::PdfOutlineItem::SetDestination(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfDestination&>(rDest)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfDestination*> __zz_cib_decl GetDestination_13(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfDocument*> pDoc) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfDestination*>(
      __zz_cib_obj->::PoDoFo::PdfOutlineItem::GetDestination(
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDocument*>(pDoc)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetAction_14(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfAction&> rAction) {
    __zz_cib_obj->::PoDoFo::PdfOutlineItem::SetAction(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfAction&>(rAction)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfAction*> __zz_cib_decl GetAction_15(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfAction*>(
      __zz_cib_obj->::PoDoFo::PdfOutlineItem::GetAction()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetTitle_16(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> sTitle) {
    __zz_cib_obj->::PoDoFo::PdfOutlineItem::SetTitle(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(sTitle)
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> __zz_cib_decl GetTitle_17(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfString&>(
      __zz_cib_obj->::PoDoFo::PdfOutlineItem::GetTitle()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetTextFormat_18(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::EPdfOutlineFormat> eFormat) {
    __zz_cib_obj->::PoDoFo::PdfOutlineItem::SetTextFormat(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfOutlineFormat>(eFormat)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::EPdfOutlineFormat> __zz_cib_decl GetTextFormat_19(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::EPdfOutlineFormat>(
      __zz_cib_obj->::PoDoFo::PdfOutlineItem::GetTextFormat()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetTextColor_20(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<double> r, __zz_cib_AbiType_t<double> g, __zz_cib_AbiType_t<double> b) {
    __zz_cib_obj->::PoDoFo::PdfOutlineItem::SetTextColor(
      __zz_cib_::__zz_cib_FromAbiType<double>(r),
      __zz_cib_::__zz_cib_FromAbiType<double>(g),
      __zz_cib_::__zz_cib_FromAbiType<double>(b)
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetTextColorRed_21(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfOutlineItem::GetTextColorRed()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetTextColorBlue_22(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfOutlineItem::GetTextColorBlue()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetTextColorGreen_23(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfOutlineItem::GetTextColorGreen()
    );
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_24(__zz_cib_AbiType_t<::PoDoFo::PdfVecObjects*> pParent) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVecObjects*>(pParent));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_25(__zz_cib_AbiType_t<const ::PoDoFo::PdfString&> sTitle, __zz_cib_AbiType_t<const ::PoDoFo::PdfDestination&> rDest, __zz_cib_AbiType_t<::PoDoFo::PdfOutlineItem*> pParentOutline, __zz_cib_AbiType_t<::PoDoFo::PdfVecObjects*> pParent) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(sTitle),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfDestination&>(rDest),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutlineItem*>(pParentOutline),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVecObjects*>(pParent));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_26(__zz_cib_AbiType_t<const ::PoDoFo::PdfString&> sTitle, __zz_cib_AbiType_t<const ::PoDoFo::PdfAction&> rAction, __zz_cib_AbiType_t<::PoDoFo::PdfOutlineItem*> pParentOutline, __zz_cib_AbiType_t<::PoDoFo::PdfVecObjects*> pParent) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(sTitle),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfAction&>(rAction),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutlineItem*>(pParentOutline),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVecObjects*>(pParent));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_27(__zz_cib_AbiType_t<::PoDoFo::PdfObject*> pObject, __zz_cib_AbiType_t<::PoDoFo::PdfOutlineItem*> pParentOutline, __zz_cib_AbiType_t<::PoDoFo::PdfOutlineItem*> pPrevious) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pObject),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutlineItem*>(pParentOutline),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutlineItem*>(pPrevious));
  }
  static void __zz_cib_decl __zz_cib_RegisterProxy(::PoDoFo::PdfOutlineItem* obj, __zz_cib_Proxy proxy, __zz_cib_ProxyDeleter deleter) {
    __zz_cib_ProxyManagerDelegator::__zz_cib_RegisterProxy(obj, proxy, deleter);
  }
  static ::PoDoFo::PdfElement* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class418(::PoDoFo::PdfOutlineItem* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfOutlineItem* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class418(::PoDoFo::PdfElement* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfOutlineItem*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class458 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutlineItem>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutlineItem>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutlineItem>::CreateChild_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutlineItem>::CreateNext_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutlineItem>::CreateNext_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutlineItem>::InsertChild_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutlineItem>::Prev_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutlineItem>::Next_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutlineItem>::First_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutlineItem>::Last_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutlineItem>::GetParentOutline_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutlineItem>::Erase_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutlineItem>::SetDestination_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutlineItem>::GetDestination_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutlineItem>::SetAction_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutlineItem>::GetAction_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutlineItem>::SetTitle_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutlineItem>::GetTitle_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutlineItem>::SetTextFormat_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutlineItem>::GetTextFormat_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutlineItem>::SetTextColor_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutlineItem>::GetTextColorRed_21),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutlineItem>::GetTextColorBlue_22),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutlineItem>::GetTextColorGreen_23),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutlineItem>::__zz_cib_New_24),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutlineItem>::__zz_cib_New_25),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutlineItem>::__zz_cib_New_26),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutlineItem>::__zz_cib_New_27),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutlineItem>::__zz_cib_CastTo__zz_cib_Class418),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutlineItem>::__zz_cib_CastFrom__zz_cib_Class418),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutlineItem>::__zz_cib_RegisterProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 31 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfOutlines> : public ::PoDoFo::PdfOutlines {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutlines>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfOutlines>;
  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::PoDoFo::PdfOutlines>;

  using ::PoDoFo::PdfOutlines::PdfOutlines;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<::PoDoFo::PdfVecObjects*> pParent) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVecObjects*>(pParent));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<::PoDoFo::PdfObject*> pObject) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pObject));
  }
  static void __zz_cib_decl __zz_cib_Delete_3(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfOutlineItem*> __zz_cib_decl CreateRoot_4(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> sTitle) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfOutlineItem*>(
      __zz_cib_obj->::PoDoFo::PdfOutlines::CreateRoot(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(sTitle)
      )
    );
  }
  static void __zz_cib_decl __zz_cib_RegisterProxy(::PoDoFo::PdfOutlines* obj, __zz_cib_Proxy proxy, __zz_cib_ProxyDeleter deleter) {
    __zz_cib_ProxyManagerDelegator::__zz_cib_RegisterProxy(obj, proxy, deleter);
  }
  static ::PoDoFo::PdfElement* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class418(::PoDoFo::PdfOutlines* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfOutlines* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class418(::PoDoFo::PdfElement* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfOutlines*>(__zz_cib_obj);
  }
  static ::PoDoFo::PdfOutlineItem* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class458(::PoDoFo::PdfOutlines* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfOutlines* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class458(::PoDoFo::PdfOutlineItem* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfOutlines*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class459 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutlines>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutlines>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutlines>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutlines>::__zz_cib_Delete_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutlines>::CreateRoot_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutlines>::__zz_cib_CastTo__zz_cib_Class418),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutlines>::__zz_cib_CastFrom__zz_cib_Class418),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutlines>::__zz_cib_CastTo__zz_cib_Class458),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutlines>::__zz_cib_CastFrom__zz_cib_Class458),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutlines>::__zz_cib_RegisterProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 10 };
  return &methodTable;
}
}}}
