#include "__zz_cib_PerfTest_ids.h"

#include "cib_PerfTestLib.h"
#include "FuncCallClass.h"

namespace __zz_cib_ {
	namespace FuncCallClass {
		void __zz_cib_decl SimplestFunc_1() {
			::FuncCallClass::SimplestFunc();
		}
		void __zz_cib_decl SimplestMethod_2(::FuncCallClass* __zz_cib_obj) {
			__zz_cib_obj->::FuncCallClass::SimplestMethod();
		}
		double __zz_cib_decl FuncWith3Param_3(::FuncCallClass* __zz_cib_obj, int x, double b, float c) {
			return __zz_cib_obj->::FuncCallClass::FuncWith3Param(x, b, c);
		}
		::FuncCallClass* __zz_cib_decl __zz_cib_new_4() {
			return new ::FuncCallClass();
		}
	}
}
namespace __zz_cib_ { namespace FuncCallClass {
	using MethodEntry = void(*)();
	using MethodTable = const MethodEntry*;
	MethodTable GetMethodTable()
	{
		static const MethodTableHeader tableHeader = { sizeof(MethodTableHeader), 4 };
		static const MethodEntry methodTable[] = {
			(MethodEntry) &tableHeader,
			(MethodEntry) &SimplestFunc_1,
			(MethodEntry) &SimplestMethod_2,
			(MethodEntry) &FuncWith3Param_3,
			(MethodEntry) &__zz_cib_new_4
		};
		return methodTable;
	}
}}
