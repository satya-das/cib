#include "log_context.h"

#include "__zz_cib_Graphics-ids.h"
#include "__zz_cib_Graphics-mtable-helper.h"
#include "__zz_cib_Graphics-proxy.h"

namespace __zz_cib_ { namespace Graphics { namespace LogContext {
struct __zz_cib_Delegator : public ::Graphics::LogContext {
  using __zz_cib_Delegatee = ::Graphics::LogContext;
  static ::Graphics::LogContext* __zz_cib_decl __zz_cib_copy_0(::Graphics::LogContext const * __zz_cib_param0) {
    return new ::Graphics::LogContext(*__zz_cib_param0);
  }
  static ::Graphics::LogContext* __zz_cib_decl __zz_cib_new_1() {
    return new ::Graphics::LogContext();
  }
  static void __zz_cib_decl __zz_cib_delete_2(__zz_cib_Delegatee* __zz_cib_obj) {
    delete __zz_cib_obj;
  }
  static void __zz_cib_decl Line_3(__zz_cib_Delegatee* __zz_cib_obj, double x1, double y1, double x2, double y2) {
    __zz_cib_obj->__zz_cib_Delegatee::Line(x1, y1, x2, y2);
  }
  static void __zz_cib_decl Rect_4(__zz_cib_Delegatee* __zz_cib_obj, double l, double b, double r, double t) {
    __zz_cib_obj->__zz_cib_Delegatee::Rect(l, b, r, t);
  }
  static void __zz_cib_decl Circle_5(__zz_cib_Delegatee* __zz_cib_obj, double cx, double cy, double r) {
    __zz_cib_obj->__zz_cib_Delegatee::Circle(cx, cy, r);
  }
  static void __zz_cib_decl Ellipse_6(__zz_cib_Delegatee* __zz_cib_obj, double cx, double cy, double a, double b) {
    __zz_cib_obj->__zz_cib_Delegatee::Ellipse(cx, cy, a, b);
  }
  static ::Graphics::Context* __zz_cib_decl __zz_cib_cast_to___Graphics__Context_7(::Graphics::LogContext* __zz_cib_obj) {
    return __zz_cib_obj;
  }
};
}}}

namespace __zz_cib_ { namespace Graphics { namespace LogContext {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::Line_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::Rect_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::Circle_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::Ellipse_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_cast_to___Graphics__Context_7)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 8 };
  return &methodTable;
}
}}}
