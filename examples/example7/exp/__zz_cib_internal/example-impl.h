#pragma once

#include "__zz_cib_internal/__zz_cib_Example-def.h"
#include "__zz_cib_internal/__zz_cib_Example-ids.h"
#include "__zz_cib_internal/__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_internal/__zz_cib_Example-handle-helper.h"

namespace __zz_cib_ { namespace IF {
class __zz_cib_Helper : public __zz_cib_::__zz_cib_MethodTableHelper
  , public __zz_cib_::__zz_cib_HandleHelper<::IF, __zz_cib_Helper> {
private:
  friend class ::IF;
  friend class __zz_cib_::__zz_cib_HandleHelper<::IF, __zz_cib_Helper>;
  static const __zz_cib_MethodTable* __zz_cib_get_proxy_method_table();

  __zz_cib_Helper()
    : __zz_cib_::__zz_cib_MethodTableHelper(
      __zz_cib_Example_GetMethodTable(__zz_cib_classid))
  {}
  static __zz_cib_Helper& instance() {
    static __zz_cib_Helper helper;
    return helper;
  }

  static __zz_cib_HANDLE* __zz_cib_new_0(::IF* __zz_cib_proxy) {
    using __zz_cib_newProc = __zz_cib_HANDLE* (__zz_cib_decl *) (::IF*, const __zz_cib_MethodTable*);
    return instance().invoke<__zz_cib_newProc, __zz_cib_methodid::__zz_cib_new_0>(
      __zz_cib_proxy, __zz_cib_get_proxy_method_table()
      );
  }
  static void __zz_cib_delete_1(__zz_cib_HANDLE* __zz_cib_obj) {
    if (__zz_cib_obj) {
      using __zz_cib_deleteProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*);
      return instance().invoke<__zz_cib_deleteProc, __zz_cib_methodid::__zz_cib_delete_1>(
        __zz_cib_obj
        );
    }
  }
  static void ProtectedVirtual_3(__zz_cib_HANDLE* __zz_cib_obj) {
    using ProtectedVirtualProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*);
    return instance().invoke<ProtectedVirtualProc, __zz_cib_methodid::ProtectedVirtual_3>(
      __zz_cib_obj
      );
  }
  static void ProtectedNonVirtual_4(__zz_cib_HANDLE* __zz_cib_obj) {
    using ProtectedNonVirtualProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*);
    return instance().invoke<ProtectedNonVirtualProc, __zz_cib_methodid::ProtectedNonVirtual_4>(
      __zz_cib_obj
      );
  }
  static void PublicVirtual_6(__zz_cib_HANDLE* __zz_cib_obj) {
    using PublicVirtualProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*);
    return instance().invoke<PublicVirtualProc, __zz_cib_methodid::PublicVirtual_6>(
      __zz_cib_obj
      );
  }
  static void PublicNonVirtual_7(__zz_cib_HANDLE* __zz_cib_obj) {
    using PublicNonVirtualProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*);
    return instance().invoke<PublicNonVirtualProc, __zz_cib_methodid::PublicNonVirtual_7>(
      __zz_cib_obj
      );
  }
  static void PrivateVirtual_9(__zz_cib_HANDLE* __zz_cib_obj) {
    using PrivateVirtualProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*);
    return instance().invoke<PrivateVirtualProc, __zz_cib_methodid::PrivateVirtual_9>(
      __zz_cib_obj
      );
  }
  static std::uint32_t __zz_cib_get_class_id(__zz_cib_HANDLE* __zz_cib_obj) {
    using __zz_cib_get_class_idProc = std::uint32_t (__zz_cib_decl *) (__zz_cib_HANDLE*);
    return instance().invoke<__zz_cib_get_class_idProc, __zz_cib_methodid::__zz_cib_get_class_id_10>(__zz_cib_obj);
  }
  static ::IF* __zz_cib_create_proxy(__zz_cib_HANDLE* h);
