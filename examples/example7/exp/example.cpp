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

IF::IF()
  : IF(__zz_cib_::IF::__zz_cib_Helper::__zz_cib_new_0(this))
{}

IF::~IF() {
  __zz_cib_::IF::__zz_cib_Helper::__zz_cib_release_proxy(this);
  auto h = __zz_cib_::IF::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::IF::__zz_cib_Helper::__zz_cib_delete_1(h);
  __zz_cib_::IF::__zz_cib_Helper::__zz_cib_remove_proxy(h);
}

void IF::ProtectedVirtual() {
  __zz_cib_::IF::__zz_cib_Helper::ProtectedVirtual_3(__zz_cib_h_);
}

void IF::ProtectedNonVirtual() {
  __zz_cib_::IF::__zz_cib_Helper::ProtectedNonVirtual_4(__zz_cib_h_);
}

void IF::PublicVirtual() {
  __zz_cib_::IF::__zz_cib_Helper::PublicVirtual_6(__zz_cib_h_);
}

void IF::PublicNonVirtual() {
  __zz_cib_::IF::__zz_cib_Helper::PublicNonVirtual_7(__zz_cib_h_);
}

void IF::PrivateVirtual() {
  __zz_cib_::IF::__zz_cib_Helper::PrivateVirtual_9(__zz_cib_h_);
}

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

void A::SetIF(::IF* pIF) {
  __zz_cib_::A::__zz_cib_Helper::SetIF_3(__zz_cib_h_, __zz_cib_::IF::__zz_cib_Helper::__zz_cib_handle(pIF));
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
  IF(__zz_cib_HANDLE* h) : ::IF(h) {}
public:
  static ::IF* __zz_cib_from_handle(__zz_cib_HANDLE* h) {
    return new IF(h);
  }
  void PrivatePureVirtual() override {
    using PrivatePureVirtualProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*);
    return __zz_cib_get_mtable_helper().invoke<PrivatePureVirtualProc, __zz_cib_methodid::PrivatePureVirtual_8>(
      __zz_cib_h_);
  }
  void PrivateVirtual() override {
    using PrivateVirtualProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*);
    return __zz_cib_get_mtable_helper().invoke<PrivateVirtualProc, __zz_cib_methodid::PrivateVirtual_9>(
      __zz_cib_h_);
  }
  void ProtectedPureVirtual() override {
    using ProtectedPureVirtualProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*);
    return __zz_cib_get_mtable_helper().invoke<ProtectedPureVirtualProc, __zz_cib_methodid::ProtectedPureVirtual_2>(
      __zz_cib_h_);
  }
  void ProtectedVirtual() override {
    using ProtectedVirtualProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*);
    return __zz_cib_get_mtable_helper().invoke<ProtectedVirtualProc, __zz_cib_methodid::ProtectedVirtual_3>(
      __zz_cib_h_);
  }
  void PublicPureVirtual() override {
    using PublicPureVirtualProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*);
    return __zz_cib_get_mtable_helper().invoke<PublicPureVirtualProc, __zz_cib_methodid::PublicPureVirtual_5>(
      __zz_cib_h_);
  }
  void PublicVirtual() override {
    using PublicVirtualProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*);
    return __zz_cib_get_mtable_helper().invoke<PublicVirtualProc, __zz_cib_methodid::PublicVirtual_6>(
      __zz_cib_h_);
  }
};
}}}
::IF* __zz_cib_::IF::__zz_cib_Helper::__zz_cib_create_proxy(__zz_cib_HANDLE* h) {
  switch(__zz_cib_get_class_id(h)) {
  default:
    return ::__zz_cib_::IF::__zz_cib_Generic::IF::__zz_cib_from_handle(h);
  }
}
namespace __zz_cib_ { namespace IF {
struct __zz_cib_Delegator {
  using __zz_cib_Delegatee = ::IF;
  static void __zz_cib_decl PrivatePureVirtual_0(::IF* __zz_cib_obj) {
    __zz_cib_obj->PrivatePureVirtual();
  }
  static void __zz_cib_decl PrivateVirtual_1(::IF* __zz_cib_obj) {
    __zz_cib_obj->__zz_cib_Delegatee::PrivateVirtual();
  }
  static void __zz_cib_decl ProtectedPureVirtual_2(::IF* __zz_cib_obj) {
    __zz_cib_obj->ProtectedPureVirtual();
  }
  static void __zz_cib_decl ProtectedVirtual_3(::IF* __zz_cib_obj) {
    __zz_cib_obj->__zz_cib_Delegatee::ProtectedVirtual();
  }
  static void __zz_cib_decl PublicPureVirtual_4(::IF* __zz_cib_obj) {
    __zz_cib_obj->PublicPureVirtual();
  }
  static void __zz_cib_decl PublicVirtual_5(::IF* __zz_cib_obj) {
    __zz_cib_obj->__zz_cib_Delegatee::PublicVirtual();
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

