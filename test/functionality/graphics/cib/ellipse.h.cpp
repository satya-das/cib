#include "ellipse.h"

#include "__zz_cib_Graphics-decl.h"
#include "__zz_cib_Graphics-ids.h"
#include "__zz_cib_Graphics-mtable.h"
#include "__zz_cib_Graphics-proxy.h"

namespace __zz_cib_ { namespace Graphics { namespace Ellipse { namespace __zz_cib_GenericProxy {
	class Ellipse : public ::Graphics::Ellipse {
		__zz_cib_PROXY* __zz_cib_proxy;
		const __zz_cib_MethodTable* __zz_cib_mtbl;

		template<typename _ProcType> _ProcType getMethod(std::uint32_t procId) const {
			return reinterpret_cast<_ProcType>(__zz_cib_GetMTableEntry(__zz_cib_mtbl, procId));
		}
	public:
		Ellipse(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl, float Ox, float Oy, float a, float b)
			: ::Graphics::Ellipse::Ellipse(Ox, Oy, a, b)
			, __zz_cib_proxy(proxy)
			, __zz_cib_mtbl(mtbl)
		{}
		Ellipse(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl, const ::Graphics::Ellipse& __zz_cib_param0)
			: ::Graphics::Ellipse::Ellipse(__zz_cib_param0)
			, __zz_cib_proxy(proxy)
			, __zz_cib_mtbl(mtbl)
		{}
		float Area() const override {
			using AreaProc = float (__zz_cib_decl *) (__zz_cib_PROXY*);
			auto method = getMethod<AreaProc>(__zz_cib_GenericProxy::__zz_cib_methodid::Area_0);
			return method(__zz_cib_proxy);
		}
		float Perimeter() const override {
			using PerimeterProc = float (__zz_cib_decl *) (__zz_cib_PROXY*);
			auto method = getMethod<PerimeterProc>(__zz_cib_GenericProxy::__zz_cib_methodid::Perimeter_1);
			return method(__zz_cib_proxy);
		}
		void Draw(::Graphics::Context* ctx) const override {
			using DrawProc = void (__zz_cib_decl *) (__zz_cib_PROXY*, ::Graphics::Context* ctx);
			auto method = getMethod<DrawProc>(__zz_cib_GenericProxy::__zz_cib_methodid::Draw_2);
			return method(__zz_cib_proxy, ctx);
		}
		void __zz_cib_release_proxy() { __zz_cib_proxy = nullptr; }
	};
}}}}
namespace __zz_cib_ { namespace Graphics { namespace Ellipse {
	static ::Graphics::Ellipse* __zz_cib_decl __zz_cib_copy_0(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl, const ::Graphics::Ellipse& __zz_cib_param0) {
		return new __zz_cib_::Graphics::Ellipse::__zz_cib_GenericProxy::Ellipse(proxy, mtbl, __zz_cib_param0);
	}
	static void __zz_cib_decl __zz_cib_delete_1(::Graphics::Ellipse* __zz_cib_obj) {
		delete __zz_cib_obj;
	}
	static ::Graphics::Ellipse* __zz_cib_decl __zz_cib_new_2(__zz_cib_PROXY* proxy, const __zz_cib_MethodTable* mtbl, float Ox, float Oy, float a, float b) {
		return new __zz_cib_::Graphics::Ellipse::__zz_cib_GenericProxy::Ellipse(proxy, mtbl, Ox, Oy, a, b);
	}
	static float __zz_cib_decl Area_3(const ::Graphics::Ellipse* __zz_cib_obj) {
		return __zz_cib_obj->::Graphics::Ellipse::Area();
	}
	static float __zz_cib_decl Perimeter_4(const ::Graphics::Ellipse* __zz_cib_obj) {
		return __zz_cib_obj->::Graphics::Ellipse::Perimeter();
	}
	static void __zz_cib_decl Draw_5(const ::Graphics::Ellipse* __zz_cib_obj, ::Graphics::Context* ctx) {
		__zz_cib_obj->::Graphics::Ellipse::Draw(ctx);
	}
	::Graphics::Shape* __zz_cib_decl __zz_cib_cast_to___Graphics__Shape_6(::Graphics::Ellipse* __zz_cib_obj) {
		return __zz_cib_obj;
	}
	void __zz_cib_decl __zz_cib_release_proxy_7(::Graphics::Ellipse* __zz_cib_obj) {
		auto unknownProxy = dynamic_cast<__zz_cib_::Graphics::Ellipse::__zz_cib_GenericProxy::Ellipse*>(__zz_cib_obj);
		if (unknownProxy)
			unknownProxy->__zz_cib_release_proxy();
	}
}}}

namespace __zz_cib_ { namespace Graphics { namespace Ellipse {
	const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
		static const __zz_cib_MTableEntry methodArray[] = {
			reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_copy_0),
			reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_delete_1),
			reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_new_2),
			reinterpret_cast<__zz_cib_MTableEntry> (&Area_3),
			reinterpret_cast<__zz_cib_MTableEntry> (&Perimeter_4),
			reinterpret_cast<__zz_cib_MTableEntry> (&Draw_5),
			reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_cast_to___Graphics__Shape_6),
			reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_release_proxy_7)
		};
		static const __zz_cib_MethodTable methodTable = { methodArray, 7 };
		return &methodTable;
	}
}}}
