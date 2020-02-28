#include "example.h"


Interface::Interface(__zz_cib_::__zz_cib_HANDLE* h)
  : __zz_cib_h_(h)
{
  __zz_cib_::Interface::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

Interface::Interface(Interface&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_::Interface::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

Interface::Interface(::Interface const & __zz_cib_param0)
  : Interface(__zz_cib_Helper::__zz_cib_copy(this, __zz_cib_::Interface::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

Interface::Interface()
  : Interface(__zz_cib_Helper::__zz_cib_new(this))
{}

Interface::~Interface() {
  __zz_cib_::Interface::__zz_cib_Helper::__zz_cib_release_proxy(this);
  auto h = __zz_cib_::Interface::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_Helper::__zz_cib_delete(h);
}

int Interface::Func() {
  return __zz_cib_Helper::Func(__zz_cib_h_);
}

int Interface::DoFunc() const {
  return __zz_cib_Helper::DoFunc(__zz_cib_h_);
}

namespace __zz_cib_ {
namespace Interface {
struct __zz_cib_Delegator {
  using __zz_cib_Delegatee = ::Interface;
  static int __zz_cib_decl DoFunc(const ::Interface* __zz_cib_obj) {
    return __zz_cib_obj->DoFunc();
  }
  static void __zz_cib_decl __zz_cib_delete(::Interface* __zz_cib_obj) {
    __zz_cib_Helper::__zz_cib_release_handle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
}}

namespace __zz_cib_ {
namespace Interface {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::DoFunc),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 2 };
  return &methodTable;
}
}}

namespace __zz_cib_ {
namespace Interface {
const __zz_cib_MethodTable* __zz_cib_Helper::__zz_cib_get_proxy_method_table() {
  return __zz_cib_GetMethodTable();
}
}}

