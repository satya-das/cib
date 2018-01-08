#include "__zz_cib_PerfTest_ids.h"
#include <typeinfo>
#include <typeindex>
#include <cstdint>
#include <unordered_map>

std::unordered_map<std::type_index, std::uint32_t> __zz_cib_gClassIdRepo;
namespace __zz_cib_ {
	using MethodEntry = void(*)();
	using MethodTable = const MethodEntry*;
}

namespace __zz_cib_ { namespace FuncCallClass { MethodTable GetMethodTable(); }}

namespace __zz_cib_ {
	MethodTable PerfTestLib_GetMethodTable(std::uint32_t classId)
	{
		switch(classId) {
		case __zz_cib_::PerfTestLib::__zz_cib_classid::__FuncCallClass:
			return __zz_cib_::FuncCallClass::GetMethodTable();
		default:
			return nullptr;
		}
	}
}
