#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfEncrypt.h"
#include "podofo/base/PdfFileStream.h"
#include "podofo/base/PdfInputStream.h"
#include "podofo/base/PdfMemStream.h"
#include "podofo/base/PdfName.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfOutputDevice.h"
#include "podofo/base/PdfOutputStream.h"
#include "podofo/base/PdfStream.h"
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
template<> struct __zz_cib_Delegator<::PoDoFo::PdfStream>;
template <>
class __zz_cib_Generic<::PoDoFo::PdfStream> : public ::PoDoFo::PdfStream {
public:
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfStream>;

  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::PoDoFo::PdfStream>;

  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_GetMethodTable, ::PoDoFo::PdfObject* pParent)
    : ::PoDoFo::PdfStream::PdfStream(    std::move(pParent))
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_methodTableHelper(__zz_cib_GetMethodTable)
  {}
  void EndAppendImpl() override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::EndAppendImpl_0>(
      __zz_cib_h
    );
  }
  void BeginAppendImpl(const ::std::vector<::PoDoFo::EPdfFilter>& vecFilters) override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(vecFilters)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::BeginAppendImpl_1>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(vecFilters)>(vecFilters)
    );
  }
  ::PoDoFo::pdf_long GetLength() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<::PoDoFo::pdf_long>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<::PoDoFo::pdf_long>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetLength_2>(
        __zz_cib_h
      )
    );
  }
  void GetCopy(char** pBuffer, ::PoDoFo::pdf_long* lLen) const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(pBuffer)>, __zz_cib_AbiType_t<decltype(lLen)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetCopy_3>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))
    );
  }
  void Write(::PoDoFo::PdfOutputDevice* pDevice, ::PoDoFo::PdfEncrypt* pEncrypt) override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(pDevice)>, __zz_cib_AbiType_t<decltype(pEncrypt)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::Write_4>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(pDevice)>(std::move(pDevice)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pEncrypt)>(std::move(pEncrypt))
    );
  }
  void GetCopy(::PoDoFo::PdfOutputStream* pStream) const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (const __zz_cib_Proxy, __zz_cib_AbiType_t<decltype(pStream)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetCopy_5>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(pStream)>(std::move(pStream))
    );
  }
  const char* GetInternalBuffer() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<const char*>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<const char*>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetInternalBuffer_6>(
        __zz_cib_h
      )
    );
  }
  void AppendImpl(const char* pszString, size_t lLen) override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(pszString)>, __zz_cib_AbiType_t<decltype(lLen)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::AppendImpl_7>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszString)>(std::move(pszString)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))
    );
  }
  ::PoDoFo::pdf_long GetInternalBufferSize() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<::PoDoFo::pdf_long>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<::PoDoFo::pdf_long>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetInternalBufferSize_8>(
        __zz_cib_h
      )
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
  __ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib_Generic, ::PoDoFo::PdfStream)

