#include "circ.h"
#include "context.h"
#include "shape.h"

#include "__zz_cib_Graphics-ids.h"
#include "__zz_cib_Graphics-mtable-helper.h"
#include "__zz_cib_Graphics-proxy.h"

namespace __zz_cib_ { namespace Graphics { namespace Circle {
static ::Graphics::Circle* __zz_cib_decl __zz_cib_copy_0(::Graphics::Circle const * __zz_cib_param0) {
  return new ::Graphics::Circle(*__zz_cib_param0);
}
static void __zz_cib_decl __zz_cib_delete_1(::Graphics::Circle* __zz_cib_obj) {
  delete __zz_cib_obj;
}
static ::Graphics::Circle* __zz_cib_decl __zz_cib_new_2(double Ox, double Oy, double radius) {
  return new ::Graphics::Circle(Ox, Oy, radius);
}
static double __zz_cib_decl Area_3(const ::Graphics::Circle* __zz_cib_obj) {
  return __zz_cib_obj->::Graphics::Circle::Area();
}
static double __zz_cib_decl Perimeter_4(const ::Graphics::Circle* __zz_cib_obj) {
  return __zz_cib_obj->::Graphics::Circle::Perimeter();
}
static void __zz_cib_decl Draw_5(const ::Graphics::Circle* __zz_cib_obj, ::Graphics::Context* ctx) {
  __zz_cib_obj->::Graphics::Circle::Draw(ctx);
}
static ::Graphics::Shape* __zz_cib_decl CreateCircle_6(double Ox, double Oy, double radius) {
  return ::Graphics::Circle::CreateCircle(Ox, Oy, radius);
}
static ::Graphics::Shape* __zz_cib_decl __zz_cib_cast_to___Graphics__Shape_7(::Graphics::Circle* __zz_cib_obj) {
  return __zz_cib_obj;
}
}}}

namespace __zz_cib_ { namespace Graphics { namespace Circle {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_new_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&Area_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&Perimeter_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&Draw_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&CreateCircle_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_cast_to___Graphics__Shape_7)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 8 };
  return &methodTable;
}
}}}
