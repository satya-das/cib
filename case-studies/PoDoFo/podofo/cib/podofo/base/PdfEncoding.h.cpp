#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfDictionary.h"
#include "podofo/base/PdfEncoding.h"
#include "podofo/base/PdfName.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfRefCountedBuffer.h"
#include "podofo/base/PdfString.h"
#include "podofo/doc/PdfCMapEncoding.h"
#include "podofo/doc/PdfDifferenceEncoding.h"
#include "podofo/doc/PdfFont.h"
#include "podofo/doc/PdfIdentityEncoding.h"

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
template<> struct __zz_cib_Delegator<::PoDoFo::PdfEncoding>;
template <>
class __zz_cib_Generic<::PoDoFo::PdfEncoding> : public ::PoDoFo::PdfEncoding {
public:
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfEncoding>;

  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::PoDoFo::PdfEncoding>;

  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_GetMethodTable, int nFirstChar, int nLastChar, ::PoDoFo::PdfObject* __zz_cib_param2)
    : ::PoDoFo::PdfEncoding::PdfEncoding(    std::move(nFirstChar),
    std::move(nLastChar),
    std::move(__zz_cib_param2))
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_methodTableHelper(__zz_cib_GetMethodTable)
  {}
  ::PoDoFo::pdf_uint16 GetCharCode(int nIndex) const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<::PoDoFo::pdf_uint16>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(nIndex)>);
    return __zz_cib_FromAbiType<::PoDoFo::pdf_uint16>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetCharCode_0>(
        __zz_cib_h,
        __zz_cib_::__zz_cib_ToAbiType<decltype(nIndex)>(std::move(nIndex))
      )
    );
  }
  void AddToDictionary(::PoDoFo::PdfDictionary& rDictionary) const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(rDictionary)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::AddToDictionary_1>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(rDictionary)>(rDictionary)
    );
  }
  ::PoDoFo::PdfRefCountedBuffer ConvertToEncoding(const ::PoDoFo::PdfString& rString, const ::PoDoFo::PdfFont* pFont) const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<::PoDoFo::PdfRefCountedBuffer>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(rString)>, __zz_cib_AbiType_t<decltype(pFont)>);
    return __zz_cib_FromAbiType<::PoDoFo::PdfRefCountedBuffer>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::ConvertToEncoding_2>(
        __zz_cib_h,
        __zz_cib_::__zz_cib_ToAbiType<decltype(rString)>(rString),
        __zz_cib_::__zz_cib_ToAbiType<decltype(pFont)>(std::move(pFont))
      )
    );
  }
  const ::PoDoFo::PdfName& GetID() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<const ::PoDoFo::PdfName&>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetID_3>(
        __zz_cib_h
      )
    );
  }
  ::PoDoFo::PdfString ConvertToUnicode(const ::PoDoFo::PdfString& rEncodedString, const ::PoDoFo::PdfFont* pFont) const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<::PoDoFo::PdfString>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(rEncodedString)>, __zz_cib_AbiType_t<decltype(pFont)>);
    return __zz_cib_FromAbiType<::PoDoFo::PdfString>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::ConvertToUnicode_4>(
        __zz_cib_h,
        __zz_cib_::__zz_cib_ToAbiType<decltype(rEncodedString)>(rEncodedString),
        __zz_cib_::__zz_cib_ToAbiType<decltype(pFont)>(std::move(pFont))
      )
    );
  }
  bool IsAutoDelete() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::IsAutoDelete_5>(
        __zz_cib_h
      )
    );
  }
  bool IsSingleByteEncoding() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::IsSingleByteEncoding_6>(
        __zz_cib_h
      )
    );
  }
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = void(__zz_cib_decl *) (__zz_cib_Proxy);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_Delete_7>(
      __zz_cib_h
    );
  }
  void __zz_cib_ReleaseProxy() { __zz_cib_h_ = nullptr; }
  __ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib_Generic, ::PoDoFo::PdfEncoding)

