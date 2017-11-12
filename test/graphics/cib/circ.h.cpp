#include "__zz_cib_Graphics_ids.h"

#include "cib_GraphicsLib.h"
#include "circ.h"

namespace __zz_cib_ {
	namespace Graphics {
		namespace Circle {
			::Graphics::Circle* __stdcall __zz_cib_new1(float Ox, float Oy, float radius) {
				return new ::Graphics::Circle(Ox, Oy, radius);
			}

			float __stdcall Area2(::Graphics::Circle* __zz_cib_obj) {
				return __zz_cib_obj->::Graphics::Circle::Area();
			}

			float __stdcall Perimeter3(::Graphics::Circle* __zz_cib_obj) {
				return __zz_cib_obj->::Graphics::Circle::Perimeter();
			}

			void __stdcall Draw4(::Graphics::Circle* __zz_cib_obj, ::Graphics::Context* ctx) {
				__zz_cib_obj->::Graphics::Circle::Draw(ctx);
			}

			::Graphics::Shape* __stdcall __zz_cib_cast_to___Graphics__Shape5(::Graphics::Circle* __zz_cib_obj) {
				return __zz_cib_obj;
			}
		}
	}
}
namespace __zz_cib_ { namespace Graphics { namespace Circle {
	using MethodEntry = void(*)();
	using MethodTable = const MethodEntry*;
	void GetMethodTable(MethodTable* pMethodTable, size_t* pLen)
	{
		static const MethodEntry methodTable[] = {
			(MethodEntry) nullptr,
			(MethodEntry) &__zz_cib_new1,
			(MethodEntry) &Area2,
			(MethodEntry) &Perimeter3,
			(MethodEntry) &Draw4,
			(MethodEntry) &__zz_cib_cast_to___Graphics__Shape5
		};
		*pMethodTable = methodTable;
		*pLen = 6;
	}
}}}
