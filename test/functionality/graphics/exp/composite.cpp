#include "composite.h"
#include "shape.h"

namespace __zz_cib_ { namespace Graphics { namespace Composite {
	float __stdcall Area_1(::Graphics::Composite* __zz_cib_obj) {
		return __zz_cib_obj->Area();
	}
	float __stdcall Perimeter_2(::Graphics::Composite* __zz_cib_obj) {
		return __zz_cib_obj->Perimeter();
	}
	void __stdcall Draw_3(::Graphics::Composite* __zz_cib_obj, __zz_cib_::HANDLE* ctx) {
		__zz_cib_obj->Draw(__zz_cib_::Graphics::Context::__zz_cib_Helper::__zz_cib_from_handle(ctx));
	}
}}}

namespace __zz_cib_ { namespace Graphics { namespace Composite {
	using MethodEntry = void(*)();
	using MethodTable = const MethodEntry*;
	static void GetMethodTable(MethodTable* pMethodTable, std::uint32_t* pLen)
	{
		static const MethodEntry methodTable[] = {
			(MethodEntry) nullptr,
			(MethodEntry) &Area_1,
			(MethodEntry) &Perimeter_2,
			(MethodEntry) &Draw_3
		};
		*pMethodTable = methodTable;
		*pLen = 4;
	}
}}}

namespace __zz_cib_ { namespace Graphics { namespace Composite {
	__zz_cib_::MethodTable __zz_cib_Helper::__zz_cib_get_proxy_method_table() {
		MethodTable mtbl;
		std::uint32_t len;
		GetMethodTable(&mtbl, &len);
		return mtbl;
	}
}}}

