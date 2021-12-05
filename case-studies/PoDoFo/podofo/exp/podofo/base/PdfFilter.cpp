#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfDefines.h"
#include "podofo/base/PdfDictionary.h"
#include "podofo/base/PdfFilter.h"
#include "podofo/base/PdfName.h"
#include "podofo/base/PdfObject.h"
#include "podofo/base/PdfOutputStream.h"
#include <vector>

#include "__zz_cib_internal/__zz_cib_CibPoDoFo-generic.h"

namespace PoDoFo {

PoDoFo::PdfFilter::PdfFilter(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfFilter::PdfFilter(PdfFilter&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfFilter::PdfFilter()
  : PoDoFo::PdfFilter(__zz_cib_MyHelper::__zz_cib_New_0(this))
{}

PoDoFo::PdfFilter::~PdfFilter() {
  __zz_cib_MyHelper::__zz_cib_ReleaseProxy(this);
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

void PoDoFo::PdfFilter::Encode(const char* pInBuffer, ::PoDoFo::pdf_long lInLen, char** ppOutBuffer, ::PoDoFo::pdf_long* plOutLen) const {
    __zz_cib_MyHelper::Encode_3<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pInBuffer)>(std::move(pInBuffer)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lInLen)>(std::move(lInLen)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(ppOutBuffer)>(std::move(ppOutBuffer)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(plOutLen)>(std::move(plOutLen))
    );
  }

void PoDoFo::PdfFilter::BeginEncode(::PoDoFo::PdfOutputStream* pOutput) {
    __zz_cib_MyHelper::BeginEncode_4<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pOutput)>(std::move(pOutput))
    );
  }

void PoDoFo::PdfFilter::EncodeBlock(const char* pBuffer, ::PoDoFo::pdf_long lLen) {
    __zz_cib_MyHelper::EncodeBlock_5<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))
    );
  }

void PoDoFo::PdfFilter::EndEncode() {
    __zz_cib_MyHelper::EndEncode_6<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

void PoDoFo::PdfFilter::Decode(const char* pInBuffer, ::PoDoFo::pdf_long lInLen, char** ppOutBuffer, ::PoDoFo::pdf_long* plOutLen, const ::PoDoFo::PdfDictionary* pDecodeParms) const {
    __zz_cib_MyHelper::Decode_8<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pInBuffer)>(std::move(pInBuffer)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lInLen)>(std::move(lInLen)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(ppOutBuffer)>(std::move(ppOutBuffer)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(plOutLen)>(std::move(plOutLen)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pDecodeParms)>(std::move(pDecodeParms))
    );
  }

void PoDoFo::PdfFilter::BeginDecode(::PoDoFo::PdfOutputStream* pOutput, const ::PoDoFo::PdfDictionary* pDecodeParms) {
    __zz_cib_MyHelper::BeginDecode_9<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pOutput)>(std::move(pOutput)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pDecodeParms)>(std::move(pDecodeParms))
    );
  }

void PoDoFo::PdfFilter::DecodeBlock(const char* pBuffer, ::PoDoFo::pdf_long lLen) {
    __zz_cib_MyHelper::DecodeBlock_10<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))
    );
  }

void PoDoFo::PdfFilter::EndDecode() {
    __zz_cib_MyHelper::EndDecode_11<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

::PoDoFo::PdfOutputStream* PoDoFo::PdfFilter::GetStream() const {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutputStream*>(
    __zz_cib_MyHelper::GetStream_13<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfOutputStream*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfFilter::FailEncodeDecode() {
    __zz_cib_MyHelper::FailEncodeDecode_14<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

void PoDoFo::PdfFilter::BeginEncodeImpl() {
    __zz_cib_MyHelper::BeginEncodeImpl_15<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

void PoDoFo::PdfFilter::EndEncodeImpl() {
    __zz_cib_MyHelper::EndEncodeImpl_17<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }

void PoDoFo::PdfFilter::BeginDecodeImpl(const ::PoDoFo::PdfDictionary* __zz_cib_param0) {
    __zz_cib_MyHelper::BeginDecodeImpl_18<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(std::move(__zz_cib_param0))
    );
  }

void PoDoFo::PdfFilter::EndDecodeImpl() {
    __zz_cib_MyHelper::EndDecodeImpl_20<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }
}
namespace PoDoFo {

PoDoFo::PdfFilterFactory::PdfFilterFactory(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{}

PoDoFo::PdfFilterFactory::PdfFilterFactory(PdfFilterFactory&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

PoDoFo::PdfFilterFactory::PdfFilterFactory(const ::PoDoFo::PdfFilterFactory& __zz_cib_param0)
  : PoDoFo::PdfFilterFactory(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfFilterFactory::~PdfFilterFactory() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

::PoDoFo::PdfFilter* PoDoFo::PdfFilterFactory::Create(const ::PoDoFo::EPdfFilter eFilter) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfFilter*>(
    __zz_cib_MyHelper::Create_2<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfFilter*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(eFilter)>(std::move(eFilter))
    )
  );
}

::PoDoFo::PdfOutputStream* PoDoFo::PdfFilterFactory::CreateEncodeStream(const ::std::vector<::PoDoFo::EPdfFilter>& filters, ::PoDoFo::PdfOutputStream* pStream) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutputStream*>(
    __zz_cib_MyHelper::CreateEncodeStream_3<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfOutputStream*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(filters)>(filters),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pStream)>(std::move(pStream))
    )
  );
}

::PoDoFo::PdfOutputStream* PoDoFo::PdfFilterFactory::CreateDecodeStream(const ::std::vector<::PoDoFo::EPdfFilter>& filters, ::PoDoFo::PdfOutputStream* pStream, const ::PoDoFo::PdfDictionary* pDictionary) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutputStream*>(
    __zz_cib_MyHelper::CreateDecodeStream_4<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::PdfOutputStream*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(filters)>(filters),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pStream)>(std::move(pStream)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pDictionary)>(std::move(pDictionary))
    )
  );
}

