#include "composite.h"
#include "shape.h"

#include <typeinfo>
#include <typeindex>
#include <cstdint>
#include <unordered_map>

extern std::unordered_map<std::type_index, std::uint32_t> __zz_cib_gClassIdRepo;

#include "__zz_cib_Graphics-decl.h"
#include "__zz_cib_Graphics-ids.h"
#include "__zz_cib_Graphics-mtable.h"
#include "__zz_cib_Graphics-proxy.h"

namespace __zz_cib_ { namespace Graphics { namespace Composite { namespace __zz_cib_GenericProxy {
	class Composite : public ::Graphics::Composite {
		__zz_cib_PROXY* __zz_cib_proxy;
		__zz_cib_MethodTable __zz_cib_mtbl;

		template<typename _ProcType> _ProcType getMethod(std::uint32_t procId) const {
			return reinterpret_cast<_ProcType>(__zz_cib_GetMethodEntry(__zz_cib_mtbl, procId));
		}
	public:
		Composite(__zz_cib_PROXY* proxy, __zz_cib_MethodTable mtbl)
			: ::Graphics::Composite::Composite()
			, __zz_cib_proxy(proxy)
			, __zz_cib_mtbl(mtbl)
		{}
		Composite(__zz_cib_PROXY* proxy, __zz_cib_MethodTable mtbl, const ::Graphics::Composite& __zz_cib_param0)
			: ::Graphics::Composite::Composite(__zz_cib_param0)
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
namespace __zz_cib_ { namespace Graphics { namespace Composite {
	static ::Graphics::Composite* __zz_cib_decl __zz_cib_new_1(__zz_cib_PROXY* proxy, __zz_cib_MethodTable mtbl, const ::Graphics::Composite& __zz_cib_param0) {
		return new __zz_cib_::Graphics::Composite::__zz_cib_GenericProxy::Composite(proxy, mtbl, __zz_cib_param0);
	}
	static void __zz_cib_decl __zz_cib_delete_2(::Graphics::Composite* __zz_cib_obj) {
		delete __zz_cib_obj;
	}
	static ::Graphics::Composite* __zz_cib_decl __zz_cib_new_3(__zz_cib_PROXY* proxy, __zz_cib_MethodTable mtbl) {
		return new __zz_cib_::Graphics::Composite::__zz_cib_GenericProxy::Composite(proxy, mtbl);
	}
	static void __zz_cib_decl Add_4(::Graphics::Composite* __zz_cib_obj, ::Graphics::Shape* shape) {
		__zz_cib_obj->::Graphics::Composite::Add(shape);
	}
	static size_t __zz_cib_decl NumShapes_5(const ::Graphics::Composite* __zz_cib_obj) {
		return __zz_cib_obj->::Graphics::Composite::NumShapes();
	}
	static ::Graphics::Shape* __zz_cib_decl ShapeAt_6(const ::Graphics::Composite* __zz_cib_obj, size_t idxShape) {
		return __zz_cib_obj->::Graphics::Composite::ShapeAt(idxShape);
	}
	static float __zz_cib_decl Area_7(const ::Graphics::Composite* __zz_cib_obj) {
		return __zz_cib_obj->::Graphics::Composite::Area();
	}
	static float __zz_cib_decl Perimeter_8(const ::Graphics::Composite* __zz_cib_obj) {
		return __zz_cib_obj->::Graphics::Composite::Perimeter();
	}
	static void __zz_cib_decl Draw_9(const ::Graphics::Composite* __zz_cib_obj, ::Graphics::Context* ctx) {
		__zz_cib_obj->::Graphics::Composite::Draw(ctx);
	}
	static ::Graphics::Composite* __zz_cib_decl CreateCompositeOfRectAndCircle_10() {
		return ::Graphics::Composite::CreateCompositeOfRectAndCircle();
	}
	::Graphics::Shape* __zz_cib_decl __zz_cib_cast_to___Graphics__Shape_11(::Graphics::Composite* __zz_cib_obj) {
		return __zz_cib_obj;
	}
	std::uint32_t __zz_cib_decl __zz_cib_get_class_id_12(::Graphics::Composite* __zz_cib_obj) {
		static bool classIdRepoPopulated = false;
		if (!classIdRepoPopulated) {
			classIdRepoPopulated = true;
		}
		return __zz_cib_gClassIdRepo[std::type_index(typeid(*__zz_cib_obj))];
	}
	void __zz_cib_decl __zz_cib_release_proxy_13(::Graphics::Composite* __zz_cib_obj) {
		auto unknownProxy = dynamic_cast<__zz_cib_::Graphics::Composite::__zz_cib_GenericProxy::Composite*>(__zz_cib_obj);
		if (unknownProxy)
			unknownProxy->__zz_cib_release_proxy();
	}
}}}

namespace __zz_cib_ { namespace Graphics { namespace Composite {
	__zz_cib_MethodTable __zz_cib_GetMethodTable() {
		static const __zz_cib_MethodTableHeader tableHeader = { sizeof(__zz_cib_MethodTableHeader), 13 };
		static const __zz_cib_MethodEntry methodTable[] = {
			reinterpret_cast<__zz_cib_MethodEntry> (&tableHeader),
			reinterpret_cast<__zz_cib_MethodEntry> (&__zz_cib_new_1),
			reinterpret_cast<__zz_cib_MethodEntry> (&__zz_cib_delete_2),
			reinterpret_cast<__zz_cib_MethodEntry> (&__zz_cib_new_3),
			reinterpret_cast<__zz_cib_MethodEntry> (&Add_4),
			reinterpret_cast<__zz_cib_MethodEntry> (&NumShapes_5),
			reinterpret_cast<__zz_cib_MethodEntry> (&ShapeAt_6),
			reinterpret_cast<__zz_cib_MethodEntry> (&Area_7),
			reinterpret_cast<__zz_cib_MethodEntry> (&Perimeter_8),
			reinterpret_cast<__zz_cib_MethodEntry> (&Draw_9),
			reinterpret_cast<__zz_cib_MethodEntry> (&CreateCompositeOfRectAndCircle_10),
			reinterpret_cast<__zz_cib_MethodEntry> (&__zz_cib_cast_to___Graphics__Shape_11),
			reinterpret_cast<__zz_cib_MethodEntry> (&__zz_cib_get_class_id_12),
			reinterpret_cast<__zz_cib_MethodEntry> (&__zz_cib_release_proxy_13)
		};
		return methodTable;
	}
}}}
