#include "__zz_cib_CibPoDoFo-class-down-cast.h"
#include "__zz_cib_CibPoDoFo-delegate-helper.h"
#include "__zz_cib_CibPoDoFo-generic.h"
#include "__zz_cib_CibPoDoFo-ids.h"
#include "__zz_cib_CibPoDoFo-type-converters.h"
#include "__zz_cib_CibPoDoFo-mtable-helper.h"
#include "__zz_cib_CibPoDoFo-proxy-mgr.h"

#include "podofo/base/PdfLocale.h"

#include "podofo/base/PdfLocale.h"
#include "podofo/base/PdfMemoryManagement.h"

#include "podofo/base/PdfMemoryManagement.h"
#include "podofo/base/PdfArray.h"
#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfName.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfRect.h"
#include "podofo/base/PdfReference.h"
#include "podofo/base/PdfString.h"
#include "podofo/base/PdfVecObjects.h"
#include "podofo/doc/PdfAction.h"
#include "podofo/doc/PdfAnnotation.h"
#include "podofo/doc/PdfDestination.h"
#include "podofo/doc/PdfDocument.h"
#include "podofo/doc/PdfFileSpec.h"
#include "podofo/doc/PdfPage.h"
#include "podofo/doc/PdfXObject.h"

#include "podofo/doc/PdfAnnotation.h"
#include "podofo/base/PdfArray.h"
#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfEncoding.h"
#include "podofo/base/PdfRect.h"
#include "podofo/base/PdfVariant.h"
#include "podofo/doc/PdfFontFactoryBase14Data.h"
#include "podofo/doc/PdfFontMetricsBase14.h"

#include "podofo/doc/PdfFontMetricsBase14.h"

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_NsDelegator {
static __zz_cib_AbiType_t<void> __zz_cib_decl PdfLocaleImbue_0(__zz_cib_AbiType_t<std::ios_base&> __zz_cib_param0) {
  ::PoDoFo::PdfLocaleImbue(
    __zz_cib_::__zz_cib_FromAbiType<std::ios_base&>(__zz_cib_param0)
  );
}
}}}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_NsDelegator {
static __zz_cib_AbiType_t<void*> __zz_cib_decl podofo_malloc_1(__zz_cib_AbiType_t<size_t> size) {
  return __zz_cib_ToAbiType<void*>(
    ::PoDoFo::podofo_malloc(
      __zz_cib_::__zz_cib_FromAbiType<size_t>(size)
    )
  );
}
static __zz_cib_AbiType_t<void*> __zz_cib_decl podofo_calloc_2(__zz_cib_AbiType_t<size_t> count, __zz_cib_AbiType_t<size_t> size) {
  return __zz_cib_ToAbiType<void*>(
    ::PoDoFo::podofo_calloc(
      __zz_cib_::__zz_cib_FromAbiType<size_t>(count),
      __zz_cib_::__zz_cib_FromAbiType<size_t>(size)
    )
  );
}
static __zz_cib_AbiType_t<void*> __zz_cib_decl podofo_realloc_3(__zz_cib_AbiType_t<void*> buffer, __zz_cib_AbiType_t<size_t> size) {
  return __zz_cib_ToAbiType<void*>(
    ::PoDoFo::podofo_realloc(
      __zz_cib_::__zz_cib_FromAbiType<void*>(buffer),
      __zz_cib_::__zz_cib_FromAbiType<size_t>(size)
    )
  );
}
static __zz_cib_AbiType_t<void> __zz_cib_decl podofo_free_4(__zz_cib_AbiType_t<void*> buffer) {
  ::PoDoFo::podofo_free(
    __zz_cib_::__zz_cib_FromAbiType<void*>(buffer)
  );
}
static __zz_cib_AbiType_t<bool> __zz_cib_decl podofo_is_little_endian_5() {
  return __zz_cib_ToAbiType<bool>(
    ::PoDoFo::podofo_is_little_endian()
  );
}
}}}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_NsDelegator {
static __zz_cib_AbiType_t<void> __zz_cib_decl SetAppearanceStreamForObject_6(__zz_cib_AbiType_t<::PoDoFo::PdfObject*> pForObject, __zz_cib_AbiType_t<::PoDoFo::PdfXObject*> pObject, __zz_cib_AbiType_t<::PoDoFo::EPdfAnnotationAppearance> eAppearance, __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> state) {
  ::PoDoFo::SetAppearanceStreamForObject(
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pForObject),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfXObject*>(pObject),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfAnnotationAppearance>(eAppearance),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(state)
  );
}
}}}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_NsDelegator {
static __zz_cib_AbiType_t<const ::PoDoFo::PdfFontMetricsBase14*> __zz_cib_decl PODOFO_Base14FontDef_FindBuiltinData_7(__zz_cib_AbiType_t<const char*> font_name) {
  return __zz_cib_ToAbiType<const ::PoDoFo::PdfFontMetricsBase14*>(
    ::PoDoFo::PODOFO_Base14FontDef_FindBuiltinData(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(font_name)
    )
  );
}
}}}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Class333::__zz_cib_NsDelegator::PdfLocaleImbue_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Class333::__zz_cib_NsDelegator::podofo_malloc_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Class333::__zz_cib_NsDelegator::podofo_calloc_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Class333::__zz_cib_NsDelegator::podofo_realloc_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Class333::__zz_cib_NsDelegator::podofo_free_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Class333::__zz_cib_NsDelegator::podofo_is_little_endian_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Class333::__zz_cib_NsDelegator::SetAppearanceStreamForObject_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Class333::__zz_cib_NsDelegator::PODOFO_Base14FontDef_FindBuiltinData_7)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 8 };
  return &methodTable;
}
}}
