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

#include <typeinfo>
#include <typeindex>
#include <cstdint>
#include <unordered_map>

extern std::unordered_map<std::type_index, std::uint32_t> __zz_cib_gClassIdRepo;

#include "__zz_cib_CibPoDoFo-class-down-cast.h"
#include "__zz_cib_CibPoDoFo-delegate-helper.h"
#include "__zz_cib_CibPoDoFo-generic.h"
#include "__zz_cib_CibPoDoFo-ids.h"
#include "__zz_cib_CibPoDoFo-type-converters.h"
#include "__zz_cib_CibPoDoFo-mtable-helper.h"
#include "__zz_cib_CibPoDoFo-proxy-mgr.h"

namespace __zz_cib_ {
using namespace ::PoDoFo;
template<> struct __zz_cib_Delegator<::PoDoFo::PdfFontMetrics>;
template <>
class __zz_cib_Generic<::PoDoFo::PdfFontMetrics> : public ::PoDoFo::PdfFontMetrics {
public:
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfFontMetrics>;

  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::PoDoFo::PdfFontMetrics>;

  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_GetMethodTable, ::PoDoFo::EPdfFontType eFontType, const char* pszFilename, const char* pszSubsetPrefix)
    : ::PoDoFo::PdfFontMetrics::PdfFontMetrics(    std::move(eFontType),
    std::move(pszFilename),
    std::move(pszSubsetPrefix))
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_methodTableHelper(__zz_cib_GetMethodTable)
  {}
  bool IsSymbol() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::IsSymbol_0>(
        __zz_cib_h
      )
    );
  }
  int GetItalicAngle() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<int>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<int>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetItalicAngle_1>(
        __zz_cib_h
      )
    );
  }
  double GetDescent() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<double>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<double>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetDescent_2>(
        __zz_cib_h
      )
    );
  }
  double GetPdfAscent() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<double>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<double>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetPdfAscent_3>(
        __zz_cib_h
      )
    );
  }
  double UnicodeCharWidth(unsigned short c) const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<double>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(c)>);
    return __zz_cib_FromAbiType<double>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::UnicodeCharWidth_4>(
        __zz_cib_h,
        __zz_cib_::__zz_cib_ToAbiType<decltype(c)>(std::move(c))
      )
    );
  }
  void GetWidthArray(::PoDoFo::PdfVariant& var, unsigned int nFirst, unsigned int nLast, const ::PoDoFo::PdfEncoding* pEncoding) const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(var)>, __zz_cib_AbiType_t<decltype(nFirst)>, __zz_cib_AbiType_t<decltype(nLast)>, __zz_cib_AbiType_t<decltype(pEncoding)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetWidthArray_5>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(var)>(var),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nFirst)>(std::move(nFirst)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(nLast)>(std::move(nLast)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pEncoding)>(std::move(pEncoding))
    );
  }
  double GetUnderlineThickness() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<double>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<double>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetUnderlineThickness_6>(
        __zz_cib_h
      )
    );
  }
  double CharWidth(unsigned char c) const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<double>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(c)>);
    return __zz_cib_FromAbiType<double>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::CharWidth_7>(
        __zz_cib_h,
        __zz_cib_::__zz_cib_ToAbiType<decltype(c)>(std::move(c))
      )
    );
  }
  double GetStrikeOutPosition() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<double>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<double>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetStrikeOutPosition_8>(
        __zz_cib_h
      )
    );
  }
  double GetGlyphWidth(const char* pszGlyphname) const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<double>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(pszGlyphname)>);
    return __zz_cib_FromAbiType<double>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetGlyphWidth_9>(
        __zz_cib_h,
        __zz_cib_::__zz_cib_ToAbiType<decltype(pszGlyphname)>(std::move(pszGlyphname))
      )
    );
  }
  double GetGlyphWidth(int nGlyphId) const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<double>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(nGlyphId)>);
    return __zz_cib_FromAbiType<double>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetGlyphWidth_10>(
        __zz_cib_h,
        __zz_cib_::__zz_cib_ToAbiType<decltype(nGlyphId)>(std::move(nGlyphId))
      )
    );
  }
  unsigned int GetWeight() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<unsigned int>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<unsigned int>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetWeight_11>(
        __zz_cib_h
      )
    );
  }
  double GetLineSpacing() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<double>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<double>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetLineSpacing_12>(
        __zz_cib_h
      )
    );
  }
  double GetUnderlinePosition() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<double>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<double>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetUnderlinePosition_13>(
        __zz_cib_h
      )
    );
  }
  long GetGlyphId(long lUnicode) const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<long>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(lUnicode)>);
    return __zz_cib_FromAbiType<long>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetGlyphId_14>(
        __zz_cib_h,
        __zz_cib_::__zz_cib_ToAbiType<decltype(lUnicode)>(std::move(lUnicode))
      )
    );
  }
  void GetBoundingBox(::PoDoFo::PdfArray& array) const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(array)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetBoundingBox_15>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(array)>(array)
    );
  }
  const char* GetFontname() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<const char*>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<const char*>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetFontname_16>(
        __zz_cib_h
      )
    );
  }
  double GetStrikeoutThickness() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<double>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<double>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetStrikeoutThickness_17>(
        __zz_cib_h
      )
    );
  }
  double GetPdfDescent() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<double>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<double>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetPdfDescent_18>(
        __zz_cib_h
      )
    );
  }
  const char* GetFontData() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<const char*>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<const char*>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetFontData_19>(
        __zz_cib_h
      )
    );
  }
  ::PoDoFo::pdf_long GetFontDataLen() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<::PoDoFo::pdf_long>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<::PoDoFo::pdf_long>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetFontDataLen_20>(
        __zz_cib_h
      )
    );
  }
  double GetAscent() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<double>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<double>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetAscent_21>(
        __zz_cib_h
      )
    );
  }
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = void(__zz_cib_decl *) (__zz_cib_Proxy);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_Delete_22>(
      __zz_cib_h
    );
  }
  void __zz_cib_ReleaseProxy() { __zz_cib_h_ = nullptr; }
  __ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib_Generic, ::PoDoFo::PdfFontMetrics)

