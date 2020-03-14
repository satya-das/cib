#include "SkRefCnt.h"
#include "example.h"

#include "__zz_cib_internal/__zz_cib_Example-generic.h"


SkRefCntBase::SkRefCntBase(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

SkRefCntBase::SkRefCntBase()
  : SkRefCntBase(__zz_cib_MyHelper::__zz_cib_new(
    this))
  {}

SkRefCntBase::~SkRefCntBase() {
__zz_cib_MyHelper::__zz_cib_release_proxy(this);
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete(
    h
  );
}

void SkRefCntBase::ref() const {
  __zz_cib_MyHelper::ref<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
  );
}

void SkRefCntBase::unref() const {
  __zz_cib_MyHelper::unref<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
  );
}

void SkRefCntBase::internal_dispose() const {
  __zz_cib_MyHelper::internal_dispose<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
  );
}

namespace __zz_cib_ {
template<>
class __zz_cib_Generic<::SkRefCntBase> : public ::SkRefCntBase {
  __zz_cib_AbiType __zz_cib_h_;

  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class257::__zz_cib_methodid;
  static __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() {
    static __zz_cib_MethodTableHelper mtableHelper(__zz_cib_Example_GetMethodTable(
      __zz_cib_ids::__zz_cib_Class257::__zz_cib_classid));
    return mtableHelper;
  }
  explicit __zz_cib_Generic(__zz_cib_AbiType h) : ::SkRefCntBase(h), __zz_cib_h_(h) {}
public:
  static ::SkRefCntBase* __zz_cib_from_handle(__zz_cib_AbiType h) {
    return new __zz_cib_Generic(h);
  }
  void internal_dispose() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (const __zz_cib_AbiType);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::internal_dispose>(
      __zz_cib_h_
    );
  }
};
}

namespace __zz_cib_ {
::SkRefCntBase* __zz_cib_Helper<::SkRefCntBase>::__zz_cib_create_proxy(__zz_cib_AbiType h) {
  switch(__zz_cib_get_class_id(&h)) {
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class258::__zz_cib_classid:
    return __zz_cib_Helper<I>::__zz_cib_from_handle(
      __zz_cib_Helper<I>::__zz_cib_cast_from___zz_cib_Class257(h)
    );
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class257::__zz_cib_classid:
    return new ::SkRefCntBase(h);
  default: break;
  }
  return ::__zz_cib_::__zz_cib_Generic<::SkRefCntBase>::__zz_cib_from_handle(h);
}
}
namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::SkRefCntBase> {
  using __zz_cib_Delegatee = ::SkRefCntBase;
  static __zz_cib_AbiType_t<void> __zz_cib_decl internal_dispose(const ::SkRefCntBase* __zz_cib_obj) {
        __zz_cib_obj->internal_dispose();
  }
  static void __zz_cib_decl __zz_cib_delete(::SkRefCntBase* __zz_cib_obj) {
    __zz_cib_Helper<::SkRefCntBase>::__zz_cib_release_handle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class257 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::SkRefCntBase>::internal_dispose),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::SkRefCntBase>::__zz_cib_delete)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 2 };
  return &methodTable;
}
}}

namespace __zz_cib_ {
const __zz_cib_MethodTable* __zz_cib_Helper<::SkRefCntBase>::__zz_cib_get_proxy_method_table() {
  return __zz_cib_::__zz_cib_Class257::__zz_cib_GetMethodTable();
}
}

