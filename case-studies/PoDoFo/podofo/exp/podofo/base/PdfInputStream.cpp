#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfInputDevice.h"
#include "podofo/base/PdfInputStream.h"

#include "__zz_cib_internal/__zz_cib_CibPoDoFo-generic.h"

namespace PoDoFo {

PoDoFo::PdfInputStream::PdfInputStream(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfInputStream::PdfInputStream(PdfInputStream&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfInputStream::~PdfInputStream() {
  __zz_cib_MyHelper::__zz_cib_ReleaseProxy(this);
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_1(
    h
  );
}

PoDoFo::PdfInputStream::PdfInputStream()
  : PoDoFo::PdfInputStream(__zz_cib_MyHelper::__zz_cib_New_0(this))
{}
}
namespace PoDoFo {

PoDoFo::PdfFileInputStream::PdfFileInputStream(__zz_cib_AbiType h)
  : ::PoDoFo::PdfInputStream(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class378(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfFileInputStream::PdfFileInputStream(PdfFileInputStream&& rhs)
  : ::PoDoFo::PdfInputStream(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfFileInputStream::PdfFileInputStream(const ::PoDoFo::PdfFileInputStream& __zz_cib_param0)
  : PoDoFo::PdfFileInputStream(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfFileInputStream::PdfFileInputStream(const char* pszFilename)
  : PoDoFo::PdfFileInputStream(__zz_cib_MyHelper::__zz_cib_New_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pszFilename)>(std::move(pszFilename))))
{}

PoDoFo::PdfFileInputStream::~PdfFileInputStream() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_2(
    h
  );
}

::PoDoFo::pdf_long PoDoFo::PdfFileInputStream::Read(char* pBuffer, ::PoDoFo::pdf_long lLen, ::PoDoFo::pdf_long* __zz_cib_param2) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(
    __zz_cib_MyHelper::Read_3<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_long>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param2)>(std::move(__zz_cib_param2))
    )
  );
}

::PoDoFo::pdf_long PoDoFo::PdfFileInputStream::GetFileLength() {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(
    __zz_cib_MyHelper::GetFileLength_4<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_long>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

FILE* PoDoFo::PdfFileInputStream::GetHandle() {
  return __zz_cib_::__zz_cib_FromAbiType<FILE*>(
    __zz_cib_MyHelper::GetHandle_5<__zz_cib_::__zz_cib_AbiType_t<FILE*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}
}
namespace PoDoFo {

PoDoFo::PdfMemoryInputStream::PdfMemoryInputStream(__zz_cib_AbiType h)
  : ::PoDoFo::PdfInputStream(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class378(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfMemoryInputStream::PdfMemoryInputStream(PdfMemoryInputStream&& rhs)
  : ::PoDoFo::PdfInputStream(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfMemoryInputStream::PdfMemoryInputStream(const ::PoDoFo::PdfMemoryInputStream& __zz_cib_param0)
  : PoDoFo::PdfMemoryInputStream(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfMemoryInputStream::PdfMemoryInputStream(const char* pBuffer, ::PoDoFo::pdf_long lBufferLen)
  : PoDoFo::PdfMemoryInputStream(__zz_cib_MyHelper::__zz_cib_New_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(lBufferLen)>(std::move(lBufferLen))))
{}

PoDoFo::PdfMemoryInputStream::~PdfMemoryInputStream() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_2(
    h
  );
}

::PoDoFo::pdf_long PoDoFo::PdfMemoryInputStream::Read(char* pBuffer, ::PoDoFo::pdf_long lLen, ::PoDoFo::pdf_long* __zz_cib_param2) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(
    __zz_cib_MyHelper::Read_3<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_long>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param2)>(std::move(__zz_cib_param2))
    )
  );
}
}
namespace PoDoFo {

PoDoFo::PdfDeviceInputStream::PdfDeviceInputStream(__zz_cib_AbiType h)
  : ::PoDoFo::PdfInputStream(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class378(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfDeviceInputStream::PdfDeviceInputStream(PdfDeviceInputStream&& rhs)
  : ::PoDoFo::PdfInputStream(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_AddProxy(this, __zz_cib_h_);
}

PoDoFo::PdfDeviceInputStream::PdfDeviceInputStream(const ::PoDoFo::PdfDeviceInputStream& __zz_cib_param0)
  : PoDoFo::PdfDeviceInputStream(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

PoDoFo::PdfDeviceInputStream::PdfDeviceInputStream(::PoDoFo::PdfInputDevice* pDevice)
  : PoDoFo::PdfDeviceInputStream(__zz_cib_MyHelper::__zz_cib_New_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(pDevice)>(std::move(pDevice))))
{}

PoDoFo::PdfDeviceInputStream::~PdfDeviceInputStream() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_2(
    h
  );
}

::PoDoFo::pdf_long PoDoFo::PdfDeviceInputStream::Read(char* pBuffer, ::PoDoFo::pdf_long lLen, ::PoDoFo::pdf_long* __zz_cib_param2) {
  return __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(
    __zz_cib_MyHelper::Read_3<__zz_cib_::__zz_cib_AbiType_t<::PoDoFo::pdf_long>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen)),
      __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param2)>(std::move(__zz_cib_param2))
    )
  );
}
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template<>
class __zz_cib_Generic<::PoDoFo::PdfInputStream> : public ::PoDoFo::PdfInputStream {
  using __zz_cib_MethodId = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class378::__zz_cib_MethodId;
  static __zz_cib_MethodTableHelper& __zz_cib_GetMethodTableHelper() {
    static __zz_cib_MethodTableHelper mtableHelper(__zz_cib_CibPoDoFoGetMethodTable(
      __zz_cib_ids::__zz_cib_Class333::__zz_cib_Class378::__zz_cib_classId));
    return mtableHelper;
  }
  explicit __zz_cib_Generic(__zz_cib_AbiType h) : ::PoDoFo::PdfInputStream(h) {}
public:
  static ::PoDoFo::PdfInputStream* __zz_cib_FromHandle(__zz_cib_AbiType h) {
    return new __zz_cib_Generic(h);
  }
  ::PoDoFo::pdf_long Read(char* pBuffer, ::PoDoFo::pdf_long lLen, ::PoDoFo::pdf_long* pTotalLeft) override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<::PoDoFo::pdf_long>(__zz_cib_decl *) (__zz_cib_AbiType, __zz_cib_AbiType_t<decltype(pBuffer)>, __zz_cib_AbiType_t<decltype(lLen)>, __zz_cib_AbiType_t<decltype(pTotalLeft)>);
    return __zz_cib_FromAbiType<::PoDoFo::pdf_long>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::Read_2>(
        __zz_cib_h,
        __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(pTotalLeft)>(std::move(pTotalLeft))
      )
    );
  }
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    auto __zz_cib_h = __zz_cib_Helper<::PoDoFo::PdfInputStream>::__zz_cib_ReleaseHandle(this);
    using __zz_cib_ProcType = void(__zz_cib_decl *) (__zz_cib_AbiType);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_Delete_1>(
      __zz_cib_h
    );
  }
};
}

