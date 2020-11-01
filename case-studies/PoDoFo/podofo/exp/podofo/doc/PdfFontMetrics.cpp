#include "podofo/base/PdfArray.h"
#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfDefines.h"
#include "podofo/base/PdfEncoding.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfString.h"
#include "podofo/base/PdfVariant.h"
#include "podofo/doc/PdfFontMetrics.h"
#include "podofo/doc/PdfFontMetricsBase14.h"
#include "podofo/doc/PdfFontMetricsFreetype.h"
#include "podofo/doc/PdfFontMetricsObject.h"

#include "__zz_cib_internal/__zz_cib_CibPoDoFo-generic.h"

namespace PoDoFo {

PoDoFo::PdfFontMetrics::PdfFontMetrics(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfFontMetrics::PdfFontMetrics(PdfFontMetrics&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfFontMetrics::PdfFontMetrics(::PoDoFo::EPdfFontType eFontType, const char* pszFilename, const char* pszSubsetPrefix)
  : PoDoFo::PdfFontMetrics(__zz_cib_MyHelper::__zz_cib_New_0(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(eFontType)>(std::move(eFontType)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszFilename)>(std::move(pszFilename)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(pszSubsetPrefix)>(std::move(pszSubsetPrefix))))
{}

PoDoFo::PdfFontMetrics::~PdfFontMetrics() {
  __zz_cib_MyHelper::__zz_cib_ReleaseProxy(this);
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

double PoDoFo::PdfFontMetrics::StringWidth(const ::PoDoFo::PdfString& rsString) const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::StringWidth_6<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rsString)>(rsString)
    )
  );
}

double PoDoFo::PdfFontMetrics::StringWidth(const char* pszText, ::PoDoFo::pdf_long nLength) const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::StringWidth_7<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszText)>(std::move(pszText)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nLength)>(std::move(nLength))
    )
  );
}

double PoDoFo::PdfFontMetrics::StringWidth(const ::PoDoFo::pdf_uint16* pszText, unsigned int nLength) const {
  return __zz_cib_::__zz_cib_FromAbiType<double>(
    __zz_cib_MyHelper::StringWidth_8<__zz_cib_::__zz_cib_AbiType_t<double>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszText)>(std::move(pszText)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nLength)>(std::move(nLength))
    )
  );
}

unsigned long PoDoFo::PdfFontMetrics::StringWidthMM(const char* pszText, unsigned int nLength) const {
  return __zz_cib_::__zz_cib_FromAbiType<unsigned long>(
    __zz_cib_MyHelper::StringWidthMM_9<__zz_cib_::__zz_cib_AbiType_t<unsigned long>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszText)>(std::move(pszText)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nLength)>(std::move(nLength))
    )
  );
}

unsigned long PoDoFo::PdfFontMetrics::StringWidthMM(const ::PoDoFo::pdf_uint16* pszText, unsigned int nLength) const {
  return __zz_cib_::__zz_cib_FromAbiType<unsigned long>(
    __zz_cib_MyHelper::StringWidthMM_10<__zz_cib_::__zz_cib_AbiType_t<unsigned long>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszText)>(std::move(pszText)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nLength)>(std::move(nLength))
    )
  );
}

unsigned long PoDoFo::PdfFontMetrics::CharWidthMM(unsigned char c) const {
  return __zz_cib_::__zz_cib_FromAbiType<unsigned long>(
    __zz_cib_MyHelper::CharWidthMM_13<__zz_cib_::__zz_cib_AbiType_t<unsigned long>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(c)>(std::move(c))
    )
  );
}

