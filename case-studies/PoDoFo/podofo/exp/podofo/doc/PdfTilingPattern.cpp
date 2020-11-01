#include "podofo/base/PdfDefines.h"
#include "podofo/base/PdfName.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfReference.h"
#include "podofo/base/PdfVecObjects.h"
#include "podofo/base/PdfWriter.h"
#include "podofo/doc/PdfDocument.h"
#include "podofo/doc/PdfImage.h"
#include "podofo/doc/PdfPage.h"
#include "podofo/doc/PdfTilingPattern.h"

namespace PoDoFo {

PoDoFo::PdfTilingPattern::PdfTilingPattern(__zz_cib_AbiType h)
  : ::PoDoFo::PdfElement(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class418(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfTilingPattern::PdfTilingPattern(PdfTilingPattern&& rhs)
  : ::PoDoFo::PdfElement(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfTilingPattern::PdfTilingPattern(const ::PoDoFo::PdfTilingPattern& __zz_cib_param0)
  : PoDoFo::PdfTilingPattern(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfTilingPattern::~PdfTilingPattern() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

const ::PoDoFo::PdfName& PoDoFo::PdfTilingPattern::GetIdentifier() const {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(
    __zz_cib_MyHelper::GetIdentifier_2<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfName&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

PoDoFo::PdfTilingPattern::PdfTilingPattern(::PoDoFo::EPdfTilingPatternType eTilingType, double strokeR, double strokeG, double strokeB, bool doFill, double fillR, double fillG, double fillB, double offsetX, double offsetY, ::PoDoFo::PdfImage* pImage, ::PoDoFo::PdfVecObjects* pParent)
  : PoDoFo::PdfTilingPattern(__zz_cib_MyHelper::__zz_cib_New_3(
        __zz_cib_::__zz_cib_ToAbiType<decltype(eTilingType)>(std::move(eTilingType)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(strokeR)>(std::move(strokeR)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(strokeG)>(std::move(strokeG)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(strokeB)>(std::move(strokeB)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(doFill)>(std::move(doFill)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(fillR)>(std::move(fillR)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(fillG)>(std::move(fillG)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(fillB)>(std::move(fillB)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(offsetX)>(std::move(offsetX)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(offsetY)>(std::move(offsetY)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pImage)>(std::move(pImage)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}

PoDoFo::PdfTilingPattern::PdfTilingPattern(::PoDoFo::EPdfTilingPatternType eTilingType, double strokeR, double strokeG, double strokeB, bool doFill, double fillR, double fillG, double fillB, double offsetX, double offsetY, ::PoDoFo::PdfImage* pImage, ::PoDoFo::PdfDocument* pParent)
  : PoDoFo::PdfTilingPattern(__zz_cib_MyHelper::__zz_cib_New_4(
        __zz_cib_::__zz_cib_ToAbiType<decltype(eTilingType)>(std::move(eTilingType)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(strokeR)>(std::move(strokeR)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(strokeG)>(std::move(strokeG)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(strokeB)>(std::move(strokeB)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(doFill)>(std::move(doFill)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(fillR)>(std::move(fillR)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(fillG)>(std::move(fillG)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(fillB)>(std::move(fillB)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(offsetX)>(std::move(offsetX)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(offsetY)>(std::move(offsetY)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pImage)>(std::move(pImage)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}
}
