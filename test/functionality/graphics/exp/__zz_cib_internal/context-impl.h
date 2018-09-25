#include "__zz_cib_Graphics-ids.h"
#include "__zz_cib_Graphics-mtable-helper.h"
#include "__zz_cib_Graphics-handle-helper.h"

namespace __zz_cib_ { namespace Graphics { namespace Context {
	class __zz_cib_Helper : public __zz_cib_::__zz_cib_MethodTableHelper
		, public __zz_cib_::__zz_cib_HandleHelper<::Graphics::Context, __zz_cib_Helper> {
	private:
		friend class ::Graphics::Context;
		friend class __zz_cib_::__zz_cib_HandleHelper<::Graphics::Context, __zz_cib_Helper>;
		static __zz_cib_MethodTable __zz_cib_get_proxy_method_table();

		static __zz_cib_HANDLE* __zz_cib_new_1(::Graphics::Context* __zz_cib_proxy) {
			using __zz_cib_newProc = __zz_cib_HANDLE* (__zz_cib_decl *) (::Graphics::Context*, __zz_cib_MethodTable);
			auto method = instance().getMethod<__zz_cib_newProc>(__zz_cib_::Graphics::Context::__zz_cib_methodid::__zz_cib_new_1);
			return method(__zz_cib_proxy, __zz_cib_get_proxy_method_table());
		}
		static void __zz_cib_delete_6(__zz_cib_HANDLE* __zz_cib_obj) {
			if (__zz_cib_obj) {
				using __zz_cib_deleteProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*);
				auto method = instance().getMethod<__zz_cib_deleteProc>(__zz_cib_::Graphics::Context::__zz_cib_methodid::__zz_cib_delete_6);
				return method(__zz_cib_obj);
			}
		}
		__zz_cib_Helper()
			: __zz_cib_::__zz_cib_MethodTableHelper(
				__zz_cib_Graphics_GetMethodTable(
					__zz_cib_::__zz_cib_classid::__Graphics__Context)) {}
		static const __zz_cib_Helper& instance() {
			static __zz_cib_Helper helper;
			return helper;
		}

		static std::uint32_t __zz_cib_get_class_id(__zz_cib_HANDLE* __zz_cib_obj) {
			using __zz_cib_get_class_idProc = std::uint32_t (__zz_cib_decl *) (__zz_cib_HANDLE*);
			auto method = instance().getMethod<__zz_cib_get_class_idProc>(__zz_cib_::Graphics::Context::__zz_cib_methodid::__zz_cib_get_class_id_7);
			return method(__zz_cib_obj);
		}
		static ::Graphics::Context* __zz_cib_create_proxy(__zz_cib_HANDLE* h);
	public:
		static __zz_cib_HANDLE* __zz_cib_release_handle(::Graphics::Context* __zz_cib_obj) {
			auto h = __zz_cib_obj->__zz_cib_h_;
			__zz_cib_obj->__zz_cib_h_ = nullptr;
			return h;
		}
		static void __zz_cib_release_proxy(::Graphics::Context* __zz_cib_obj) {
			if (__zz_cib_obj->__zz_cib_h_) {
				using __zz_cib_release_proxyProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*);
				auto method = instance().getMethod<__zz_cib_release_proxyProc>(__zz_cib_::Graphics::Context::__zz_cib_methodid::__zz_cib_release_proxy_8);
				method(__zz_cib_obj->__zz_cib_h_);
			}
		}
	};
}}}

inline Graphics::Context::Context(__zz_cib_::__zz_cib_HANDLE* h)
	: __zz_cib_h_(h)
{}

inline Graphics::Context::Context(Context&& rhs)
	: __zz_cib_h_(rhs.__zz_cib_h_)
{
	rhs.__zz_cib_h_ = nullptr;
}

inline Graphics::Context::Context()
	: Context(__zz_cib_::Graphics::Context::__zz_cib_Helper::__zz_cib_new_1(this))
{}

inline Graphics::Context::~Context() {
	__zz_cib_::Graphics::Context::__zz_cib_Helper::__zz_cib_release_proxy(this);
	auto h = __zz_cib_::Graphics::Context::__zz_cib_Helper::__zz_cib_release_handle(this);
	__zz_cib_::Graphics::Context::__zz_cib_Helper::__zz_cib_delete_6(h);
}
