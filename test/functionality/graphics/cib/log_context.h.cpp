#include "log_context.h"

#include "__zz_cib_Graphics-ids.h"
#include "__zz_cib_Graphics-mtable-helper.h"
#include "__zz_cib_Graphics-proxy.h"

namespace __zz_cib_ { namespace Graphics { namespace LogContext { namespace __zz_cib_GenericProxy {
  class LogContext : public ::Graphics::LogContext {
    __zz_cib_PROXY* __zz_cib_proxy;
    const __zz_cib_MethodTableHelper __zz_cib_mtbl_helper;

    const __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() const {
      return __zz_cib_mtbl_helper;
    }
  public:
    LogContext(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl)
      : ::Graphics::LogContext::LogContext()
      , __zz_cib_proxy(proxy)
      , __zz_cib_mtbl_helper(mtbl)
    {}
    LogContext(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl, const ::Graphics::LogContext& __zz_cib_param0)
      : ::Graphics::LogContext::LogContext(__zz_cib_param0)
      , __zz_cib_proxy(proxy)
      , __zz_cib_mtbl_helper(mtbl)
    {}
    void Line(float x1, float y1, float x2, float y2) override {
      using LineProc = void (__zz_cib_decl *) (__zz_cib_PROXY*, float x1, float y1, float x2, float y2);
      return __zz_cib_get_mtable_helper().invoke<LineProc>(
        __zz_cib_GenericProxy::__zz_cib_methodid::Line_0,
        __zz_cib_proxy,
        x1, y1, x2, y2);
    }
    void Rect(float l, float b, float r, float t) override {
      using RectProc = void (__zz_cib_decl *) (__zz_cib_PROXY*, float l, float b, float r, float t);
      return __zz_cib_get_mtable_helper().invoke<RectProc>(
        __zz_cib_GenericProxy::__zz_cib_methodid::Rect_1,
        __zz_cib_proxy,
        l, b, r, t);
    }
    void Circle(float cx, float cy, float r) override {
      using CircleProc = void (__zz_cib_decl *) (__zz_cib_PROXY*, float cx, float cy, float r);
      return __zz_cib_get_mtable_helper().invoke<CircleProc>(
        __zz_cib_GenericProxy::__zz_cib_methodid::Circle_2,
        __zz_cib_proxy,
        cx, cy, r);
    }
    void Ellipse(float cx, float cy, float a, float b) override {
      using EllipseProc = void (__zz_cib_decl *) (__zz_cib_PROXY*, float cx, float cy, float a, float b);
      return __zz_cib_get_mtable_helper().invoke<EllipseProc>(
        __zz_cib_GenericProxy::__zz_cib_methodid::Ellipse_3,
        __zz_cib_proxy,
        cx, cy, a, b);
    }
    void __zz_cib_release_proxy() { __zz_cib_proxy = nullptr; }
  };
}}}}
namespace __zz_cib_ { namespace Graphics { namespace LogContext {
  static ::Graphics::LogContext* __zz_cib_decl __zz_cib_copy_0(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl, const ::Graphics::LogContext* __zz_cib_param0) {
    return new __zz_cib_::Graphics::LogContext::__zz_cib_GenericProxy::LogContext(proxy, mtbl, *__zz_cib_param0);
  }
  static ::Graphics::LogContext* __zz_cib_decl __zz_cib_new_1(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl) {
    return new __zz_cib_::Graphics::LogContext::__zz_cib_GenericProxy::LogContext(proxy, mtbl);
  }
  static void __zz_cib_decl __zz_cib_delete_2(::Graphics::LogContext* __zz_cib_obj) {
    delete __zz_cib_obj;
  }
  static void __zz_cib_decl Line_3(::Graphics::LogContext* __zz_cib_obj, float x1, float y1, float x2, float y2) {
    __zz_cib_obj->::Graphics::LogContext::Line(x1, y1, x2, y2);
  }
  static void __zz_cib_decl Rect_4(::Graphics::LogContext* __zz_cib_obj, float l, float b, float r, float t) {
    __zz_cib_obj->::Graphics::LogContext::Rect(l, b, r, t);
  }
  static void __zz_cib_decl Circle_5(::Graphics::LogContext* __zz_cib_obj, float cx, float cy, float r) {
    __zz_cib_obj->::Graphics::LogContext::Circle(cx, cy, r);
  }
  static void __zz_cib_decl Ellipse_6(::Graphics::LogContext* __zz_cib_obj, float cx, float cy, float a, float b) {
    __zz_cib_obj->::Graphics::LogContext::Ellipse(cx, cy, a, b);
  }
  ::Graphics::Context* __zz_cib_decl __zz_cib_cast_to___Graphics__Context_7(::Graphics::LogContext* __zz_cib_obj) {
    return __zz_cib_obj;
  }
  void __zz_cib_decl __zz_cib_release_proxy_8(::Graphics::LogContext* __zz_cib_obj) {
    auto unknownProxy = dynamic_cast<__zz_cib_::Graphics::LogContext::__zz_cib_GenericProxy::LogContext*>(__zz_cib_obj);
    if (unknownProxy)
      unknownProxy->__zz_cib_release_proxy();
  }
}}}

namespace __zz_cib_ { namespace Graphics { namespace LogContext {
  const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
    static const __zz_cib_MTableEntry methodArray[] = {
      reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_copy_0),
      reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_new_1),
      reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_delete_2),
      reinterpret_cast<__zz_cib_MTableEntry> (&Line_3),
      reinterpret_cast<__zz_cib_MTableEntry> (&Rect_4),
      reinterpret_cast<__zz_cib_MTableEntry> (&Circle_5),
      reinterpret_cast<__zz_cib_MTableEntry> (&Ellipse_6),
      reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_cast_to___Graphics__Context_7),
      reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_release_proxy_8)
    };
    static const __zz_cib_MethodTable methodTable = { methodArray, 9 };
    return &methodTable;
  }
}}}
