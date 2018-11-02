#include "__zz_cib_Graphics-def.h"
#include "__zz_cib_Graphics-ids.h"
#include "__zz_cib_Graphics-mtable-helper.h"

namespace __zz_cib_ { namespace Point {
  class __zz_cib_Helper : public __zz_cib_::__zz_cib_MethodTableHelper
    , public __zz_cib_::__zz_cib_HandleHelper<::Point, __zz_cib_Helper> {
  private:
    friend class ::Point;
    friend class __zz_cib_::__zz_cib_HandleHelper<::Point, __zz_cib_Helper>;

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
    static __zz_cib_HANDLE* __zz_cib_new_2(double x, double y) {
      using __zz_cib_newProc = __zz_cib_HANDLE* (__zz_cib_decl *) (double x, double y);
      return instance().invoke<__zz_cib_newProc>(
        __zz_cib_methodid::__zz_cib_new_2,
        x, y);
    }
    static double X_3(__zz_cib_HANDLE* __zz_cib_obj) {
      using XProc = double (__zz_cib_decl *) (__zz_cib_HANDLE*);
      return instance().invoke<XProc>(
        __zz_cib_methodid::X_3,
        __zz_cib_obj);
    }
    static void X_4(__zz_cib_HANDLE* __zz_cib_obj, double x) {
      using XProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*, double x);
      return instance().invoke<XProc>(
        __zz_cib_methodid::X_4,
        __zz_cib_obj,
        x);
    }
    static double Y_5(__zz_cib_HANDLE* __zz_cib_obj) {
      using YProc = double (__zz_cib_decl *) (__zz_cib_HANDLE*);
      return instance().invoke<YProc>(
        __zz_cib_methodid::Y_5,
        __zz_cib_obj);
    }
    static void Y_6(__zz_cib_HANDLE* __zz_cib_obj, double y) {
      using YProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*, double y);
      return instance().invoke<YProc>(
        __zz_cib_methodid::Y_6,
        __zz_cib_obj,
        y);
    }
    static __zz_cib_HANDLE* __zz_cib_OperatorPlus_7(__zz_cib_HANDLE* __zz_cib_obj, const __zz_cib_HANDLE* p) {
      using __zz_cib_OperatorPlusProc = __zz_cib_HANDLE* (__zz_cib_decl *) (__zz_cib_HANDLE*, const __zz_cib_HANDLE* p);
      return instance().invoke<__zz_cib_OperatorPlusProc>(
        __zz_cib_methodid::__zz_cib_OperatorPlus_7,
        __zz_cib_obj,
        p);
    }
    static __zz_cib_HANDLE* __zz_cib_OperatorMinus_8(__zz_cib_HANDLE* __zz_cib_obj, __zz_cib_HANDLE* p) {
      using __zz_cib_OperatorMinusProc = __zz_cib_HANDLE* (__zz_cib_decl *) (__zz_cib_HANDLE*, __zz_cib_HANDLE* p);
      return instance().invoke<__zz_cib_OperatorMinusProc>(
        __zz_cib_methodid::__zz_cib_OperatorMinus_8,
        __zz_cib_obj,
        p);
    }
    __zz_cib_Helper()
      : __zz_cib_::__zz_cib_MethodTableHelper(
        __zz_cib_Graphics_GetMethodTable(__zz_cib_classid))
    {}
    static const __zz_cib_Helper& instance() {
      static __zz_cib_Helper helper;
      return helper;
    }

    static ::Point* __zz_cib_create_proxy(__zz_cib_HANDLE* h) {
      return new ::Point(h);
    }
  public:
    static __zz_cib_HANDLE* __zz_cib_release_handle(::Point* __zz_cib_obj) {
      auto h = __zz_cib_obj->__zz_cib_h_;
      __zz_cib_obj->__zz_cib_h_ = nullptr;
      return h;
    }
  };
}}

inline Point::Point(__zz_cib_::__zz_cib_HANDLE* h)
  : __zz_cib_h_(h)
{}

inline Point::Point(Point&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

inline Point::Point(const ::Point& __zz_cib_param0)
  : Point(__zz_cib_::Point::__zz_cib_Helper::__zz_cib_copy_0(__zz_cib_::Point::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

inline Point::~Point() {
  auto h = __zz_cib_::Point::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::Point::__zz_cib_Helper::__zz_cib_delete_1(h);
}

inline Point::Point(double x, double y)
  : Point(__zz_cib_::Point::__zz_cib_Helper::__zz_cib_new_2(x, y))
{}

inline double Point::X() const {
  return __zz_cib_::Point::__zz_cib_Helper::X_3(__zz_cib_h_);
}

inline void Point::X(double x) {
  __zz_cib_::Point::__zz_cib_Helper::X_4(__zz_cib_h_, x);
}

inline double Point::Y() const {
  return __zz_cib_::Point::__zz_cib_Helper::Y_5(__zz_cib_h_);
}

inline void Point::Y(double y) {
  __zz_cib_::Point::__zz_cib_Helper::Y_6(__zz_cib_h_, y);
}

inline ::Point Point::operator +(const ::Point& p) const {
  return __zz_cib_::Point::__zz_cib_Helper::__zz_cib_obj_from_handle<>(
    __zz_cib_::Point::__zz_cib_Helper::__zz_cib_OperatorPlus_7(__zz_cib_h_, __zz_cib_::Point::__zz_cib_Helper::__zz_cib_handle(p))
  );
}

inline ::Point Point::operator -(::Point p) const {
  return __zz_cib_::Point::__zz_cib_Helper::__zz_cib_obj_from_handle<>(
    __zz_cib_::Point::__zz_cib_Helper::__zz_cib_OperatorMinus_8(__zz_cib_h_, __zz_cib_::Point::__zz_cib_Helper::__zz_cib_handle(p))
  );
}
