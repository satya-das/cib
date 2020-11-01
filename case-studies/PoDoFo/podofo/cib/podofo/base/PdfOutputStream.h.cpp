#include "podofo/base/PdfCompilerCompat.h"
#include "podofo/base/PdfOutputDevice.h"
#include "podofo/base/PdfOutputStream.h"
#include "podofo/base/PdfRefCountedBuffer.h"

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
class __zz_cib_Generic<::PoDoFo::PdfOutputStream> : public ::PoDoFo::PdfOutputStream {
public:
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfOutputStream>;

  using __zz_cib_ProxyDeleter = __zz_cib_ProxyDeleter_t<::PoDoFo::PdfOutputStream>;

  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_GetMethodTable)
    : ::PoDoFo::PdfOutputStream::PdfOutputStream()
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_methodTableHelper(__zz_cib_GetMethodTable)
  {}
  void Close() override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_Proxy);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::Close_0>(
      __zz_cib_h
    );
  }
  ::PoDoFo::pdf_long Write(const char* pBuffer, ::PoDoFo::pdf_long lLen) override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<::PoDoFo::pdf_long>(__zz_cib_decl *) (__zz_cib_Proxy, __zz_cib_AbiType_t<decltype(pBuffer)>, __zz_cib_AbiType_t<decltype(lLen)>);
    return __zz_cib_FromAbiType<::PoDoFo::pdf_long>(
      __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::Write_1>(
        __zz_cib_h,
        __zz_cib_::__zz_cib_ToAbiType<decltype(pBuffer)>(std::move(pBuffer)),
        __zz_cib_::__zz_cib_ToAbiType<decltype(lLen)>(std::move(lLen))
      )
    );
  }
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = void(__zz_cib_decl *) (__zz_cib_Proxy);
    __zz_cib_GetMethodTableHelper().Invoke<__zz_cib_ProcType, __zz_cib_MethodId::__zz_cib_Delete_2>(
      __zz_cib_h
    );
  }
  void __zz_cib_ReleaseProxy() { __zz_cib_h_ = nullptr; }
  __ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib_Generic, ::PoDoFo::PdfOutputStream)

