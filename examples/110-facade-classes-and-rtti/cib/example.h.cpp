#include "example.h"

#include <typeinfo>
#include <typeindex>
#include <cstdint>
#include <unordered_map>

extern std::unordered_map<std::type_index, std::uint32_t> __zz_cib_gClassIdRepo;

#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_Example-delegate-helper.h"
#include "__zz_cib_Example-proxy.h"
#include "__zz_cib_Example-smart-ptr-helper.h"

namespace __zz_cib_ {
namespace Facade {
namespace __zz_cib_GenericProxy {
class __zz_cib : public ::Facade {
  __zz_cib_PROXY* __zz_cib_proxy;
  const __zz_cib_MethodTableHelper __zz_cib_mtbl_helper;

  const __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() const {
    return __zz_cib_mtbl_helper;
  }
  using __zz_cib_methodid = __zz_cib_::Facade::__zz_cib_GenericProxy::__zz_cib_methodid;
public:
  __ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib, ::Facade)

  __zz_cib(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl)
    : ::Facade::Facade()
    , __zz_cib_proxy(proxy)
    , __zz_cib_mtbl_helper(mtbl)
  {}
  void F() override {
    using __zz_cib_proc = void (__zz_cib_decl *) (__zz_cib_PROXY*);
    return __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::F>(
      __zz_cib_proxy);
  }
  ~__zz_cib() override {
    if (!__zz_cib_proxy) return;
    using __zz_cib_proc = void (__zz_cib_decl *) (__zz_cib_PROXY*);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_delete>(
      __zz_cib_proxy);
  }
  void __zz_cib_release_proxy() { __zz_cib_proxy = nullptr; }
};
}}}
namespace __zz_cib_ {
namespace Facade {
namespace __zz_cib_Delegator {
using __zz_cib_Delegatee = __zz_cib_::Facade::__zz_cib_GenericProxy::__zz_cib;
using __zz_cib_ThisClass = __zz_cib_Delegatee;
static ::Facade* __zz_cib_decl __zz_cib_new(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl) {
  return new __zz_cib_::Facade::__zz_cib_GenericProxy::__zz_cib(proxy, mtbl);
}
static void __zz_cib_decl F(__zz_cib_Delegatee* __zz_cib_obj) {
  __zz_cib_obj->F();
}
static void __zz_cib_decl __zz_cib_delete(__zz_cib_Delegatee* __zz_cib_obj) {
  delete __zz_cib_obj;
}
static std::uint32_t __zz_cib_decl __zz_cib_get_class_id(::Facade** __zz_cib_obj) {
  static bool classIdRepoPopulated = false;
  if (!classIdRepoPopulated) {
    __zz_cib_gClassIdRepo[std::type_index(typeid(::PublicFacadeImpl))] = __zz_cib_::PublicFacadeImpl::__zz_cib_classid;
    __zz_cib_gClassIdRepo[std::type_index(typeid(::Facade))] = __zz_cib_::Facade::__zz_cib_classid;
    classIdRepoPopulated = true;
  }
  auto tdx = std::type_index(typeid(**__zz_cib_obj));
  auto itr = __zz_cib_gClassIdRepo.find(tdx);
  if (itr != __zz_cib_gClassIdRepo.end()) return itr->second;
  {
    auto* obj = dynamic_cast<::PublicFacadeImpl*>(*__zz_cib_obj);
    if (obj) {
      *__zz_cib_obj = obj;
      return __zz_cib_gClassIdRepo[tdx] = __zz_cib_::PublicFacadeImpl::__zz_cib_classid;
    }
  }
  return __zz_cib_::Facade::__zz_cib_classid;
}
static void __zz_cib_decl __zz_cib_release_proxy(__zz_cib_Delegatee* __zz_cib_obj) {
  __zz_cib_obj->__zz_cib_release_proxy();
}
}
}}

namespace __zz_cib_ {
namespace Facade {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::F),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_get_class_id),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_release_proxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 5 };
  return &methodTable;
}
}}
namespace __zz_cib_ {
namespace PublicFacadeImpl {
namespace __zz_cib_GenericProxy {
class __zz_cib : public ::PublicFacadeImpl {
  __zz_cib_PROXY* __zz_cib_proxy;
  const __zz_cib_MethodTableHelper __zz_cib_mtbl_helper;

