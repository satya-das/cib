#include "podofo/base/PdfDate.h"
#include "podofo/base/PdfName.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfString.h"
#include "podofo/base/PdfVecObjects.h"
#include "podofo/doc/PdfInfo.h"

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
struct __zz_cib_Delegator<::PoDoFo::PdfInfo> : public ::PoDoFo::PdfInfo {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInfo>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfInfo>;
  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::PoDoFo::PdfInfo>;

  using ::PoDoFo::PdfInfo::PdfInfo;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<::PoDoFo::PdfVecObjects*> pParent, __zz_cib_AbiType_t<int> eInitial) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVecObjects*>(pParent),
    __zz_cib_::__zz_cib_FromAbiType<int>(eInitial));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<::PoDoFo::PdfObject*> pObject, __zz_cib_AbiType_t<int> eInitial) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pObject),
    __zz_cib_::__zz_cib_FromAbiType<int>(eInitial));
  }
  static void __zz_cib_decl __zz_cib_Delete_3(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetAuthor_4(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> sAuthor) {
    __zz_cib_obj->::PoDoFo::PdfInfo::SetAuthor(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(sAuthor)
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> __zz_cib_decl GetAuthor_5(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfString&>(
      __zz_cib_obj->::PoDoFo::PdfInfo::GetAuthor()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetCreator_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> sCreator) {
    __zz_cib_obj->::PoDoFo::PdfInfo::SetCreator(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(sCreator)
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> __zz_cib_decl GetCreator_7(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfString&>(
      __zz_cib_obj->::PoDoFo::PdfInfo::GetCreator()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetKeywords_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> sKeywords) {
    __zz_cib_obj->::PoDoFo::PdfInfo::SetKeywords(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(sKeywords)
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> __zz_cib_decl GetKeywords_9(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfString&>(
      __zz_cib_obj->::PoDoFo::PdfInfo::GetKeywords()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetSubject_10(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> sSubject) {
    __zz_cib_obj->::PoDoFo::PdfInfo::SetSubject(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(sSubject)
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> __zz_cib_decl GetSubject_11(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfString&>(
      __zz_cib_obj->::PoDoFo::PdfInfo::GetSubject()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetTitle_12(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> sTitle) {
    __zz_cib_obj->::PoDoFo::PdfInfo::SetTitle(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(sTitle)
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> __zz_cib_decl GetTitle_13(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfString&>(
      __zz_cib_obj->::PoDoFo::PdfInfo::GetTitle()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetProducer_14(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> sProducer) {
    __zz_cib_obj->::PoDoFo::PdfInfo::SetProducer(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(sProducer)
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> __zz_cib_decl GetProducer_15(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfString&>(
      __zz_cib_obj->::PoDoFo::PdfInfo::GetProducer()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetTrapped_16(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> sTrapped) {
    __zz_cib_obj->::PoDoFo::PdfInfo::SetTrapped(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(sTrapped)
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> __zz_cib_decl GetTrapped_17(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfName&>(
      __zz_cib_obj->::PoDoFo::PdfInfo::GetTrapped()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfDate> __zz_cib_decl GetCreationDate_18(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfDate>(
      __zz_cib_obj->::PoDoFo::PdfInfo::GetCreationDate()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfDate> __zz_cib_decl GetModDate_19(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfDate>(
      __zz_cib_obj->::PoDoFo::PdfInfo::GetModDate()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetCustomKey_20(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> sName, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> sValue) {
    __zz_cib_obj->::PoDoFo::PdfInfo::SetCustomKey(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(sName),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(sValue)
    );
  }
  static void __zz_cib_decl __zz_cib_RegisterProxy(::PoDoFo::PdfInfo* obj, __zz_cib_Proxy proxy, __zz_cib_ProxyDeleter deleter) {
    __zz_cib_ProxyManagerDelegator::__zz_cib_RegisterProxy(obj, proxy, deleter);
  }
  static ::PoDoFo::PdfElement* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class418(::PoDoFo::PdfInfo* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfInfo* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class418(::PoDoFo::PdfElement* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfInfo*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class455 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInfo>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInfo>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInfo>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInfo>::__zz_cib_Delete_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInfo>::SetAuthor_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInfo>::GetAuthor_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInfo>::SetCreator_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInfo>::GetCreator_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInfo>::SetKeywords_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInfo>::GetKeywords_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInfo>::SetSubject_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInfo>::GetSubject_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInfo>::SetTitle_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInfo>::GetTitle_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInfo>::SetProducer_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInfo>::GetProducer_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInfo>::SetTrapped_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInfo>::GetTrapped_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInfo>::GetCreationDate_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInfo>::GetModDate_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInfo>::SetCustomKey_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInfo>::__zz_cib_CastTo__zz_cib_Class418),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInfo>::__zz_cib_CastFrom__zz_cib_Class418),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInfo>::__zz_cib_RegisterProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 24 };
  return &methodTable;
}
}}}
