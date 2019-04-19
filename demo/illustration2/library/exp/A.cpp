#include "A.h"


I::I(__zz_cib_::__zz_cib_HANDLE* h)
  : __zz_cib_h_(h)
{
  __zz_cib_::I::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

I::I(I&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_::I::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

I::~I() {
  __zz_cib_::I::__zz_cib_Helper::__zz_cib_release_proxy(this);
  auto h = __zz_cib_::I::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::I::__zz_cib_Helper::__zz_cib_delete_2(h);
}

I::I()
  : I(__zz_cib_::I::__zz_cib_Helper::__zz_cib_new_0(this))
{}

C::C(__zz_cib_::__zz_cib_HANDLE* h)
  : __zz_cib_h_(h)
{
  __zz_cib_::C::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

C::C(C&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_::C::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

C::C()
  : C(__zz_cib_::C::__zz_cib_Helper::__zz_cib_new_0(this))
{}

C::C(::C const & __zz_cib_param0)
  : C(__zz_cib_::C::__zz_cib_Helper::__zz_cib_copy_1(this, __zz_cib_::C::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

C::~C() {
  __zz_cib_::C::__zz_cib_Helper::__zz_cib_release_proxy(this);
  auto h = __zz_cib_::C::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::C::__zz_cib_Helper::__zz_cib_delete_2(h);
}

int C::UseInterface(::I* pI) {
  return __zz_cib_::C::__zz_cib_Helper::UseInterface_3(__zz_cib_h_, __zz_cib_::I::__zz_cib_Helper::__zz_cib_handle(pI));
}
namespace __zz_cib_ { namespace I { namespace __zz_cib_Generic {
class I : public ::I {
  __zz_cib_HANDLE* __zz_cib_h_;

  using __zz_cib_TYPE = __zz_cib_HANDLE;
  static __zz_cib_::__zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() {
    static __zz_cib_::__zz_cib_MethodTableHelper mtableHelper(__zz_cib_illustration2_GetMethodTable(
      __zz_cib_classid));
    return mtableHelper;
  }
  explicit I(__zz_cib_HANDLE* h) : ::I(h), __zz_cib_h_(h) {}
public:
  static ::I* __zz_cib_from_handle(__zz_cib_HANDLE* h) {
    return new I(h);
  }
  int F() override {
    using FProc = int (__zz_cib_decl *) (__zz_cib_TYPE*);
    return __zz_cib_get_mtable_helper().invoke<FProc, __zz_cib_methodid::F_1>(
      __zz_cib_h_);
  }
  ~I() override {
    if (!__zz_cib_h_) return;
    using __zz_cib_deleteProc = void (__zz_cib_decl *) (__zz_cib_TYPE*);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_deleteProc, __zz_cib_methodid::__zz_cib_delete_2>(
      __zz_cib_h_);
  }
};
}}}
::I* __zz_cib_::I::__zz_cib_Helper::__zz_cib_create_proxy(__zz_cib_HANDLE* h) {
  switch(__zz_cib_get_class_id(&h)) {
  default:
    return ::__zz_cib_::I::__zz_cib_Generic::I::__zz_cib_from_handle(h);
  }
}
namespace __zz_cib_ { namespace I {
struct __zz_cib_Delegator {
  using __zz_cib_Delegatee = ::I;
  static int __zz_cib_decl F_0(::I* __zz_cib_obj) {
    return __zz_cib_obj->F();
  }
  static void __zz_cib_decl __zz_cib_delete_1(::I* __zz_cib_obj) {
    delete __zz_cib_obj;
  }
};
}}

namespace __zz_cib_ { namespace I {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::F_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete_1)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 2 };
  return &methodTable;
}
}}

namespace __zz_cib_ { namespace I {
const __zz_cib_MethodTable* __zz_cib_Helper::__zz_cib_get_proxy_method_table() {
  return __zz_cib_GetMethodTable();
}
}}

namespace __zz_cib_ { namespace C {
struct __zz_cib_Delegator {
  using __zz_cib_Delegatee = ::C;
  static int __zz_cib_decl UseInterface_0(::C* __zz_cib_obj, __zz_cib_HANDLE* pI) {
    return __zz_cib_obj->UseInterface(__zz_cib_::I::__zz_cib_Helper::__zz_cib_from_handle(pI));
  }
  static void __zz_cib_decl __zz_cib_delete_1(::C* __zz_cib_obj) {
    delete __zz_cib_obj;
  }
};
}}

namespace __zz_cib_ { namespace C {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::UseInterface_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete_1)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 2 };
  return &methodTable;
}
}}

namespace __zz_cib_ { namespace C {
const __zz_cib_MethodTable* __zz_cib_Helper::__zz_cib_get_proxy_method_table() {
  return __zz_cib_GetMethodTable();
}
}}

