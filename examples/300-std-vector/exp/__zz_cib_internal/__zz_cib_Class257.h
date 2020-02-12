#pragma once


#include "example.h"
#include <vector>

namespace __zz_cib_ { namespace __zz_cib_Class256 { namespace __zz_cib_Class257 {
class __zz_cib_Helper;
struct __zz_cib_Delegator;
}}}
 namespace std {
template<>
class vector<::C>
{
public:
  using value_type = ::C;
  using const_reference = const value_type&;
  using size_type = size_t;
  vector();
  vector(size_type __n, value_type const & __value);
  vector(vector const & __x);
  vector(vector&& __x);
  ~vector();
  vector& operator=(vector const & __x);
  vector& operator=(vector&& __x);
  void assign(size_type __n, value_type const & __val);
  size_type size() const;
  size_type max_size() const;
  void resize(size_type __new_size, value_type const & __x);
  void shrink_to_fit();
  size_type capacity() const;
  bool empty() const;
  void reserve(size_type __n);
  value_type& operator[](size_type __n);
  value_type const & operator[](size_type __n) const;
  value_type& at(size_type __n);
  value_type const & at(size_type __n) const;
  value_type& front();
  value_type const & front() const;
  value_type& back();
  value_type const & back() const;
  void push_back(value_type const & __x);
  void push_back(value_type&& __x);
  void pop_back();
  void swap(vector& __x);
  void clear();

private:
  __ZZ_CIB_CLASS_INTERNAL_DEF(__ZZ_CIB_CLASS_NAME(vector<::C>), __ZZ_CIB_CLASS_NAME(__zz_cib_Class256::__zz_cib_Class257));
};
}

