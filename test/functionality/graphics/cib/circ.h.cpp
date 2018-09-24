#include "__zz_cib_Graphics-ids.h"
#include "__zz_cib_Graphics.h"
#include "circ.h"
#include "shape.h"

namespace __zz_cib_ { namespace Graphics { namespace Circle { namespace __zz_cib_GenericProxy {
	class Circle : public ::Graphics::Circle {
		__zz_cib_PROXY* __zz_cib_proxy;
		__zz_cib_MethodTable __zz_cib_mtbl;

		template<typename _ProcType> _ProcType getMethod(std::uint32_t procId) const {
			return reinterpret_cast<_ProcType>(__zz_cib_GetMethodEntry(__zz_cib_mtbl, procId));
		}
	public:
		Circle(__zz_cib_PROXY* proxy, __zz_cib_MethodTable mtbl, const ::Graphics::Circle& __zz_cib_param0)
			: ::Graphics::Circle::Circle(__zz_cib_param0)
			, __zz_cib_proxy(proxy)
			, __zz_cib_mtbl(mtbl)
		{}
		Circle(__zz_cib_PROXY* proxy, __zz_cib_MethodTable mtbl, float Ox, float Oy, float radius)
			: ::Graphics::Circle::Circle(Ox, Oy, radius)
			, __zz_cib_proxy(proxy)
			, __zz_cib_mtbl(mtbl)
		{}
		float Area() const override {
			using AreaProc = float (__zz_cib_decl *) (__zz_cib_PROXY*);
			auto method = getMethod<AreaProc>(__zz_cib_::Graphics::Circle::__zz_cib_GenericProxy::__zz_cib_methodid::Area_1);
			return method(__zz_cib_proxy);
		}
		float Perimeter() const override {
			using PerimeterProc = float (__zz_cib_decl *) (__zz_cib_PROXY*);
			auto method = getMethod<PerimeterProc>(__zz_cib_::Graphics::Circle::__zz_cib_GenericProxy::__zz_cib_methodid::Perimeter_2);
			return method(__zz_cib_proxy);
		}
		void Draw(::Graphics::Context* ctx) const override {
			using DrawProc = void (__zz_cib_decl *) (__zz_cib_PROXY*, ::Graphics::Context* ctx);
			auto method = getMethod<DrawProc>(__zz_cib_::Graphics::Circle::__zz_cib_GenericProxy::__zz_cib_methodid::Draw_3);
			return method(__zz_cib_proxy, ctx);
		}
		void __zz_cib_release_proxy() { __zz_cib_proxy = nullptr; }
	};
}}}}
namespace __zz_cib_ { namespace Graphics { namespace Circle {
	static ::Graphics::Circle* __zz_cib_decl __zz_cib_new_1(__zz_cib_PROXY* proxy, __zz_cib_MethodTable mtbl, const ::Graphics::Circle& __zz_cib_param0) {
		return new __zz_cib_::Graphics::Circle::__zz_cib_GenericProxy::Circle(proxy, mtbl, __zz_cib_param0);
	}
	static void __zz_cib_decl __zz_cib_delete_2(::Graphics::Circle* __zz_cib_obj) {
		delete __zz_cib_obj;
	}
	static ::Graphics::Circle* __zz_cib_decl __zz_cib_new_3(__zz_cib_PROXY* proxy, __zz_cib_MethodTable mtbl, float Ox, float Oy, float radius) {
		return new __zz_cib_::Graphics::Circle::__zz_cib_GenericProxy::Circle(proxy, mtbl, Ox, Oy, radius);
	}
	static float __zz_cib_decl Area_4(const ::Graphics::Circle* __zz_cib_obj) {
		return __zz_cib_obj->::Graphics::Circle::Area();
	}
	static float __zz_cib_decl Perimeter_5(const ::Graphics::Circle* __zz_cib_obj) {
		return __zz_cib_obj->::Graphics::Circle::Perimeter();
	}
	static void __zz_cib_decl Draw_6(const ::Graphics::Circle* __zz_cib_obj, ::Graphics::Context* ctx) {
		__zz_cib_obj->::Graphics::Circle::Draw(ctx);
	}
	static ::Graphics::Shape* __zz_cib_decl CreateCircle_7(float Ox, float Oy, float radius) {
		return ::Graphics::Circle::CreateCircle(Ox, Oy, radius);
	}
	::Graphics::Shape* __zz_cib_decl __zz_cib_cast_to___Graphics__Shape_8(::Graphics::Circle* __zz_cib_obj) {
		return __zz_cib_obj;
	}
	void __zz_cib_decl __zz_cib_release_proxy_9(::Graphics::Circle* __zz_cib_obj) {
		auto unknownProxy = dynamic_cast<__zz_cib_::Graphics::Circle::__zz_cib_GenericProxy::Circle*>(__zz_cib_obj);
		if (unknownProxy)
			unknownProxy->__zz_cib_release_proxy();
	}
}}}

namespace __zz_cib_ { namespace Graphics { namespace Circle {
	__zz_cib_MethodTable __zz_cib_GetMethodTable() {
		static const __zz_cib_MethodTableHeader tableHeader = { sizeof(__zz_cib_MethodTableHeader), 9 };
		static const __zz_cib_MethodEntry methodTable[] = {
			reinterpret_cast<__zz_cib_MethodEntry> (&tableHeader),
			reinterpret_cast<__zz_cib_MethodEntry> (&__zz_cib_new_1),
			reinterpret_cast<__zz_cib_MethodEntry> (&__zz_cib_delete_2),
			reinterpret_cast<__zz_cib_MethodEntry> (&__zz_cib_new_3),
			reinterpret_cast<__zz_cib_MethodEntry> (&Area_4),
			reinterpret_cast<__zz_cib_MethodEntry> (&Perimeter_5),
			reinterpret_cast<__zz_cib_MethodEntry> (&Draw_6),
			reinterpret_cast<__zz_cib_MethodEntry> (&CreateCircle_7),
			reinterpret_cast<__zz_cib_MethodEntry> (&__zz_cib_cast_to___Graphics__Shape_8),
			reinterpret_cast<__zz_cib_MethodEntry> (&__zz_cib_release_proxy_9)
		};
		return methodTable;
	}
}}}
