#include "context.h"
#include "ellipse.h"

#include "__zz_cib_Graphics-ids.h"
#include "__zz_cib_Graphics-mtable-helper.h"
#include "__zz_cib_Graphics-proxy.h"

namespace __zz_cib_ { namespace Graphics { namespace Ellipse {
struct __zz_cib_Delegator : public ::Graphics::Ellipse{
  using __zz_cib_ParentClass = ::Graphics::Ellipse;
  using __zz_cib_ParentClass::__zz_cib_ParentClass;
  static ::Graphics::Ellipse* __zz_cib_decl __zz_cib_copy_0(const __zz_cib_Delegator* __zz_cib_obj) {
    return new __zz_cib_Delegator(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_delete_1(__zz_cib_Delegator* __zz_cib_obj) {
    delete __zz_cib_obj;
  }
  static ::Graphics::Ellipse* __zz_cib_decl __zz_cib_new_2(double Ox, double Oy, double a, double b) {
    return new __zz_cib_Delegator(Ox, Oy, a, b);
  }
  static double __zz_cib_decl Area_3(const __zz_cib_Delegator* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_ParentClass::Area();
  }
  static double __zz_cib_decl Perimeter_4(const __zz_cib_Delegator* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_ParentClass::Perimeter();
  }
  static void __zz_cib_decl Draw_5(const __zz_cib_Delegator* __zz_cib_obj, ::Graphics::Context* ctx) {
    __zz_cib_obj->__zz_cib_ParentClass::Draw(ctx);
  }
  static ::Graphics::Shape* __zz_cib_decl __zz_cib_cast_to___Graphics__Shape_6(::Graphics::Ellipse* __zz_cib_obj) {
    return __zz_cib_obj;
  }
};
}}}

namespace __zz_cib_ { namespace Graphics { namespace Ellipse {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::Area_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::Perimeter_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::Draw_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_cast_to___Graphics__Shape_6)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 7 };
  return &methodTable;
}
}}}
