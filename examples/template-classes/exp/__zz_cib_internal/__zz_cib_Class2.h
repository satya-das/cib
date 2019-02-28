#pragma once


#include "value.h"

namespace __zz_cib_ { namespace Example { namespace __zz_cib_Class2 {
class __zz_cib_Helper;
struct __zz_cib_Delegator;
}}}
 namespace Example {
template<>
class Value<::>
{
public:
  Value(Value<::>&& rhs);
public:
  Value(Value<::> const & );
  ~Value();
  Value(:: x);
  :: GetValue() const;
  void SetValue(:: x);

private:
  __ZZ_CIB_CLASS_INTERNAL_DEF(Value, Example::__zz_cib_Class2);
};
}

namespace __zz_cib_ { namespace Example { namespace __zz_cib_Class2 {
class __zz_cib_Helper : public __zz_cib_::__zz_cib_MethodTableHelper
  , public __zz_cib_::__zz_cib_HandleHelper<::Example::Value<::>, __zz_cib_Helper> {
private:
  friend class ::Example::Value<::>;
  friend class __zz_cib_::__zz_cib_HandleHelper<::Example::Value<::>, __zz_cib_Helper>;

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
  static __zz_cib_HANDLE* __zz_cib_new_2(:: x) {
    using __zz_cib_newProc = __zz_cib_HANDLE* (__zz_cib_decl *) (:: x);
    return instance().invoke<__zz_cib_newProc, __zz_cib_methodid::__zz_cib_new_2>(
      x);
  }
  static :: GetValue_3(__zz_cib_HANDLE* __zz_cib_obj) {
    using GetValueProc = :: (__zz_cib_decl *) (__zz_cib_HANDLE*);
    return instance().invoke<GetValueProc, __zz_cib_methodid::GetValue_3>(
      __zz_cib_obj
      );
  }
  static void SetValue_4(__zz_cib_HANDLE* __zz_cib_obj, :: x) {
    using SetValueProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*, :: x);
    return instance().invoke<SetValueProc, __zz_cib_methodid::SetValue_4>(
      __zz_cib_obj,
      x);
  }
  static ::Example::Value<::>* __zz_cib_create_proxy(__zz_cib_HANDLE* h) {
    return new ::Example::Value<::>(h);
  }
public:
    static ::Example::Value<::> __zz_cib_obj_from_handle(__zz_cib_HANDLE* h) {
      return ::Example::Value<::>(h);
    }
    static __zz_cib_HANDLE*& __zz_cib_get_handle(::Example::Value<::>* __zz_cib_obj) {
      return __zz_cib_obj->__zz_cib_h_;
    }
    static __zz_cib_HANDLE* const& __zz_cib_get_handle(const ::Example::Value<::>* __zz_cib_obj) {
      return __zz_cib_obj->__zz_cib_h_;
    }
    static __zz_cib_HANDLE* __zz_cib_release_handle(::Example::Value<::>* __zz_cib_obj) {
      __zz_cib_remove_proxy(__zz_cib_obj->__zz_cib_h_);
      auto h = __zz_cib_obj->__zz_cib_h_;
      __zz_cib_obj->__zz_cib_h_ = nullptr;
      return h;
    }
};
}}}

inline Example::Value<::>::Value(__zz_cib_::__zz_cib_HANDLE* h)
  : __zz_cib_h_(h)
{
  __zz_cib_::Example::__zz_cib_Class2::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

inline Example::Value<::>::Value(Value<::>&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_::Example::__zz_cib_Class2::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

inline Example::Value<::>::Value(::Example::Value<::> const & __zz_cib_param0)
  : Example::Value<::>(__zz_cib_::Example::__zz_cib_Class2::__zz_cib_Helper::__zz_cib_copy_0(__zz_cib_::Example::__zz_cib_Class2::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

inline Example::Value<::>::~Value() {
  auto h = __zz_cib_::Example::__zz_cib_Class2::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::Example::__zz_cib_Class2::__zz_cib_Helper::__zz_cib_delete_1(h);
}

inline Example::Value<::>::Value(:: x)
  : Example::Value<::>(__zz_cib_::Example::__zz_cib_Class2::__zz_cib_Helper::__zz_cib_new_2(x))
{}

inline :: Example::Value<::>::GetValue() const {
  return __zz_cib_::Example::__zz_cib_Class2::__zz_cib_Helper::GetValue_3(__zz_cib_h_);
}

inline void Example::Value<::>::SetValue(:: x) {
  __zz_cib_::Example::__zz_cib_Class2::__zz_cib_Helper::SetValue_4(__zz_cib_h_, x);
}