unsigned long PoDoFo::PdfFontMetrics::GetLineSpacingMM() const {
  return __zz_cib_::__zz_cib_FromAbiType<unsigned long>(
    __zz_cib_MyHelper::GetLineSpacingMM_15<__zz_cib_::__zz_cib_AbiType_t<unsigned long>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

unsigned long PoDoFo::PdfFontMetrics::GetUnderlineThicknessMM() const {
  return __zz_cib_::__zz_cib_FromAbiType<unsigned long>(
    __zz_cib_MyHelper::GetUnderlineThicknessMM_17<__zz_cib_::__zz_cib_AbiType_t<unsigned long>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

long PoDoFo::PdfFontMetrics::GetUnderlinePositionMM() const {
  return __zz_cib_::__zz_cib_FromAbiType<long>(
    __zz_cib_MyHelper::GetUnderlinePositionMM_19<__zz_cib_::__zz_cib_AbiType_t<long>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

unsigned long PoDoFo::PdfFontMetrics::GetStrikeOutPositionMM() const {
  return __zz_cib_::__zz_cib_FromAbiType<unsigned long>(
    __zz_cib_MyHelper::GetStrikeOutPositionMM_21<__zz_cib_::__zz_cib_AbiType_t<unsigned long>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

unsigned long PoDoFo::PdfFontMetrics::GetStrikeoutThicknessMM() const {
  return __zz_cib_::__zz_cib_FromAbiType<unsigned long>(
    __zz_cib_MyHelper::GetStrikeoutThicknessMM_23<__zz_cib_::__zz_cib_AbiType_t<unsigned long>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const char* PoDoFo::PdfFontMetrics::GetFilename() const {
  return __zz_cib_::__zz_cib_FromAbiType<const char*>(
    __zz_cib_MyHelper::GetFilename_24<__zz_cib_::__zz_cib_AbiType_t<const char*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const char* PoDoFo::PdfFontMetrics::GetSubsetFontnamePrefix() const {
  return __zz_cib_::__zz_cib_FromAbiType<const char*>(
    __zz_cib_MyHelper::GetSubsetFontnamePrefix_28<__zz_cib_::__zz_cib_AbiType_t<const char*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfFontMetrics::SetFontSize(float fSize) {
    __zz_cib_MyHelper::SetFontSize_35<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(fSize)>(std::move(fSize))
    );
  }

float PoDoFo::PdfFontMetrics::GetFontSize() const {
  return __zz_cib_::__zz_cib_FromAbiType<float>(
    __zz_cib_MyHelper::GetFontSize_36<__zz_cib_::__zz_cib_AbiType_t<float>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfFontMetrics::SetFontScale(float fScale) {
    __zz_cib_MyHelper::SetFontScale_37<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(fScale)>(std::move(fScale))
    );
  }

float PoDoFo::PdfFontMetrics::GetFontScale() const {
  return __zz_cib_::__zz_cib_FromAbiType<float>(
    __zz_cib_MyHelper::GetFontScale_38<__zz_cib_::__zz_cib_AbiType_t<float>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfFontMetrics::SetFontCharSpace(float fCharSpace) {
    __zz_cib_MyHelper::SetFontCharSpace_39<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(fCharSpace)>(std::move(fCharSpace))
    );
  }

float PoDoFo::PdfFontMetrics::GetFontCharSpace() const {
  return __zz_cib_::__zz_cib_FromAbiType<float>(
    __zz_cib_MyHelper::GetFontCharSpace_40<__zz_cib_::__zz_cib_AbiType_t<float>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfFontMetrics::SetWordSpace(float fWordSpace) {
    __zz_cib_MyHelper::SetWordSpace_41<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(fWordSpace)>(std::move(fWordSpace))
    );
  }

float PoDoFo::PdfFontMetrics::GetWordSpace() const {
  return __zz_cib_::__zz_cib_FromAbiType<float>(
    __zz_cib_MyHelper::GetWordSpace_42<__zz_cib_::__zz_cib_AbiType_t<float>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::EPdfFontType PoDoFo::PdfFontMetrics::GetFontType() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfFontType>(
    __zz_cib_MyHelper::GetFontType_43<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::EPdfFontType>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::PoDoFo::EPdfFontType PoDoFo::PdfFontMetrics::FontTypeFromFilename(const char* pszFilename) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfFontType>(
    __zz_cib_MyHelper::FontTypeFromFilename_46<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::EPdfFontType>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszFilename)>(std::move(pszFilename))
    )
  );
}

void PoDoFo::PdfFontMetrics::SetFontType(::PoDoFo::EPdfFontType eFontType) {
    __zz_cib_MyHelper::SetFontType_47<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(eFontType)>(std::move(eFontType))
    );
  }
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template<>
class __zz_cib_Generic<::PoDoFo::PdfFontMetrics> : public ::PoDoFo::PdfFontMetrics {
  using __zz_cib_MethodId = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class437::__zz_cib_MethodId;
  static __zz_cib_MethodTableHelper& __zz_cib_GetMethodTableHelper() {
    static __zz_cib_MethodTableHelper mtableHelper(__zz_cib_CibPoDoFoGetMethodTable(
      __zz_cib_ids::__zz_cib_Class333::__zz_cib_Class437::__zz_cib_classId));
    return mtableHelper;
  }
  explicit __zz_cib_Generic(__zz_cib_AbiType h) : ::PoDoFo::PdfFontMetrics(h) {}
public:
  static ::PoDoFo::PdfFontMetrics* __zz_cib_FromHandle(__zz_cib_AbiType h) {
    return new __zz_cib_Generic(h);
  }
  bool IsSymbol() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::IsSymbol_45>(
        __zz_cib_h
      )
    );
  }
  int GetItalicAngle() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<int>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<int>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetItalicAngle_34>(
        __zz_cib_h
      )
    );
  }
  double GetDescent() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<double>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<double>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetDescent_32>(
        __zz_cib_h
      )
    );
  }
  double GetPdfAscent() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<double>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<double>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetPdfAscent_31>(
        __zz_cib_h
      )
    );
  }
  double UnicodeCharWidth(unsigned short c) const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<double>(__zz_cib_decl *) (const __zz_cib_AbiType, __zz_cib_AbiType_t<decltype(c)>);
    return __zz_cib_FromAbiType<double>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::UnicodeCharWidth_12>(
        __zz_cib_h,
        __zz_cib_::__zz_cib_ToAbiType<decltype(c)>(std::move(c))
      )
    );
  }
  void GetWidthArray(::PoDoFo::PdfVariant& var, unsigned int nFirst, unsigned int nLast, const ::PoDoFo::PdfEncoding* pEncoding) const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (const __zz_cib_AbiType, __zz_cib_AbiType_t<decltype(var)>, __zz_cib_AbiType_t<decltype(nFirst)>, __zz_cib_AbiType_t<decltype(nLast)>, __zz_cib_AbiType_t<decltype(pEncoding)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetWidthArray_2>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(var)>(var),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nFirst)>(std::move(nFirst)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nLast)>(std::move(nLast)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pEncoding)>(std::move(pEncoding))
    );
  }
  double GetUnderlineThickness() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<double>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<double>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetUnderlineThickness_16>(
        __zz_cib_h
      )
    );
  }
  double CharWidth(unsigned char c) const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<double>(__zz_cib_decl *) (const __zz_cib_AbiType, __zz_cib_AbiType_t<decltype(c)>);
    return __zz_cib_FromAbiType<double>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::CharWidth_11>(
        __zz_cib_h,
        __zz_cib_::__zz_cib_ToAbiType<decltype(c)>(std::move(c))
      )
    );
  }
  double GetStrikeOutPosition() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<double>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<double>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetStrikeOutPosition_20>(
        __zz_cib_h
      )
    );
  }
  double GetGlyphWidth(const char* pszGlyphname) const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<double>(__zz_cib_decl *) (const __zz_cib_AbiType, __zz_cib_AbiType_t<decltype(pszGlyphname)>);
    return __zz_cib_FromAbiType<double>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetGlyphWidth_4>(
        __zz_cib_h,
        __zz_cib_::__zz_cib_ToAbiType<decltype(pszGlyphname)>(std::move(pszGlyphname))
      )
    );
  }
  double GetGlyphWidth(int nGlyphId) const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<double>(__zz_cib_decl *) (const __zz_cib_AbiType, __zz_cib_AbiType_t<decltype(nGlyphId)>);
    return __zz_cib_FromAbiType<double>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetGlyphWidth_3>(
        __zz_cib_h,
        __zz_cib_::__zz_cib_ToAbiType<decltype(nGlyphId)>(std::move(nGlyphId))
      )
    );
  }
  unsigned int GetWeight() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<unsigned int>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<unsigned int>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetWeight_29>(
        __zz_cib_h
      )
    );
  }
  double GetLineSpacing() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<double>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<double>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetLineSpacing_14>(
        __zz_cib_h
      )
    );
  }
  double GetUnderlinePosition() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<double>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<double>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetUnderlinePosition_18>(
        __zz_cib_h
      )
    );
  }
  long GetGlyphId(long lUnicode) const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<long>(__zz_cib_decl *) (const __zz_cib_AbiType, __zz_cib_AbiType_t<decltype(lUnicode)>);
    return __zz_cib_FromAbiType<long>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetGlyphId_44>(
        __zz_cib_h,
        __zz_cib_::__zz_cib_ToAbiType<decltype(lUnicode)>(std::move(lUnicode))
      )
    );
  }
  void GetBoundingBox(::PoDoFo::PdfArray& array) const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (const __zz_cib_AbiType, __zz_cib_AbiType_t<decltype(array)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetBoundingBox_5>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(array)>(array)
    );
  }
  const char* GetFontname() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<const char*>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<const char*>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetFontname_27>(
        __zz_cib_h
      )
    );
  }
  double GetStrikeoutThickness() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<double>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<double>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetStrikeoutThickness_22>(
        __zz_cib_h
      )
    );
  }
  double GetPdfDescent() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<double>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<double>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetPdfDescent_33>(
        __zz_cib_h
      )
    );
  }
  const char* GetFontData() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<const char*>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<const char*>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetFontData_25>(
        __zz_cib_h
      )
    );
  }
  ::PoDoFo::pdf_long GetFontDataLen() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<::PoDoFo::pdf_long>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<::PoDoFo::pdf_long>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetFontDataLen_26>(
        __zz_cib_h
      )
    );
  }
  double GetAscent() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<double>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<double>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetAscent_30>(
        __zz_cib_h
      )
    );
  }
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    auto __zz_cib_h = __zz_cib_Helper<::PoDoFo::PdfFontMetrics>::__zz_cib_ReleaseHandle(this);
    using __zz_cib_ProcType = void(__zz_cib_decl *) (__zz_cib_AbiType);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_Delete_1>(
      __zz_cib_h
    );
  }
};
}

