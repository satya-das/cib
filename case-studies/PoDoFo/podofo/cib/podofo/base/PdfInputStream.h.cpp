#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfInputDevice.h"
#include "podofo/base/PdfInputStream.h"

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
template <>
class __zz_cib_Generic<::PoDoFo::PdfInputStream> : public ::PoDoFo::PdfInputStream {
public:
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfInputStream>;

  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::PoDoFo::PdfInputStream>;

  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_GetMethodTable)
    : ::PoDoFo::PdfInputStream::PdfInputStream()
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_methodTableHelper(__zz_cib_GetMethodTable)
  {}
  ::PoDoFo::pdf_long Read(char* pBuffer, ::PoDoFo::pdf_long lLen, ::PoDoFo::pdf_long* pTotalLeft) override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<::PoDoFo::pdf_long>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(pBuffer)>, __zz_cib_AbiType_t<decltype(lLen)>, __zz_cib_AbiType_t<decltype(pTotalLeft)>);
    return __zz_cib_FromAbiType<::PoDoFo::pdf_long>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::Read_0>(
        __zz_cib_h,
        __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(pTotalLeft)>(std::move(pTotalLeft))
      )
    );
  }
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = void(__zz_cib_decl *) (__zz_cib_Proxy);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_Delete_1>(
      __zz_cib_h
    );
  }
  void __zz_cib_ReleaseProxy() { __zz_cib_h_ = nullptr; }
  __ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib_Generic, ::PoDoFo::PdfInputStream)

