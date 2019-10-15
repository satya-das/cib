#include "example.h"


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

std::unique_ptr<I> A::f() const {
  return std::unique_ptr<I>(__zz_cib_::I::__zz_cib_Helper::__zz_cib_from_handle(
    __zz_cib_::A::__zz_cib_Helper::f(__zz_cib_h_))
  );
}

::I* A::g() {
  return __zz_cib_::I::__zz_cib_Helper::__zz_cib_from_handle(
    __zz_cib_::A::__zz_cib_Helper::g(__zz_cib_h_)
  );
}

int A::h(std::unique_ptr<I> p) const {
  return __zz_cib_::A::__zz_cib_Helper::h(__zz_cib_h_, __zz_cib_::I::__zz_cib_Helper::__zz_cib_handle(p.release()));
}

int A::i(::I* p) const {
  return __zz_cib_::A::__zz_cib_Helper::i(__zz_cib_h_, __zz_cib_::I::__zz_cib_Helper::__zz_cib_handle(p));
}
namespace __zz_cib_ { namespace I { namespace __zz_cib_Generic {
class I : public ::I {
  __zz_cib_HANDLE* __zz_cib_h_;

  using __zz_cib_TYPE = __zz_cib_HANDLE;
  static __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() {
    static __zz_cib_MethodTableHelper mtableHelper(__zz_cib_Example_GetMethodTable(
      __zz_cib_classid));
    return mtableHelper;
  }
  explicit I(__zz_cib_HANDLE* h) : ::I(h), __zz_cib_h_(h) {}
public:
  static ::I* __zz_cib_from_handle(__zz_cib_HANDLE* h) {
    return new I(h);
  }
  int f() const override {
    using __zz_cib_proc = int (__zz_cib_decl *) (const __zz_cib_TYPE*);
    return __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::f>(
      __zz_cib_h_);
  }
};
}}}
::I* __zz_cib_::I::__zz_cib_Helper::__zz_cib_create_proxy(__zz_cib_HANDLE* h) {
  switch(__zz_cib_get_class_id(&h)) {
  default: break;
  }
  return ::__zz_cib_::I::__zz_cib_Generic::I::__zz_cib_from_handle(h);
}
namespace __zz_cib_ { namespace I {
struct __zz_cib_Delegator {
  using __zz_cib_Delegatee = ::I;
  static int __zz_cib_decl f(const ::I* __zz_cib_obj) {
    return __zz_cib_obj->f();
  }
  static void __zz_cib_decl __zz_cib_delete(::I* __zz_cib_obj) {
    delete __zz_cib_obj;
  }
};
}}

namespace __zz_cib_ { namespace I {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::f),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete)
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

