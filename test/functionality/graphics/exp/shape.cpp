#include "circ.h"
#include "composite.h"
#include "context.h"
#include "ellipse.h"
#include "rect.h"
#include "shape.h"


Graphics::Shape::Shape(__zz_cib_::__zz_cib_HANDLE* h)
  : __zz_cib_h_(h)
{
  __zz_cib_::Graphics::Shape::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

Graphics::Shape::Shape(Shape&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_::Graphics::Shape::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

Graphics::Shape::~Shape() {
  __zz_cib_::Graphics::Shape::__zz_cib_Helper::__zz_cib_release_proxy(this);
  auto h = __zz_cib_::Graphics::Shape::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::Graphics::Shape::__zz_cib_Helper::__zz_cib_delete_4(h);
}

Graphics::Shape::Shape()
  : Graphics::Shape(__zz_cib_::Graphics::Shape::__zz_cib_Helper::__zz_cib_new_0(this))
{}
namespace __zz_cib_ { namespace Graphics { namespace Shape { namespace __zz_cib_Generic {
class Shape : public ::Graphics::Shape {
  __zz_cib_HANDLE* __zz_cib_h_;

  static __zz_cib_::__zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() {
    static __zz_cib_::__zz_cib_MethodTableHelper mtableHelper(__zz_cib_Graphics_GetMethodTable(
      __zz_cib_classid));
    return mtableHelper;
  }
  Shape(__zz_cib_HANDLE* h) : ::Graphics::Shape(h) {}
public:
  static ::Graphics::Shape* __zz_cib_from_handle(__zz_cib_HANDLE* h) {
    return new Shape(h);
  }
  double Area() const override {
    using AreaProc = double (__zz_cib_decl *) (__zz_cib_HANDLE*);
    return __zz_cib_get_mtable_helper().invoke<AreaProc, __zz_cib_methodid::Area_1>(
      __zz_cib_h_);
  }
  double Perimeter() const override {
    using PerimeterProc = double (__zz_cib_decl *) (__zz_cib_HANDLE*);
    return __zz_cib_get_mtable_helper().invoke<PerimeterProc, __zz_cib_methodid::Perimeter_2>(
      __zz_cib_h_);
  }
  void Draw(::Graphics::Context* ctx) const override {
    using DrawProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*, __zz_cib_HANDLE* ctx);
    return __zz_cib_get_mtable_helper().invoke<DrawProc, __zz_cib_methodid::Draw_3>(
      __zz_cib_h_,
      __zz_cib_::Graphics::Context::__zz_cib_Helper::__zz_cib_handle(ctx));
  }
  ~Shape() override {
    if (!__zz_cib_h_) return;
    using __zz_cib_deleteProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_deleteProc, __zz_cib_methodid::__zz_cib_delete_4>(
      __zz_cib_h_);
  }
};
}}}}
::Graphics::Shape* __zz_cib_::Graphics::Shape::__zz_cib_Helper::__zz_cib_create_proxy(__zz_cib_HANDLE* h) {
  switch(__zz_cib_get_class_id(h)) {
  case __zz_cib_::Graphics::Circle::__zz_cib_classid:
    return __zz_cib_::Graphics::Circle::__zz_cib_Helper::__zz_cib_from_handle(h);
  case __zz_cib_::Graphics::Composite::__zz_cib_classid:
    return __zz_cib_::Graphics::Composite::__zz_cib_Helper::__zz_cib_from_handle(h);
  case __zz_cib_::Graphics::Ellipse::__zz_cib_classid:
    return __zz_cib_::Graphics::Ellipse::__zz_cib_Helper::__zz_cib_from_handle(h);
  case __zz_cib_::Graphics::Rectangle::__zz_cib_classid:
    return __zz_cib_::Graphics::Rectangle::__zz_cib_Helper::__zz_cib_from_handle(h);
  default:
    return ::__zz_cib_::Graphics::Shape::__zz_cib_Generic::Shape::__zz_cib_from_handle(h);
  }
}
namespace __zz_cib_ { namespace Graphics { namespace Shape {
struct __zz_cib_Delegator {
  using __zz_cib_Delegatee = ::Graphics::Shape;
  static double __zz_cib_decl Area_0(const ::Graphics::Shape* __zz_cib_obj) {
    return __zz_cib_obj->Area();
  }
  static double __zz_cib_decl Perimeter_1(const ::Graphics::Shape* __zz_cib_obj) {
    return __zz_cib_obj->Perimeter();
  }
  static void __zz_cib_decl Draw_2(const ::Graphics::Shape* __zz_cib_obj, __zz_cib_HANDLE* ctx) {
    __zz_cib_obj->Draw(__zz_cib_::Graphics::Context::__zz_cib_Helper::__zz_cib_from_handle(ctx));
  }
  static void __zz_cib_decl __zz_cib_delete_3(::Graphics::Shape* __zz_cib_obj) {
    delete __zz_cib_obj;
  }
};
}}}

namespace __zz_cib_ { namespace Graphics { namespace Shape {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::Area_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::Perimeter_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::Draw_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete_3)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 4 };
  return &methodTable;
}
}}}

namespace __zz_cib_ { namespace Graphics { namespace Shape {
const __zz_cib_MethodTable* __zz_cib_Helper::__zz_cib_get_proxy_method_table() {
  return __zz_cib_GetMethodTable();
}
}}}

