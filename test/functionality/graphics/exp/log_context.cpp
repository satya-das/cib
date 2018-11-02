#include "log_context.h"

namespace __zz_cib_ { namespace Graphics { namespace LogContext {
  static void __zz_cib_decl Line_0(::Graphics::LogContext* __zz_cib_obj, double x1, double y1, double x2, double y2) {
    __zz_cib_obj->Line(x1, y1, x2, y2);
  }
  static void __zz_cib_decl Rect_1(::Graphics::LogContext* __zz_cib_obj, double l, double b, double r, double t) {
    __zz_cib_obj->Rect(l, b, r, t);
  }
  static void __zz_cib_decl Circle_2(::Graphics::LogContext* __zz_cib_obj, double cx, double cy, double r) {
    __zz_cib_obj->Circle(cx, cy, r);
  }
  static void __zz_cib_decl Ellipse_3(::Graphics::LogContext* __zz_cib_obj, double cx, double cy, double a, double b) {
    __zz_cib_obj->Ellipse(cx, cy, a, b);
  }
  static void __zz_cib_decl __zz_cib_delete_4(::Graphics::LogContext* __zz_cib_obj) {
    delete __zz_cib_obj;
  }
}}}

namespace __zz_cib_ { namespace Graphics { namespace LogContext {
  static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
    static const __zz_cib_MTableEntry methodArray[] = {
      reinterpret_cast<__zz_cib_MTableEntry> (&Line_0),
      reinterpret_cast<__zz_cib_MTableEntry> (&Rect_1),
      reinterpret_cast<__zz_cib_MTableEntry> (&Circle_2),
      reinterpret_cast<__zz_cib_MTableEntry> (&Ellipse_3),
      reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_delete_4)
    };
    static const __zz_cib_MethodTable methodTable = { methodArray, 5 };
    return &methodTable;
  }
}}}

namespace __zz_cib_ { namespace Graphics { namespace LogContext {
  const __zz_cib_MethodTable* __zz_cib_Helper::__zz_cib_get_proxy_method_table() {
    return __zz_cib_GetMethodTable();
  }
}}}

