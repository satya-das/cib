#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example.h"
#include "example1.h"

namespace __zz_cib_ { namespace Example { namespace A {
	static ::Example::A* __zz_cib_decl __zz_cib_new_1() {
		return new ::Example::A();
	}
	static ::Example::A* __zz_cib_decl __zz_cib_new_2(const ::Example::A& __zz_cib_param0) {
		return new ::Example::A(__zz_cib_param0);
	}
	static void __zz_cib_decl __zz_cib_delete_3(::Example::A* __zz_cib_obj) {
		delete __zz_cib_obj;
	}
	static void __zz_cib_decl SomeFunc_4(::Example::A* __zz_cib_obj) {
		__zz_cib_obj->::Example::A::SomeFunc();
	}
}}}

namespace __zz_cib_ { namespace Example { namespace A {
	__zz_cib_MethodTable __zz_cib_GetMethodTable() {
		static const __zz_cib_MethodTableHeader tableHeader = { sizeof(__zz_cib_MethodTableHeader), 4 };
		static const __zz_cib_MethodEntry methodTable[] = {
			reinterpret_cast<__zz_cib_MethodEntry> (&tableHeader),
			reinterpret_cast<__zz_cib_MethodEntry> (&__zz_cib_new_1),
			reinterpret_cast<__zz_cib_MethodEntry> (&__zz_cib_new_2),
			reinterpret_cast<__zz_cib_MethodEntry> (&__zz_cib_delete_3),
			reinterpret_cast<__zz_cib_MethodEntry> (&SomeFunc_4)
		};
		return methodTable;
	}
}}}
