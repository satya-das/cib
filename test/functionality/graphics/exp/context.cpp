#include "context.h"
#include "log_context.h"

namespace __zz_cib_ { namespace Graphics { namespace Context { namespace __zz_cib_Generic {
	class Context : public ::Graphics::Context {
		__zz_cib_HANDLE* __zz_cib_h_;

		static __zz_cib_::__zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() {
			static __zz_cib_::__zz_cib_MethodTableHelper mtableHelper(__zz_cib_Graphics_GetMethodTable(
				__zz_cib_::__zz_cib_classid::__Graphics__Context));
			return mtableHelper;
		}
		Context(__zz_cib_HANDLE* h) : __zz_cib_h_(h) {}
	public:
		static ::Graphics::Context* __zz_cib_from_handle(__zz_cib_HANDLE* h) {
			return new Context(h);
		}
		void Line(float x1, float y1, float x2, float y2) override {
			using LineProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*, float x1, float y1, float x2, float y2);
			auto method = __zz_cib_get_mtable_helper().getMethod<LineProc>(__zz_cib_::Graphics::Context::__zz_cib_methodid::Line_2);
			return method(__zz_cib_h_, x1, y1, x2, y2);
		}
		void Rect(float l, float b, float r, float t) override {
			using RectProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*, float l, float b, float r, float t);
			auto method = __zz_cib_get_mtable_helper().getMethod<RectProc>(__zz_cib_::Graphics::Context::__zz_cib_methodid::Rect_3);
			return method(__zz_cib_h_, l, b, r, t);
		}
		void Circle(float cx, float cy, float r) override {
			using CircleProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*, float cx, float cy, float r);
			auto method = __zz_cib_get_mtable_helper().getMethod<CircleProc>(__zz_cib_::Graphics::Context::__zz_cib_methodid::Circle_4);
			return method(__zz_cib_h_, cx, cy, r);
		}
		void Ellipse(float cx, float cy, float a, float b) override {
			using EllipseProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*, float cx, float cy, float a, float b);
			auto method = __zz_cib_get_mtable_helper().getMethod<EllipseProc>(__zz_cib_::Graphics::Context::__zz_cib_methodid::Ellipse_5);
			return method(__zz_cib_h_, cx, cy, a, b);
		}
		~Context() override {
			if (!__zz_cib_h_) return;
			using __zz_cib_deleteProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*);
			auto method = __zz_cib_get_mtable_helper().getMethod<__zz_cib_deleteProc>(__zz_cib_::Graphics::Context::__zz_cib_methodid::__zz_cib_delete_6);
			method(__zz_cib_h_);
		}
	};
}}}}
::Graphics::Context* __zz_cib_::Graphics::Context::__zz_cib_Helper::__zz_cib_create_proxy(__zz_cib_HANDLE* h) {
	switch(__zz_cib_get_class_id(h)) {
	case __zz_cib_::__zz_cib_classid::__Graphics__LogContext:
		return __zz_cib_::Graphics::LogContext::__zz_cib_Helper::__zz_cib_from_handle(h);
	default:
		return ::__zz_cib_::Graphics::Context::__zz_cib_Generic::Context::__zz_cib_from_handle(h);
	}
}
namespace __zz_cib_ { namespace Graphics { namespace Context {
	static void __zz_cib_decl Line_1(::Graphics::Context* __zz_cib_obj, float x1, float y1, float x2, float y2) {
		__zz_cib_obj->Line(x1, y1, x2, y2);
	}
	static void __zz_cib_decl Rect_2(::Graphics::Context* __zz_cib_obj, float l, float b, float r, float t) {
		__zz_cib_obj->Rect(l, b, r, t);
	}
	static void __zz_cib_decl Circle_3(::Graphics::Context* __zz_cib_obj, float cx, float cy, float r) {
		__zz_cib_obj->Circle(cx, cy, r);
	}
	static void __zz_cib_decl Ellipse_4(::Graphics::Context* __zz_cib_obj, float cx, float cy, float a, float b) {
		__zz_cib_obj->Ellipse(cx, cy, a, b);
	}
	static void __zz_cib_decl __zz_cib_delete_5(::Graphics::Context* __zz_cib_obj) {
		delete __zz_cib_obj;
	}
}}}

namespace __zz_cib_ { namespace Graphics { namespace Context {
	static __zz_cib_MethodTable __zz_cib_GetMethodTable() {
		static const __zz_cib_MethodTableHeader tableHeader = { sizeof(__zz_cib_MethodTableHeader), 5 };
		static const __zz_cib_MethodEntry methodTable[] = {
			reinterpret_cast<__zz_cib_MethodEntry> (&tableHeader),
			reinterpret_cast<__zz_cib_MethodEntry> (&Line_1),
			reinterpret_cast<__zz_cib_MethodEntry> (&Rect_2),
			reinterpret_cast<__zz_cib_MethodEntry> (&Circle_3),
			reinterpret_cast<__zz_cib_MethodEntry> (&Ellipse_4),
			reinterpret_cast<__zz_cib_MethodEntry> (&__zz_cib_delete_5)
		};
		return methodTable;
	}
}}}

namespace __zz_cib_ { namespace Graphics { namespace Context {
	__zz_cib_MethodTable __zz_cib_Helper::__zz_cib_get_proxy_method_table() {
		return __zz_cib_GetMethodTable();
	}
}}}

