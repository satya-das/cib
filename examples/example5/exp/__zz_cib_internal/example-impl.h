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

  static __zz_cib_HANDLE* __zz_cib_copy_0(__zz_cib_HANDLE const * __zz_cib_param0) {
    using __zz_cib_copyProc = __zz_cib_HANDLE* (__zz_cib_decl *) (__zz_cib_HANDLE const * __zz_cib_param0);
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
  static void Set_3(__zz_cib_HANDLE* __zz_cib_obj, __zz_cib_HANDLE const * x) {
    using SetProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*, __zz_cib_HANDLE const * x);
    return instance().invoke<SetProc>(
      __zz_cib_methodid::Set_3,
      __zz_cib_obj,
      x);
  }
  static __zz_cib_HANDLE* Get_4(__zz_cib_HANDLE* __zz_cib_obj) {
    using GetProc = __zz_cib_HANDLE* (__zz_cib_decl *) (__zz_cib_HANDLE*);
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
class Number<int>
{
public:
  Number(Number<int>&& rhs);
public:
  Number(Number<int> const & );
  ~Number();
  Number(int x);
  int GetValue() const;
  void SetValue(int x);
  void Add(Number<int> const & num);

private:
  __ZZ_CIB_CLASS_INTERNAL_DEF(Number, Example::__zz_cib_Class1);
};
}

namespace __zz_cib_ { namespace Example { namespace __zz_cib_Class1 {
class __zz_cib_Helper : public __zz_cib_::__zz_cib_MethodTableHelper
  , public __zz_cib_::__zz_cib_HandleHelper<::Example::Number<int>, __zz_cib_Helper> {
private:
  friend class ::Example::Number<int>;
  friend class __zz_cib_::__zz_cib_HandleHelper<::Example::Number<int>, __zz_cib_Helper>;

  static __zz_cib_HANDLE* __zz_cib_copy_0(__zz_cib_HANDLE const * __zz_cib_param0) {
    using __zz_cib_copyProc = __zz_cib_HANDLE* (__zz_cib_decl *) (__zz_cib_HANDLE const * __zz_cib_param0);
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
  static __zz_cib_HANDLE* __zz_cib_new_2(int x) {
    using __zz_cib_newProc = __zz_cib_HANDLE* (__zz_cib_decl *) (int x);
    return instance().invoke<__zz_cib_newProc>(
      __zz_cib_methodid::__zz_cib_new_2,
      x);
  }
  static int GetValue_3(__zz_cib_HANDLE* __zz_cib_obj) {
    using GetValueProc = int (__zz_cib_decl *) (__zz_cib_HANDLE*);
    return instance().invoke<GetValueProc>(
      __zz_cib_methodid::GetValue_3,
      __zz_cib_obj);
  }
  static void SetValue_4(__zz_cib_HANDLE* __zz_cib_obj, int x) {
    using SetValueProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*, int x);
    return instance().invoke<SetValueProc>(
      __zz_cib_methodid::SetValue_4,
      __zz_cib_obj,
      x);
  }
  static void Add_5(__zz_cib_HANDLE* __zz_cib_obj, __zz_cib_HANDLE const * num) {
    using AddProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*, __zz_cib_HANDLE const * num);
    return instance().invoke<AddProc>(
      __zz_cib_methodid::Add_5,
      __zz_cib_obj,
      num);
  }
  __zz_cib_Helper()
    : __zz_cib_::__zz_cib_MethodTableHelper(
      __zz_cib_Example_GetMethodTable(__zz_cib_classid))
  {}
  static const __zz_cib_Helper& instance() {
    static __zz_cib_Helper helper;
    return helper;
  }

  static ::Example::Number<int>* __zz_cib_create_proxy(__zz_cib_HANDLE* h) {
    return new ::Example::Number<int>(h);
  }
public:
  static ::Example::Number<int> __zz_cib_obj_from_handle(__zz_cib_HANDLE* h) {
    return ::Example::Number<int>(h);
  }
static __zz_cib_HANDLE* __zz_cib_handle(const ::Example::Number<int>* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
static __zz_cib_HANDLE* __zz_cib_handle(const ::Example::Number<int>& __zz_cib_obj) {
    return __zz_cib_obj.__zz_cib_h_;
  }
  static __zz_cib_HANDLE* __zz_cib_release_handle(::Example::Number<int>* __zz_cib_obj) {
    auto h = __zz_cib_obj->__zz_cib_h_;
    __zz_cib_obj->__zz_cib_h_ = nullptr;
    return h;
  }
};
}}}

inline Example::Number<int>::Number(__zz_cib_::__zz_cib_HANDLE* h)
  : __zz_cib_h_(h)
{}

inline Example::Number<int>::Number(Number<int>&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

inline Example::Number<int>::Number(::Example::Number<int> const & __zz_cib_param0)
  : Example::Number<int>(__zz_cib_::Example::__zz_cib_Class1::__zz_cib_Helper::__zz_cib_copy_0(__zz_cib_::Example::__zz_cib_Class1::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

inline Example::Number<int>::~Number() {
  auto h = __zz_cib_::Example::__zz_cib_Class1::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::Example::__zz_cib_Class1::__zz_cib_Helper::__zz_cib_delete_1(h);
}

inline Example::Number<int>::Number(int x)
  : Example::Number<int>(__zz_cib_::Example::__zz_cib_Class1::__zz_cib_Helper::__zz_cib_new_2(x))
{}

inline int Example::Number<int>::GetValue() const {
  return     __zz_cib_::Example::__zz_cib_Class1::__zz_cib_Helper::GetValue_3(__zz_cib_h_);
  }

inline void Example::Number<int>::SetValue(int x) {
  __zz_cib_::Example::__zz_cib_Class1::__zz_cib_Helper::SetValue_4(__zz_cib_h_, x);
}

inline void Example::Number<int>::Add(::Example::Number<int> const & num) {
  __zz_cib_::Example::__zz_cib_Class1::__zz_cib_Helper::Add_5(__zz_cib_h_, __zz_cib_::Example::__zz_cib_Class1::__zz_cib_Helper::__zz_cib_handle(num));
}

inline Example::A::A(__zz_cib_::__zz_cib_HANDLE* h)
  : __zz_cib_h_(h)
{}

inline Example::A::A(A&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

inline Example::A::A(::Example::A const & __zz_cib_param0)
  : Example::A(__zz_cib_::Example::A::__zz_cib_Helper::__zz_cib_copy_0(__zz_cib_::Example::A::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

inline Example::A::~A() {
  auto h = __zz_cib_::Example::A::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::Example::A::__zz_cib_Helper::__zz_cib_delete_1(h);
}

inline Example::A::A()
  : Example::A(__zz_cib_::Example::A::__zz_cib_Helper::__zz_cib_new_2())
{}

inline void Example::A::Set(::Example::Number<int> const & x) {
  __zz_cib_::Example::A::__zz_cib_Helper::Set_3(__zz_cib_h_, __zz_cib_::Example::__zz_cib_Class1::__zz_cib_Helper::__zz_cib_handle(x));
}

inline ::Example::Number<int> Example::A::Get() const {
  return __zz_cib_::Example::__zz_cib_Class1::__zz_cib_Helper::__zz_cib_obj_from_handle(
    __zz_cib_::Example::A::__zz_cib_Helper::Get_4(__zz_cib_h_)
  );
}
