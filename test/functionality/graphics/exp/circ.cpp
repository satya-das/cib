#include "circ.h"
#include "shape.h"

namespace __zz_cib_ { namespace Graphics { namespace Circle {
	float __zz_cib_decl Area_1(const ::Graphics::Circle* __zz_cib_obj) {
		return __zz_cib_obj->Area();
	}
	float __zz_cib_decl Perimeter_2(const ::Graphics::Circle* __zz_cib_obj) {
		return __zz_cib_obj->Perimeter();
	}
	void __zz_cib_decl Draw_3(const ::Graphics::Circle* __zz_cib_obj, __zz_cib_::HANDLE* ctx) {
		__zz_cib_obj->Draw(__zz_cib_::Graphics::Context::__zz_cib_Helper::__zz_cib_from_handle(ctx));
	}
}}}

namespace __zz_cib_ { namespace Graphics { namespace Circle {
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

namespace __zz_cib_ { namespace Graphics { namespace Circle {
	__zz_cib_::MethodTable __zz_cib_Helper::__zz_cib_get_proxy_method_table() {
		return GetMethodTable();
	}
}}}

