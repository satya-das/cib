#include "__zz_cib_Graphics_ids.h"

#include "cib_GraphicsLib.h"
#include "context_log.h"

namespace __zz_cib_ {
	namespace Graphics {
		namespace ContextLogger { namespace __zz_cib_UnknownProxy {
			class ContextLogger : public ::Graphics::ContextLogger {
				__zz_cib_::PROXY* __zz_cib_proxy;
				__zz_cib_::MethodTable __zz_cib_mtbl;

			public:
				ContextLogger(__zz_cib_::PROXY* proxy, __zz_cib_::MethodTable mtbl)
					: ::Graphics::ContextLogger::ContextLogger()
					, __zz_cib_proxy(proxy)
					, __zz_cib_mtbl(mtbl)
				{}
				void Move(float x, float y) override {
					using MoveProc = void (__zz_cib_decl *) (__zz_cib_::PROXY*, float x, float y);
					auto proc = (MoveProc) __zz_cib_mtbl[__zz_cib_::Graphics::ContextLogger::__zz_cib_UnknownProxy::__zz_cib_methodid::Move_1];
					return proc(__zz_cib_proxy, x, y);
				}
				void Line(float x, float y) override {
					using LineProc = void (__zz_cib_decl *) (__zz_cib_::PROXY*, float x, float y);
					auto proc = (LineProc) __zz_cib_mtbl[__zz_cib_::Graphics::ContextLogger::__zz_cib_UnknownProxy::__zz_cib_methodid::Line_2];
					return proc(__zz_cib_proxy, x, y);
				}
				void Curve(float x1, float y1, float x2, float y2, float x3, float y3) override {
					using CurveProc = void (__zz_cib_decl *) (__zz_cib_::PROXY*, float x1, float y1, float x2, float y2, float x3, float y3);
					auto proc = (CurveProc) __zz_cib_mtbl[__zz_cib_::Graphics::ContextLogger::__zz_cib_UnknownProxy::__zz_cib_methodid::Curve_3];
					return proc(__zz_cib_proxy, x1, y1, x2, y2, x3, y3);
				}
				void Close() override {
					using CloseProc = void (__zz_cib_decl *) (__zz_cib_::PROXY*);
					auto proc = (CloseProc) __zz_cib_mtbl[__zz_cib_::Graphics::ContextLogger::__zz_cib_UnknownProxy::__zz_cib_methodid::Close_4];
					return proc(__zz_cib_proxy);
				}
				void __zz_cib_release_proxy() { __zz_cib_proxy = nullptr; }
			};
		}}
		namespace ContextLogger {
			::Graphics::ContextLogger* __zz_cib_decl __zz_cib_new_1(__zz_cib_::PROXY* proxy, __zz_cib_::MethodTable mtbl) {
				return new __zz_cib_::Graphics::ContextLogger::__zz_cib_UnknownProxy::ContextLogger(proxy, mtbl);
			}
			void __zz_cib_decl __zz_cib_delete_2(::Graphics::ContextLogger* __zz_cib_obj) {
				delete __zz_cib_obj;
			}
			void __zz_cib_decl Move_3(::Graphics::ContextLogger* __zz_cib_obj, float x, float y) {
				__zz_cib_obj->::Graphics::ContextLogger::Move(x, y);
			}
			void __zz_cib_decl Line_4(::Graphics::ContextLogger* __zz_cib_obj, float x, float y) {
				__zz_cib_obj->::Graphics::ContextLogger::Line(x, y);
			}
			void __zz_cib_decl Curve_5(::Graphics::ContextLogger* __zz_cib_obj, float x1, float y1, float x2, float y2, float x3, float y3) {
				__zz_cib_obj->::Graphics::ContextLogger::Curve(x1, y1, x2, y2, x3, y3);
			}
			void __zz_cib_decl Close_6(::Graphics::ContextLogger* __zz_cib_obj) {
				__zz_cib_obj->::Graphics::ContextLogger::Close();
			}
			::Graphics::Context* __zz_cib_decl __zz_cib_cast_to___Graphics__Context_7(::Graphics::ContextLogger* __zz_cib_obj) {
				return __zz_cib_obj;
			}
			void __zz_cib_decl __zz_cib_release_proxy_8(::Graphics::ContextLogger* __zz_cib_obj) {
				auto unknownProxy = static_cast<__zz_cib_::Graphics::ContextLogger::__zz_cib_UnknownProxy::ContextLogger*>(__zz_cib_obj);
				unknownProxy->__zz_cib_release_proxy();
			}
		}
	}
}
namespace __zz_cib_ { namespace Graphics { namespace ContextLogger {
	using MethodEntry = void(*)();
	using MethodTable = const MethodEntry*;
	MethodTable GetMethodTable()
	{
		static const MethodTableHeader tableHeader = { sizeof(MethodTableHeader), 8 };
		static const MethodEntry methodTable[] = {
			(MethodEntry) &tableHeader,
			(MethodEntry) &__zz_cib_new_1,
			(MethodEntry) &__zz_cib_delete_2,
			(MethodEntry) &Move_3,
			(MethodEntry) &Line_4,
			(MethodEntry) &Curve_5,
			(MethodEntry) &Close_6,
			(MethodEntry) &__zz_cib_cast_to___Graphics__Context_7,
			(MethodEntry) &__zz_cib_release_proxy_8
		};
		return methodTable;
	}
}}}
