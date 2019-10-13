#include "example.h"


IF::IF(__zz_cib_::__zz_cib_HANDLE* h)
  : __zz_cib_h_(h)
{
  __zz_cib_::IF::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

IF::IF(IF&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_::IF::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

int IF::PrivateVirtual() {
  return __zz_cib_::IF::__zz_cib_Helper::__zz_cib_PrivateVirtual(__zz_cib_h_);
}

int IF::ProtectedVirtual() {
  return __zz_cib_::IF::__zz_cib_Helper::__zz_cib_ProtectedVirtual(__zz_cib_h_);
}

int IF::ProtectedNonVirtual() {
  return __zz_cib_::IF::__zz_cib_Helper::__zz_cib_ProtectedNonVirtual(__zz_cib_h_);
}

int IF::PublicVirtual() {
  return __zz_cib_::IF::__zz_cib_Helper::__zz_cib_PublicVirtual(__zz_cib_h_);
}

int IF::PublicNonVirtual() {
  return __zz_cib_::IF::__zz_cib_Helper::__zz_cib_PublicNonVirtual(__zz_cib_h_);
}

IF::~IF() {
  __zz_cib_::IF::__zz_cib_Helper::__zz_cib_release_proxy(this);
  auto h = __zz_cib_::IF::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::IF::__zz_cib_Helper::__zz_cib_delete(h);
}

IF::IF()
  : IF(__zz_cib_::IF::__zz_cib_Helper::__zz_cib_new(this))
{}

A::A(__zz_cib_::__zz_cib_HANDLE* h)
  : __zz_cib_h_(h)
{}

A::A(A&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

A::A(::A const & __zz_cib_param0)
  : A(__zz_cib_::A::__zz_cib_Helper::__zz_cib_copy(__zz_cib_::A::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

A::~A() {
  auto h = __zz_cib_::A::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::A::__zz_cib_Helper::__zz_cib_delete(h);
}

A::A()
  : A(__zz_cib_::A::__zz_cib_Helper::__zz_cib_new())
{}

int A::SetIF(::IF* pIF) {
  return __zz_cib_::A::__zz_cib_Helper::__zz_cib_SetIF(__zz_cib_h_, __zz_cib_::IF::__zz_cib_Helper::__zz_cib_handle(pIF));
}

::IF* A::GetIF() const {
  return __zz_cib_::IF::__zz_cib_Helper::__zz_cib_from_handle(
    __zz_cib_::A::__zz_cib_Helper::__zz_cib_GetIF(__zz_cib_h_)
  );
}
namespace __zz_cib_ { namespace IF { namespace __zz_cib_Generic {
class IF : public ::IF {
  __zz_cib_HANDLE* __zz_cib_h_;

  using __zz_cib_TYPE = __zz_cib_HANDLE;
  static __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() {
    static __zz_cib_MethodTableHelper mtableHelper(__zz_cib_Example_GetMethodTable(
      __zz_cib_classid));
    return mtableHelper;
  }
  explicit IF(__zz_cib_HANDLE* h) : ::IF(h), __zz_cib_h_(h) {}
public:
  static ::IF* __zz_cib_from_handle(__zz_cib_HANDLE* h) {
    return new IF(h);
  }
  int PrivatePureVirtual() override {
    using __zz_cib_PrivatePureVirtualProc = int (__zz_cib_decl *) (__zz_cib_TYPE*);
    return __zz_cib_get_mtable_helper().invoke<__zz_cib_PrivatePureVirtualProc, __zz_cib_methodid::__zz_cib_PrivatePureVirtual>(
      __zz_cib_h_);
  }
  int PrivateVirtual() override {
    using __zz_cib_PrivateVirtualProc = int (__zz_cib_decl *) (__zz_cib_TYPE*);
    return __zz_cib_get_mtable_helper().invoke<__zz_cib_PrivateVirtualProc, __zz_cib_methodid::__zz_cib_PrivateVirtual>(
      __zz_cib_h_);
  }
  int ProtectedPureVirtual() override {
    using __zz_cib_ProtectedPureVirtualProc = int (__zz_cib_decl *) (__zz_cib_TYPE*);
    return __zz_cib_get_mtable_helper().invoke<__zz_cib_ProtectedPureVirtualProc, __zz_cib_methodid::__zz_cib_ProtectedPureVirtual>(
      __zz_cib_h_);
  }
  int ProtectedVirtual() override {
    using __zz_cib_ProtectedVirtualProc = int (__zz_cib_decl *) (__zz_cib_TYPE*);
    return __zz_cib_get_mtable_helper().invoke<__zz_cib_ProtectedVirtualProc, __zz_cib_methodid::__zz_cib_ProtectedVirtual>(
      __zz_cib_h_);
  }
  int PublicPureVirtual() override {
    using __zz_cib_PublicPureVirtualProc = int (__zz_cib_decl *) (__zz_cib_TYPE*);
    return __zz_cib_get_mtable_helper().invoke<__zz_cib_PublicPureVirtualProc, __zz_cib_methodid::__zz_cib_PublicPureVirtual>(
      __zz_cib_h_);
  }
  int PublicVirtual() override {
    using __zz_cib_PublicVirtualProc = int (__zz_cib_decl *) (__zz_cib_TYPE*);
    return __zz_cib_get_mtable_helper().invoke<__zz_cib_PublicVirtualProc, __zz_cib_methodid::__zz_cib_PublicVirtual>(
      __zz_cib_h_);
  }
};
}}}
::IF* __zz_cib_::IF::__zz_cib_Helper::__zz_cib_create_proxy(__zz_cib_HANDLE* h) {
  switch(__zz_cib_get_class_id(&h)) {
  default:
    return ::__zz_cib_::IF::__zz_cib_Generic::IF::__zz_cib_from_handle(h);
  }
}
namespace __zz_cib_ { namespace IF {
struct __zz_cib_Delegator {
  using __zz_cib_Delegatee = ::IF;
  static int __zz_cib_decl __zz_cib_PrivatePureVirtual(::IF* __zz_cib_obj) {
    return __zz_cib_obj->PrivatePureVirtual();
  }
  static int __zz_cib_decl __zz_cib_PrivateVirtual(::IF* __zz_cib_obj) {
    return __zz_cib_obj->PrivateVirtual();
  }
  static int __zz_cib_decl __zz_cib_ProtectedPureVirtual(::IF* __zz_cib_obj) {
    return __zz_cib_obj->ProtectedPureVirtual();
  }
  static int __zz_cib_decl __zz_cib_ProtectedVirtual(::IF* __zz_cib_obj) {
    return __zz_cib_obj->ProtectedVirtual();
  }
  static int __zz_cib_decl __zz_cib_PublicPureVirtual(::IF* __zz_cib_obj) {
    return __zz_cib_obj->PublicPureVirtual();
  }
  static int __zz_cib_decl __zz_cib_PublicVirtual(::IF* __zz_cib_obj) {
    return __zz_cib_obj->PublicVirtual();
  }
  static void __zz_cib_decl __zz_cib_delete(::IF* __zz_cib_obj) {
    delete __zz_cib_obj;
  }
};
}}

namespace __zz_cib_ { namespace IF {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_PrivatePureVirtual),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_PrivateVirtual),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_ProtectedPureVirtual),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_ProtectedVirtual),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_PublicPureVirtual),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_PublicVirtual),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 7 };
  return &methodTable;
}
}}

namespace __zz_cib_ { namespace IF {
const __zz_cib_MethodTable* __zz_cib_Helper::__zz_cib_get_proxy_method_table() {
  return __zz_cib_GetMethodTable();
}
}}

