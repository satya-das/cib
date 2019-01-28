#include "circ.h"
#include "composite.h"
#include "context.h"
#include "ellipse.h"
#include "rect.h"
#include "shape.h"

#include <typeinfo>
#include <typeindex>
#include <cstdint>
#include <unordered_map>

extern std::unordered_map<std::type_index, std::uint32_t> __zz_cib_gClassIdRepo;

#include "__zz_cib_Graphics-ids.h"
#include "__zz_cib_Graphics-mtable-helper.h"
#include "__zz_cib_Graphics-proxy.h"

namespace __zz_cib_ { namespace Graphics { namespace Shape { namespace __zz_cib_GenericProxy {
class Shape : public ::Graphics::Shape {
  __zz_cib_PROXY* __zz_cib_proxy;
  const __zz_cib_MethodTableHelper __zz_cib_mtbl_helper;

  const __zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() const {
    return __zz_cib_mtbl_helper;
  }
public:
  Shape(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl)
    : ::Graphics::Shape::Shape()
    , __zz_cib_proxy(proxy)
    , __zz_cib_mtbl_helper(mtbl)
  {}
  double Area() const override {
    using AreaProc = double (__zz_cib_decl *) (__zz_cib_PROXY*);
    return __zz_cib_get_mtable_helper().invoke<AreaProc, __zz_cib_GenericProxy::__zz_cib_methodid::Area_0>(
      __zz_cib_proxy);
  }
  double Perimeter() const override {
    using PerimeterProc = double (__zz_cib_decl *) (__zz_cib_PROXY*);
    return __zz_cib_get_mtable_helper().invoke<PerimeterProc, __zz_cib_GenericProxy::__zz_cib_methodid::Perimeter_1>(
      __zz_cib_proxy);
  }
  void Draw(::Graphics::Context* ctx) const override {
    using DrawProc = void (__zz_cib_decl *) (__zz_cib_PROXY*, ::Graphics::Context* ctx);
    return __zz_cib_get_mtable_helper().invoke<DrawProc, __zz_cib_GenericProxy::__zz_cib_methodid::Draw_2>(
      __zz_cib_proxy,
      ctx);
  }
  ~Shape() override {
    if (!__zz_cib_proxy) return;
    using __zz_cib_deleteProc = void (__zz_cib_decl *) (__zz_cib_PROXY*);
    __zz_cib_get_mtable_helper().invoke<__zz_cib_deleteProc, __zz_cib_GenericProxy::__zz_cib_methodid::__zz_cib_delete_3>(
      __zz_cib_proxy);
  }
  void __zz_cib_release_proxy() { __zz_cib_proxy = nullptr; }
};
}}}}
namespace __zz_cib_ { namespace Graphics { namespace Shape {
struct __zz_cib_Delegator : public ::Graphics::Shape{
  using __zz_cib_Delegatee = ::Graphics::Shape;
  using __zz_cib_Delegatee::__zz_cib_Delegatee;
  static ::Graphics::Shape* __zz_cib_decl __zz_cib_new_0(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl) {
    return new __zz_cib_::Graphics::Shape::__zz_cib_GenericProxy::Shape(proxy, mtbl);
  }
  static double __zz_cib_decl Area_1(const __zz_cib_Delegator* __zz_cib_obj) {
    return __zz_cib_obj->Area();
  }
  static double __zz_cib_decl Perimeter_2(const __zz_cib_Delegator* __zz_cib_obj) {
    return __zz_cib_obj->Perimeter();
  }
  static void __zz_cib_decl Draw_3(const __zz_cib_Delegator* __zz_cib_obj, ::Graphics::Context* ctx) {
    __zz_cib_obj->Draw(ctx);
  }
  static void __zz_cib_decl __zz_cib_delete_4(__zz_cib_Delegator* __zz_cib_obj) {
    delete __zz_cib_obj;
  }
  static std::uint32_t __zz_cib_decl __zz_cib_get_class_id_5(::Graphics::Shape* __zz_cib_obj) {
    static bool classIdRepoPopulated = false;
    if (!classIdRepoPopulated) {
      __zz_cib_gClassIdRepo[std::type_index(typeid(::Graphics::Circle))] = __zz_cib_::Graphics::Circle::__zz_cib_classid;
      __zz_cib_gClassIdRepo[std::type_index(typeid(::Graphics::Composite))] = __zz_cib_::Graphics::Composite::__zz_cib_classid;
      __zz_cib_gClassIdRepo[std::type_index(typeid(::Graphics::Ellipse))] = __zz_cib_::Graphics::Ellipse::__zz_cib_classid;
      __zz_cib_gClassIdRepo[std::type_index(typeid(::Graphics::Rectangle))] = __zz_cib_::Graphics::Rectangle::__zz_cib_classid;
      classIdRepoPopulated = true;
    }
    return __zz_cib_gClassIdRepo[std::type_index(typeid(*__zz_cib_obj))];
  }
  static void __zz_cib_decl __zz_cib_release_proxy_6(::Graphics::Shape* __zz_cib_obj) {
    auto unknownProxy = dynamic_cast<__zz_cib_::Graphics::Shape::__zz_cib_GenericProxy::Shape*>(__zz_cib_obj);
    if (unknownProxy)
      unknownProxy->__zz_cib_release_proxy();
  }
};
}}}

namespace __zz_cib_ { namespace Graphics { namespace Shape {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::Area_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::Perimeter_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::Draw_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_get_class_id_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_release_proxy_6)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 7 };
  return &methodTable;
}
}}}
