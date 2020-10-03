#pragma once


#include "template.h"

namespace __zz_cib_ {
template <typename T>
struct __zz_cib_Helper<::TemplateClassWithTwoParamsAndDefaultParameter<int, int>, T> : public __zz_cib_MethodTableHelper {
  static_assert(std::is_same_v<T, ::TemplateClassWithTwoParamsAndDefaultParameter<int, int>>);
  using __zz_cib_AbiType = typename T::__zz_cib_AbiType;
  using _ProxyClass = T;
  friend class ::TemplateClassWithTwoParamsAndDefaultParameter<int, int>;
  TemplateTests::__zz_cib_local_proxy_mgr<_ProxyClass> proxyMgr;
  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class259::__zz_cib_methodid;

  __zz_cib_Helper()
    : __zz_cib_MethodTableHelper(
      __zz_cib_TemplateTests_GetMethodTable(__zz_cib_ids::__zz_cib_Class259::__zz_cib_classid))
  {}
  static __zz_cib_Helper& __zz_cib_instance() {
    static __zz_cib_Helper helper;
    return helper;
  }
  static __zz_cib_MethodTableHelper& __zz_cib_mtbl() {
    return __zz_cib_instance();
  }

  template <typename ..._Args>
  static __zz_cib_AbiType __zz_cib_copy_0(_Args... __zz_cib_args) {
    using __zz_cib_proc = __zz_cib_AbiType (__zz_cib_decl *) (_Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_copy_0>(
      __zz_cib_args...);
  }
  static auto __zz_cib_delete_1(__zz_cib_AbiType __zz_cib_obj) {
    if (__zz_cib_obj) {
      using __zz_cib_proc = void (__zz_cib_decl *) (__zz_cib_AbiType);
      return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_delete_1>(
        __zz_cib_obj
        );
    }
  }
  template <typename ..._Args>
  static __zz_cib_AbiType __zz_cib_new_2(_Args... __zz_cib_args) {
    using __zz_cib_proc = __zz_cib_AbiType (__zz_cib_decl *) (_Args...);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::__zz_cib_new_2>(
      __zz_cib_args...);
  }
  template <typename _RT>
  static auto get1_3(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::get1_3>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto get2_4(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return __zz_cib_mtbl().invoke<__zz_cib_proc, __zz_cib_methodid::get2_4>(
      __zz_cib_obj
      );
  }
  static T* __zz_cib_create_proxy(__zz_cib_AbiType h) {
    return new T(h);
  }
  static T __zz_cib_obj_from_handle(__zz_cib_AbiType h) {
    return T(h);
  }
  static __zz_cib_AbiType& __zz_cib_get_handle(T* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_AbiType const& __zz_cib_get_handle(const T* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_AbiType __zz_cib_release_handle(T* __zz_cib_obj) {
    if (__zz_cib_obj->__zz_cib_h_ == nullptr) return nullptr;
    __zz_cib_remove_proxy(__zz_cib_obj->__zz_cib_h_);
    auto h = __zz_cib_obj->__zz_cib_h_;
    __zz_cib_obj->__zz_cib_h_ = nullptr;
    return h;
  }
  static _ProxyClass* __zz_cib_from_handle(__zz_cib_AbiType h) {
    auto&  dis   = __zz_cib_instance();
    auto* proxy = dis.proxyMgr.findProxy(h);
    if (proxy == nullptr)
      proxy = __zz_cib_create_proxy(h);
    return proxy;
  }
  static void __zz_cib_add_proxy(_ProxyClass* __zz_cib_obj, __zz_cib_AbiType h) {
    auto& dis = __zz_cib_instance();
    dis.proxyMgr.addProxy(__zz_cib_obj, h);
  }
  static void __zz_cib_remove_proxy(__zz_cib_AbiType h) {
    auto& dis = __zz_cib_instance();
      dis.proxyMgr.removeProxy(h);
  }
};
}

template<>
class TemplateClassWithTwoParamsAndDefaultParameter<int, int>
{
public:
  template <typename __zz_cib_Dummy = std::pair<TemplateClassWithTwoParamsAndDefaultParameter<int, int>, TemplateClassWithTwoParamsAndDefaultParameter<int, int>>>
  TemplateClassWithTwoParamsAndDefaultParameter(const ::TemplateClassWithTwoParamsAndDefaultParameter<int, int>& __zz_cib_param0)
    : TemplateClassWithTwoParamsAndDefaultParameter<int, int>(__zz_cib_MyHelper::__zz_cib_copy_0(
            __zz_cib_::__zz_cib_LazyAbiType<__zz_cib_Dummy, decltype(__zz_cib_param0)>(__zz_cib_param0)))
    {}
  ~TemplateClassWithTwoParamsAndDefaultParameter() {
  auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
    __zz_cib_MyHelper::__zz_cib_delete_1(
      h
    );
  }
  template <typename __zz_cib_Dummy = std::pair<TemplateClassWithTwoParamsAndDefaultParameter<int, int>, TemplateClassWithTwoParamsAndDefaultParameter<int, int>>>
  TemplateClassWithTwoParamsAndDefaultParameter(int _a1, int _a2)
    : TemplateClassWithTwoParamsAndDefaultParameter<int, int>(__zz_cib_MyHelper::__zz_cib_new_2(
            __zz_cib_::__zz_cib_LazyAbiType<__zz_cib_Dummy, decltype(_a1)>(std::move(_a1)),
      __zz_cib_::__zz_cib_LazyAbiType<__zz_cib_Dummy, decltype(_a2)>(std::move(_a2))))
    {}
  template <typename __zz_cib_Dummy = std::pair<TemplateClassWithTwoParamsAndDefaultParameter<int, int>, TemplateClassWithTwoParamsAndDefaultParameter<int, int>>>
  int get1() const {
    return __zz_cib_::__zz_cib_FromAbiType<int>(
      __zz_cib_MyHelper::get1_3<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, int>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }
  template <typename __zz_cib_Dummy = std::pair<TemplateClassWithTwoParamsAndDefaultParameter<int, int>, TemplateClassWithTwoParamsAndDefaultParameter<int, int>>>
  int get2() const {
    return __zz_cib_::__zz_cib_FromAbiType<int>(
      __zz_cib_MyHelper::get2_4<__zz_cib_::__zz_cib_LazyAbiType_t<__zz_cib_Dummy, int>>(
        __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
      )
    );
  }

private:
  __ZZ_CIB_TEMPLATE_CLASS_INTERNALS(__ZZ_CIB_CLASS_NAME(TemplateClassWithTwoParamsAndDefaultParameter<int, int>), __ZZ_CIB_CLASS_NAME(TemplateClassWithTwoParamsAndDefaultParameter<int, int>));
};