private:
  __zz_cib_Proxy __zz_cib_h_;
  const __zz_cib_MethodTableHelper __zz_cib_methodTableHelper;

  const __zz_cib_MethodTableHelper& __zz_cib_GetMethodTableHelper() const {
    return __zz_cib_methodTableHelper;
  }
  using __zz_cib_MethodId = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class387::__zz_cib_Generic::__zz_cib_MethodId;
};
}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfOutputStream> : public ::PoDoFo::PdfOutputStream {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfOutputStream>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::PoDoFo::PdfOutputStream>;

  using ::PoDoFo::PdfOutputStream::PdfOutputStream;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_GetMethodTable) {
    return new __zz_cib_::__zz_cib_Generic<::PoDoFo::PdfOutputStream>(__zz_cib_proxy, __zz_cib_GetMethodTable);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl Write_2(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pBuffer, __zz_cib_AbiType_t<::PoDoFo::pdf_long> lLen) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->Write(
        __zz_cib_::__zz_cib_FromAbiType<const char*>(pBuffer),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(lLen)
      )
    );
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl Write_3(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const std::string&> s) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->::PoDoFo::PdfOutputStream::Write(
        __zz_cib_::__zz_cib_FromAbiType<const std::string&>(s)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Close_4(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->Close();
  }
  static std::uint32_t __zz_cib_decl __zz_cib_GetClassId(::PoDoFo::PdfOutputStream** __zz_cib_obj) {
    static bool classIdRepoPopulated = false;
    if (!classIdRepoPopulated) {
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfFileOutputStream))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class388::__zz_cib_classId;
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfMemoryOutputStream))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class389::__zz_cib_classId;
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfDeviceOutputStream))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class390::__zz_cib_classId;
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfBufferOutputStream))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class391::__zz_cib_classId;
      __zz_cib_gClassIdRepo[std::type_index(typeid(::PoDoFo::PdfOutputStream))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class387::__zz_cib_classId;
      classIdRepoPopulated = true;
    }
    auto tdx = std::type_index(typeid(**__zz_cib_obj));
    auto itr = __zz_cib_gClassIdRepo.find(tdx);
    if (itr != __zz_cib_gClassIdRepo.end()) return itr->second;
    {
      auto* obj = dynamic_cast<::PoDoFo::PdfFileOutputStream*>(*__zz_cib_obj);
      if (obj) {
        *__zz_cib_obj = obj;
        return __zz_cib_gClassIdRepo[tdx] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class388::__zz_cib_classId;
      }
    }
    {
      auto* obj = dynamic_cast<::PoDoFo::PdfMemoryOutputStream*>(*__zz_cib_obj);
      if (obj) {
        *__zz_cib_obj = obj;
        return __zz_cib_gClassIdRepo[tdx] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class389::__zz_cib_classId;
      }
    }
    {
      auto* obj = dynamic_cast<::PoDoFo::PdfDeviceOutputStream*>(*__zz_cib_obj);
      if (obj) {
        *__zz_cib_obj = obj;
        return __zz_cib_gClassIdRepo[tdx] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class390::__zz_cib_classId;
      }
    }
    {
      auto* obj = dynamic_cast<::PoDoFo::PdfBufferOutputStream*>(*__zz_cib_obj);
      if (obj) {
        *__zz_cib_obj = obj;
        return __zz_cib_gClassIdRepo[tdx] = __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class391::__zz_cib_classId;
      }
    }
    return __zz_cib_::__zz_cib_ids::__zz_cib_Class333::__zz_cib_Class387::__zz_cib_classId;
  }
  static void __zz_cib_decl __zz_cib_ReleaseProxy(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->__zz_cib_ReleaseProxy();
}
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class387 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutputStream>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutputStream>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutputStream>::Write_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutputStream>::Write_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutputStream>::Close_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutputStream>::__zz_cib_GetClassId),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfOutputStream>::__zz_cib_ReleaseProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 7 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfFileOutputStream> : public ::PoDoFo::PdfFileOutputStream {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFileOutputStream>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::PoDoFo::PdfFileOutputStream::PdfFileOutputStream;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<const char*> pszFilename) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<const char*>(pszFilename));
  }
  static void __zz_cib_decl __zz_cib_Delete_2(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl Write_3(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pBuffer, __zz_cib_AbiType_t<::PoDoFo::pdf_long> lLen) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->::PoDoFo::PdfFileOutputStream::Write(
        __zz_cib_::__zz_cib_FromAbiType<const char*>(pBuffer),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(lLen)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Close_4(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfFileOutputStream::Close();
  }
  static ::PoDoFo::PdfOutputStream* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class387(::PoDoFo::PdfFileOutputStream* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfFileOutputStream* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class387(::PoDoFo::PdfOutputStream* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfFileOutputStream*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class388 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFileOutputStream>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFileOutputStream>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFileOutputStream>::__zz_cib_Delete_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFileOutputStream>::Write_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFileOutputStream>::Close_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFileOutputStream>::__zz_cib_CastTo__zz_cib_Class387),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfFileOutputStream>::__zz_cib_CastFrom__zz_cib_Class387)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 7 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfMemoryOutputStream> : public ::PoDoFo::PdfMemoryOutputStream {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemoryOutputStream>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::PoDoFo::PdfMemoryOutputStream::PdfMemoryOutputStream;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_1(__zz_cib_AbiType_t<::PoDoFo::pdf_long> lInitial) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(lInitial));
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<char*> pBuffer, __zz_cib_AbiType_t<::PoDoFo::pdf_long> lLen) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<char*>(pBuffer),
    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(lLen));
  }
  static void __zz_cib_decl __zz_cib_Delete_3(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl Write_4(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pBuffer, __zz_cib_AbiType_t<::PoDoFo::pdf_long> lLen) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->::PoDoFo::PdfMemoryOutputStream::Write(
        __zz_cib_::__zz_cib_FromAbiType<const char*>(pBuffer),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(lLen)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Close_5(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfMemoryOutputStream::Close();
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl GetLength_6(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->::PoDoFo::PdfMemoryOutputStream::GetLength()
    );
  }
  static __zz_cib_AbiType_t<char*> __zz_cib_decl TakeBuffer_7(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<char*>(
      __zz_cib_obj->::PoDoFo::PdfMemoryOutputStream::TakeBuffer()
    );
  }
  static ::PoDoFo::PdfOutputStream* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class387(::PoDoFo::PdfMemoryOutputStream* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfMemoryOutputStream* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class387(::PoDoFo::PdfOutputStream* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfMemoryOutputStream*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class389 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemoryOutputStream>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemoryOutputStream>::__zz_cib_New_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemoryOutputStream>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemoryOutputStream>::__zz_cib_Delete_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemoryOutputStream>::Write_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemoryOutputStream>::Close_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemoryOutputStream>::GetLength_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemoryOutputStream>::TakeBuffer_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemoryOutputStream>::__zz_cib_CastTo__zz_cib_Class387),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfMemoryOutputStream>::__zz_cib_CastFrom__zz_cib_Class387)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 10 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfDeviceOutputStream> : public ::PoDoFo::PdfDeviceOutputStream {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDeviceOutputStream>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::PoDoFo::PdfDeviceOutputStream::PdfDeviceOutputStream;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<::PoDoFo::PdfOutputDevice*> pDevice) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfOutputDevice*>(pDevice));
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl Write_3(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pBuffer, __zz_cib_AbiType_t<::PoDoFo::pdf_long> lLen) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->::PoDoFo::PdfDeviceOutputStream::Write(
        __zz_cib_::__zz_cib_FromAbiType<const char*>(pBuffer),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(lLen)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Close_4(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfDeviceOutputStream::Close();
  }
  static ::PoDoFo::PdfOutputStream* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class387(::PoDoFo::PdfDeviceOutputStream* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfDeviceOutputStream* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class387(::PoDoFo::PdfOutputStream* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfDeviceOutputStream*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class390 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDeviceOutputStream>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDeviceOutputStream>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDeviceOutputStream>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDeviceOutputStream>::Write_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDeviceOutputStream>::Close_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDeviceOutputStream>::__zz_cib_CastTo__zz_cib_Class387),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfDeviceOutputStream>::__zz_cib_CastFrom__zz_cib_Class387)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 7 };
  return &methodTable;
}
}}}
namespace __zz_cib_ {
using namespace ::PoDoFo;
template <>
struct __zz_cib_Delegator<::PoDoFo::PdfBufferOutputStream> : public ::PoDoFo::PdfBufferOutputStream {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfBufferOutputStream>;
  using __zz_cib_AbiType = __zz_cib_Delegatee*;

