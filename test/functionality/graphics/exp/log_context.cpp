#include "log_context.h"

namespace __zz_cib_ { namespace Graphics { namespace LogContext {
	static void __zz_cib_decl Line_1(::Graphics::LogContext* __zz_cib_obj, float x1, float y1, float x2, float y2) {
		__zz_cib_obj->Line(x1, y1, x2, y2);
	}
	static void __zz_cib_decl Rect_2(::Graphics::LogContext* __zz_cib_obj, float l, float b, float r, float t) {
		__zz_cib_obj->Rect(l, b, r, t);
	}
	static void __zz_cib_decl Circle_3(::Graphics::LogContext* __zz_cib_obj, float cx, float cy, float r) {
		__zz_cib_obj->Circle(cx, cy, r);
	}
	static void __zz_cib_decl Ellipse_4(::Graphics::LogContext* __zz_cib_obj, float cx, float cy, float a, float b) {
		__zz_cib_obj->Ellipse(cx, cy, a, b);
	}
	static void __zz_cib_decl __zz_cib_delete_5(::Graphics::LogContext* __zz_cib_obj) {
		delete __zz_cib_obj;
	}
}}}

namespace __zz_cib_ { namespace Graphics { namespace LogContext {
	static __zz_cib_MethodTable __zz_cib_GetMethodTable() {
		static const __zz_cib_MethodTableHeader tableHeader = { sizeof(__zz_cib_MethodTableHeader), 5 };
		static const __zz_cib_MethodEntry methodTable[] = {
			reinterpret_cast<__zz_cib_MethodEntry> (&tableHeader),
			reinterpret_cast<__zz_cib_MethodEntry> (&Line_1),
			reinterpret_cast<__zz_cib_MethodEntry> (&Rect_2),
			reinterpret_cast<__zz_cib_MethodEntry> (&Circle_3),
			reinterpret_cast<__zz_cib_MethodEntry> (&Ellipse_4),
			reinterpret_cast<__zz_cib_MethodEntry> (&__zz_cib_delete_5)
		};
		return methodTable;
	}
}}}

namespace __zz_cib_ { namespace Graphics { namespace LogContext {
	__zz_cib_MethodTable __zz_cib_Helper::__zz_cib_get_proxy_method_table() {
		return __zz_cib_GetMethodTable();
	}
}}}

