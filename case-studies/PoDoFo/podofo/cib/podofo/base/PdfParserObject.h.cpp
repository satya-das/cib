#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfEncrypt.h"
#include "podofo/base/PdfParser.h"
#include "podofo/base/PdfParserObject.h"
#include "podofo/base/PdfRefCountedBuffer.h"
#include "podofo/base/PdfRefCountedInputDevice.h"
#include "podofo/base/PdfVecObjects.h"

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
struct __zz_cib_Delegator<::PoDoFo::PdfParserObject> : public ::PoDoFo::PdfParserObject {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParserObject>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfParserObject>;
  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::PoDoFo::PdfParserObject>;

  using ::PoDoFo::PdfParserObject::PdfParserObject;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0(__zz_cib_AbiType_t<::PoDoFo::PdfVecObjects*> pCreator, __zz_cib_AbiType_t<const ::PoDoFo::PdfRefCountedInputDevice&> rDevice, __zz_cib_AbiType_t<const ::PoDoFo::PdfRefCountedBuffer&> rBuffer, __zz_cib_AbiType_t<::PoDoFo::pdf_long> lOffset) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVecObjects*>(pCreator),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRefCountedInputDevice&>(rDevice),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRefCountedBuffer&>(rBuffer),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(lOffset));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<const ::PoDoFo::PdfRefCountedBuffer&> rBuffer) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRefCountedBuffer&>(rBuffer));
  }
  static void __zz_cib_decl __zz_cib_Delete_2(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl ParseFile_3(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfEncrypt*> pEncrypt, __zz_cib_AbiType_t<bool> bIsTrailer) {
    __zz_cib_obj->::PoDoFo::PdfParserObject::ParseFile(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfEncrypt*>(pEncrypt),
      __zz_cib_::__zz_cib_FromAbiType<bool>(bIsTrailer)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl HasStreamToParse_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfParserObject::HasStreamToParse()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsLoadOnDemand_5(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfParserObject::IsLoadOnDemand()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetLoadOnDemand_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> bDelayed) {
    __zz_cib_obj->::PoDoFo::PdfParserObject::SetLoadOnDemand(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bDelayed)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetObjectNumber_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<unsigned int> nObjNo) {
    __zz_cib_obj->::PoDoFo::PdfParserObject::SetObjectNumber(
      __zz_cib_::__zz_cib_FromAbiType<unsigned int>(nObjNo)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl FreeObjectMemory_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> bForce) {
    __zz_cib_obj->::PoDoFo::PdfParserObject::FreeObjectMemory(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bForce)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_int64> __zz_cib_decl GetOffset_9(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_int64>(
      __zz_cib_obj->::PoDoFo::PdfParserObject::GetOffset()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl DelayedLoadImpl_10(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfParserObject::DelayedLoadImpl();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl DelayedStreamLoadImpl_11(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfParserObject::DelayedStreamLoadImpl();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl ParseStream_12(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfParserObject::ParseStream();
  }
  static void __zz_cib_decl __zz_cib_RegisterProxy(::PoDoFo::PdfParserObject* obj, __zz_cib_Proxy proxy, __zz_cib_ProxyDeleter deleter) {
    __zz_cib_ProxyManagerDelegator::__zz_cib_RegisterProxy(obj, proxy, deleter);
  }
  static ::PoDoFo::PdfVariant* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class403(::PoDoFo::PdfParserObject* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfParserObject* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class403(::PoDoFo::PdfVariant* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfParserObject*>(__zz_cib_obj);
  }
  static ::PoDoFo::PdfObject* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class384(::PoDoFo::PdfParserObject* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfParserObject* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class384(::PoDoFo::PdfObject* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfParserObject*>(__zz_cib_obj);
  }
  static ::PoDoFo::PdfTokenizer* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class402(::PoDoFo::PdfParserObject* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfParserObject* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class402(::PoDoFo::PdfTokenizer* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfParserObject*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class395 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParserObject>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParserObject>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParserObject>::__zz_cib_Delete_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParserObject>::ParseFile_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParserObject>::HasStreamToParse_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParserObject>::IsLoadOnDemand_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParserObject>::SetLoadOnDemand_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParserObject>::SetObjectNumber_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParserObject>::FreeObjectMemory_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParserObject>::GetOffset_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParserObject>::DelayedLoadImpl_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParserObject>::DelayedStreamLoadImpl_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParserObject>::ParseStream_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParserObject>::__zz_cib_CastTo__zz_cib_Class403),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParserObject>::__zz_cib_CastFrom__zz_cib_Class403),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParserObject>::__zz_cib_CastTo__zz_cib_Class384),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParserObject>::__zz_cib_CastFrom__zz_cib_Class384),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParserObject>::__zz_cib_CastTo__zz_cib_Class402),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParserObject>::__zz_cib_CastFrom__zz_cib_Class402),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfParserObject>::__zz_cib_RegisterProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 20 };
  return &methodTable;
}
}}}
