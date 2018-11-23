#include "__zz_cib_Example-def.h"
#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-mtable-helper.h"
#include "__zz_cib_Example-handle-helper.h"

namespace __zz_cib_ { namespace Example { namespace A {
class __zz_cib_Helper : public __zz_cib_::__zz_cib_MethodTableHelper
  , public __zz_cib_::__zz_cib_HandleHelper<::Example::A, __zz_cib_Helper> {
private:
  friend class ::Example::A;
  friend class __zz_cib_::__zz_cib_HandleHelper<::Example::A, __zz_cib_Helper>;

  static __zz_cib_HANDLE* __zz_cib_copy_0(const __zz_cib_HANDLE* __zz_cib_param0) {
    using __zz_cib_copyProc = __zz_cib_HANDLE* (__zz_cib_decl *) (const __zz_cib_HANDLE* __zz_cib_param0);
    return instance().invoke<__zz_cib_copyProc>(
      __zz_cib_methodid::__zz_cib_copy_0,
      __zz_cib_param0);
  }
  static void __zz_cib_delete_1(__zz_cib_HANDLE* __zz_cib_obj) {
    if (__zz_cib_obj) {
      using __zz_cib_deleteProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*);
      return instance().invoke<__zz_cib_deleteProc>(
        __zz_cib_methodid::__zz_cib_delete_1,
        __zz_cib_obj);
    }
  }
  static __zz_cib_HANDLE* __zz_cib_new_2() {
    using __zz_cib_newProc = __zz_cib_HANDLE* (__zz_cib_decl *) ();
    return instance().invoke<__zz_cib_newProc>(
      __zz_cib_methodid::__zz_cib_new_2);
  }
  static void Set_3(__zz_cib_HANDLE* __zz_cib_obj, const __zz_cib_HANDLE* x) {
    using SetProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*, const __zz_cib_HANDLE* x);
    return instance().invoke<SetProc>(
      __zz_cib_methodid::Set_3,
      __zz_cib_obj,
      x);
  }
  static const __zz_cib_HANDLE* Get_4(__zz_cib_HANDLE* __zz_cib_obj) {
    using GetProc = const __zz_cib_HANDLE* (__zz_cib_decl *) (__zz_cib_HANDLE*);
    return instance().invoke<GetProc>(
      __zz_cib_methodid::Get_4,
      __zz_cib_obj);
  }
  __zz_cib_Helper()
    : __zz_cib_::__zz_cib_MethodTableHelper(
      __zz_cib_Example_GetMethodTable(__zz_cib_classid))
  {}
  static const __zz_cib_Helper& instance() {
    static __zz_cib_Helper helper;
    return helper;
  }

  static ::Example::A* __zz_cib_create_proxy(__zz_cib_HANDLE* h) {
    return new ::Example::A(h);
  }
public:
  static ::Example::A __zz_cib_obj_from_handle(__zz_cib_HANDLE* h) {
    return ::Example::A(h);
  }
static __zz_cib_HANDLE* __zz_cib_handle(const ::Example::A* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
static __zz_cib_HANDLE* __zz_cib_handle(const ::Example::A& __zz_cib_obj) {
    return __zz_cib_obj.__zz_cib_h_;
  }
  static __zz_cib_HANDLE* __zz_cib_release_handle(::Example::A* __zz_cib_obj) {
    auto h = __zz_cib_obj->__zz_cib_h_;
    __zz_cib_obj->__zz_cib_h_ = nullptr;
    return h;
  }
};
}}}

namespace __zz_cib_ { namespace Example { namespace __zz_cib_Class1 {
class __zz_cib_Helper;
}}}
 namespace Example {
template<>
class Template<int>
{
public:
  Template(Template<int>&& rhs);
public:
  Template(const Template<int>& );
  ~Template();
  Template(int x);
  int GetX() const;

private:
  __ZZ_CIB_CLASS_INTERNAL_DEF(Template, Example::__zz_cib_Class1);
};
}

