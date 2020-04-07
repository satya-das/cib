#pragma once


#include "template.h"

template<>
class TemplateClassWithTwoParamsAndDefaultParameter<int, int>
{
public:
  TemplateClassWithTwoParamsAndDefaultParameter(TemplateClassWithTwoParamsAndDefaultParameter<int, int>&& rhs);
public:
  TemplateClassWithTwoParamsAndDefaultParameter(const TemplateClassWithTwoParamsAndDefaultParameter<int, int>& );
  ~TemplateClassWithTwoParamsAndDefaultParameter();
  TemplateClassWithTwoParamsAndDefaultParameter(int _a1, int _a2);
  int get1() const;
  int get2() const;

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(__ZZ_CIB_CLASS_NAME(TemplateClassWithTwoParamsAndDefaultParameter<int, int>), __ZZ_CIB_CLASS_NAME(TemplateClassWithTwoParamsAndDefaultParameter<int, int>));
};


namespace __zz_cib_ {
template <>
struct __zz_cib_Helper<::TemplateClassWithTwoParamsAndDefaultParameter<int, int>> : public __zz_cib_MethodTableHelper {
  using __zz_cib_AbiType = typename ::TemplateClassWithTwoParamsAndDefaultParameter<int, int>::__zz_cib_AbiType;
  using _ProxyClass = ::TemplateClassWithTwoParamsAndDefaultParameter<int, int>;
  friend class ::TemplateClassWithTwoParamsAndDefaultParameter<int, int>;
  TemplateTests::__zz_cib_local_proxy_mgr<_ProxyClass> proxyMgr;
  using __zz_cib_methodid = __zz_cib_::__zz_cib_ids::__zz_cib_Class259::__zz_cib_methodid;

  __zz_cib_Helper()
    : __zz_cib_MethodTableHelper(
      __zz_cib_TemplateTests_GetMethodTable(__zz_cib_ids::__zz_cib_Class259::__zz_cib_classid))
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
  static auto get1_3(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::get1_3>(
      __zz_cib_obj
      );
  }
  template <typename _RT>
  static auto get2_4(const __zz_cib_AbiType __zz_cib_obj) {
    using __zz_cib_proc = _RT (__zz_cib_decl *) (const __zz_cib_AbiType);
    return instance().invoke<__zz_cib_proc, __zz_cib_methodid::get2_4>(
      __zz_cib_obj
      );
  }
  static ::TemplateClassWithTwoParamsAndDefaultParameter<int, int>* __zz_cib_create_proxy(__zz_cib_AbiType h) {
    return new ::TemplateClassWithTwoParamsAndDefaultParameter<int, int>(h);
  }
  static ::TemplateClassWithTwoParamsAndDefaultParameter<int, int> __zz_cib_obj_from_handle(__zz_cib_AbiType h) {
    return ::TemplateClassWithTwoParamsAndDefaultParameter<int, int>(h);
  }
  static __zz_cib_AbiType& __zz_cib_get_handle(::TemplateClassWithTwoParamsAndDefaultParameter<int, int>* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_AbiType const& __zz_cib_get_handle(const ::TemplateClassWithTwoParamsAndDefaultParameter<int, int>* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_AbiType __zz_cib_release_handle(::TemplateClassWithTwoParamsAndDefaultParameter<int, int>* __zz_cib_obj) {
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

inline TemplateClassWithTwoParamsAndDefaultParameter<int, int>::TemplateClassWithTwoParamsAndDefaultParameter(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

inline TemplateClassWithTwoParamsAndDefaultParameter<int, int>::TemplateClassWithTwoParamsAndDefaultParameter(TemplateClassWithTwoParamsAndDefaultParameter<int, int>&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_MyHelper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

inline TemplateClassWithTwoParamsAndDefaultParameter<int, int>::TemplateClassWithTwoParamsAndDefaultParameter(const ::TemplateClassWithTwoParamsAndDefaultParameter<int, int>& __zz_cib_param0)
  : TemplateClassWithTwoParamsAndDefaultParameter<int, int>(__zz_cib_MyHelper::__zz_cib_copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
  {}

inline TemplateClassWithTwoParamsAndDefaultParameter<int, int>::~TemplateClassWithTwoParamsAndDefaultParameter() {
auto h = __zz_cib_MyHelper::__zz_cib_release_handle(this);
  __zz_cib_MyHelper::__zz_cib_delete_1(
    h
  );
}

inline TemplateClassWithTwoParamsAndDefaultParameter<int, int>::TemplateClassWithTwoParamsAndDefaultParameter(int _a1, int _a2)
  : TemplateClassWithTwoParamsAndDefaultParameter<int, int>(__zz_cib_MyHelper::__zz_cib_new_2(
        __zz_cib_::__zz_cib_ToAbiType<decltype(_a1)>(_a1),
    __zz_cib_::__zz_cib_ToAbiType<decltype(_a2)>(_a2)))
  {}

inline int TemplateClassWithTwoParamsAndDefaultParameter<int, int>::get1() const {
  return __zz_cib_::__zz_cib_FromRValueAbiType<int>(
    __zz_cib_MyHelper::get1_3<__zz_cib_::__zz_cib_RValueAbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

inline int TemplateClassWithTwoParamsAndDefaultParameter<int, int>::get2() const {
  return __zz_cib_::__zz_cib_FromRValueAbiType<int>(
    __zz_cib_MyHelper::get2_4<__zz_cib_::__zz_cib_RValueAbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

