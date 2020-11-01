#include "podofo/base/PdfRefCountedBuffer.h"

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
struct __zz_cib_Delegator<::PoDoFo::PdfRefCountedBuffer> : public ::PoDoFo::PdfRefCountedBuffer {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfRefCountedBuffer>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::PoDoFo::PdfRefCountedBuffer::PdfRefCountedBuffer;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<char*> pBuffer, __zz_cib_AbiType_t<size_t> lSize) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<char*>(pBuffer),
    __zz_cib_::__zz_cib_FromAbiType<size_t>(lSize));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<size_t> lSize) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<size_t>(lSize));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_3(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_4(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<char*> __zz_cib_decl GetBuffer_5(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<char*>(
      __zz_cib_obj->::PoDoFo::PdfRefCountedBuffer::GetBuffer()
    );
  }
  static __zz_cib_AbiType_t<size_t> __zz_cib_decl GetSize_6(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<size_t>(
      __zz_cib_obj->::PoDoFo::PdfRefCountedBuffer::GetSize()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Resize_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<size_t> lSize) {
    __zz_cib_obj->::PoDoFo::PdfRefCountedBuffer::Resize(
      __zz_cib_::__zz_cib_FromAbiType<size_t>(lSize)
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfRefCountedBuffer&> __zz_cib_decl __zz_cib_OperatorEqual_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfRefCountedBuffer&> rhs) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfRefCountedBuffer&>(
      __zz_cib_obj->::PoDoFo::PdfRefCountedBuffer::operator=(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRefCountedBuffer&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetTakePossesion_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> bTakePossession) {
    __zz_cib_obj->::PoDoFo::PdfRefCountedBuffer::SetTakePossesion(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bTakePossession)
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl TakePossesion_10(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfRefCountedBuffer::TakePossesion()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq_11(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfRefCountedBuffer&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfRefCountedBuffer::operator==(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRefCountedBuffer&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLT_12(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfRefCountedBuffer&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfRefCountedBuffer::operator<(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRefCountedBuffer&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorGT_13(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfRefCountedBuffer&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfRefCountedBuffer::operator>(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRefCountedBuffer&>(rhs)
      )
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class397 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfRefCountedBuffer>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfRefCountedBuffer>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfRefCountedBuffer>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfRefCountedBuffer>::__zz_cib_Copy_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfRefCountedBuffer>::__zz_cib_Delete_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfRefCountedBuffer>::GetBuffer_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfRefCountedBuffer>::GetSize_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfRefCountedBuffer>::Resize_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfRefCountedBuffer>::__zz_cib_OperatorEqual_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfRefCountedBuffer>::SetTakePossesion_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfRefCountedBuffer>::TakePossesion_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfRefCountedBuffer>::__zz_cib_OperatorCmpEq_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfRefCountedBuffer>::__zz_cib_OperatorLT_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfRefCountedBuffer>::__zz_cib_OperatorGT_13)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 14 };
  return &methodTable;
}
}}}
