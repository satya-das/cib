#include "example.h"

#include "__zz_cib_internal/__zz_cib_Example-generic.h"


Facade::Facade(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

Facade::Facade(Facade&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

Facade::~Facade() {
__zz_cib_MyHelper::__zz_cib_release_proxy(this);
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete(
    h
  );
}

Facade::Facade()
  : Facade(__zz_cib_MyHelper::__zz_cib_new(
    this))
  {}


PublicFacadeImpl::PublicFacadeImpl(__zz_cib_AbiType h)
  : ::Facade(__zz_cib_MyHelper::__zz_cib_cast_to___zz_cib_Class257(h))
  , __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PublicFacadeImpl::PublicFacadeImpl(PublicFacadeImpl&& rhs)
  : ::Facade(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

PublicFacadeImpl::PublicFacadeImpl(const PublicFacadeImpl& __zz_cib_param0)
  : PublicFacadeImpl(__zz_cib_MyHelper::__zz_cib_copy(
    this, 
    __zz_cib_::__zz_cib_ToAbiType<const PublicFacadeImpl&>(__zz_cib_param0)))
  {}

PublicFacadeImpl::~PublicFacadeImpl() {
__zz_cib_MyHelper::__zz_cib_release_proxy(this);
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete(
    h
  );
}

PublicFacadeImpl::PublicFacadeImpl()
  : PublicFacadeImpl(__zz_cib_MyHelper::__zz_cib_new(
    this))
  {}

void PublicFacadeImpl::F() {
  __zz_cib_MyHelper::F<__zz_cib_::__zz_cib_AbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
  );
}


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
        __zz_cib_::__zz_cib_ToAbiType<const A&>(__zz_cib_param0)))
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

::Facade* A::PublicFacade() {
  return __zz_cib_::__zz_cib_FromAbiType<::Facade*>(
    __zz_cib_MyHelper::PublicFacade<__zz_cib_::__zz_cib_AbiType_t<::Facade*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::Facade* A::PrivateFacade1() {
  return __zz_cib_::__zz_cib_FromAbiType<::Facade*>(
    __zz_cib_MyHelper::PrivateFacade1<__zz_cib_::__zz_cib_AbiType_t<::Facade*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

::Facade* A::PrivateFacade2() {
  return __zz_cib_::__zz_cib_FromAbiType<::Facade*>(
    __zz_cib_MyHelper::PrivateFacade2<__zz_cib_::__zz_cib_AbiType_t<::Facade*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

namespace __zz_cib_ {
template<>
class __zz_cib_Generic<::Facade> : public ::Facade {
  __zz_cib_AbiType __zz_cib_h_;

  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class257::__zz_cib_methodid;
  static __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() {
    static __zz_cib_MethodTableHelper mtableHelper(__zz_cib_Example_GetMethodTable(
      __zz_cib_ids::__zz_cib_Class257::__zz_cib_classid));
    return mtableHelper;
  }
  explicit __zz_cib_Generic(__zz_cib_AbiType h) : ::Facade(h), __zz_cib_h_(h) {}
public:
  static ::Facade* __zz_cib_from_handle(__zz_cib_AbiType h) {
    return new __zz_cib_Generic(h);
  }
  void F() override {
    using __zz_cib_proc = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (__zz_cib_AbiType);
        __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::F>(
      __zz_cib_h_);
  }
};
}

namespace __zz_cib_ {
::Facade* __zz_cib_Helper<::Facade>::__zz_cib_create_proxy(__zz_cib_AbiType h) {
  switch(__zz_cib_get_class_id(&h)) {
  case __zz_cib_::__zz_cib_ids::__zz_cib_Class258::__zz_cib_classid:
    return __zz_cib_Helper<PublicFacadeImpl>::__zz_cib_from_handle(
      __zz_cib_Helper<PublicFacadeImpl>::__zz_cib_cast_from___zz_cib_Class257(h)
    );
  default: break;
  }
  return ::__zz_cib_::__zz_cib_Generic<::Facade>::__zz_cib_from_handle(h);
}
}
namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::Facade> {
  using __zz_cib_Delegatee = ::Facade;
  static __zz_cib_AbiType_t<void> __zz_cib_decl F(::Facade* __zz_cib_obj) {
        __zz_cib_obj->F();
  }
  static void __zz_cib_decl __zz_cib_delete(::Facade* __zz_cib_obj) {
    __zz_cib_Helper<::Facade>::__zz_cib_release_handle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class257 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Facade>::F),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::Facade>::__zz_cib_delete)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 2 };
  return &methodTable;
}
}}

namespace __zz_cib_ {
const __zz_cib_MethodTable* __zz_cib_Helper<::Facade>::__zz_cib_get_proxy_method_table() {
  return __zz_cib_::__zz_cib_Class257::__zz_cib_GetMethodTable();
}
}

namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::PublicFacadeImpl> {
  using __zz_cib_Delegatee = ::PublicFacadeImpl;
  static __zz_cib_AbiType_t<void> __zz_cib_decl F(::PublicFacadeImpl* __zz_cib_obj) {
        __zz_cib_obj->F();
  }
  static void __zz_cib_decl __zz_cib_delete(::PublicFacadeImpl* __zz_cib_obj) {
    __zz_cib_Helper<::PublicFacadeImpl>::__zz_cib_release_handle(__zz_cib_obj);
    delete __zz_cib_obj;
  }
};
};

namespace __zz_cib_ {
namespace __zz_cib_Class258 {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PublicFacadeImpl>::F),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::PublicFacadeImpl>::__zz_cib_delete)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 2 };
  return &methodTable;
}
}}

namespace __zz_cib_ {
const __zz_cib_MethodTable* __zz_cib_Helper<::PublicFacadeImpl>::__zz_cib_get_proxy_method_table() {
  return __zz_cib_::__zz_cib_Class258::__zz_cib_GetMethodTable();
}
}

