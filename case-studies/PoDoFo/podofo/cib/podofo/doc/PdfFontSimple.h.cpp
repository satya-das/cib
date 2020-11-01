#include "podofo/base/PdfEncoding.h"
#include "podofo/base/PdfName.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfVecObjects.h"
#include "podofo/doc/PdfFontMetrics.h"
#include "podofo/doc/PdfFontSimple.h"

#include "__zz_cib_CibPoDoFo-class-down-cast.h"
#include "__zz_cib_CibPoDoFo-delegate-helper.h"
#include "__zz_cib_CibPoDoFo-generic.h"
#include "__zz_cib_CibPoDoFo-ids.h"
#include "__zz_cib_CibPoDoFo-type-converters.h"
#include "__zz_cib_CibPoDoFo-mtable-helper.h"
#include "__zz_cib_CibPoDoFo-proxy-mgr.h"

namespace __zz_cib_ {
using namespace ::PoDoFo;
template<> struct __zz_cib_Delegator<::PoDoFo::PdfFontSimple>;
template <>
class __zz_cib_Generic<::PoDoFo::PdfFontSimple> : public ::PoDoFo::PdfFontSimple {
public:
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfFontSimple>;

  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::PoDoFo::PdfFontSimple>;

  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_GetMethodTable, ::PoDoFo::PdfFontMetrics* pMetrics, const ::PoDoFo::PdfEncoding* const pEncoding, ::PoDoFo::PdfVecObjects* pParent)
    : ::PoDoFo::PdfFontSimple::PdfFontSimple(    std::move(pMetrics),
    std::move(pEncoding),
    std::move(pParent))
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_methodTableHelper(__zz_cib_GetMethodTable)
  {}
  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_GetMethodTable, ::PoDoFo::PdfFontMetrics* pMetrics, const ::PoDoFo::PdfEncoding* const pEncoding, ::PoDoFo::PdfObject* pObject)
    : ::PoDoFo::PdfFontSimple::PdfFontSimple(    std::move(pMetrics),
    std::move(pEncoding),
    std::move(pObject))
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_methodTableHelper(__zz_cib_GetMethodTable)
  {}
  void EmbedFontFile(::PoDoFo::PdfObject* pDescriptor) override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(pDescriptor)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::EmbedFontFile_0>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(pDescriptor)>(std::move(pDescriptor))
    );
  }
  void SetItalic(bool bItalic) override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(bItalic)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::SetItalic_1>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(bItalic)>(std::move(bItalic))
    );
  }
  void EmbedFont() override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::EmbedFont_2>(
      __zz_cib_h
    );
  }
  void EmbedSubsetFont() override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::EmbedSubsetFont_3>(
      __zz_cib_h
    );
  }
  void AddUsedSubsettingGlyphs(const ::PoDoFo::PdfString& sText, long lStringLen) override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(sText)>, __zz_cib_AbiType_t<decltype(lStringLen)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::AddUsedSubsettingGlyphs_4>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(sText)>(sText),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lStringLen)>(std::move(lStringLen))
    );
  }
  void WriteStringToStream(const ::PoDoFo::PdfString& rsString, ::PoDoFo::PdfStream* pStream) override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(rsString)>, __zz_cib_AbiType_t<decltype(pStream)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::WriteStringToStream_5>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(rsString)>(rsString),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pStream)>(std::move(pStream))
    );
  }
  void AddUsedGlyphname(const char* pszGlyphName) override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(pszGlyphName)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::AddUsedGlyphname_6>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszGlyphName)>(std::move(pszGlyphName))
    );
  }
  void SetBold(bool bBold) override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(bBold)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::SetBold_7>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(bBold)>(std::move(bBold))
    );
  }
  void __zz_cib_ReleaseProxy() { __zz_cib_h_ = nullptr; }
  __ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib_Generic, ::PoDoFo::PdfFontSimple)

private:
  __zz_cib_Proxy __zz_cib_h_;
  const __zz_cib_MethodTableHelper __zz_cib_methodTableHelper;

  const __zz_cib_MethodTableHelper& __zz_cib_GetMethodTableHelper() const {
    return __zz_cib_methodTableHelper;
  }
  friend struct __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontSimple>;
  using __zz_cib_MethodId = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class441::__zz_cib_Generic::__zz_cib_MethodId;
};
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfFontSimple> : public ::PoDoFo::PdfFontSimple {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfFontSimple>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfFontSimple>;
  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::PoDoFo::PdfFontSimple>;

  using ::PoDoFo::PdfFontSimple::PdfFontSimple;

  static void __zz_cib_decl __zz_cib_Delete_0(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_GetMethodTable, __zz_cib_AbiType_t<::PoDoFo::PdfFontMetrics*> pMetrics, __zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding* const> pEncoding, __zz_cib_AbiType_t<::PoDoFo::PdfVecObjects*> pParent) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfFontSimple>(__zz_cib_proxy, __zz_cib_GetMethodTable,     __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfFontMetrics*>(pMetrics),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncoding* const>(pEncoding),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfVecObjects*>(pParent));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_GetMethodTable, __zz_cib_AbiType_t<::PoDoFo::PdfFontMetrics*> pMetrics, __zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding* const> pEncoding, __zz_cib_AbiType_t<::PoDoFo::PdfObject*> pObject) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfFontSimple>(__zz_cib_proxy, __zz_cib_GetMethodTable,     __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfFontMetrics*>(pMetrics),
    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncoding* const>(pEncoding),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pObject));
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl EmbedFont_3(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfFontSimple::EmbedFont();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Init_4(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> bEmbed, __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> rsSubType) {
    __zz_cib_obj->::PoDoFo::PdfFontSimple::Init(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bEmbed),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(rsSubType)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl EmbedFontFile_5(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfObject*> pDescriptor) {
    __zz_cib_obj->EmbedFontFile(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pDescriptor)
    );
  }
  static void __zz_cib_decl __zz_cib_RegisterProxy(::PoDoFo::PdfFontSimple* obj, __zz_cib_Proxy proxy, __zz_cib_ProxyDeleter deleter) {
    __zz_cib_ProxyManagerDelegator::__zz_cib_RegisterProxy(obj, proxy, deleter);
  }
  static ::PoDoFo::PdfElement* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class418(::PoDoFo::PdfFontSimple* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfFontSimple* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class418(::PoDoFo::PdfElement* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfFontSimple*>(__zz_cib_obj);
  }
  static ::PoDoFo::PdfFont* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class430(::PoDoFo::PdfFontSimple* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfFontSimple* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class430(::PoDoFo::PdfFont* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfFontSimple*>(__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_ReleaseProxy(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->__zz_cib_ReleaseProxy();
}
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class441 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontSimple>::__zz_cib_Delete_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontSimple>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontSimple>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontSimple>::EmbedFont_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontSimple>::Init_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontSimple>::EmbedFontFile_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontSimple>::__zz_cib_CastTo__zz_cib_Class418),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontSimple>::__zz_cib_CastFrom__zz_cib_Class418),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontSimple>::__zz_cib_CastTo__zz_cib_Class430),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontSimple>::__zz_cib_CastFrom__zz_cib_Class430),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontSimple>::__zz_cib_ReleaseProxy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFontSimple>::__zz_cib_RegisterProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 12 };
  return &methodTable;
}
}}}
