#include "__zz_cib_Graphics-ids.h"
#include "__zz_cib_Graphics.h"
#include "composite.h"
#include "shape.h"

namespace __zz_cib_ { namespace Graphics { namespace Composite { namespace __zz_cib_UnknownProxy {
	class Composite : public ::Graphics::Composite {
		__zz_cib_PROXY* __zz_cib_proxy;
		__zz_cib_MethodTable __zz_cib_mtbl;

		template<typename _ProcType> _ProcType getProc(std::uint32_t procId) const {
			return reinterpret_cast<_ProcType>(__zz_cib_GetMethodEntry(__zz_cib_mtbl, procId));
		}
	public:
		Composite(__zz_cib_PROXY* proxy, __zz_cib_MethodTable mtbl)
			: ::Graphics::Composite::Composite()
			, __zz_cib_proxy(proxy)
			, __zz_cib_mtbl(mtbl)
		{}
		float Area() const override {
			using AreaProc = float (__zz_cib_decl *) (__zz_cib_PROXY*);
			auto proc = getProc<AreaProc>(__zz_cib_::Graphics::Composite::__zz_cib_UnknownProxy::__zz_cib_methodid::Area_1);
			return proc(__zz_cib_proxy);
		}
		float Perimeter() const override {
			using PerimeterProc = float (__zz_cib_decl *) (__zz_cib_PROXY*);
			auto proc = getProc<PerimeterProc>(__zz_cib_::Graphics::Composite::__zz_cib_UnknownProxy::__zz_cib_methodid::Perimeter_2);
			return proc(__zz_cib_proxy);
		}
		void Draw(::Graphics::Context* ctx) const override {
			using DrawProc = void (__zz_cib_decl *) (__zz_cib_PROXY*, ::Graphics::Context* ctx);
			auto proc = getProc<DrawProc>(__zz_cib_::Graphics::Composite::__zz_cib_UnknownProxy::__zz_cib_methodid::Draw_3);
			return proc(__zz_cib_proxy, ctx);
		}
		void __zz_cib_release_proxy() { __zz_cib_proxy = nullptr; }
	};
}}}}
namespace __zz_cib_ { namespace Graphics { namespace Composite {
	static ::Graphics::Composite* __zz_cib_decl __zz_cib_new_1(__zz_cib_PROXY* proxy, __zz_cib_MethodTable mtbl) {
		return new __zz_cib_::Graphics::Composite::__zz_cib_UnknownProxy::Composite(proxy, mtbl);
	}
	static void __zz_cib_decl Add_2(::Graphics::Composite* __zz_cib_obj, ::Graphics::Shape* shape) {
		__zz_cib_obj->::Graphics::Composite::Add(shape);
	}
	static size_t __zz_cib_decl NumShapes_3(const ::Graphics::Composite* __zz_cib_obj) {
		return __zz_cib_obj->::Graphics::Composite::NumShapes();
	}
	static ::Graphics::Shape* __zz_cib_decl ShapeAt_4(const ::Graphics::Composite* __zz_cib_obj, size_t idxShape) {
		return __zz_cib_obj->::Graphics::Composite::ShapeAt(idxShape);
	}
	static float __zz_cib_decl Area_5(const ::Graphics::Composite* __zz_cib_obj) {
		return __zz_cib_obj->::Graphics::Composite::Area();
	}
	static float __zz_cib_decl Perimeter_6(const ::Graphics::Composite* __zz_cib_obj) {
		return __zz_cib_obj->::Graphics::Composite::Perimeter();
	}
	static void __zz_cib_decl Draw_7(const ::Graphics::Composite* __zz_cib_obj, ::Graphics::Context* ctx) {
		__zz_cib_obj->::Graphics::Composite::Draw(ctx);
	}
	static ::Graphics::Composite* __zz_cib_decl CreateCompositeOfRectAndCircle_8() {
		return ::Graphics::Composite::CreateCompositeOfRectAndCircle();
	}
	static void __zz_cib_decl __zz_cib_delete_9(::Graphics::Composite* __zz_cib_obj) {
		delete __zz_cib_obj;
	}
	::Graphics::Shape* __zz_cib_decl __zz_cib_cast_to___Graphics__Shape_10(::Graphics::Composite* __zz_cib_obj) {
		return __zz_cib_obj;
	}
	void __zz_cib_decl __zz_cib_release_proxy_11(::Graphics::Composite* __zz_cib_obj) {
		auto unknownProxy = dynamic_cast<__zz_cib_::Graphics::Composite::__zz_cib_UnknownProxy::Composite*>(__zz_cib_obj);
		if (unknownProxy)
			unknownProxy->__zz_cib_release_proxy();
	}
}}}

namespace __zz_cib_ { namespace Graphics { namespace Composite {
	__zz_cib_MethodTable __zz_cib_GetMethodTable() {
		static const __zz_cib_MethodTableHeader tableHeader = { sizeof(__zz_cib_MethodTableHeader), 11 };
		static const __zz_cib_MethodEntry methodTable[] = {
			reinterpret_cast<__zz_cib_MethodEntry> (&tableHeader),
			reinterpret_cast<__zz_cib_MethodEntry> (&__zz_cib_new_1),
			reinterpret_cast<__zz_cib_MethodEntry> (&Add_2),
			reinterpret_cast<__zz_cib_MethodEntry> (&NumShapes_3),
			reinterpret_cast<__zz_cib_MethodEntry> (&ShapeAt_4),
			reinterpret_cast<__zz_cib_MethodEntry> (&Area_5),
			reinterpret_cast<__zz_cib_MethodEntry> (&Perimeter_6),
			reinterpret_cast<__zz_cib_MethodEntry> (&Draw_7),
			reinterpret_cast<__zz_cib_MethodEntry> (&CreateCompositeOfRectAndCircle_8),
			reinterpret_cast<__zz_cib_MethodEntry> (&__zz_cib_delete_9),
			reinterpret_cast<__zz_cib_MethodEntry> (&__zz_cib_cast_to___Graphics__Shape_10),
			reinterpret_cast<__zz_cib_MethodEntry> (&__zz_cib_release_proxy_11)
		};
		return methodTable;
	}
}}}
