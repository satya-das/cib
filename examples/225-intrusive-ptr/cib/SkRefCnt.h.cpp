#include "SkRefCnt.h"

#include "__zz_cib_Example-class-down-cast.h"
#include "__zz_cib_Example-delegate-helper.h"
#include "__zz_cib_Example-generic.h"
#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-type-converters.h"
#include "__zz_cib_Example-mtable-helper.h"

namespace __zz_cib_ {
template <>
class __zz_cib_Generic<::SkRefCntBase> : public ::SkRefCntBase {
public:
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::SkRefCntBase>;

  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl)
    : ::SkRefCntBase::SkRefCntBase()
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_mtbl_helper(__zz_cib_mtbl)
  {}
  void internal_dispose() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (const __zz_cib_Proxy);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::internal_dispose_0>(
      __zz_cib_h_
    );
  }
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    using __zz_cib_proc = void(__zz_cib_decl *) (__zz_cib_Proxy);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_delete_1>(
      __zz_cib_h_
    );
  }
  void __zz_cib_release_proxy() { __zz_cib_h_ = nullptr; }
  __ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib_Generic, ::SkRefCntBase)

private:
  __zz_cib_Proxy __zz_cib_h_;
  const __zz_cib_MethodTableHelper __zz_cib_mtbl_helper;

  const __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() const {
    return __zz_cib_mtbl_helper;
  }
  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class258::__zz_cib_Generic::__zz_cib_methodid;
};
}
namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::SkRefCntBase> : public ::SkRefCntBase {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Generic<::SkRefCntBase>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::SkRefCntBase::SkRefCntBase;

  using __zz_cib_Proxy = __zz_cib_Delegatee::__zz_cib_Proxy;
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_new_0(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_mtbl) {
    return new __zz_cib_::__zz_cib_Generic<::SkRefCntBase>(__zz_cib_proxy, __zz_cib_mtbl);
  }
  static void __zz_cib_decl __zz_cib_delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl ref_2(const __zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::SkRefCntBase::ref();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl unref_3(const __zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::SkRefCntBase::unref();
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl internal_dispose_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::SkRefCntBase::internal_dispose();
  }
  static void __zz_cib_decl __zz_cib_release_proxy(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->__zz_cib_release_proxy();
}
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class258 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::SkRefCntBase>::__zz_cib_new_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::SkRefCntBase>::__zz_cib_delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::SkRefCntBase>::ref_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::SkRefCntBase>::unref_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::SkRefCntBase>::internal_dispose_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::SkRefCntBase>::__zz_cib_release_proxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 6 };
  return &methodTable;
}
}}
