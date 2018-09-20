#include "__zz_cib_Graphics-ids.h"
#include "__zz_cib_Graphics.h"
#include "circ.h"
#include "shape.h"

namespace __zz_cib_ { namespace Graphics { namespace Circle { namespace __zz_cib_UnknownProxy {
	class Circle : public ::Graphics::Circle {
		__zz_cib_PROXY* __zz_cib_proxy;
		__zz_cib_MethodTable __zz_cib_mtbl;

		template<typename _ProcType> _ProcType getProc(std::uint32_t procId) const {
			return reinterpret_cast<_ProcType>(__zz_cib_GetMethodEntry(__zz_cib_mtbl, procId));
		}
	public:
		Circle(__zz_cib_PROXY* proxy, __zz_cib_MethodTable mtbl, float Ox, float Oy, float radius)
			: ::Graphics::Circle::Circle(Ox, Oy, radius)
			, __zz_cib_proxy(proxy)
			, __zz_cib_mtbl(mtbl)
		{}
		float Area() const override {
			using AreaProc = float (__zz_cib_decl *) (__zz_cib_PROXY*);
			auto proc = getProc<AreaProc>(__zz_cib_::Graphics::Circle::__zz_cib_UnknownProxy::__zz_cib_methodid::Area_1);
			return proc(__zz_cib_proxy);
		}
		float Perimeter() const override {
			using PerimeterProc = float (__zz_cib_decl *) (__zz_cib_PROXY*);
			auto proc = getProc<PerimeterProc>(__zz_cib_::Graphics::Circle::__zz_cib_UnknownProxy::__zz_cib_methodid::Perimeter_2);
			return proc(__zz_cib_proxy);
		}
		void Draw(::Graphics::Context* ctx) const override {
			using DrawProc = void (__zz_cib_decl *) (__zz_cib_PROXY*, ::Graphics::Context* ctx);
			auto proc = getProc<DrawProc>(__zz_cib_::Graphics::Circle::__zz_cib_UnknownProxy::__zz_cib_methodid::Draw_3);
			return proc(__zz_cib_proxy, ctx);
		}
		void __zz_cib_release_proxy() { __zz_cib_proxy = nullptr; }
	};
}}}}
namespace __zz_cib_ { namespace Graphics { namespace Circle {
	static ::Graphics::Circle* __zz_cib_decl __zz_cib_new_1(__zz_cib_PROXY* proxy, __zz_cib_MethodTable mtbl, float Ox, float Oy, float radius) {
		return new __zz_cib_::Graphics::Circle::__zz_cib_UnknownProxy::Circle(proxy, mtbl, Ox, Oy, radius);
	}
	static float __zz_cib_decl Area_2(const ::Graphics::Circle* __zz_cib_obj) {
		return __zz_cib_obj->::Graphics::Circle::Area();
	}
	static float __zz_cib_decl Perimeter_3(const ::Graphics::Circle* __zz_cib_obj) {
		return __zz_cib_obj->::Graphics::Circle::Perimeter();
	}
	static void __zz_cib_decl Draw_4(const ::Graphics::Circle* __zz_cib_obj, ::Graphics::Context* ctx) {
		__zz_cib_obj->::Graphics::Circle::Draw(ctx);
	}
	static ::Graphics::Shape* __zz_cib_decl CreateCircle_5(float Ox, float Oy, float radius) {
		return ::Graphics::Circle::CreateCircle(Ox, Oy, radius);
	}
	static void __zz_cib_decl __zz_cib_delete_6(::Graphics::Circle* __zz_cib_obj) {
		delete __zz_cib_obj;
	}
	::Graphics::Shape* __zz_cib_decl __zz_cib_cast_to___Graphics__Shape_7(::Graphics::Circle* __zz_cib_obj) {
		return __zz_cib_obj;
	}
	void __zz_cib_decl __zz_cib_release_proxy_8(::Graphics::Circle* __zz_cib_obj) {
		auto unknownProxy = dynamic_cast<__zz_cib_::Graphics::Circle::__zz_cib_UnknownProxy::Circle*>(__zz_cib_obj);
		if (unknownProxy)
			unknownProxy->__zz_cib_release_proxy();
	}
}}}

namespace __zz_cib_ { namespace Graphics { namespace Circle {
	__zz_cib_MethodTable __zz_cib_GetMethodTable() {
		static const __zz_cib_MethodTableHeader tableHeader = { sizeof(__zz_cib_MethodTableHeader), 8 };
		static const __zz_cib_MethodEntry methodTable[] = {
			reinterpret_cast<__zz_cib_MethodEntry> (&tableHeader),
			reinterpret_cast<__zz_cib_MethodEntry> (&__zz_cib_new_1),
			reinterpret_cast<__zz_cib_MethodEntry> (&Area_2),
			reinterpret_cast<__zz_cib_MethodEntry> (&Perimeter_3),
			reinterpret_cast<__zz_cib_MethodEntry> (&Draw_4),
			reinterpret_cast<__zz_cib_MethodEntry> (&CreateCircle_5),
			reinterpret_cast<__zz_cib_MethodEntry> (&__zz_cib_delete_6),
			reinterpret_cast<__zz_cib_MethodEntry> (&__zz_cib_cast_to___Graphics__Shape_7),
			reinterpret_cast<__zz_cib_MethodEntry> (&__zz_cib_release_proxy_8)
		};
		return methodTable;
	}
}}}
