#include "example.h"

#include <typeinfo>
#include <typeindex>
#include <cstdint>
#include <unordered_map>

extern std::unordered_map<std::type_index, std::uint32_t> __zz_cib_gClassIdRepo;

#include "__zz_cib_Example-class-down-cast.h"
#include "__zz_cib_Example-delegate-helper.h"
#include "__zz_cib_Example-generic-impl-interface.h"
#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-type-converters.h"
#include "__zz_cib_Example-mtable-helper.h"

namespace __zz_cib_ {
template <>
class __zz_cib_Generic<::I> : public ::I {
public:
  using __zz_cib_Proxy = __zz_cib_Proxy_t<::I>;

  __zz_cib_Generic(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_GetMethodTable)
    : ::I::I()
    , __zz_cib_h_(__zz_cib_proxy)
    , __zz_cib_methodTableHelper(__zz_cib_GetMethodTable)
  {}
  int f() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<int>(__zz_cib_decl *) (const __zz_cib_Proxy);
    return __zz_cib_FromAbiType<int>(
      __zz_cib_get_mtable_helper().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::f_0>(
        __zz_cib_h
      )
    );
  }
  void internal_dispose() const override {
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = __zz_cib_AbiType_t<void>(__zz_cib_decl *) (const __zz_cib_Proxy);
    __zz_cib_get_mtable_helper().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::internal_dispose_1>(
      __zz_cib_h
    );
  }
  ~__zz_cib_Generic() override {
    if (!__zz_cib_h_) return;
    auto __zz_cib_h = __zz_cib_h_;
    using __zz_cib_ProcType = void(__zz_cib_decl *) (__zz_cib_Proxy);
    __zz_cib_get_mtable_helper().Invoke<__zz_cib_ProcType, __zz_cib_Methodid::__zz_cib_Delete_2>(
      __zz_cib_h
    );
  }
  void __zz_cib_ReleaseProxy() { __zz_cib_h_ = nullptr; }
  __ZZ_CIB_DELEGATOR_MEMBERS(__zz_cib_Generic, ::I)

private:
  __zz_cib_Proxy __zz_cib_h_;
  const __zz_cib_MethodTableHelper __zz_cib_methodTableHelper;

  const __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() const {
    return __zz_cib_methodTableHelper;
  }
  using __zz_cib_Methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class259::__zz_cib_Generic::__zz_cib_Methodid;
};
}
namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::I> : public ::I {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Generic<::I>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::I::I;

  using __zz_cib_Proxy = __zz_cib_Delegatee::__zz_cib_Proxy;
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_0(__zz_cib_Proxy __zz_cib_proxy, const __zz_cib_MethodTable* __zz_cib_GetMethodTable) {
    return new __zz_cib_::__zz_cib_Generic<::I>(__zz_cib_proxy, __zz_cib_GetMethodTable);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl f_2(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->f()
    );
  }
  static __zz_cib_AbiType_t<void> __zz_cib_decl internal_dispose_3(const __zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->::I::internal_dispose();
  }
  static ::SkRefCntBase* __zz_cib_decl __zz_cib_CastTo__zz_cib_Class258(::I* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  static ::I* __zz_cib_decl __zz_cib_CastFrom__zz_cib_Class258(::SkRefCntBase* __zz_cib_obj) {
    return __zz_cib_DownCast<::I*>(__zz_cib_obj);
  }
  static std::uint32_t __zz_cib_decl __zz_cib_GetClassId(::I** __zz_cib_obj) {
    static bool classIdRepoPopulated = false;
    if (!classIdRepoPopulated) {
      __zz_cib_gClassIdRepo[std::type_index(typeid(::I))] = __zz_cib_::__zz_cib_ids::__zz_cib_Class259::__zz_cib_classid;
      classIdRepoPopulated = true;
    }
    auto tdx = std::type_index(typeid(**__zz_cib_obj));
    auto itr = __zz_cib_gClassIdRepo.find(tdx);
    if (itr != __zz_cib_gClassIdRepo.end()) return itr->second;
    return __zz_cib_::__zz_cib_ids::__zz_cib_Class259::__zz_cib_classid;
  }
  static void __zz_cib_decl __zz_cib_ReleaseProxy(__zz_cib_Delegatee* __zz_cib_obj) {
    __zz_cib_obj->__zz_cib_ReleaseProxy();
}
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class259 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::I>::__zz_cib_New_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::I>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::I>::f_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::I>::internal_dispose_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::I>::__zz_cib_CastTo__zz_cib_Class258),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::I>::__zz_cib_CastFrom__zz_cib_Class258),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::I>::__zz_cib_GetClassId),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::I>::__zz_cib_ReleaseProxy)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 8 };
  return &methodTable;
}
}}
namespace __zz_cib_ {
template <>
struct __zz_cib_Delegator<::A> : public ::A {
  using __zz_cib_Delegatee = __zz_cib_::__zz_cib_Delegator<::A>;
  using __zz_cib_ThisClass = __zz_cib_Delegatee;
  using __zz_cib_AbiType = __zz_cib_ThisClass*;

  using ::A::A;

  static __zz_cib_AbiType __zz_cib_decl __zz_cib_Copy_0(const __zz_cib_Delegatee* __zz_cib_obj) {
    return new __zz_cib_Delegatee(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_Delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
        delete __zz_cib_obj;
  }
  static __zz_cib_AbiType __zz_cib_decl __zz_cib_New_2() {
    return new __zz_cib_Delegatee();
  }
  static __zz_cib_AbiType_t<sk_sp<I>> __zz_cib_decl f_3(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<sk_sp<I>>(
      __zz_cib_obj->::A::f()
    );
  }
  static __zz_cib_AbiType_t<::I*> __zz_cib_decl g_4(__zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_ToAbiType<::I*>(
      __zz_cib_obj->::A::g()
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl h_5(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<sk_sp<I>> p) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::A::h(
        __zz_cib_::__zz_cib_FromAbiType<sk_sp<I>>(p)
      )
    );
  }
  static __zz_cib_AbiType_t<int> __zz_cib_decl i_6(const __zz_cib_Delegatee* __zz_cib_obj, __zz_cib_AbiType_t<::I*> p) {
    return __zz_cib_ToAbiType<int>(
      __zz_cib_obj->::A::i(
        __zz_cib_::__zz_cib_FromAbiType<::I*>(p)
      )
    );
  }
};
}

namespace __zz_cib_ {
namespace __zz_cib_Class260 {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::__zz_cib_Copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::__zz_cib_Delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::__zz_cib_New_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::f_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::g_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::h_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_::__zz_cib_Delegator<::A>::i_6)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 7 };
  return &methodTable;
}
}}