private:
  __zz_cib_Proxy __zz_cib_h_;
  const __zz_cib_MethodTableHelper __zz_cib_methodTableHelper;

  const __zz_cib_MethodTableHelper& __zz_cib_GetMethodTableHelper() const {
    return __zz_cib_methodTableHelper;
  }
  friend struct __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>;
  using __zz_cib_MethodId = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class437::__zz_cib_Generic::__zz_cib_MethodId;
};
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfFontMetrics> : public ::PoDoFo::PdfFontMetrics {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfFontMetrics>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfFontMetrics>;
  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::PoDoFo::PdfFontMetrics>;

  using ::PoDoFo::PdfFontMetrics::PdfFontMetrics;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_GetMethodTable, __zz_cib_AbiType_t<::PoDoFo::EPdfFontType> eFontType, __zz_cib_AbiType_t<const char*> pszFilename, __zz_cib_AbiType_t<const char*> pszSubsetPrefix) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfFontMetrics>(__zz_cib_proxy, __zz_cib_GetMethodTable,     __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfFontType>(eFontType),
    __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFilename),
    __zz_cib_::__zz_cib_FromAbiType<const char*>(pszSubsetPrefix));
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl GetWidthArray_2(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfVariant&> var, __zz_cib_AbiType_t<unsigned int> nFirst, __zz_cib_AbiType_t<unsigned int> nLast, __zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding*> pEncoding) {
    __zz_cib_obj->GetWidthArray(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVariant&>(var),
      __zz_cib_::__zz_cib_FromAbiType<unsigned int>(nFirst),
      __zz_cib_::__zz_cib_FromAbiType<unsigned int>(nLast),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncoding*>(pEncoding)
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetGlyphWidth_3(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> nGlyphId) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->GetGlyphWidth(
        __zz_cib_::__zz_cib_FromAbiType<int>(nGlyphId)
      )
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetGlyphWidth_4(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszGlyphname) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->GetGlyphWidth(
        __zz_cib_::__zz_cib_FromAbiType<const char*>(pszGlyphname)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl GetBoundingBox_5(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfArray&> array) {
    __zz_cib_obj->GetBoundingBox(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfArray&>(array)
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl StringWidth_6(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> rsString) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfFontMetrics::StringWidth(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(rsString)
      )
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl StringWidth_7(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszText, __zz_cib_AbiType_t<::PoDoFo::pdf_long> nLength) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfFontMetrics::StringWidth(
        __zz_cib_::__zz_cib_FromAbiType<const char*>(pszText),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(nLength)
      )
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl StringWidth_8(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::pdf_uint16*> pszText, __zz_cib_AbiType_t<unsigned int> nLength) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->::PoDoFo::PdfFontMetrics::StringWidth(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::pdf_uint16*>(pszText),
        __zz_cib_::__zz_cib_FromAbiType<unsigned int>(nLength)
      )
    );
  }
  static __zz_cib_AbiType_t<unsigned long> __zz_cib_decl StringWidthMM_9(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszText, __zz_cib_AbiType_t<unsigned int> nLength) {
    return __zz_cib_ToAbiType<unsigned long>(
      __zz_cib_obj->::PoDoFo::PdfFontMetrics::StringWidthMM(
        __zz_cib_::__zz_cib_FromAbiType<const char*>(pszText),
        __zz_cib_::__zz_cib_FromAbiType<unsigned int>(nLength)
      )
    );
  }
  static __zz_cib_AbiType_t<unsigned long> __zz_cib_decl StringWidthMM_10(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::pdf_uint16*> pszText, __zz_cib_AbiType_t<unsigned int> nLength) {
    return __zz_cib_ToAbiType<unsigned long>(
      __zz_cib_obj->::PoDoFo::PdfFontMetrics::StringWidthMM(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::pdf_uint16*>(pszText),
        __zz_cib_::__zz_cib_FromAbiType<unsigned int>(nLength)
      )
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl CharWidth_11(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<unsigned char> c) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->CharWidth(
        __zz_cib_::__zz_cib_FromAbiType<unsigned char>(c)
      )
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl UnicodeCharWidth_12(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<unsigned short> c) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->UnicodeCharWidth(
        __zz_cib_::__zz_cib_FromAbiType<unsigned short>(c)
      )
    );
  }
  static __zz_cib_AbiType_t<unsigned long> __zz_cib_decl CharWidthMM_13(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<unsigned char> c) {
    return __zz_cib_ToAbiType<unsigned long>(
      __zz_cib_obj->::PoDoFo::PdfFontMetrics::CharWidthMM(
        __zz_cib_::__zz_cib_FromAbiType<unsigned char>(c)
      )
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetLineSpacing_14(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->GetLineSpacing()
    );
  }
  static __zz_cib_AbiType_t<unsigned long> __zz_cib_decl GetLineSpacingMM_15(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<unsigned long>(
      __zz_cib_obj->::PoDoFo::PdfFontMetrics::GetLineSpacingMM()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetUnderlineThickness_16(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->GetUnderlineThickness()
    );
  }
  static __zz_cib_AbiType_t<unsigned long> __zz_cib_decl GetUnderlineThicknessMM_17(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<unsigned long>(
      __zz_cib_obj->::PoDoFo::PdfFontMetrics::GetUnderlineThicknessMM()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetUnderlinePosition_18(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->GetUnderlinePosition()
    );
  }
  static __zz_cib_AbiType_t<long> __zz_cib_decl GetUnderlinePositionMM_19(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<long>(
      __zz_cib_obj->::PoDoFo::PdfFontMetrics::GetUnderlinePositionMM()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetStrikeOutPosition_20(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->GetStrikeOutPosition()
    );
  }
  static __zz_cib_AbiType_t<unsigned long> __zz_cib_decl GetStrikeOutPositionMM_21(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<unsigned long>(
      __zz_cib_obj->::PoDoFo::PdfFontMetrics::GetStrikeOutPositionMM()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetStrikeoutThickness_22(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->GetStrikeoutThickness()
    );
  }
  static __zz_cib_AbiType_t<unsigned long> __zz_cib_decl GetStrikeoutThicknessMM_23(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<unsigned long>(
      __zz_cib_obj->::PoDoFo::PdfFontMetrics::GetStrikeoutThicknessMM()
    );
  }
  static __zz_cib_AbiType_t<const char*> __zz_cib_decl GetFilename_24(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const char*>(
      __zz_cib_obj->::PoDoFo::PdfFontMetrics::GetFilename()
    );
  }
  static __zz_cib_AbiType_t<const char*> __zz_cib_decl GetFontData_25(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const char*>(
      __zz_cib_obj->GetFontData()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl GetFontDataLen_26(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->GetFontDataLen()
    );
  }
  static __zz_cib_AbiType_t<const char*> __zz_cib_decl GetFontname_27(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const char*>(
      __zz_cib_obj->GetFontname()
    );
  }
  static __zz_cib_AbiType_t<const char*> __zz_cib_decl GetSubsetFontnamePrefix_28(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const char*>(
      __zz_cib_obj->::PoDoFo::PdfFontMetrics::GetSubsetFontnamePrefix()
    );
  }
  static __zz_cib_AbiType_t<unsigned int> __zz_cib_decl GetWeight_29(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<unsigned int>(
      __zz_cib_obj->GetWeight()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetAscent_30(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->GetAscent()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetPdfAscent_31(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->GetPdfAscent()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetDescent_32(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->GetDescent()
    );
  }
  static __zz_cib_AbiType_t<double> __zz_cib_decl GetPdfDescent_33(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<double>(
      __zz_cib_obj->GetPdfDescent()
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl GetItalicAngle_34(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->GetItalicAngle()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetFontSize_35(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<float> fSize) {
    __zz_cib_obj->::PoDoFo::PdfFontMetrics::SetFontSize(
      __zz_cib_::__zz_cib_FromAbiType<float>(fSize)
    );
  }
  static __zz_cib_AbiType_t<float> __zz_cib_decl GetFontSize_36(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<float>(
      __zz_cib_obj->::PoDoFo::PdfFontMetrics::GetFontSize()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetFontScale_37(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<float> fScale) {
    __zz_cib_obj->::PoDoFo::PdfFontMetrics::SetFontScale(
      __zz_cib_::__zz_cib_FromAbiType<float>(fScale)
    );
  }
  static __zz_cib_AbiType_t<float> __zz_cib_decl GetFontScale_38(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<float>(
      __zz_cib_obj->::PoDoFo::PdfFontMetrics::GetFontScale()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetFontCharSpace_39(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<float> fCharSpace) {
    __zz_cib_obj->::PoDoFo::PdfFontMetrics::SetFontCharSpace(
      __zz_cib_::__zz_cib_FromAbiType<float>(fCharSpace)
    );
  }
  static __zz_cib_AbiType_t<float> __zz_cib_decl GetFontCharSpace_40(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<float>(
      __zz_cib_obj->::PoDoFo::PdfFontMetrics::GetFontCharSpace()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetWordSpace_41(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<float> fWordSpace) {
    __zz_cib_obj->::PoDoFo::PdfFontMetrics::SetWordSpace(
      __zz_cib_::__zz_cib_FromAbiType<float>(fWordSpace)
    );
  }
  static __zz_cib_AbiType_t<float> __zz_cib_decl GetWordSpace_42(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<float>(
      __zz_cib_obj->::PoDoFo::PdfFontMetrics::GetWordSpace()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::EPdfFontType> __zz_cib_decl GetFontType_43(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::EPdfFontType>(
      __zz_cib_obj->::PoDoFo::PdfFontMetrics::GetFontType()
    );
  }
  static __zz_cib_AbiType_t<long> __zz_cib_decl GetGlyphId_44(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<long> lUnicode) {
    return __zz_cib_ToAbiType<long>(
      __zz_cib_obj->GetGlyphId(
        __zz_cib_::__zz_cib_FromAbiType<long>(lUnicode)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsSymbol_45(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->IsSymbol()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::EPdfFontType> __zz_cib_decl FontTypeFromFilename_46(__zz_cib_AbiType_t<const char*> pszFilename) {
    return __zz_cib_ToAbiType<::PoDoFo::EPdfFontType>(
      ::PoDoFo::PdfFontMetrics::FontTypeFromFilename(
        __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFilename)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetFontType_47(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::EPdfFontType> eFontType) {
    __zz_cib_obj->::PoDoFo::PdfFontMetrics::SetFontType(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfFontType>(eFontType)
    );
  }
  static void __zz_cib_decl __zz_cib_RegisterProxy(::PoDoFo::PdfFontMetrics* obj, __zz_cib_Proxy proxy, __zz_cib_ProxyDeleter deleter) {
    __zz_cib_ProxyManagerDelegator::__zz_cib_RegisterProxy(obj, proxy, deleter);
  }
  static std::uint32_t __zz_cib_decl __zz_cib_GetClassId(::PoDoFo::PdfFontMetrics** __zz_cib_obj) {
    static bool classIdRepoPopulated = false;
    if (!classIdRepoPopulated) {
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfFontMetricsBase14))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class438::__zz_cib_classId;
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfFontMetricsFreetype))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class439::__zz_cib_classId;
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfFontMetricsObject))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class440::__zz_cib_classId;
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfFontMetrics))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class437::__zz_cib_classId;
      classIdRepoPopulated = true;
    }
    auto tdx = std::type_index(typeid(**__zz_cib_obj));
    auto itr = __zz_cib_gClassIdRepo.find(tdx);
    if (itr != __zz_cib_gClassIdRepo.end()) return itr->second;
    {
      auto* obj = dynamic_cast<::PoDoFo::PdfFontMetricsBase14*>(*__zz_cib_obj);
      if (obj) {
        *__zz_cib_obj = obj;
        return __zz_cib_gClassIdRepo[tdx] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class438::__zz_cib_classId;
      }
    }
    {
      auto* obj = dynamic_cast<::PoDoFo::PdfFontMetricsFreetype*>(*__zz_cib_obj);
      if (obj) {
        *__zz_cib_obj = obj;
        return __zz_cib_gClassIdRepo[tdx] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class439::__zz_cib_classId;
      }
    }
    {
      auto* obj = dynamic_cast<::PoDoFo::PdfFontMetricsObject*>(*__zz_cib_obj);
      if (obj) {
        *__zz_cib_obj = obj;
        return __zz_cib_gClassIdRepo[tdx] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class440::__zz_cib_classId;
      }
    }
    return __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class437::__zz_cib_classId;
  }
  static void __zz_cib_decl __zz_cib_ReleaseProxy(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->__zz_cib_ReleaseProxy();
}
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class437 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::GetWidthArray_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::GetGlyphWidth_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::GetGlyphWidth_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::GetBoundingBox_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::StringWidth_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::StringWidth_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::StringWidth_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::StringWidthMM_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::StringWidthMM_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::CharWidth_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::UnicodeCharWidth_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::CharWidthMM_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::GetLineSpacing_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::GetLineSpacingMM_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::GetUnderlineThickness_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::GetUnderlineThicknessMM_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::GetUnderlinePosition_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::GetUnderlinePositionMM_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::GetStrikeOutPosition_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::GetStrikeOutPositionMM_21),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::GetStrikeoutThickness_22),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::GetStrikeoutThicknessMM_23),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::GetFilename_24),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::GetFontData_25),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::GetFontDataLen_26),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::GetFontname_27),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::GetSubsetFontnamePrefix_28),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::GetWeight_29),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::GetAscent_30),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::GetPdfAscent_31),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::GetDescent_32),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::GetPdfDescent_33),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::GetItalicAngle_34),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::SetFontSize_35),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::GetFontSize_36),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::SetFontScale_37),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::GetFontScale_38),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::SetFontCharSpace_39),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::GetFontCharSpace_40),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::SetWordSpace_41),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::GetWordSpace_42),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::GetFontType_43),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::GetGlyphId_44),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::IsSymbol_45),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::FontTypeFromFilename_46),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::SetFontType_47),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::__zz_cib_GetClassId),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::__zz_cib_ReleaseProxy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontMetrics>::__zz_cib_RegisterProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 51 };
  return &methodTable;
}
}}}
