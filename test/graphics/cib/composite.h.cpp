#include "__zz_cib_Graphics_ids.h"

#include "cib_GraphicsLib.h"
#include "composite.h"

namespace __zz_cib_ {
	namespace Graphics {
		namespace Composite {
			::Graphics::Composite* __stdcall __zz_cib_new() {
				return new ::Graphics::Composite();
			}

			void __stdcall Add(::Graphics::Composite* __zz_cib_obj, ::Graphics::Shape* shape) {
				__zz_cib_obj->::Graphics::Composite::Add(shape);
			}

			size_t __stdcall NumShapes(::Graphics::Composite* __zz_cib_obj) {
				return __zz_cib_obj->::Graphics::Composite::NumShapes();
			}

			::Graphics::Shape* __stdcall ShapeAt(::Graphics::Composite* __zz_cib_obj, size_t idxShape) {
				return __zz_cib_obj->::Graphics::Composite::ShapeAt(idxShape);
			}

			float __stdcall Area(::Graphics::Composite* __zz_cib_obj) {
				return __zz_cib_obj->::Graphics::Composite::Area();
			}

			float __stdcall Perimeter(::Graphics::Composite* __zz_cib_obj) {
				return __zz_cib_obj->::Graphics::Composite::Perimeter();
			}

			void __stdcall Draw(::Graphics::Composite* __zz_cib_obj, ::Graphics::Context* ctx) {
				__zz_cib_obj->::Graphics::Composite::Draw(ctx);
			}

			::Graphics::Composite* __stdcall CreateCompositeOfRectAndCircle() {
				return ::Graphics::Composite::CreateCompositeOfRectAndCircle();
			}

			::Graphics::Shape* __stdcall __zz_cib_cast_to___Graphics__Shape(::Graphics::Composite* __zz_cib_obj) {
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
			(MethodEntry) &__zz_cib_new,
			(MethodEntry) &Add,
			(MethodEntry) &NumShapes,
			(MethodEntry) &ShapeAt,
			(MethodEntry) &Area,
			(MethodEntry) &Perimeter,
			(MethodEntry) &Draw,
			(MethodEntry) &CreateCompositeOfRectAndCircle,
			(MethodEntry) &__zz_cib_cast_to___Graphics__Shape
		};
		*pMethodTable = methodTable;
		*pLen = 10;
	}
}}}
