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
  return __zz_cib_::IF::__zz_cib_Helper::PrivateVirtual_9(__zz_cib_h_);
}

int IF::ProtectedVirtual() {
  return __zz_cib_::IF::__zz_cib_Helper::ProtectedVirtual_2(__zz_cib_h_);
}

int IF::ProtectedNonVirtual() {
  return __zz_cib_::IF::__zz_cib_Helper::ProtectedNonVirtual_3(__zz_cib_h_);
}

int IF::PublicVirtual() {
  return __zz_cib_::IF::__zz_cib_Helper::PublicVirtual_5(__zz_cib_h_);
}

int IF::PublicNonVirtual() {
  return __zz_cib_::IF::__zz_cib_Helper::PublicNonVirtual_6(__zz_cib_h_);
}

IF::~IF() {
  __zz_cib_::IF::__zz_cib_Helper::__zz_cib_release_proxy(this);
  auto h = __zz_cib_::IF::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::IF::__zz_cib_Helper::__zz_cib_delete_7(h);
}

IF::IF()
  : IF(__zz_cib_::IF::__zz_cib_Helper::__zz_cib_new_0(this))
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
  : A(__zz_cib_::A::__zz_cib_Helper::__zz_cib_copy_0(__zz_cib_::A::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

A::~A() {
  auto h = __zz_cib_::A::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::A::__zz_cib_Helper::__zz_cib_delete_1(h);
}

A::A()
  : A(__zz_cib_::A::__zz_cib_Helper::__zz_cib_new_2())
{}

int A::SetIF(::IF* pIF) {
  return __zz_cib_::A::__zz_cib_Helper::SetIF_3(__zz_cib_h_, __zz_cib_::IF::__zz_cib_Helper::__zz_cib_handle(pIF));
}

::IF* A::GetIF() const {
  return __zz_cib_::IF::__zz_cib_Helper::__zz_cib_from_handle(
    __zz_cib_::A::__zz_cib_Helper::GetIF_4(__zz_cib_h_)
  );
}
namespace __zz_cib_ { namespace IF { namespace __zz_cib_Generic {
class IF : public ::IF {
  __zz_cib_HANDLE* __zz_cib_h_;

  static __zz_cib_::__zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() {
    static __zz_cib_::__zz_cib_MethodTableHelper mtableHelper(__zz_cib_Example_GetMethodTable(
      __zz_cib_classid));
    return mtableHelper;
  }
  explicit IF(__zz_cib_HANDLE* h) : ::IF(h), __zz_cib_h_(h) {}
public:
  static ::IF* __zz_cib_from_handle(__zz_cib_HANDLE* h) {
    return new IF(h);
  }
  int PrivatePureVirtual() override {
    using PrivatePureVirtualProc = int (__zz_cib_decl *) (__zz_cib_HANDLE*);
    return __zz_cib_get_mtable_helper().invoke<PrivatePureVirtualProc, __zz_cib_methodid::PrivatePureVirtual_8>(
      __zz_cib_h_);
  }
  int PrivateVirtual() override {
    using PrivateVirtualProc = int (__zz_cib_decl *) (__zz_cib_HANDLE*);
    return __zz_cib_get_mtable_helper().invoke<PrivateVirtualProc, __zz_cib_methodid::PrivateVirtual_9>(
      __zz_cib_h_);
  }
  int ProtectedPureVirtual() override {
    using ProtectedPureVirtualProc = int (__zz_cib_decl *) (__zz_cib_HANDLE*);
    return __zz_cib_get_mtable_helper().invoke<ProtectedPureVirtualProc, __zz_cib_methodid::ProtectedPureVirtual_1>(
      __zz_cib_h_);
  }
  int ProtectedVirtual() override {
    using ProtectedVirtualProc = int (__zz_cib_decl *) (__zz_cib_HANDLE*);
    return __zz_cib_get_mtable_helper().invoke<ProtectedVirtualProc, __zz_cib_methodid::ProtectedVirtual_2>(
      __zz_cib_h_);
  }
  int PublicPureVirtual() override {
    using PublicPureVirtualProc = int (__zz_cib_decl *) (__zz_cib_HANDLE*);
    return __zz_cib_get_mtable_helper().invoke<PublicPureVirtualProc, __zz_cib_methodid::PublicPureVirtual_4>(
      __zz_cib_h_);
  }
  int PublicVirtual() override {
    using PublicVirtualProc = int (__zz_cib_decl *) (__zz_cib_HANDLE*);
    return __zz_cib_get_mtable_helper().invoke<PublicVirtualProc, __zz_cib_methodid::PublicVirtual_5>(
      __zz_cib_h_);
  }
  ~IF() override {
    if (!__zz_cib_h_) return;
    using __zz_cib_deleteProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_deleteProc, __zz_cib_methodid::__zz_cib_delete_7>(
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
  static int __zz_cib_decl PrivatePureVirtual_0(::IF* __zz_cib_obj) {
    return __zz_cib_obj->PrivatePureVirtual();
  }
  static int __zz_cib_decl PrivateVirtual_1(::IF* __zz_cib_obj) {
    return __zz_cib_obj->PrivateVirtual();
  }
  static int __zz_cib_decl ProtectedPureVirtual_2(::IF* __zz_cib_obj) {
    return __zz_cib_obj->ProtectedPureVirtual();
  }
  static int __zz_cib_decl ProtectedVirtual_3(::IF* __zz_cib_obj) {
    return __zz_cib_obj->ProtectedVirtual();
  }
  static int __zz_cib_decl PublicPureVirtual_4(::IF* __zz_cib_obj) {
    return __zz_cib_obj->PublicPureVirtual();
  }
  static int __zz_cib_decl PublicVirtual_5(::IF* __zz_cib_obj) {
    return __zz_cib_obj->PublicVirtual();
  }
  static void __zz_cib_decl __zz_cib_delete_6(::IF* __zz_cib_obj) {
    delete __zz_cib_obj;
  }
};
}}

namespace __zz_cib_ { namespace IF {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::PrivatePureVirtual_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::PrivateVirtual_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::ProtectedPureVirtual_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::ProtectedVirtual_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::PublicPureVirtual_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::PublicVirtual_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete_6)
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

