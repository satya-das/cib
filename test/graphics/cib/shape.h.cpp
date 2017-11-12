#include "__zz_cib_Graphics_ids.h"

#include "cib_GraphicsLib.h"
#include "shape.h"

namespace __zz_cib_ {
	namespace Graphics {
		namespace Shape {
			void __stdcall __zz_cib_delete1(::Graphics::Shape* __zz_cib_obj) {
				delete __zz_cib_obj;
			}

		}
	}
}
namespace __zz_cib_ { namespace Graphics { namespace Shape {
	using MethodEntry = void(*)();
	using MethodTable = const MethodEntry*;
	void GetMethodTable(MethodTable* pMethodTable, size_t* pLen)
	{
		static const MethodEntry methodTable[] = {
			(MethodEntry) nullptr,
			(MethodEntry) &__zz_cib_delete1
		};
		*pMethodTable = methodTable;
		*pLen = 2;
	}
}}}
