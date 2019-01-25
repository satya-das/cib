#include "composite.h"
#include "context.h"
#include "shape.h"


Graphics::Composite::Composite(__zz_cib_::__zz_cib_HANDLE* h)
  : ::Graphics::Shape::Shape(__zz_cib_::Graphics::Composite::__zz_cib_Helper::__zz_cib_cast_to___Graphics__Shape_10(h))
  , __zz_cib_h_(h)
{
  __zz_cib_::Graphics::Composite::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

Graphics::Composite::Composite(Composite&& rhs)
  : ::Graphics::Shape::Shape(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
  __zz_cib_::Graphics::Composite::__zz_cib_Helper::__zz_cib_add_proxy(this, __zz_cib_h_);
}

Graphics::Composite::Composite(::Graphics::Composite const & __zz_cib_param0)
  : Graphics::Composite(__zz_cib_::Graphics::Composite::__zz_cib_Helper::__zz_cib_copy_0(__zz_cib_::Graphics::Composite::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

Graphics::Composite::~Composite() {
  auto h = __zz_cib_::Graphics::Composite::__zz_cib_Helper::__zz_cib_release_handle(this);
  __zz_cib_::Graphics::Composite::__zz_cib_Helper::__zz_cib_delete_1(h);
  __zz_cib_::Graphics::Composite::__zz_cib_Helper::__zz_cib_remove_proxy(h);
}

Graphics::Composite::Composite()
  : Graphics::Composite(__zz_cib_::Graphics::Composite::__zz_cib_Helper::__zz_cib_new_2())
{}

void Graphics::Composite::Add(::Graphics::Shape* shape) {
  __zz_cib_::Graphics::Composite::__zz_cib_Helper::Add_3(__zz_cib_h_, __zz_cib_::Graphics::Shape::__zz_cib_Helper::__zz_cib_handle(shape));
}

size_t Graphics::Composite::NumShapes() const {
  return __zz_cib_::Graphics::Composite::__zz_cib_Helper::NumShapes_4(__zz_cib_h_);
}

::Graphics::Shape* Graphics::Composite::ShapeAt(size_t idxShape) const {
  return __zz_cib_::Graphics::Shape::__zz_cib_Helper::__zz_cib_from_handle(
    __zz_cib_::Graphics::Composite::__zz_cib_Helper::ShapeAt_5(__zz_cib_h_, idxShape)
  );
}

double Graphics::Composite::Area() const {
  return __zz_cib_::Graphics::Composite::__zz_cib_Helper::Area_6(__zz_cib_h_);
}

double Graphics::Composite::Perimeter() const {
  return __zz_cib_::Graphics::Composite::__zz_cib_Helper::Perimeter_7(__zz_cib_h_);
}

void Graphics::Composite::Draw(::Graphics::Context* ctx) const {
  __zz_cib_::Graphics::Composite::__zz_cib_Helper::Draw_8(__zz_cib_h_, __zz_cib_::Graphics::Context::__zz_cib_Helper::__zz_cib_handle(ctx));
}

::Graphics::Composite* Graphics::Composite::CreateCompositeOfRectAndCircle() {
  return __zz_cib_::Graphics::Composite::__zz_cib_Helper::__zz_cib_from_handle(
    __zz_cib_::Graphics::Composite::__zz_cib_Helper::CreateCompositeOfRectAndCircle_9()
  );
}
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
    return __zz_cib_get_mtable_helper().invoke<AreaProc, __zz_cib_methodid::Area_6>(
    __zz_cib_h_);
}
  double Perimeter() const override {
    using PerimeterProc = double (__zz_cib_decl *) (__zz_cib_HANDLE*);
    return __zz_cib_get_mtable_helper().invoke<PerimeterProc, __zz_cib_methodid::Perimeter_7>(
    __zz_cib_h_);
}
  void Draw(::Graphics::Context* ctx) const override {
    using DrawProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*, __zz_cib_HANDLE* ctx);
    return __zz_cib_get_mtable_helper().invoke<DrawProc, __zz_cib_methodid::Draw_8>(
    __zz_cib_h_,
    __zz_cib_::Graphics::Context::__zz_cib_Helper::__zz_cib_handle(ctx));
}
};
}}}}
::Graphics::Composite* __zz_cib_::Graphics::Composite::__zz_cib_Helper::__zz_cib_create_proxy(__zz_cib_HANDLE* h) {
  switch(__zz_cib_get_class_id(h)) {
  case __zz_cib_::Graphics::Composite::__zz_cib_classid:
    return __zz_cib_::Graphics::Composite::__zz_cib_Helper::__zz_cib_from_handle(h);
  default:
    return ::__zz_cib_::Graphics::Composite::__zz_cib_Generic::Composite::__zz_cib_from_handle(h);
  }
}
