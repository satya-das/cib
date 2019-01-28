#include "circ.h"
#include "context.h"
#include "shape.h"

#include "__zz_cib_Graphics-ids.h"
#include "__zz_cib_Graphics-mtable-helper.h"
#include "__zz_cib_Graphics-proxy.h"

namespace __zz_cib_ { namespace Graphics { namespace Circle {
struct __zz_cib_Delegator : public ::Graphics::Circle {
  using __zz_cib_ParentClass = ::Graphics::Circle;
  using __zz_cib_ParentClass::__zz_cib_ParentClass;
  using __zz_cib_Delegatee = __zz_cib_Delegator;
  static ::Graphics::Circle* __zz_cib_decl __zz_cib_copy_0(const __zz_cib_Delegator* __zz_cib_obj) {
    return new __zz_cib_Delegator(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
    delete __zz_cib_obj;
  }
  static ::Graphics::Circle* __zz_cib_decl __zz_cib_new_2(double Ox, double Oy, double radius) {
    return new __zz_cib_Delegator(Ox, Oy, radius);
  }
  static double __zz_cib_decl Area_3(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_Delegatee::Area();
  }
  static double __zz_cib_decl Perimeter_4(const __zz_cib_Delegatee* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_Delegatee::Perimeter();
  }
  static void __zz_cib_decl Draw_5(const __zz_cib_Delegatee* __zz_cib_obj, ::Graphics::Context* ctx) {
    __zz_cib_obj->__zz_cib_Delegatee::Draw(ctx);
  }
  static ::Graphics::Shape* __zz_cib_decl CreateCircle_6(double Ox, double Oy, double radius) {
    return CreateCircle(Ox, Oy, radius);
  }
  static ::Graphics::Shape* __zz_cib_decl __zz_cib_cast_to___Graphics__Shape_7(::Graphics::Circle* __zz_cib_obj) {
    return __zz_cib_obj;
  }
};
}}}

namespace __zz_cib_ { namespace Graphics { namespace Circle {
const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
  static const __zz_cib_MTableEntry methodArray[] = {
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_copy_0),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_delete_1),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_new_2),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::Area_3),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::Perimeter_4),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::Draw_5),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::CreateCircle_6),
    reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_Delegator::__zz_cib_cast_to___Graphics__Shape_7)
  };
  static const __zz_cib_MethodTable methodTable = { methodArray, 8 };
  return &methodTable;
}
}}}
