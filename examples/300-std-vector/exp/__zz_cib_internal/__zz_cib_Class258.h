#pragma once


#include "example.h"
#include <vector>
 namespace std {
template<>
class vector<::C*>
{
public:
  using value_type = ::C*;
  using const_reference = const value_type&;
  using size_type = size_t;
  vector();
  vector(size_type __n, const value_type& __value);
  vector(const vector<::C*>& __x);
  vector(vector<::C*>&& __x);
  ~vector();
  vector<::C*>& operator=(const vector<::C*>& __x);
  vector<::C*>& operator=(vector<::C*>&& __x);
  void assign(size_type __n, const value_type& __val);
  size_type size() const;
  size_type max_size() const;
  void resize(size_type __new_size, const value_type& __x);
  void shrink_to_fit();
  size_type capacity() const;
  bool empty() const;
  void reserve(size_type __n);
  const __zz_cib_::return_value_t<value_type> operator[](size_type __n) const;
  const __zz_cib_::return_value_t<value_type> at(size_type __n) const;
  const __zz_cib_::return_value_t<value_type> front() const;
  const __zz_cib_::return_value_t<value_type> back() const;
  void push_back(const value_type& __x);
  void push_back(value_type&& __x);
  void pop_back();
  void swap(vector<::C*>& __x);
  void clear();

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(__ZZ_CIB_CLASS_NAME(vector<::C*>), __ZZ_CIB_CLASS_NAME(std::vector<::C*>));
};
}

namespace __zz_cib_ {
using namespace ::std;
template <>
struct __zz_cib_Helper<::std::vector<::C*>> : public __zz_cib_MethodTableHelper {
  using __zz_cib_AbiType = typename ::std::vector<::C*>::__zz_cib_AbiType;
  using _ProxyClass = ::std::vector<::C*>;
  friend class ::std::vector<::C*>;
  Example::__zz_cib_local_proxy_mgr<_ProxyClass> proxyMgr;
  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class256::__zz_cib_Class258::__zz_cib_methodid;

  __zz_cib_Helper()
    : __zz_cib_MethodTableHelper(
      __zz_cib_Example_GetMethodTable(__zz_cib_ids::__zz_cib_Class256::__zz_cib_Class258::__zz_cib_classid))
  {}
  static __zz_cib_Helper& instance() {
    static __zz_cib_Helper helper;
    return helper;
  }

