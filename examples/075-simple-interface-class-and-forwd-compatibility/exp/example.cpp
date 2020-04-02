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

Interface::~Interface() {
__zz_cib_MyHelper::__zz_cib_release_proxy(this);
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete(
    h
  );
}

Interface::Interface()
  : Interface(__zz_cib_MyHelper::__zz_cib_new(
    this))
  {}


A::A(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{}

A::A(A&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

A::A(const A& __zz_cib_param0)
  : A(__zz_cib_MyHelper::__zz_cib_copy(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
  {}

A::~A() {
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete(
    h
  );
}

A::A()
  : A(__zz_cib_MyHelper::__zz_cib_new(
    ))
  {}

int A::UseInterface(Interface* pInterface) const {
  return __zz_cib_::__zz_cib_FromRValueAbiType<int>(
    __zz_cib_MyHelper::UseInterface<__zz_cib_::__zz_cib_RValueAbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(pInterface)>(pInterface)
    )
  );
}

namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::Interface> {
  using __zz_cib_Delegatee = ::Interface;
  static __zz_cib_RValueAbiType_t<int> __zz_cib_decl Func(::Interface* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<int>(
      __zz_cib_obj->Func()
    );
  }
  static __zz_cib_RValueAbiType_t<int> __zz_cib_decl Gunc(::Interface* __zz_cib_obj) {
    return __zz_cib_ToRValueAbiType<int>(
      __zz_cib_obj->Gunc()
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
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Interface>::Func),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Interface>::__zz_cib_delete),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Interface>::Gunc)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 3 };
  return &methodTable;
}
}}

namespace __zz_cib_ {
const __zz_cib_MethodTable* __zz_cib_Helper<::Interface>::__zz_cib_get_proxy_method_table() {
  return __zz_cib_::__zz_cib_Class257::__zz_cib_GetMethodTable();
}
}

