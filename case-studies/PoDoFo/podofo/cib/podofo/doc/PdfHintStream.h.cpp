#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfVecObjects.h"
#include "podofo/doc/PdfHintStream.h"
#include "podofo/doc/PdfPagesTree.h"

#include "__zz_cib_CibPoDoFo-class-down-cast.h"
#include "__zz_cib_CibPoDoFo-delegate-helper.h"
#include "__zz_cib_CibPoDoFo-generic.h"
#include "__zz_cib_CibPoDoFo-ids.h"
#include "__zz_cib_CibPoDoFo-type-converters.h"
#include "__zz_cib_CibPoDoFo-mtable-helper.h"
#include "__zz_cib_CibPoDoFo-proxy-mgr.h"

namespace __zz_cib_ {
using namespace ::PoDoFo;
using namespace ::PoDoFo::NonPublic;
template <>
struct __zz_cib_Delegator<::PoDoFo::NonPublic::PdfHintStream> : public ::PoDoFo::NonPublic::PdfHintStream {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::NonPublic::PdfHintStream>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::NonPublic::PdfHintStream>;

  using ::PoDoFo::NonPublic::PdfHintStream::PdfHintStream;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<::PoDoFo::PdfVecObjects*> pParent, __zz_cib_AbiType_t<::PoDoFo::PdfPagesTree*> pPagesTree) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVecObjects*>(pParent),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfPagesTree*>(pPagesTree));
  }
  static void __zz_cib_decl __zz_cib_Delete_2(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl WriteUInt16_3(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::pdf_uint16> val) {
    __zz_cib_obj->::PoDoFo::NonPublic::PdfHintStream::WriteUInt16(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_uint16>(val)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl WriteUInt32_4(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::pdf_uint32> __zz_cib_param0) {
    __zz_cib_obj->::PoDoFo::NonPublic::PdfHintStream::WriteUInt32(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_uint32>(__zz_cib_param0)
    );
  }
  static ::PoDoFo::PdfElement* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class418(::PoDoFo::NonPublic::PdfHintStream* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::NonPublic::PdfHintStream* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class418(::PoDoFo::PdfElement* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::NonPublic::PdfHintStream*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class407 {
using namespace ::PoDoFo::NonPublic;
namespace __zz_cib_Class452 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::NonPublic::PdfHintStream>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::NonPublic::PdfHintStream>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::NonPublic::PdfHintStream>::__zz_cib_Delete_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::NonPublic::PdfHintStream>::WriteUInt16_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::NonPublic::PdfHintStream>::WriteUInt32_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::NonPublic::PdfHintStream>::__zz_cib_CastTo__zz_cib_Class418),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::NonPublic::PdfHintStream>::__zz_cib_CastFrom__zz_cib_Class418)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 7 };
  return &methodTable;
}
}}}}
