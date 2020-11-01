#include "podofo/base/PdfOutputDevice.h"
#include "podofo/base/PdfRefCountedBuffer.h"
#include "podofo/doc/PdfSignOutputDevice.h"

#include "__zz_cib_internal/__zz_cib_CibPoDoFo-generic.h"

namespace PoDoFo {

PoDoFo::PdfOutputDevice::PdfOutputDevice(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfOutputDevice::PdfOutputDevice(PdfOutputDevice&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfOutputDevice::PdfOutputDevice(const ::PoDoFo::PdfOutputDevice& __zz_cib_param0)
  : PoDoFo::PdfOutputDevice(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfOutputDevice::PdfOutputDevice()
  : PoDoFo::PdfOutputDevice(__zz_cib_MyHelper::__zz_cib_New_1())
{}

PoDoFo::PdfOutputDevice::PdfOutputDevice(const char* pszFilename, bool bTruncate)
  : PoDoFo::PdfOutputDevice(__zz_cib_MyHelper::__zz_cib_New_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pszFilename)>(std::move(pszFilename)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(bTruncate)>(std::move(bTruncate))))
{}

PoDoFo::PdfOutputDevice::PdfOutputDevice(char* pBuffer, size_t lLen)
  : PoDoFo::PdfOutputDevice(__zz_cib_MyHelper::__zz_cib_New_3(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))))
{}

PoDoFo::PdfOutputDevice::PdfOutputDevice(const std::ostream* pOutStream)
  : PoDoFo::PdfOutputDevice(__zz_cib_MyHelper::__zz_cib_New_4(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pOutStream)>(std::move(pOutStream))))
{}

PoDoFo::PdfOutputDevice::PdfOutputDevice(::PoDoFo::PdfRefCountedBuffer* pOutBuffer)
  : PoDoFo::PdfOutputDevice(__zz_cib_MyHelper::__zz_cib_New_5(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pOutBuffer)>(std::move(pOutBuffer))))
{}

PoDoFo::PdfOutputDevice::PdfOutputDevice(std::iostream* pStream)
  : PoDoFo::PdfOutputDevice(__zz_cib_MyHelper::__zz_cib_New_6(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pStream)>(std::move(pStream))))
{}

PoDoFo::PdfOutputDevice::~PdfOutputDevice() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_7(
    h
  );
}

size_t PoDoFo::PdfOutputDevice::GetLength() const {
  return __zz_cib_::__zz_cib_FromAbiType<size_t>(
    __zz_cib_MyHelper::GetLength_8<__zz_cib_::__zz_cib_AbiType_t<size_t>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfOutputDevice::Print(const char* pszFormat) {
    __zz_cib_MyHelper::Print_9<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszFormat)>(std::move(pszFormat))
    );
  }

void PoDoFo::PdfOutputDevice::Write(const char* pBuffer, size_t lLen) {
    __zz_cib_MyHelper::Write_10<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))
    );
  }

size_t PoDoFo::PdfOutputDevice::Read(char* pBuffer, size_t lLen) {
  return __zz_cib_::__zz_cib_FromAbiType<size_t>(
    __zz_cib_MyHelper::Read_11<__zz_cib_::__zz_cib_AbiType_t<size_t>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))
    )
  );
}

void PoDoFo::PdfOutputDevice::Seek(size_t offset) {
    __zz_cib_MyHelper::Seek_12<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(offset)>(std::move(offset))
    );
  }

size_t PoDoFo::PdfOutputDevice::Tell() const {
  return __zz_cib_::__zz_cib_FromAbiType<size_t>(
    __zz_cib_MyHelper::Tell_13<__zz_cib_::__zz_cib_AbiType_t<size_t>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

void PoDoFo::PdfOutputDevice::Flush() {
    __zz_cib_MyHelper::Flush_14<__zz_cib_::__zz_cib_AbiType_t<void>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    );
  }
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template<>
class __zz_cib_Generic<::PoDoFo::PdfOutputDevice> : public ::PoDoFo::PdfOutputDevice {
  using __zz_cib_MethodId = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class386::__zz_cib_MethodId;
  static __zz_cib_MethodTableHelper& __zz_cib_GetMethodTableHelper() {
    static __zz_cib_MethodTableHelper mtableHelper(__zz_cib_CibPoDoFoGetMethodTable(
      __zz_cib_ids::__zz_cib_Class333::__zz_cib_Class386::__zz_cib_classId));
    return mtableHelper;
  }
  explicit __zz_cib_Generic(__zz_cib_AbiType h) : ::PoDoFo::PdfOutputDevice(h) {}
public:
  static ::PoDoFo::PdfOutputDevice* __zz_cib_FromHandle(__zz_cib_AbiType h) {
    return new __zz_cib_Generic(h);
  }
  void Flush() override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_AbiType);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::Flush_14>(
      __zz_cib_h
    );
  }
  void Print(const char* pszFormat) override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_AbiType, __zz_cib_AbiType_t<decltype(pszFormat)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::Print_9>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(pszFormat)>(std::move(pszFormat))
    );
  }
  size_t Tell() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<size_t>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<size_t>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::Tell_13>(
        __zz_cib_h
      )
    );
  }
  size_t GetLength() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<size_t>(__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_FromAbiType<size_t>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::GetLength_8>(
        __zz_cib_h
      )
    );
  }
  void Write(const char* pBuffer, size_t lLen) override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_AbiType, __zz_cib_AbiType_t<decltype(pBuffer)>, __zz_cib_AbiType_t<decltype(lLen)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::Write_10>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))
    );
  }
  size_t Read(char* pBuffer, size_t lLen) override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<size_t>(__zz_cib_decl *) (__zz_cib_AbiType, __zz_cib_AbiType_t<decltype(pBuffer)>, __zz_cib_AbiType_t<decltype(lLen)>);
    return __zz_cib_FromAbiType<size_t>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::Read_11>(
        __zz_cib_h,
        __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))
      )
    );
  }
  void Seek(size_t offset) override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_AbiType, __zz_cib_AbiType_t<decltype(offset)>);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::Seek_12>(
      __zz_cib_h,
      __zz_cib_::__zz_cib_ToAbiType<decltype(offset)>(std::move(offset))
    );
  }
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    auto __zz_cib_h = __zz_cib_Helper<::PoDoFo::PdfOutputDevice>::__zz_cib_ReleaseHandle(this);
    using __zz_cib_ProcType = void(__zz_cib_decl *) (__zz_cib_AbiType);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_Delete_7>(
      __zz_cib_h
    );
  }
};
}

namespace __zz_cib_ {
template<>
::PoDoFo::PdfOutputDevice* __zz_cib_Helper<::PoDoFo::PdfOutputDevice>::__zz_cib_CreateProxy(__zz_cib_AbiType h) {
  switch(__zz_cib_GetClassId(&h)) {
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class471::__zz_cib_classId:
    return __zz_cib_Helper<PoDoFo::PdfSignOutputDevice>::__zz_cib_FromHandle(
      __zz_cib_Helper<PoDoFo::PdfSignOutputDevice>::__zz_cib_CastFrom__zz_cib_Class386(h)
    );
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class386::__zz_cib_classId: {
    auto* const __zz_cib_obj = new ::PoDoFo::PdfOutputDevice(h);
    return __zz_cib_obj;
  }
  default: break;
  }
  auto* const __zz_cib_obj = ::__zz_cib_::__zz_cib_Generic<::PoDoFo::PdfOutputDevice>::__zz_cib_FromHandle(h);
  return __zz_cib_obj;
}
}
