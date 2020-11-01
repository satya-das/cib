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

#include "__zz_cib_internal/__zz_cib_CibPoDoFo-generic.h"

namespace PoDoFo {

PoDoFo::PdfStream::PdfStream(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfStream::PdfStream(PdfStream&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfStream::PdfStream(::PoDoFo::PdfObject* pParent)
  : PoDoFo::PdfStream(__zz_cib_MyHelper::__zz_cib_New_0(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(pParent)>(std::move(pParent))))
{}

PoDoFo::PdfStream::~PdfStream() {
  __zz_cib_MyHelper::__zz_cib_ReleaseProxy(this);
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

void PoDoFo::PdfStream::Set(const char* szBuffer, ::PoDoFo::pdf_long lLen, const ::std::vector<::PoDoFo::EPdfFilter>& vecFilters) {
    __zz_cib_MyHelper::Set_3<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(szBuffer)>(std::move(szBuffer)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(vecFilters)>(vecFilters)
    );
  }

void PoDoFo::PdfStream::Set(const char* szBuffer, ::PoDoFo::pdf_long lLen) {
    __zz_cib_MyHelper::Set_4<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(szBuffer)>(std::move(szBuffer)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))
    );
  }

void PoDoFo::PdfStream::Set(::PoDoFo::PdfInputStream* pStream) {
    __zz_cib_MyHelper::Set_5<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pStream)>(std::move(pStream))
    );
  }

void PoDoFo::PdfStream::Set(::PoDoFo::PdfInputStream* pStream, const ::std::vector<::PoDoFo::EPdfFilter>& vecFilters) {
    __zz_cib_MyHelper::Set_6<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pStream)>(std::move(pStream)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(vecFilters)>(vecFilters)
    );
  }

void PoDoFo::PdfStream::Set(const char* pszString) {
    __zz_cib_MyHelper::Set_7<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszString)>(std::move(pszString))
    );
  }

void PoDoFo::PdfStream::SetRawData(::PoDoFo::PdfInputStream* pStream, ::PoDoFo::pdf_long lLen) {
    __zz_cib_MyHelper::SetRawData_8<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pStream)>(std::move(pStream)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))
    );
  }

void PoDoFo::PdfStream::BeginAppend(bool bClearExisting) {
    __zz_cib_MyHelper::BeginAppend_9<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bClearExisting)>(std::move(bClearExisting))
    );
  }

void PoDoFo::PdfStream::BeginAppend(const ::std::vector<::PoDoFo::EPdfFilter>& vecFilters, bool bClearExisting, bool bDeleteFilters) {
    __zz_cib_MyHelper::BeginAppend_10<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(vecFilters)>(vecFilters),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bClearExisting)>(std::move(bClearExisting)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bDeleteFilters)>(std::move(bDeleteFilters))
    );
  }

void PoDoFo::PdfStream::Append(const char* pszString, size_t lLen) {
    __zz_cib_MyHelper::Append_11<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszString)>(std::move(pszString)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))
    );
  }

void PoDoFo::PdfStream::Append(const char* pszString) {
    __zz_cib_MyHelper::Append_12<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszString)>(std::move(pszString))
    );
  }

void PoDoFo::PdfStream::Append(const std::string& sString) {
    __zz_cib_MyHelper::Append_13<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(sString)>(sString)
    );
  }

void PoDoFo::PdfStream::EndAppend() {
    __zz_cib_MyHelper::EndAppend_14<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

bool PoDoFo::PdfStream::IsAppending() const {
  return __zz_cib_::__zz_cib_FromAbiType<bool>(
    __zz_cib_MyHelper::IsAppending_15<__zz_cib_::__zz_cib_AbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfStream::GetFilteredCopy(char** pBuffer, ::PoDoFo::pdf_long* lLen) const {
    __zz_cib_MyHelper::GetFilteredCopy_19<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))
    );
  }

void PoDoFo::PdfStream::GetFilteredCopy(::PoDoFo::PdfOutputStream* pStream) const {
    __zz_cib_MyHelper::GetFilteredCopy_20<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pStream)>(std::move(pStream))
    );
  }

