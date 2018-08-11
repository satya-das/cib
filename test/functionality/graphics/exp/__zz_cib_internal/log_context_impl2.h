#include "__zz_cib_Graphics_ids.h"
#include <cassert>

	namespace __zz_cib_ { namespace Graphics {
		namespace LogContext {
			class __zz_cib_Helper {
				friend class ::Graphics::LogContext;
				static __zz_cib_::MethodTable __zz_cib_get_proxy_method_table();

				static __zz_cib_::HANDLE* __zz_cib_new_1(::Graphics::LogContext* __zz_cib_proxy) {
					using __zz_cib_newProc = __zz_cib_::HANDLE* (__zz_cib_decl *) (::Graphics::LogContext*, __zz_cib_::MethodTable);
					auto proc = getProc<__zz_cib_newProc>(__zz_cib_::Graphics::LogContext::__zz_cib_methodid::__zz_cib_new_1);
					return proc(__zz_cib_proxy, __zz_cib_get_proxy_method_table());
				}
				static void __zz_cib_delete_2(__zz_cib_::HANDLE* __zz_cib_obj) {
					if (__zz_cib_obj) {
						using __zz_cib_deleteProc = void (__zz_cib_decl *) (__zz_cib_::HANDLE*);
						auto proc = getProc<__zz_cib_deleteProc>(__zz_cib_::Graphics::LogContext::__zz_cib_methodid::__zz_cib_delete_2);
						return proc(__zz_cib_obj);
					}
				}
				static void Line_3(__zz_cib_::HANDLE* __zz_cib_obj, float x1, float y1, float x2, float y2) {
					using LineProc = void (__zz_cib_decl *) (__zz_cib_::HANDLE*, float x1, float y1, float x2, float y2);
					auto proc = getProc<LineProc>(__zz_cib_::Graphics::LogContext::__zz_cib_methodid::Line_3);
					return proc(__zz_cib_obj, x1, y1, x2, y2);
				}
				static void Rect_4(__zz_cib_::HANDLE* __zz_cib_obj, float l, float b, float r, float t) {
					using RectProc = void (__zz_cib_decl *) (__zz_cib_::HANDLE*, float l, float b, float r, float t);
					auto proc = getProc<RectProc>(__zz_cib_::Graphics::LogContext::__zz_cib_methodid::Rect_4);
					return proc(__zz_cib_obj, l, b, r, t);
				}
				static void Circle_5(__zz_cib_::HANDLE* __zz_cib_obj, float cx, float cy, float r) {
					using CircleProc = void (__zz_cib_decl *) (__zz_cib_::HANDLE*, float cx, float cy, float r);
					auto proc = getProc<CircleProc>(__zz_cib_::Graphics::LogContext::__zz_cib_methodid::Circle_5);
					return proc(__zz_cib_obj, cx, cy, r);
				}
				static void Ellipse_6(__zz_cib_::HANDLE* __zz_cib_obj, float cx, float cy, float a, float b) {
					using EllipseProc = void (__zz_cib_decl *) (__zz_cib_::HANDLE*, float cx, float cy, float a, float b);
					auto proc = getProc<EllipseProc>(__zz_cib_::Graphics::LogContext::__zz_cib_methodid::Ellipse_6);
					return proc(__zz_cib_obj, cx, cy, a, b);
				}
				static __zz_cib_::HANDLE* __zz_cib_cast_to___Graphics__Context_7(__zz_cib_::HANDLE* __zz_cib_obj) {
					using __zz_cib_cast_to___Graphics__ContextProc = __zz_cib_::HANDLE* (__zz_cib_decl *) (__zz_cib_::HANDLE* h);
					auto proc = (__zz_cib_cast_to___Graphics__ContextProc) instance().mtbl[__zz_cib_::Graphics::LogContext::__zz_cib_methodid::__zz_cib_cast_to___Graphics__Context_7];
					return proc(__zz_cib_obj);
				}
			private:
				__zz_cib_::MethodTable mtbl;
				__zz_cib_Helper() {
					mtbl = __zz_cib_GraphicsLib_GetMethodTable(__zz_cib_::GraphicsLib::__zz_cib_classid::__Graphics__LogContext);
				}
				static const __zz_cib_Helper& instance() {
					static __zz_cib_Helper helper;
					return helper;
				}
				template<typename _ProcType> static _ProcType getProc(std::uint32_t procId) {
					return reinterpret_cast<_ProcType>(__zz_cib_GetMethodEntry(instance().mtbl, procId));
				}

			public:
				static __zz_cib_::HANDLE* __zz_cib_handle(const ::Graphics::LogContext* __zz_cib_obj) {
					return __zz_cib_obj->__zz_cib_h_;
				}
				static __zz_cib_::HANDLE* __zz_cib_handle(const ::Graphics::LogContext& __zz_cib_obj) {
					return __zz_cib_obj.__zz_cib_h_;
				}
				static ::Graphics::LogContext* __zz_cib_from_handle(__zz_cib_::HANDLE* h) {
					return new ::Graphics::LogContext(h);
				}
				::Graphics::LogContext& __zz_cib_from_handle(__zz_cib_::HANDLE& h) {
					return *__zz_cib_from_handle(&h);
				}
				::Graphics::LogContext const * __zz_cib_from_handle(const __zz_cib_::HANDLE* h) {
					return __zz_cib_from_handle(const_cast<__zz_cib_::HANDLE*>(h));
				}
				::Graphics::LogContext const & __zz_cib_from_handle(const __zz_cib_::HANDLE& h) {
					return *__zz_cib_from_handle(const_cast<__zz_cib_::HANDLE*>(&h));
				}
				static __zz_cib_::HANDLE* __zz_cib_release_handle(::Graphics::LogContext* __zz_cib_obj) {
					auto h = __zz_cib_obj->__zz_cib_h_;
					__zz_cib_obj->__zz_cib_h_ = nullptr;
					__zz_cib_::Graphics::Context::__zz_cib_Helper::__zz_cib_release_handle(__zz_cib_obj);
					return h;
				}
				static void __zz_cib_release_proxy(::Graphics::LogContext* __zz_cib_obj) {
					if (__zz_cib_obj->__zz_cib_h_) {
						using __zz_cib_release_proxyProc = void (__zz_cib_decl *) (__zz_cib_::HANDLE*);
						auto proc = (__zz_cib_release_proxyProc) instance().mtbl[__zz_cib_::Graphics::LogContext::__zz_cib_methodid::__zz_cib_release_proxy_8];
						proc(__zz_cib_obj->__zz_cib_h_);
					}
				}
			};
		}}
	}