  const __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() const {
    return __zz_cib_mtbl_helper;
  }
  using __zz_cib_methodid = __zz_cib_::PublicFacadeImpl::__zz_cib_GenericProxy::__zz_cib_methodid;
public:
  __ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib, ::PublicFacadeImpl)

  __zz_cib(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl)
    : ::PublicFacadeImpl::PublicFacadeImpl()
    , __zz_cib_proxy(proxy)
    , __zz_cib_mtbl_helper(mtbl)
  {}
  __zz_cib(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl, ::PublicFacadeImpl const & __zz_cib_param0)
    : ::PublicFacadeImpl::PublicFacadeImpl(__zz_cib_param0)
    , __zz_cib_proxy(proxy)
    , __zz_cib_mtbl_helper(mtbl)
  {}
  void F() override {
    using __zz_cib_proc = void (__zz_cib_decl *) (__zz_cib_PROXY*);
    return __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::F>(
      __zz_cib_proxy);
  }
  void __zz_cib_release_proxy() { __zz_cib_proxy = nullptr; }
};
}}}
namespace __zz_cib_ {
namespace PublicFacadeImpl {
namespace __zz_cib_Delegator {
using __zz_cib_Delegatee = __zz_cib_::PublicFacadeImpl::__zz_cib_GenericProxy::__zz_cib;
using __zz_cib_ThisClass = __zz_cib_Delegatee;
static ::PublicFacadeImpl* __zz_cib_decl __zz_cib_copy(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl, const __zz_cib_Delegatee* __zz_cib_obj) {
  return new __zz_cib_::PublicFacadeImpl::__zz_cib_GenericProxy::__zz_cib(proxy, mtbl, *__zz_cib_obj);
}
static void __zz_cib_decl __zz_cib_delete(__zz_cib_Delegatee* __zz_cib_obj) {
  delete __zz_cib_obj;
}
static ::PublicFacadeImpl* __zz_cib_decl __zz_cib_new(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl) {
  return new __zz_cib_::PublicFacadeImpl::__zz_cib_GenericProxy::__zz_cib(proxy, mtbl);
}
static void __zz_cib_decl F(__zz_cib_Delegatee* __zz_cib_obj) {
  __zz_cib_obj->::PublicFacadeImpl::F();
}
static ::Facade* __zz_cib_decl __zz_cib_cast_to_Facade(::PublicFacadeImpl* __zz_cib_obj) {
  return __zz_cib_obj;
}
static void __zz_cib_decl __zz_cib_release_proxy(__zz_cib_Delegatee* __zz_cib_obj) {
  __zz_cib_obj->__zz_cib_release_proxy();
}
}
}}

namespace __zz_cib_ {
namespace PublicFacadeImpl {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_copy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::F),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_cast_to_Facade),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_release_proxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 6 };
  return &methodTable;
}
}}
namespace __zz_cib_ {
namespace A {
namespace __zz_cib_Delegator {
using __zz_cib_Delegatee = ::A;
using __zz_cib_ThisClass = __zz_cib_Delegatee;
static ::A* __zz_cib_decl __zz_cib_copy(const __zz_cib_Delegatee* __zz_cib_obj) {
  return new __zz_cib_Delegatee(*__zz_cib_obj);
}
static void __zz_cib_decl __zz_cib_delete(__zz_cib_Delegatee* __zz_cib_obj) {
  delete __zz_cib_obj;
}
static ::A* __zz_cib_decl __zz_cib_new() {
  return new __zz_cib_Delegatee();
}
static ::Facade* __zz_cib_decl PublicFacade(__zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->::A::PublicFacade();
}
static ::Facade* __zz_cib_decl PrivateFacade1(__zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->::A::PrivateFacade1();
}
static ::Facade* __zz_cib_decl PrivateFacade2(__zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->::A::PrivateFacade2();
}
}
}}

namespace __zz_cib_ {
namespace A {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_copy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::PublicFacade),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::PrivateFacade1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::PrivateFacade2)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 6 };
  return &methodTable;
}
}}