private:
  __zz_cib_Proxy __zz_cib_h_;
  const __zz_cib_MethodTableHelper __zz_cib_methodTableHelper;

  const __zz_cib_MethodTableHelper& __zz_cib_GetMethodTableHelper() const {
    return __zz_cib_methodTableHelper;
  }
  using __zz_cib_MethodId = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class378::__zz_cib_Generic::__zz_cib_MethodId;
};
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfInputStream> : public ::PoDoFo::PdfInputStream {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfInputStream>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfInputStream>;

  using ::PoDoFo::PdfInputStream::PdfInputStream;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_GetMethodTable) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfInputStream>(__zz_cib_proxy, __zz_cib_GetMethodTable);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl Read_2(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<char*> pBuffer, __zz_cib_AbiType_t<::PoDoFo::pdf_long> lLen, __zz_cib_AbiType_t<::PoDoFo::pdf_long*> pTotalLeft) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->Read(
        __zz_cib_::__zz_cib_FromAbiType<char*>(pBuffer),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(lLen),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long*>(pTotalLeft)
      )
    );
  }
  static std::uint32_t __zz_cib_decl __zz_cib_GetClassId(::PoDoFo::PdfInputStream** __zz_cib_obj) {
    static bool classIdRepoPopulated = false;
    if (!classIdRepoPopulated) {
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfFileInputStream))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class379::__zz_cib_classId;
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfMemoryInputStream))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class380::__zz_cib_classId;
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfDeviceInputStream))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class381::__zz_cib_classId;
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfInputStream))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class378::__zz_cib_classId;
      classIdRepoPopulated = true;
    }
    auto tdx = std::type_index(typeid(**__zz_cib_obj));
    auto itr = __zz_cib_gClassIdRepo.find(tdx);
    if (itr != __zz_cib_gClassIdRepo.end()) return itr->second;
    {
      auto* obj = dynamic_cast<::PoDoFo::PdfFileInputStream*>(*__zz_cib_obj);
      if (obj) {
        *__zz_cib_obj = obj;
        return __zz_cib_gClassIdRepo[tdx] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class379::__zz_cib_classId;
      }
    }
    {
      auto* obj = dynamic_cast<::PoDoFo::PdfMemoryInputStream*>(*__zz_cib_obj);
      if (obj) {
        *__zz_cib_obj = obj;
        return __zz_cib_gClassIdRepo[tdx] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class380::__zz_cib_classId;
      }
    }
    {
      auto* obj = dynamic_cast<::PoDoFo::PdfDeviceInputStream*>(*__zz_cib_obj);
      if (obj) {
        *__zz_cib_obj = obj;
        return __zz_cib_gClassIdRepo[tdx] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class381::__zz_cib_classId;
      }
    }
    return __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class378::__zz_cib_classId;
  }
  static void __zz_cib_decl __zz_cib_ReleaseProxy(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->__zz_cib_ReleaseProxy();
}
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class378 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInputStream>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInputStream>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInputStream>::Read_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInputStream>::__zz_cib_GetClassId),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfInputStream>::__zz_cib_ReleaseProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 5 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfFileInputStream> : public ::PoDoFo::PdfFileInputStream {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFileInputStream>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::PoDoFo::PdfFileInputStream::PdfFileInputStream;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<const char*> pszFilename) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFilename));
  }
  static void __zz_cib_decl __zz_cib_Delete_2(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl Read_3(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<char*> pBuffer, __zz_cib_AbiType_t<::PoDoFo::pdf_long> lLen, __zz_cib_AbiType_t<::PoDoFo::pdf_long*> __zz_cib_param2) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->::PoDoFo::PdfFileInputStream::Read(
        __zz_cib_::__zz_cib_FromAbiType<char*>(pBuffer),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(lLen),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long*>(__zz_cib_param2)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl GetFileLength_4(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->::PoDoFo::PdfFileInputStream::GetFileLength()
    );
  }
  static __zz_cib_AbiType_t<FILE*> __zz_cib_decl GetHandle_5(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<FILE*>(
      __zz_cib_obj->::PoDoFo::PdfFileInputStream::GetHandle()
    );
  }
  static ::PoDoFo::PdfInputStream* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class378(::PoDoFo::PdfFileInputStream* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfFileInputStream* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class378(::PoDoFo::PdfInputStream* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfFileInputStream*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class379 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFileInputStream>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFileInputStream>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFileInputStream>::__zz_cib_Delete_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFileInputStream>::Read_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFileInputStream>::GetFileLength_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFileInputStream>::GetHandle_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFileInputStream>::__zz_cib_CastTo__zz_cib_Class378),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFileInputStream>::__zz_cib_CastFrom__zz_cib_Class378)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 8 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfMemoryInputStream> : public ::PoDoFo::PdfMemoryInputStream {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemoryInputStream>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::PoDoFo::PdfMemoryInputStream::PdfMemoryInputStream;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<const char*> pBuffer, __zz_cib_AbiType_t<::PoDoFo::pdf_long> lBufferLen) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const char*>(pBuffer),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(lBufferLen));
  }
  static void __zz_cib_decl __zz_cib_Delete_2(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl Read_3(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<char*> pBuffer, __zz_cib_AbiType_t<::PoDoFo::pdf_long> lLen, __zz_cib_AbiType_t<::PoDoFo::pdf_long*> __zz_cib_param2) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->::PoDoFo::PdfMemoryInputStream::Read(
        __zz_cib_::__zz_cib_FromAbiType<char*>(pBuffer),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(lLen),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long*>(__zz_cib_param2)
      )
    );
  }
  static ::PoDoFo::PdfInputStream* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class378(::PoDoFo::PdfMemoryInputStream* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfMemoryInputStream* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class378(::PoDoFo::PdfInputStream* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfMemoryInputStream*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class380 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemoryInputStream>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemoryInputStream>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemoryInputStream>::__zz_cib_Delete_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemoryInputStream>::Read_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemoryInputStream>::__zz_cib_CastTo__zz_cib_Class378),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemoryInputStream>::__zz_cib_CastFrom__zz_cib_Class378)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 6 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfDeviceInputStream> : public ::PoDoFo::PdfDeviceInputStream {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDeviceInputStream>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::PoDoFo::PdfDeviceInputStream::PdfDeviceInputStream;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<::PoDoFo::PdfInputDevice*> pDevice) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfInputDevice*>(pDevice));
  }
  static void __zz_cib_decl __zz_cib_Delete_2(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl Read_3(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<char*> pBuffer, __zz_cib_AbiType_t<::PoDoFo::pdf_long> lLen, __zz_cib_AbiType_t<::PoDoFo::pdf_long*> __zz_cib_param2) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->::PoDoFo::PdfDeviceInputStream::Read(
        __zz_cib_::__zz_cib_FromAbiType<char*>(pBuffer),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(lLen),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long*>(__zz_cib_param2)
      )
    );
  }
  static ::PoDoFo::PdfInputStream* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class378(::PoDoFo::PdfDeviceInputStream* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfDeviceInputStream* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class378(::PoDoFo::PdfInputStream* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfDeviceInputStream*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class381 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDeviceInputStream>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDeviceInputStream>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDeviceInputStream>::__zz_cib_Delete_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDeviceInputStream>::Read_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDeviceInputStream>::__zz_cib_CastTo__zz_cib_Class378),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDeviceInputStream>::__zz_cib_CastFrom__zz_cib_Class378)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 6 };
  return &methodTable;
}
}}}
