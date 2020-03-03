#include "SkRefCnt.h"
#include "example.h"

#include <typeinfo>
#include <typeindex>
#include <cstdint>
#include <unordered_map>

extern std::unordered_map<std::type_index, std::uint32_t> __zz_cib_gClassIdRepo;

#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_Example-delegate-helper.h"
#include "__zz_cib_Example-generic.h"
#include "__zz_cib_Example-library-type-handler.h"

namespace __zz_cib_ {
template <>
class __zz_cib_Generic<::SkRefCntBase> : public ::SkRefCntBase {
public:
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::SkRefCntBase>;

  __zz_cib_Generic(__zz_cib_Proxy proxy, const __zz_cib_MethodTable* mtbl)
    : ::SkRefCntBase::SkRefCntBase()
    , __zz_cib_h_(proxy)
    , __zz_cib_mtbl_helper(mtbl)
  {}
  void internal_dispose() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (const __zz_cib_Proxy);
        __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::internal_dispose>(
      __zz_cib_h_);
  }
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    using __zz_cib_proc = void(__zz_cib_decl *) (__zz_cib_Proxy);
        __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_delete>(
      __zz_cib_h_);
  }
  void __zz_cib_release_proxy() { __zz_cib_h_ = nullptr; }
  __ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib_Generic, ::SkRefCntBase)

private:
  __zz_cib_Proxy __zz_cib_h_;
  const __zz_cib_MethodTableHelper __zz_cib_mtbl_helper;

  const __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() const {
    return __zz_cib_mtbl_helper;
  }
  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class257::__zz_cib_Generic::__zz_cib_methodid;
};
}
namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::SkRefCntBase> : public ::SkRefCntBase {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Generic<::SkRefCntBase>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_Proxy = __zz_cib_Delegatee::__zz_cib_Proxy;
  static ::SkRefCntBase* __zz_cib_decl __zz_cib_new(__zz_cib_Proxy proxy, const __zz_cib_MethodTable* mtbl) {
    return new __zz_cib_::__zz_cib_Generic<::SkRefCntBase>(proxy, mtbl);
  }
  static void __zz_cib_decl __zz_cib_delete(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl ref(const __zz_cib_Delegatee* __zz_cib_obj) {
        __zz_cib_obj->::SkRefCntBase::ref();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl unref(const __zz_cib_Delegatee* __zz_cib_obj) {
        __zz_cib_obj->::SkRefCntBase::unref();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl internal_dispose(const __zz_cib_Delegatee* __zz_cib_obj) {
        __zz_cib_obj->::SkRefCntBase::internal_dispose();
  }
  static std::uint32_t __zz_cib_decl __zz_cib_get_class_id(::SkRefCntBase** __zz_cib_obj) {
    static bool classIdRepoPopulated = false;
    if (!classIdRepoPopulated) {
      __zz_cib_gClassIdRepo[std::type_index(typeid(::I))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class258::__zz_cib_classid;
      __zz_cib_gClassIdRepo[std::type_index(typeid(::SkRefCntBase))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class257::__zz_cib_classid;
      classIdRepoPopulated = true;
    }
    auto tdx = std::type_index(typeid(**__zz_cib_obj));
    auto itr = __zz_cib_gClassIdRepo.find(tdx);
    if (itr != __zz_cib_gClassIdRepo.end()) return itr->second;
    {
      auto* obj = dynamic_cast<::I*>(*__zz_cib_obj);
      if (obj) {
        *__zz_cib_obj = obj;
        return __zz_cib_gClassIdRepo[tdx] = __zz_cib_::__zz_cib_ids::__zz_cib_Class258::__zz_cib_classid;
      }
    }
    return __zz_cib_::__zz_cib_ids::__zz_cib_Class257::__zz_cib_classid;
  }
  static void __zz_cib_decl __zz_cib_release_proxy(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->__zz_cib_release_proxy();
}
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class257 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::SkRefCntBase>::__zz_cib_new),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::SkRefCntBase>::__zz_cib_delete),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::SkRefCntBase>::ref),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::SkRefCntBase>::unref),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::SkRefCntBase>::internal_dispose),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::SkRefCntBase>::__zz_cib_get_class_id),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::SkRefCntBase>::__zz_cib_release_proxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 7 };
  return &methodTable;
}
}}
