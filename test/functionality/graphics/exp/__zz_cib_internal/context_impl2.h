#include "__zz_cib_Graphics_ids.h"
#include <cassert>

	namespace __zz_cib_ { namespace Graphics {
		namespace Context { class __zz_cib_Helper {
			friend class ::Graphics::Context;
			static __zz_cib_::MethodTable __zz_cib_get_proxy_method_table();

			static void __zz_cib_delete_1(__zz_cib_::HANDLE* __zz_cib_obj) {
				if (__zz_cib_obj) {
					using __zz_cib_deleteProc = void (__zz_cib_decl *) (__zz_cib_::HANDLE*);
					auto proc = (__zz_cib_deleteProc) instance().mtbl[__zz_cib_::Graphics::Context::__zz_cib_methodid::__zz_cib_delete_1];
					return proc(__zz_cib_obj);
				}
			}
			static __zz_cib_::HANDLE* __zz_cib_new_2(::Graphics::Context* __zz_cib_proxy) {
				using __zz_cib_newProc = __zz_cib_::HANDLE* (__zz_cib_decl *) (::Graphics::Context*, __zz_cib_::MethodTable);
				auto proc = (__zz_cib_newProc) instance().mtbl[__zz_cib_::Graphics::Context::__zz_cib_methodid::__zz_cib_new_2];
				return proc(__zz_cib_proxy, __zz_cib_get_proxy_method_table());
			}
		private:
			__zz_cib_::MethodTable mtbl;
			__zz_cib_Helper() {
				mtbl = GraphicsLib_GetMethodTable(__zz_cib_::GraphicsLib::__zz_cib_classid::__Graphics__Context);
			}
			static const __zz_cib_Helper& instance() {
				static __zz_cib_Helper helper;
				return helper;
			}

			static std::uint32_t __zz_cib_get_class_id(__zz_cib_::HANDLE* __zz_cib_obj) {
				using __zz_cib_get_class_idProc = std::uint32_t (__zz_cib_decl *) (__zz_cib_::HANDLE*);
				auto proc = (__zz_cib_get_class_idProc) instance().mtbl[__zz_cib_::Graphics::Context::__zz_cib_methodid::__zz_cib_get_class_id_3];
				return proc(__zz_cib_obj);
			}
		public:
			static __zz_cib_::HANDLE* __zz_cib_handle(::Graphics::Context* __zz_cib_obj) {
				return __zz_cib_obj->__zz_cib_h_;
			}
			static ::Graphics::Context* __zz_cib_from_handle(__zz_cib_::HANDLE* h);
			static __zz_cib_::HANDLE* __zz_cib_release_handle(::Graphics::Context* __zz_cib_obj) {
				auto h = __zz_cib_obj->__zz_cib_h_;
				__zz_cib_obj->__zz_cib_h_ = nullptr;
				return h;
			}
			static void __zz_cib_release_proxy(::Graphics::Context* __zz_cib_obj) {
				if (__zz_cib_obj->__zz_cib_h_) {
					using __zz_cib_release_proxyProc = void (__zz_cib_decl *) (__zz_cib_::HANDLE*);
					auto proc = (__zz_cib_release_proxyProc) instance().mtbl[__zz_cib_::Graphics::Context::__zz_cib_methodid::__zz_cib_release_proxy_4];
					proc(__zz_cib_obj->__zz_cib_h_);
				}
			}
		};
	}}
}

inline Graphics::Context::Context(__zz_cib_::HANDLE* h)
	: __zz_cib_h_(h)
{}

inline Graphics::Context::~Context() {
	__zz_cib_::Graphics::Context::__zz_cib_Helper::__zz_cib_release_proxy(this);
	auto h = __zz_cib_::Graphics::Context::__zz_cib_Helper::__zz_cib_release_handle(this);
	__zz_cib_::Graphics::Context::__zz_cib_Helper::__zz_cib_delete_1(h);
}

inline Graphics::Context::Context()
	: Context(__zz_cib_::Graphics::Context::__zz_cib_Helper::__zz_cib_new_2(this))
{}
