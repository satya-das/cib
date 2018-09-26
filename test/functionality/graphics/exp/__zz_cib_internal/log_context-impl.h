#include "__zz_cib_Graphics-ids.h"
#include "__zz_cib_Graphics-mtable-helper.h"
#include "__zz_cib_Graphics-handle-helper.h"

namespace __zz_cib_ { namespace Graphics { namespace LogContext {
	class __zz_cib_Helper : public __zz_cib_::__zz_cib_MethodTableHelper
		, public __zz_cib_::__zz_cib_HandleHelper<::Graphics::LogContext, __zz_cib_Helper> {
	private:
		friend class ::Graphics::LogContext;
		friend class __zz_cib_::__zz_cib_HandleHelper<::Graphics::LogContext, __zz_cib_Helper>;
		static __zz_cib_MethodTable __zz_cib_get_proxy_method_table();

		static __zz_cib_HANDLE* __zz_cib_new_1(::Graphics::LogContext* __zz_cib_proxy, const __zz_cib_HANDLE& __zz_cib_param0) {
			using __zz_cib_newProc = __zz_cib_HANDLE* (__zz_cib_decl *) (::Graphics::LogContext*, __zz_cib_MethodTable, const __zz_cib_HANDLE& __zz_cib_param0);
			auto method = instance().getMethod<__zz_cib_newProc>(__zz_cib_::Graphics::LogContext::__zz_cib_methodid::__zz_cib_new_1);
			return method(__zz_cib_proxy, __zz_cib_get_proxy_method_table(), __zz_cib_param0);
		}
		static __zz_cib_HANDLE* __zz_cib_new_2(::Graphics::LogContext* __zz_cib_proxy) {
			using __zz_cib_newProc = __zz_cib_HANDLE* (__zz_cib_decl *) (::Graphics::LogContext*, __zz_cib_MethodTable);
			auto method = instance().getMethod<__zz_cib_newProc>(__zz_cib_::Graphics::LogContext::__zz_cib_methodid::__zz_cib_new_2);
			return method(__zz_cib_proxy, __zz_cib_get_proxy_method_table());
		}
		static void __zz_cib_delete_3(__zz_cib_HANDLE* __zz_cib_obj) {
			if (__zz_cib_obj) {
				using __zz_cib_deleteProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*);
				auto method = instance().getMethod<__zz_cib_deleteProc>(__zz_cib_::Graphics::LogContext::__zz_cib_methodid::__zz_cib_delete_3);
				return method(__zz_cib_obj);
			}
		}
		static void Line_4(__zz_cib_HANDLE* __zz_cib_obj, float x1, float y1, float x2, float y2) {
			using LineProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*, float x1, float y1, float x2, float y2);
			auto method = instance().getMethod<LineProc>(__zz_cib_::Graphics::LogContext::__zz_cib_methodid::Line_4);
			return method(__zz_cib_obj, x1, y1, x2, y2);
		}
		static void Rect_5(__zz_cib_HANDLE* __zz_cib_obj, float l, float b, float r, float t) {
			using RectProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*, float l, float b, float r, float t);
			auto method = instance().getMethod<RectProc>(__zz_cib_::Graphics::LogContext::__zz_cib_methodid::Rect_5);
			return method(__zz_cib_obj, l, b, r, t);
		}
		static void Circle_6(__zz_cib_HANDLE* __zz_cib_obj, float cx, float cy, float r) {
			using CircleProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*, float cx, float cy, float r);
			auto method = instance().getMethod<CircleProc>(__zz_cib_::Graphics::LogContext::__zz_cib_methodid::Circle_6);
			return method(__zz_cib_obj, cx, cy, r);
		}
		static void Ellipse_7(__zz_cib_HANDLE* __zz_cib_obj, float cx, float cy, float a, float b) {
			using EllipseProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*, float cx, float cy, float a, float b);
			auto method = instance().getMethod<EllipseProc>(__zz_cib_::Graphics::LogContext::__zz_cib_methodid::Ellipse_7);
			return method(__zz_cib_obj, cx, cy, a, b);
		}
		static __zz_cib_HANDLE* __zz_cib_cast_to___Graphics__Context_8(__zz_cib_HANDLE* __zz_cib_obj) {
			using __zz_cib_cast_to___Graphics__ContextProc = __zz_cib_HANDLE* (__zz_cib_decl *) (__zz_cib_HANDLE* h);
			auto method = instance().getMethod<__zz_cib_cast_to___Graphics__ContextProc>(__zz_cib_::Graphics::LogContext::__zz_cib_methodid::__zz_cib_cast_to___Graphics__Context_8);
			return method(__zz_cib_obj);
		}
		__zz_cib_Helper()
			: __zz_cib_::__zz_cib_MethodTableHelper(
				__zz_cib_Graphics_GetMethodTable(
					__zz_cib_::Graphics::__zz_cib_classid::__Graphics__LogContext)) {}
		static const __zz_cib_Helper& instance() {
			static __zz_cib_Helper helper;
			return helper;
		}

		static ::Graphics::LogContext* __zz_cib_create_proxy(__zz_cib_HANDLE* h) {
			return new ::Graphics::LogContext(h);
		}
	public:
		static __zz_cib_HANDLE* __zz_cib_release_handle(::Graphics::LogContext* __zz_cib_obj) {
			auto h = __zz_cib_obj->__zz_cib_h_;
			__zz_cib_obj->__zz_cib_h_ = nullptr;
			__zz_cib_::Graphics::Context::__zz_cib_Helper::__zz_cib_release_handle(__zz_cib_obj);
			return h;
		}
		static void __zz_cib_release_proxy(::Graphics::LogContext* __zz_cib_obj) {
			if (__zz_cib_obj->__zz_cib_h_) {
				using __zz_cib_release_proxyProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*);
				auto method = instance().getMethod<__zz_cib_release_proxyProc>(__zz_cib_::Graphics::LogContext::__zz_cib_methodid::__zz_cib_release_proxy_9);
				method(__zz_cib_obj->__zz_cib_h_);
			}
		}
	};
}}}