private:
  __zz_cib_Proxy __zz_cib_h_;
  const __zz_cib_MethodTableHelper __zz_cib_methodTableHelper;

  const __zz_cib_MethodTableHelper& __zz_cib_GetMethodTableHelper() const {
    return __zz_cib_methodTableHelper;
  }
  friend struct __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStream>;
  using __zz_cib_MethodId = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class400::__zz_cib_Generic::__zz_cib_MethodId;
};
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfStream> : public ::PoDoFo::PdfStream {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfStream>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfStream>;
  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::PoDoFo::PdfStream>;

  using ::PoDoFo::PdfStream::PdfStream;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_GetMethodTable, __zz_cib_AbiType_t<::PoDoFo::PdfObject*> pParent) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfStream>(__zz_cib_proxy, __zz_cib_GetMethodTable,     __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfObject*>(pParent));
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Write_2(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfOutputDevice*> pDevice, __zz_cib_AbiType_t<::PoDoFo::PdfEncrypt*> pEncrypt) {
    __zz_cib_obj->Write(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutputDevice*>(pDevice),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfEncrypt*>(pEncrypt)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Set_3(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> szBuffer, __zz_cib_AbiType_t<::PoDoFo::pdf_long> lLen, __zz_cib_AbiType_t<const ::std::vector<::PoDoFo::EPdfFilter>&> vecFilters) {
    __zz_cib_obj->::PoDoFo::PdfStream::Set(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(szBuffer),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(lLen),
      __zz_cib_::__zz_cib_FromAbiType<const ::std::vector<::PoDoFo::EPdfFilter>&>(vecFilters)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Set_4(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> szBuffer, __zz_cib_AbiType_t<::PoDoFo::pdf_long> lLen) {
    __zz_cib_obj->::PoDoFo::PdfStream::Set(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(szBuffer),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(lLen)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Set_5(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfInputStream*> pStream) {
    __zz_cib_obj->::PoDoFo::PdfStream::Set(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfInputStream*>(pStream)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Set_6(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfInputStream*> pStream, __zz_cib_AbiType_t<const ::std::vector<::PoDoFo::EPdfFilter>&> vecFilters) {
    __zz_cib_obj->::PoDoFo::PdfStream::Set(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfInputStream*>(pStream),
      __zz_cib_::__zz_cib_FromAbiType<const ::std::vector<::PoDoFo::EPdfFilter>&>(vecFilters)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Set_7(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszString) {
    __zz_cib_obj->::PoDoFo::PdfStream::Set(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pszString)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl SetRawData_8(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfInputStream*> pStream, __zz_cib_AbiType_t<::PoDoFo::pdf_long> lLen) {
    __zz_cib_obj->::PoDoFo::PdfStream::SetRawData(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfInputStream*>(pStream),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(lLen)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl BeginAppend_9(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<bool> bClearExisting) {
    __zz_cib_obj->::PoDoFo::PdfStream::BeginAppend(
      __zz_cib_::__zz_cib_FromAbiType<bool>(bClearExisting)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl BeginAppend_10(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::std::vector<::PoDoFo::EPdfFilter>&> vecFilters, __zz_cib_AbiType_t<bool> bClearExisting, __zz_cib_AbiType_t<bool> bDeleteFilters) {
    __zz_cib_obj->::PoDoFo::PdfStream::BeginAppend(
      __zz_cib_::__zz_cib_FromAbiType<const ::std::vector<::PoDoFo::EPdfFilter>&>(vecFilters),
      __zz_cib_::__zz_cib_FromAbiType<bool>(bClearExisting),
      __zz_cib_::__zz_cib_FromAbiType<bool>(bDeleteFilters)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Append_11(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszString, __zz_cib_AbiType_t<size_t> lLen) {
    __zz_cib_obj->::PoDoFo::PdfStream::Append(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pszString),
      __zz_cib_::__zz_cib_FromAbiType<size_t>(lLen)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Append_12(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszString) {
    __zz_cib_obj->::PoDoFo::PdfStream::Append(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pszString)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Append_13(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const std::string&> sString) {
    __zz_cib_obj->::PoDoFo::PdfStream::Append(
      __zz_cib_::__zz_cib_FromAbiType<const std::string&>(sString)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl EndAppend_14(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfStream::EndAppend();
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl IsAppending_15(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->::PoDoFo::PdfStream::IsAppending()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl GetLength_16(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->GetLength()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl GetCopy_17(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<char**> pBuffer, __zz_cib_AbiType_t<::PoDoFo::pdf_long*> lLen) {
    __zz_cib_obj->GetCopy(
      __zz_cib_::__zz_cib_FromAbiType<char**>(pBuffer),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long*>(lLen)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl GetCopy_18(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfOutputStream*> pStream) {
    __zz_cib_obj->GetCopy(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutputStream*>(pStream)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl GetFilteredCopy_19(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<char**> pBuffer, __zz_cib_AbiType_t<::PoDoFo::pdf_long*> lLen) {
    __zz_cib_obj->::PoDoFo::PdfStream::GetFilteredCopy(
      __zz_cib_::__zz_cib_FromAbiType<char**>(pBuffer),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long*>(lLen)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl GetFilteredCopy_20(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfOutputStream*> pStream) {
    __zz_cib_obj->::PoDoFo::PdfStream::GetFilteredCopy(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutputStream*>(pStream)
    );
  }
  static __zz_cib_AbiType_t<const ::PoDoFo::PdfStream&> __zz_cib_decl __zz_cib_OperatorEqual_21(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfStream&> rhs) {
    return __zz_cib_ToAbiType<const ::PoDoFo::PdfStream&>(
      __zz_cib_obj->::PoDoFo::PdfStream::operator=(
        __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfStream&>(rhs)
      )
    );
  }
  static __zz_cib_AbiType_t<const char*> __zz_cib_decl GetInternalBuffer_22(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const char*>(
      __zz_cib_obj->GetInternalBuffer()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl GetInternalBufferSize_23(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->GetInternalBufferSize()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl BeginAppendImpl_24(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const ::std::vector<::PoDoFo::EPdfFilter>&> vecFilters) {
    __zz_cib_obj->BeginAppendImpl(
      __zz_cib_::__zz_cib_FromAbiType<const ::std::vector<::PoDoFo::EPdfFilter>&>(vecFilters)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl AppendImpl_25(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszString, __zz_cib_AbiType_t<size_t> lLen) {
    __zz_cib_obj->AppendImpl(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pszString),
      __zz_cib_::__zz_cib_FromAbiType<size_t>(lLen)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl EndAppendImpl_26(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->EndAppendImpl();
  }
  static void __zz_cib_decl __zz_cib_RegisterProxy(::PoDoFo::PdfStream* obj, __zz_cib_Proxy proxy, __zz_cib_ProxyDeleter deleter) {
    __zz_cib_ProxyManagerDelegator::__zz_cib_RegisterProxy(obj, proxy, deleter);
  }
  static std::uint32_t __zz_cib_decl __zz_cib_GetClassId(::PoDoFo::PdfStream** __zz_cib_obj) {
    static bool classIdRepoPopulated = false;
    if (!classIdRepoPopulated) {
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfFileStream))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class373::__zz_cib_classId;
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfMemStream))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class382::__zz_cib_classId;
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfStream))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class400::__zz_cib_classId;
      classIdRepoPopulated = true;
    }
    auto tdx = std::type_index(typeid(**__zz_cib_obj));
    auto itr = __zz_cib_gClassIdRepo.find(tdx);
    if (itr != __zz_cib_gClassIdRepo.end()) return itr->second;
    {
      auto* obj = dynamic_cast<::PoDoFo::PdfFileStream*>(*__zz_cib_obj);
      if (obj) {
        *__zz_cib_obj = obj;
        return __zz_cib_gClassIdRepo[tdx] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class373::__zz_cib_classId;
      }
    }
    {
      auto* obj = dynamic_cast<::PoDoFo::PdfMemStream*>(*__zz_cib_obj);
      if (obj) {
        *__zz_cib_obj = obj;
        return __zz_cib_gClassIdRepo[tdx] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class382::__zz_cib_classId;
      }
    }
    return __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class400::__zz_cib_classId;
  }
  static void __zz_cib_decl __zz_cib_ReleaseProxy(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->__zz_cib_ReleaseProxy();
}
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class400 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStream>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStream>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStream>::Write_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStream>::Set_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStream>::Set_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStream>::Set_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStream>::Set_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStream>::Set_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStream>::SetRawData_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStream>::BeginAppend_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStream>::BeginAppend_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStream>::Append_11),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStream>::Append_12),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStream>::Append_13),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStream>::EndAppend_14),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStream>::IsAppending_15),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStream>::GetLength_16),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStream>::GetCopy_17),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStream>::GetCopy_18),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStream>::GetFilteredCopy_19),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStream>::GetFilteredCopy_20),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStream>::__zz_cib_OperatorEqual_21),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStream>::GetInternalBuffer_22),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStream>::GetInternalBufferSize_23),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStream>::BeginAppendImpl_24),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStream>::AppendImpl_25),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStream>::EndAppendImpl_26),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStream>::__zz_cib_GetClassId),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStream>::__zz_cib_ReleaseProxy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStream>::__zz_cib_RegisterProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 30 };
  return &methodTable;
}
}}}