namespace __zz_cib_ {
template<>
::PoDoFo::PdfFontMetrics* __zz_cib_Helper<::PoDoFo::PdfFontMetrics>::__zz_cib_CreateProxy(__zz_cib_AbiType h) {
  switch(__zz_cib_GetClassId(&h)) {
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class438::__zz_cib_classId:
    return __zz_cib_Helper<PoDoFo::PdfFontMetricsBase14>::__zz_cib_FromHandle(
      __zz_cib_Helper<PoDoFo::PdfFontMetricsBase14>::__zz_cib_CastFrom__zz_cib_Class437(h)
    );
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class439::__zz_cib_classId:
    return __zz_cib_Helper<PoDoFo::PdfFontMetricsFreetype>::__zz_cib_FromHandle(
      __zz_cib_Helper<PoDoFo::PdfFontMetricsFreetype>::__zz_cib_CastFrom__zz_cib_Class437(h)
    );
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class440::__zz_cib_classId:
    return __zz_cib_Helper<PoDoFo::PdfFontMetricsObject>::__zz_cib_FromHandle(
      __zz_cib_Helper<PoDoFo::PdfFontMetricsObject>::__zz_cib_CastFrom__zz_cib_Class437(h)
    );
  default: break;
  }
  auto* const __zz_cib_obj = ::__zz_cib_::__zz_cib_Generic<::PoDoFo::PdfFontMetrics>::__zz_cib_FromHandle(h);
  __zz_cib_RegisterProxy(h, __zz_cib_obj);
  return __zz_cib_obj;
}
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfFontMetrics> {
  using __zz_cib_Delegatee = ::PoDoFo::PdfFontMetrics;
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsSymbol_0(const ::PoDoFo::PdfFontMetrics* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->IsSymbol()
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl GetItalicAngle_1(const ::PoDoFo::PdfFontMetrics* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->GetItalicAngle()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetDescent_2(const ::PoDoFo::PdfFontMetrics* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->GetDescent()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetPdfAscent_3(const ::PoDoFo::PdfFontMetrics* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->GetPdfAscent()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl UnicodeCharWidth_4(const ::PoDoFo::PdfFontMetrics* __zz_cib_obj, __zz_cib_AbiType_t<unsigned short> c) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->UnicodeCharWidth(
        __zz_cib_::__zz_cib_FromAbiType<unsigned short>(c)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl GetWidthArray_5(const ::PoDoFo::PdfFontMetrics* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfVariant&> var, __zz_cib_AbiType_t<unsigned int> nFirst, __zz_cib_AbiType_t<unsigned int> nLast, __zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding*> pEncoding) {
    __zz_cib_obj->GetWidthArray(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVariant&>(var),
      __zz_cib_::__zz_cib_FromAbiType<unsigned int>(nFirst),
      __zz_cib_::__zz_cib_FromAbiType<unsigned int>(nLast),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncoding*>(pEncoding)
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetUnderlineThickness_6(const ::PoDoFo::PdfFontMetrics* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->GetUnderlineThickness()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl CharWidth_7(const ::PoDoFo::PdfFontMetrics* __zz_cib_obj, __zz_cib_AbiType_t<unsigned char> c) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->CharWidth(
        __zz_cib_::__zz_cib_FromAbiType<unsigned char>(c)
      )
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetStrikeOutPosition_8(const ::PoDoFo::PdfFontMetrics* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->GetStrikeOutPosition()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetGlyphWidth_9(const ::PoDoFo::PdfFontMetrics* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszGlyphname) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->GetGlyphWidth(
        __zz_cib_::__zz_cib_FromAbiType<const char*>(pszGlyphname)
      )
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetGlyphWidth_10(const ::PoDoFo::PdfFontMetrics* __zz_cib_obj, __zz_cib_AbiType_t<int> nGlyphId) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->GetGlyphWidth(
        __zz_cib_::__zz_cib_FromAbiType<int>(nGlyphId)
      )
    );
  }
  static __zz_cib_AbiType_t<unsigned int> __zz_cib_decl GetWeight_11(const ::PoDoFo::PdfFontMetrics* __zz_cib_obj) {
    return __zz_cib_ToAbiType<unsigned int>(
      __zz_cib_obj->GetWeight()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetLineSpacing_12(const ::PoDoFo::PdfFontMetrics* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->GetLineSpacing()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetUnderlinePosition_13(const ::PoDoFo::PdfFontMetrics* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->GetUnderlinePosition()
    );
  }
  static __zz_cib_AbiType_t<long> __zz_cib_decl GetGlyphId_14(const ::PoDoFo::PdfFontMetrics* __zz_cib_obj, __zz_cib_AbiType_t<long> lUnicode) {
    return __zz_cib_ToAbiType<long>(
      __zz_cib_obj->GetGlyphId(
        __zz_cib_::__zz_cib_FromAbiType<long>(lUnicode)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl GetBoundingBox_15(const ::PoDoFo::PdfFontMetrics* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfArray&> array) {
    __zz_cib_obj->GetBoundingBox(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfArray&>(array)
    );
  }
  static __zz_cib_AbiType_t<const char*> __zz_cib_decl GetFontname_16(const ::PoDoFo::PdfFontMetrics* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const char*>(
      __zz_cib_obj->GetFontname()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetStrikeoutThickness_17(const ::PoDoFo::PdfFontMetrics* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->GetStrikeoutThickness()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetPdfDescent_18(const ::PoDoFo::PdfFontMetrics* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->GetPdfDescent()
    );
  }
  static __zz_cib_AbiType_t<const char*> __zz_cib_decl GetFontData_19(const ::PoDoFo::PdfFontMetrics* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const char*>(
      __zz_cib_obj->GetFontData()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl GetFontDataLen_20(const ::PoDoFo::PdfFontMetrics* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->GetFontDataLen()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetAscent_21(const ::PoDoFo::PdfFontMetrics* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->GetAscent()
    );
  }
  static void __zz_cib_decl __zz_cib_Delete_22(::PoDoFo::PdfFontMetrics* __zz_cib_obj) {
    __zz_cib_Helper<::PoDoFo::PdfFontMetrics>::__zz_cib_ReleaseHandle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class437 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::IsSymbol_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::GetItalicAngle_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::GetDescent_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::GetPdfAscent_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::UnicodeCharWidth_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::GetWidthArray_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::GetUnderlineThickness_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::CharWidth_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::GetStrikeOutPosition_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::GetGlyphWidth_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::GetGlyphWidth_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::GetWeight_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::GetLineSpacing_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::GetUnderlinePosition_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::GetGlyphId_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::GetBoundingBox_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::GetFontname_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::GetStrikeoutThickness_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::GetPdfDescent_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::GetFontData_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::GetFontDataLen_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::GetAscent_21),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::__zz_cib_Delete_22)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 23 };
  return &methodTable;
}
}}}

namespace __zz_cib_ {
template<>
const __zz_cib_MethodTable* __zz_cib_Helper<::PoDoFo::PdfFontMetrics>::__zz_cib_GetProxyMethodTable() {
  return __zz_cib_::__zz_cib_Class333::__zz_cib_Class437::__zz_cib_GetMethodTable();
}
}

