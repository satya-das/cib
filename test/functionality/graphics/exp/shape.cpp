#include "circ.h"
#include "composite.h"
#include "rect.h"
#include "shape.h"

::Graphics::Shape* __zz_cib_::Graphics::Shape::__zz_cib_Helper::__zz_cib_from_handle(__zz_cib_::HANDLE* h) {
	switch(__zz_cib_get_class_id(h)) {
	case __zz_cib_::GraphicsLib::__zz_cib_classid::__Graphics__Circle:
		return __zz_cib_::Graphics::Circle::__zz_cib_Helper::__zz_cib_from_handle(h);
	case __zz_cib_::GraphicsLib::__zz_cib_classid::__Graphics__Composite:
		return __zz_cib_::Graphics::Composite::__zz_cib_Helper::__zz_cib_from_handle(h);
	case __zz_cib_::GraphicsLib::__zz_cib_classid::__Graphics__Rectangle:
		return __zz_cib_::Graphics::Rectangle::__zz_cib_Helper::__zz_cib_from_handle(h);
	}
	return nullptr;
}
namespace __zz_cib_ { namespace Graphics { namespace Shape {
	float __zz_cib_decl Area_1(::Graphics::Shape* __zz_cib_obj) {
		return __zz_cib_obj->Area();
	}
	float __zz_cib_decl Perimeter_2(::Graphics::Shape* __zz_cib_obj) {
		return __zz_cib_obj->Perimeter();
	}
	void __zz_cib_decl Draw_3(::Graphics::Shape* __zz_cib_obj, __zz_cib_::HANDLE* ctx) {
		__zz_cib_obj->Draw(__zz_cib_::Graphics::Context::__zz_cib_Helper::__zz_cib_from_handle(ctx));
	}
	void __zz_cib_decl __zz_cib_delete_4(::Graphics::Shape* __zz_cib_obj) {
		delete __zz_cib_obj;
	}
}}}

namespace __zz_cib_ { namespace Graphics { namespace Shape {
	using MethodEntry = void(*)();
	using MethodTable = const MethodEntry*;
	static MethodTable GetMethodTable()
	{
		static const MethodTableHeader tableHeader = { sizeof(MethodTableHeader), 4 };
		static const MethodEntry methodTable[] = {
			(MethodEntry) &tableHeader,
			(MethodEntry) &Area_1,
			(MethodEntry) &Perimeter_2,
			(MethodEntry) &Draw_3,
			(MethodEntry) &__zz_cib_delete_4
		};
		return methodTable;
	}
}}}

namespace __zz_cib_ { namespace Graphics { namespace Shape {
	__zz_cib_::MethodTable __zz_cib_Helper::__zz_cib_get_proxy_method_table() {
		return GetMethodTable();
	}
}}}

