#include "__zz_cib_Graphics_ids.h"

#include "cib_GraphicsLib.h"
#include "log_context.h"

namespace __zz_cib_ {
	namespace Graphics {
		namespace LogContext { namespace __zz_cib_UnknownProxy {
			class LogContext : public ::Graphics::LogContext {
				__zz_cib_::PROXY* __zz_cib_proxy;
				__zz_cib_::MethodTable __zz_cib_mtbl;

			public:
				LogContext(__zz_cib_::PROXY* proxy, __zz_cib_::MethodTable mtbl)
					: ::Graphics::LogContext::LogContext()
					, __zz_cib_proxy(proxy)
					, __zz_cib_mtbl(mtbl)
				{}
				void Line(float x1, float y1, float x2, float y2) override {
					using LineProc = void (__zz_cib_decl *) (__zz_cib_::PROXY*, float x1, float y1, float x2, float y2);
					auto proc = (LineProc) __zz_cib_mtbl[__zz_cib_::Graphics::LogContext::__zz_cib_UnknownProxy::__zz_cib_methodid::Line_1];
					return proc(__zz_cib_proxy, x1, y1, x2, y2);
				}
				void Rect(float l, float b, float r, float t) override {
					using RectProc = void (__zz_cib_decl *) (__zz_cib_::PROXY*, float l, float b, float r, float t);
					auto proc = (RectProc) __zz_cib_mtbl[__zz_cib_::Graphics::LogContext::__zz_cib_UnknownProxy::__zz_cib_methodid::Rect_2];
					return proc(__zz_cib_proxy, l, b, r, t);
				}
				void Circle(float cx, float cy, float r) override {
					using CircleProc = void (__zz_cib_decl *) (__zz_cib_::PROXY*, float cx, float cy, float r);
					auto proc = (CircleProc) __zz_cib_mtbl[__zz_cib_::Graphics::LogContext::__zz_cib_UnknownProxy::__zz_cib_methodid::Circle_3];
					return proc(__zz_cib_proxy, cx, cy, r);
				}
				void __zz_cib_release_proxy() { __zz_cib_proxy = nullptr; }
			};
		}}
		namespace LogContext {
			::Graphics::LogContext* __zz_cib_decl __zz_cib_new_1(__zz_cib_::PROXY* proxy, __zz_cib_::MethodTable mtbl) {
				return new __zz_cib_::Graphics::LogContext::__zz_cib_UnknownProxy::LogContext(proxy, mtbl);
			}
			void __zz_cib_decl __zz_cib_delete_2(::Graphics::LogContext* __zz_cib_obj) {
				delete __zz_cib_obj;
			}
			void __zz_cib_decl Line_3(::Graphics::LogContext* __zz_cib_obj, float x1, float y1, float x2, float y2) {
				__zz_cib_obj->::Graphics::LogContext::Line(x1, y1, x2, y2);
			}
			void __zz_cib_decl Rect_4(::Graphics::LogContext* __zz_cib_obj, float l, float b, float r, float t) {
				__zz_cib_obj->::Graphics::LogContext::Rect(l, b, r, t);
			}
			void __zz_cib_decl Circle_5(::Graphics::LogContext* __zz_cib_obj, float cx, float cy, float r) {
				__zz_cib_obj->::Graphics::LogContext::Circle(cx, cy, r);
			}
			::Graphics::Context* __zz_cib_decl __zz_cib_cast_to___Graphics__Context_6(::Graphics::LogContext* __zz_cib_obj) {
				return __zz_cib_obj;
			}
			void __zz_cib_decl __zz_cib_release_proxy_7(::Graphics::LogContext* __zz_cib_obj) {
				auto unknownProxy = dynamic_cast<__zz_cib_::Graphics::LogContext::__zz_cib_UnknownProxy::LogContext*>(__zz_cib_obj);
				if (unknownProxy)
					unknownProxy->__zz_cib_release_proxy();
			}
		}
	}
}
namespace __zz_cib_ { namespace Graphics { namespace LogContext {
	using MethodEntry = void(*)();
	using MethodTable = const MethodEntry*;
	MethodTable GetMethodTable()
	{
		static const MethodTableHeader tableHeader = { sizeof(MethodTableHeader), 7 };
		static const MethodEntry methodTable[] = {
			(MethodEntry) &tableHeader,
			(MethodEntry) &__zz_cib_new_1,
			(MethodEntry) &__zz_cib_delete_2,
			(MethodEntry) &Line_3,
			(MethodEntry) &Rect_4,
			(MethodEntry) &Circle_5,
			(MethodEntry) &__zz_cib_cast_to___Graphics__Context_6,
			(MethodEntry) &__zz_cib_release_proxy_7
		};
		return methodTable;
	}
}}}