  static __zz_cib_AbiType __zz_cib_new_0() {
    using __zz_cib_proc = __zz_cib_AbiType (__zz_cib_decl *) ();
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_new_0>(
      );
  }
  template <typename ..._Args>
  static __zz_cib_AbiType __zz_cib_new_1(_Args... __zz_cib_args) {
    using __zz_cib_proc = __zz_cib_AbiType (__zz_cib_decl *) (_Args...);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_new_1>(
      __zz_cib_args...);
  }
  template <typename ..._Args>
  static __zz_cib_AbiType __zz_cib_copy_2(_Args... __zz_cib_args) {
    using __zz_cib_proc = __zz_cib_AbiType (__zz_cib_decl *) (_Args...);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_copy_2>(
      __zz_cib_args...);
  }
  template <typename ..._Args>
  static __zz_cib_AbiType __zz_cib_new_3(_Args... __zz_cib_args) {
    using __zz_cib_proc = __zz_cib_AbiType (__zz_cib_decl *) (_Args...);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_new_3>(
      __zz_cib_args...);
  }
  static auto __zz_cib_delete_4(__zz_cib_AbiType __zz_cib_obj) {
    if (__zz_cib_obj) {
      using __zz_cib_proc = void (__zz_cib_decl *) (__zz_cib_AbiType);
      return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_delete_4>(
        __zz_cib_obj
        );
    }
  }
  template <typename _RT, typename ..._Args>
  static auto __zz_cib_OperatorEqual_5(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_OperatorEqual_5>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto __zz_cib_OperatorEqual_6(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_OperatorEqual_6>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto assign_7(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::assign_7>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT>
  static auto size_8(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::size_8>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto max_size_9(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::max_size_9>(
      __zz_cib_obj
      );
  }
  template <typename _RT, typename ..._Args>
  static auto resize_10(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::resize_10>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT>
  static auto shrink_to_fit_11(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::shrink_to_fit_11>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto capacity_12(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::capacity_12>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto empty_13(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::empty_13>(
      __zz_cib_obj
      );
  }
  template <typename _RT, typename ..._Args>
  static auto reserve_14(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::reserve_14>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto __zz_cib_OperatorIndex_15(const __zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType, _Args...);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_OperatorIndex_15>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto at_16(const __zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType, _Args...);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::at_16>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT>
  static auto front_17(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::front_17>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto back_18(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::back_18>(
      __zz_cib_obj
      );
  }
  template <typename _RT, typename ..._Args>
  static auto push_back_19(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::push_back_19>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT, typename ..._Args>
  static auto push_back_20(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::push_back_20>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT>
  static auto pop_back_21(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::pop_back_21>(
      __zz_cib_obj
      );
  }
  template <typename _RT, typename ..._Args>
  static auto swap_22(__zz_cib_AbiType __zz_cib_obj, _Args... __zz_cib_args) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType, _Args...);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::swap_22>(
      __zz_cib_obj,
      __zz_cib_args...);
  }
  template <typename _RT>
  static auto clear_23(__zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (__zz_cib_AbiType);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::clear_23>(
      __zz_cib_obj
      );
  }
  static ::std::vector<::C*>* __zz_cib_create_proxy(__zz_cib_AbiType h) {
    return new ::std::vector<::C*>(h);
  }
  static ::std::vector<::C*> __zz_cib_obj_from_handle(__zz_cib_AbiType h) {
    return ::std::vector<::C*>(h);
  }
  static __zz_cib_AbiType& __zz_cib_get_handle(::std::vector<::C*>* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_AbiType const& __zz_cib_get_handle(const ::std::vector<::C*>* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_AbiType __zz_cib_release_handle(::std::vector<::C*>* __zz_cib_obj) {
    if (__zz_cib_obj->__zz_cib_h_ == nullptr) return nullptr;
    __zz_cib_remove_proxy(__zz_cib_obj->__zz_cib_h_);
    auto h = __zz_cib_obj->__zz_cib_h_;
    __zz_cib_obj->__zz_cib_h_ = nullptr;
    return h;
  }
  static _ProxyClass* __zz_cib_from_handle(__zz_cib_AbiType h) {
    auto&  dis   = instance();
    auto* proxy = dis.proxyMgr.findProxy(h);
    if (proxy == nullptr)
      proxy = __zz_cib_create_proxy(h);
    return proxy;
  }
  static void __zz_cib_add_proxy(_ProxyClass* __zz_cib_obj, __zz_cib_AbiType h) {
    auto& dis = instance();
    dis.proxyMgr.addProxy(__zz_cib_obj, h);
  }
  static void __zz_cib_remove_proxy(__zz_cib_AbiType h) {
    auto& dis = instance();
      dis.proxyMgr.removeProxy(h);
  }
};
}
namespace std {

inline std::vector<::C*>::vector(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

inline std::vector<::C*>::vector()
  : std::vector<::C*>(__zz_cib_MyHelper::__zz_cib_new_0(
    ))
  {}

inline std::vector<::C*>::vector(::std::vector<::C*>::size_type __n, const ::std::vector<::C*>::value_type& __value)
  : std::vector<::C*>(__zz_cib_MyHelper::__zz_cib_new_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__n)>(std::move(__n)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(__value)>(__value)))
  {}

inline std::vector<::C*>::vector(const ::std::vector<::C*>& __x)
  : std::vector<::C*>(__zz_cib_MyHelper::__zz_cib_copy_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__x)>(__x)))
  {}

inline std::vector<::C*>::vector(::std::vector<::C*>&& __x)
  : std::vector<::C*>(__zz_cib_MyHelper::__zz_cib_new_3(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__x)>(std::move(__x))))
  {}

inline std::vector<::C*>::~vector() {
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete_4(
    h
  );
}

inline ::std::vector<::C*>& std::vector<::C*>::operator=(const ::std::vector<::C*>& __x) {
  return __zz_cib_::__zz_cib_FromRValueAbiType<::std::vector<::C*>&>(
    __zz_cib_MyHelper::__zz_cib_OperatorEqual_5<__zz_cib_::__zz_cib_RValueAbiType_t<::std::vector<::C*>&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(__x)>(__x)
    )
  );
}

inline ::std::vector<::C*>& std::vector<::C*>::operator=(::std::vector<::C*>&& __x) {
  return __zz_cib_::__zz_cib_FromRValueAbiType<::std::vector<::C*>&>(
    __zz_cib_MyHelper::__zz_cib_OperatorEqual_6<__zz_cib_::__zz_cib_RValueAbiType_t<::std::vector<::C*>&>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(__x)>(std::move(__x))
    )
  );
}

inline void std::vector<::C*>::assign(::std::vector<::C*>::size_type __n, const ::std::vector<::C*>::value_type& __val) {
  __zz_cib_MyHelper::assign_7<__zz_cib_::__zz_cib_RValueAbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(__n)>(std::move(__n)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(__val)>(__val)
  );
}

inline ::std::vector<::C*>::size_type std::vector<::C*>::size() const {
  return __zz_cib_::__zz_cib_FromRValueAbiType<::std::vector<::C*>::size_type>(
    __zz_cib_MyHelper::size_8<__zz_cib_::__zz_cib_RValueAbiType_t<::std::vector<::C*>::size_type>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

inline ::std::vector<::C*>::size_type std::vector<::C*>::max_size() const {
  return __zz_cib_::__zz_cib_FromRValueAbiType<::std::vector<::C*>::size_type>(
    __zz_cib_MyHelper::max_size_9<__zz_cib_::__zz_cib_RValueAbiType_t<::std::vector<::C*>::size_type>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

inline void std::vector<::C*>::resize(::std::vector<::C*>::size_type __new_size, const ::std::vector<::C*>::value_type& __x) {
  __zz_cib_MyHelper::resize_10<__zz_cib_::__zz_cib_RValueAbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(__new_size)>(std::move(__new_size)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(__x)>(__x)
  );
}

inline void std::vector<::C*>::shrink_to_fit() {
  __zz_cib_MyHelper::shrink_to_fit_11<__zz_cib_::__zz_cib_RValueAbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
  );
}

inline ::std::vector<::C*>::size_type std::vector<::C*>::capacity() const {
  return __zz_cib_::__zz_cib_FromRValueAbiType<::std::vector<::C*>::size_type>(
    __zz_cib_MyHelper::capacity_12<__zz_cib_::__zz_cib_RValueAbiType_t<::std::vector<::C*>::size_type>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

inline bool std::vector<::C*>::empty() const {
  return __zz_cib_::__zz_cib_FromRValueAbiType<bool>(
    __zz_cib_MyHelper::empty_13<__zz_cib_::__zz_cib_RValueAbiType_t<bool>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

inline void std::vector<::C*>::reserve(::std::vector<::C*>::size_type __n) {
  __zz_cib_MyHelper::reserve_14<__zz_cib_::__zz_cib_RValueAbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(__n)>(std::move(__n))
  );
}

inline const __zz_cib_::return_value_t<value_type> std::vector<::C*>::operator[](::std::vector<::C*>::size_type __n) const {
  return __zz_cib_::__zz_cib_FromRValueAbiType<const __zz_cib_::return_value_t<value_type>>(
    __zz_cib_MyHelper::__zz_cib_OperatorIndex_15<__zz_cib_::__zz_cib_RValueAbiType_t<const __zz_cib_::return_value_t<value_type>>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(__n)>(std::move(__n))
    )
  );
}

inline const __zz_cib_::return_value_t<value_type> std::vector<::C*>::at(::std::vector<::C*>::size_type __n) const {
  return __zz_cib_::__zz_cib_FromRValueAbiType<const __zz_cib_::return_value_t<value_type>>(
    __zz_cib_MyHelper::at_16<__zz_cib_::__zz_cib_RValueAbiType_t<const __zz_cib_::return_value_t<value_type>>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(__n)>(std::move(__n))
    )
  );
}

inline const __zz_cib_::return_value_t<value_type> std::vector<::C*>::front() const {
  return __zz_cib_::__zz_cib_FromRValueAbiType<const __zz_cib_::return_value_t<value_type>>(
    __zz_cib_MyHelper::front_17<__zz_cib_::__zz_cib_RValueAbiType_t<const __zz_cib_::return_value_t<value_type>>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

inline const __zz_cib_::return_value_t<value_type> std::vector<::C*>::back() const {
  return __zz_cib_::__zz_cib_FromRValueAbiType<const __zz_cib_::return_value_t<value_type>>(
    __zz_cib_MyHelper::back_18<__zz_cib_::__zz_cib_RValueAbiType_t<const __zz_cib_::return_value_t<value_type>>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

inline void std::vector<::C*>::push_back(const ::std::vector<::C*>::value_type& __x) {
  __zz_cib_MyHelper::push_back_19<__zz_cib_::__zz_cib_RValueAbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(__x)>(__x)
  );
}

inline void std::vector<::C*>::push_back(::std::vector<::C*>::value_type&& __x) {
  __zz_cib_MyHelper::push_back_20<__zz_cib_::__zz_cib_RValueAbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(__x)>(std::move(__x))
  );
}

inline void std::vector<::C*>::pop_back() {
  __zz_cib_MyHelper::pop_back_21<__zz_cib_::__zz_cib_RValueAbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
  );
}

inline void std::vector<::C*>::swap(::std::vector<::C*>& __x) {
  __zz_cib_MyHelper::swap_22<__zz_cib_::__zz_cib_RValueAbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
    __zz_cib_::__zz_cib_ToAbiType<decltype(__x)>(__x)
  );
}

inline void std::vector<::C*>::clear() {
  __zz_cib_MyHelper::clear_23<__zz_cib_::__zz_cib_RValueAbiType_t<void>>(
    __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
  );
}
}
