#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfDefines.h"
#include "podofo/base/PdfDictionary.h"
#include "podofo/base/PdfFilter.h"
#include "podofo/base/PdfName.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfOutputStream.h"
#include <vector>

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
template<> struct __zz_cib_Delegator<::PoDoFo::PdfFilter>;
template <>
class __zz_cib_Generic<::PoDoFo::PdfFilter> : public ::PoDoFo::PdfFilter {
public:
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfFilter>;

  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::PoDoFo::PdfFilter>;

  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_GetMethodTable)
    : ::PoDoFo::PdfFilter::PdfFilter()
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_methodTableHelper(__zz_cib_GetMethodTable)
  {}
  void DecodeBlockImpl(const char* pBuffer, ::PoDoFo::pdf_long lLen) override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(pBuffer)>, __zz_cib_AbiType_t<decltype(lLen)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::DecodeBlockImpl_0>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))
    );
  }
  void EndDecodeImpl() override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::EndDecodeImpl_1>(
      __zz_cib_h
    );
  }
  bool CanDecode() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::CanDecode_2>(
        __zz_cib_h
      )
    );
  }
  bool CanEncode() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::CanEncode_3>(
        __zz_cib_h
      )
    );
  }
  ::PoDoFo::EPdfFilter GetType() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<::PoDoFo::EPdfFilter>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<::PoDoFo::EPdfFilter>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetType_4>(
        __zz_cib_h
      )
    );
  }
  void BeginDecodeImpl(const ::PoDoFo::PdfDictionary* __zz_cib_param0) override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(__zz_cib_param0)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::BeginDecodeImpl_5>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(std::move(__zz_cib_param0))
    );
  }
  void BeginEncodeImpl() override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::BeginEncodeImpl_6>(
      __zz_cib_h
    );
  }
  void EncodeBlockImpl(const char* pBuffer, ::PoDoFo::pdf_long lLen) override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(pBuffer)>, __zz_cib_AbiType_t<decltype(lLen)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::EncodeBlockImpl_7>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))
    );
  }
  void EndEncodeImpl() override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::EndEncodeImpl_8>(
      __zz_cib_h
    );
  }
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = void(__zz_cib_decl *) (__zz_cib_Proxy);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_Delete_9>(
      __zz_cib_h
    );
  }
  void __zz_cib_ReleaseProxy() { __zz_cib_h_ = nullptr; }
  __ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib_Generic, ::PoDoFo::PdfFilter)

