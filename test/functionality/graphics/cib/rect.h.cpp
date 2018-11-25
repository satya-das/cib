#include "context.h"
#include "rect.h"

#include "__zz_cib_Graphics-ids.h"
#include "__zz_cib_Graphics-mtable-helper.h"
#include "__zz_cib_Graphics-proxy.h"

namespace __zz_cib_ { namespace Graphics { namespace Rectangle { namespace __zz_cib_GenericProxy {
class Rectangle : public ::Graphics::Rectangle {
  __zz_cib_PROXY* __zz_cib_proxy;
  const __zz_cib_MethodTableHelper __zz_cib_mtbl_helper;

  const __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() const {
    return __zz_cib_mtbl_helper;
  }
public:
  Rectangle(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl, double left, double bottom, double right, double top)
    : ::Graphics::Rectangle::Rectangle(left, bottom, right, top)
    , __zz_cib_proxy(proxy)
    , __zz_cib_mtbl_helper(mtbl)
  {}
  Rectangle(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl, const ::Graphics::Rectangle& __zz_cib_param0)
    : ::Graphics::Rectangle::Rectangle(__zz_cib_param0)
    , __zz_cib_proxy(proxy)
    , __zz_cib_mtbl_helper(mtbl)
  {}
  double Area() const override {
    using AreaProc = double (__zz_cib_decl *) (__zz_cib_PROXY*);
    return __zz_cib_get_mtable_helper().invoke<AreaProc>(
      __zz_cib_GenericProxy::__zz_cib_methodid::Area_0,
      __zz_cib_proxy);
  }
  double Perimeter() const override {
    using PerimeterProc = double (__zz_cib_decl *) (__zz_cib_PROXY*);
    return __zz_cib_get_mtable_helper().invoke<PerimeterProc>(
      __zz_cib_GenericProxy::__zz_cib_methodid::Perimeter_1,
      __zz_cib_proxy);
  }
  void Draw(::Graphics::Context* ctx) const override {
    using DrawProc = void (__zz_cib_decl *) (__zz_cib_PROXY*, ::Graphics::Context* ctx);
    return __zz_cib_get_mtable_helper().invoke<DrawProc>(
      __zz_cib_GenericProxy::__zz_cib_methodid::Draw_2,
      __zz_cib_proxy,
      ctx);
  }
  void __zz_cib_release_proxy() { __zz_cib_proxy = nullptr; }
};
}}}}
namespace __zz_cib_ { namespace Graphics { namespace Rectangle {
static ::Graphics::Rectangle* __zz_cib_decl __zz_cib_copy_0(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl, const ::Graphics::Rectangle* __zz_cib_param0) {
  return new __zz_cib_::Graphics::Rectangle::__zz_cib_GenericProxy::Rectangle(proxy, mtbl, *__zz_cib_param0);
}
static void __zz_cib_decl __zz_cib_delete_1(::Graphics::Rectangle* __zz_cib_obj) {
  delete __zz_cib_obj;
}
static ::Graphics::Rectangle* __zz_cib_decl __zz_cib_new_2(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl, double left, double bottom, double right, double top) {
  return new __zz_cib_::Graphics::Rectangle::__zz_cib_GenericProxy::Rectangle(proxy, mtbl, left, bottom, right, top);
}
static double __zz_cib_decl Area_3(const ::Graphics::Rectangle* __zz_cib_obj) {
  return __zz_cib_obj->::Graphics::Rectangle::Area();
}
static double __zz_cib_decl Perimeter_4(const ::Graphics::Rectangle* __zz_cib_obj) {
  return __zz_cib_obj->::Graphics::Rectangle::Perimeter();
}
static void __zz_cib_decl Draw_5(const ::Graphics::Rectangle* __zz_cib_obj, ::Graphics::Context* ctx) {
  __zz_cib_obj->::Graphics::Rectangle::Draw(ctx);
}
static ::Graphics::Shape* __zz_cib_decl __zz_cib_cast_to___Graphics__Shape_6(::Graphics::Rectangle* __zz_cib_obj) {
  return __zz_cib_obj;
}
static void __zz_cib_decl __zz_cib_release_proxy_7(::Graphics::Rectangle* __zz_cib_obj) {
  auto unknownProxy = dynamic_cast<__zz_cib_::Graphics::Rectangle::__zz_cib_GenericProxy::Rectangle*>(__zz_cib_obj);
  if (unknownProxy)
    unknownProxy->__zz_cib_release_proxy();
}
}}}

namespace __zz_cib_ { namespace Graphics { namespace Rectangle {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_new_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&Area_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&Perimeter_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&Draw_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_cast_to___Graphics__Shape_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_release_proxy_7)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 8 };
  return &methodTable;
}
}}}
