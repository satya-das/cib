#pragma once


#include "template.h"

template<>
class TemplateClassWithOneParam<int>
{
public:
  TemplateClassWithOneParam(TemplateClassWithOneParam<int>&& rhs);
public:
  TemplateClassWithOneParam(const TemplateClassWithOneParam<int>& );
  ~TemplateClassWithOneParam();
  TemplateClassWithOneParam(int _a1);
  int get() const;

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(__ZZ_CIB_CLASS_NAME(TemplateClassWithOneParam<int>), __ZZ_CIB_CLASS_NAME(TemplateClassWithOneParam<int>));
};


namespace __zz_cib_ {
template <>
struct __zz_cib_Helper<::TemplateClassWithOneParam<int>> : public __zz_cib_MethodTableHelper {
  using __zz_cib_AbiType = typename ::TemplateClassWithOneParam<int>::__zz_cib_AbiType;
  using _ProxyClass = ::TemplateClassWithOneParam<int>;
  friend class ::TemplateClassWithOneParam<int>;
  TemplateTests::__zz_cib_local_proxy_mgr<_ProxyClass> proxyMgr;
  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class257::__zz_cib_methodid;

  __zz_cib_Helper()
    : __zz_cib_MethodTableHelper(
      __zz_cib_TemplateTests_GetMethodTable(__zz_cib_ids::__zz_cib_Class257::__zz_cib_classid))
  {}
  static __zz_cib_Helper& instance() {
    static __zz_cib_Helper helper;
    return helper;
  }

  template <typename ..._Args>
  static __zz_cib_AbiType __zz_cib_copy_0(_Args... __zz_cib_args) {
    using __zz_cib_proc = __zz_cib_AbiType (__zz_cib_decl *) (_Args...);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_copy_0>(
      __zz_cib_args...);
  }
  static auto __zz_cib_delete_1(__zz_cib_AbiType __zz_cib_obj) {
    if (__zz_cib_obj) {
      using __zz_cib_proc = void (__zz_cib_decl *) (__zz_cib_AbiType);
      return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_delete_1>(
        __zz_cib_obj
        );
    }
  }
  template <typename ..._Args>
  static __zz_cib_AbiType __zz_cib_new_2(_Args... __zz_cib_args) {
    using __zz_cib_proc = __zz_cib_AbiType (__zz_cib_decl *) (_Args...);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_new_2>(
      __zz_cib_args...);
  }
  template <typename _RT>
  static auto get_3(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::get_3>(
      __zz_cib_obj
      );
  }
  static ::TemplateClassWithOneParam<int>* __zz_cib_create_proxy(__zz_cib_AbiType h) {
    return new ::TemplateClassWithOneParam<int>(h);
  }
  static ::TemplateClassWithOneParam<int> __zz_cib_obj_from_handle(__zz_cib_AbiType h) {
    return ::TemplateClassWithOneParam<int>(h);
  }
  static __zz_cib_AbiType& __zz_cib_get_handle(::TemplateClassWithOneParam<int>* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_AbiType const& __zz_cib_get_handle(const ::TemplateClassWithOneParam<int>* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_AbiType __zz_cib_release_handle(::TemplateClassWithOneParam<int>* __zz_cib_obj) {
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

inline TemplateClassWithOneParam<int>::TemplateClassWithOneParam(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

inline TemplateClassWithOneParam<int>::TemplateClassWithOneParam(TemplateClassWithOneParam<int>&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

inline TemplateClassWithOneParam<int>::TemplateClassWithOneParam(const ::TemplateClassWithOneParam<int>& __zz_cib_param0)
  : TemplateClassWithOneParam<int>(__zz_cib_MyHelper::__zz_cib_copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
  {}

inline TemplateClassWithOneParam<int>::~TemplateClassWithOneParam() {
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete_1(
    h
  );
}

inline TemplateClassWithOneParam<int>::TemplateClassWithOneParam(int _a1)
  : TemplateClassWithOneParam<int>(__zz_cib_MyHelper::__zz_cib_new_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(_a1)>(_a1)))
  {}

inline int TemplateClassWithOneParam<int>::get() const {
  return __zz_cib_::__zz_cib_FromRValueAbiType<int>(
    __zz_cib_MyHelper::get_3<__zz_cib_::__zz_cib_RValueAbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

