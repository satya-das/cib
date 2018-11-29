#include "__zz_cib_Graphics-def.h"
#include "__zz_cib_Graphics-ids.h"
#include "__zz_cib_Graphics-mtable-helper.h"
#include "__zz_cib_Graphics-handle-helper.h"

namespace __zz_cib_ { namespace Graphics { namespace LogContext {
class __zz_cib_Helper : public __zz_cib_::__zz_cib_MethodTableHelper
  , public __zz_cib_::__zz_cib_HandleHelper<::Graphics::LogContext, __zz_cib_Helper> {
private:
  friend class ::Graphics::LogContext;
  friend class __zz_cib_::__zz_cib_HandleHelper<::Graphics::LogContext, __zz_cib_Helper>;
  static const __zz_cib_MethodTable* __zz_cib_get_proxy_method_table();

  static __zz_cib_HANDLE* __zz_cib_copy_0(::Graphics::LogContext* __zz_cib_proxy, __zz_cib_HANDLE const * __zz_cib_param0) {
    using __zz_cib_copyProc = __zz_cib_HANDLE* (__zz_cib_decl *) (::Graphics::LogContext*, const __zz_cib_MethodTable*, __zz_cib_HANDLE const * __zz_cib_param0);
    return instance().invoke<__zz_cib_copyProc>(
      __zz_cib_methodid::__zz_cib_copy_0,
      __zz_cib_proxy, __zz_cib_get_proxy_method_table(),
      __zz_cib_param0);
  }
  static __zz_cib_HANDLE* __zz_cib_new_1(::Graphics::LogContext* __zz_cib_proxy) {
    using __zz_cib_newProc = __zz_cib_HANDLE* (__zz_cib_decl *) (::Graphics::LogContext*, const __zz_cib_MethodTable*);
    return instance().invoke<__zz_cib_newProc>(
      __zz_cib_methodid::__zz_cib_new_1,
      __zz_cib_proxy, __zz_cib_get_proxy_method_table());
  }
  static void __zz_cib_delete_2(__zz_cib_HANDLE* __zz_cib_obj) {
    if (__zz_cib_obj) {
      using __zz_cib_deleteProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*);
      return instance().invoke<__zz_cib_deleteProc>(
        __zz_cib_methodid::__zz_cib_delete_2,
        __zz_cib_obj);
    }
  }
  static void Line_3(__zz_cib_HANDLE* __zz_cib_obj, double x1, double y1, double x2, double y2) {
    using LineProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*, double x1, double y1, double x2, double y2);
    return instance().invoke<LineProc>(
      __zz_cib_methodid::Line_3,
      __zz_cib_obj,
      x1, y1, x2, y2);
  }
  static void Rect_4(__zz_cib_HANDLE* __zz_cib_obj, double l, double b, double r, double t) {
    using RectProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*, double l, double b, double r, double t);
    return instance().invoke<RectProc>(
      __zz_cib_methodid::Rect_4,
      __zz_cib_obj,
      l, b, r, t);
  }
  static void Circle_5(__zz_cib_HANDLE* __zz_cib_obj, double cx, double cy, double r) {
    using CircleProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*, double cx, double cy, double r);
    return instance().invoke<CircleProc>(
      __zz_cib_methodid::Circle_5,
      __zz_cib_obj,
      cx, cy, r);
  }
  static void Ellipse_6(__zz_cib_HANDLE* __zz_cib_obj, double cx, double cy, double a, double b) {
    using EllipseProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*, double cx, double cy, double a, double b);
    return instance().invoke<EllipseProc>(
      __zz_cib_methodid::Ellipse_6,
      __zz_cib_obj,
      cx, cy, a, b);
  }
  static __zz_cib_HANDLE* __zz_cib_cast_to___Graphics__Context_7(__zz_cib_HANDLE* __zz_cib_obj) {
    using __zz_cib_cast_to___Graphics__ContextProc = __zz_cib_HANDLE* (__zz_cib_decl *) (__zz_cib_HANDLE* h);
    return instance().invoke<__zz_cib_cast_to___Graphics__ContextProc>(
      __zz_cib_methodid::__zz_cib_cast_to___Graphics__Context_7,
      __zz_cib_obj);
  }
  __zz_cib_Helper()
    : __zz_cib_::__zz_cib_MethodTableHelper(
      __zz_cib_Graphics_GetMethodTable(__zz_cib_classid))
  {}
  static const __zz_cib_Helper& instance() {
    static __zz_cib_Helper helper;
    return helper;
  }

  static ::Graphics::LogContext* __zz_cib_create_proxy(__zz_cib_HANDLE* h) {
    return new ::Graphics::LogContext(h);
  }
