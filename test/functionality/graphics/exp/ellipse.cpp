#include "ellipse.h"

namespace __zz_cib_ { namespace Graphics { namespace Ellipse {
static double __zz_cib_decl Area_0(const ::Graphics::Ellipse* __zz_cib_obj) {
  return __zz_cib_obj->Area();
}
static double __zz_cib_decl Perimeter_1(const ::Graphics::Ellipse* __zz_cib_obj) {
  return __zz_cib_obj->Perimeter();
}
static void __zz_cib_decl Draw_2(const ::Graphics::Ellipse* __zz_cib_obj, __zz_cib_HANDLE* ctx) {
  __zz_cib_obj->Draw(__zz_cib_::Graphics::Context::__zz_cib_Helper::__zz_cib_from_handle(ctx));
}
static void __zz_cib_decl __zz_cib_delete_3(::Graphics::Ellipse* __zz_cib_obj) {
  delete __zz_cib_obj;
}
}}}

namespace __zz_cib_ { namespace Graphics { namespace Ellipse {
static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&Area_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&Perimeter_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&Draw_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_delete_3)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 4 };
  return &methodTable;
}
}}}

namespace __zz_cib_ { namespace Graphics { namespace Ellipse {
const __zz_cib_MethodTable* __zz_cib_Helper::__zz_cib_get_proxy_method_table() {
  return __zz_cib_GetMethodTable();
}
}}}