namespace __zz_cib_ { namespace Example { namespace __zz_cib_Class1 {
class __zz_cib_Helper : public __zz_cib_::__zz_cib_MethodTableHelper
  , public __zz_cib_::__zz_cib_HandleHelper<::Example::Template<int>, __zz_cib_Helper> {
private:
  friend class ::Example::Template<int>;
  friend class __zz_cib_::__zz_cib_HandleHelper<::Example::Template<int>, __zz_cib_Helper>;

  static __zz_cib_HANDLE* __zz_cib_new_0(const __zz_cib_HANDLE* __zz_cib_param0) {
    using __zz_cib_newProc = __zz_cib_HANDLE* (__zz_cib_decl *) (const __zz_cib_HANDLE* __zz_cib_param0);
    return instance().invoke<__zz_cib_newProc>(
      __zz_cib_methodid::__zz_cib_new_0,
      __zz_cib_param0);
  }
  static void __zz_cib_delete_1(__zz_cib_HANDLE* __zz_cib_obj) {
    if (__zz_cib_obj) {
      using __zz_cib_deleteProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*);
      return instance().invoke<__zz_cib_deleteProc>(
        __zz_cib_methodid::__zz_cib_delete_1,
        __zz_cib_obj);
    }
  }
  static __zz_cib_HANDLE* __zz_cib_new_2(int x) {
    using __zz_cib_newProc = __zz_cib_HANDLE* (__zz_cib_decl *) (int x);
    return instance().invoke<__zz_cib_newProc>(
      __zz_cib_methodid::__zz_cib_new_2,
      x);
  }
  static int GetX_3(__zz_cib_HANDLE* __zz_cib_obj) {
    using GetXProc = int (__zz_cib_decl *) (__zz_cib_HANDLE*);
    return instance().invoke<GetXProc>(
      __zz_cib_methodid::GetX_3,
      __zz_cib_obj);
  }
  __zz_cib_Helper()
    : __zz_cib_::__zz_cib_MethodTableHelper(
      __zz_cib_Example_GetMethodTable(__zz_cib_classid))
  {}
  static const __zz_cib_Helper& instance() {
    static __zz_cib_Helper helper;
    return helper;
  }

  static ::Example::Template<int>* __zz_cib_create_proxy(__zz_cib_HANDLE* h) {
    return new ::Example::Template<int>(h);
  }
public:
  static ::Example::Template<int> __zz_cib_obj_from_handle(__zz_cib_HANDLE* h) {
    return ::Example::Template<int>(h);
  }
static __zz_cib_HANDLE* __zz_cib_handle(const ::Example::Template<int>* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
static __zz_cib_HANDLE* __zz_cib_handle(const ::Example::Template<int>& __zz_cib_obj) {
    return __zz_cib_obj.__zz_cib_h_;
  }
  static __zz_cib_HANDLE* __zz_cib_release_handle(::Example::Template<int>* __zz_cib_obj) {
    auto h = __zz_cib_obj->__zz_cib_h_;
    __zz_cib_obj->__zz_cib_h_ = nullptr;
    return h;
  }
};
}}}

inline Example::Template<int>::Template(__zz_cib_::__zz_cib_HANDLE* h)
  : __zz_cib_h_(h)
{}

inline Example::Template<int>::Template(Template<int>&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

inline Example::Template<int>::Template(const ::Example::Template<int>& __zz_cib_param0)
  : Example::Template<int>(__zz_cib_::Example::__zz_cib_Class1::__zz_cib_Helper::__zz_cib_new_0(__zz_cib_::Example::__zz_cib_Class1::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

inline Example::Template<int>::~Template() {
  auto h = __zz_cib_::Example::__zz_cib_Class1::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::Example::__zz_cib_Class1::__zz_cib_Helper::__zz_cib_delete_1(h);
}

inline Example::Template<int>::Template(int x)
  : Example::Template<int>(__zz_cib_::Example::__zz_cib_Class1::__zz_cib_Helper::__zz_cib_new_2(x))
{}

inline int Example::Template<int>::GetX() const {
  return __zz_cib_::Example::__zz_cib_Class1::__zz_cib_Helper::GetX_3(__zz_cib_h_);
}

inline Example::A::A(__zz_cib_::__zz_cib_HANDLE* h)
  : __zz_cib_h_(h)
{}

inline Example::A::A(A&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

inline Example::A::A(const ::Example::A& __zz_cib_param0)
  : Example::A(__zz_cib_::Example::A::__zz_cib_Helper::__zz_cib_copy_0(__zz_cib_::Example::A::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

inline Example::A::~A() {
  auto h = __zz_cib_::Example::A::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::Example::A::__zz_cib_Helper::__zz_cib_delete_1(h);
}

inline Example::A::A()
  : Example::A(__zz_cib_::Example::A::__zz_cib_Helper::__zz_cib_new_2())
{}

inline void Example::A::Set(const ::Example::Template<int>& x) {
  __zz_cib_::Example::A::__zz_cib_Helper::Set_3(__zz_cib_h_, __zz_cib_::Example::__zz_cib_Class1::__zz_cib_Helper::__zz_cib_handle(x));
}

inline const ::Example::Template<int>& Example::A::Get() const {
  return *__zz_cib_::Example::__zz_cib_Class1::__zz_cib_Helper::__zz_cib_from_handle(
    __zz_cib_::Example::A::__zz_cib_Helper::Get_4(__zz_cib_h_)
  );
}