private:
  __zz_cib_Proxy __zz_cib_h_;
  const __zz_cib_MethodTableHelper __zz_cib_methodTableHelper;

  const __zz_cib_MethodTableHelper& __zz_cib_GetMethodTableHelper() const {
    return __zz_cib_methodTableHelper;
  }
  friend struct __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncoding>;
  using __zz_cib_MethodId = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class350::__zz_cib_Generic::__zz_cib_MethodId;
};
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfEncoding> : public ::PoDoFo::PdfEncoding {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfEncoding>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfEncoding>;
  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::PoDoFo::PdfEncoding>;

  using ::PoDoFo::PdfEncoding::PdfEncoding;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_GetMethodTable, __zz_cib_AbiType_t<int> nFirstChar, __zz_cib_AbiType_t<int> nLastChar, __zz_cib_AbiType_t<::PoDoFo::PdfObject*> __zz_cib_param2) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfEncoding>(__zz_cib_proxy, __zz_cib_GetMethodTable,     __zz_cib_::__zz_cib_FromAbiType<int>(nFirstChar),
    __zz_cib_::__zz_cib_FromAbiType<int>(nLastChar),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(__zz_cib_param2));
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> __zz_cib_decl GetID_1(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfName&>(
      __zz_cib_obj->GetID()
    );
  }
  static void __zz_cib_decl __zz_cib_Delete_2(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq_3(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfEncoding::operator==(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncoding&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorLT_4(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfEncoding::operator<(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncoding&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl AddToDictionary_5(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfDictionary&> rDictionary) {
    __zz_cib_obj->AddToDictionary(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDictionary&>(rDictionary)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfString> __zz_cib_decl ConvertToUnicode_6(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> rEncodedString, __zz_cib_AbiType_t<const ::PoDoFo::PdfFont*> pFont) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfString>(
      __zz_cib_obj->::PoDoFo::PdfEncoding::ConvertToUnicode(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(rEncodedString),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfFont*>(pFont)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfRefCountedBuffer> __zz_cib_decl ConvertToEncoding_7(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> rString, __zz_cib_AbiType_t<const ::PoDoFo::PdfFont*> pFont) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfRefCountedBuffer>(
      __zz_cib_obj->::PoDoFo::PdfEncoding::ConvertToEncoding(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(rString),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfFont*>(pFont)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsAutoDelete_8(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->IsAutoDelete()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsSingleByteEncoding_9(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->IsSingleByteEncoding()
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl GetFirstChar_10(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::PoDoFo::PdfEncoding::GetFirstChar()
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl GetLastChar_11(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::PoDoFo::PdfEncoding::GetLastChar()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfEncoding::const_iterator> __zz_cib_decl begin_12(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfEncoding::const_iterator>(
      __zz_cib_obj->::PoDoFo::PdfEncoding::begin()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfEncoding::const_iterator> __zz_cib_decl end_13(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfEncoding::const_iterator>(
      __zz_cib_obj->::PoDoFo::PdfEncoding::end()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_uint16> __zz_cib_decl GetCharCode_14(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> nIndex) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_uint16>(
      __zz_cib_obj->GetCharCode(
        __zz_cib_::__zz_cib_FromAbiType<int>(nIndex)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_uint16> __zz_cib_decl GetUnicodeValue_15(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::pdf_uint16> __zz_cib_param0) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_uint16>(
      __zz_cib_obj->::PoDoFo::PdfEncoding::GetUnicodeValue(
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_uint16>(__zz_cib_param0)
      )
    );
  }
  static void __zz_cib_decl __zz_cib_RegisterProxy(::PoDoFo::PdfEncoding* obj, __zz_cib_Proxy proxy, __zz_cib_ProxyDeleter deleter) {
    __zz_cib_ProxyManagerDelegator::__zz_cib_RegisterProxy(obj, proxy, deleter);
  }
  static std::uint32_t __zz_cib_decl __zz_cib_GetClassId(::PoDoFo::PdfEncoding** __zz_cib_obj) {
    static bool classIdRepoPopulated = false;
    if (!classIdRepoPopulated) {
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfDocEncoding))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class353::__zz_cib_classId;
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfWin1250Encoding))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class360::__zz_cib_classId;
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfIso88592Encoding))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class361::__zz_cib_classId;
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfWinAnsiEncoding))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class354::__zz_cib_classId;
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfMacRomanEncoding))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class355::__zz_cib_classId;
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfMacExpertEncoding))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class356::__zz_cib_classId;
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfStandardEncoding))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class357::__zz_cib_classId;
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfSymbolEncoding))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class358::__zz_cib_classId;
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfZapfDingbatsEncoding))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class359::__zz_cib_classId;
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfSimpleEncoding))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class352::__zz_cib_classId;
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfCMapEncoding))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class412::__zz_cib_classId;
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfDifferenceEncoding))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class416::__zz_cib_classId;
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfIdentityEncoding))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class453::__zz_cib_classId;
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfEncoding))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class350::__zz_cib_classId;
      classIdRepoPopulated = true;
    }
    auto tdx = std::type_index(typeid(**__zz_cib_obj));
    auto itr = __zz_cib_gClassIdRepo.find(tdx);
    if (itr != __zz_cib_gClassIdRepo.end()) return itr->second;
    {
      auto* obj = dynamic_cast<::PoDoFo::PdfDocEncoding*>(*__zz_cib_obj);
      if (obj) {
        *__zz_cib_obj = obj;
        return __zz_cib_gClassIdRepo[tdx] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class353::__zz_cib_classId;
      }
    }
    {
      auto* obj = dynamic_cast<::PoDoFo::PdfWin1250Encoding*>(*__zz_cib_obj);
      if (obj) {
        *__zz_cib_obj = obj;
        return __zz_cib_gClassIdRepo[tdx] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class360::__zz_cib_classId;
      }
    }
    {
      auto* obj = dynamic_cast<::PoDoFo::PdfIso88592Encoding*>(*__zz_cib_obj);
      if (obj) {
        *__zz_cib_obj = obj;
        return __zz_cib_gClassIdRepo[tdx] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class361::__zz_cib_classId;
      }
    }
    {
      auto* obj = dynamic_cast<::PoDoFo::PdfWinAnsiEncoding*>(*__zz_cib_obj);
      if (obj) {
        *__zz_cib_obj = obj;
        return __zz_cib_gClassIdRepo[tdx] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class354::__zz_cib_classId;
      }
    }
    {
      auto* obj = dynamic_cast<::PoDoFo::PdfMacRomanEncoding*>(*__zz_cib_obj);
      if (obj) {
        *__zz_cib_obj = obj;
        return __zz_cib_gClassIdRepo[tdx] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class355::__zz_cib_classId;
      }
    }
    {
      auto* obj = dynamic_cast<::PoDoFo::PdfMacExpertEncoding*>(*__zz_cib_obj);
      if (obj) {
        *__zz_cib_obj = obj;
        return __zz_cib_gClassIdRepo[tdx] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class356::__zz_cib_classId;
      }
    }
    {
      auto* obj = dynamic_cast<::PoDoFo::PdfStandardEncoding*>(*__zz_cib_obj);
      if (obj) {
        *__zz_cib_obj = obj;
        return __zz_cib_gClassIdRepo[tdx] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class357::__zz_cib_classId;
      }
    }
    {
      auto* obj = dynamic_cast<::PoDoFo::PdfSymbolEncoding*>(*__zz_cib_obj);
      if (obj) {
        *__zz_cib_obj = obj;
        return __zz_cib_gClassIdRepo[tdx] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class358::__zz_cib_classId;
      }
    }
    {
      auto* obj = dynamic_cast<::PoDoFo::PdfZapfDingbatsEncoding*>(*__zz_cib_obj);
      if (obj) {
        *__zz_cib_obj = obj;
        return __zz_cib_gClassIdRepo[tdx] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class359::__zz_cib_classId;
      }
    }
    {
      auto* obj = dynamic_cast<::PoDoFo::PdfSimpleEncoding*>(*__zz_cib_obj);
      if (obj) {
        *__zz_cib_obj = obj;
        return __zz_cib_gClassIdRepo[tdx] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class352::__zz_cib_classId;
      }
    }
    {
      auto* obj = dynamic_cast<::PoDoFo::PdfCMapEncoding*>(*__zz_cib_obj);
      if (obj) {
        *__zz_cib_obj = obj;
        return __zz_cib_gClassIdRepo[tdx] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class412::__zz_cib_classId;
      }
    }
    {
      auto* obj = dynamic_cast<::PoDoFo::PdfDifferenceEncoding*>(*__zz_cib_obj);
      if (obj) {
        *__zz_cib_obj = obj;
        return __zz_cib_gClassIdRepo[tdx] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class416::__zz_cib_classId;
      }
    }
    {
      auto* obj = dynamic_cast<::PoDoFo::PdfIdentityEncoding*>(*__zz_cib_obj);
      if (obj) {
        *__zz_cib_obj = obj;
        return __zz_cib_gClassIdRepo[tdx] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class453::__zz_cib_classId;
      }
    }
    return __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class350::__zz_cib_classId;
  }
  static void __zz_cib_decl __zz_cib_ReleaseProxy(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->__zz_cib_ReleaseProxy();
}
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class350 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncoding>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncoding>::GetID_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncoding>::__zz_cib_Delete_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncoding>::__zz_cib_OperatorCmpEq_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncoding>::__zz_cib_OperatorLT_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncoding>::AddToDictionary_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncoding>::ConvertToUnicode_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncoding>::ConvertToEncoding_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncoding>::IsAutoDelete_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncoding>::IsSingleByteEncoding_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncoding>::GetFirstChar_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncoding>::GetLastChar_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncoding>::begin_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncoding>::end_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncoding>::GetCharCode_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncoding>::GetUnicodeValue_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncoding>::__zz_cib_GetClassId),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncoding>::__zz_cib_ReleaseProxy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncoding>::__zz_cib_RegisterProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 19 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfEncoding::const_iterator> : public ::PoDoFo::PdfEncoding::const_iterator {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncoding::const_iterator>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::PoDoFo::PdfEncoding::const_iterator::const_iterator;

  static void __zz_cib_decl __zz_cib_Delete_0(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding*> pEncoding, __zz_cib_AbiType_t<int> nCur) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncoding*>(pEncoding),
    __zz_cib_::__zz_cib_FromAbiType<int>(nCur));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_2(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding::const_iterator&> __zz_cib_decl __zz_cib_OperatorEqual_3(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding::const_iterator&> rhs) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfEncoding::const_iterator&>(
      __zz_cib_obj->::PoDoFo::PdfEncoding::const_iterator::operator=(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncoding::const_iterator&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorCmpEq_4(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding::const_iterator&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfEncoding::const_iterator::operator==(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncoding::const_iterator&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl __zz_cib_OperatorNotEq_5(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfEncoding::const_iterator&> rhs) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfEncoding::const_iterator::operator!=(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfEncoding::const_iterator&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_uint16> __zz_cib_decl __zz_cib_OperatorMul_6(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_uint16>(
      __zz_cib_obj->::PoDoFo::PdfEncoding::const_iterator::operator*()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfEncoding::const_iterator&> __zz_cib_decl __zz_cib_OperatorInc_7(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfEncoding::const_iterator&>(
      __zz_cib_obj->::PoDoFo::PdfEncoding::const_iterator::operator++()
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class350 {
namespace __zz_cib_Class351 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncoding::const_iterator>::__zz_cib_Delete_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncoding::const_iterator>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncoding::const_iterator>::__zz_cib_Copy_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncoding::const_iterator>::__zz_cib_OperatorEqual_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncoding::const_iterator>::__zz_cib_OperatorCmpEq_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncoding::const_iterator>::__zz_cib_OperatorNotEq_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncoding::const_iterator>::__zz_cib_OperatorMul_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfEncoding::const_iterator>::__zz_cib_OperatorInc_7)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 8 };
  return &methodTable;
}
}}}}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template<> struct __zz_cib_Delegator<::PoDoFo::PdfSimpleEncoding>;
template <>
class __zz_cib_Generic<::PoDoFo::PdfSimpleEncoding> : public ::PoDoFo::PdfSimpleEncoding {
public:
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfSimpleEncoding>;

  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::PoDoFo::PdfSimpleEncoding>;

  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_GetMethodTable, const ::PoDoFo::PdfName& rName)
    : ::PoDoFo::PdfSimpleEncoding::PdfSimpleEncoding(    rName)
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_methodTableHelper(__zz_cib_GetMethodTable)
  {}
  ::PoDoFo::pdf_uint16 GetCharCode(int nIndex) const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<::PoDoFo::pdf_uint16>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(nIndex)>);
    return __zz_cib_FromAbiType<::PoDoFo::pdf_uint16>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetCharCode_0>(
        __zz_cib_h,
        __zz_cib_::__zz_cib_ToAbiType<decltype(nIndex)>(std::move(nIndex))
      )
    );
  }
  void AddToDictionary(::PoDoFo::PdfDictionary& rDictionary) const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(rDictionary)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::AddToDictionary_1>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(rDictionary)>(rDictionary)
    );
  }
  ::PoDoFo::PdfRefCountedBuffer ConvertToEncoding(const ::PoDoFo::PdfString& rString, const ::PoDoFo::PdfFont* pFont) const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<::PoDoFo::PdfRefCountedBuffer>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(rString)>, __zz_cib_AbiType_t<decltype(pFont)>);
    return __zz_cib_FromAbiType<::PoDoFo::PdfRefCountedBuffer>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::ConvertToEncoding_2>(
        __zz_cib_h,
        __zz_cib_::__zz_cib_ToAbiType<decltype(rString)>(rString),
        __zz_cib_::__zz_cib_ToAbiType<decltype(pFont)>(std::move(pFont))
      )
    );
  }
  const ::PoDoFo::PdfName& GetID() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<const ::PoDoFo::PdfName&>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetID_3>(
        __zz_cib_h
      )
    );
  }
  ::PoDoFo::PdfString ConvertToUnicode(const ::PoDoFo::PdfString& rEncodedString, const ::PoDoFo::PdfFont* pFont) const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<::PoDoFo::PdfString>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(rEncodedString)>, __zz_cib_AbiType_t<decltype(pFont)>);
    return __zz_cib_FromAbiType<::PoDoFo::PdfString>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::ConvertToUnicode_4>(
        __zz_cib_h,
        __zz_cib_::__zz_cib_ToAbiType<decltype(rEncodedString)>(rEncodedString),
        __zz_cib_::__zz_cib_ToAbiType<decltype(pFont)>(std::move(pFont))
      )
    );
  }
  const ::PoDoFo::pdf_uint16* GetToUnicodeTable() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<const ::PoDoFo::pdf_uint16*>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<const ::PoDoFo::pdf_uint16*>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetToUnicodeTable_5>(
        __zz_cib_h
      )
    );
  }
  bool IsAutoDelete() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::IsAutoDelete_6>(
        __zz_cib_h
      )
    );
  }
  bool IsSingleByteEncoding() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::IsSingleByteEncoding_7>(
        __zz_cib_h
      )
    );
  }
  void __zz_cib_ReleaseProxy() { __zz_cib_h_ = nullptr; }
  __ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib_Generic, ::PoDoFo::PdfSimpleEncoding)

