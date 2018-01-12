#include "__zz_cib_Graphics_ids.h"

#include "cib_GraphicsLib.h"
#include "composite.h"
#include "shape.h"

namespace __zz_cib_ {
	namespace Graphics {
		namespace Composite { namespace __zz_cib_UnknownProxy {
			class Composite : public ::Graphics::Composite {
				__zz_cib_::PROXY* __zz_cib_proxy;
				__zz_cib_::MethodTable __zz_cib_mtbl;

			public:
				Composite(__zz_cib_::PROXY* proxy, __zz_cib_::MethodTable mtbl)
					: ::Graphics::Composite::Composite()
					, __zz_cib_proxy(proxy)
					, __zz_cib_mtbl(mtbl)
				{}
				float Area() const override {
					using AreaProc = float (__zz_cib_decl *) (__zz_cib_::PROXY*);
					auto proc = (AreaProc) __zz_cib_mtbl[__zz_cib_::Graphics::Composite::__zz_cib_UnknownProxy::__zz_cib_methodid::Area_1];
					return proc(__zz_cib_proxy);
				}
				float Perimeter() const override {
					using PerimeterProc = float (__zz_cib_decl *) (__zz_cib_::PROXY*);
					auto proc = (PerimeterProc) __zz_cib_mtbl[__zz_cib_::Graphics::Composite::__zz_cib_UnknownProxy::__zz_cib_methodid::Perimeter_2];
					return proc(__zz_cib_proxy);
				}
				void Draw(::Graphics::Context* ctx) const override {
					using DrawProc = void (__zz_cib_decl *) (__zz_cib_::PROXY*, ::Graphics::Context* ctx);
					auto proc = (DrawProc) __zz_cib_mtbl[__zz_cib_::Graphics::Composite::__zz_cib_UnknownProxy::__zz_cib_methodid::Draw_3];
					return proc(__zz_cib_proxy, ctx);
				}
				void __zz_cib_release_proxy() { __zz_cib_proxy = nullptr; }
			};
		}}
		namespace Composite {
			::Graphics::Composite* __zz_cib_decl __zz_cib_new_1(__zz_cib_::PROXY* proxy, __zz_cib_::MethodTable mtbl) {
				return new __zz_cib_::Graphics::Composite::__zz_cib_UnknownProxy::Composite(proxy, mtbl);
			}
			void __zz_cib_decl Add_2(::Graphics::Composite* __zz_cib_obj, ::Graphics::Shape* shape) {
				__zz_cib_obj->::Graphics::Composite::Add(shape);
			}
			size_t __zz_cib_decl NumShapes_3(::Graphics::Composite* __zz_cib_obj) {
				return __zz_cib_obj->::Graphics::Composite::NumShapes();
			}
			::Graphics::Shape* __zz_cib_decl ShapeAt_4(::Graphics::Composite* __zz_cib_obj, size_t idxShape) {
				return __zz_cib_obj->::Graphics::Composite::ShapeAt(idxShape);
			}
			float __zz_cib_decl Area_5(::Graphics::Composite* __zz_cib_obj) {
				return __zz_cib_obj->::Graphics::Composite::Area();
			}
			float __zz_cib_decl Perimeter_6(::Graphics::Composite* __zz_cib_obj) {
				return __zz_cib_obj->::Graphics::Composite::Perimeter();
			}
			void __zz_cib_decl Draw_7(::Graphics::Composite* __zz_cib_obj, ::Graphics::Context* ctx) {
				__zz_cib_obj->::Graphics::Composite::Draw(ctx);
			}
			::Graphics::Composite* __zz_cib_decl CreateCompositeOfRectAndCircle_8() {
				return ::Graphics::Composite::CreateCompositeOfRectAndCircle();
			}
			void __zz_cib_decl __zz_cib_delete_9(::Graphics::Composite* __zz_cib_obj) {
				delete __zz_cib_obj;
			}
			::Graphics::Shape* __zz_cib_decl __zz_cib_cast_to___Graphics__Shape_10(::Graphics::Composite* __zz_cib_obj) {
				return __zz_cib_obj;
			}
			void __zz_cib_decl __zz_cib_release_proxy_11(::Graphics::Composite* __zz_cib_obj) {
				auto unknownProxy = static_cast<__zz_cib_::Graphics::Composite::__zz_cib_UnknownProxy::Composite*>(__zz_cib_obj);
				unknownProxy->__zz_cib_release_proxy();
			}
		}
	}
}
namespace __zz_cib_ { namespace Graphics { namespace Composite {
	using MethodEntry = void(*)();
	using MethodTable = const MethodEntry*;
	MethodTable GetMethodTable()
	{
		static const MethodTableHeader tableHeader = { sizeof(MethodTableHeader), 11 };
		static const MethodEntry methodTable[] = {
			(MethodEntry) &tableHeader,
			(MethodEntry) &__zz_cib_new_1,
			(MethodEntry) &Add_2,
			(MethodEntry) &NumShapes_3,
			(MethodEntry) &ShapeAt_4,
			(MethodEntry) &Area_5,
			(MethodEntry) &Perimeter_6,
			(MethodEntry) &Draw_7,
			(MethodEntry) &CreateCompositeOfRectAndCircle_8,
			(MethodEntry) &__zz_cib_delete_9,
			(MethodEntry) &__zz_cib_cast_to___Graphics__Shape_10,
			(MethodEntry) &__zz_cib_release_proxy_11
		};
		return methodTable;
	}
}}}
