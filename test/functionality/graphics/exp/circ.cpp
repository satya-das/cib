#include "circ.h"
#include "shape.h"

namespace __zz_cib_ { namespace Graphics { namespace Circle {
	static float __zz_cib_decl Area_1(const ::Graphics::Circle* __zz_cib_obj) {
		return __zz_cib_obj->Area();
	}
	static float __zz_cib_decl Perimeter_2(const ::Graphics::Circle* __zz_cib_obj) {
		return __zz_cib_obj->Perimeter();
	}
	static void __zz_cib_decl Draw_3(const ::Graphics::Circle* __zz_cib_obj, __zz_cib_HANDLE* ctx) {
		__zz_cib_obj->Draw(__zz_cib_::Graphics::Context::__zz_cib_Helper::__zz_cib_from_handle(ctx));
	}
	static void __zz_cib_decl __zz_cib_delete_4(::Graphics::Circle* __zz_cib_obj) {
		delete __zz_cib_obj;
	}
}}}

namespace __zz_cib_ { namespace Graphics { namespace Circle {
	static __zz_cib_MethodTable __zz_cib_GetMethodTable() {
		static const __zz_cib_MethodTableHeader tableHeader = { sizeof(__zz_cib_MethodTableHeader), 4 };
		static const __zz_cib_MethodEntry methodTable[] = {
			reinterpret_cast<__zz_cib_MethodEntry> (&tableHeader),
			reinterpret_cast<__zz_cib_MethodEntry> (&Area_1),
			reinterpret_cast<__zz_cib_MethodEntry> (&Perimeter_2),
			reinterpret_cast<__zz_cib_MethodEntry> (&Draw_3),
			reinterpret_cast<__zz_cib_MethodEntry> (&__zz_cib_delete_4)
		};
		return methodTable;
	}
}}}

namespace __zz_cib_ { namespace Graphics { namespace Circle {
	__zz_cib_MethodTable __zz_cib_Helper::__zz_cib_get_proxy_method_table() {
		return __zz_cib_GetMethodTable();
	}
}}}