private:
  __zz_cib_Proxy __zz_cib_h_;
  const __zz_cib_MethodTableHelper __zz_cib_methodTableHelper;

  const __zz_cib_MethodTableHelper& __zz_cib_GetMethodTableHelper() const {
    return __zz_cib_methodTableHelper;
  }
  friend struct __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSimpleEncoding>;
  using __zz_cib_MethodId = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class352::__zz_cib_Generic::__zz_cib_MethodId;
};
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfSimpleEncoding> : public ::PoDoFo::PdfSimpleEncoding {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfSimpleEncoding>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfSimpleEncoding>;
  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::PoDoFo::PdfSimpleEncoding>;

  using ::PoDoFo::PdfSimpleEncoding::PdfSimpleEncoding;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_GetMethodTable, __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> rName) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfSimpleEncoding>(__zz_cib_proxy, __zz_cib_GetMethodTable,     __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(rName));
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl AddToDictionary_2(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfDictionary&> rDictionary) {
    __zz_cib_obj->::PoDoFo::PdfSimpleEncoding::AddToDictionary(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDictionary&>(rDictionary)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfString> __zz_cib_decl ConvertToUnicode_3(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> rEncodedString, __zz_cib_AbiType_t<const ::PoDoFo::PdfFont*> pFont) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfString>(
      __zz_cib_obj->::PoDoFo::PdfSimpleEncoding::ConvertToUnicode(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(rEncodedString),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfFont*>(pFont)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfRefCountedBuffer> __zz_cib_decl ConvertToEncoding_4(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfString&> rString, __zz_cib_AbiType_t<const ::PoDoFo::PdfFont*> pFont) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfRefCountedBuffer>(
      __zz_cib_obj->::PoDoFo::PdfSimpleEncoding::ConvertToEncoding(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfString&>(rString),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfFont*>(pFont)
      )
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsAutoDelete_5(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfSimpleEncoding::IsAutoDelete()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsSingleByteEncoding_6(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfSimpleEncoding::IsSingleByteEncoding()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> __zz_cib_decl GetName_7(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfName&>(
      __zz_cib_obj->::PoDoFo::PdfSimpleEncoding::GetName()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_uint16> __zz_cib_decl GetCharCode_8(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<int> nIndex) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_uint16>(
      __zz_cib_obj->::PoDoFo::PdfSimpleEncoding::GetCharCode(
        __zz_cib_::__zz_cib_FromAbiType<int>(nIndex)
      )
    );
  }
  static __zz_cib_AbiType_t<char> __zz_cib_decl GetUnicodeCharCode_9(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::pdf_uint16> unicodeValue) {
    return __zz_cib_ToAbiType<char>(
      __zz_cib_obj->::PoDoFo::PdfSimpleEncoding::GetUnicodeCharCode(
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_uint16>(unicodeValue)
      )
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> __zz_cib_decl GetID_10(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfName&>(
      __zz_cib_obj->::PoDoFo::PdfSimpleEncoding::GetID()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::pdf_uint16*> __zz_cib_decl GetToUnicodeTable_11(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::pdf_uint16*>(
      __zz_cib_obj->GetToUnicodeTable()
    );
  }
  static void __zz_cib_decl __zz_cib_RegisterProxy(::PoDoFo::PdfSimpleEncoding* obj, __zz_cib_Proxy proxy, __zz_cib_ProxyDeleter deleter) {
    __zz_cib_ProxyManagerDelegator::__zz_cib_RegisterProxy(obj, proxy, deleter);
  }
  static ::PoDoFo::PdfEncoding* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class350(::PoDoFo::PdfSimpleEncoding* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfSimpleEncoding* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class350(::PoDoFo::PdfEncoding* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfSimpleEncoding*>(__zz_cib_obj);
  }
  static std::uint32_t __zz_cib_decl __zz_cib_GetClassId(::PoDoFo::PdfSimpleEncoding** __zz_cib_obj) {
    static bool classIdRepoPopulated = false;
    if (!classIdRepoPopulated) {
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfDocEncoding))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class353::__zz_cib_classId;
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfWin1250Encoding))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class360::__zz_cib_classId;
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfIso88592Encoding))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class361::__zz_cib_classId;
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfWinAnsiEncoding))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class354::__zz_cib_classId;
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfMacRomanEncoding))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class355::__zz_cib_classId;
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfMacExpertEncoding))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class356::__zz_cib_classId;
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfStandardEncoding))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class357::__zz_cib_classId;
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfSymbolEncoding))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class358::__zz_cib_classId;
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfZapfDingbatsEncoding))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class359::__zz_cib_classId;
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfSimpleEncoding))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class352::__zz_cib_classId;
      classIdRepoPopulated = true;
    }
    auto tdx = std::type_index(typeid(**__zz_cib_obj));
    auto itr = __zz_cib_gClassIdRepo.find(tdx);
    if (itr != __zz_cib_gClassIdRepo.end()) return itr->second;
    {
      auto* obj = dynamic_cast<::PoDoFo::PdfDocEncoding*>(*__zz_cib_obj);
      if (obj) {
        *__zz_cib_obj = obj;
        return __zz_cib_gClassIdRepo[tdx] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class353::__zz_cib_classId;
      }
    }
    {
      auto* obj = dynamic_cast<::PoDoFo::PdfWin1250Encoding*>(*__zz_cib_obj);
      if (obj) {
        *__zz_cib_obj = obj;
        return __zz_cib_gClassIdRepo[tdx] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class360::__zz_cib_classId;
      }
    }
    {
      auto* obj = dynamic_cast<::PoDoFo::PdfIso88592Encoding*>(*__zz_cib_obj);
      if (obj) {
        *__zz_cib_obj = obj;
        return __zz_cib_gClassIdRepo[tdx] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class361::__zz_cib_classId;
      }
    }
    {
      auto* obj = dynamic_cast<::PoDoFo::PdfWinAnsiEncoding*>(*__zz_cib_obj);
      if (obj) {
        *__zz_cib_obj = obj;
        return __zz_cib_gClassIdRepo[tdx] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class354::__zz_cib_classId;
      }
    }
    {
      auto* obj = dynamic_cast<::PoDoFo::PdfMacRomanEncoding*>(*__zz_cib_obj);
      if (obj) {
        *__zz_cib_obj = obj;
        return __zz_cib_gClassIdRepo[tdx] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class355::__zz_cib_classId;
      }
    }
    {
      auto* obj = dynamic_cast<::PoDoFo::PdfMacExpertEncoding*>(*__zz_cib_obj);
      if (obj) {
        *__zz_cib_obj = obj;
        return __zz_cib_gClassIdRepo[tdx] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class356::__zz_cib_classId;
      }
    }
    {
      auto* obj = dynamic_cast<::PoDoFo::PdfStandardEncoding*>(*__zz_cib_obj);
      if (obj) {
        *__zz_cib_obj = obj;
        return __zz_cib_gClassIdRepo[tdx] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class357::__zz_cib_classId;
      }
    }
    {
      auto* obj = dynamic_cast<::PoDoFo::PdfSymbolEncoding*>(*__zz_cib_obj);
      if (obj) {
        *__zz_cib_obj = obj;
        return __zz_cib_gClassIdRepo[tdx] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class358::__zz_cib_classId;
      }
    }
    {
      auto* obj = dynamic_cast<::PoDoFo::PdfZapfDingbatsEncoding*>(*__zz_cib_obj);
      if (obj) {
        *__zz_cib_obj = obj;
        return __zz_cib_gClassIdRepo[tdx] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class359::__zz_cib_classId;
      }
    }
    return __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class352::__zz_cib_classId;
  }
  static void __zz_cib_decl __zz_cib_ReleaseProxy(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->__zz_cib_ReleaseProxy();
}
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class352 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSimpleEncoding>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSimpleEncoding>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSimpleEncoding>::AddToDictionary_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSimpleEncoding>::ConvertToUnicode_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSimpleEncoding>::ConvertToEncoding_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSimpleEncoding>::IsAutoDelete_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSimpleEncoding>::IsSingleByteEncoding_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSimpleEncoding>::GetName_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSimpleEncoding>::GetCharCode_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSimpleEncoding>::GetUnicodeCharCode_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSimpleEncoding>::GetID_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSimpleEncoding>::GetToUnicodeTable_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSimpleEncoding>::__zz_cib_CastTo__zz_cib_Class350),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSimpleEncoding>::__zz_cib_CastFrom__zz_cib_Class350),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSimpleEncoding>::__zz_cib_GetClassId),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSimpleEncoding>::__zz_cib_ReleaseProxy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSimpleEncoding>::__zz_cib_RegisterProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 17 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfDocEncoding> : public ::PoDoFo::PdfDocEncoding {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocEncoding>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfDocEncoding>;
  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::PoDoFo::PdfDocEncoding>;

  using ::PoDoFo::PdfDocEncoding::PdfDocEncoding;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::pdf_uint16*> __zz_cib_decl GetToUnicodeTable_3(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::pdf_uint16*>(
      __zz_cib_obj->::PoDoFo::PdfDocEncoding::GetToUnicodeTable()
    );
  }
  static void __zz_cib_decl __zz_cib_RegisterProxy(::PoDoFo::PdfDocEncoding* obj, __zz_cib_Proxy proxy, __zz_cib_ProxyDeleter deleter) {
    __zz_cib_ProxyManagerDelegator::__zz_cib_RegisterProxy(obj, proxy, deleter);
  }
  static ::PoDoFo::PdfEncoding* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class350(::PoDoFo::PdfDocEncoding* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfDocEncoding* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class350(::PoDoFo::PdfEncoding* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfDocEncoding*>(__zz_cib_obj);
  }
  static ::PoDoFo::PdfSimpleEncoding* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class352(::PoDoFo::PdfDocEncoding* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfDocEncoding* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class352(::PoDoFo::PdfSimpleEncoding* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfDocEncoding*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class353 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocEncoding>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocEncoding>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocEncoding>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocEncoding>::GetToUnicodeTable_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocEncoding>::__zz_cib_CastTo__zz_cib_Class350),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocEncoding>::__zz_cib_CastFrom__zz_cib_Class350),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocEncoding>::__zz_cib_CastTo__zz_cib_Class352),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocEncoding>::__zz_cib_CastFrom__zz_cib_Class352),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDocEncoding>::__zz_cib_RegisterProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 9 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfWinAnsiEncoding> : public ::PoDoFo::PdfWinAnsiEncoding {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfWinAnsiEncoding>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfWinAnsiEncoding>;
  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::PoDoFo::PdfWinAnsiEncoding>;

  using ::PoDoFo::PdfWinAnsiEncoding::PdfWinAnsiEncoding;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::pdf_uint16*> __zz_cib_decl GetToUnicodeTable_3(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::pdf_uint16*>(
      __zz_cib_obj->::PoDoFo::PdfWinAnsiEncoding::GetToUnicodeTable()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl AddToDictionary_4(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfDictionary&> rDictionary) {
    __zz_cib_obj->::PoDoFo::PdfWinAnsiEncoding::AddToDictionary(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfDictionary&>(rDictionary)
    );
  }
  static void __zz_cib_decl __zz_cib_RegisterProxy(::PoDoFo::PdfWinAnsiEncoding* obj, __zz_cib_Proxy proxy, __zz_cib_ProxyDeleter deleter) {
    __zz_cib_ProxyManagerDelegator::__zz_cib_RegisterProxy(obj, proxy, deleter);
  }
  static ::PoDoFo::PdfEncoding* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class350(::PoDoFo::PdfWinAnsiEncoding* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfWinAnsiEncoding* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class350(::PoDoFo::PdfEncoding* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfWinAnsiEncoding*>(__zz_cib_obj);
  }
  static ::PoDoFo::PdfSimpleEncoding* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class352(::PoDoFo::PdfWinAnsiEncoding* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfWinAnsiEncoding* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class352(::PoDoFo::PdfSimpleEncoding* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfWinAnsiEncoding*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class354 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfWinAnsiEncoding>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfWinAnsiEncoding>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfWinAnsiEncoding>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfWinAnsiEncoding>::GetToUnicodeTable_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfWinAnsiEncoding>::AddToDictionary_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfWinAnsiEncoding>::__zz_cib_CastTo__zz_cib_Class350),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfWinAnsiEncoding>::__zz_cib_CastFrom__zz_cib_Class350),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfWinAnsiEncoding>::__zz_cib_CastTo__zz_cib_Class352),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfWinAnsiEncoding>::__zz_cib_CastFrom__zz_cib_Class352),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfWinAnsiEncoding>::__zz_cib_RegisterProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 10 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfMacRomanEncoding> : public ::PoDoFo::PdfMacRomanEncoding {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMacRomanEncoding>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfMacRomanEncoding>;
  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::PoDoFo::PdfMacRomanEncoding>;

  using ::PoDoFo::PdfMacRomanEncoding::PdfMacRomanEncoding;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::pdf_uint16*> __zz_cib_decl GetToUnicodeTable_3(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::pdf_uint16*>(
      __zz_cib_obj->::PoDoFo::PdfMacRomanEncoding::GetToUnicodeTable()
    );
  }
  static void __zz_cib_decl __zz_cib_RegisterProxy(::PoDoFo::PdfMacRomanEncoding* obj, __zz_cib_Proxy proxy, __zz_cib_ProxyDeleter deleter) {
    __zz_cib_ProxyManagerDelegator::__zz_cib_RegisterProxy(obj, proxy, deleter);
  }
  static ::PoDoFo::PdfEncoding* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class350(::PoDoFo::PdfMacRomanEncoding* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfMacRomanEncoding* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class350(::PoDoFo::PdfEncoding* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfMacRomanEncoding*>(__zz_cib_obj);
  }
  static ::PoDoFo::PdfSimpleEncoding* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class352(::PoDoFo::PdfMacRomanEncoding* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfMacRomanEncoding* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class352(::PoDoFo::PdfSimpleEncoding* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfMacRomanEncoding*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class355 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMacRomanEncoding>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMacRomanEncoding>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMacRomanEncoding>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMacRomanEncoding>::GetToUnicodeTable_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMacRomanEncoding>::__zz_cib_CastTo__zz_cib_Class350),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMacRomanEncoding>::__zz_cib_CastFrom__zz_cib_Class350),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMacRomanEncoding>::__zz_cib_CastTo__zz_cib_Class352),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMacRomanEncoding>::__zz_cib_CastFrom__zz_cib_Class352),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMacRomanEncoding>::__zz_cib_RegisterProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 9 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfMacExpertEncoding> : public ::PoDoFo::PdfMacExpertEncoding {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMacExpertEncoding>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfMacExpertEncoding>;
  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::PoDoFo::PdfMacExpertEncoding>;

  using ::PoDoFo::PdfMacExpertEncoding::PdfMacExpertEncoding;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::pdf_uint16*> __zz_cib_decl GetToUnicodeTable_3(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::pdf_uint16*>(
      __zz_cib_obj->::PoDoFo::PdfMacExpertEncoding::GetToUnicodeTable()
    );
  }
  static void __zz_cib_decl __zz_cib_RegisterProxy(::PoDoFo::PdfMacExpertEncoding* obj, __zz_cib_Proxy proxy, __zz_cib_ProxyDeleter deleter) {
    __zz_cib_ProxyManagerDelegator::__zz_cib_RegisterProxy(obj, proxy, deleter);
  }
  static ::PoDoFo::PdfEncoding* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class350(::PoDoFo::PdfMacExpertEncoding* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfMacExpertEncoding* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class350(::PoDoFo::PdfEncoding* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfMacExpertEncoding*>(__zz_cib_obj);
  }
  static ::PoDoFo::PdfSimpleEncoding* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class352(::PoDoFo::PdfMacExpertEncoding* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfMacExpertEncoding* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class352(::PoDoFo::PdfSimpleEncoding* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfMacExpertEncoding*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class356 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMacExpertEncoding>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMacExpertEncoding>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMacExpertEncoding>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMacExpertEncoding>::GetToUnicodeTable_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMacExpertEncoding>::__zz_cib_CastTo__zz_cib_Class350),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMacExpertEncoding>::__zz_cib_CastFrom__zz_cib_Class350),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMacExpertEncoding>::__zz_cib_CastTo__zz_cib_Class352),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMacExpertEncoding>::__zz_cib_CastFrom__zz_cib_Class352),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMacExpertEncoding>::__zz_cib_RegisterProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 9 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfStandardEncoding> : public ::PoDoFo::PdfStandardEncoding {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStandardEncoding>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfStandardEncoding>;
  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::PoDoFo::PdfStandardEncoding>;

  using ::PoDoFo::PdfStandardEncoding::PdfStandardEncoding;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::pdf_uint16*> __zz_cib_decl GetToUnicodeTable_3(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::pdf_uint16*>(
      __zz_cib_obj->::PoDoFo::PdfStandardEncoding::GetToUnicodeTable()
    );
  }
  static void __zz_cib_decl __zz_cib_RegisterProxy(::PoDoFo::PdfStandardEncoding* obj, __zz_cib_Proxy proxy, __zz_cib_ProxyDeleter deleter) {
    __zz_cib_ProxyManagerDelegator::__zz_cib_RegisterProxy(obj, proxy, deleter);
  }
  static ::PoDoFo::PdfEncoding* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class350(::PoDoFo::PdfStandardEncoding* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfStandardEncoding* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class350(::PoDoFo::PdfEncoding* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfStandardEncoding*>(__zz_cib_obj);
  }
  static ::PoDoFo::PdfSimpleEncoding* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class352(::PoDoFo::PdfStandardEncoding* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfStandardEncoding* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class352(::PoDoFo::PdfSimpleEncoding* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfStandardEncoding*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class357 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStandardEncoding>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStandardEncoding>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStandardEncoding>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStandardEncoding>::GetToUnicodeTable_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStandardEncoding>::__zz_cib_CastTo__zz_cib_Class350),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStandardEncoding>::__zz_cib_CastFrom__zz_cib_Class350),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStandardEncoding>::__zz_cib_CastTo__zz_cib_Class352),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStandardEncoding>::__zz_cib_CastFrom__zz_cib_Class352),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStandardEncoding>::__zz_cib_RegisterProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 9 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfSymbolEncoding> : public ::PoDoFo::PdfSymbolEncoding {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSymbolEncoding>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfSymbolEncoding>;
  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::PoDoFo::PdfSymbolEncoding>;

  using ::PoDoFo::PdfSymbolEncoding::PdfSymbolEncoding;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::pdf_uint16*> __zz_cib_decl GetToUnicodeTable_3(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::pdf_uint16*>(
      __zz_cib_obj->::PoDoFo::PdfSymbolEncoding::GetToUnicodeTable()
    );
  }
  static void __zz_cib_decl __zz_cib_RegisterProxy(::PoDoFo::PdfSymbolEncoding* obj, __zz_cib_Proxy proxy, __zz_cib_ProxyDeleter deleter) {
    __zz_cib_ProxyManagerDelegator::__zz_cib_RegisterProxy(obj, proxy, deleter);
  }
  static ::PoDoFo::PdfEncoding* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class350(::PoDoFo::PdfSymbolEncoding* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfSymbolEncoding* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class350(::PoDoFo::PdfEncoding* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfSymbolEncoding*>(__zz_cib_obj);
  }
  static ::PoDoFo::PdfSimpleEncoding* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class352(::PoDoFo::PdfSymbolEncoding* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfSymbolEncoding* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class352(::PoDoFo::PdfSimpleEncoding* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfSymbolEncoding*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class358 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSymbolEncoding>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSymbolEncoding>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSymbolEncoding>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSymbolEncoding>::GetToUnicodeTable_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSymbolEncoding>::__zz_cib_CastTo__zz_cib_Class350),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSymbolEncoding>::__zz_cib_CastFrom__zz_cib_Class350),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSymbolEncoding>::__zz_cib_CastTo__zz_cib_Class352),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSymbolEncoding>::__zz_cib_CastFrom__zz_cib_Class352),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfSymbolEncoding>::__zz_cib_RegisterProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 9 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfZapfDingbatsEncoding> : public ::PoDoFo::PdfZapfDingbatsEncoding {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfZapfDingbatsEncoding>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfZapfDingbatsEncoding>;
  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::PoDoFo::PdfZapfDingbatsEncoding>;

  using ::PoDoFo::PdfZapfDingbatsEncoding::PdfZapfDingbatsEncoding;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::pdf_uint16*> __zz_cib_decl GetToUnicodeTable_3(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::pdf_uint16*>(
      __zz_cib_obj->::PoDoFo::PdfZapfDingbatsEncoding::GetToUnicodeTable()
    );
  }
  static void __zz_cib_decl __zz_cib_RegisterProxy(::PoDoFo::PdfZapfDingbatsEncoding* obj, __zz_cib_Proxy proxy, __zz_cib_ProxyDeleter deleter) {
    __zz_cib_ProxyManagerDelegator::__zz_cib_RegisterProxy(obj, proxy, deleter);
  }
  static ::PoDoFo::PdfEncoding* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class350(::PoDoFo::PdfZapfDingbatsEncoding* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfZapfDingbatsEncoding* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class350(::PoDoFo::PdfEncoding* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfZapfDingbatsEncoding*>(__zz_cib_obj);
  }
  static ::PoDoFo::PdfSimpleEncoding* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class352(::PoDoFo::PdfZapfDingbatsEncoding* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfZapfDingbatsEncoding* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class352(::PoDoFo::PdfSimpleEncoding* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfZapfDingbatsEncoding*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class359 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfZapfDingbatsEncoding>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfZapfDingbatsEncoding>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfZapfDingbatsEncoding>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfZapfDingbatsEncoding>::GetToUnicodeTable_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfZapfDingbatsEncoding>::__zz_cib_CastTo__zz_cib_Class350),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfZapfDingbatsEncoding>::__zz_cib_CastFrom__zz_cib_Class350),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfZapfDingbatsEncoding>::__zz_cib_CastTo__zz_cib_Class352),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfZapfDingbatsEncoding>::__zz_cib_CastFrom__zz_cib_Class352),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfZapfDingbatsEncoding>::__zz_cib_RegisterProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 9 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfWin1250Encoding> : public ::PoDoFo::PdfWin1250Encoding {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfWin1250Encoding>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfWin1250Encoding>;
  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::PoDoFo::PdfWin1250Encoding>;

  using ::PoDoFo::PdfWin1250Encoding::PdfWin1250Encoding;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> __zz_cib_decl GetID_3(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfName&>(
      __zz_cib_obj->::PoDoFo::PdfWin1250Encoding::GetID()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::pdf_uint16*> __zz_cib_decl GetToUnicodeTable_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::pdf_uint16*>(
      __zz_cib_obj->::PoDoFo::PdfWin1250Encoding::GetToUnicodeTable()
    );
  }
  static void __zz_cib_decl __zz_cib_RegisterProxy(::PoDoFo::PdfWin1250Encoding* obj, __zz_cib_Proxy proxy, __zz_cib_ProxyDeleter deleter) {
    __zz_cib_ProxyManagerDelegator::__zz_cib_RegisterProxy(obj, proxy, deleter);
  }
  static ::PoDoFo::PdfEncoding* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class350(::PoDoFo::PdfWin1250Encoding* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfWin1250Encoding* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class350(::PoDoFo::PdfEncoding* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfWin1250Encoding*>(__zz_cib_obj);
  }
  static ::PoDoFo::PdfSimpleEncoding* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class352(::PoDoFo::PdfWin1250Encoding* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfWin1250Encoding* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class352(::PoDoFo::PdfSimpleEncoding* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfWin1250Encoding*>(__zz_cib_obj);
  }
  static ::PoDoFo::PdfWinAnsiEncoding* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class354(::PoDoFo::PdfWin1250Encoding* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfWin1250Encoding* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class354(::PoDoFo::PdfWinAnsiEncoding* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfWin1250Encoding*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class360 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfWin1250Encoding>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfWin1250Encoding>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfWin1250Encoding>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfWin1250Encoding>::GetID_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfWin1250Encoding>::GetToUnicodeTable_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfWin1250Encoding>::__zz_cib_CastTo__zz_cib_Class350),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfWin1250Encoding>::__zz_cib_CastFrom__zz_cib_Class350),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfWin1250Encoding>::__zz_cib_CastTo__zz_cib_Class352),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfWin1250Encoding>::__zz_cib_CastFrom__zz_cib_Class352),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfWin1250Encoding>::__zz_cib_CastTo__zz_cib_Class354),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfWin1250Encoding>::__zz_cib_CastFrom__zz_cib_Class354),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfWin1250Encoding>::__zz_cib_RegisterProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 12 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfIso88592Encoding> : public ::PoDoFo::PdfIso88592Encoding {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfIso88592Encoding>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfIso88592Encoding>;
  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::PoDoFo::PdfIso88592Encoding>;

  using ::PoDoFo::PdfIso88592Encoding::PdfIso88592Encoding;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfName&> __zz_cib_decl GetID_3(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfName&>(
      __zz_cib_obj->::PoDoFo::PdfIso88592Encoding::GetID()
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::pdf_uint16*> __zz_cib_decl GetToUnicodeTable_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const ::PoDoFo::pdf_uint16*>(
      __zz_cib_obj->::PoDoFo::PdfIso88592Encoding::GetToUnicodeTable()
    );
  }
  static void __zz_cib_decl __zz_cib_RegisterProxy(::PoDoFo::PdfIso88592Encoding* obj, __zz_cib_Proxy proxy, __zz_cib_ProxyDeleter deleter) {
    __zz_cib_ProxyManagerDelegator::__zz_cib_RegisterProxy(obj, proxy, deleter);
  }
  static ::PoDoFo::PdfEncoding* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class350(::PoDoFo::PdfIso88592Encoding* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfIso88592Encoding* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class350(::PoDoFo::PdfEncoding* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfIso88592Encoding*>(__zz_cib_obj);
  }
  static ::PoDoFo::PdfSimpleEncoding* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class352(::PoDoFo::PdfIso88592Encoding* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfIso88592Encoding* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class352(::PoDoFo::PdfSimpleEncoding* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfIso88592Encoding*>(__zz_cib_obj);
  }
  static ::PoDoFo::PdfWinAnsiEncoding* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class354(::PoDoFo::PdfIso88592Encoding* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfIso88592Encoding* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class354(::PoDoFo::PdfWinAnsiEncoding* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfIso88592Encoding*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class361 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfIso88592Encoding>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfIso88592Encoding>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfIso88592Encoding>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfIso88592Encoding>::GetID_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfIso88592Encoding>::GetToUnicodeTable_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfIso88592Encoding>::__zz_cib_CastTo__zz_cib_Class350),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfIso88592Encoding>::__zz_cib_CastFrom__zz_cib_Class350),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfIso88592Encoding>::__zz_cib_CastTo__zz_cib_Class352),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfIso88592Encoding>::__zz_cib_CastFrom__zz_cib_Class352),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfIso88592Encoding>::__zz_cib_CastTo__zz_cib_Class354),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfIso88592Encoding>::__zz_cib_CastFrom__zz_cib_Class354),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfIso88592Encoding>::__zz_cib_RegisterProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 12 };
  return &methodTable;
}
}}}
