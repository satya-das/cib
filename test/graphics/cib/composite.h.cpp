#include "__zz_cib_Graphics_ids.h"

#include "cib_GraphicsLib.h"
#include "composite.h"

namespace __zz_cib_ {
	namespace Graphics {
		namespace Composite {
			::Graphics::Composite* __stdcall __zz_cib_new_1() {
				return new ::Graphics::Composite();
			}

			void __stdcall Add_2(::Graphics::Composite* __zz_cib_obj, ::Graphics::Shape* shape) {
				__zz_cib_obj->::Graphics::Composite::Add(shape);
			}

			size_t __stdcall NumShapes_3(::Graphics::Composite* __zz_cib_obj) {
				return __zz_cib_obj->::Graphics::Composite::NumShapes();
			}

			::Graphics::Shape* __stdcall ShapeAt_4(::Graphics::Composite* __zz_cib_obj, size_t idxShape) {
				return __zz_cib_obj->::Graphics::Composite::ShapeAt(idxShape);
			}

			float __stdcall Area_5(::Graphics::Composite* __zz_cib_obj) {
				return __zz_cib_obj->::Graphics::Composite::Area();
			}

			float __stdcall Perimeter_6(::Graphics::Composite* __zz_cib_obj) {
				return __zz_cib_obj->::Graphics::Composite::Perimeter();
			}

			void __stdcall Draw_7(::Graphics::Composite* __zz_cib_obj, ::Graphics::Context* ctx) {
				__zz_cib_obj->::Graphics::Composite::Draw(ctx);
			}

			::Graphics::Composite* __stdcall CreateCompositeOfRectAndCircle_8() {
				return ::Graphics::Composite::CreateCompositeOfRectAndCircle();
			}

			::Graphics::Shape* __stdcall __zz_cib_cast_to___Graphics__Shape_9(::Graphics::Composite* __zz_cib_obj) {
				return __zz_cib_obj;
			}
		}
	}
}
namespace __zz_cib_ { namespace Graphics { namespace Composite {
	using MethodEntry = void(*)();
	using MethodTable = const MethodEntry*;
	void GetMethodTable(MethodTable* pMethodTable, size_t* pLen)
	{
		static const MethodEntry methodTable[] = {
			(MethodEntry) nullptr,
			(MethodEntry) &__zz_cib_new_1,
			(MethodEntry) &Add_2,
			(MethodEntry) &NumShapes_3,
			(MethodEntry) &ShapeAt_4,
			(MethodEntry) &Area_5,
			(MethodEntry) &Perimeter_6,
			(MethodEntry) &Draw_7,
			(MethodEntry) &CreateCompositeOfRectAndCircle_8,
			(MethodEntry) &__zz_cib_cast_to___Graphics__Shape_9
		};
		*pMethodTable = methodTable;
		*pLen = 10;
	}
}}}