::PoDoFo::EPdfFilter PoDoFo::PdfFilterFactory::FilterNameToType(const ::PoDoFo::PdfName& name, bool bSupportShortNames) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::EPdfFilter>(
    __zz_cib_MyHelper::FilterNameToType_5<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::EPdfFilter>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(name)>(name),
      __zz_cib_::__zz_cib_ToAbiType<decltype(bSupportShortNames)>(std::move(bSupportShortNames))
    )
  );
}

const char* PoDoFo::PdfFilterFactory::FilterTypeToName(::PoDoFo::EPdfFilter eFilter) {
  return __zz_cib_::__zz_cib_FromAbiType<const char*>(
    __zz_cib_MyHelper::FilterTypeToName_6<__zz_cib_::__zz_cib_AbiType_t<const char*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(eFilter)>(std::move(eFilter))
    )
  );
}

::std::vector<::PoDoFo::EPdfFilter> PoDoFo::PdfFilterFactory::CreateFilterList(const ::PoDoFo::PdfObject* pObject) {
  return __zz_cib_::__zz_cib_FromAbiType<::std::vector<::PoDoFo::EPdfFilter>>(
    __zz_cib_MyHelper::CreateFilterList_7<__zz_cib_::__zz_cib_AbiType_t<::std::vector<::PoDoFo::EPdfFilter>>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(pObject)>(std::move(pObject))
    )
  );
}
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template<>
class __zz_cib_Generic<::PoDoFo::PdfFilter> : public ::PoDoFo::PdfFilter {
  using __zz_cib_MethodId = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class374::__zz_cib_MethodId;
  static __zz_cib_MethodTableHelper& __zz_cib_GetMethodTableHelper() {
    static __zz_cib_MethodTableHelper mtableHelper(__zz_cib_CibPoDoFoGetMethodTable(
      __zz_cib_ids::__zz_cib_Class333::__zz_cib_Class374::__zz_cib_classId));
    return mtableHelper;
  }
  explicit __zz_cib_Generic(__zz_cib_AbiType h) : ::PoDoFo::PdfFilter(h) {}
public:
  static ::PoDoFo::PdfFilter* __zz_cib_FromHandle(__zz_cib_AbiType h) {
    return new __zz_cib_Generic(h);
  }
  void DecodeBlockImpl(const char* pBuffer, ::PoDoFo::pdf_long lLen) override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_AbiType, __zz_cib_AbiType_t<decltype(pBuffer)>, __zz_cib_AbiType_t<decltype(lLen)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::DecodeBlockImpl_19>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))
    );
  }
  void EndDecodeImpl() override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_AbiType);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::EndDecodeImpl_20>(
      __zz_cib_h
    );
  }
  bool CanDecode() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::CanDecode_7>(
        __zz_cib_h
      )
    );
  }
  bool CanEncode() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<bool>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<bool>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::CanEncode_2>(
        __zz_cib_h
      )
    );
  }
  ::PoDoFo::EPdfFilter GetType() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<::PoDoFo::EPdfFilter>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<::PoDoFo::EPdfFilter>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetType_12>(
        __zz_cib_h
      )
    );
  }
  void BeginDecodeImpl(const ::PoDoFo::PdfDictionary* __zz_cib_param0) override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_AbiType, __zz_cib_AbiType_t<decltype(__zz_cib_param0)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::BeginDecodeImpl_18>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(std::move(__zz_cib_param0))
    );
  }
  void BeginEncodeImpl() override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_AbiType);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::BeginEncodeImpl_15>(
      __zz_cib_h
    );
  }
  void EncodeBlockImpl(const char* pBuffer, ::PoDoFo::pdf_long lLen) override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_AbiType, __zz_cib_AbiType_t<decltype(pBuffer)>, __zz_cib_AbiType_t<decltype(lLen)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::EncodeBlockImpl_16>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))
    );
  }
  void EndEncodeImpl() override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_AbiType);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::EndEncodeImpl_17>(
      __zz_cib_h
    );
  }
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    auto __zz_cib_h = __zz_cib_Helper<::PoDoFo::PdfFilter>::__zz_cib_ReleaseHandle(this);
    using __zz_cib_ProcType = void(__zz_cib_decl *) (__zz_cib_AbiType);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_Delete_1>(
      __zz_cib_h
    );
  }
};
}