const ::PoDoFo::PdfStream& PoDoFo::PdfStream::operator=(const ::PoDoFo::PdfStream& rhs) {
  return __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfStream&>(
    __zz_cib_MyHelper::__zz_cib_OperatorEqual_21<__zz_cib_::__zz_cib_AbiType_t<const ::PoDoFo::PdfStream&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(rhs)>(rhs)
    )
  );
}
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template<>
class __zz_cib_Generic<::PoDoFo::PdfStream> : public ::PoDoFo::PdfStream {
  using __zz_cib_MethodId = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class400::__zz_cib_MethodId;
  static __zz_cib_MethodTableHelper& __zz_cib_GetMethodTableHelper() {
    static __zz_cib_MethodTableHelper mtableHelper(__zz_cib_CibPoDoFoGetMethodTable(
      __zz_cib_ids::__zz_cib_Class333::__zz_cib_Class400::__zz_cib_classId));
    return mtableHelper;
  }
  explicit __zz_cib_Generic(__zz_cib_AbiType h) : ::PoDoFo::PdfStream(h) {}
public:
  static ::PoDoFo::PdfStream* __zz_cib_FromHandle(__zz_cib_AbiType h) {
    return new __zz_cib_Generic(h);
  }
  void EndAppendImpl() override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_AbiType);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::EndAppendImpl_26>(
      __zz_cib_h
    );
  }
  void BeginAppendImpl(const ::std::vector<::PoDoFo::EPdfFilter>& vecFilters) override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_AbiType, __zz_cib_AbiType_t<decltype(vecFilters)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::BeginAppendImpl_24>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(vecFilters)>(vecFilters)
    );
  }
  ::PoDoFo::pdf_long GetLength() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<::PoDoFo::pdf_long>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<::PoDoFo::pdf_long>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetLength_16>(
        __zz_cib_h
      )
    );
  }
  void GetCopy(char** pBuffer, ::PoDoFo::pdf_long* lLen) const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (const __zz_cib_AbiType, __zz_cib_AbiType_t<decltype(pBuffer)>, __zz_cib_AbiType_t<decltype(lLen)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetCopy_17>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))
    );
  }
  void Write(::PoDoFo::PdfOutputDevice* pDevice, ::PoDoFo::PdfEncrypt* pEncrypt) override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_AbiType, __zz_cib_AbiType_t<decltype(pDevice)>, __zz_cib_AbiType_t<decltype(pEncrypt)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::Write_2>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(pDevice)>(std::move(pDevice)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pEncrypt)>(std::move(pEncrypt))
    );
  }
  void GetCopy(::PoDoFo::PdfOutputStream* pStream) const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (const __zz_cib_AbiType, __zz_cib_AbiType_t<decltype(pStream)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetCopy_18>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(pStream)>(std::move(pStream))
    );
  }
  const char* GetInternalBuffer() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<const char*>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<const char*>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetInternalBuffer_22>(
        __zz_cib_h
      )
    );
  }
  void AppendImpl(const char* pszString, size_t lLen) override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_AbiType, __zz_cib_AbiType_t<decltype(pszString)>, __zz_cib_AbiType_t<decltype(lLen)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::AppendImpl_25>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszString)>(std::move(pszString)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))
    );
  }
  ::PoDoFo::pdf_long GetInternalBufferSize() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<::PoDoFo::pdf_long>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<::PoDoFo::pdf_long>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetInternalBufferSize_23>(
        __zz_cib_h
      )
    );
  }
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    auto __zz_cib_h = __zz_cib_Helper<::PoDoFo::PdfStream>::__zz_cib_ReleaseHandle(this);
    using __zz_cib_ProcType = void(__zz_cib_decl *) (__zz_cib_AbiType);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_Delete_1>(
      __zz_cib_h
    );
  }
};
}

