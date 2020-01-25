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
  __zz_cib_::I::__zz_cib_Helper::__zz_cib_delete(h);
}

I::I()
  : I(__zz_cib_::I::__zz_cib_Helper::__zz_cib_new(this))
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
  : C(__zz_cib_::C::__zz_cib_Helper::__zz_cib_new())
{}

C::C(::C const & __zz_cib_param0)
  : C(__zz_cib_::C::__zz_cib_Helper::__zz_cib_copy(__zz_cib_::C::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

C::~C() {
  auto h = __zz_cib_::C::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::C::__zz_cib_Helper::__zz_cib_delete(h);
}

int C::UseInterface(::I* pI) {
  return __zz_cib_::C::__zz_cib_Helper::UseInterface(__zz_cib_h_, __zz_cib_::I::__zz_cib_Helper::__zz_cib_handle(pI));
}

namespace __zz_cib_ {
namespace I {
struct __zz_cib_Delegator {
  using __zz_cib_Delegatee = ::I;
  static int __zz_cib_decl F(::I* __zz_cib_obj) {
    return __zz_cib_obj->F();
  }
  static void __zz_cib_decl __zz_cib_delete(::I* __zz_cib_obj) {
    __zz_cib_Helper::__zz_cib_release_handle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
}}

namespace __zz_cib_ {
namespace I {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::F),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 2 };
  return &methodTable;
}
}}

namespace __zz_cib_ {
namespace I {
const __zz_cib_MethodTable* __zz_cib_Helper::__zz_cib_get_proxy_method_table() {
  return __zz_cib_GetMethodTable();
}
}}

