#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfString.h"
#include "podofo/base/PdfVecObjects.h"
#include "podofo/doc/PdfDocument.h"
#include "podofo/doc/PdfFileSpec.h"

namespace PoDoFo {

PoDoFo::PdfFileSpec::PdfFileSpec(__zz_cib_AbiType h)
  : ::PoDoFo::PdfElement(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class418(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfFileSpec::PdfFileSpec(PdfFileSpec&& rhs)
  : ::PoDoFo::PdfElement(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfFileSpec::PdfFileSpec(const ::PoDoFo::PdfFileSpec& __zz_cib_param0)
  : PoDoFo::PdfFileSpec(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfFileSpec::~PdfFileSpec() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

PoDoFo::PdfFileSpec::PdfFileSpec(const char* pszFilename, bool bEmbedd, ::PoDoFo::PdfDocument* pParent, bool bStripPath)
  : PoDoFo::PdfFileSpec(__zz_cib_MyHelper::__zz_cib_New_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pszFilename)>(std::move(pszFilename)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bEmbedd)>(std::move(bEmbedd)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bStripPath)>(std::move(bStripPath))))
{}

PoDoFo::PdfFileSpec::PdfFileSpec(const char* pszFilename, bool bEmbedd, ::PoDoFo::PdfVecObjects* pParent, bool bStripPath)
  : PoDoFo::PdfFileSpec(__zz_cib_MyHelper::__zz_cib_New_3(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pszFilename)>(std::move(pszFilename)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bEmbedd)>(std::move(bEmbedd)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bStripPath)>(std::move(bStripPath))))
{}

PoDoFo::PdfFileSpec::PdfFileSpec(const char* pszFilename, const unsigned char* data, ptrdiff_t size, ::PoDoFo::PdfVecObjects* pParent, bool bStripPath)
  : PoDoFo::PdfFileSpec(__zz_cib_MyHelper::__zz_cib_New_4(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pszFilename)>(std::move(pszFilename)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(data)>(std::move(data)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(size)>(std::move(size)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bStripPath)>(std::move(bStripPath))))
{}

PoDoFo::PdfFileSpec::PdfFileSpec(const char* pszFilename, const unsigned char* data, ptrdiff_t size, ::PoDoFo::PdfDocument* pParent, bool bStripPath)
  : PoDoFo::PdfFileSpec(__zz_cib_MyHelper::__zz_cib_New_5(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pszFilename)>(std::move(pszFilename)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(data)>(std::move(data)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(size)>(std::move(size)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bStripPath)>(std::move(bStripPath))))
{}

PoDoFo::PdfFileSpec::PdfFileSpec(::PoDoFo::PdfObject* pObject)
  : PoDoFo::PdfFileSpec(__zz_cib_MyHelper::__zz_cib_New_6(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pObject)>(std::move(pObject))))
{}

const ::PoDoFo::PdfString& PoDoFo::PdfFileSpec::GetFilename(bool canUnicode) const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(
    __zz_cib_MyHelper::GetFilename_7<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfString&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(canUnicode)>(std::move(canUnicode))
    )
  );
}
}
