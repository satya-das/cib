#include "context.h"
#include "log_context.h"

::Graphics::Context* __zz_cib_::Graphics::Context::__zz_cib_Helper::__zz_cib_from_handle(__zz_cib_::__zz_cib_HANDLE* h) {
	switch(__zz_cib_get_class_id(h)) {
	case __zz_cib_::Graphics::__zz_cib_classid::__Graphics__LogContext:
		return __zz_cib_::Graphics::LogContext::__zz_cib_Helper::__zz_cib_from_handle(h);
	}
	return nullptr;
}
namespace __zz_cib_ { namespace Graphics { namespace Context {
	void __zz_cib_decl Line_1(::Graphics::Context* __zz_cib_obj, float x1, float y1, float x2, float y2) {
		__zz_cib_obj->Line(x1, y1, x2, y2);
	}
	void __zz_cib_decl Rect_2(::Graphics::Context* __zz_cib_obj, float l, float b, float r, float t) {
		__zz_cib_obj->Rect(l, b, r, t);
	}
	void __zz_cib_decl Circle_3(::Graphics::Context* __zz_cib_obj, float cx, float cy, float r) {
		__zz_cib_obj->Circle(cx, cy, r);
	}
	void __zz_cib_decl Ellipse_4(::Graphics::Context* __zz_cib_obj, float cx, float cy, float a, float b) {
		__zz_cib_obj->Ellipse(cx, cy, a, b);
	}
	void __zz_cib_decl __zz_cib_delete_5(::Graphics::Context* __zz_cib_obj) {
		delete __zz_cib_obj;
	}
}}}

namespace __zz_cib_ { namespace Graphics { namespace Context {
	using __zz_cib_MethodEntry = void(*)();
	using __zz_cib_MethodTable = const __zz_cib_MethodEntry*;
	static __zz_cib_MethodTable __zz_cib_GetMethodTable()
	{
		static const __zz_cib_MethodTableHeader tableHeader = { sizeof(__zz_cib_MethodTableHeader), 5 };
		static const __zz_cib_MethodEntry methodTable[] = {
			(__zz_cib_MethodEntry) &tableHeader,
			(__zz_cib_MethodEntry) &Line_1,
			(__zz_cib_MethodEntry) &Rect_2,
			(__zz_cib_MethodEntry) &Circle_3,
			(__zz_cib_MethodEntry) &Ellipse_4,
			(__zz_cib_MethodEntry) &__zz_cib_delete_5
		};
		return methodTable;
	}
}}}

namespace __zz_cib_ { namespace Graphics { namespace Context {
	__zz_cib_::__zz_cib_MethodTable __zz_cib_Helper::__zz_cib_get_proxy_method_table() {
		return __zz_cib_GetMethodTable();
	}
}}}

