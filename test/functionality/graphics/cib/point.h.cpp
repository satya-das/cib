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
		const ::Point* __zz_cib_decl __zz_cib_OperatorPlus_6(const ::Point* __zz_cib_obj, const ::Point& p) {
			return new ::Point(__zz_cib_obj->::Point::operator +(p));
		}
		const ::Point* __zz_cib_decl __zz_cib_OperatorMinus_7(const ::Point* __zz_cib_obj, const ::Point* p) {
			return new ::Point(__zz_cib_obj->::Point::operator -(*p));
		}
	}
}
namespace __zz_cib_ { namespace Point {
	using __zz_cib_MethodEntry = void(*)();
	using __zz_cib_MethodTable = const __zz_cib_MethodEntry*;
	__zz_cib_MethodTable __zz_cib_GetMethodTable()
	{
		static const __zz_cib_MethodTableHeader tableHeader = { sizeof(__zz_cib_MethodTableHeader), 7 };
		static const __zz_cib_MethodEntry methodTable[] = {
			(__zz_cib_MethodEntry) &tableHeader,
			(__zz_cib_MethodEntry) &__zz_cib_new_1,
			(__zz_cib_MethodEntry) &X_2,
			(__zz_cib_MethodEntry) &X_3,
			(__zz_cib_MethodEntry) &Y_4,
			(__zz_cib_MethodEntry) &Y_5,
			(__zz_cib_MethodEntry) &__zz_cib_OperatorPlus_6,
			(__zz_cib_MethodEntry) &__zz_cib_OperatorMinus_7
		};
		return methodTable;
	}
}}