namespace __zz_cib_ {
template<>
::PoDoFo::PdfInputStream* __zz_cib_Helper<::PoDoFo::PdfInputStream>::__zz_cib_CreateProxy(__zz_cib_AbiType h) {
  switch(__zz_cib_GetClassId(&h)) {
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class379::__zz_cib_classId:
    return __zz_cib_Helper<PoDoFo::PdfFileInputStream>::__zz_cib_FromHandle(
      __zz_cib_Helper<PoDoFo::PdfFileInputStream>::__zz_cib_CastFrom__zz_cib_Class378(h)
    );
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class380::__zz_cib_classId:
    return __zz_cib_Helper<PoDoFo::PdfMemoryInputStream>::__zz_cib_FromHandle(
      __zz_cib_Helper<PoDoFo::PdfMemoryInputStream>::__zz_cib_CastFrom__zz_cib_Class378(h)
    );
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class381::__zz_cib_classId:
    return __zz_cib_Helper<PoDoFo::PdfDeviceInputStream>::__zz_cib_FromHandle(
      __zz_cib_Helper<PoDoFo::PdfDeviceInputStream>::__zz_cib_CastFrom__zz_cib_Class378(h)
    );
  default: break;
  }
  auto* const __zz_cib_obj = ::__zz_cib_::__zz_cib_Generic<::PoDoFo::PdfInputStream>::__zz_cib_FromHandle(h);
  return __zz_cib_obj;
}
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfInputStream> {
  using __zz_cib_Delegatee = ::PoDoFo::PdfInputStream;
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl Read_0(::PoDoFo::PdfInputStream* __zz_cib_obj, __zz_cib_AbiType_t<char*> pBuffer, __zz_cib_AbiType_t<::PoDoFo::pdf_long> lLen, __zz_cib_AbiType_t<::PoDoFo::pdf_long*> pTotalLeft) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->Read(
        __zz_cib_::__zz_cib_FromAbiType<char*>(pBuffer),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(lLen),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long*>(pTotalLeft)
      )
    );
  }
  static void __zz_cib_decl __zz_cib_Delete_1(::PoDoFo::PdfInputStream* __zz_cib_obj) {
    __zz_cib_Helper_t<::PoDoFo::PdfInputStream>::__zz_cib_ReleaseHandle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class378 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInputStream>::Read_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInputStream>::__zz_cib_Delete_1)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 2 };
  return &methodTable;
}
}}}

namespace __zz_cib_ {
template<>
const __zz_cib_MethodTable* __zz_cib_Helper<::PoDoFo::PdfInputStream>::__zz_cib_GetProxyMethodTable() {
  return __zz_cib_::__zz_cib_Class333::__zz_cib_Class378::__zz_cib_GetMethodTable();
}
}

