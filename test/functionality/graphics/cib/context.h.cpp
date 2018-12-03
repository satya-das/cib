#include "context.h"
#include "log_context.h"

#include <typeinfo>
#include <typeindex>
#include <cstdint>
#include <unordered_map>

extern std::unordered_map<std::type_index, std::uint32_t> __zz_cib_gClassIdRepo;

#include "__zz_cib_Graphics-ids.h"
#include "__zz_cib_Graphics-mtable-helper.h"
#include "__zz_cib_Graphics-proxy.h"

namespace __zz_cib_ { namespace Graphics { namespace Context { namespace __zz_cib_GenericProxy {
class Context : public ::Graphics::Context {
  __zz_cib_PROXY* __zz_cib_proxy;
  const __zz_cib_MethodTableHelper __zz_cib_mtbl_helper;

  const __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() const {
    return __zz_cib_mtbl_helper;
  }
public:
  Context(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl)
    : ::Graphics::Context::Context()
    , __zz_cib_proxy(proxy)
    , __zz_cib_mtbl_helper(mtbl)
  {}
  void Line(double x1, double y1, double x2, double y2) override {
    using LineProc = void (__zz_cib_decl *) (__zz_cib_PROXY*, double x1, double y1, double x2, double y2);
    return __zz_cib_get_mtable_helper().invoke<LineProc, __zz_cib_GenericProxy::__zz_cib_methodid::Line_0>(
    __zz_cib_proxy,
    x1, y1, x2, y2);
}
  void Rect(double l, double b, double r, double t) override {
    using RectProc = void (__zz_cib_decl *) (__zz_cib_PROXY*, double l, double b, double r, double t);
    return __zz_cib_get_mtable_helper().invoke<RectProc, __zz_cib_GenericProxy::__zz_cib_methodid::Rect_1>(
    __zz_cib_proxy,
    l, b, r, t);
}
  void Circle(double cx, double cy, double r) override {
    using CircleProc = void (__zz_cib_decl *) (__zz_cib_PROXY*, double cx, double cy, double r);
    return __zz_cib_get_mtable_helper().invoke<CircleProc, __zz_cib_GenericProxy::__zz_cib_methodid::Circle_2>(
    __zz_cib_proxy,
    cx, cy, r);
}
  void Ellipse(double cx, double cy, double a, double b) override {
    using EllipseProc = void (__zz_cib_decl *) (__zz_cib_PROXY*, double cx, double cy, double a, double b);
    return __zz_cib_get_mtable_helper().invoke<EllipseProc, __zz_cib_GenericProxy::__zz_cib_methodid::Ellipse_3>(
    __zz_cib_proxy,
    cx, cy, a, b);
}
  ~Context() override {
    if (!__zz_cib_proxy) return;
    using __zz_cib_deleteProc = void (__zz_cib_decl *) (__zz_cib_PROXY*);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_deleteProc, __zz_cib_GenericProxy::__zz_cib_methodid::__zz_cib_delete_4>(
    __zz_cib_proxy);
}
  void __zz_cib_release_proxy() { __zz_cib_proxy = nullptr; }
};
}}}}
namespace __zz_cib_ { namespace Graphics { namespace Context {
static ::Graphics::Context* __zz_cib_decl __zz_cib_new_0(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl) {
  return new __zz_cib_::Graphics::Context::__zz_cib_GenericProxy::Context(proxy, mtbl);
}
static void __zz_cib_decl Line_1(::Graphics::Context* __zz_cib_obj, double x1, double y1, double x2, double y2) {
  __zz_cib_obj->Line(x1, y1, x2, y2);
}
static void __zz_cib_decl Rect_2(::Graphics::Context* __zz_cib_obj, double l, double b, double r, double t) {
  __zz_cib_obj->Rect(l, b, r, t);
}
static void __zz_cib_decl Circle_3(::Graphics::Context* __zz_cib_obj, double cx, double cy, double r) {
  __zz_cib_obj->Circle(cx, cy, r);
}
static void __zz_cib_decl Ellipse_4(::Graphics::Context* __zz_cib_obj, double cx, double cy, double a, double b) {
  __zz_cib_obj->Ellipse(cx, cy, a, b);
}
static void __zz_cib_decl __zz_cib_delete_5(::Graphics::Context* __zz_cib_obj) {
  delete __zz_cib_obj;
}
std::uint32_t __zz_cib_decl __zz_cib_get_class_id_6(::Graphics::Context* __zz_cib_obj) {
  static bool classIdRepoPopulated = false;
  if (!classIdRepoPopulated) {
    __zz_cib_gClassIdRepo[std::type_index(typeid(::Graphics::LogContext))] = __zz_cib_::Graphics::LogContext::__zz_cib_classid;
    classIdRepoPopulated = true;
  }
  return __zz_cib_gClassIdRepo[std::type_index(typeid(*__zz_cib_obj))];
}
static void __zz_cib_decl __zz_cib_release_proxy_7(::Graphics::Context* __zz_cib_obj) {
  auto unknownProxy = dynamic_cast<__zz_cib_::Graphics::Context::__zz_cib_GenericProxy::Context*>(__zz_cib_obj);
  if (unknownProxy)
    unknownProxy->__zz_cib_release_proxy();
}
}}}

namespace __zz_cib_ { namespace Graphics { namespace Context {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_new_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&Line_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&Rect_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&Circle_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&Ellipse_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_delete_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_get_class_id_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_release_proxy_7)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 8 };
  return &methodTable;
}
}}}
