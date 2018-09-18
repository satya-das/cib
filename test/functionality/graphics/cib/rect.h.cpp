#include "__zz_cib_Graphics-ids.h"

#include "__zz_cib_Graphics.h"
#include "rect.h"

namespace __zz_cib_ {
	namespace Graphics {
		namespace Rectangle { namespace __zz_cib_UnknownProxy {
			class Rectangle : public ::Graphics::Rectangle {
				__zz_cib_::__zz_cib_PROXY* __zz_cib_proxy;
				__zz_cib_::__zz_cib_MethodTable __zz_cib_mtbl;

				template<typename _ProcType> _ProcType getProc(std::uint32_t procId) const {
					return reinterpret_cast<_ProcType>(__zz_cib_GetMethodEntry(__zz_cib_mtbl, procId));
				}
			public:
				Rectangle(__zz_cib_::__zz_cib_PROXY* proxy, __zz_cib_::__zz_cib_MethodTable mtbl, float left, float bottom, float right, float top)
					: ::Graphics::Rectangle::Rectangle(left, bottom, right, top)
					, __zz_cib_proxy(proxy)
					, __zz_cib_mtbl(mtbl)
				{}
				float Area() const override {
					using AreaProc = float (__zz_cib_decl *) (__zz_cib_::__zz_cib_PROXY*);
					auto proc = getProc<AreaProc>(__zz_cib_::Graphics::Rectangle::__zz_cib_UnknownProxy::__zz_cib_methodid::Area_1);
					return proc(__zz_cib_proxy);
				}
				float Perimeter() const override {
					using PerimeterProc = float (__zz_cib_decl *) (__zz_cib_::__zz_cib_PROXY*);
					auto proc = getProc<PerimeterProc>(__zz_cib_::Graphics::Rectangle::__zz_cib_UnknownProxy::__zz_cib_methodid::Perimeter_2);
					return proc(__zz_cib_proxy);
				}
				void Draw(::Graphics::Context* ctx) const override {
					using DrawProc = void (__zz_cib_decl *) (__zz_cib_::__zz_cib_PROXY*, ::Graphics::Context* ctx);
					auto proc = getProc<DrawProc>(__zz_cib_::Graphics::Rectangle::__zz_cib_UnknownProxy::__zz_cib_methodid::Draw_3);
					return proc(__zz_cib_proxy, ctx);
				}
				void __zz_cib_release_proxy() { __zz_cib_proxy = nullptr; }
			};
		}}
		namespace Rectangle {
			::Graphics::Rectangle* __zz_cib_decl __zz_cib_new_1(__zz_cib_::__zz_cib_PROXY* proxy, __zz_cib_::__zz_cib_MethodTable mtbl, float left, float bottom, float right, float top) {
				return new __zz_cib_::Graphics::Rectangle::__zz_cib_UnknownProxy::Rectangle(proxy, mtbl, left, bottom, right, top);
			}
			float __zz_cib_decl Area_2(const ::Graphics::Rectangle* __zz_cib_obj) {
				return __zz_cib_obj->::Graphics::Rectangle::Area();
			}
			float __zz_cib_decl Perimeter_3(const ::Graphics::Rectangle* __zz_cib_obj) {
				return __zz_cib_obj->::Graphics::Rectangle::Perimeter();
			}
			void __zz_cib_decl Draw_4(const ::Graphics::Rectangle* __zz_cib_obj, ::Graphics::Context* ctx) {
				__zz_cib_obj->::Graphics::Rectangle::Draw(ctx);
			}
			void __zz_cib_decl __zz_cib_delete_5(::Graphics::Rectangle* __zz_cib_obj) {
				delete __zz_cib_obj;
			}
			::Graphics::Shape* __zz_cib_decl __zz_cib_cast_to___Graphics__Shape_6(::Graphics::Rectangle* __zz_cib_obj) {
				return __zz_cib_obj;
			}
			void __zz_cib_decl __zz_cib_release_proxy_7(::Graphics::Rectangle* __zz_cib_obj) {
				auto unknownProxy = dynamic_cast<__zz_cib_::Graphics::Rectangle::__zz_cib_UnknownProxy::Rectangle*>(__zz_cib_obj);
				if (unknownProxy)
					unknownProxy->__zz_cib_release_proxy();
			}
		}
	}
}
namespace __zz_cib_ { namespace Graphics { namespace Rectangle {
	using __zz_cib_MethodEntry = void(*)();
	using __zz_cib_MethodTable = const __zz_cib_MethodEntry*;
	__zz_cib_MethodTable __zz_cib_GetMethodTable()
	{
		static const __zz_cib_MethodTableHeader tableHeader = { sizeof(__zz_cib_MethodTableHeader), 7 };
		static const __zz_cib_MethodEntry methodTable[] = {
			(__zz_cib_MethodEntry) &tableHeader,
			(__zz_cib_MethodEntry) &__zz_cib_new_1,
			(__zz_cib_MethodEntry) &Area_2,
			(__zz_cib_MethodEntry) &Perimeter_3,
			(__zz_cib_MethodEntry) &Draw_4,
			(__zz_cib_MethodEntry) &__zz_cib_delete_5,
			(__zz_cib_MethodEntry) &__zz_cib_cast_to___Graphics__Shape_6,
			(__zz_cib_MethodEntry) &__zz_cib_release_proxy_7
		};
		return methodTable;
	}
}}}
