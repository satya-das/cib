#include "podofo/base/PdfArray.h"
#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfEncoding.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfRefCountedBuffer.h"
#include "podofo/base/PdfVariant.h"
#include "podofo/doc/PdfFontMetricsFreetype.h"

namespace PoDoFo {

PoDoFo::PdfFontMetricsFreetype::PdfFontMetricsFreetype(__zz_cib_AbiType h)
  : ::PoDoFo::PdfFontMetrics(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class437(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfFontMetricsFreetype::PdfFontMetricsFreetype(PdfFontMetricsFreetype&& rhs)
  : ::PoDoFo::PdfFontMetrics(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfFontMetricsFreetype::PdfFontMetricsFreetype(const ::PoDoFo::PdfFontMetricsFreetype& __zz_cib_param0)
  : PoDoFo::PdfFontMetricsFreetype(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfFontMetricsFreetype::PdfFontMetricsFreetype(FT_Library* pLibrary, const char* pszFilename, bool pIsSymbol, const char* pszSubsetPrefix)
  : PoDoFo::PdfFontMetricsFreetype(__zz_cib_MyHelper::__zz_cib_New_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pLibrary)>(std::move(pLibrary)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszFilename)>(std::move(pszFilename)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pIsSymbol)>(std::move(pIsSymbol)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszSubsetPrefix)>(std::move(pszSubsetPrefix))))
{}

PoDoFo::PdfFontMetricsFreetype::PdfFontMetricsFreetype(FT_Library* pLibrary, const char* pBuffer, unsigned int nBufLen, bool pIsSymbol, const char* pszSubsetPrefix)
  : PoDoFo::PdfFontMetricsFreetype(__zz_cib_MyHelper::__zz_cib_New_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pLibrary)>(std::move(pLibrary)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(nBufLen)>(std::move(nBufLen)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pIsSymbol)>(std::move(pIsSymbol)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszSubsetPrefix)>(std::move(pszSubsetPrefix))))
{}

PoDoFo::PdfFontMetricsFreetype::PdfFontMetricsFreetype(FT_Library* pLibrary, const ::PoDoFo::PdfRefCountedBuffer& rBuffer, bool pIsSymbol, const char* pszSubsetPrefix)
  : PoDoFo::PdfFontMetricsFreetype(__zz_cib_MyHelper::__zz_cib_New_3(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pLibrary)>(std::move(pLibrary)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(rBuffer)>(rBuffer),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pIsSymbol)>(std::move(pIsSymbol)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszSubsetPrefix)>(std::move(pszSubsetPrefix))))
{}

PoDoFo::PdfFontMetricsFreetype::PdfFontMetricsFreetype(FT_Library* pLibrary, FT_Face face, bool pIsSymbol, const char* pszSubsetPrefix)
  : PoDoFo::PdfFontMetricsFreetype(__zz_cib_MyHelper::__zz_cib_New_4(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pLibrary)>(std::move(pLibrary)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(face)>(std::move(face)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pIsSymbol)>(std::move(pIsSymbol)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszSubsetPrefix)>(std::move(pszSubsetPrefix))))
{}

::PoDoFo::PdfFontMetricsFreetype* PoDoFo::PdfFontMetricsFreetype::CreateForSubsetting(FT_Library* pLibrary, const char* pszFilename, bool pIsSymbol, const char* pszSubsetPrefix) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfFontMetricsFreetype*>(
    __zz_cib_MyHelper::CreateForSubsetting_5<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfFontMetricsFreetype*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(pLibrary)>(std::move(pLibrary)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszFilename)>(std::move(pszFilename)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pIsSymbol)>(std::move(pIsSymbol)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszSubsetPrefix)>(std::move(pszSubsetPrefix))
    )
  );
}

PoDoFo::PdfFontMetricsFreetype::~PdfFontMetricsFreetype() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_6(
    h
  );
}

void PoDoFo::PdfFontMetricsFreetype::GetWidthArray(::PoDoFo::PdfVariant& var, unsigned int nFirst, unsigned int nLast, const ::PoDoFo::PdfEncoding* pEncoding) const {
    __zz_cib_MyHelper::GetWidthArray_7<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(var)>(var),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nFirst)>(std::move(nFirst)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nLast)>(std::move(nLast)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pEncoding)>(std::move(pEncoding))
    );
  }

