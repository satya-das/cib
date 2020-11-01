#include "podofo/base/PdfInputDevice.h"

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
struct __zz_cib_Delegator<::PoDoFo::PdfInputDevice> : public ::PoDoFo::PdfInputDevice {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInputDevice>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::PoDoFo::PdfInputDevice::PdfInputDevice;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<const char*> pszFilename) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFilename));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<const char*> pBuffer, __zz_cib_AbiType_t<size_t> lLen) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const char*>(pBuffer),
    __zz_cib_::__zz_cib_FromAbiType<size_t>(lLen));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_3(__zz_cib_AbiType_t<const std::istream*> pInStream) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const std::istream*>(pInStream));
  }
  static void __zz_cib_decl __zz_cib_Delete_4(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Close_5(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfInputDevice::Close();
  }
  static __zz_cib_AbiType_t<std::streamoff> __zz_cib_decl Tell_6(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<std::streamoff>(
      __zz_cib_obj->::PoDoFo::PdfInputDevice::Tell()
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl GetChar_7(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::PoDoFo::PdfInputDevice::GetChar()
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl Look_8(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::PoDoFo::PdfInputDevice::Look()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Seek_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<std::streamoff> off, __zz_cib_AbiType_t<std::ios_base::seekdir> dir) {
    __zz_cib_obj->::PoDoFo::PdfInputDevice::Seek(
      __zz_cib_::__zz_cib_FromAbiType<std::streamoff>(off),
      __zz_cib_::__zz_cib_FromAbiType<std::ios_base::seekdir>(dir)
    );
  }
  static __zz_cib_AbiType_t<std::streamoff> __zz_cib_decl Read_10(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<char*> pBuffer, __zz_cib_AbiType_t<std::streamsize> lLen) {
    return __zz_cib_ToAbiType<std::streamoff>(
      __zz_cib_obj->::PoDoFo::PdfInputDevice::Read(
        __zz_cib_::__zz_cib_FromAbiType<char*>(pBuffer),
        __zz_cib_::__zz_cib_FromAbiType<std::streamsize>(lLen)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl Eof_11(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfInputDevice::Eof()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl Bad_12(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfInputDevice::Bad()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Clear_13(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<std::ios_base::iostate> state) {
    __zz_cib_obj->::PoDoFo::PdfInputDevice::Clear(
      __zz_cib_::__zz_cib_FromAbiType<std::ios_base::iostate>(state)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsSeekable_14(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfInputDevice::IsSeekable()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetSeekable_15(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> bIsSeekable) {
    __zz_cib_obj->::PoDoFo::PdfInputDevice::SetSeekable(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bIsSeekable)
    );
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_16() {
    return new __zz_cib_Delegatee();
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class377 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInputDevice>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInputDevice>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInputDevice>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInputDevice>::__zz_cib_New_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInputDevice>::__zz_cib_Delete_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInputDevice>::Close_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInputDevice>::Tell_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInputDevice>::GetChar_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInputDevice>::Look_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInputDevice>::Seek_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInputDevice>::Read_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInputDevice>::Eof_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInputDevice>::Bad_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInputDevice>::Clear_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInputDevice>::IsSeekable_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInputDevice>::SetSeekable_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInputDevice>::__zz_cib_New_16)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 17 };
  return &methodTable;
}
}}}
