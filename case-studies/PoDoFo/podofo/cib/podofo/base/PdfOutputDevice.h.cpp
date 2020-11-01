#include "podofo/base/PdfOutputDevice.h"
#include "podofo/base/PdfRefCountedBuffer.h"
#include "podofo/doc/PdfSignOutputDevice.h"

#include <typeinfo>
#include <typeindex>
#include <cstdint>
#include <unordered_map>

extern std::unordered_map<std::type_index, std::uint32_t> __zz_cib_gClassIdRepo;

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
struct __zz_cib_Delegator<::PoDoFo::PdfOutputDevice> : public ::PoDoFo::PdfOutputDevice {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutputDevice>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::PoDoFo::PdfOutputDevice::PdfOutputDevice;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<const char*> pszFilename, __zz_cib_AbiType_t<bool> bTruncate) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFilename),
    __zz_cib_::__zz_cib_FromAbiType<bool>(bTruncate));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_3(__zz_cib_AbiType_t<char*> pBuffer, __zz_cib_AbiType_t<size_t> lLen) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<char*>(pBuffer),
    __zz_cib_::__zz_cib_FromAbiType<size_t>(lLen));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_4(__zz_cib_AbiType_t<const std::ostream*> pOutStream) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const std::ostream*>(pOutStream));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_5(__zz_cib_AbiType_t<::PoDoFo::PdfRefCountedBuffer*> pOutBuffer) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfRefCountedBuffer*>(pOutBuffer));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_6(__zz_cib_AbiType_t<std::iostream*> pStream) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<std::iostream*>(pStream));
  }
  static void __zz_cib_decl __zz_cib_Delete_7(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<size_t> __zz_cib_decl GetLength_8(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<size_t>(
      __zz_cib_obj->::PoDoFo::PdfOutputDevice::GetLength()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Print_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszFormat) {
    __zz_cib_obj->::PoDoFo::PdfOutputDevice::Print(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFormat)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Write_10(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pBuffer, __zz_cib_AbiType_t<size_t> lLen) {
    __zz_cib_obj->::PoDoFo::PdfOutputDevice::Write(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pBuffer),
      __zz_cib_::__zz_cib_FromAbiType<size_t>(lLen)
    );
  }
  static __zz_cib_AbiType_t<size_t> __zz_cib_decl Read_11(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<char*> pBuffer, __zz_cib_AbiType_t<size_t> lLen) {
    return __zz_cib_ToAbiType<size_t>(
      __zz_cib_obj->::PoDoFo::PdfOutputDevice::Read(
        __zz_cib_::__zz_cib_FromAbiType<char*>(pBuffer),
        __zz_cib_::__zz_cib_FromAbiType<size_t>(lLen)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Seek_12(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<size_t> offset) {
    __zz_cib_obj->::PoDoFo::PdfOutputDevice::Seek(
      __zz_cib_::__zz_cib_FromAbiType<size_t>(offset)
    );
  }
  static __zz_cib_AbiType_t<size_t> __zz_cib_decl Tell_13(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<size_t>(
      __zz_cib_obj->::PoDoFo::PdfOutputDevice::Tell()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Flush_14(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfOutputDevice::Flush();
  }
  static std::uint32_t __zz_cib_decl __zz_cib_GetClassId(::PoDoFo::PdfOutputDevice** __zz_cib_obj) {
    static bool classIdRepoPopulated = false;
    if (!classIdRepoPopulated) {
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfSignOutputDevice))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class471::__zz_cib_classId;
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfOutputDevice))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class386::__zz_cib_classId;
      classIdRepoPopulated = true;
    }
    auto tdx = std::type_index(typeid(**__zz_cib_obj));
    auto itr = __zz_cib_gClassIdRepo.find(tdx);
    if (itr != __zz_cib_gClassIdRepo.end()) return itr->second;
    {
      auto* obj = dynamic_cast<::PoDoFo::PdfSignOutputDevice*>(*__zz_cib_obj);
      if (obj) {
        *__zz_cib_obj = obj;
        return __zz_cib_gClassIdRepo[tdx] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class471::__zz_cib_classId;
      }
    }
    return __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class386::__zz_cib_classId;
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class386 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutputDevice>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutputDevice>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutputDevice>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutputDevice>::__zz_cib_New_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutputDevice>::__zz_cib_New_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutputDevice>::__zz_cib_New_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutputDevice>::__zz_cib_New_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutputDevice>::__zz_cib_Delete_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutputDevice>::GetLength_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutputDevice>::Print_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutputDevice>::Write_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutputDevice>::Read_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutputDevice>::Seek_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutputDevice>::Tell_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutputDevice>::Flush_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutputDevice>::__zz_cib_GetClassId)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 16 };
  return &methodTable;
}
}}}
