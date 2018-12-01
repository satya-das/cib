#include "context.h"
#include "rect.h"

#include "__zz_cib_Graphics-ids.h"
#include "__zz_cib_Graphics-mtable-helper.h"
#include "__zz_cib_Graphics-proxy.h"

namespace __zz_cib_ { namespace Graphics { namespace Rectangle {
static ::Graphics::Rectangle* __zz_cib_decl __zz_cib_copy_0(::Graphics::Rectangle const * __zz_cib_param0) {
  return new ::Graphics::Rectangle(*__zz_cib_param0);
}
static void __zz_cib_decl __zz_cib_delete_1(::Graphics::Rectangle* __zz_cib_obj) {
  delete __zz_cib_obj;
}
static ::Graphics::Rectangle* __zz_cib_decl __zz_cib_new_2(double left, double bottom, double right, double top) {
  return new ::Graphics::Rectangle(left, bottom, right, top);
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
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_cast_to___Graphics__Shape_6)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 7 };
  return &methodTable;
}
}}}