private:
  __zz_cib_Proxy __zz_cib_h_;
  const __zz_cib_MethodTableHelper __zz_cib_methodTableHelper;

  const __zz_cib_MethodTableHelper& __zz_cib_GetMethodTableHelper() const {
    return __zz_cib_methodTableHelper;
  }
  friend struct __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFilter>;
  using __zz_cib_MethodId = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class374::__zz_cib_Generic::__zz_cib_MethodId;
};
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfFilter> : public ::PoDoFo::PdfFilter {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfFilter>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfFilter>;

  using ::PoDoFo::PdfFilter::PdfFilter;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_GetMethodTable) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfFilter>(__zz_cib_proxy, __zz_cib_GetMethodTable);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl CanEncode_2(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->CanEncode()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Encode_3(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pInBuffer, __zz_cib_AbiType_t<::PoDoFo::pdf_long> lInLen, __zz_cib_AbiType_t<char**> ppOutBuffer, __zz_cib_AbiType_t<::PoDoFo::pdf_long*> plOutLen) {
    __zz_cib_obj->::PoDoFo::PdfFilter::Encode(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pInBuffer),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(lInLen),
      __zz_cib_::__zz_cib_FromAbiType<char**>(ppOutBuffer),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long*>(plOutLen)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl BeginEncode_4(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfOutputStream*> pOutput) {
    __zz_cib_obj->::PoDoFo::PdfFilter::BeginEncode(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutputStream*>(pOutput)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl EncodeBlock_5(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pBuffer, __zz_cib_AbiType_t<::PoDoFo::pdf_long> lLen) {
    __zz_cib_obj->::PoDoFo::PdfFilter::EncodeBlock(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pBuffer),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(lLen)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl EndEncode_6(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfFilter::EndEncode();
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl CanDecode_7(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->CanDecode()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Decode_8(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pInBuffer, __zz_cib_AbiType_t<::PoDoFo::pdf_long> lInLen, __zz_cib_AbiType_t<char**> ppOutBuffer, __zz_cib_AbiType_t<::PoDoFo::pdf_long*> plOutLen, __zz_cib_AbiType_t<const ::PoDoFo::PdfDictionary*> pDecodeParms) {
    __zz_cib_obj->::PoDoFo::PdfFilter::Decode(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pInBuffer),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(lInLen),
      __zz_cib_::__zz_cib_FromAbiType<char**>(ppOutBuffer),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long*>(plOutLen),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfDictionary*>(pDecodeParms)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl BeginDecode_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfOutputStream*> pOutput, __zz_cib_AbiType_t<const ::PoDoFo::PdfDictionary*> pDecodeParms) {
    __zz_cib_obj->::PoDoFo::PdfFilter::BeginDecode(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutputStream*>(pOutput),
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfDictionary*>(pDecodeParms)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl DecodeBlock_10(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pBuffer, __zz_cib_AbiType_t<::PoDoFo::pdf_long> lLen) {
    __zz_cib_obj->::PoDoFo::PdfFilter::DecodeBlock(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pBuffer),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(lLen)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl EndDecode_11(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfFilter::EndDecode();
  }
  static __zz_cib_AbiType_t<::PoDoFo::EPdfFilter> __zz_cib_decl GetType_12(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::EPdfFilter>(
      __zz_cib_obj->GetType()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfOutputStream*> __zz_cib_decl GetStream_13(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfOutputStream*>(
      __zz_cib_obj->::PoDoFo::PdfFilter::GetStream()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl FailEncodeDecode_14(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfFilter::FailEncodeDecode();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl BeginEncodeImpl_15(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfFilter::BeginEncodeImpl();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl EncodeBlockImpl_16(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pBuffer, __zz_cib_AbiType_t<::PoDoFo::pdf_long> lLen) {
    __zz_cib_obj->EncodeBlockImpl(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pBuffer),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(lLen)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl EndEncodeImpl_17(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfFilter::EndEncodeImpl();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl BeginDecodeImpl_18(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfDictionary*> __zz_cib_param0) {
    __zz_cib_obj->::PoDoFo::PdfFilter::BeginDecodeImpl(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfDictionary*>(__zz_cib_param0)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl DecodeBlockImpl_19(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pBuffer, __zz_cib_AbiType_t<::PoDoFo::pdf_long> lLen) {
    __zz_cib_obj->DecodeBlockImpl(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pBuffer),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(lLen)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl EndDecodeImpl_20(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfFilter::EndDecodeImpl();
  }
  static std::uint32_t __zz_cib_decl __zz_cib_GetClassId(::PoDoFo::PdfFilter** __zz_cib_obj) {
    static bool classIdRepoPopulated = false;
    if (!classIdRepoPopulated) {
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfFilter))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class374::__zz_cib_classId;
      classIdRepoPopulated = true;
    }
    auto tdx = std::type_index(typeid(**__zz_cib_obj));
    auto itr = __zz_cib_gClassIdRepo.find(tdx);
    if (itr != __zz_cib_gClassIdRepo.end()) return itr->second;
    return __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class374::__zz_cib_classId;
  }
  static void __zz_cib_decl __zz_cib_ReleaseProxy(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->__zz_cib_ReleaseProxy();
}
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class374 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFilter>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFilter>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFilter>::CanEncode_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFilter>::Encode_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFilter>::BeginEncode_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFilter>::EncodeBlock_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFilter>::EndEncode_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFilter>::CanDecode_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFilter>::Decode_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFilter>::BeginDecode_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFilter>::DecodeBlock_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFilter>::EndDecode_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFilter>::GetType_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFilter>::GetStream_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFilter>::FailEncodeDecode_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFilter>::BeginEncodeImpl_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFilter>::EncodeBlockImpl_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFilter>::EndEncodeImpl_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFilter>::BeginDecodeImpl_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFilter>::DecodeBlockImpl_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFilter>::EndDecodeImpl_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFilter>::__zz_cib_GetClassId),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFilter>::__zz_cib_ReleaseProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 23 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfFilterFactory> : public ::PoDoFo::PdfFilterFactory {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFilterFactory>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::PoDoFo::PdfFilterFactory::PdfFilterFactory;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfFilter*> __zz_cib_decl Create_2(__zz_cib_AbiType_t<const ::PoDoFo::EPdfFilter> eFilter) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfFilter*>(
      ::PoDoFo::PdfFilterFactory::Create(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::EPdfFilter>(eFilter)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfOutputStream*> __zz_cib_decl CreateEncodeStream_3(__zz_cib_AbiType_t<const ::std::vector<::PoDoFo::EPdfFilter>&> filters, __zz_cib_AbiType_t<::PoDoFo::PdfOutputStream*> pStream) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfOutputStream*>(
      ::PoDoFo::PdfFilterFactory::CreateEncodeStream(
        __zz_cib_::__zz_cib_FromAbiType<const ::std::vector<::PoDoFo::EPdfFilter>&>(filters),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutputStream*>(pStream)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::PdfOutputStream*> __zz_cib_decl CreateDecodeStream_4(__zz_cib_AbiType_t<const ::std::vector<::PoDoFo::EPdfFilter>&> filters, __zz_cib_AbiType_t<::PoDoFo::PdfOutputStream*> pStream, __zz_cib_AbiType_t<const ::PoDoFo::PdfDictionary*> pDictionary) {
    return __zz_cib_ToAbiType<::PoDoFo::PdfOutputStream*>(
      ::PoDoFo::PdfFilterFactory::CreateDecodeStream(
        __zz_cib_::__zz_cib_FromAbiType<const ::std::vector<::PoDoFo::EPdfFilter>&>(filters),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutputStream*>(pStream),
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfDictionary*>(pDictionary)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::EPdfFilter> __zz_cib_decl FilterNameToType_5(__zz_cib_AbiType_t<const ::PoDoFo::PdfName&> name, __zz_cib_AbiType_t<bool> bSupportShortNames) {
    return __zz_cib_ToAbiType<::PoDoFo::EPdfFilter>(
      ::PoDoFo::PdfFilterFactory::FilterNameToType(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfName&>(name),
        __zz_cib_::__zz_cib_FromAbiType<bool>(bSupportShortNames)
      )
    );
  }
  static __zz_cib_AbiType_t<const char*> __zz_cib_decl FilterTypeToName_6(__zz_cib_AbiType_t<::PoDoFo::EPdfFilter> eFilter) {
    return __zz_cib_ToAbiType<const char*>(
      ::PoDoFo::PdfFilterFactory::FilterTypeToName(
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfFilter>(eFilter)
      )
    );
  }
  static __zz_cib_AbiType_t<::std::vector<::PoDoFo::EPdfFilter>> __zz_cib_decl CreateFilterList_7(__zz_cib_AbiType_t<const ::PoDoFo::PdfObject*> pObject) {
    return __zz_cib_ToAbiType<::std::vector<::PoDoFo::EPdfFilter>>(
      ::PoDoFo::PdfFilterFactory::CreateFilterList(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfObject*>(pObject)
      )
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class375 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFilterFactory>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFilterFactory>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFilterFactory>::Create_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFilterFactory>::CreateEncodeStream_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFilterFactory>::CreateDecodeStream_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFilterFactory>::FilterNameToType_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFilterFactory>::FilterTypeToName_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFilterFactory>::CreateFilterList_7)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 8 };
  return &methodTable;
}
}}}
