#include "__zz_cib_Example.h"
#include "__zz_cib_Example-ids.h"

namespace __zz_cib_ { namespace Example { namespace A { __zz_cib_MethodTable __zz_cib_GetMethodTable(); }}}

extern "C" __zz_cib_export __zz_cib_::__zz_cib_MethodTable __zz_cib_Example_GetMethodTable(std::uint32_t classId)
{
	switch(classId) {
	case __zz_cib_::__zz_cib_classid::__Example__A:
		return __zz_cib_::Example::A::__zz_cib_GetMethodTable();
	default:
		return nullptr;
	}
}
