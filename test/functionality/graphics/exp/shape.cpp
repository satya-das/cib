#include "circ.h"
#include "composite.h"
#include "ellipse.h"
#include "rect.h"
#include "shape.h"

::Graphics::Shape* __zz_cib_::Graphics::Shape::__zz_cib_Helper::__zz_cib_from_handle(__zz_cib_HANDLE* h) {
	switch(__zz_cib_get_class_id(h)) {
	case __zz_cib_::__zz_cib_classid::__Graphics__Circle:
		return __zz_cib_::Graphics::Circle::__zz_cib_Helper::__zz_cib_from_handle(h);
	case __zz_cib_::__zz_cib_classid::__Graphics__Composite:
		return __zz_cib_::Graphics::Composite::__zz_cib_Helper::__zz_cib_from_handle(h);
	case __zz_cib_::__zz_cib_classid::__Graphics__Ellipse:
		return __zz_cib_::Graphics::Ellipse::__zz_cib_Helper::__zz_cib_from_handle(h);
	case __zz_cib_::__zz_cib_classid::__Graphics__Rectangle:
		return __zz_cib_::Graphics::Rectangle::__zz_cib_Helper::__zz_cib_from_handle(h);
	}
	return nullptr;
}
namespace __zz_cib_ { namespace Graphics { namespace Shape {
	static float __zz_cib_decl Area_1(const ::Graphics::Shape* __zz_cib_obj) {
		return __zz_cib_obj->Area();
	}
	static float __zz_cib_decl Perimeter_2(const ::Graphics::Shape* __zz_cib_obj) {
		return __zz_cib_obj->Perimeter();
	}
	static void __zz_cib_decl Draw_3(const ::Graphics::Shape* __zz_cib_obj, __zz_cib_HANDLE* ctx) {
		__zz_cib_obj->Draw(__zz_cib_::Graphics::Context::__zz_cib_Helper::__zz_cib_from_handle(ctx));
	}
	static void __zz_cib_decl __zz_cib_delete_4(::Graphics::Shape* __zz_cib_obj) {
		delete __zz_cib_obj;
	}
}}}

namespace __zz_cib_ { namespace Graphics { namespace Shape {
	static __zz_cib_MethodTable __zz_cib_GetMethodTable() {
		static const __zz_cib_MethodTableHeader tableHeader = { sizeof(__zz_cib_MethodTableHeader), 4 };
		static const __zz_cib_MethodEntry methodTable[] = {
			reinterpret_cast<__zz_cib_MethodEntry> (&tableHeader),
			reinterpret_cast<__zz_cib_MethodEntry> (&Area_1),
			reinterpret_cast<__zz_cib_MethodEntry> (&Perimeter_2),
			reinterpret_cast<__zz_cib_MethodEntry> (&Draw_3),
			reinterpret_cast<__zz_cib_MethodEntry> (&__zz_cib_delete_4)
		};
		return methodTable;
	}
}}}

namespace __zz_cib_ { namespace Graphics { namespace Shape {
	__zz_cib_MethodTable __zz_cib_Helper::__zz_cib_get_proxy_method_table() {
		return __zz_cib_GetMethodTable();
	}
}}}