namespace __zz_cib_ {
template<>
::PoDoFo::PdfFilter* __zz_cib_Helper<::PoDoFo::PdfFilter>::__zz_cib_CreateProxy(__zz_cib_AbiType h) {
  switch(__zz_cib_GetClassId(&h)) {
  default: break;
  }
  auto* const __zz_cib_obj = ::__zz_cib_::__zz_cib_Generic<::PoDoFo::PdfFilter>::__zz_cib_FromHandle(h);
  return __zz_cib_obj;
}
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfFilter> {
  using __zz_cib_Delegatee = ::PoDoFo::PdfFilter;
  static __zz_cib_AbiType_t<void> __zz_cib_decl DecodeBlockImpl_0(::PoDoFo::PdfFilter* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pBuffer, __zz_cib_AbiType_t<::PoDoFo::pdf_long> lLen) {
    __zz_cib_obj->DecodeBlockImpl(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pBuffer),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(lLen)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl EndDecodeImpl_1(::PoDoFo::PdfFilter* __zz_cib_obj) {
    __zz_cib_obj->EndDecodeImpl();
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl CanDecode_2(const ::PoDoFo::PdfFilter* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->CanDecode()
    );
  }
  static __zz_cib_AbiType_t<bool> __zz_cib_decl CanEncode_3(const ::PoDoFo::PdfFilter* __zz_cib_obj) {
    return __zz_cib_ToAbiType<bool>(
      __zz_cib_obj->CanEncode()
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::EPdfFilter> __zz_cib_decl GetType_4(const ::PoDoFo::PdfFilter* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::EPdfFilter>(
      __zz_cib_obj->GetType()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl BeginDecodeImpl_5(::PoDoFo::PdfFilter* __zz_cib_obj, __zz_cib_AbiType_t<const ::PoDoFo::PdfDictionary*> __zz_cib_param0) {
    __zz_cib_obj->BeginDecodeImpl(
      __zz_cib_::__zz_cib_FromAbiType<const ::PoDoFo::PdfDictionary*>(__zz_cib_param0)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl BeginEncodeImpl_6(::PoDoFo::PdfFilter* __zz_cib_obj) {
    __zz_cib_obj->BeginEncodeImpl();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl EncodeBlockImpl_7(::PoDoFo::PdfFilter* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pBuffer, __zz_cib_AbiType_t<::PoDoFo::pdf_long> lLen) {
    __zz_cib_obj->EncodeBlockImpl(
      __zz_cib_::__zz_cib_FromAbiType<const char*>(pBuffer),
      __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(lLen)
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl EndEncodeImpl_8(::PoDoFo::PdfFilter* __zz_cib_obj) {
    __zz_cib_obj->EndEncodeImpl();
  }
  static void __zz_cib_decl __zz_cib_Delete_9(::PoDoFo::PdfFilter* __zz_cib_obj) {
    __zz_cib_Helper_t<::PoDoFo::PdfFilter>::__zz_cib_ReleaseHandle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class374 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFilter>::DecodeBlockImpl_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFilter>::EndDecodeImpl_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFilter>::CanDecode_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFilter>::CanEncode_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFilter>::GetType_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFilter>::BeginDecodeImpl_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFilter>::BeginEncodeImpl_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFilter>::EncodeBlockImpl_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFilter>::EndEncodeImpl_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFilter>::__zz_cib_Delete_9)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 10 };
  return &methodTable;
}
}}}

namespace __zz_cib_ {
template<>
const __zz_cib_MethodTable* __zz_cib_Helper<::PoDoFo::PdfFilter>::__zz_cib_GetProxyMethodTable() {
  return __zz_cib_::__zz_cib_Class333::__zz_cib_Class374::__zz_cib_GetMethodTable();
}
}

