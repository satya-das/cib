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
#include "__zz_cib_Example-proxy.h"

namespace __zz_cib_ { namespace __zz_cib_Class256 {
namespace __zz_cib_GenericProxy {
class SkRefCntBase : public ::SkRefCntBase {
  __zz_cib_PROXY* __zz_cib_proxy;
  const __zz_cib_MethodTableHelper __zz_cib_mtbl_helper;

  const __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() const {
    return __zz_cib_mtbl_helper;
  }
public:
  __ZZ_CIB_DELEGATOR_MEMBERS(SkRefCntBase, ::SkRefCntBase)

  SkRefCntBase(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl)
    : ::SkRefCntBase::SkRefCntBase()
    , __zz_cib_proxy(proxy)
    , __zz_cib_mtbl_helper(mtbl)
  {}
  void internal_dispose() const override {
    using __zz_cib_proc = void (__zz_cib_decl *) (const __zz_cib_PROXY*);
    return __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_GenericProxy::__zz_cib_methodid::internal_dispose>(
      __zz_cib_proxy);
  }
  ~SkRefCntBase() override {
    if (!__zz_cib_proxy) return;
    using __zz_cib_proc = void (__zz_cib_decl *) (__zz_cib_PROXY*);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_GenericProxy::__zz_cib_methodid::__zz_cib_delete>(
      __zz_cib_proxy);
  }
  void __zz_cib_release_proxy() { __zz_cib_proxy = nullptr; }
};
}}}
namespace __zz_cib_ { namespace __zz_cib_Class256 {
namespace __zz_cib_Delegator {
using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Class256::__zz_cib_GenericProxy::SkRefCntBase;
static ::SkRefCntBase* __zz_cib_decl __zz_cib_new(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl) {
  return new __zz_cib_::__zz_cib_Class256::__zz_cib_GenericProxy::SkRefCntBase(proxy, mtbl);
}
static void __zz_cib_decl __zz_cib_delete(__zz_cib_Delegatee* __zz_cib_obj) {
  delete __zz_cib_obj;
}
static void __zz_cib_decl ref(const __zz_cib_Delegatee* __zz_cib_obj) {
  __zz_cib_obj->::SkRefCntBase::ref();
}
static void __zz_cib_decl unref(const __zz_cib_Delegatee* __zz_cib_obj) {
  __zz_cib_obj->::SkRefCntBase::unref();
}
static void __zz_cib_decl internal_dispose(const __zz_cib_Delegatee* __zz_cib_obj) {
  __zz_cib_obj->::SkRefCntBase::internal_dispose();
}
static std::uint32_t __zz_cib_decl __zz_cib_get_class_id(::SkRefCntBase** __zz_cib_obj) {
  static bool classIdRepoPopulated = false;
  if (!classIdRepoPopulated) {
    __zz_cib_gClassIdRepo[std::type_index(typeid(::I))] = __zz_cib_::__zz_cib_Class258::__zz_cib_classid;
    __zz_cib_gClassIdRepo[std::type_index(typeid(::SkRefCntBase))] = __zz_cib_::__zz_cib_Class256::__zz_cib_classid;
    classIdRepoPopulated = true;
  }
  auto tdx = std::type_index(typeid(**__zz_cib_obj));
  auto itr = __zz_cib_gClassIdRepo.find(tdx);
  if (itr != __zz_cib_gClassIdRepo.end()) return itr->second;
  {
    auto* obj = dynamic_cast<::I*>(*__zz_cib_obj);
    if (obj) {
      *__zz_cib_obj = obj;
      return __zz_cib_gClassIdRepo[tdx] = __zz_cib_::__zz_cib_Class258::__zz_cib_classid;
    }
  }
  return __zz_cib_::__zz_cib_Class256::__zz_cib_classid;
}
static void __zz_cib_decl __zz_cib_release_proxy(::SkRefCntBase* __zz_cib_obj) {
  auto unknownProxy = dynamic_cast<__zz_cib_::__zz_cib_Class256::__zz_cib_GenericProxy::SkRefCntBase*>(__zz_cib_obj);
  if (unknownProxy)
    unknownProxy->__zz_cib_release_proxy();
}
}
}}

namespace __zz_cib_ { namespace __zz_cib_Class256 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::ref),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::unref),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::internal_dispose),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_get_class_id),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_release_proxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 7 };
  return &methodTable;
}
}}