double PoDoFo::PdfFontMetricsFreetype::GetGlyphWidth(int nGlyphId) const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetGlyphWidth_8<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nGlyphId)>(std::move(nGlyphId))
    )
  );
}

double PoDoFo::PdfFontMetricsFreetype::GetGlyphWidth(const char* pszGlyphname) const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetGlyphWidth_9<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszGlyphname)>(std::move(pszGlyphname))
    )
  );
}

void PoDoFo::PdfFontMetricsFreetype::GetBoundingBox(::PoDoFo::PdfArray& array) const {
    __zz_cib_MyHelper::GetBoundingBox_10<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(array)>(array)
    );
  }

double PoDoFo::PdfFontMetricsFreetype::CharWidth(unsigned char c) const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::CharWidth_11<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(c)>(std::move(c))
    )
  );
}

double PoDoFo::PdfFontMetricsFreetype::UnicodeCharWidth(unsigned short c) const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::UnicodeCharWidth_12<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(c)>(std::move(c))
    )
  );
}

double PoDoFo::PdfFontMetricsFreetype::GetLineSpacing() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetLineSpacing_13<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfFontMetricsFreetype::GetUnderlineThickness() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetUnderlineThickness_14<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfFontMetricsFreetype::GetUnderlinePosition() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetUnderlinePosition_15<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfFontMetricsFreetype::GetStrikeOutPosition() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetStrikeOutPosition_16<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfFontMetricsFreetype::GetStrikeoutThickness() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetStrikeoutThickness_17<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const char* PoDoFo::PdfFontMetricsFreetype::GetFontname() const {
  return __zz_cib_::__zz_cib_FromAbiType<const char*>(
    __zz_cib_MyHelper::GetFontname_18<__zz_cib_::__zz_cib_AbiType_t<const char*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

unsigned int PoDoFo::PdfFontMetricsFreetype::GetWeight() const {
  return __zz_cib_::__zz_cib_FromAbiType<unsigned int>(
    __zz_cib_MyHelper::GetWeight_19<__zz_cib_::__zz_cib_AbiType_t<unsigned int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfFontMetricsFreetype::GetAscent() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetAscent_20<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfFontMetricsFreetype::GetPdfAscent() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetPdfAscent_21<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfFontMetricsFreetype::GetDescent() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetDescent_22<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfFontMetricsFreetype::GetPdfDescent() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetPdfDescent_23<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

int PoDoFo::PdfFontMetricsFreetype::GetItalicAngle() const {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::GetItalicAngle_24<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

long PoDoFo::PdfFontMetricsFreetype::GetGlyphId(long lUnicode) const {
  return __zz_cib_::__zz_cib_FromAbiType<long>(
    __zz_cib_MyHelper::GetGlyphId_25<__zz_cib_::__zz_cib_AbiType_t<long>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lUnicode)>(std::move(lUnicode))
    )
  );
}

bool PoDoFo::PdfFontMetricsFreetype::IsSymbol() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsSymbol_26<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const char* PoDoFo::PdfFontMetricsFreetype::GetFontData() const {
  return __zz_cib_::__zz_cib_FromAbiType<const char*>(
    __zz_cib_MyHelper::GetFontData_27<__zz_cib_::__zz_cib_AbiType_t<const char*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::pdf_long PoDoFo::PdfFontMetricsFreetype::GetFontDataLen() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(
    __zz_cib_MyHelper::GetFontDataLen_28<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_long>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfFontMetricsFreetype::IsBold() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsBold_29<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

bool PoDoFo::PdfFontMetricsFreetype::IsItalic() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsItalic_30<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

FT_Face PoDoFo::PdfFontMetricsFreetype::GetFace() {
  return __zz_cib_::__zz_cib_FromAbiType<FT_Face>(
    __zz_cib_MyHelper::GetFace_31<__zz_cib_::__zz_cib_AbiType_t<FT_Face>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}
}
