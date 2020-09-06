#include "SkRefCnt.h"


SkRefCntBase::SkRefCntBase(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

SkRefCntBase::SkRefCntBase()
  : SkRefCntBase(__zz_cib_MyHelper::__zz_cib_new_0(
    this))
  {}

SkRefCntBase::~SkRefCntBase() {
__zz_cib_MyHelper::__zz_cib_release_proxy(this);
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete_1(
    h
  );
}

void SkRefCntBase::ref() const {
  __zz_cib_MyHelper::ref_2<__zz_cib_::__zz_cib_RValueAbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
  );
}

void SkRefCntBase::unref() const {
  __zz_cib_MyHelper::unref_3<__zz_cib_::__zz_cib_RValueAbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
  );
}

void SkRefCntBase::internal_dispose() const {
  __zz_cib_MyHelper::internal_dispose_4<__zz_cib_::__zz_cib_RValueAbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
  );
}

namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::SkRefCntBase> {
  using __zz_cib_Delegatee = ::SkRefCntBase;
  static __zz_cib_RValueAbiType_t<void> __zz_cib_decl internal_dispose_0(const ::SkRefCntBase* __zz_cib_obj) {
    __zz_cib_obj->internal_dispose();
  }
  static void __zz_cib_decl __zz_cib_delete_1(::SkRefCntBase* __zz_cib_obj) {
    __zz_cib_Helper<::SkRefCntBase>::__zz_cib_release_handle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class258 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::SkRefCntBase>::internal_dispose_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::SkRefCntBase>::__zz_cib_delete_1)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 2 };
  return &methodTable;
}
}}

namespace __zz_cib_ {
template<>
const __zz_cib_MethodTable* __zz_cib_Helper<::SkRefCntBase>::__zz_cib_get_proxy_method_table() {
  return __zz_cib_::__zz_cib_Class258::__zz_cib_GetMethodTable();
}
}

