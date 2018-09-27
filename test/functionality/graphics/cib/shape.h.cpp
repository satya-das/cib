#include "__zz_cib_Graphics-proxy.h"
#include "__zz_cib_Graphics-mtable.h"
#include "__zz_cib_Graphics-decl.h"
#include "__zz_cib_Graphics-ids.h"
#include "circ.h"
#include "composite.h"
#include "ellipse.h"
#include "rect.h"
#include "shape.h"

#include <typeinfo>
#include <typeindex>
#include <cstdint>
#include <unordered_map>

extern std::unordered_map<std::type_index, std::uint32_t> __zz_cib_gClassIdRepo;

namespace __zz_cib_ { namespace Graphics { namespace Shape { namespace __zz_cib_GenericProxy {
	class Shape : public ::Graphics::Shape {
		__zz_cib_PROXY* __zz_cib_proxy;
		__zz_cib_MethodTable __zz_cib_mtbl;

		template<typename _ProcType> _ProcType getMethod(std::uint32_t procId) const {
			return reinterpret_cast<_ProcType>(__zz_cib_GetMethodEntry(__zz_cib_mtbl, procId));
		}
	public:
		Shape(__zz_cib_PROXY* proxy, __zz_cib_MethodTable mtbl)
			: ::Graphics::Shape::Shape()
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
		~Shape() override {
			if (!__zz_cib_proxy) return;
			using __zz_cib_deleteProc = void (__zz_cib_decl *) (__zz_cib_PROXY*);
			auto method = getMethod<__zz_cib_deleteProc>(__zz_cib_GenericProxy::__zz_cib_methodid::__zz_cib_delete_4);
			method(__zz_cib_proxy);
		}
		void __zz_cib_release_proxy() { __zz_cib_proxy = nullptr; }
	};
}}}}
namespace __zz_cib_ { namespace Graphics { namespace Shape {
	static ::Graphics::Shape* __zz_cib_decl __zz_cib_new_1(__zz_cib_PROXY* proxy, __zz_cib_MethodTable mtbl) {
		return new __zz_cib_::Graphics::Shape::__zz_cib_GenericProxy::Shape(proxy, mtbl);
	}
	static float __zz_cib_decl Area_2(const ::Graphics::Shape* __zz_cib_obj) {
		return __zz_cib_obj->Area();
	}
	static float __zz_cib_decl Perimeter_3(const ::Graphics::Shape* __zz_cib_obj) {
		return __zz_cib_obj->Perimeter();
	}
	static void __zz_cib_decl Draw_4(const ::Graphics::Shape* __zz_cib_obj, ::Graphics::Context* ctx) {
		__zz_cib_obj->Draw(ctx);
	}
	static void __zz_cib_decl __zz_cib_delete_5(::Graphics::Shape* __zz_cib_obj) {
		delete __zz_cib_obj;
	}
	std::uint32_t __zz_cib_decl __zz_cib_get_class_id_6(::Graphics::Shape* __zz_cib_obj) {
		static bool classIdRepoPopulated = false;
		if (!classIdRepoPopulated) {
			__zz_cib_gClassIdRepo[std::type_index(typeid(::Graphics::Circle))] = __zz_cib_::Graphics::Circle::__zz_cib_classid;
			__zz_cib_gClassIdRepo[std::type_index(typeid(::Graphics::Composite))] = __zz_cib_::Graphics::Composite::__zz_cib_classid;
			__zz_cib_gClassIdRepo[std::type_index(typeid(::Graphics::Ellipse))] = __zz_cib_::Graphics::Ellipse::__zz_cib_classid;
			__zz_cib_gClassIdRepo[std::type_index(typeid(::Graphics::Rectangle))] = __zz_cib_::Graphics::Rectangle::__zz_cib_classid;
			classIdRepoPopulated = true;
		}
		return __zz_cib_gClassIdRepo[std::type_index(typeid(*__zz_cib_obj))];
	}
	void __zz_cib_decl __zz_cib_release_proxy_7(::Graphics::Shape* __zz_cib_obj) {
		auto unknownProxy = dynamic_cast<__zz_cib_::Graphics::Shape::__zz_cib_GenericProxy::Shape*>(__zz_cib_obj);
		if (unknownProxy)
			unknownProxy->__zz_cib_release_proxy();
	}
}}}

namespace __zz_cib_ { namespace Graphics { namespace Shape {
	__zz_cib_MethodTable __zz_cib_GetMethodTable() {
		static const __zz_cib_MethodTableHeader tableHeader = { sizeof(__zz_cib_MethodTableHeader), 7 };
		static const __zz_cib_MethodEntry methodTable[] = {
			reinterpret_cast<__zz_cib_MethodEntry> (&tableHeader),
			reinterpret_cast<__zz_cib_MethodEntry> (&__zz_cib_new_1),
			reinterpret_cast<__zz_cib_MethodEntry> (&Area_2),
			reinterpret_cast<__zz_cib_MethodEntry> (&Perimeter_3),
			reinterpret_cast<__zz_cib_MethodEntry> (&Draw_4),
			reinterpret_cast<__zz_cib_MethodEntry> (&__zz_cib_delete_5),
			reinterpret_cast<__zz_cib_MethodEntry> (&__zz_cib_get_class_id_6),
			reinterpret_cast<__zz_cib_MethodEntry> (&__zz_cib_release_proxy_7)
		};
		return methodTable;
	}
}}}
