#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfEncrypt.h"
#include "podofo/base/PdfMemStream.h"
#include "podofo/base/PdfName.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfOutputDevice.h"
#include "podofo/base/PdfOutputStream.h"
#include "podofo/base/PdfStream.h"
#include "podofo/base/PdfVecObjects.h"
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
struct __zz_cib_Delegator<::PoDoFo::PdfMemStream> : public ::PoDoFo::PdfMemStream {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemStream>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfMemStream>;
  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::PoDoFo::PdfMemStream>;

  using ::PoDoFo::PdfMemStream::PdfMemStream;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0(__zz_cib_AbiType_t<::PoDoFo::PdfObject*> pParent) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pParent));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_1(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_2(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Write_3(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfOutputDevice*> pDevice, __zz_cib_AbiType_t<::PoDoFo::PdfEncrypt*> pEncrypt) {
    __zz_cib_obj->::PoDoFo::PdfMemStream::Write(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutputDevice*>(pDevice),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfEncrypt*>(pEncrypt)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl GetCopy_4(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<char**> pBuffer, __zz_cib_AbiType_t<::PoDoFo::pdf_long*> lLen) {
    __zz_cib_obj->::PoDoFo::PdfMemStream::GetCopy(
      __zz_cib_::__zz_cib_FromAbiType<char**>(pBuffer),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long*>(lLen)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl GetCopy_5(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfOutputStream*> pStream) {
    __zz_cib_obj->::PoDoFo::PdfMemStream::GetCopy(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutputStream*>(pStream)
    );
  }
  static __zz_cib_AbiType_t<const char*> __zz_cib_decl Get_6(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const char*>(
      __zz_cib_obj->::PoDoFo::PdfMemStream::Get()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl GetLength_7(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->::PoDoFo::PdfMemStream::GetLength()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl FlateCompress_8(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfMemStream::FlateCompress();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Uncompress_9(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfMemStream::Uncompress();
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfStream&> __zz_cib_decl __zz_cib_OperatorEqual_10(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfStream&> rhs) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfStream&>(
      __zz_cib_obj->::PoDoFo::PdfMemStream::operator=(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfStream&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<const char*> __zz_cib_decl GetInternalBuffer_11(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const char*>(
      __zz_cib_obj->::PoDoFo::PdfMemStream::GetInternalBuffer()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl GetInternalBufferSize_12(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->::PoDoFo::PdfMemStream::GetInternalBufferSize()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl BeginAppendImpl_13(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::std::vector<::PoDoFo::EPdfFilter>&> vecFilters) {
    __zz_cib_obj->::PoDoFo::PdfMemStream::BeginAppendImpl(
      __zz_cib_::__zz_cib_FromAbiType<const ::std::vector<::PoDoFo::EPdfFilter>&>(vecFilters)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl AppendImpl_14(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszString, __zz_cib_AbiType_t<size_t> lLen) {
    __zz_cib_obj->::PoDoFo::PdfMemStream::AppendImpl(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pszString),
      __zz_cib_::__zz_cib_FromAbiType<size_t>(lLen)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl EndAppendImpl_15(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfMemStream::EndAppendImpl();
  }
  static void __zz_cib_decl __zz_cib_RegisterProxy(::PoDoFo::PdfMemStream* obj, __zz_cib_Proxy proxy, __zz_cib_ProxyDeleter deleter) {
    __zz_cib_ProxyManagerDelegator::__zz_cib_RegisterProxy(obj, proxy, deleter);
  }
  static ::PoDoFo::PdfStream* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class400(::PoDoFo::PdfMemStream* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfMemStream* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class400(::PoDoFo::PdfStream* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfMemStream*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class382 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemStream>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemStream>::__zz_cib_Copy_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemStream>::__zz_cib_Delete_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemStream>::Write_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemStream>::GetCopy_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemStream>::GetCopy_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemStream>::Get_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemStream>::GetLength_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemStream>::FlateCompress_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemStream>::Uncompress_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemStream>::__zz_cib_OperatorEqual_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemStream>::GetInternalBuffer_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemStream>::GetInternalBufferSize_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemStream>::BeginAppendImpl_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemStream>::AppendImpl_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemStream>::EndAppendImpl_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemStream>::__zz_cib_CastTo__zz_cib_Class400),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemStream>::__zz_cib_CastFrom__zz_cib_Class400),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemStream>::__zz_cib_RegisterProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 19 };
  return &methodTable;
}
}}}
