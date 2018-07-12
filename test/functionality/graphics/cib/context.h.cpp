#include "__zz_cib_Graphics_ids.h"

#include "cib_GraphicsLib.h"
#include "context.h"
#include "log_context.h"

#include <typeinfo>
#include <typeindex>
#include <cstdint>
#include <unordered_map>

extern std::unordered_map<std::type_index, std::uint32_t> __zz_cib_gClassIdRepo;

namespace __zz_cib_ {
	namespace Graphics {
		namespace Context { namespace __zz_cib_UnknownProxy {
			class Context : public ::Graphics::Context {
				__zz_cib_::PROXY* __zz_cib_proxy;
				__zz_cib_::MethodTable __zz_cib_mtbl;

			public:
				void Line(float x1, float y1, float x2, float y2) override {
					using LineProc = void (__zz_cib_decl *) (__zz_cib_::PROXY*, float x1, float y1, float x2, float y2);
					auto proc = (LineProc) __zz_cib_mtbl[__zz_cib_::Graphics::Context::__zz_cib_UnknownProxy::__zz_cib_methodid::Line_1];
					return proc(__zz_cib_proxy, x1, y1, x2, y2);
				}
				void Rect(float l, float b, float r, float t) override {
					using RectProc = void (__zz_cib_decl *) (__zz_cib_::PROXY*, float l, float b, float r, float t);
					auto proc = (RectProc) __zz_cib_mtbl[__zz_cib_::Graphics::Context::__zz_cib_UnknownProxy::__zz_cib_methodid::Rect_2];
					return proc(__zz_cib_proxy, l, b, r, t);
				}
				void Circle(float cx, float cy, float r) override {
					using CircleProc = void (__zz_cib_decl *) (__zz_cib_::PROXY*, float cx, float cy, float r);
					auto proc = (CircleProc) __zz_cib_mtbl[__zz_cib_::Graphics::Context::__zz_cib_UnknownProxy::__zz_cib_methodid::Circle_3];
					return proc(__zz_cib_proxy, cx, cy, r);
				}
				void Ellipse(float cx, float cy, float a, float b) override {
					using EllipseProc = void (__zz_cib_decl *) (__zz_cib_::PROXY*, float cx, float cy, float a, float b);
					auto proc = (EllipseProc) __zz_cib_mtbl[__zz_cib_::Graphics::Context::__zz_cib_UnknownProxy::__zz_cib_methodid::Ellipse_4];
					return proc(__zz_cib_proxy, cx, cy, a, b);
				}
				~Context() override {
					if (__zz_cib_proxy) {
						using __zz_cib_deleteProc = void (__zz_cib_decl *) (__zz_cib_::PROXY*);
						auto proc = (__zz_cib_deleteProc) __zz_cib_mtbl[__zz_cib_::Graphics::Context::__zz_cib_UnknownProxy::__zz_cib_methodid::__zz_cib_delete_5];
						proc(__zz_cib_proxy);
					}
				}
				Context(__zz_cib_::PROXY* proxy, __zz_cib_::MethodTable mtbl)
					: ::Graphics::Context::Context()
					, __zz_cib_proxy(proxy)
					, __zz_cib_mtbl(mtbl)
				{}
				void __zz_cib_release_proxy() { __zz_cib_proxy = nullptr; }
			};
		}}
		namespace Context {
			void __zz_cib_decl __zz_cib_delete_1(::Graphics::Context* __zz_cib_obj) {
				delete __zz_cib_obj;
			}
			::Graphics::Context* __zz_cib_decl __zz_cib_new_2(__zz_cib_::PROXY* proxy, __zz_cib_::MethodTable mtbl) {
				return new __zz_cib_::Graphics::Context::__zz_cib_UnknownProxy::Context(proxy, mtbl);
			}
			std::uint32_t __zz_cib_decl __zz_cib_get_class_id_3(::Graphics::Context* __zz_cib_obj) {
				static bool classIdRepoPopulated = false;
				if (!classIdRepoPopulated) {
					__zz_cib_gClassIdRepo[std::type_index(typeid(::Graphics::LogContext))] =  __zz_cib_::GraphicsLib::__zz_cib_classid::__Graphics__LogContext;
					classIdRepoPopulated = true;
				}
				return __zz_cib_gClassIdRepo[std::type_index(typeid(*__zz_cib_obj))];
			}
			void __zz_cib_decl __zz_cib_release_proxy_4(::Graphics::Context* __zz_cib_obj) {
				auto unknownProxy = dynamic_cast<__zz_cib_::Graphics::Context::__zz_cib_UnknownProxy::Context*>(__zz_cib_obj);
				if (unknownProxy)
					unknownProxy->__zz_cib_release_proxy();
			}
		}
	}
}
namespace __zz_cib_ { namespace Graphics { namespace Context {
	using MethodEntry = void(*)();
	using MethodTable = const MethodEntry*;
	MethodTable GetMethodTable()
	{
		static const MethodTableHeader tableHeader = { sizeof(MethodTableHeader), 4 };
		static const MethodEntry methodTable[] = {
			(MethodEntry) &tableHeader,
			(MethodEntry) &__zz_cib_delete_1,
			(MethodEntry) &__zz_cib_new_2,
			(MethodEntry) &__zz_cib_get_class_id_3,
			(MethodEntry) &__zz_cib_release_proxy_4
		};
		return methodTable;
	}
}}}