public:
  static __zz_cib_HANDLE*& __zz_cib_get_handle(::IF* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_HANDLE* const& __zz_cib_get_handle(const ::IF* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_HANDLE* __zz_cib_release_handle(::IF* __zz_cib_obj) {
    __zz_cib_remove_proxy(__zz_cib_obj->__zz_cib_h_);
    auto h = __zz_cib_obj->__zz_cib_h_;
    __zz_cib_obj->__zz_cib_h_ = nullptr;
    return h;
  }
  static void __zz_cib_release_proxy(::IF* __zz_cib_obj) {
    if (__zz_cib_obj->__zz_cib_h_) {
      using __zz_cib_release_proxyProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*);
      return instance().invoke<__zz_cib_release_proxyProc, __zz_cib_methodid::__zz_cib_release_proxy_11>(
      __zz_cib_obj->__zz_cib_h_);
  }
}
};
}}

namespace __zz_cib_ { namespace A {
class __zz_cib_Helper : public __zz_cib_::__zz_cib_MethodTableHelper
  , public __zz_cib_::__zz_cib_HandleHelper<::A, __zz_cib_Helper> {
private:
  friend class ::A;
  friend class __zz_cib_::__zz_cib_HandleHelper<::A, __zz_cib_Helper>;

  __zz_cib_Helper()
    : __zz_cib_::__zz_cib_MethodTableHelper(
      __zz_cib_Example_GetMethodTable(__zz_cib_classid))
  {}
  static __zz_cib_Helper& instance() {
    static __zz_cib_Helper helper;
    return helper;
  }

  static __zz_cib_HANDLE* __zz_cib_copy_0(__zz_cib_HANDLE const * __zz_cib_param0) {
    using __zz_cib_copyProc = __zz_cib_HANDLE* (__zz_cib_decl *) (__zz_cib_HANDLE const * __zz_cib_param0);
    return instance().invoke<__zz_cib_copyProc, __zz_cib_methodid::__zz_cib_copy_0>(
      __zz_cib_param0);
  }
  static void __zz_cib_delete_1(__zz_cib_HANDLE* __zz_cib_obj) {
    if (__zz_cib_obj) {
      using __zz_cib_deleteProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*);
      return instance().invoke<__zz_cib_deleteProc, __zz_cib_methodid::__zz_cib_delete_1>(
        __zz_cib_obj
        );
    }
  }
  static __zz_cib_HANDLE* __zz_cib_new_2() {
    using __zz_cib_newProc = __zz_cib_HANDLE* (__zz_cib_decl *) ();
    return instance().invoke<__zz_cib_newProc, __zz_cib_methodid::__zz_cib_new_2>(
      );
  }
  static void SetIF_3(__zz_cib_HANDLE* __zz_cib_obj, __zz_cib_HANDLE* pIF) {
    using SetIFProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*, __zz_cib_HANDLE* pIF);
    return instance().invoke<SetIFProc, __zz_cib_methodid::SetIF_3>(
      __zz_cib_obj,
      pIF);
  }
  static __zz_cib_HANDLE* GetIF_4(__zz_cib_HANDLE* __zz_cib_obj) {
    using GetIFProc = __zz_cib_HANDLE* (__zz_cib_decl *) (__zz_cib_HANDLE*);
    return instance().invoke<GetIFProc, __zz_cib_methodid::GetIF_4>(
      __zz_cib_obj
      );
  }
  static ::A* __zz_cib_create_proxy(__zz_cib_HANDLE* h) {
    return new ::A(h);
  }
public:
    static ::A __zz_cib_obj_from_handle(__zz_cib_HANDLE* h) {
      return ::A(h);
    }
    static __zz_cib_HANDLE*& __zz_cib_get_handle(::A* __zz_cib_obj) {
      return __zz_cib_obj->__zz_cib_h_;
    }
    static __zz_cib_HANDLE* const& __zz_cib_get_handle(const ::A* __zz_cib_obj) {
      return __zz_cib_obj->__zz_cib_h_;
    }
    static __zz_cib_HANDLE* __zz_cib_release_handle(::A* __zz_cib_obj) {
      auto h = __zz_cib_obj->__zz_cib_h_;
      __zz_cib_obj->__zz_cib_h_ = nullptr;
      return h;
    }
};
}}
