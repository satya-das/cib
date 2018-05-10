#include "log_context.h"

namespace __zz_cib_ { namespace Graphics { namespace LogContext {
	void __zz_cib_decl Line_1(::Graphics::LogContext* __zz_cib_obj, float x1, float y1, float x2, float y2) {
		__zz_cib_obj->Line(x1, y1, x2, y2);
	}
	void __zz_cib_decl Rect_2(::Graphics::LogContext* __zz_cib_obj, float l, float b, float r, float t) {
		__zz_cib_obj->Rect(l, b, r, t);
	}
	void __zz_cib_decl Circle_3(::Graphics::LogContext* __zz_cib_obj, float cx, float cy, float r) {
		__zz_cib_obj->Circle(cx, cy, r);
	}
	void __zz_cib_decl Ellipse_4(::Graphics::LogContext* __zz_cib_obj, float cx, float cy, float a, float b) {
		__zz_cib_obj->Ellipse(cx, cy, a, b);
	}
}}}

namespace __zz_cib_ { namespace Graphics { namespace LogContext {
	using MethodEntry = void(*)();
	using MethodTable = const MethodEntry*;
	static MethodTable GetMethodTable()
	{
		static const MethodTableHeader tableHeader = { sizeof(MethodTableHeader), 4 };
		static const MethodEntry methodTable[] = {
			(MethodEntry) &tableHeader,
			(MethodEntry) &Line_1,
			(MethodEntry) &Rect_2,
			(MethodEntry) &Circle_3,
			(MethodEntry) &Ellipse_4
		};
		return methodTable;
	}
}}}

namespace __zz_cib_ { namespace Graphics { namespace LogContext {
	__zz_cib_::MethodTable __zz_cib_Helper::__zz_cib_get_proxy_method_table() {
		return GetMethodTable();
	}
}}}

