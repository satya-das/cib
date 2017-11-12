#include "__zz_cib_Graphics_ids.h"

#include "cib_GraphicsLib.h"
#include "circ.h"

namespace __zz_cib_ {
	namespace Graphics {
		namespace Circle {
			::Graphics::Circle* __stdcall __zz_cib_new(float Ox, float Oy, float radius) {
				return new ::Graphics::Circle(Ox, Oy, radius);
			}

			float __stdcall Area(::Graphics::Circle* __zz_cib_obj) {
				return __zz_cib_obj->::Graphics::Circle::Area();
			}

			float __stdcall Perimeter(::Graphics::Circle* __zz_cib_obj) {
				return __zz_cib_obj->::Graphics::Circle::Perimeter();
			}

			void __stdcall Draw(::Graphics::Circle* __zz_cib_obj, ::Graphics::Context* ctx) {
				__zz_cib_obj->::Graphics::Circle::Draw(ctx);
			}

			::Graphics::Shape* __stdcall __zz_cib_cast_to___Graphics__Shape(::Graphics::Circle* __zz_cib_obj) {
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
			(MethodEntry) &__zz_cib_new,
			(MethodEntry) &Area,
			(MethodEntry) &Perimeter,
			(MethodEntry) &Draw,
			(MethodEntry) &__zz_cib_cast_to___Graphics__Shape
		};
		*pMethodTable = methodTable;
		*pLen = 6;
	}
}}}
