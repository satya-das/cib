#include "context.h"
#include "context_log.h"

::Graphics::Context* __zz_cib_::Graphics::Context::__zz_cib_Helper::__zz_cib_from_handle(__zz_cib_::HANDLE* h) {
	switch(__zz_cib_get_class_id(h)) {
	case __zz_cib_::GraphicsLib::__zz_cib_classid::__Graphics__LogContext:
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
	void __zz_cib_decl __zz_cib_delete_4(::Graphics::Context* __zz_cib_obj) {
		delete __zz_cib_obj;
	}
}}}

namespace __zz_cib_ { namespace Graphics { namespace Context {
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
			(MethodEntry) &__zz_cib_delete_4
		};
		return methodTable;
	}
}}}

namespace __zz_cib_ { namespace Graphics { namespace Context {
	__zz_cib_::MethodTable __zz_cib_Helper::__zz_cib_get_proxy_method_table() {
		return GetMethodTable();
	}
}}}

