#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example.h"
#include "example1.h"

namespace __zz_cib_ { namespace Example { namespace A {
	static void __zz_cib_decl SomeFunc_1(::Example::A* __zz_cib_obj) {
		__zz_cib_obj->::Example::A::SomeFunc();
	}
	static ::Example::A* __zz_cib_decl __zz_cib_new_2() {
		return new ::Example::A();
	}
	static void __zz_cib_decl __zz_cib_delete_3(::Example::A* __zz_cib_obj) {
		delete __zz_cib_obj;
	}
}}}

namespace __zz_cib_ { namespace Example { namespace A {
	__zz_cib_MethodTable __zz_cib_GetMethodTable() {
		static const __zz_cib_MethodTableHeader tableHeader = { sizeof(__zz_cib_MethodTableHeader), 3 };
		static const __zz_cib_MethodEntry methodTable[] = {
			reinterpret_cast<__zz_cib_MethodEntry> (&tableHeader),
			reinterpret_cast<__zz_cib_MethodEntry> (&SomeFunc_1),
			reinterpret_cast<__zz_cib_MethodEntry> (&__zz_cib_new_2),
			reinterpret_cast<__zz_cib_MethodEntry> (&__zz_cib_delete_3)
		};
		return methodTable;
	}
}}}
