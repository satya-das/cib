#pragma once


#include "template.h"

template<>
class TemplateClassWithTwoParams<int, float>
{
public:
  TemplateClassWithTwoParams(TemplateClassWithTwoParams<int, float>&& rhs);
public:
  TemplateClassWithTwoParams(const TemplateClassWithTwoParams<int, float>& );
  ~TemplateClassWithTwoParams();
  TemplateClassWithTwoParams(int _a1, float _a2);
  int get1() const;
  float get2() const;

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(__ZZ_CIB_CLASS_NAME(TemplateClassWithTwoParams<int, float>), __ZZ_CIB_CLASS_NAME(TemplateClassWithTwoParams<int, float>));
};


namespace __zz_cib_ {
template <>
struct __zz_cib_Helper<::TemplateClassWithTwoParams<int, float>> : public __zz_cib_MethodTableHelper {
  using __zz_cib_AbiType = typename ::TemplateClassWithTwoParams<int, float>::__zz_cib_AbiType;
  using _ProxyClass = ::TemplateClassWithTwoParams<int, float>;
  friend class ::TemplateClassWithTwoParams<int, float>;
  TemplateTests::__zz_cib_local_proxy_mgr<_ProxyClass> proxyMgr;
  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class258::__zz_cib_methodid;

  __zz_cib_Helper()
    : __zz_cib_MethodTableHelper(
      __zz_cib_TemplateTests_GetMethodTable(__zz_cib_ids::__zz_cib_Class258::__zz_cib_classid))
  {}
  static __zz_cib_Helper& instance() {
    static __zz_cib_Helper helper;
    return helper;
  }

  template <typename ..._Args>
  static __zz_cib_AbiType __zz_cib_copy(_Args... __zz_cib_args) {
    using __zz_cib_proc = __zz_cib_AbiType (__zz_cib_decl *) (_Args...);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_copy>(
      __zz_cib_args...);
  }
  static auto __zz_cib_delete(__zz_cib_AbiType __zz_cib_obj) {
    if (__zz_cib_obj) {
      using __zz_cib_proc = void (__zz_cib_decl *) (__zz_cib_AbiType);
      return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_delete>(
        __zz_cib_obj
        );
    }
  }
  template <typename ..._Args>
  static __zz_cib_AbiType __zz_cib_new(_Args... __zz_cib_args) {
    using __zz_cib_proc = __zz_cib_AbiType (__zz_cib_decl *) (_Args...);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_new>(
      __zz_cib_args...);
  }
  template <typename _RT>
  static auto get1(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::get1>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto get2(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::get2>(
      __zz_cib_obj
      );
  }
  static ::TemplateClassWithTwoParams<int, float>* __zz_cib_create_proxy(__zz_cib_AbiType h) {
    return new ::TemplateClassWithTwoParams<int, float>(h);
  }
  static ::TemplateClassWithTwoParams<int, float> __zz_cib_obj_from_handle(__zz_cib_AbiType h) {
    return ::TemplateClassWithTwoParams<int, float>(h);
  }
  static __zz_cib_AbiType& __zz_cib_get_handle(::TemplateClassWithTwoParams<int, float>* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_AbiType const& __zz_cib_get_handle(const ::TemplateClassWithTwoParams<int, float>* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_AbiType __zz_cib_release_handle(::TemplateClassWithTwoParams<int, float>* __zz_cib_obj) {
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

inline TemplateClassWithTwoParams<int, float>::TemplateClassWithTwoParams(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

inline TemplateClassWithTwoParams<int, float>::TemplateClassWithTwoParams(TemplateClassWithTwoParams<int, float>&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

inline TemplateClassWithTwoParams<int, float>::TemplateClassWithTwoParams(const TemplateClassWithTwoParams<int, float>& __zz_cib_param0)
  : TemplateClassWithTwoParams<int, float>(__zz_cib_MyHelper::__zz_cib_copy(
        __zz_cib_::__zz_cib_ToAbiType<const TemplateClassWithTwoParams<int, float>&>(__zz_cib_param0)))
  {}

inline TemplateClassWithTwoParams<int, float>::~TemplateClassWithTwoParams() {
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete(
    h
  );
}

inline TemplateClassWithTwoParams<int, float>::TemplateClassWithTwoParams(int _a1, float _a2)
  : TemplateClassWithTwoParams<int, float>(__zz_cib_MyHelper::__zz_cib_new(
        __zz_cib_::__zz_cib_ToAbiType<int>(_a1),
    __zz_cib_::__zz_cib_ToAbiType<float>(_a2)))
  {}

inline int TemplateClassWithTwoParams<int, float>::get1() const {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::get1<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

inline float TemplateClassWithTwoParams<int, float>::get2() const {
  return __zz_cib_::__zz_cib_FromAbiType<float>(
    __zz_cib_MyHelper::get2<__zz_cib_::__zz_cib_AbiType_t<float>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

