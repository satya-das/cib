#include "context.h"
#include "rect.h"

#include "__zz_cib_Graphics-ids.h"
#include "__zz_cib_Graphics-mtable-helper.h"
#include "__zz_cib_Graphics-proxy.h"

namespace __zz_cib_ { namespace Graphics { namespace Rectangle {
struct __zz_cib_Delegator : public ::Graphics::Rectangle {
  using __zz_cib_ParentClass = ::Graphics::Rectangle;
  using __zz_cib_ParentClass::__zz_cib_ParentClass;
  template <typename _T>  __zz_cib_ParentClass& operator=(const _T& rhs) {
    return const_cast<__zz_cib_ParentClass&>(this->__zz_cib_ParentClass::operator=(rhs));
  }
  using __zz_cib_Delegatee = __zz_cib_Delegator;
  static ::Graphics::Rectangle* __zz_cib_decl __zz_cib_copy_0(const __zz_cib_Delegator* __zz_cib_obj) {
    return new __zz_cib_Delegator(*__zz_cib_obj);
  }
  static void __zz_cib_decl __zz_cib_delete_1(__zz_cib_Delegatee* __zz_cib_obj) {
    delete __zz_cib_obj;
  }
  static ::Graphics::Rectangle* __zz_cib_decl __zz_cib_new_2(double left, double bottom, double right, double top) {
    return new __zz_cib_Delegator(left, bottom, right, top);
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
  static ::Graphics::Shape* __zz_cib_decl __zz_cib_cast_to___Graphics__Shape_6(::Graphics::Rectangle* __zz_cib_obj) {
    return __zz_cib_obj;
  }
};
}}}

namespace __zz_cib_ { namespace Graphics { namespace Rectangle {
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