namespace __zz_cib_ {
using namespace ::std;
namespace __zz_cib_Class256 {
using namespace ::std;
namespace __zz_cib_Class257 {
class __zz_cib_Helper : public __zz_cib_MethodTableHelper
  , public __zz_cib_HandleHelper<::std::vector<::C>, __zz_cib_Helper> {
private:
  using __zz_cib_TYPE = __zz_cib_HANDLE;
  friend class __zz_cib_HandleHelper<::std::vector<::C>, __zz_cib_Helper>;
  using _ProxyClass = ::std::vector<::C>;
  friend class ::std::vector<::C>;
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
  static __zz_cib_TYPE* __zz_cib_new_1(::std::vector<::C>::size_type __n, __zz_cib_HANDLE const * __value) {
    using __zz_cib_proc = __zz_cib_TYPE* (__zz_cib_decl *) (::std::vector<::C>::size_type __n, __zz_cib_HANDLE const * __value);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_new_1>(
      __n, __value);
  }
  static __zz_cib_TYPE* __zz_cib_copy(__zz_cib_HANDLE const * __x) {
    using __zz_cib_proc = __zz_cib_TYPE* (__zz_cib_decl *) (__zz_cib_HANDLE const * __x);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_copy>(
      __x);
  }
  static __zz_cib_TYPE* __zz_cib_new_3(__zz_cib_HANDLE* __x) {
    using __zz_cib_proc = __zz_cib_TYPE* (__zz_cib_decl *) (__zz_cib_HANDLE* __x);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_new_3>(
      std::move(__x));
  }
  static void __zz_cib_delete(__zz_cib_TYPE* __zz_cib_obj) {
    if (__zz_cib_obj) {
      using __zz_cib_proc = void (__zz_cib_decl *) (__zz_cib_TYPE*);
      return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_delete>(
        __zz_cib_obj
        );
    }
  }
  static __zz_cib_HANDLE* __zz_cib_OperatorEqual(__zz_cib_TYPE* __zz_cib_obj, __zz_cib_HANDLE const * __x) {
    using __zz_cib_proc = __zz_cib_HANDLE* (__zz_cib_decl *) (__zz_cib_TYPE*, __zz_cib_HANDLE const * __x);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_OperatorEqual>(
      __zz_cib_obj,
      __x);
  }
  static __zz_cib_HANDLE* __zz_cib_OperatorEqual_6(__zz_cib_TYPE* __zz_cib_obj, __zz_cib_HANDLE* __x) {
    using __zz_cib_proc = __zz_cib_HANDLE* (__zz_cib_decl *) (__zz_cib_TYPE*, __zz_cib_HANDLE* __x);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_OperatorEqual_6>(
      __zz_cib_obj,
      std::move(__x));
  }
  static void assign(__zz_cib_TYPE* __zz_cib_obj, ::std::vector<::C>::size_type __n, __zz_cib_HANDLE const * __val) {
    using __zz_cib_proc = void (__zz_cib_decl *) (__zz_cib_TYPE*, ::std::vector<::C>::size_type __n, __zz_cib_HANDLE const * __val);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::assign>(
      __zz_cib_obj,
      __n, __val);
  }
  static ::std::vector<::C>::size_type size(const __zz_cib_TYPE* __zz_cib_obj) {
    using __zz_cib_proc = ::std::vector<::C>::size_type (__zz_cib_decl *) (const __zz_cib_TYPE*);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::size>(
      __zz_cib_obj
      );
  }
  static ::std::vector<::C>::size_type max_size(const __zz_cib_TYPE* __zz_cib_obj) {
    using __zz_cib_proc = ::std::vector<::C>::size_type (__zz_cib_decl *) (const __zz_cib_TYPE*);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::max_size>(
      __zz_cib_obj
      );
  }
  static void resize(__zz_cib_TYPE* __zz_cib_obj, ::std::vector<::C>::size_type __new_size, __zz_cib_HANDLE const * __x) {
    using __zz_cib_proc = void (__zz_cib_decl *) (__zz_cib_TYPE*, ::std::vector<::C>::size_type __new_size, __zz_cib_HANDLE const * __x);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::resize>(
      __zz_cib_obj,
      __new_size, __x);
  }
  static void shrink_to_fit(__zz_cib_TYPE* __zz_cib_obj) {
    using __zz_cib_proc = void (__zz_cib_decl *) (__zz_cib_TYPE*);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::shrink_to_fit>(
      __zz_cib_obj
      );
  }
  static ::std::vector<::C>::size_type capacity(const __zz_cib_TYPE* __zz_cib_obj) {
    using __zz_cib_proc = ::std::vector<::C>::size_type (__zz_cib_decl *) (const __zz_cib_TYPE*);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::capacity>(
      __zz_cib_obj
      );
  }
  static bool empty(const __zz_cib_TYPE* __zz_cib_obj) {
    using __zz_cib_proc = bool (__zz_cib_decl *) (const __zz_cib_TYPE*);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::empty>(
      __zz_cib_obj
      );
  }
  static void reserve(__zz_cib_TYPE* __zz_cib_obj, ::std::vector<::C>::size_type __n) {
    using __zz_cib_proc = void (__zz_cib_decl *) (__zz_cib_TYPE*, ::std::vector<::C>::size_type __n);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::reserve>(
      __zz_cib_obj,
      __n);
  }
  static __zz_cib_HANDLE* __zz_cib_OperatorIndex(__zz_cib_TYPE* __zz_cib_obj, ::std::vector<::C>::size_type __n) {
    using __zz_cib_proc = __zz_cib_HANDLE* (__zz_cib_decl *) (__zz_cib_TYPE*, ::std::vector<::C>::size_type __n);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_OperatorIndex>(
      __zz_cib_obj,
      __n);
  }
  static __zz_cib_HANDLE const * __zz_cib_OperatorIndex_16(const __zz_cib_TYPE* __zz_cib_obj, ::std::vector<::C>::size_type __n) {
    using __zz_cib_proc = __zz_cib_HANDLE const * (__zz_cib_decl *) (const __zz_cib_TYPE*, ::std::vector<::C>::size_type __n);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_OperatorIndex_16>(
      __zz_cib_obj,
      __n);
  }
  static __zz_cib_HANDLE* at(__zz_cib_TYPE* __zz_cib_obj, ::std::vector<::C>::size_type __n) {
    using __zz_cib_proc = __zz_cib_HANDLE* (__zz_cib_decl *) (__zz_cib_TYPE*, ::std::vector<::C>::size_type __n);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::at>(
      __zz_cib_obj,
      __n);
  }
  static __zz_cib_HANDLE const * at_18(const __zz_cib_TYPE* __zz_cib_obj, ::std::vector<::C>::size_type __n) {
    using __zz_cib_proc = __zz_cib_HANDLE const * (__zz_cib_decl *) (const __zz_cib_TYPE*, ::std::vector<::C>::size_type __n);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::at_18>(
      __zz_cib_obj,
      __n);
  }
  static __zz_cib_HANDLE* front(__zz_cib_TYPE* __zz_cib_obj) {
    using __zz_cib_proc = __zz_cib_HANDLE* (__zz_cib_decl *) (__zz_cib_TYPE*);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::front>(
      __zz_cib_obj
      );
  }
  static __zz_cib_HANDLE const * front_20(const __zz_cib_TYPE* __zz_cib_obj) {
    using __zz_cib_proc = __zz_cib_HANDLE const * (__zz_cib_decl *) (const __zz_cib_TYPE*);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::front_20>(
      __zz_cib_obj
      );
  }
  static __zz_cib_HANDLE* back(__zz_cib_TYPE* __zz_cib_obj) {
    using __zz_cib_proc = __zz_cib_HANDLE* (__zz_cib_decl *) (__zz_cib_TYPE*);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::back>(
      __zz_cib_obj
      );
  }
  static __zz_cib_HANDLE const * back_22(const __zz_cib_TYPE* __zz_cib_obj) {
    using __zz_cib_proc = __zz_cib_HANDLE const * (__zz_cib_decl *) (const __zz_cib_TYPE*);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::back_22>(
      __zz_cib_obj
      );
  }
  static void push_back(__zz_cib_TYPE* __zz_cib_obj, __zz_cib_HANDLE const * __x) {
    using __zz_cib_proc = void (__zz_cib_decl *) (__zz_cib_TYPE*, __zz_cib_HANDLE const * __x);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::push_back>(
      __zz_cib_obj,
      __x);
  }
  static void push_back_24(__zz_cib_TYPE* __zz_cib_obj, __zz_cib_HANDLE* __x) {
    using __zz_cib_proc = void (__zz_cib_decl *) (__zz_cib_TYPE*, __zz_cib_HANDLE* __x);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::push_back_24>(
      __zz_cib_obj,
      std::move(__x));
  }
  static void pop_back(__zz_cib_TYPE* __zz_cib_obj) {
    using __zz_cib_proc = void (__zz_cib_decl *) (__zz_cib_TYPE*);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::pop_back>(
      __zz_cib_obj
      );
  }
  static void swap(__zz_cib_TYPE* __zz_cib_obj, __zz_cib_HANDLE* __x) {
    using __zz_cib_proc = void (__zz_cib_decl *) (__zz_cib_TYPE*, __zz_cib_HANDLE* __x);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::swap>(
      __zz_cib_obj,
      __x);
  }
  static void clear(__zz_cib_TYPE* __zz_cib_obj) {
    using __zz_cib_proc = void (__zz_cib_decl *) (__zz_cib_TYPE*);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::clear>(
      __zz_cib_obj
      );
  }
  static ::std::vector<::C>* __zz_cib_create_proxy(__zz_cib_HANDLE* h) {
    return new ::std::vector<::C>(h);
  }
public:
  static ::std::vector<::C> __zz_cib_obj_from_handle(__zz_cib_HANDLE* h) {
    return ::std::vector<::C>(h);
  }
  static __zz_cib_HANDLE*& __zz_cib_get_handle(::std::vector<::C>* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_HANDLE* const& __zz_cib_get_handle(const ::std::vector<::C>* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_HANDLE* __zz_cib_release_handle(::std::vector<::C>* __zz_cib_obj) {
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
}}}
namespace std {

inline std::vector<::C>::vector(__zz_cib_::__zz_cib_HANDLE* h)
  : __zz_cib_h_(h)
{
  __zz_cib_::__zz_cib_Class256::__zz_cib_Class257::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

inline std::vector<::C>::vector()
  : std::vector<::C>(__zz_cib_::__zz_cib_Class256::__zz_cib_Class257::__zz_cib_Helper::__zz_cib_new())
{}

inline std::vector<::C>::vector(::std::vector<::C>::size_type __n, ::C const & __value)
  : std::vector<::C>(__zz_cib_::__zz_cib_Class256::__zz_cib_Class257::__zz_cib_Helper::__zz_cib_new_1(__n, __zz_cib_::__zz_cib_Class258::__zz_cib_Helper::__zz_cib_handle(__value)))
{}

inline std::vector<::C>::vector(::std::vector<::C> const & __x)
  : std::vector<::C>(__zz_cib_::__zz_cib_Class256::__zz_cib_Class257::__zz_cib_Helper::__zz_cib_copy(__zz_cib_::__zz_cib_Class256::__zz_cib_Class257::__zz_cib_Helper::__zz_cib_handle(__x)))
{}

inline std::vector<::C>::vector(::std::vector<::C>&& __x)
  : std::vector<::C>(__zz_cib_::__zz_cib_Class256::__zz_cib_Class257::__zz_cib_Helper::__zz_cib_new_3(__zz_cib_::__zz_cib_Class256::__zz_cib_Class257::__zz_cib_Helper::__zz_cib_handle(__x)))
{}

inline std::vector<::C>::~vector() {
  auto h = __zz_cib_::__zz_cib_Class256::__zz_cib_Class257::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::__zz_cib_Class256::__zz_cib_Class257::__zz_cib_Helper::__zz_cib_delete(h);
}

inline ::std::vector<::C>& std::vector<::C>::operator=(::std::vector<::C> const & __x) {
  return *__zz_cib_::__zz_cib_Class256::__zz_cib_Class257::__zz_cib_Helper::__zz_cib_from_handle(
    __zz_cib_::__zz_cib_Class256::__zz_cib_Class257::__zz_cib_Helper::__zz_cib_OperatorEqual(__zz_cib_h_, __zz_cib_::__zz_cib_Class256::__zz_cib_Class257::__zz_cib_Helper::__zz_cib_handle(__x))
  );
}

inline ::std::vector<::C>& std::vector<::C>::operator=(::std::vector<::C>&& __x) {
  return *__zz_cib_::__zz_cib_Class256::__zz_cib_Class257::__zz_cib_Helper::__zz_cib_from_handle(
    __zz_cib_::__zz_cib_Class256::__zz_cib_Class257::__zz_cib_Helper::__zz_cib_OperatorEqual_6(__zz_cib_h_, __zz_cib_::__zz_cib_Class256::__zz_cib_Class257::__zz_cib_Helper::__zz_cib_handle(__x))
  );
}

inline void std::vector<::C>::assign(::std::vector<::C>::size_type __n, ::C const & __val) {
  __zz_cib_::__zz_cib_Class256::__zz_cib_Class257::__zz_cib_Helper::assign(__zz_cib_h_, __n, __zz_cib_::__zz_cib_Class258::__zz_cib_Helper::__zz_cib_handle(__val));
}

inline ::std::vector<::C>::size_type std::vector<::C>::size() const {
  return __zz_cib_::__zz_cib_Class256::__zz_cib_Class257::__zz_cib_Helper::size(__zz_cib_h_);
}

inline ::std::vector<::C>::size_type std::vector<::C>::max_size() const {
  return __zz_cib_::__zz_cib_Class256::__zz_cib_Class257::__zz_cib_Helper::max_size(__zz_cib_h_);
}

inline void std::vector<::C>::resize(::std::vector<::C>::size_type __new_size, ::C const & __x) {
  __zz_cib_::__zz_cib_Class256::__zz_cib_Class257::__zz_cib_Helper::resize(__zz_cib_h_, __new_size, __zz_cib_::__zz_cib_Class258::__zz_cib_Helper::__zz_cib_handle(__x));
}

inline void std::vector<::C>::shrink_to_fit() {
  __zz_cib_::__zz_cib_Class256::__zz_cib_Class257::__zz_cib_Helper::shrink_to_fit(__zz_cib_h_);
}

inline ::std::vector<::C>::size_type std::vector<::C>::capacity() const {
  return __zz_cib_::__zz_cib_Class256::__zz_cib_Class257::__zz_cib_Helper::capacity(__zz_cib_h_);
}

inline bool std::vector<::C>::empty() const {
  return __zz_cib_::__zz_cib_Class256::__zz_cib_Class257::__zz_cib_Helper::empty(__zz_cib_h_);
}

inline void std::vector<::C>::reserve(::std::vector<::C>::size_type __n) {
  __zz_cib_::__zz_cib_Class256::__zz_cib_Class257::__zz_cib_Helper::reserve(__zz_cib_h_, __n);
}

inline ::C& std::vector<::C>::operator[](::std::vector<::C>::size_type __n) {
  return *__zz_cib_::__zz_cib_Class258::__zz_cib_Helper::__zz_cib_from_handle(
    __zz_cib_::__zz_cib_Class256::__zz_cib_Class257::__zz_cib_Helper::__zz_cib_OperatorIndex(__zz_cib_h_, __n)
  );
}

inline ::C const & std::vector<::C>::operator[](::std::vector<::C>::size_type __n) const {
  return *__zz_cib_::__zz_cib_Class258::__zz_cib_Helper::__zz_cib_from_handle(
    __zz_cib_::__zz_cib_Class256::__zz_cib_Class257::__zz_cib_Helper::__zz_cib_OperatorIndex_16(__zz_cib_h_, __n)
  );
}

inline ::C& std::vector<::C>::at(::std::vector<::C>::size_type __n) {
  return *__zz_cib_::__zz_cib_Class258::__zz_cib_Helper::__zz_cib_from_handle(
    __zz_cib_::__zz_cib_Class256::__zz_cib_Class257::__zz_cib_Helper::at(__zz_cib_h_, __n)
  );
}

inline ::C const & std::vector<::C>::at(::std::vector<::C>::size_type __n) const {
  return *__zz_cib_::__zz_cib_Class258::__zz_cib_Helper::__zz_cib_from_handle(
    __zz_cib_::__zz_cib_Class256::__zz_cib_Class257::__zz_cib_Helper::at_18(__zz_cib_h_, __n)
  );
}

inline ::C& std::vector<::C>::front() {
  return *__zz_cib_::__zz_cib_Class258::__zz_cib_Helper::__zz_cib_from_handle(
    __zz_cib_::__zz_cib_Class256::__zz_cib_Class257::__zz_cib_Helper::front(__zz_cib_h_)
  );
}

inline ::C const & std::vector<::C>::front() const {
  return *__zz_cib_::__zz_cib_Class258::__zz_cib_Helper::__zz_cib_from_handle(
    __zz_cib_::__zz_cib_Class256::__zz_cib_Class257::__zz_cib_Helper::front_20(__zz_cib_h_)
  );
}

inline ::C& std::vector<::C>::back() {
  return *__zz_cib_::__zz_cib_Class258::__zz_cib_Helper::__zz_cib_from_handle(
    __zz_cib_::__zz_cib_Class256::__zz_cib_Class257::__zz_cib_Helper::back(__zz_cib_h_)
  );
}

inline ::C const & std::vector<::C>::back() const {
  return *__zz_cib_::__zz_cib_Class258::__zz_cib_Helper::__zz_cib_from_handle(
    __zz_cib_::__zz_cib_Class256::__zz_cib_Class257::__zz_cib_Helper::back_22(__zz_cib_h_)
  );
}

inline void std::vector<::C>::push_back(::C const & __x) {
  __zz_cib_::__zz_cib_Class256::__zz_cib_Class257::__zz_cib_Helper::push_back(__zz_cib_h_, __zz_cib_::__zz_cib_Class258::__zz_cib_Helper::__zz_cib_handle(__x));
}

inline void std::vector<::C>::push_back(::C&& __x) {
  __zz_cib_::__zz_cib_Class256::__zz_cib_Class257::__zz_cib_Helper::push_back_24(__zz_cib_h_, __zz_cib_::__zz_cib_Class258::__zz_cib_Helper::__zz_cib_handle(__x));
}

inline void std::vector<::C>::pop_back() {
  __zz_cib_::__zz_cib_Class256::__zz_cib_Class257::__zz_cib_Helper::pop_back(__zz_cib_h_);
}

inline void std::vector<::C>::swap(::std::vector<::C>& __x) {
  __zz_cib_::__zz_cib_Class256::__zz_cib_Class257::__zz_cib_Helper::swap(__zz_cib_h_, __zz_cib_::__zz_cib_Class256::__zz_cib_Class257::__zz_cib_Helper::__zz_cib_handle(__x));
}

inline void std::vector<::C>::clear() {
  __zz_cib_::__zz_cib_Class256::__zz_cib_Class257::__zz_cib_Helper::clear(__zz_cib_h_);
}
}