namespace __zz_cib_ {
template<>
::PoDoFo::PdfStream* __zz_cib_Helper<::PoDoFo::PdfStream>::__zz_cib_CreateProxy(__zz_cib_AbiType h) {
  switch(__zz_cib_GetClassId(&h)) {
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class373::__zz_cib_classId:
    return __zz_cib_Helper<PoDoFo::PdfFileStream>::__zz_cib_FromHandle(
      __zz_cib_Helper<PoDoFo::PdfFileStream>::__zz_cib_CastFrom__zz_cib_Class400(h)
    );
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class382::__zz_cib_classId:
    return __zz_cib_Helper<PoDoFo::PdfMemStream>::__zz_cib_FromHandle(
      __zz_cib_Helper<PoDoFo::PdfMemStream>::__zz_cib_CastFrom__zz_cib_Class400(h)
    );
  default: break;
  }
  auto* const __zz_cib_obj = ::__zz_cib_::__zz_cib_Generic<::PoDoFo::PdfStream>::__zz_cib_FromHandle(h);
  __zz_cib_RegisterProxy(h, __zz_cib_obj);
  return __zz_cib_obj;
}
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfStream> {
  using __zz_cib_Delegatee = ::PoDoFo::PdfStream;
  static __zz_cib_AbiType_t<void> __zz_cib_decl EndAppendImpl_0(::PoDoFo::PdfStream* __zz_cib_obj) {
    __zz_cib_obj->EndAppendImpl();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl BeginAppendImpl_1(::PoDoFo::PdfStream* __zz_cib_obj, __zz_cib_AbiType_t<const ::std::vector<::PoDoFo::EPdfFilter>&> vecFilters) {
    __zz_cib_obj->BeginAppendImpl(
      __zz_cib_::__zz_cib_FromAbiType<const ::std::vector<::PoDoFo::EPdfFilter>&>(vecFilters)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl GetLength_2(const ::PoDoFo::PdfStream* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->GetLength()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl GetCopy_3(const ::PoDoFo::PdfStream* __zz_cib_obj, __zz_cib_AbiType_t<char**> pBuffer, __zz_cib_AbiType_t<::PoDoFo::pdf_long*> lLen) {
    __zz_cib_obj->GetCopy(
      __zz_cib_::__zz_cib_FromAbiType<char**>(pBuffer),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long*>(lLen)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Write_4(::PoDoFo::PdfStream* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfOutputDevice*> pDevice, __zz_cib_AbiType_t<::PoDoFo::PdfEncrypt*> pEncrypt) {
    __zz_cib_obj->Write(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutputDevice*>(pDevice),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfEncrypt*>(pEncrypt)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl GetCopy_5(const ::PoDoFo::PdfStream* __zz_cib_obj, __zz_cib_AbiType_t<::PoDoFo::PdfOutputStream*> pStream) {
    __zz_cib_obj->GetCopy(
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutputStream*>(pStream)
    );
  }
  static __zz_cib_AbiType_t<const char*> __zz_cib_decl GetInternalBuffer_6(const ::PoDoFo::PdfStream* __zz_cib_obj) {
    return __zz_cib_ToAbiType<const char*>(
      __zz_cib_obj->GetInternalBuffer()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl AppendImpl_7(::PoDoFo::PdfStream* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pszString, __zz_cib_AbiType_t<size_t> lLen) {
    __zz_cib_obj->AppendImpl(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pszString),
      __zz_cib_::__zz_cib_FromAbiType<size_t>(lLen)
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl GetInternalBufferSize_8(const ::PoDoFo::PdfStream* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->GetInternalBufferSize()
    );
  }
  static void __zz_cib_decl __zz_cib_Delete_9(::PoDoFo::PdfStream* __zz_cib_obj) {
    __zz_cib_Helper<::PoDoFo::PdfStream>::__zz_cib_ReleaseHandle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class400 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStream>::EndAppendImpl_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStream>::BeginAppendImpl_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStream>::GetLength_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStream>::GetCopy_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStream>::Write_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStream>::GetCopy_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStream>::GetInternalBuffer_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStream>::AppendImpl_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStream>::GetInternalBufferSize_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfStream>::__zz_cib_Delete_9)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 10 };
  return &methodTable;
}
}}}

namespace __zz_cib_ {
template<>
const __zz_cib_MethodTable* __zz_cib_Helper<::PoDoFo::PdfStream>::__zz_cib_GetProxyMethodTable() {
  return __zz_cib_::__zz_cib_Class333::__zz_cib_Class400::__zz_cib_GetMethodTable();
}
}

