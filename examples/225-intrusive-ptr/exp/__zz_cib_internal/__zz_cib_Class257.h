#pragma once


#include "SkRefCnt.h"
#include "example.h"

namespace __zz_cib_ { namespace __zz_cib_Class257 {
class __zz_cib_Helper;
struct __zz_cib_Delegator;
}}

template<>
class sk_sp<::I>
{
public:
  sk_sp();
  sk_sp(std::nullptr_t );
  sk_sp(sk_sp<::I> const & that);
  sk_sp(sk_sp<U> const & that);
  sk_sp(sk_sp<::I>&& that);
  sk_sp(sk_sp<U>&& that);
  sk_sp(::I* obj);
  ~sk_sp();
  sk_sp<::I>& operator=(std::nullptr_t );
  sk_sp<::I>& operator=(sk_sp<::I> const & that);
  sk_sp<::I>& operator=(sk_sp<U> const & that);
  sk_sp<::I>& operator=(sk_sp<::I>&& that);
  sk_sp<::I>& operator=(sk_sp<U>&& that);
  ::I& operator*() const;
  bool operator bool() const;
  ::I* get() const;
  ::I* operator->() const;
  void reset(::I* ptr);
  ::I* release();
  void swap(sk_sp<::I>& that);

private:
  __ZZ_CIB_CLASS_INTERNAL_DEF(sk_sp<::I>, __zz_cib_Class257);
};


