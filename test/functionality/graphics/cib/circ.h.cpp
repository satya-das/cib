#include "__zz_cib_Graphics_ids.h"

#include "cib_GraphicsLib.h"
#include "circ.h"

namespace __zz_cib_ {
	namespace Graphics {
		namespace Circle { namespace __zz_cib_UnknownProxy {
			class Circle : public ::Graphics::Circle {
				__zz_cib_::PROXY* __zz_cib_proxy;
				__zz_cib_::MethodTable __zz_cib_mtbl;

			public:
				Circle(__zz_cib_::PROXY* proxy, __zz_cib_::MethodTable mtbl, float Ox, float Oy, float radius)
					: ::Graphics::Circle::Circle(Ox, Oy, radius)
					, __zz_cib_proxy(proxy)
					, __zz_cib_mtbl(mtbl)
				{}
				float Area() const override {
					using AreaProc = float (__stdcall *) (__zz_cib_::PROXY*);
					auto proc = (AreaProc) __zz_cib_mtbl[__zz_cib_::Graphics::Circle::__zz_cib_UnknownProxy::__zz_cib_methodid::Area_1];
					return proc(__zz_cib_proxy);
				}
				float Perimeter() const override {
					using PerimeterProc = float (__stdcall *) (__zz_cib_::PROXY*);
					auto proc = (PerimeterProc) __zz_cib_mtbl[__zz_cib_::Graphics::Circle::__zz_cib_UnknownProxy::__zz_cib_methodid::Perimeter_2];
					return proc(__zz_cib_proxy);
				}
				void Draw(::Graphics::Context* ctx) const override {
					using DrawProc = void (__stdcall *) (__zz_cib_::PROXY*, ::Graphics::Context* ctx);
					auto proc = (DrawProc) __zz_cib_mtbl[__zz_cib_::Graphics::Circle::__zz_cib_UnknownProxy::__zz_cib_methodid::Draw_3];
					return proc(__zz_cib_proxy, ctx);
				}
				void __zz_cib_release_proxy() { __zz_cib_proxy = nullptr; }
			};
		}}
		namespace Circle {
			::Graphics::Circle* __stdcall __zz_cib_new_1(__zz_cib_::PROXY* proxy, __zz_cib_::MethodTable mtbl, float Ox, float Oy, float radius) {
				return new __zz_cib_::Graphics::Circle::__zz_cib_UnknownProxy::Circle(proxy, mtbl, Ox, Oy, radius);
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
			void __stdcall __zz_cib_delete_5(::Graphics::Circle* __zz_cib_obj) {
				delete __zz_cib_obj;
			}
			::Graphics::Shape* __stdcall __zz_cib_cast_to___Graphics__Shape_6(::Graphics::Circle* __zz_cib_obj) {
				return __zz_cib_obj;
			}
			void __stdcall __zz_cib_release_proxy_7(::Graphics::Circle* __zz_cib_obj) {
				auto unknownProxy = static_cast<__zz_cib_::Graphics::Circle::__zz_cib_UnknownProxy::Circle*>(__zz_cib_obj);
				unknownProxy->__zz_cib_release_proxy();
			}
		}
	}
}
namespace __zz_cib_ { namespace Graphics { namespace Circle {
	using MethodEntry = void(*)();
	using MethodTable = const MethodEntry*;
	MethodTable GetMethodTable()
	{
		static const MethodTableHeader tableHeader = { sizeof(MethodTableHeader), 7 };
		static const MethodEntry methodTable[] = {
			(MethodEntry) &tableHeader,
			(MethodEntry) &__zz_cib_new_1,
			(MethodEntry) &Area_2,
			(MethodEntry) &Perimeter_3,
			(MethodEntry) &Draw_4,
			(MethodEntry) &__zz_cib_delete_5,
			(MethodEntry) &__zz_cib_cast_to___Graphics__Shape_6,
			(MethodEntry) &__zz_cib_release_proxy_7
		};
		return methodTable;
	}
}}}
