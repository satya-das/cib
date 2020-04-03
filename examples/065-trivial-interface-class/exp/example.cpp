#include "example.h"


Interface::Interface(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

Interface::Interface(Interface&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

Interface::Interface(const ::Interface& __zz_cib_param0)
  : Interface(__zz_cib_MyHelper::__zz_cib_copy(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
  {}

Interface::Interface()
  : Interface(__zz_cib_MyHelper::__zz_cib_new(
    this))
  {}

Interface::~Interface() {
__zz_cib_MyHelper::__zz_cib_release_proxy(this);
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete(
    h
  );
}

int Interface::Func() {
  return __zz_cib_::__zz_cib_FromRValueAbiType<int>(
    __zz_cib_MyHelper::Func<__zz_cib_::__zz_cib_RValueAbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

int Interface::DoFunc() const {
  return __zz_cib_::__zz_cib_FromRValueAbiType<int>(
    __zz_cib_MyHelper::DoFunc<__zz_cib_::__zz_cib_RValueAbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::Interface> {
  using __zz_cib_Delegatee = ::Interface;
  static __zz_cib_RValueAbiType_t<int> __zz_cib_decl DoFunc(const ::Interface* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<int>(
      __zz_cib_obj->DoFunc()
    );
  }
  static void __zz_cib_decl __zz_cib_delete(::Interface* __zz_cib_obj) {
    __zz_cib_Helper<::Interface>::__zz_cib_release_handle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class257 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Interface>::DoFunc),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Interface>::__zz_cib_delete)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 2 };
  return &methodTable;
}
}}

namespace __zz_cib_ {
const __zz_cib_MethodTable* __zz_cib_Helper<::Interface>::__zz_cib_get_proxy_method_table() {
  return __zz_cib_::__zz_cib_Class257::__zz_cib_GetMethodTable();
}
}

