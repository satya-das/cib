#pragma once


#include "SkRefCnt.h"

namespace __zz_cib_ { namespace __zz_cib_Class259 {
class __zz_cib_Helper;
struct __zz_cib_Delegator;
}}

template<>
class sk_sp<int>
{
public:
  sk_sp();
  sk_sp(std::nullptr_t );
  sk_sp(sk_sp<int> const & that);
  sk_sp(sk_sp<U> const & that);
  sk_sp(sk_sp<int>&& that);
  sk_sp(sk_sp<U>&& that);
  sk_sp(int* obj);
  ~sk_sp();
  sk_sp<int>& operator=(std::nullptr_t );
  sk_sp<int>& operator=(sk_sp<int> const & that);
  sk_sp<int>& operator=(sk_sp<U> const & that);
  sk_sp<int>& operator=(sk_sp<int>&& that);
  sk_sp<int>& operator=(sk_sp<U>&& that);
  int& operator*() const;
  bool operator bool() const;
  int* get() const;
  int* operator->() const;
  void reset(int* ptr);
  int* release();
  void swap(sk_sp<int>& that);

private:
  __ZZ_CIB_CLASS_INTERNAL_DEF(sk_sp<int>, __zz_cib_Class259);
};


namespace __zz_cib_ { namespace __zz_cib_Class259 {
class __zz_cib_Helper : public __zz_cib_MethodTableHelper
  , public __zz_cib_HandleHelper<::sk_sp<int>, __zz_cib_Helper> {
private:
  using __zz_cib_TYPE = __zz_cib_HANDLE;
  friend class __zz_cib_HandleHelper<::sk_sp<int>, __zz_cib_Helper>;
  using _ProxyClass = ::sk_sp<int>;
  friend class ::sk_sp<int>;
  Example::__zz_cib_local_proxy_mgr<_ProxyClass> proxyMgr;

  __zz_cib_Helper()
    : __zz_cib_MethodTableHelper(
      __zz_cib_Example_GetMethodTable(__zz_cib_classid))
  {}
  static __zz_cib_Helper& instance() {
    static __zz_cib_Helper helper;
    return helper;
  }

  static __zz_cib_TYPE* __zz_cib_new() {
    using __zz_cib_proc = __zz_cib_TYPE* (__zz_cib_decl *) ();
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_new>(
      );
  }
  static __zz_cib_TYPE* __zz_cib_new_1(std::nullptr_t __zz_cib_param0) {
    using __zz_cib_proc = __zz_cib_TYPE* (__zz_cib_decl *) (std::nullptr_t __zz_cib_param0);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_new_1>(
      __zz_cib_param0);
  }
  static __zz_cib_TYPE* __zz_cib_copy(__zz_cib_HANDLE const * that) {
    using __zz_cib_proc = __zz_cib_TYPE* (__zz_cib_decl *) (__zz_cib_HANDLE const * that);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_copy>(
      that);
  }
  static __zz_cib_TYPE* __zz_cib_copy_3(__zz_cib_HANDLE const * that) {
    using __zz_cib_proc = __zz_cib_TYPE* (__zz_cib_decl *) (__zz_cib_HANDLE const * that);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_copy_3>(
      that);
  }
  static __zz_cib_TYPE* __zz_cib_new_4(__zz_cib_HANDLE* that) {
    using __zz_cib_proc = __zz_cib_TYPE* (__zz_cib_decl *) (__zz_cib_HANDLE* that);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_new_4>(
      that);
  }
  static __zz_cib_TYPE* __zz_cib_new_5(__zz_cib_HANDLE* that) {
    using __zz_cib_proc = __zz_cib_TYPE* (__zz_cib_decl *) (__zz_cib_HANDLE* that);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_new_5>(
      that);
  }
  static __zz_cib_TYPE* __zz_cib_new_6(int* obj) {
    using __zz_cib_proc = __zz_cib_TYPE* (__zz_cib_decl *) (int* obj);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_new_6>(
      obj);
  }
  static void __zz_cib_delete(__zz_cib_TYPE* __zz_cib_obj) {
    if (__zz_cib_obj) {
      using __zz_cib_proc = void (__zz_cib_decl *) (__zz_cib_TYPE*);
      return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_delete>(
        __zz_cib_obj
        );
    }
  }
  static __zz_cib_HANDLE* __zz_cib_OperatorEqual(__zz_cib_TYPE* __zz_cib_obj, std::nullptr_t __zz_cib_param0) {
    using __zz_cib_proc = __zz_cib_HANDLE* (__zz_cib_decl *) (__zz_cib_TYPE*, std::nullptr_t __zz_cib_param0);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_OperatorEqual>(
      __zz_cib_obj,
      __zz_cib_param0);
  }
  static __zz_cib_HANDLE* __zz_cib_OperatorEqual_9(__zz_cib_TYPE* __zz_cib_obj, __zz_cib_HANDLE const * that) {
    using __zz_cib_proc = __zz_cib_HANDLE* (__zz_cib_decl *) (__zz_cib_TYPE*, __zz_cib_HANDLE const * that);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_OperatorEqual_9>(
      __zz_cib_obj,
      that);
  }
  static __zz_cib_HANDLE* __zz_cib_OperatorEqual_10(__zz_cib_TYPE* __zz_cib_obj, __zz_cib_HANDLE const * that) {
    using __zz_cib_proc = __zz_cib_HANDLE* (__zz_cib_decl *) (__zz_cib_TYPE*, __zz_cib_HANDLE const * that);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_OperatorEqual_10>(
      __zz_cib_obj,
      that);
  }
  static __zz_cib_HANDLE* __zz_cib_OperatorEqual_11(__zz_cib_TYPE* __zz_cib_obj, __zz_cib_HANDLE* that) {
    using __zz_cib_proc = __zz_cib_HANDLE* (__zz_cib_decl *) (__zz_cib_TYPE*, __zz_cib_HANDLE* that);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_OperatorEqual_11>(
      __zz_cib_obj,
      that);
  }
  static __zz_cib_HANDLE* __zz_cib_OperatorEqual_12(__zz_cib_TYPE* __zz_cib_obj, __zz_cib_HANDLE* that) {
    using __zz_cib_proc = __zz_cib_HANDLE* (__zz_cib_decl *) (__zz_cib_TYPE*, __zz_cib_HANDLE* that);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_OperatorEqual_12>(
      __zz_cib_obj,
      that);
  }
  static int* __zz_cib_OperatorMul(const __zz_cib_TYPE* __zz_cib_obj) {
    using __zz_cib_proc = int* (__zz_cib_decl *) (const __zz_cib_TYPE*);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_OperatorMul>(
      __zz_cib_obj
      );
  }
  static bool __zz_cib_Operator(const __zz_cib_TYPE* __zz_cib_obj) {
    using __zz_cib_proc = bool (__zz_cib_decl *) (const __zz_cib_TYPE*);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_Operator>(
      __zz_cib_obj
      );
  }
  static int* get(const __zz_cib_TYPE* __zz_cib_obj) {
    using __zz_cib_proc = int* (__zz_cib_decl *) (const __zz_cib_TYPE*);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::get>(
      __zz_cib_obj
      );
  }
  static int* __zz_cib_OperatorArrow(const __zz_cib_TYPE* __zz_cib_obj) {
    using __zz_cib_proc = int* (__zz_cib_decl *) (const __zz_cib_TYPE*);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_OperatorArrow>(
      __zz_cib_obj
      );
  }
  static void reset(__zz_cib_TYPE* __zz_cib_obj, int* ptr) {
    using __zz_cib_proc = void (__zz_cib_decl *) (__zz_cib_TYPE*, int* ptr);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::reset>(
      __zz_cib_obj,
      ptr);
  }
  static int* release(__zz_cib_TYPE* __zz_cib_obj) {
    using __zz_cib_proc = int* (__zz_cib_decl *) (__zz_cib_TYPE*);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::release>(
      __zz_cib_obj
      );
  }
  static void swap(__zz_cib_TYPE* __zz_cib_obj, __zz_cib_HANDLE* that) {
    using __zz_cib_proc = void (__zz_cib_decl *) (__zz_cib_TYPE*, __zz_cib_HANDLE* that);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::swap>(
      __zz_cib_obj,
      that);
  }
  static ::sk_sp<int>* __zz_cib_create_proxy(__zz_cib_HANDLE* h) {
    return new ::sk_sp<int>(h);
  }
public:
  static ::sk_sp<int> __zz_cib_obj_from_handle(__zz_cib_HANDLE* h) {
    return ::sk_sp<int>(h);
  }
  static __zz_cib_HANDLE*& __zz_cib_get_handle(::sk_sp<int>* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_HANDLE* const& __zz_cib_get_handle(const ::sk_sp<int>* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_HANDLE* __zz_cib_release_handle(::sk_sp<int>* __zz_cib_obj) {
    if (__zz_cib_obj->__zz_cib_h_ == nullptr) return nullptr;
    __zz_cib_remove_proxy(__zz_cib_obj->__zz_cib_h_);
    auto h = __zz_cib_obj->__zz_cib_h_;
    __zz_cib_obj->__zz_cib_h_ = nullptr;
    return h;
  }
  static _ProxyClass* __zz_cib_get_or_create_proxy(__zz_cib_HANDLE* h) {
    auto&  dis   = instance();
    auto* proxy = dis.proxyMgr.findProxy(h);
    if (proxy == nullptr)
      proxy = __zz_cib_create_proxy(h);
    return proxy;
  }
  static void __zz_cib_add_proxy(_ProxyClass* __zz_cib_obj, __zz_cib_HANDLE* h) {
    auto& dis = instance();
    dis.proxyMgr.addProxy(__zz_cib_obj, h);
  }
  static void __zz_cib_remove_proxy(__zz_cib_HANDLE* h) {
    auto& dis = instance();
      dis.proxyMgr.removeProxy(h);
  }
};
}}

inline sk_sp<int>::sk_sp(__zz_cib_::__zz_cib_HANDLE* h)
  : __zz_cib_h_(h)
{
  __zz_cib_::__zz_cib_Class259::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

inline sk_sp<int>::sk_sp()
  : sk_sp<int>(__zz_cib_::__zz_cib_Class259::__zz_cib_Helper::__zz_cib_new())
{}

inline sk_sp<int>::sk_sp(std::nullptr_t __zz_cib_param0)
  : sk_sp<int>(__zz_cib_::__zz_cib_Class259::__zz_cib_Helper::__zz_cib_new_1(__zz_cib_param0))
{}

inline sk_sp<int>::sk_sp(::sk_sp<int> const & that)
  : sk_sp<int>(__zz_cib_::__zz_cib_Class259::__zz_cib_Helper::__zz_cib_copy(__zz_cib_::__zz_cib_Class259::__zz_cib_Helper::__zz_cib_handle(that)))
{}

inline sk_sp<int>::sk_sp(::sk_sp<U> const & that)
  : sk_sp<int>(__zz_cib_::__zz_cib_Class259::__zz_cib_Helper::__zz_cib_copy_3(__zz_cib_::__zz_cib_Class258::__zz_cib_Helper::__zz_cib_handle(that)))
{}

inline sk_sp<int>::sk_sp(::sk_sp<int>&& that)
  : sk_sp<int>(__zz_cib_::__zz_cib_Class259::__zz_cib_Helper::__zz_cib_new_4(__zz_cib_::__zz_cib_Class259::__zz_cib_Helper::__zz_cib_handle(that)))
{}

inline sk_sp<int>::sk_sp(::sk_sp<U>&& that)
  : sk_sp<int>(__zz_cib_::__zz_cib_Class259::__zz_cib_Helper::__zz_cib_new_5(__zz_cib_::__zz_cib_Class258::__zz_cib_Helper::__zz_cib_handle(that)))
{}

inline sk_sp<int>::sk_sp(int* obj)
  : sk_sp<int>(__zz_cib_::__zz_cib_Class259::__zz_cib_Helper::__zz_cib_new_6(obj))
{}

inline sk_sp<int>::~sk_sp() {
  auto h = __zz_cib_::__zz_cib_Class259::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::__zz_cib_Class259::__zz_cib_Helper::__zz_cib_delete(h);
}

inline ::sk_sp<int>& sk_sp<int>::operator=(std::nullptr_t __zz_cib_param0) {
  return *__zz_cib_::__zz_cib_Class259::__zz_cib_Helper::__zz_cib_from_handle(
    __zz_cib_::__zz_cib_Class259::__zz_cib_Helper::__zz_cib_OperatorEqual(__zz_cib_h_, __zz_cib_param0)
  );
}

inline ::sk_sp<int>& sk_sp<int>::operator=(::sk_sp<int> const & that) {
  return *__zz_cib_::__zz_cib_Class259::__zz_cib_Helper::__zz_cib_from_handle(
    __zz_cib_::__zz_cib_Class259::__zz_cib_Helper::__zz_cib_OperatorEqual_9(__zz_cib_h_, __zz_cib_::__zz_cib_Class259::__zz_cib_Helper::__zz_cib_handle(that))
  );
}

inline ::sk_sp<int>& sk_sp<int>::operator=(::sk_sp<U> const & that) {
  return *__zz_cib_::__zz_cib_Class259::__zz_cib_Helper::__zz_cib_from_handle(
    __zz_cib_::__zz_cib_Class259::__zz_cib_Helper::__zz_cib_OperatorEqual_10(__zz_cib_h_, __zz_cib_::__zz_cib_Class258::__zz_cib_Helper::__zz_cib_handle(that))
  );
}

inline ::sk_sp<int>& sk_sp<int>::operator=(::sk_sp<int>&& that) {
  return *__zz_cib_::__zz_cib_Class259::__zz_cib_Helper::__zz_cib_from_handle(
    __zz_cib_::__zz_cib_Class259::__zz_cib_Helper::__zz_cib_OperatorEqual_11(__zz_cib_h_, __zz_cib_::__zz_cib_Class259::__zz_cib_Helper::__zz_cib_handle(that))
  );
}

inline ::sk_sp<int>& sk_sp<int>::operator=(::sk_sp<U>&& that) {
  return *__zz_cib_::__zz_cib_Class259::__zz_cib_Helper::__zz_cib_from_handle(
    __zz_cib_::__zz_cib_Class259::__zz_cib_Helper::__zz_cib_OperatorEqual_12(__zz_cib_h_, __zz_cib_::__zz_cib_Class258::__zz_cib_Helper::__zz_cib_handle(that))
  );
}

inline int& sk_sp<int>::operator*() const {
  return *__zz_cib_::__zz_cib_Class259::__zz_cib_Helper::__zz_cib_OperatorMul(__zz_cib_h_);
}

inline bool sk_sp<int>::operator bool() const {
  return __zz_cib_::__zz_cib_Class259::__zz_cib_Helper::__zz_cib_Operator(__zz_cib_h_);
}

inline int* sk_sp<int>::get() const {
  return __zz_cib_::__zz_cib_Class259::__zz_cib_Helper::get(__zz_cib_h_);
}

inline int* sk_sp<int>::operator->() const {
  return __zz_cib_::__zz_cib_Class259::__zz_cib_Helper::__zz_cib_OperatorArrow(__zz_cib_h_);
}

inline void sk_sp<int>::reset(int* ptr) {
  __zz_cib_::__zz_cib_Class259::__zz_cib_Helper::reset(__zz_cib_h_, ptr);
}

inline int* sk_sp<int>::release() {
  return __zz_cib_::__zz_cib_Class259::__zz_cib_Helper::release(__zz_cib_h_);
}

inline void sk_sp<int>::swap(::sk_sp<int>& that) {
  __zz_cib_::__zz_cib_Class259::__zz_cib_Helper::swap(__zz_cib_h_, __zz_cib_::__zz_cib_Class259::__zz_cib_Helper::__zz_cib_handle(that));
}