public:
  static ::Graphics::LogContext __zz_cib_obj_from_handle(__zz_cib_HANDLE* h) {
    return ::Graphics::LogContext(h);
  }
static __zz_cib_HANDLE* __zz_cib_handle(const ::Graphics::LogContext* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
static __zz_cib_HANDLE* __zz_cib_handle(const ::Graphics::LogContext& __zz_cib_obj) {
    return __zz_cib_obj.__zz_cib_h_;
  }
  static __zz_cib_HANDLE* __zz_cib_release_handle(::Graphics::LogContext* __zz_cib_obj) {
    auto h = __zz_cib_obj->__zz_cib_h_;
    __zz_cib_obj->__zz_cib_h_ = nullptr;
    __zz_cib_::Graphics::Context::__zz_cib_Helper::__zz_cib_release_handle(__zz_cib_obj);
    return h;
  }
  static void __zz_cib_release_proxy(::Graphics::LogContext* __zz_cib_obj) {
    if (__zz_cib_obj->__zz_cib_h_) {
      using __zz_cib_release_proxyProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*);
      return instance().invoke<__zz_cib_release_proxyProc>(
        __zz_cib_methodid::__zz_cib_release_proxy_8,
        __zz_cib_obj->__zz_cib_h_);
    }
  }
};
}}}

inline Graphics::LogContext::LogContext(__zz_cib_::__zz_cib_HANDLE* h)
  : ::Graphics::Context::Context(__zz_cib_::Graphics::LogContext::__zz_cib_Helper::__zz_cib_cast_to___Graphics__Context_7(h))
  , __zz_cib_h_(h)
{}

inline Graphics::LogContext::LogContext(LogContext&& rhs)
  : ::Graphics::Context::Context(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

inline Graphics::LogContext::LogContext(::Graphics::LogContext const & __zz_cib_param0)
  : Graphics::LogContext(__zz_cib_::Graphics::LogContext::__zz_cib_Helper::__zz_cib_copy_0(this, __zz_cib_::Graphics::LogContext::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

inline Graphics::LogContext::LogContext()
  : Graphics::LogContext(__zz_cib_::Graphics::LogContext::__zz_cib_Helper::__zz_cib_new_1(this))
{}

inline Graphics::LogContext::~LogContext() {
  __zz_cib_::Graphics::LogContext::__zz_cib_Helper::__zz_cib_release_proxy(this);
  auto h = __zz_cib_::Graphics::LogContext::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::Graphics::LogContext::__zz_cib_Helper::__zz_cib_delete_2(h);
}

inline void Graphics::LogContext::Line(double x1, double y1, double x2, double y2) {
  __zz_cib_::Graphics::LogContext::__zz_cib_Helper::Line_3(__zz_cib_h_, x1, y1, x2, y2);
}

inline void Graphics::LogContext::Rect(double l, double b, double r, double t) {
  __zz_cib_::Graphics::LogContext::__zz_cib_Helper::Rect_4(__zz_cib_h_, l, b, r, t);
}

inline void Graphics::LogContext::Circle(double cx, double cy, double r) {
  __zz_cib_::Graphics::LogContext::__zz_cib_Helper::Circle_5(__zz_cib_h_, cx, cy, r);
}

inline void Graphics::LogContext::Ellipse(double cx, double cy, double a, double b) {
  __zz_cib_::Graphics::LogContext::__zz_cib_Helper::Ellipse_6(__zz_cib_h_, cx, cy, a, b);
}
