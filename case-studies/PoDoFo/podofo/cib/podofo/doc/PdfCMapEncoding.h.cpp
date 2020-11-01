#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfDictionary.h"
#include "podofo/base/PdfEncoding.h"
#include "podofo/base/PdfName.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfRefCountedBuffer.h"
#include "podofo/base/PdfString.h"
#include "podofo/doc/PdfCMapEncoding.h"
#include "podofo/doc/PdfFont.h"

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
struct __zz_cib_Delegator<::PoDoFo::PdfCMapEncoding> : public ::PoDoFo::PdfCMapEncoding {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfCMapEncoding>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfCMapEncoding>;
  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::PoDoFo::PdfCMapEncoding>;

  using ::PoDoFo::PdfCMapEncoding::PdfCMapEncoding;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<::PoDoFo::PdfObject*> pObject, __zz_cib_AbiType_t<::PoDoFo::PdfObject*> pToUnicode) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pObject),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pToUnicode));
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfString> __zz_cib_decl ConvertToUnicode_3(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> rEncodedString, __zz_cib_AbiType_t<const ::PoDoFo::PdfFont*> pFont) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfString>(
      __zz_cib_obj->::PoDoFo::PdfCMapEncoding::ConvertToUnicode(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(rEncodedString),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfFont*>(pFont)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl AddToDictionary_4(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfDictionary&> rDictionary) {
    __zz_cib_obj->::PoDoFo::PdfCMapEncoding::AddToDictionary(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDictionary&>(rDictionary)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfRefCountedBuffer> __zz_cib_decl ConvertToEncoding_5(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> rString, __zz_cib_AbiType_t<const ::PoDoFo::PdfFont*> pFont) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfRefCountedBuffer>(
      __zz_cib_obj->::PoDoFo::PdfCMapEncoding::ConvertToEncoding(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(rString),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfFont*>(pFont)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsAutoDelete_6(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfCMapEncoding::IsAutoDelete()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsSingleByteEncoding_7(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfCMapEncoding::IsSingleByteEncoding()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_uint16> __zz_cib_decl GetCharCode_8(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> nIndex) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_uint16>(
      __zz_cib_obj->::PoDoFo::PdfCMapEncoding::GetCharCode(
        __zz_cib_::__zz_cib_FromAbiType<int>(nIndex)
      )
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> __zz_cib_decl GetID_9(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfName&>(
      __zz_cib_obj->::PoDoFo::PdfCMapEncoding::GetID()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding*> __zz_cib_decl GetBaseEncoding_10(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfEncoding*>(
      __zz_cib_obj->::PoDoFo::PdfCMapEncoding::GetBaseEncoding()
    );
  }
  static void __zz_cib_decl __zz_cib_RegisterProxy(::PoDoFo::PdfCMapEncoding* obj, __zz_cib_Proxy proxy, __zz_cib_ProxyDeleter deleter) {
    __zz_cib_ProxyManagerDelegator::__zz_cib_RegisterProxy(obj, proxy, deleter);
  }
  static ::PoDoFo::PdfEncoding* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class350(::PoDoFo::PdfCMapEncoding* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfCMapEncoding* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class350(::PoDoFo::PdfEncoding* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfCMapEncoding*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class412 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfCMapEncoding>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfCMapEncoding>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfCMapEncoding>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfCMapEncoding>::ConvertToUnicode_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfCMapEncoding>::AddToDictionary_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfCMapEncoding>::ConvertToEncoding_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfCMapEncoding>::IsAutoDelete_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfCMapEncoding>::IsSingleByteEncoding_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfCMapEncoding>::GetCharCode_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfCMapEncoding>::GetID_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfCMapEncoding>::GetBaseEncoding_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfCMapEncoding>::__zz_cib_CastTo__zz_cib_Class350),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfCMapEncoding>::__zz_cib_CastFrom__zz_cib_Class350),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfCMapEncoding>::__zz_cib_RegisterProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 14 };
  return &methodTable;
}
}}}
