#include "composite.h"
#include "context.h"
#include "shape.h"

namespace __zz_cib_ { namespace Graphics { namespace Composite { namespace __zz_cib_Generic {
class Composite : public ::Graphics::Composite {
  __zz_cib_HANDLE* __zz_cib_h_;

  static __zz_cib_::__zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() {
    static __zz_cib_::__zz_cib_MethodTableHelper mtableHelper(__zz_cib_Graphics_GetMethodTable(
      __zz_cib_classid));
    return mtableHelper;
  }
  Composite(__zz_cib_HANDLE* h) : __zz_cib_h_(h) {}
public:
  static ::Graphics::Composite* __zz_cib_from_handle(__zz_cib_HANDLE* h) {
    return new Composite(h);
  }
  double Area() const override {
    using AreaProc = double (__zz_cib_decl *) (__zz_cib_HANDLE*);
    return __zz_cib_get_mtable_helper().invoke<AreaProc>(
      __zz_cib_methodid::Area_6,
      __zz_cib_h_);
  }
  double Perimeter() const override {
    using PerimeterProc = double (__zz_cib_decl *) (__zz_cib_HANDLE*);
    return __zz_cib_get_mtable_helper().invoke<PerimeterProc>(
      __zz_cib_methodid::Perimeter_7,
      __zz_cib_h_);
  }
  void Draw(::Graphics::Context* ctx) const override {
    using DrawProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*, __zz_cib_HANDLE* ctx);
    return __zz_cib_get_mtable_helper().invoke<DrawProc>(
      __zz_cib_methodid::Draw_8,
      __zz_cib_h_,
      __zz_cib_::Graphics::Context::__zz_cib_Helper::__zz_cib_handle(ctx));
  }
};
}}}}
::Graphics::Composite* __zz_cib_::Graphics::Composite::__zz_cib_Helper::__zz_cib_create_proxy(__zz_cib_HANDLE* h) {
  switch(__zz_cib_get_class_id(h)) {
  default:
    return ::__zz_cib_::Graphics::Composite::__zz_cib_Generic::Composite::__zz_cib_from_handle(h);
  }
}
