#pragma once

#include "__zz_cib_internal/__zz_cib_Graphics-def.h"
#include "__zz_cib_internal/__zz_cib_Graphics-ids.h"
#include "__zz_cib_internal/__zz_cib_Graphics-mtable-helper.h"
#include "__zz_cib_internal/__zz_cib_Graphics-handle-helper.h"

namespace __zz_cib_ { namespace Graphics { namespace Rectangle {
class __zz_cib_Helper : public __zz_cib_::__zz_cib_MethodTableHelper
  , public __zz_cib_::__zz_cib_HandleHelper<::Graphics::Rectangle, __zz_cib_Helper> {
private:
  friend class ::Graphics::Rectangle;
  friend class __zz_cib_::__zz_cib_HandleHelper<::Graphics::Rectangle, __zz_cib_Helper>;

  static __zz_cib_HANDLE* __zz_cib_copy_0(__zz_cib_HANDLE const * __zz_cib_param0) {
    using __zz_cib_copyProc = __zz_cib_HANDLE* (__zz_cib_decl *) (__zz_cib_HANDLE const * __zz_cib_param0);
    return instance().invoke<__zz_cib_copyProc, __zz_cib_methodid::__zz_cib_copy_0>(
      __zz_cib_param0);
  }
  static void __zz_cib_delete_1(__zz_cib_HANDLE* __zz_cib_obj) {
    if (__zz_cib_obj) {
      using __zz_cib_deleteProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*);
      return instance().invoke<__zz_cib_deleteProc, __zz_cib_methodid::__zz_cib_delete_1>(
        __zz_cib_obj
        );
    }
  }
  static __zz_cib_HANDLE* __zz_cib_new_2(double left, double bottom, double right, double top) {
    using __zz_cib_newProc = __zz_cib_HANDLE* (__zz_cib_decl *) (double left, double bottom, double right, double top);
    return instance().invoke<__zz_cib_newProc, __zz_cib_methodid::__zz_cib_new_2>(
      left, bottom, right, top);
  }
  static double Area_3(__zz_cib_HANDLE* __zz_cib_obj) {
    using AreaProc = double (__zz_cib_decl *) (__zz_cib_HANDLE*);
    return instance().invoke<AreaProc, __zz_cib_methodid::Area_3>(
      __zz_cib_obj
      );
  }
  static double Perimeter_4(__zz_cib_HANDLE* __zz_cib_obj) {
    using PerimeterProc = double (__zz_cib_decl *) (__zz_cib_HANDLE*);
    return instance().invoke<PerimeterProc, __zz_cib_methodid::Perimeter_4>(
      __zz_cib_obj
      );
  }
  static void Draw_5(__zz_cib_HANDLE* __zz_cib_obj, __zz_cib_HANDLE* ctx) {
    using DrawProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*, __zz_cib_HANDLE* ctx);
    return instance().invoke<DrawProc, __zz_cib_methodid::Draw_5>(
      __zz_cib_obj,
      ctx);
  }
  static __zz_cib_HANDLE* __zz_cib_cast_to___Graphics__Shape_6(__zz_cib_HANDLE* __zz_cib_obj) {
    using __zz_cib_cast_to___Graphics__ShapeProc = __zz_cib_HANDLE* (__zz_cib_decl *) (__zz_cib_HANDLE* h);
    return instance().invoke<__zz_cib_cast_to___Graphics__ShapeProc, __zz_cib_methodid::__zz_cib_cast_to___Graphics__Shape_6>(__zz_cib_obj);
  }
  __zz_cib_Helper()
    : __zz_cib_::__zz_cib_MethodTableHelper(
      __zz_cib_Graphics_GetMethodTable(__zz_cib_classid))
  {}
  static const __zz_cib_Helper& instance() {
    static __zz_cib_Helper helper;
    return helper;
  }

  static ::Graphics::Rectangle* __zz_cib_create_proxy(__zz_cib_HANDLE* h) {
    return new ::Graphics::Rectangle(h);
  }
public:
  static ::Graphics::Rectangle __zz_cib_obj_from_handle(__zz_cib_HANDLE* h) {
    return ::Graphics::Rectangle(h);
  }
  static __zz_cib_HANDLE*& __zz_cib_get_handle(::Graphics::Rectangle* __zz_cib_obj) {
    return __zz_cib_obj->__zz_cib_h_;
  }
  static __zz_cib_HANDLE* __zz_cib_release_handle(::Graphics::Rectangle* __zz_cib_obj) {
    auto h = __zz_cib_obj->__zz_cib_h_;
    __zz_cib_obj->__zz_cib_h_ = nullptr;
    __zz_cib_::Graphics::Shape::__zz_cib_Helper::__zz_cib_release_handle(__zz_cib_obj);
    return h;
  }
};
}}}