inline Graphics::LogContext::LogContext(__zz_cib_::HANDLE* h)
	: ::Graphics::Context::Context(__zz_cib_::Graphics::LogContext::__zz_cib_Helper::__zz_cib_cast_to___Graphics__Context_7(h))
	, __zz_cib_h_(h)
{}

inline Graphics::LogContext::LogContext(LogContext&& rhs)
	: ::Graphics::Context::Context(std::move(rhs))
	, __zz_cib_h_(rhs.__zz_cib_h_)
{	rhs.__zz_cib_h_ = nullptr;
}

inline Graphics::LogContext::LogContext()
	: LogContext(__zz_cib_::Graphics::LogContext::__zz_cib_Helper::__zz_cib_new_1(this))
{}

inline Graphics::LogContext::~LogContext() {
	__zz_cib_::Graphics::LogContext::__zz_cib_Helper::__zz_cib_release_proxy(this);
	auto h = __zz_cib_::Graphics::LogContext::__zz_cib_Helper::__zz_cib_release_handle(this);
	__zz_cib_::Graphics::LogContext::__zz_cib_Helper::__zz_cib_delete_2(h);
}

inline void Graphics::LogContext::Line(float x1, float y1, float x2, float y2) {
	__zz_cib_::Graphics::LogContext::__zz_cib_Helper::Line_3(__zz_cib_h_, x1, y1, x2, y2);
}

inline void Graphics::LogContext::Rect(float l, float b, float r, float t) {
	__zz_cib_::Graphics::LogContext::__zz_cib_Helper::Rect_4(__zz_cib_h_, l, b, r, t);
}

inline void Graphics::LogContext::Circle(float cx, float cy, float r) {
	__zz_cib_::Graphics::LogContext::__zz_cib_Helper::Circle_5(__zz_cib_h_, cx, cy, r);
}

inline void Graphics::LogContext::Ellipse(float cx, float cy, float a, float b) {
	__zz_cib_::Graphics::LogContext::__zz_cib_Helper::Ellipse_6(__zz_cib_h_, cx, cy, a, b);
}