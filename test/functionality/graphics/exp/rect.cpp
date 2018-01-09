#include "rect.h"

namespace __zz_cib_ { namespace Graphics { namespace Rectangle {
	float __stdcall Area_1(::Graphics::Rectangle* __zz_cib_obj) {
		return __zz_cib_obj->Area();
	}
	float __stdcall Perimeter_2(::Graphics::Rectangle* __zz_cib_obj) {
		return __zz_cib_obj->Perimeter();
	}
	void __stdcall Draw_3(::Graphics::Rectangle* __zz_cib_obj, __zz_cib_::HANDLE* ctx) {
		__zz_cib_obj->Draw(__zz_cib_::Graphics::Context::__zz_cib_Helper::__zz_cib_from_handle(ctx));
	}
}}}

namespace __zz_cib_ { namespace Graphics { namespace Rectangle {
	using MethodEntry = void(*)();
	using MethodTable = const MethodEntry*;
	static MethodTable GetMethodTable()
	{
		static const MethodTableHeader tableHeader = { sizeof(MethodTableHeader), 3 };
		static const MethodEntry methodTable[] = {
			(MethodEntry) &tableHeader,
			(MethodEntry) &Area_1,
			(MethodEntry) &Perimeter_2,
			(MethodEntry) &Draw_3
		};
		return methodTable;
	}
}}}

namespace __zz_cib_ { namespace Graphics { namespace Rectangle {
	__zz_cib_::MethodTable __zz_cib_Helper::__zz_cib_get_proxy_method_table() {
		return GetMethodTable();
	}
}}}

