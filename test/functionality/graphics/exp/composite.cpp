#include "composite.h"
#include "shape.h"

namespace __zz_cib_ { namespace Graphics { namespace Composite { namespace __zz_cib_Generic {
	class Composite : public ::Graphics::Composite {
		__zz_cib_HANDLE* __zz_cib_h_;

		static __zz_cib_::__zz_cib_MethodTableHelper& __zz_cib_get_mtable_helper() {
			static __zz_cib_::__zz_cib_MethodTableHelper mtableHelper(__zz_cib_Graphics_GetMethodTable(
				__zz_cib_classid));
			return mtableHelper;
		}
		Composite(__zz_cib_HANDLE* h) : __zz_cib_h_(h) {}
	public:
		static ::Graphics::Composite* __zz_cib_from_handle(__zz_cib_HANDLE* h) {
			return new Composite(h);
		}
		float Area() const override {
			using AreaProc = float (__zz_cib_decl *) (__zz_cib_HANDLE*);
			auto method = __zz_cib_get_mtable_helper().getMethod<AreaProc>(__zz_cib_methodid::Area_6);
			return method(__zz_cib_h_);
		}
		float Perimeter() const override {
			using PerimeterProc = float (__zz_cib_decl *) (__zz_cib_HANDLE*);
			auto method = __zz_cib_get_mtable_helper().getMethod<PerimeterProc>(__zz_cib_methodid::Perimeter_7);
			return method(__zz_cib_h_);
		}
		void Draw(::Graphics::Context* ctx) const override {
			using DrawProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*, __zz_cib_HANDLE* ctx);
			auto method = __zz_cib_get_mtable_helper().getMethod<DrawProc>(__zz_cib_methodid::Draw_8);
			return method(__zz_cib_h_, __zz_cib_::Graphics::Context::__zz_cib_Helper::__zz_cib_handle(ctx));
		}
	};
}}}}
::Graphics::Composite* __zz_cib_::Graphics::Composite::__zz_cib_Helper::__zz_cib_create_proxy(__zz_cib_HANDLE* h) {
	switch(__zz_cib_get_class_id(h)) {
	default:
		return ::__zz_cib_::Graphics::Composite::__zz_cib_Generic::Composite::__zz_cib_from_handle(h);
	}
}
namespace __zz_cib_ { namespace Graphics { namespace Composite {
	static float __zz_cib_decl Area_0(const ::Graphics::Composite* __zz_cib_obj) {
		return __zz_cib_obj->Area();
	}
	static float __zz_cib_decl Perimeter_1(const ::Graphics::Composite* __zz_cib_obj) {
		return __zz_cib_obj->Perimeter();
	}
	static void __zz_cib_decl Draw_2(const ::Graphics::Composite* __zz_cib_obj, __zz_cib_HANDLE* ctx) {
		__zz_cib_obj->Draw(__zz_cib_::Graphics::Context::__zz_cib_Helper::__zz_cib_from_handle(ctx));
	}
	static void __zz_cib_decl __zz_cib_delete_3(::Graphics::Composite* __zz_cib_obj) {
		delete __zz_cib_obj;
	}
}}}

namespace __zz_cib_ { namespace Graphics { namespace Composite {
	static const __zz_cib_MethodTable* __zz_cib_GetMethodTable() {
		static const __zz_cib_MTableEntry methodArray[] = {
			reinterpret_cast<__zz_cib_MTableEntry> (&Area_0),
			reinterpret_cast<__zz_cib_MTableEntry> (&Perimeter_1),
			reinterpret_cast<__zz_cib_MTableEntry> (&Draw_2),
			reinterpret_cast<__zz_cib_MTableEntry> (&__zz_cib_delete_3)
		};
		static const __zz_cib_MethodTable methodTable = { methodArray, 3 };
		return &methodTable;
	}
}}}

namespace __zz_cib_ { namespace Graphics { namespace Composite {
	const __zz_cib_MethodTable* __zz_cib_Helper::__zz_cib_get_proxy_method_table() {
		return __zz_cib_GetMethodTable();
	}
}}}