  using ::PoDoFo::PdfBufferOutputStream::PdfBufferOutputStream;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2(__zz_cib_AbiType_t<::PoDoFo::PdfRefCountedBuffer*> pBuffer) {
    return new __zz_cib_Delegatee(    __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::PdfRefCountedBuffer*>(pBuffer));
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl Write_3(__zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<const char*> pBuffer, __zz_cib_AbiType_t<::PoDoFo::pdf_long> lLen) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->::PoDoFo::PdfBufferOutputStream::Write(
        __zz_cib_::__zz_cib_FromAbiType<const char*>(pBuffer),
        __zz_cib_::__zz_cib_FromAbiType<::PoDoFo::pdf_long>(lLen)
      )
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl Close_4(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::PoDoFo::PdfBufferOutputStream::Close();
  }
  static __zz_cib_AbiType_t<::PoDoFo::pdf_long> __zz_cib_decl GetLength_5(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::PoDoFo::pdf_long>(
      __zz_cib_obj->::PoDoFo::PdfBufferOutputStream::GetLength()
    );
  }
  static ::PoDoFo::PdfOutputStream* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class387(::PoDoFo::PdfBufferOutputStream* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::PoDoFo::PdfBufferOutputStream* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class387(::PoDoFo::PdfOutputStream* __zz_cib_obj) {
    return __zz_cib_DownCast<::PoDoFo::PdfBufferOutputStream*>(__zz_cib_obj);
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class333 {
using namespace ::PoDoFo;
namespace __zz_cib_Class391 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfBufferOutputStream>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfBufferOutputStream>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfBufferOutputStream>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfBufferOutputStream>::Write_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfBufferOutputStream>::Close_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfBufferOutputStream>::GetLength_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfBufferOutputStream>::__zz_cib_CastTo__zz_cib_Class387),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PoDoFo::PdfBufferOutputStream>::__zz_cib_CastFrom__zz_cib_Class387)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 8 };
  return &methodTable;
}
}}}
