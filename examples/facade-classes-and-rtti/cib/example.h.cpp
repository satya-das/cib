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

namespace __zz_cib_ { namespace Facade {
namespace __zz_cib_Delegator {
using __zz_cib_Delegatee = ::Facade;
static void __zz_cib_decl F_0(__zz_cib_Delegatee* __zz_cib_obj) {
  __zz_cib_obj->F();
}
static void __zz_cib_decl __zz_cib_delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
  delete __zz_cib_obj;
}
static std::uint32_t __zz_cib_decl __zz_cib_get_class_id_2(::Facade** __zz_cib_obj) {
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
}
}}

namespace __zz_cib_ { namespace Facade {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::F_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_get_class_id_2)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 3 };
  return &methodTable;
}
}}
namespace __zz_cib_ { namespace PublicFacadeImpl {
namespace __zz_cib_Delegator {
using __zz_cib_Delegatee = ::PublicFacadeImpl;
static ::PublicFacadeImpl* __zz_cib_decl __zz_cib_copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
  return new __zz_cib_Delegatee(*__zz_cib_obj);
}
static void __zz_cib_decl __zz_cib_delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
  delete __zz_cib_obj;
}
static ::PublicFacadeImpl* __zz_cib_decl __zz_cib_new_2() {
  return new __zz_cib_Delegatee();
}
static void __zz_cib_decl F_3(__zz_cib_Delegatee* __zz_cib_obj) {
  __zz_cib_obj->__zz_cib_Delegatee::F();
}
static ::Facade* __zz_cib_decl __zz_cib_cast_to___Facade_4(::PublicFacadeImpl* __zz_cib_obj) {
  return __zz_cib_obj;
}
}
}}

namespace __zz_cib_ { namespace PublicFacadeImpl {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::F_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_cast_to___Facade_4)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 5 };
  return &methodTable;
}
}}
namespace __zz_cib_ { namespace A {
namespace __zz_cib_Delegator {
using __zz_cib_Delegatee = ::A;
static ::A* __zz_cib_decl __zz_cib_copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
  return new __zz_cib_Delegatee(*__zz_cib_obj);
}
static void __zz_cib_decl __zz_cib_delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
  delete __zz_cib_obj;
}
static ::A* __zz_cib_decl __zz_cib_new_2() {
  return new __zz_cib_Delegatee();
}
static ::Facade* __zz_cib_decl PublicFacade_3(__zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->__zz_cib_Delegatee::PublicFacade();
}
static ::Facade* __zz_cib_decl PrivateFacade1_4(__zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->__zz_cib_Delegatee::PrivateFacade1();
}
static ::Facade* __zz_cib_decl PrivateFacade2_5(__zz_cib_Delegatee* __zz_cib_obj) {
  return __zz_cib_obj->__zz_cib_Delegatee::PrivateFacade2();
}
}
}}

namespace __zz_cib_ { namespace A {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::PublicFacade_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::PrivateFacade1_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::PrivateFacade2_5)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 6 };
  return &methodTable;
}
}}
