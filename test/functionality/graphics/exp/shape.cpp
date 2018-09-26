#include "circ.h"
#include "composite.h"
#include "ellipse.h"
#include "rect.h"
#include "shape.h"

namespace __zz_cib_ { namespace Graphics { namespace Shape { namespace __zz_cib_Generic {
	class Shape : public ::Graphics::Shape {
		__zz_cib_HANDLE* __zz_cib_h_;

		static __zz_cib_::__zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() {
			static __zz_cib_::__zz_cib_MethodTableHelper mtableHelper(__zz_cib_Graphics_GetMethodTable(
				__zz_cib_classid));
			return mtableHelper;
		}
		Shape(__zz_cib_HANDLE* h) : __zz_cib_h_(h) {}
	public:
		static ::Graphics::Shape* __zz_cib_from_handle(__zz_cib_HANDLE* h) {
			return new Shape(h);
		}
		float Area() const override {
			using AreaProc = float (__zz_cib_decl *) (__zz_cib_HANDLE*);
			auto method = __zz_cib_get_mtable_helper().getMethod<AreaProc>(__zz_cib_methodid::Area_2);
			return method(__zz_cib_h_);
		}
		float Perimeter() const override {
			using PerimeterProc = float (__zz_cib_decl *) (__zz_cib_HANDLE*);
			auto method = __zz_cib_get_mtable_helper().getMethod<PerimeterProc>(__zz_cib_methodid::Perimeter_3);
			return method(__zz_cib_h_);
		}
		void Draw(::Graphics::Context* ctx) const override {
			using DrawProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*, __zz_cib_HANDLE* ctx);
			auto method = __zz_cib_get_mtable_helper().getMethod<DrawProc>(__zz_cib_methodid::Draw_4);
			return method(__zz_cib_h_, __zz_cib_::Graphics::Context::__zz_cib_Helper::__zz_cib_handle(ctx));
		}
		~Shape() override {
			if (!__zz_cib_h_) return;
			using __zz_cib_deleteProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*);
			auto method = __zz_cib_get_mtable_helper().getMethod<__zz_cib_deleteProc>(__zz_cib_methodid::__zz_cib_delete_5);
			method(__zz_cib_h_);
		}
	};
}}}}
::Graphics::Shape* __zz_cib_::Graphics::Shape::__zz_cib_Helper::__zz_cib_create_proxy(__zz_cib_HANDLE* h) {
	switch(__zz_cib_get_class_id(h)) {
	case __zz_cib_::Graphics::Circle::__zz_cib_classid:
		return __zz_cib_::Graphics::Circle::__zz_cib_Helper::__zz_cib_from_handle(h);
	case __zz_cib_::Graphics::Composite::__zz_cib_classid:
		return __zz_cib_::Graphics::Composite::__zz_cib_Helper::__zz_cib_from_handle(h);
	case __zz_cib_::Graphics::Ellipse::__zz_cib_classid:
		return __zz_cib_::Graphics::Ellipse::__zz_cib_Helper::__zz_cib_from_handle(h);
	case __zz_cib_::Graphics::Rectangle::__zz_cib_classid:
		return __zz_cib_::Graphics::Rectangle::__zz_cib_Helper::__zz_cib_from_handle(h);
	default:
		return ::__zz_cib_::Graphics::Shape::__zz_cib_Generic::Shape::__zz_cib_from_handle(h);
	}
}
namespace __zz_cib_ { namespace Graphics { namespace Shape {
	static float __zz_cib_decl Area_1(const ::Graphics::Shape* __zz_cib_obj) {
		return __zz_cib_obj->Area();
	}
	static float __zz_cib_decl Perimeter_2(const ::Graphics::Shape* __zz_cib_obj) {
		return __zz_cib_obj->Perimeter();
	}
	static void __zz_cib_decl Draw_3(const ::Graphics::Shape* __zz_cib_obj, __zz_cib_HANDLE* ctx) {
		__zz_cib_obj->Draw(__zz_cib_::Graphics::Context::__zz_cib_Helper::__zz_cib_from_handle(ctx));
	}
	static void __zz_cib_decl __zz_cib_delete_4(::Graphics::Shape* __zz_cib_obj) {
		delete __zz_cib_obj;
	}
}}}

namespace __zz_cib_ { namespace Graphics { namespace Shape {
	static __zz_cib_MethodTable __zz_cib_GetMethodTable() {
		static const __zz_cib_MethodTableHeader tableHeader = { sizeof(__zz_cib_MethodTableHeader), 4 };
		static const __zz_cib_MethodEntry methodTable[] = {
			reinterpret_cast<__zz_cib_MethodEntry> (&tableHeader),
			reinterpret_cast<__zz_cib_MethodEntry> (&Area_1),
			reinterpret_cast<__zz_cib_MethodEntry> (&Perimeter_2),
			reinterpret_cast<__zz_cib_MethodEntry> (&Draw_3),
			reinterpret_cast<__zz_cib_MethodEntry> (&__zz_cib_delete_4)
		};
		return methodTable;
	}
}}}

namespace __zz_cib_ { namespace Graphics { namespace Shape {
	__zz_cib_MethodTable __zz_cib_Helper::__zz_cib_get_proxy_method_table() {
		return __zz_cib_GetMethodTable();
	}
}}}

