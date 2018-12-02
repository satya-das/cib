#include "context.h"

#include "context.h"
#include "log_context.h"


Graphics::Context::Context(__zz_cib_::__zz_cib_HANDLE* h)
  : __zz_cib_h_(h)
{}

Graphics::Context::Context(Context&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

Graphics::Context::Context()
  : Graphics::Context(__zz_cib_::Graphics::Context::__zz_cib_Helper::__zz_cib_new_0(this))
{}

Graphics::Context::~Context() {
  __zz_cib_::Graphics::Context::__zz_cib_Helper::__zz_cib_release_proxy(this);
  auto h = __zz_cib_::Graphics::Context::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::Graphics::Context::__zz_cib_Helper::__zz_cib_delete_5(h);
}
namespace __zz_cib_ { namespace Graphics { namespace Context { namespace __zz_cib_Generic {
class Context : public ::Graphics::Context {
  __zz_cib_HANDLE* __zz_cib_h_;

  static __zz_cib_::__zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() {
    static __zz_cib_::__zz_cib_MethodTableHelper mtableHelper(__zz_cib_Graphics_GetMethodTable(
      __zz_cib_classid));
    return mtableHelper;
  }
  Context(__zz_cib_HANDLE* h) : __zz_cib_h_(h) {}
public:
  static ::Graphics::Context* __zz_cib_from_handle(__zz_cib_HANDLE* h) {
    return new Context(h);
  }
  void Line(double x1, double y1, double x2, double y2) override {
    using LineProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*, double x1, double y1, double x2, double y2);
    return __zz_cib_get_mtable_helper().invoke<LineProc>(
      __zz_cib_methodid::Line_1,
      __zz_cib_h_,
      x1, y1, x2, y2);
  }
  void Rect(double l, double b, double r, double t) override {
    using RectProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*, double l, double b, double r, double t);
    return __zz_cib_get_mtable_helper().invoke<RectProc>(
      __zz_cib_methodid::Rect_2,
      __zz_cib_h_,
      l, b, r, t);
  }
  void Circle(double cx, double cy, double r) override {
    using CircleProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*, double cx, double cy, double r);
    return __zz_cib_get_mtable_helper().invoke<CircleProc>(
      __zz_cib_methodid::Circle_3,
      __zz_cib_h_,
      cx, cy, r);
  }
  void Ellipse(double cx, double cy, double a, double b) override {
    using EllipseProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*, double cx, double cy, double a, double b);
    return __zz_cib_get_mtable_helper().invoke<EllipseProc>(
      __zz_cib_methodid::Ellipse_4,
      __zz_cib_h_,
      cx, cy, a, b);
  }
  ~Context() override {
    if (!__zz_cib_h_) return;
    using __zz_cib_deleteProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_deleteProc>(
      __zz_cib_methodid::__zz_cib_delete_5,
      __zz_cib_h_);
  }
};
}}}}
::Graphics::Context* __zz_cib_::Graphics::Context::__zz_cib_Helper::__zz_cib_create_proxy(__zz_cib_HANDLE* h) {
  switch(__zz_cib_get_class_id(h)) {
  case __zz_cib_::Graphics::LogContext::__zz_cib_classid:
    return __zz_cib_::Graphics::LogContext::__zz_cib_Helper::__zz_cib_from_handle(h);
  default:
    return ::__zz_cib_::Graphics::Context::__zz_cib_Generic::Context::__zz_cib_from_handle(h);
  }
}
namespace __zz_cib_ { namespace Graphics { namespace Context {
static void __zz_cib_decl Line_0(::Graphics::Context* __zz_cib_obj, double x1, double y1, double x2, double y2) {
  __zz_cib_obj->Line(x1, y1, x2, y2);
}
static void __zz_cib_decl Rect_1(::Graphics::Context* __zz_cib_obj, double l, double b, double r, double t) {
  __zz_cib_obj->Rect(l, b, r, t);
}
static void __zz_cib_decl Circle_2(::Graphics::Context* __zz_cib_obj, double cx, double cy, double r) {
  __zz_cib_obj->Circle(cx, cy, r);
}
static void __zz_cib_decl Ellipse_3(::Graphics::Context* __zz_cib_obj, double cx, double cy, double a, double b) {
  __zz_cib_obj->Ellipse(cx, cy, a, b);
}
static void __zz_cib_decl __zz_cib_delete_4(::Graphics::Context* __zz_cib_obj) {
  delete __zz_cib_obj;
}
}}}

namespace __zz_cib_ { namespace Graphics { namespace Context {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&Line_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&Rect_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&Circle_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&Ellipse_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_delete_4)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 5 };
  return &methodTable;
}
}}}

namespace __zz_cib_ { namespace Graphics { namespace Context {
const __zz_cib_MethodTable* __zz_cib_Helper::__zz_cib_get_proxy_method_table() {
  return __zz_cib_GetMethodTable();
}
}}}

