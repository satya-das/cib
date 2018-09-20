#include "__zz_cib_Graphics-ids.h"
#include "__zz_cib_Graphics-helper.h"
#include <cassert>

	namespace __zz_cib_ { namespace Graphics {
		namespace Context {
			class __zz_cib_Helper : public __zz_cib_::Graphics::__zz_cib_Helper {
			private:
				friend class ::Graphics::Context;
				static __zz_cib_MethodTable __zz_cib_get_proxy_method_table();

				static void __zz_cib_delete_5(__zz_cib_HANDLE* __zz_cib_obj) {
					if (__zz_cib_obj) {
						using __zz_cib_deleteProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*);
						auto proc = instance().getProc<__zz_cib_deleteProc>(__zz_cib_::Graphics::Context::__zz_cib_methodid::__zz_cib_delete_5);
						return proc(__zz_cib_obj);
					}
				}
				static __zz_cib_HANDLE* __zz_cib_new_6(::Graphics::Context* __zz_cib_proxy) {
					using __zz_cib_newProc = __zz_cib_HANDLE* (__zz_cib_decl *) (::Graphics::Context*, __zz_cib_MethodTable);
					auto proc = instance().getProc<__zz_cib_newProc>(__zz_cib_::Graphics::Context::__zz_cib_methodid::__zz_cib_new_6);
					return proc(__zz_cib_proxy, __zz_cib_get_proxy_method_table());
				}
				__zz_cib_Helper()
					: __zz_cib_::Graphics::__zz_cib_Helper(
						__zz_cib_Graphics_GetMethodTable(
							__zz_cib_::__zz_cib_classid::__Graphics__Context)) {}
				static const __zz_cib_Helper& instance() {
					static __zz_cib_Helper helper;
					return helper;
				}

				static std::uint32_t __zz_cib_get_class_id(__zz_cib_HANDLE* __zz_cib_obj) {
					using __zz_cib_get_class_idProc = std::uint32_t (__zz_cib_decl *) (__zz_cib_HANDLE*);
					auto proc = instance().getProc<__zz_cib_get_class_idProc>(__zz_cib_::Graphics::Context::__zz_cib_methodid::__zz_cib_get_class_id_7);
					return proc(__zz_cib_obj);
				}
			public:
				static __zz_cib_HANDLE* __zz_cib_handle(const ::Graphics::Context* __zz_cib_obj) {
					return __zz_cib_obj->__zz_cib_h_;
				}
				static __zz_cib_HANDLE* __zz_cib_handle(const ::Graphics::Context& __zz_cib_obj) {
					return __zz_cib_obj.__zz_cib_h_;
				}
				static ::Graphics::Context* __zz_cib_from_handle(__zz_cib_HANDLE* h);
				::Graphics::Context& __zz_cib_from_handle(__zz_cib_HANDLE& h) {
					return *__zz_cib_from_handle(&h);
				}
				::Graphics::Context const * __zz_cib_from_handle(const __zz_cib_HANDLE* h) {
					return __zz_cib_from_handle(const_cast<__zz_cib_HANDLE*>(h));
				}
				::Graphics::Context const & __zz_cib_from_handle(const __zz_cib_HANDLE& h) {
					return *__zz_cib_from_handle(const_cast<__zz_cib_HANDLE*>(&h));
				}
				static __zz_cib_HANDLE* __zz_cib_release_handle(::Graphics::Context* __zz_cib_obj) {
					auto h = __zz_cib_obj->__zz_cib_h_;
					__zz_cib_obj->__zz_cib_h_ = nullptr;
					return h;
				}
				static void __zz_cib_release_proxy(::Graphics::Context* __zz_cib_obj) {
					if (__zz_cib_obj->__zz_cib_h_) {
						using __zz_cib_release_proxyProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*);
						auto proc = instance().getProc<__zz_cib_release_proxyProc>(__zz_cib_::Graphics::Context::__zz_cib_methodid::__zz_cib_release_proxy_8);
						proc(__zz_cib_obj->__zz_cib_h_);
					}
				}
			};
		}}
	}

inline Graphics::Context::Context(__zz_cib_::__zz_cib_HANDLE* h)
	: __zz_cib_h_(h)
{}

inline Graphics::Context::Context(Context&& rhs)
	: __zz_cib_h_(rhs.__zz_cib_h_)
{
	rhs.__zz_cib_h_ = nullptr;
}

inline Graphics::Context::~Context() {
	__zz_cib_::Graphics::Context::__zz_cib_Helper::__zz_cib_release_proxy(this);
	auto h = __zz_cib_::Graphics::Context::__zz_cib_Helper::__zz_cib_release_handle(this);
	__zz_cib_::Graphics::Context::__zz_cib_Helper::__zz_cib_delete_5(h);
}

inline Graphics::Context::Context()
	: Context(__zz_cib_::Graphics::Context::__zz_cib_Helper::__zz_cib_new_6(this))
{}
