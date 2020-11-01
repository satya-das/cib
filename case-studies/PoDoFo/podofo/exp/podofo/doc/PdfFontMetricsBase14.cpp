#include "podofo/base/PdfArray.h"
#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfEncoding.h"
#include "podofo/base/PdfRect.h"
#include "podofo/base/PdfVariant.h"
#include "podofo/doc/PdfFontFactoryBase14Data.h"
#include "podofo/doc/PdfFontMetricsBase14.h"

namespace PoDoFo {

PoDoFo::PdfFontMetricsBase14::PdfFontMetricsBase14(__zz_cib_AbiType h)
  : ::PoDoFo::PdfFontMetrics(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class437(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfFontMetricsBase14::PdfFontMetricsBase14(PdfFontMetricsBase14&& rhs)
  : ::PoDoFo::PdfFontMetrics(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfFontMetricsBase14::PdfFontMetricsBase14(const ::PoDoFo::PdfFontMetricsBase14& __zz_cib_param0)
  : PoDoFo::PdfFontMetricsBase14(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfFontMetricsBase14::PdfFontMetricsBase14(const char* mfont_name, const ::PoDoFo::PODOFO_CharData* mwidths_table, bool mis_font_specific, ::PoDoFo::pdf_int16 mascent, ::PoDoFo::pdf_int16 mdescent, ::PoDoFo::pdf_uint16 mx_height, ::PoDoFo::pdf_uint16 mcap_height, ::PoDoFo::pdf_int16 mstrikeout_pos, ::PoDoFo::pdf_int16 munderline_pos, const ::PoDoFo::PdfRect& mbbox)
  : PoDoFo::PdfFontMetricsBase14(__zz_cib_MyHelper::__zz_cib_New_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(mfont_name)>(std::move(mfont_name)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(mwidths_table)>(std::move(mwidths_table)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(mis_font_specific)>(std::move(mis_font_specific)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(mascent)>(std::move(mascent)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(mdescent)>(std::move(mdescent)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(mx_height)>(std::move(mx_height)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(mcap_height)>(std::move(mcap_height)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(mstrikeout_pos)>(std::move(mstrikeout_pos)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(munderline_pos)>(std::move(munderline_pos)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(mbbox)>(mbbox)))
{}

PoDoFo::PdfFontMetricsBase14::~PdfFontMetricsBase14() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_2(
    h
  );
}

void PoDoFo::PdfFontMetricsBase14::GetWidthArray(::PoDoFo::PdfVariant& var, unsigned int nFirst, unsigned int nLast, const ::PoDoFo::PdfEncoding* pEncoding) const {
    __zz_cib_MyHelper::GetWidthArray_3<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(var)>(var),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nFirst)>(std::move(nFirst)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nLast)>(std::move(nLast)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pEncoding)>(std::move(pEncoding))
    );
  }

double PoDoFo::PdfFontMetricsBase14::GetGlyphWidth(int nGlyphId) const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetGlyphWidth_4<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nGlyphId)>(std::move(nGlyphId))
    )
  );
}

double PoDoFo::PdfFontMetricsBase14::GetGlyphWidth(const char* pszGlyphname) const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetGlyphWidth_5<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszGlyphname)>(std::move(pszGlyphname))
    )
  );
}

void PoDoFo::PdfFontMetricsBase14::GetBoundingBox(::PoDoFo::PdfArray& array) const {
    __zz_cib_MyHelper::GetBoundingBox_6<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(array)>(array)
    );
  }

double PoDoFo::PdfFontMetricsBase14::CharWidth(unsigned char c) const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::CharWidth_7<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(c)>(std::move(c))
    )
  );
}

double PoDoFo::PdfFontMetricsBase14::UnicodeCharWidth(unsigned short c) const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::UnicodeCharWidth_8<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(c)>(std::move(c))
    )
  );
}

double PoDoFo::PdfFontMetricsBase14::GetLineSpacing() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetLineSpacing_9<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfFontMetricsBase14::GetUnderlineThickness() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetUnderlineThickness_10<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfFontMetricsBase14::GetUnderlinePosition() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetUnderlinePosition_11<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfFontMetricsBase14::GetStrikeOutPosition() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetStrikeOutPosition_12<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfFontMetricsBase14::GetStrikeoutThickness() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetStrikeoutThickness_13<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const char* PoDoFo::PdfFontMetricsBase14::GetFontname() const {
  return __zz_cib_::__zz_cib_FromAbiType<const char*>(
    __zz_cib_MyHelper::GetFontname_14<__zz_cib_::__zz_cib_AbiType_t<const char*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

unsigned int PoDoFo::PdfFontMetricsBase14::GetWeight() const {
  return __zz_cib_::__zz_cib_FromAbiType<unsigned int>(
    __zz_cib_MyHelper::GetWeight_15<__zz_cib_::__zz_cib_AbiType_t<unsigned int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfFontMetricsBase14::GetAscent() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetAscent_16<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfFontMetricsBase14::GetPdfAscent() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetPdfAscent_17<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfFontMetricsBase14::GetDescent() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetDescent_18<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfFontMetricsBase14::GetPdfDescent() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetPdfDescent_19<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

int PoDoFo::PdfFontMetricsBase14::GetItalicAngle() const {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::GetItalicAngle_20<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

long PoDoFo::PdfFontMetricsBase14::GetGlyphId(long lUnicode) const {
  return __zz_cib_::__zz_cib_FromAbiType<long>(
    __zz_cib_MyHelper::GetGlyphId_21<__zz_cib_::__zz_cib_AbiType_t<long>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lUnicode)>(std::move(lUnicode))
    )
  );
}

bool PoDoFo::PdfFontMetricsBase14::IsSymbol() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsSymbol_22<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const char* PoDoFo::PdfFontMetricsBase14::GetFontData() const {
  return __zz_cib_::__zz_cib_FromAbiType<const char*>(
    __zz_cib_MyHelper::GetFontData_23<__zz_cib_::__zz_cib_AbiType_t<const char*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::pdf_long PoDoFo::PdfFontMetricsBase14::GetFontDataLen() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(
    __zz_cib_MyHelper::GetFontDataLen_24<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_long>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

double PoDoFo::PdfFontMetricsBase14::GetCapHeight() const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::GetCapHeight_25<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

long PoDoFo::PdfFontMetricsBase14::GetGlyphIdUnicode(long lUnicode) const {
  return __zz_cib_::__zz_cib_FromAbiType<long>(
    __zz_cib_MyHelper::GetGlyphIdUnicode_26<__zz_cib_::__zz_cib_AbiType_t<long>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lUnicode)>(std::move(lUnicode))
    )
  );
}
}
