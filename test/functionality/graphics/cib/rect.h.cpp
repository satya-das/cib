#include "__zz_cib_Graphics-proxy.h"
#include "__zz_cib_Graphics-mtable.h"
#include "__zz_cib_Graphics-decl.h"
#include "__zz_cib_Graphics-ids.h"
#include "rect.h"

namespace __zz_cib_ { namespace Graphics { namespace Rectangle { namespace __zz_cib_GenericProxy {
	class Rectangle : public ::Graphics::Rectangle {
		__zz_cib_PROXY* __zz_cib_proxy;
		__zz_cib_MethodTable __zz_cib_mtbl;

		template<typename _ProcType> _ProcType getMethod(std::uint32_t procId) const {
			return reinterpret_cast<_ProcType>(__zz_cib_GetMethodEntry(__zz_cib_mtbl, procId));
		}
	public:
		Rectangle(__zz_cib_PROXY* proxy, __zz_cib_MethodTable mtbl, const ::Graphics::Rectangle& __zz_cib_param0)
			: ::Graphics::Rectangle::Rectangle(__zz_cib_param0)
			, __zz_cib_proxy(proxy)
			, __zz_cib_mtbl(mtbl)
		{}
		Rectangle(__zz_cib_PROXY* proxy, __zz_cib_MethodTable mtbl, float left, float bottom, float right, float top)
			: ::Graphics::Rectangle::Rectangle(left, bottom, right, top)
			, __zz_cib_proxy(proxy)
			, __zz_cib_mtbl(mtbl)
		{}
		float Area() const override {
			using AreaProc = float (__zz_cib_decl *) (__zz_cib_PROXY*);
			auto method = getMethod<AreaProc>(__zz_cib_GenericProxy::__zz_cib_methodid::Area_1);
			return method(__zz_cib_proxy);
		}
		float Perimeter() const override {
			using PerimeterProc = float (__zz_cib_decl *) (__zz_cib_PROXY*);
			auto method = getMethod<PerimeterProc>(__zz_cib_GenericProxy::__zz_cib_methodid::Perimeter_2);
			return method(__zz_cib_proxy);
		}
		void Draw(::Graphics::Context* ctx) const override {
			using DrawProc = void (__zz_cib_decl *) (__zz_cib_PROXY*, ::Graphics::Context* ctx);
			auto method = getMethod<DrawProc>(__zz_cib_GenericProxy::__zz_cib_methodid::Draw_3);
			return method(__zz_cib_proxy, ctx);
		}
		void __zz_cib_release_proxy() { __zz_cib_proxy = nullptr; }
	};
}}}}
namespace __zz_cib_ { namespace Graphics { namespace Rectangle {
	static ::Graphics::Rectangle* __zz_cib_decl __zz_cib_new_1(__zz_cib_PROXY* proxy, __zz_cib_MethodTable mtbl, const ::Graphics::Rectangle& __zz_cib_param0) {
		return new __zz_cib_::Graphics::Rectangle::__zz_cib_GenericProxy::Rectangle(proxy, mtbl, __zz_cib_param0);
	}
	static void __zz_cib_decl __zz_cib_delete_2(::Graphics::Rectangle* __zz_cib_obj) {
		delete __zz_cib_obj;
	}
	static ::Graphics::Rectangle* __zz_cib_decl __zz_cib_new_3(__zz_cib_PROXY* proxy, __zz_cib_MethodTable mtbl, float left, float bottom, float right, float top) {
		return new __zz_cib_::Graphics::Rectangle::__zz_cib_GenericProxy::Rectangle(proxy, mtbl, left, bottom, right, top);
	}
	static float __zz_cib_decl Area_4(const ::Graphics::Rectangle* __zz_cib_obj) {
		return __zz_cib_obj->::Graphics::Rectangle::Area();
	}
	static float __zz_cib_decl Perimeter_5(const ::Graphics::Rectangle* __zz_cib_obj) {
		return __zz_cib_obj->::Graphics::Rectangle::Perimeter();
	}
	static void __zz_cib_decl Draw_6(const ::Graphics::Rectangle* __zz_cib_obj, ::Graphics::Context* ctx) {
		__zz_cib_obj->::Graphics::Rectangle::Draw(ctx);
	}
	::Graphics::Shape* __zz_cib_decl __zz_cib_cast_to___Graphics__Shape_7(::Graphics::Rectangle* __zz_cib_obj) {
		return __zz_cib_obj;
	}
	void __zz_cib_decl __zz_cib_release_proxy_8(::Graphics::Rectangle* __zz_cib_obj) {
		auto unknownProxy = dynamic_cast<__zz_cib_::Graphics::Rectangle::__zz_cib_GenericProxy::Rectangle*>(__zz_cib_obj);
		if (unknownProxy)
			unknownProxy->__zz_cib_release_proxy();
	}
}}}

namespace __zz_cib_ { namespace Graphics { namespace Rectangle {
	__zz_cib_MethodTable __zz_cib_GetMethodTable() {
		static const __zz_cib_MethodTableHeader tableHeader = { sizeof(__zz_cib_MethodTableHeader), 8 };
		static const __zz_cib_MethodEntry methodTable[] = {
			reinterpret_cast<__zz_cib_MethodEntry> (&tableHeader),
			reinterpret_cast<__zz_cib_MethodEntry> (&__zz_cib_new_1),
			reinterpret_cast<__zz_cib_MethodEntry> (&__zz_cib_delete_2),
			reinterpret_cast<__zz_cib_MethodEntry> (&__zz_cib_new_3),
			reinterpret_cast<__zz_cib_MethodEntry> (&Area_4),
			reinterpret_cast<__zz_cib_MethodEntry> (&Perimeter_5),
			reinterpret_cast<__zz_cib_MethodEntry> (&Draw_6),
			reinterpret_cast<__zz_cib_MethodEntry> (&__zz_cib_cast_to___Graphics__Shape_7),
			reinterpret_cast<__zz_cib_MethodEntry> (&__zz_cib_release_proxy_8)
		};
		return methodTable;
	}
}}}