namespace __zz_cib_ { namespace __zz_cib_Class257 {
class __zz_cib_Helper : public __zz_cib_MethodTableHelper
  , public __zz_cib_HandleHelper<::sk_sp<::I>, __zz_cib_Helper> {
private:
  using __zz_cib_TYPE = __zz_cib_HANDLE;
  friend class __zz_cib_HandleHelper<::sk_sp<::I>, __zz_cib_Helper>;
  using _ProxyClass = ::sk_sp<::I>;
  friend class ::sk_sp<::I>;
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
  static __zz_cib_TYPE* __zz_cib_new_6(__zz_cib_HANDLE* obj) {
    using __zz_cib_proc = __zz_cib_TYPE* (__zz_cib_decl *) (__zz_cib_HANDLE* obj);
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
  static __zz_cib_HANDLE* __zz_cib_OperatorMul(const __zz_cib_TYPE* __zz_cib_obj) {
    using __zz_cib_proc = __zz_cib_HANDLE* (__zz_cib_decl *) (const __zz_cib_TYPE*);
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
  static __zz_cib_HANDLE* get(const __zz_cib_TYPE* __zz_cib_obj) {
    using __zz_cib_proc = __zz_cib_HANDLE* (__zz_cib_decl *) (const __zz_cib_TYPE*);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::get>(
      __zz_cib_obj
      );
  }
  static __zz_cib_HANDLE* __zz_cib_OperatorArrow(const __zz_cib_TYPE* __zz_cib_obj) {
    using __zz_cib_proc = __zz_cib_HANDLE* (__zz_cib_decl *) (const __zz_cib_TYPE*);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_OperatorArrow>(
      __zz_cib_obj
      );
  }
  static void reset(__zz_cib_TYPE* __zz_cib_obj, __zz_cib_HANDLE* ptr) {
    using __zz_cib_proc = void (__zz_cib_decl *) (__zz_cib_TYPE*, __zz_cib_HANDLE* ptr);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::reset>(
      __zz_cib_obj,
      ptr);
  }
  static __zz_cib_HANDLE* release(__zz_cib_TYPE* __zz_cib_obj) {
    using __zz_cib_proc = __zz_cib_HANDLE* (__zz_cib_decl *) (__zz_cib_TYPE*);
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
  static ::sk_sp<::I>* __zz_cib_create_proxy(__zz_cib_HANDLE* h) {
    return new ::sk_sp<::I>(h);
  }
public:
  static ::sk_sp<::I> __zz_cib_obj_from_handle(__zz_cib_HANDLE* h) {
    return ::sk_sp<::I>(h);
  }
  static __zz_cib_HANDLE*& __zz_cib_get_handle(::sk_sp<::I>* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_HANDLE* const& __zz_cib_get_handle(const ::sk_sp<::I>* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_HANDLE* __zz_cib_release_handle(::sk_sp<::I>* __zz_cib_obj) {
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

inline sk_sp<::I>::sk_sp(__zz_cib_::__zz_cib_HANDLE* h)
  : __zz_cib_h_(h)
{
  __zz_cib_::__zz_cib_Class257::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

inline sk_sp<::I>::sk_sp()
  : sk_sp<::I>(__zz_cib_::__zz_cib_Class257::__zz_cib_Helper::__zz_cib_new())
{}

inline sk_sp<::I>::sk_sp(std::nullptr_t __zz_cib_param0)
  : sk_sp<::I>(__zz_cib_::__zz_cib_Class257::__zz_cib_Helper::__zz_cib_new_1(__zz_cib_param0))
{}

inline sk_sp<::I>::sk_sp(::sk_sp<::I> const & that)
  : sk_sp<::I>(__zz_cib_::__zz_cib_Class257::__zz_cib_Helper::__zz_cib_copy(__zz_cib_::__zz_cib_Class257::__zz_cib_Helper::__zz_cib_handle(that)))
{}

inline sk_sp<::I>::sk_sp(::sk_sp<U> const & that)
  : sk_sp<::I>(__zz_cib_::__zz_cib_Class257::__zz_cib_Helper::__zz_cib_copy_3(__zz_cib_::__zz_cib_Class258::__zz_cib_Helper::__zz_cib_handle(that)))
{}

inline sk_sp<::I>::sk_sp(::sk_sp<::I>&& that)
  : sk_sp<::I>(__zz_cib_::__zz_cib_Class257::__zz_cib_Helper::__zz_cib_new_4(__zz_cib_::__zz_cib_Class257::__zz_cib_Helper::__zz_cib_handle(that)))
{}

inline sk_sp<::I>::sk_sp(::sk_sp<U>&& that)
  : sk_sp<::I>(__zz_cib_::__zz_cib_Class257::__zz_cib_Helper::__zz_cib_new_5(__zz_cib_::__zz_cib_Class258::__zz_cib_Helper::__zz_cib_handle(that)))
{}

inline sk_sp<::I>::sk_sp(::I* obj)
  : sk_sp<::I>(__zz_cib_::__zz_cib_Class257::__zz_cib_Helper::__zz_cib_new_6(__zz_cib_::I::__zz_cib_Helper::__zz_cib_handle(obj)))
{}

inline sk_sp<::I>::~sk_sp() {
  auto h = __zz_cib_::__zz_cib_Class257::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::__zz_cib_Class257::__zz_cib_Helper::__zz_cib_delete(h);
}

inline ::sk_sp<::I>& sk_sp<::I>::operator=(std::nullptr_t __zz_cib_param0) {
  return *__zz_cib_::__zz_cib_Class257::__zz_cib_Helper::__zz_cib_from_handle(
    __zz_cib_::__zz_cib_Class257::__zz_cib_Helper::__zz_cib_OperatorEqual(__zz_cib_h_, __zz_cib_param0)
  );
}

inline ::sk_sp<::I>& sk_sp<::I>::operator=(::sk_sp<::I> const & that) {
  return *__zz_cib_::__zz_cib_Class257::__zz_cib_Helper::__zz_cib_from_handle(
    __zz_cib_::__zz_cib_Class257::__zz_cib_Helper::__zz_cib_OperatorEqual_9(__zz_cib_h_, __zz_cib_::__zz_cib_Class257::__zz_cib_Helper::__zz_cib_handle(that))
  );
}

inline ::sk_sp<::I>& sk_sp<::I>::operator=(::sk_sp<U> const & that) {
  return *__zz_cib_::__zz_cib_Class257::__zz_cib_Helper::__zz_cib_from_handle(
    __zz_cib_::__zz_cib_Class257::__zz_cib_Helper::__zz_cib_OperatorEqual_10(__zz_cib_h_, __zz_cib_::__zz_cib_Class258::__zz_cib_Helper::__zz_cib_handle(that))
  );
}

inline ::sk_sp<::I>& sk_sp<::I>::operator=(::sk_sp<::I>&& that) {
  return *__zz_cib_::__zz_cib_Class257::__zz_cib_Helper::__zz_cib_from_handle(
    __zz_cib_::__zz_cib_Class257::__zz_cib_Helper::__zz_cib_OperatorEqual_11(__zz_cib_h_, __zz_cib_::__zz_cib_Class257::__zz_cib_Helper::__zz_cib_handle(that))
  );
}

inline ::sk_sp<::I>& sk_sp<::I>::operator=(::sk_sp<U>&& that) {
  return *__zz_cib_::__zz_cib_Class257::__zz_cib_Helper::__zz_cib_from_handle(
    __zz_cib_::__zz_cib_Class257::__zz_cib_Helper::__zz_cib_OperatorEqual_12(__zz_cib_h_, __zz_cib_::__zz_cib_Class258::__zz_cib_Helper::__zz_cib_handle(that))
  );
}

inline ::I& sk_sp<::I>::operator*() const {
  return *__zz_cib_::I::__zz_cib_Helper::__zz_cib_from_handle(
    __zz_cib_::__zz_cib_Class257::__zz_cib_Helper::__zz_cib_OperatorMul(__zz_cib_h_)
  );
}

inline bool sk_sp<::I>::operator bool() const {
  return __zz_cib_::__zz_cib_Class257::__zz_cib_Helper::__zz_cib_Operator(__zz_cib_h_);
}

inline ::I* sk_sp<::I>::get() const {
  return __zz_cib_::I::__zz_cib_Helper::__zz_cib_from_handle(
    __zz_cib_::__zz_cib_Class257::__zz_cib_Helper::get(__zz_cib_h_)
  );
}

inline ::I* sk_sp<::I>::operator->() const {
  return __zz_cib_::I::__zz_cib_Helper::__zz_cib_from_handle(
    __zz_cib_::__zz_cib_Class257::__zz_cib_Helper::__zz_cib_OperatorArrow(__zz_cib_h_)
  );
}

inline void sk_sp<::I>::reset(::I* ptr) {
  __zz_cib_::__zz_cib_Class257::__zz_cib_Helper::reset(__zz_cib_h_, __zz_cib_::I::__zz_cib_Helper::__zz_cib_handle(ptr));
}

inline ::I* sk_sp<::I>::release() {
  return __zz_cib_::I::__zz_cib_Helper::__zz_cib_from_handle(
    __zz_cib_::__zz_cib_Class257::__zz_cib_Helper::release(__zz_cib_h_)
  );
}

inline void sk_sp<::I>::swap(::sk_sp<::I>& that) {
  __zz_cib_::__zz_cib_Class257::__zz_cib_Helper::swap(__zz_cib_h_, __zz_cib_::__zz_cib_Class257::__zz_cib_Helper::__zz_cib_handle(that));
}
