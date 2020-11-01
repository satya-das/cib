#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfObjectStreamParserObject.h"
#include "podofo/base/PdfParserObject.h"
#include "podofo/base/PdfRefCountedBuffer.h"
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
struct __zz_cib_Delegator<::PoDoFo::PdfObjectStreamParserObject> : public ::PoDoFo::PdfObjectStreamParserObject {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfObjectStreamParserObject>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::PoDoFo::PdfObjectStreamParserObject::PdfObjectStreamParserObject;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<::PoDoFo::PdfParserObject*> pParser, __zz_cib_AbiType_t<::PoDoFo::PdfVecObjects*> pVecObjects, __zz_cib_AbiType_t<const ::PoDoFo::PdfRefCountedBuffer&> rBuffer) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfParserObject*>(pParser),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVecObjects*>(pVecObjects),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfRefCountedBuffer&>(rBuffer));
  }
  static void __zz_cib_decl __zz_cib_Delete_2(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Parse_3(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::std::vector<::PoDoFo::pdf_int64>&> __zz_cib_param0) {
    __zz_cib_obj->::PoDoFo::PdfObjectStreamParserObject::Parse(
      __zz_cib_::__zz_cib_FromAbiType<const ::std::vector<::PoDoFo::pdf_int64>&>(__zz_cib_param0)
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class385 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfObjectStreamParserObject>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfObjectStreamParserObject>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfObjectStreamParserObject>::__zz_cib_Delete_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfObjectStreamParserObject>::Parse_3)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 4 };
  return &methodTable;
}
}}}
