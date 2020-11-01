#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfDefines.h"
#include "podofo/base/PdfExtension.h"

namespace PoDoFo {

PoDoFo::PdfExtension::PdfExtension(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfExtension::PdfExtension(PdfExtension&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfExtension::PdfExtension(const ::PoDoFo::PdfExtension& __zz_cib_param0)
  : PoDoFo::PdfExtension(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfExtension::~PdfExtension() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

PoDoFo::PdfExtension::PdfExtension(const char* ns, ::PoDoFo::EPdfVersion baseVersion, ::PoDoFo::pdf_int64 level)
  : PoDoFo::PdfExtension(__zz_cib_MyHelper::__zz_cib_New_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(ns)>(std::move(ns)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(baseVersion)>(std::move(baseVersion)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(level)>(std::move(level))))
{}

const std::string& PoDoFo::PdfExtension::getNamespace() const {
  return __zz_cib_::__zz_cib_FromAbiType<const std::string&>(
    __zz_cib_MyHelper::getNamespace_3<__zz_cib_::__zz_cib_AbiType_t<const std::string&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::EPdfVersion PoDoFo::PdfExtension::getBaseVersion() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfVersion>(
    __zz_cib_MyHelper::getBaseVersion_4<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::EPdfVersion>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::pdf_int64 PoDoFo::PdfExtension::getLevel() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_int64>(
    __zz_cib_MyHelper::getLevel_5<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_int64>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}
}
