#include "__zz_cib_PerfTest_ids.h"

#include "cib_PerfTestLib.h"
#include "FuncCallClass.h"

namespace __zz_cib_ {
	namespace FuncCallClass {
		void __stdcall SimplestFunc_1() {
			::FuncCallClass::SimplestFunc();
		}
		void __stdcall SimplestMethod_2(::FuncCallClass* __zz_cib_obj) {
			__zz_cib_obj->::FuncCallClass::SimplestMethod();
		}
		double __stdcall FuncWith3Param_3(::FuncCallClass* __zz_cib_obj, int x, double b, float c) {
			return __zz_cib_obj->::FuncCallClass::FuncWith3Param(x, b, c);
		}
		::FuncCallClass* __stdcall __zz_cib_new_4() {
			return new ::FuncCallClass();
		}
	}
}
namespace __zz_cib_ { namespace FuncCallClass {
	using MethodEntry = void(*)();
	using MethodTable = const MethodEntry*;
	void GetMethodTable(MethodTable* pMethodTable, std::uint32_t* pLen)
	{
		static const MethodEntry methodTable[] = {
			(MethodEntry) nullptr,
			(MethodEntry) &SimplestFunc_1,
			(MethodEntry) &SimplestMethod_2,
			(MethodEntry) &FuncWith3Param_3,
			(MethodEntry) &__zz_cib_new_4
		};
		*pMethodTable = methodTable;
		*pLen = 5;
	}
}}
