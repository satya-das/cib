#include "__zz_cib_Graphics_ids.h"

#include "cib_GraphicsLib.h"
#include "context.h"

namespace __zz_cib_ {
	namespace Graphics {
		namespace Context {
			void __stdcall __zz_cib_delete(::Graphics::Context* __zz_cib_obj) {
				delete __zz_cib_obj;
			}

		}
	}
}
namespace __zz_cib_ { namespace Graphics { namespace Context {
	using MethodEntry = void(*)();
	using MethodTable = const MethodEntry*;
	void GetMethodTable(MethodTable* pMethodTable, size_t* pLen)
	{
		static const MethodEntry methodTable[] = {
			(MethodEntry) nullptr,
			(MethodEntry) &__zz_cib_delete
		};
		*pMethodTable = methodTable;
		*pLen = 2;
	}
}}}
