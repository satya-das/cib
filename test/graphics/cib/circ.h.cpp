#include "__zz_cib_Graphics_ids.h"

#include "cib_GraphicsLib.h"
#include "circ.h"

namespace __zz_cib_ {
	namespace Graphics {
		namespace Circle {
			::Graphics::Circle* __stdcall __zz_cib_new_1(float Ox, float Oy, float radius) {
				return new ::Graphics::Circle(Ox, Oy, radius);
			}

			float __stdcall Area_2(::Graphics::Circle* __zz_cib_obj) {
				return __zz_cib_obj->::Graphics::Circle::Area();
			}

			float __stdcall Perimeter_3(::Graphics::Circle* __zz_cib_obj) {
				return __zz_cib_obj->::Graphics::Circle::Perimeter();
			}

			void __stdcall Draw_4(::Graphics::Circle* __zz_cib_obj, ::Graphics::Context* ctx) {
				__zz_cib_obj->::Graphics::Circle::Draw(ctx);
			}

			::Graphics::Shape* __stdcall __zz_cib_cast_to___Graphics__Shape_5(::Graphics::Circle* __zz_cib_obj) {
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
			(MethodEntry) &__zz_cib_new_1,
			(MethodEntry) &Area_2,
			(MethodEntry) &Perimeter_3,
			(MethodEntry) &Draw_4,
			(MethodEntry) &__zz_cib_cast_to___Graphics__Shape_5
		};
		*pMethodTable = methodTable;
		*pLen = 6;
	}
}}}
