#include "example.h"

#include <typeinfo>
#include <typeindex>
#include <cstdint>
#include <unordered_map>

extern std::unordered_map<std::type_index, std::uint32_t> __zz_cib_gClassIdRepo;

#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_Example-delegate-helper.h"
#include "__zz_cib_Example-generic.h"
#include "__zz_cib_Example-library-type-handler.h"

namespace __zz_cib_ {
template <>
class __zz_cib_Generic<::A> : public ::A {
public:
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::A>;

  __zz_cib_Generic(__zz_cib_Proxy proxy, const __zz_cib_MethodTable* mtbl, const A& __zz_cib_param0)
    : ::A::A(    __zz_cib_param0)
    , __zz_cib_h_(proxy)
    , __zz_cib_mtbl_helper(mtbl)
  {}
  __zz_cib_Generic(__zz_cib_Proxy proxy, const __zz_cib_MethodTable* mtbl)
    : ::A::A()
    , __zz_cib_h_(proxy)
    , __zz_cib_mtbl_helper(mtbl)
  {}
  int VirtualFunction() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<int>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<int>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::VirtualFunction>(
        __zz_cib_h_
      )
    );
  }
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    using __zz_cib_proc = void(__zz_cib_decl *) (__zz_cib_Proxy);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_delete>(
      __zz_cib_h_
    );
  }
  void __zz_cib_release_proxy() { __zz_cib_h_ = nullptr; }
  __ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib_Generic, ::A)

private:
  __zz_cib_Proxy __zz_cib_h_;
  const __zz_cib_MethodTableHelper __zz_cib_mtbl_helper;

  const __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() const {
    return __zz_cib_mtbl_helper;
  }
  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class257::__zz_cib_Generic::__zz_cib_methodid;
};
}
namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::A> : public ::A {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Generic<::A>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_Proxy = __zz_cib_Delegatee::__zz_cib_Proxy;
  static ::A* __zz_cib_decl __zz_cib_new(__zz_cib_Proxy proxy, const __zz_cib_MethodTable* mtbl) {
    return new __zz_cib_::__zz_cib_Generic<::A>(proxy, mtbl);
  }
  static ::A* __zz_cib_decl __zz_cib_copy(__zz_cib_Proxy proxy, const __zz_cib_MethodTable* mtbl, const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_::__zz_cib_Generic<::A>(proxy, mtbl, *__zz_cib_obj);
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl VirtualFunction(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::A::VirtualFunction()
    );
  }
  static void __zz_cib_decl __zz_cib_delete(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static std::uint32_t __zz_cib_decl __zz_cib_get_class_id(::A** __zz_cib_obj) {
    static bool classIdRepoPopulated = false;
    if (!classIdRepoPopulated) {
      __zz_cib_gClassIdRepo[std::type_index(typeid(::B))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class258::__zz_cib_classid;
      __zz_cib_gClassIdRepo[std::type_index(typeid(::A))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class257::__zz_cib_classid;
      classIdRepoPopulated = true;
    }
    auto tdx = std::type_index(typeid(**__zz_cib_obj));
    auto itr = __zz_cib_gClassIdRepo.find(tdx);
    if (itr != __zz_cib_gClassIdRepo.end()) return itr->second;
    {
      auto* obj = dynamic_cast<::B*>(*__zz_cib_obj);
      if (obj) {
        *__zz_cib_obj = obj;
        return __zz_cib_gClassIdRepo[tdx] = __zz_cib_::__zz_cib_ids::__zz_cib_Class258::__zz_cib_classid;
      }
    }
    return __zz_cib_::__zz_cib_ids::__zz_cib_Class257::__zz_cib_classid;
  }
  static void __zz_cib_decl __zz_cib_release_proxy(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->__zz_cib_release_proxy();
}
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class257 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::__zz_cib_new),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::__zz_cib_copy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::VirtualFunction),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::__zz_cib_delete),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::__zz_cib_get_class_id),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::__zz_cib_release_proxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 6 };
  return &methodTable;
}
}}
namespace __zz_cib_ {
template <>
class __zz_cib_Generic<::B> : public ::B {
public:
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::B>;

  __zz_cib_Generic(__zz_cib_Proxy proxy, const __zz_cib_MethodTable* mtbl, const B& __zz_cib_param0)
    : ::B::B(    __zz_cib_param0)
    , __zz_cib_h_(proxy)
    , __zz_cib_mtbl_helper(mtbl)
  {}
  __zz_cib_Generic(__zz_cib_Proxy proxy, const __zz_cib_MethodTable* mtbl)
    : ::B::B()
    , __zz_cib_h_(proxy)
    , __zz_cib_mtbl_helper(mtbl)
  {}
  int VirtualFunction() const override {
    using __zz_cib_proc = __zz_cib_AbiType_t<int>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<int>(
      __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::VirtualFunction>(
        __zz_cib_h_
      )
    );
  }
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    using __zz_cib_proc = void(__zz_cib_decl *) (__zz_cib_Proxy);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_delete>(
      __zz_cib_h_
    );
  }
  void __zz_cib_release_proxy() { __zz_cib_h_ = nullptr; }
  __ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib_Generic, ::B)

private:
  __zz_cib_Proxy __zz_cib_h_;
  const __zz_cib_MethodTableHelper __zz_cib_mtbl_helper;

  const __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() const {
    return __zz_cib_mtbl_helper;
  }
  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class258::__zz_cib_Generic::__zz_cib_methodid;
};
}
namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::B> : public ::B {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Generic<::B>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_Proxy = __zz_cib_Delegatee::__zz_cib_Proxy;
  static ::B* __zz_cib_decl __zz_cib_new(__zz_cib_Proxy proxy, const __zz_cib_MethodTable* mtbl) {
    return new __zz_cib_::__zz_cib_Generic<::B>(proxy, mtbl);
  }
  static ::B* __zz_cib_decl __zz_cib_copy(__zz_cib_Proxy proxy, const __zz_cib_MethodTable* mtbl, const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_::__zz_cib_Generic<::B>(proxy, mtbl, *__zz_cib_obj);
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl VirtualFunction(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::B::VirtualFunction()
    );
  }
  static void __zz_cib_decl __zz_cib_delete(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static ::A* __zz_cib_decl __zz_cib_cast_to___zz_cib_Class257(::B* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::B* __zz_cib_decl __zz_cib_cast_from___zz_cib_Class257(::A* __zz_cib_obj) {
    return dynamic_cast<::B*>(__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_release_proxy(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->__zz_cib_release_proxy();
}
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class258 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::B>::__zz_cib_new),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::B>::__zz_cib_copy),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::B>::VirtualFunction),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::B>::__zz_cib_delete),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::B>::__zz_cib_cast_to___zz_cib_Class257),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::B>::__zz_cib_cast_from___zz_cib_Class257),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::B>::__zz_cib_release_proxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 7 };
  return &methodTable;
}
}}
