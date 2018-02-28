#include "context_log.h"

namespace __zz_cib_ { namespace Graphics { namespace LogContext {
	void __zz_cib_decl Move_1(::Graphics::LogContext* __zz_cib_obj, float x, float y) {
		__zz_cib_obj->Move(x, y);
	}
	void __zz_cib_decl Line_2(::Graphics::LogContext* __zz_cib_obj, float x, float y) {
		__zz_cib_obj->Line(x, y);
	}
	void __zz_cib_decl Curve_3(::Graphics::LogContext* __zz_cib_obj, float x1, float y1, float x2, float y2, float x3, float y3) {
		__zz_cib_obj->Curve(x1, y1, x2, y2, x3, y3);
	}
	void __zz_cib_decl Close_4(::Graphics::LogContext* __zz_cib_obj) {
		__zz_cib_obj->Close();
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
			(MethodEntry) &Move_1,
			(MethodEntry) &Line_2,
			(MethodEntry) &Curve_3,
			(MethodEntry) &Close_4
		};
		return methodTable;
	}
}}}

namespace __zz_cib_ { namespace Graphics { namespace LogContext {
	__zz_cib_::MethodTable __zz_cib_Helper::__zz_cib_get_proxy_method_table() {
		return GetMethodTable();
	}
}}}

