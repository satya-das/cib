#include "podofo/base/PdfArray.h"
#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfEncoding.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfVariant.h"
#include "podofo/doc/PdfFontMetricsObject.h"

namespace PoDoFo {

PoDoFo::PdfFontMetricsObject::PdfFontMetricsObject(__zz_cib_AbiType h)
  : ::PoDoFo::PdfFontMetrics(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class437(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfFontMetricsObject::PdfFontMetricsObject(PdfFontMetricsObject&& rhs)
  : ::PoDoFo::PdfFontMetrics(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfFontMetricsObject::PdfFontMetricsObject(::PoDoFo::PdfObject* pFont, ::PoDoFo::PdfObject* pDescriptor, const ::PoDoFo::PdfEncoding* const pEncoding)
  : PoDoFo::PdfFontMetricsObject(__zz_cib_MyHelper::__zz_cib_New_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pFont)>(std::move(pFont)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pDescriptor)>(std::move(pDescriptor)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pEncoding)>(std::move(pEncoding))))
{}

PoDoFo::PdfFontMetricsObject::~PdfFontMetricsObject() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

void PoDoFo::PdfFontMetricsObject::GetWidthArray(::PoDoFo::PdfVariant& var, unsigned int nFirst, unsigned int nLast, const ::PoDoFo::PdfEncoding* pEncoding) const {
    __zz_cib_MyHelper::GetWidthArray_2<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(var)>(var),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nFirst)>(std::move(nFirst)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nLast)>(std::move(nLast)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pEncoding)>(std::move(pEncoding))
    );
  }

double PoDoFo::PdfFontMetricsObject::GetGlyphWidth(int nGlyphId) const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetGlyphWidth_3<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nGlyphId)>(std::move(nGlyphId))
    )
  );
}

double PoDoFo::PdfFontMetricsObject::GetGlyphWidth(const char* pszGlyphname) const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetGlyphWidth_4<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszGlyphname)>(std::move(pszGlyphname))
    )
  );
}

void PoDoFo::PdfFontMetricsObject::GetBoundingBox(::PoDoFo::PdfArray& array) const {
    __zz_cib_MyHelper::GetBoundingBox_5<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(array)>(array)
    );
  }

double PoDoFo::PdfFontMetricsObject::CharWidth(unsigned char c) const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::CharWidth_6<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(c)>(std::move(c))
    )
  );
}

double PoDoFo::PdfFontMetricsObject::UnicodeCharWidth(unsigned short c) const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::UnicodeCharWidth_7<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(c)>(std::move(c))
    )
  );
}

double PoDoFo::PdfFontMetricsObject::GetLineSpacing() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetLineSpacing_8<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfFontMetricsObject::GetUnderlineThickness() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetUnderlineThickness_9<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfFontMetricsObject::GetUnderlinePosition() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetUnderlinePosition_10<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfFontMetricsObject::GetStrikeOutPosition() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetStrikeOutPosition_11<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfFontMetricsObject::GetStrikeoutThickness() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetStrikeoutThickness_12<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const char* PoDoFo::PdfFontMetricsObject::GetFontname() const {
  return __zz_cib_::__zz_cib_FromAbiType<const char*>(
    __zz_cib_MyHelper::GetFontname_13<__zz_cib_::__zz_cib_AbiType_t<const char*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

unsigned int PoDoFo::PdfFontMetricsObject::GetWeight() const {
  return __zz_cib_::__zz_cib_FromAbiType<unsigned int>(
    __zz_cib_MyHelper::GetWeight_14<__zz_cib_::__zz_cib_AbiType_t<unsigned int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfFontMetricsObject::GetAscent() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetAscent_15<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfFontMetricsObject::GetPdfAscent() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetPdfAscent_16<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfFontMetricsObject::GetDescent() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetDescent_17<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfFontMetricsObject::GetPdfDescent() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetPdfDescent_18<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

int PoDoFo::PdfFontMetricsObject::GetItalicAngle() const {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::GetItalicAngle_19<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

long PoDoFo::PdfFontMetricsObject::GetGlyphId(long lUnicode) const {
  return __zz_cib_::__zz_cib_FromAbiType<long>(
    __zz_cib_MyHelper::GetGlyphId_20<__zz_cib_::__zz_cib_AbiType_t<long>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lUnicode)>(std::move(lUnicode))
    )
  );
}

bool PoDoFo::PdfFontMetricsObject::IsSymbol() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsSymbol_21<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const char* PoDoFo::PdfFontMetricsObject::GetFontData() const {
  return __zz_cib_::__zz_cib_FromAbiType<const char*>(
    __zz_cib_MyHelper::GetFontData_22<__zz_cib_::__zz_cib_AbiType_t<const char*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::pdf_long PoDoFo::PdfFontMetricsObject::GetFontDataLen() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(
    __zz_cib_MyHelper::GetFontDataLen_23<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_long>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}
}
