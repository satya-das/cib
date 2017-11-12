#include "__zz_cib_Graphics_ids.h"

#include "cib_GraphicsLib.h"
#include "rect.h"

namespace __zz_cib_ {
	namespace Graphics {
		namespace Rectangle {
			::Graphics::Rectangle* __stdcall __zz_cib_new(float left, float top, float right, float bottom) {
				return new ::Graphics::Rectangle(left, top, right, bottom);
			}

			float __stdcall Area(::Graphics::Rectangle* __zz_cib_obj) {
				return __zz_cib_obj->::Graphics::Rectangle::Area();
			}

			float __stdcall Perimeter(::Graphics::Rectangle* __zz_cib_obj) {
				return __zz_cib_obj->::Graphics::Rectangle::Perimeter();
			}

			void __stdcall Draw(::Graphics::Rectangle* __zz_cib_obj, ::Graphics::Context* ctx) {
				__zz_cib_obj->::Graphics::Rectangle::Draw(ctx);
			}

			::Graphics::Shape* __stdcall __zz_cib_cast_to___Graphics__Shape(::Graphics::Rectangle* __zz_cib_obj) {
				return __zz_cib_obj;
			}
		}
	}
}
namespace __zz_cib_ { namespace Graphics { namespace Rectangle {
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
