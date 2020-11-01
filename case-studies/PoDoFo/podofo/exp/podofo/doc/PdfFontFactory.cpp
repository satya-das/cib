#include "podofo/base/PdfDefines.h"
#include "podofo/base/PdfEncoding.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfVecObjects.h"
#include "podofo/doc/PdfFont.h"
#include "podofo/doc/PdfFontFactory.h"
#include "podofo/doc/PdfFontMetrics.h"

namespace PoDoFo {

PoDoFo::PdfFontFactory::PdfFontFactory(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{}

PoDoFo::PdfFontFactory::PdfFontFactory(PdfFontFactory&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

PoDoFo::PdfFontFactory::PdfFontFactory(const ::PoDoFo::PdfFontFactory& __zz_cib_param0)
  : PoDoFo::PdfFontFactory(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfFontFactory::~PdfFontFactory() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

::PoDoFo::PdfFont* PoDoFo::PdfFontFactory::CreateFontObject(::PoDoFo::PdfFontMetrics* pMetrics, int nFlags, const ::PoDoFo::PdfEncoding* pEncoding, ::PoDoFo::PdfVecObjects* pParent) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfFont*>(
    __zz_cib_MyHelper::CreateFontObject_2<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfFont*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(pMetrics)>(std::move(pMetrics)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nFlags)>(std::move(nFlags)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pEncoding)>(std::move(pEncoding)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))
    )
  );
}

::PoDoFo::PdfFont* PoDoFo::PdfFontFactory::CreateFont(FT_Library* pLibrary, ::PoDoFo::PdfObject* pObject) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfFont*>(
    __zz_cib_MyHelper::CreateFont_3<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfFont*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(pLibrary)>(std::move(pLibrary)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pObject)>(std::move(pObject))
    )
  );
}

::PoDoFo::PdfFont* PoDoFo::PdfFontFactory::CreateBase14Font(const char* pszFontName, ::PoDoFo::EPdfFontFlags eFlags, const ::PoDoFo::PdfEncoding* const pEncoding, ::PoDoFo::PdfVecObjects* pParent) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfFont*>(
    __zz_cib_MyHelper::CreateBase14Font_4<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfFont*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszFontName)>(std::move(pszFontName)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eFlags)>(std::move(eFlags)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pEncoding)>(std::move(pEncoding)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))
    )
  );
}

::PoDoFo::EPdfFontType PoDoFo::PdfFontFactory::GetFontType(const char* pszFilename) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfFontType>(
    __zz_cib_MyHelper::GetFontType_5<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::EPdfFontType>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszFilename)>(std::move(pszFilename))
    )
  );
}
}