inline Graphics::LogContext::LogContext(__zz_cib_::__zz_cib_HANDLE* h)
	: ::Graphics::Context::Context(__zz_cib_::Graphics::LogContext::__zz_cib_Helper::__zz_cib_cast_to___Graphics__Context_8(h))
	, __zz_cib_h_(h)
{}

inline Graphics::LogContext::LogContext(LogContext&& rhs)
	: ::Graphics::Context::Context(std::move(rhs))
	, __zz_cib_h_(rhs.__zz_cib_h_)
{
	rhs.__zz_cib_h_ = nullptr;
}

inline Graphics::LogContext::LogContext(const ::Graphics::LogContext& __zz_cib_param0)
	: LogContext(__zz_cib_::Graphics::LogContext::__zz_cib_Helper::__zz_cib_new_1(this, *__zz_cib_::Graphics::LogContext::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

inline Graphics::LogContext::LogContext()
	: LogContext(__zz_cib_::Graphics::LogContext::__zz_cib_Helper::__zz_cib_new_2(this))
{}

inline Graphics::LogContext::~LogContext() {
	__zz_cib_::Graphics::LogContext::__zz_cib_Helper::__zz_cib_release_proxy(this);
	auto h = __zz_cib_::Graphics::LogContext::__zz_cib_Helper::__zz_cib_release_handle(this);
	__zz_cib_::Graphics::LogContext::__zz_cib_Helper::__zz_cib_delete_3(h);
}

inline void Graphics::LogContext::Line(float x1, float y1, float x2, float y2) {
	__zz_cib_::Graphics::LogContext::__zz_cib_Helper::Line_4(__zz_cib_h_, x1, y1, x2, y2);
}

inline void Graphics::LogContext::Rect(float l, float b, float r, float t) {
	__zz_cib_::Graphics::LogContext::__zz_cib_Helper::Rect_5(__zz_cib_h_, l, b, r, t);
}

inline void Graphics::LogContext::Circle(float cx, float cy, float r) {
	__zz_cib_::Graphics::LogContext::__zz_cib_Helper::Circle_6(__zz_cib_h_, cx, cy, r);
}

inline void Graphics::LogContext::Ellipse(float cx, float cy, float a, float b) {
	__zz_cib_::Graphics::LogContext::__zz_cib_Helper::Ellipse_7(__zz_cib_h_, cx, cy, a, b);
}
