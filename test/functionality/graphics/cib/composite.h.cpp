#include "composite.h"
#include "context.h"
#include "shape.h"

#include <typeinfo>
#include <typeindex>
#include <cstdint>
#include <unordered_map>

extern std::unordered_map<std::type_index, std::uint32_t> __zz_cib_gClassIdRepo;

#include "__zz_cib_Graphics-ids.h"
#include "__zz_cib_Graphics-mtable-helper.h"
#include "__zz_cib_Graphics-proxy.h"

namespace __zz_cib_ { namespace Graphics { namespace Composite {
static ::Graphics::Composite* __zz_cib_decl __zz_cib_copy_0(::Graphics::Composite const * __zz_cib_param0) {
  return new ::Graphics::Composite(*__zz_cib_param0);
}
static void __zz_cib_decl __zz_cib_delete_1(::Graphics::Composite* __zz_cib_obj) {
  delete __zz_cib_obj;
}
static ::Graphics::Composite* __zz_cib_decl __zz_cib_new_2() {
  return new ::Graphics::Composite();
}
static void __zz_cib_decl Add_3(::Graphics::Composite* __zz_cib_obj, ::Graphics::Shape* shape) {
  __zz_cib_obj->::Graphics::Composite::Add(shape);
}
static size_t __zz_cib_decl NumShapes_4(const ::Graphics::Composite* __zz_cib_obj) {
  return __zz_cib_obj->::Graphics::Composite::NumShapes();
}
static ::Graphics::Shape* __zz_cib_decl ShapeAt_5(const ::Graphics::Composite* __zz_cib_obj, size_t idxShape) {
  return __zz_cib_obj->::Graphics::Composite::ShapeAt(idxShape);
}
static double __zz_cib_decl Area_6(const ::Graphics::Composite* __zz_cib_obj) {
  return __zz_cib_obj->::Graphics::Composite::Area();
}
static double __zz_cib_decl Perimeter_7(const ::Graphics::Composite* __zz_cib_obj) {
  return __zz_cib_obj->::Graphics::Composite::Perimeter();
}
static void __zz_cib_decl Draw_8(const ::Graphics::Composite* __zz_cib_obj, ::Graphics::Context* ctx) {
  __zz_cib_obj->::Graphics::Composite::Draw(ctx);
}
static ::Graphics::Composite* __zz_cib_decl CreateCompositeOfRectAndCircle_9() {
  return ::Graphics::Composite::CreateCompositeOfRectAndCircle();
}
static ::Graphics::Shape* __zz_cib_decl __zz_cib_cast_to___Graphics__Shape_10(::Graphics::Composite* __zz_cib_obj) {
  return __zz_cib_obj;
}
std::uint32_t __zz_cib_decl __zz_cib_get_class_id_11(::Graphics::Composite* __zz_cib_obj) {
  static bool classIdRepoPopulated = false;
  if (!classIdRepoPopulated) {
    classIdRepoPopulated = true;
  }
  return __zz_cib_gClassIdRepo[std::type_index(typeid(*__zz_cib_obj))];
}
}}}

namespace __zz_cib_ { namespace Graphics { namespace Composite {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_new_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&Add_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&NumShapes_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&ShapeAt_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&Area_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&Perimeter_7),
    reinterpret_cast<__zz_cib_MTableEntry> (&Draw_8),
    reinterpret_cast<__zz_cib_MTableEntry> (&CreateCompositeOfRectAndCircle_9),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_cast_to___Graphics__Shape_10),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_get_class_id_11)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 12 };
  return &methodTable;
}
}}}
