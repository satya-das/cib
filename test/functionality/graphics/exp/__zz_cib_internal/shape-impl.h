#include "__zz_cib_Graphics-ids.h"
#include "__zz_cib_Graphics-helper.h"
#include "__zz_cib_Graphics-handle-helper.h"

namespace __zz_cib_ { namespace Graphics { namespace Shape {
	class __zz_cib_Helper : public __zz_cib_::__zz_cib_Helper
		, public __zz_cib_::__zz_cib_HandleHelper<::Graphics::Shape, __zz_cib_Helper> {
	private:
		friend class ::Graphics::Shape;
		static __zz_cib_MethodTable __zz_cib_get_proxy_method_table();

		static __zz_cib_HANDLE* __zz_cib_new_1(::Graphics::Shape* __zz_cib_proxy) {
			using __zz_cib_newProc = __zz_cib_HANDLE* (__zz_cib_decl *) (::Graphics::Shape*, __zz_cib_MethodTable);
			auto method = instance().getMethod<__zz_cib_newProc>(__zz_cib_::Graphics::Shape::__zz_cib_methodid::__zz_cib_new_1);
			return method(__zz_cib_proxy, __zz_cib_get_proxy_method_table());
		}
		static void __zz_cib_delete_5(__zz_cib_HANDLE* __zz_cib_obj) {
			if (__zz_cib_obj) {
				using __zz_cib_deleteProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*);
				auto method = instance().getMethod<__zz_cib_deleteProc>(__zz_cib_::Graphics::Shape::__zz_cib_methodid::__zz_cib_delete_5);
				return method(__zz_cib_obj);
			}
		}
		__zz_cib_Helper()
			: __zz_cib_::__zz_cib_Helper(
				__zz_cib_Graphics_GetMethodTable(
					__zz_cib_::__zz_cib_classid::__Graphics__Shape)) {}
		static const __zz_cib_Helper& instance() {
			static __zz_cib_Helper helper;
			return helper;
		}

		static std::uint32_t __zz_cib_get_class_id(__zz_cib_HANDLE* __zz_cib_obj) {
			using __zz_cib_get_class_idProc = std::uint32_t (__zz_cib_decl *) (__zz_cib_HANDLE*);
			auto method = instance().getMethod<__zz_cib_get_class_idProc>(__zz_cib_::Graphics::Shape::__zz_cib_methodid::__zz_cib_get_class_id_6);
			return method(__zz_cib_obj);
		}
	public:
		static __zz_cib_HANDLE* __zz_cib_handle(const ::Graphics::Shape* __zz_cib_obj) {
			return __zz_cib_obj->__zz_cib_h_;
		}
		static __zz_cib_HANDLE* __zz_cib_handle(const ::Graphics::Shape& __zz_cib_obj) {
			return __zz_cib_obj.__zz_cib_h_;
		}
		static ::Graphics::Shape* __zz_cib_create_proxy(__zz_cib_HANDLE* h);
		static __zz_cib_HANDLE* __zz_cib_release_handle(::Graphics::Shape* __zz_cib_obj) {
			auto h = __zz_cib_obj->__zz_cib_h_;
			__zz_cib_obj->__zz_cib_h_ = nullptr;
			return h;
		}
		static void __zz_cib_release_proxy(::Graphics::Shape* __zz_cib_obj) {
			if (__zz_cib_obj->__zz_cib_h_) {
				using __zz_cib_release_proxyProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*);
				auto method = instance().getMethod<__zz_cib_release_proxyProc>(__zz_cib_::Graphics::Shape::__zz_cib_methodid::__zz_cib_release_proxy_7);
				method(__zz_cib_obj->__zz_cib_h_);
			}
		}
	};
}}}

inline Graphics::Shape::Shape(__zz_cib_::__zz_cib_HANDLE* h)
	: __zz_cib_h_(h)
{}

inline Graphics::Shape::Shape(Shape&& rhs)
	: __zz_cib_h_(rhs.__zz_cib_h_)
{
	rhs.__zz_cib_h_ = nullptr;
}

inline Graphics::Shape::Shape()
	: Shape(__zz_cib_::Graphics::Shape::__zz_cib_Helper::__zz_cib_new_1(this))
{}

inline Graphics::Shape::~Shape() {
	__zz_cib_::Graphics::Shape::__zz_cib_Helper::__zz_cib_release_proxy(this);
	auto h = __zz_cib_::Graphics::Shape::__zz_cib_Helper::__zz_cib_release_handle(this);
	__zz_cib_::Graphics::Shape::__zz_cib_Helper::__zz_cib_delete_5(h);
}
