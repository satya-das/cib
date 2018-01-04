#include "context_log.h"

namespace __zz_cib_ { namespace Graphics { namespace ContextLogger {
	void __stdcall Move_1(::Graphics::ContextLogger* __zz_cib_obj, float x, float y) {
		__zz_cib_obj->Move(x, y);
	}
	void __stdcall Line_2(::Graphics::ContextLogger* __zz_cib_obj, float x, float y) {
		__zz_cib_obj->Line(x, y);
	}
	void __stdcall Curve_3(::Graphics::ContextLogger* __zz_cib_obj, float x1, float y1, float x2, float y2, float x3, float y3) {
		__zz_cib_obj->Curve(x1, y1, x2, y2, x3, y3);
	}
	void __stdcall Close_4(::Graphics::ContextLogger* __zz_cib_obj) {
		__zz_cib_obj->Close();
	}
}}}

namespace __zz_cib_ { namespace Graphics { namespace ContextLogger {
	using MethodEntry = void(*)();
	using MethodTable = const MethodEntry*;
	static void GetMethodTable(MethodTable* pMethodTable, std::uint32_t* pLen)
	{
		static const MethodEntry methodTable[] = {
			(MethodEntry) nullptr,
			(MethodEntry) &Move_1,
			(MethodEntry) &Line_2,
			(MethodEntry) &Curve_3,
			(MethodEntry) &Close_4
		};
		*pMethodTable = methodTable;
		*pLen = 5;
	}
}}}

namespace __zz_cib_ { namespace Graphics { namespace ContextLogger {
	__zz_cib_::MethodTable __zz_cib_Helper::__zz_cib_get_proxy_method_table() {
		MethodTable mtbl;
		std::uint32_t len;
		GetMethodTable(&mtbl, &len);
		return mtbl;
	}
}}}

