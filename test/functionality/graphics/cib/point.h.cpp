#include "__zz_cib_Graphics_ids.h"

#include "cib_GraphicsLib.h"
#include "point.h"

namespace __zz_cib_ {
	namespace Point {
		::Point* __zz_cib_decl __zz_cib_new_1(float x, float y) {
			return new ::Point(x, y);
		}
		float __zz_cib_decl X_2(const ::Point* __zz_cib_obj) {
			return __zz_cib_obj->::Point::X();
		}
		void __zz_cib_decl X_3(::Point* __zz_cib_obj, float x) {
			__zz_cib_obj->::Point::X(x);
		}
		float __zz_cib_decl Y_4(const ::Point* __zz_cib_obj) {
			return __zz_cib_obj->::Point::Y();
		}
		void __zz_cib_decl Y_5(::Point* __zz_cib_obj, float y) {
			__zz_cib_obj->::Point::Y(y);
		}
		const ::Point* __zz_cib_decl operatorPlus_6(const ::Point* __zz_cib_obj, const ::Point& p) {
			return new ::Point(__zz_cib_obj->::Point::operator +(p));
		}
		const ::Point* __zz_cib_decl operatorMinus_7(const ::Point* __zz_cib_obj, const ::Point* p) {
			return new ::Point(__zz_cib_obj->::Point::operator -(*p));
		}
	}
}
namespace __zz_cib_ { namespace Point {
	using MethodEntry = void(*)();
	using MethodTable = const MethodEntry*;
	MethodTable GetMethodTable()
	{
		static const MethodTableHeader tableHeader = { sizeof(MethodTableHeader), 7 };
		static const MethodEntry methodTable[] = {
			(MethodEntry) &tableHeader,
			(MethodEntry) &__zz_cib_new_1,
			(MethodEntry) &X_2,
			(MethodEntry) &X_3,
			(MethodEntry) &Y_4,
			(MethodEntry) &Y_5,
			(MethodEntry) &operatorPlus_6,
			(MethodEntry) &operatorMinus_7
		};
		return methodTable;
	}
}}
