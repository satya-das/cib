#include "__zz_cib_Graphics-ids.h"
#include "__zz_cib_Graphics.h"
#include "context.h"
#include "log_context.h"

#include <typeinfo>
#include <typeindex>
#include <cstdint>
#include <unordered_map>

extern std::unordered_map<std::type_index, std::uint32_t> __zz_cib_gClassIdRepo;

namespace __zz_cib_ { namespace Graphics { namespace Context { namespace __zz_cib_UnknownProxy {
	class Context : public ::Graphics::Context {
		__zz_cib_PROXY* __zz_cib_proxy;
		__zz_cib_MethodTable __zz_cib_mtbl;

		template<typename _ProcType> _ProcType getProc(std::uint32_t procId) const {
			return reinterpret_cast<_ProcType>(__zz_cib_GetMethodEntry(__zz_cib_mtbl, procId));
		}
	public:
		void Line(float x1, float y1, float x2, float y2) override {
			using LineProc = void (__zz_cib_decl *) (__zz_cib_PROXY*, float x1, float y1, float x2, float y2);
			auto proc = getProc<LineProc>(__zz_cib_::Graphics::Context::__zz_cib_UnknownProxy::__zz_cib_methodid::Line_1);
			return proc(__zz_cib_proxy, x1, y1, x2, y2);
		}
		void Rect(float l, float b, float r, float t) override {
			using RectProc = void (__zz_cib_decl *) (__zz_cib_PROXY*, float l, float b, float r, float t);
			auto proc = getProc<RectProc>(__zz_cib_::Graphics::Context::__zz_cib_UnknownProxy::__zz_cib_methodid::Rect_2);
			return proc(__zz_cib_proxy, l, b, r, t);
		}
		void Circle(float cx, float cy, float r) override {
			using CircleProc = void (__zz_cib_decl *) (__zz_cib_PROXY*, float cx, float cy, float r);
			auto proc = getProc<CircleProc>(__zz_cib_::Graphics::Context::__zz_cib_UnknownProxy::__zz_cib_methodid::Circle_3);
			return proc(__zz_cib_proxy, cx, cy, r);
		}
		void Ellipse(float cx, float cy, float a, float b) override {
			using EllipseProc = void (__zz_cib_decl *) (__zz_cib_PROXY*, float cx, float cy, float a, float b);
			auto proc = getProc<EllipseProc>(__zz_cib_::Graphics::Context::__zz_cib_UnknownProxy::__zz_cib_methodid::Ellipse_4);
			return proc(__zz_cib_proxy, cx, cy, a, b);
		}
		~Context() override {
			if (__zz_cib_proxy) {
				using __zz_cib_deleteProc = void (__zz_cib_decl *) (__zz_cib_PROXY*);
				auto proc = getProc<__zz_cib_deleteProc>(__zz_cib_::Graphics::Context::__zz_cib_UnknownProxy::__zz_cib_methodid::__zz_cib_delete_5);
				proc(__zz_cib_proxy);
			}
		}
		Context(__zz_cib_PROXY* proxy, __zz_cib_MethodTable mtbl)
			: ::Graphics::Context::Context()
			, __zz_cib_proxy(proxy)
			, __zz_cib_mtbl(mtbl)
		{}
		void __zz_cib_release_proxy() { __zz_cib_proxy = nullptr; }
	};
}}}}
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
	static ::Graphics::Context* __zz_cib_decl __zz_cib_new_6(__zz_cib_PROXY* proxy, __zz_cib_MethodTable mtbl) {
		return new __zz_cib_::Graphics::Context::__zz_cib_UnknownProxy::Context(proxy, mtbl);
	}
	std::uint32_t __zz_cib_decl __zz_cib_get_class_id_7(::Graphics::Context* __zz_cib_obj) {
		static bool classIdRepoPopulated = false;
		if (!classIdRepoPopulated) {
			__zz_cib_gClassIdRepo[std::type_index(typeid(::Graphics::LogContext))] =  __zz_cib_::__zz_cib_classid::__Graphics__LogContext;
			classIdRepoPopulated = true;
		}
		return __zz_cib_gClassIdRepo[std::type_index(typeid(*__zz_cib_obj))];
	}
	void __zz_cib_decl __zz_cib_release_proxy_8(::Graphics::Context* __zz_cib_obj) {
		auto unknownProxy = dynamic_cast<__zz_cib_::Graphics::Context::__zz_cib_UnknownProxy::Context*>(__zz_cib_obj);
		if (unknownProxy)
			unknownProxy->__zz_cib_release_proxy();
	}
}}}

namespace __zz_cib_ { namespace Graphics { namespace Context {
	__zz_cib_MethodTable __zz_cib_GetMethodTable() {
		static const __zz_cib_MethodTableHeader tableHeader = { sizeof(__zz_cib_MethodTableHeader), 8 };
		static const __zz_cib_MethodEntry methodTable[] = {
			reinterpret_cast<__zz_cib_MethodEntry> (&tableHeader),
			reinterpret_cast<__zz_cib_MethodEntry> (&Line_1),
			reinterpret_cast<__zz_cib_MethodEntry> (&Rect_2),
			reinterpret_cast<__zz_cib_MethodEntry> (&Circle_3),
			reinterpret_cast<__zz_cib_MethodEntry> (&Ellipse_4),
			reinterpret_cast<__zz_cib_MethodEntry> (&__zz_cib_delete_5),
			reinterpret_cast<__zz_cib_MethodEntry> (&__zz_cib_new_6),
			reinterpret_cast<__zz_cib_MethodEntry> (&__zz_cib_get_class_id_7),
			reinterpret_cast<__zz_cib_MethodEntry> (&__zz_cib_release_proxy_8)
		};
		return methodTable;
	}
}}}
