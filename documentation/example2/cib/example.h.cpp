#include "example.h"

#include "__zz_cib_Example-decl.h"
#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-mtable.h"
#include "__zz_cib_Example-proxy.h"

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
	static void __zz_cib_decl VirtFunc_5(::Example::A* __zz_cib_obj) {
		__zz_cib_obj->::Example::A::VirtFunc();
	}
	static void __zz_cib_decl SomeFunc_4(::Example::A* __zz_cib_obj) {
		__zz_cib_obj->::Example::A::SomeFunc();
	}
}}}

namespace __zz_cib_ { namespace Example { namespace B {
	static ::Example::B* __zz_cib_decl __zz_cib_new_1() {
		return new ::Example::B();
	}
	static ::Example::B* __zz_cib_decl __zz_cib_new_2(const ::Example::B& __zz_cib_param0) {
		return new ::Example::B(__zz_cib_param0);
	}
	static void __zz_cib_decl __zz_cib_delete_3(::Example::B* __zz_cib_obj) {
		delete __zz_cib_obj;
	}
	static void __zz_cib_decl VirtFunc_4(::Example::B* __zz_cib_obj) {
		__zz_cib_obj->::Example::B::VirtFunc();
	}
	::Example::A* __zz_cib_decl __zz_cib_cast_to___Example__A_5(::Example::B* __zz_cib_obj) {
		return __zz_cib_obj;
	}
}}}

namespace __zz_cib_ { namespace Example { namespace A {
	__zz_cib_MethodTable __zz_cib_GetMethodTable() {
		static const __zz_cib_MethodTableHeader tableHeader = { sizeof(__zz_cib_MethodTableHeader), 5 };
		static const __zz_cib_MethodEntry methodTable[] = {
			reinterpret_cast<__zz_cib_MethodEntry> (&tableHeader),
			reinterpret_cast<__zz_cib_MethodEntry> (&__zz_cib_new_1),
			reinterpret_cast<__zz_cib_MethodEntry> (&__zz_cib_new_2),
			reinterpret_cast<__zz_cib_MethodEntry> (&__zz_cib_delete_3),
			reinterpret_cast<__zz_cib_MethodEntry> (&SomeFunc_4),
			reinterpret_cast<__zz_cib_MethodEntry> (&VirtFunc_5)
		};
		return methodTable;
	}
}}}
namespace __zz_cib_ { namespace Example { namespace B {
	__zz_cib_MethodTable __zz_cib_GetMethodTable() {
		static const __zz_cib_MethodTableHeader tableHeader = { sizeof(__zz_cib_MethodTableHeader), 5 };
		static const __zz_cib_MethodEntry methodTable[] = {
			reinterpret_cast<__zz_cib_MethodEntry> (&tableHeader),
			reinterpret_cast<__zz_cib_MethodEntry> (&__zz_cib_new_1),
			reinterpret_cast<__zz_cib_MethodEntry> (&__zz_cib_new_2),
			reinterpret_cast<__zz_cib_MethodEntry> (&__zz_cib_delete_3),
			reinterpret_cast<__zz_cib_MethodEntry> (&VirtFunc_4),
			reinterpret_cast<__zz_cib_MethodEntry> (&__zz_cib_cast_to___Example__A_5)
		};
		return methodTable;
	}
}}}
