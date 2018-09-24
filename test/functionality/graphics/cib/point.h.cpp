#include "__zz_cib_Graphics-ids.h"
#include "__zz_cib_Graphics.h"
#include "point.h"

namespace __zz_cib_ { namespace Point {
	static ::Point* __zz_cib_decl __zz_cib_new_1(const ::Point& __zz_cib_param0) {
		return new ::Point(__zz_cib_param0);
	}
	static void __zz_cib_decl __zz_cib_delete_2(::Point* __zz_cib_obj) {
		delete __zz_cib_obj;
	}
	static ::Point* __zz_cib_decl __zz_cib_new_3(float x, float y) {
		return new ::Point(x, y);
	}
	static float __zz_cib_decl X_4(const ::Point* __zz_cib_obj) {
		return __zz_cib_obj->::Point::X();
	}
	static void __zz_cib_decl X_5(::Point* __zz_cib_obj, float x) {
		__zz_cib_obj->::Point::X(x);
	}
	static float __zz_cib_decl Y_6(const ::Point* __zz_cib_obj) {
		return __zz_cib_obj->::Point::Y();
	}
	static void __zz_cib_decl Y_7(::Point* __zz_cib_obj, float y) {
		__zz_cib_obj->::Point::Y(y);
	}
	static const ::Point* __zz_cib_decl __zz_cib_OperatorPlus_8(const ::Point* __zz_cib_obj, const ::Point& p) {
		return new ::Point(__zz_cib_obj->::Point::operator +(p));
	}
	static const ::Point* __zz_cib_decl __zz_cib_OperatorMinus_9(const ::Point* __zz_cib_obj, const ::Point* p) {
		return new ::Point(__zz_cib_obj->::Point::operator -(*p));
	}
}}

namespace __zz_cib_ { namespace Point {
	__zz_cib_MethodTable __zz_cib_GetMethodTable() {
		static const __zz_cib_MethodTableHeader tableHeader = { sizeof(__zz_cib_MethodTableHeader), 9 };
		static const __zz_cib_MethodEntry methodTable[] = {
			reinterpret_cast<__zz_cib_MethodEntry> (&tableHeader),
			reinterpret_cast<__zz_cib_MethodEntry> (&__zz_cib_new_1),
			reinterpret_cast<__zz_cib_MethodEntry> (&__zz_cib_delete_2),
			reinterpret_cast<__zz_cib_MethodEntry> (&__zz_cib_new_3),
			reinterpret_cast<__zz_cib_MethodEntry> (&X_4),
			reinterpret_cast<__zz_cib_MethodEntry> (&X_5),
			reinterpret_cast<__zz_cib_MethodEntry> (&Y_6),
			reinterpret_cast<__zz_cib_MethodEntry> (&Y_7),
			reinterpret_cast<__zz_cib_MethodEntry> (&__zz_cib_OperatorPlus_8),
			reinterpret_cast<__zz_cib_MethodEntry> (&__zz_cib_OperatorMinus_9)
		};
		return methodTable;
	}
}}
