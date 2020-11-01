#include "podofo/base/PdfData.h"
#include "podofo/base/PdfOutputDevice.h"
#include "podofo/doc/PdfSignOutputDevice.h"

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
struct __zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice> : public ::PoDoFo::PdfSignOutputDevice {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::PoDoFo::PdfSignOutputDevice::PdfSignOutputDevice;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<::PoDoFo::PdfOutputDevice*> pRealDevice) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutputDevice*>(pRealDevice));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<const char*> pszFilename) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFilename));
  }
  static void __zz_cib_decl __zz_cib_Delete_3(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetSignatureSize_4(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<size_t> lSignatureSize) {
    __zz_cib_obj->::PoDoFo::PdfSignOutputDevice::SetSignatureSize(
      __zz_cib_::__zz_cib_FromAbiType<size_t>(lSignatureSize)
    );
  }
  static __zz_cib_AbiType_t<size_t> __zz_cib_decl GetSignatureSize_5(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<size_t>(
      __zz_cib_obj->::PoDoFo::PdfSignOutputDevice::GetSignatureSize()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfData*> __zz_cib_decl GetSignatureBeacon_6(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfData*>(
      __zz_cib_obj->::PoDoFo::PdfSignOutputDevice::GetSignatureBeacon()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl HasSignaturePosition_7(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfSignOutputDevice::HasSignaturePosition()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl AdjustByteRange_8(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfSignOutputDevice::AdjustByteRange();
  }
  static __zz_cib_AbiType_t<size_t> __zz_cib_decl ReadForSignature_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<char*> pBuffer, __zz_cib_AbiType_t<size_t> lLen) {
    return __zz_cib_ToAbiType<size_t>(
      __zz_cib_obj->::PoDoFo::PdfSignOutputDevice::ReadForSignature(
        __zz_cib_::__zz_cib_FromAbiType<char*>(pBuffer),
        __zz_cib_::__zz_cib_FromAbiType<size_t>(lLen)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetSignature_10(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfData&> sigData) {
    __zz_cib_obj->::PoDoFo::PdfSignOutputDevice::SetSignature(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfData&>(sigData)
    );
  }
  static __zz_cib_AbiType_t<size_t> __zz_cib_decl GetLength_11(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<size_t>(
      __zz_cib_obj->::PoDoFo::PdfSignOutputDevice::GetLength()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Print_12(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszFormat) {
    __zz_cib_obj->::PoDoFo::PdfSignOutputDevice::Print(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFormat)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Write_13(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pBuffer, __zz_cib_AbiType_t<size_t> lLen) {
    __zz_cib_obj->::PoDoFo::PdfSignOutputDevice::Write(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pBuffer),
      __zz_cib_::__zz_cib_FromAbiType<size_t>(lLen)
    );
  }
  static __zz_cib_AbiType_t<size_t> __zz_cib_decl Read_14(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<char*> pBuffer, __zz_cib_AbiType_t<size_t> lLen) {
    return __zz_cib_ToAbiType<size_t>(
      __zz_cib_obj->::PoDoFo::PdfSignOutputDevice::Read(
        __zz_cib_::__zz_cib_FromAbiType<char*>(pBuffer),
        __zz_cib_::__zz_cib_FromAbiType<size_t>(lLen)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Seek_15(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<size_t> offset) {
    __zz_cib_obj->::PoDoFo::PdfSignOutputDevice::Seek(
      __zz_cib_::__zz_cib_FromAbiType<size_t>(offset)
    );
  }
  static __zz_cib_AbiType_t<size_t> __zz_cib_decl Tell_16(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<size_t>(
      __zz_cib_obj->::PoDoFo::PdfSignOutputDevice::Tell()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Flush_17(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfSignOutputDevice::Flush();
  }
  static ::PoDoFo::PdfOutputDevice* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class386(::PoDoFo::PdfSignOutputDevice* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfSignOutputDevice* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class386(::PoDoFo::PdfOutputDevice* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfSignOutputDevice*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class471 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice>::__zz_cib_Delete_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice>::SetSignatureSize_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice>::GetSignatureSize_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice>::GetSignatureBeacon_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice>::HasSignaturePosition_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice>::AdjustByteRange_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice>::ReadForSignature_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice>::SetSignature_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice>::GetLength_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice>::Print_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice>::Write_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice>::Read_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice>::Seek_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice>::Tell_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice>::Flush_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice>::__zz_cib_CastTo__zz_cib_Class386),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSignOutputDevice>::__zz_cib_CastFrom__zz_cib_Class386)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 20 };
  return &methodTable;
}
}}}
