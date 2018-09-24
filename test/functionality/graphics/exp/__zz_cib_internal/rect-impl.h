#include "__zz_cib_Graphics-ids.h"
#include "__zz_cib_Graphics-mtable-helper.h"
#include "__zz_cib_Graphics-handle-helper.h"

namespace __zz_cib_ { namespace Graphics { namespace Rectangle {
	class __zz_cib_Helper : public __zz_cib_::__zz_cib_MethodTableHelper
		, public __zz_cib_::__zz_cib_HandleHelper<::Graphics::Rectangle, __zz_cib_Helper> {
	private:
		friend class ::Graphics::Rectangle;
		static __zz_cib_MethodTable __zz_cib_get_proxy_method_table();

		static __zz_cib_HANDLE* __zz_cib_new_1(::Graphics::Rectangle* __zz_cib_proxy, const __zz_cib_HANDLE& __zz_cib_param0) {
			using __zz_cib_newProc = __zz_cib_HANDLE* (__zz_cib_decl *) (::Graphics::Rectangle*, __zz_cib_MethodTable, const __zz_cib_HANDLE& __zz_cib_param0);
			auto method = instance().getMethod<__zz_cib_newProc>(__zz_cib_::Graphics::Rectangle::__zz_cib_methodid::__zz_cib_new_1);
			return method(__zz_cib_proxy, __zz_cib_get_proxy_method_table(), __zz_cib_param0);
		}
		static void __zz_cib_delete_2(__zz_cib_HANDLE* __zz_cib_obj) {
			if (__zz_cib_obj) {
				using __zz_cib_deleteProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*);
				auto method = instance().getMethod<__zz_cib_deleteProc>(__zz_cib_::Graphics::Rectangle::__zz_cib_methodid::__zz_cib_delete_2);
				return method(__zz_cib_obj);
			}
		}
		static __zz_cib_HANDLE* __zz_cib_new_3(::Graphics::Rectangle* __zz_cib_proxy, float left, float bottom, float right, float top) {
			using __zz_cib_newProc = __zz_cib_HANDLE* (__zz_cib_decl *) (::Graphics::Rectangle*, __zz_cib_MethodTable, float left, float bottom, float right, float top);
			auto method = instance().getMethod<__zz_cib_newProc>(__zz_cib_::Graphics::Rectangle::__zz_cib_methodid::__zz_cib_new_3);
			return method(__zz_cib_proxy, __zz_cib_get_proxy_method_table(), left, bottom, right, top);
		}
		static float Area_4(__zz_cib_HANDLE* __zz_cib_obj) {
			using AreaProc = float (__zz_cib_decl *) (__zz_cib_HANDLE*);
			auto method = instance().getMethod<AreaProc>(__zz_cib_::Graphics::Rectangle::__zz_cib_methodid::Area_4);
			return method(__zz_cib_obj);
		}
		static float Perimeter_5(__zz_cib_HANDLE* __zz_cib_obj) {
			using PerimeterProc = float (__zz_cib_decl *) (__zz_cib_HANDLE*);
			auto method = instance().getMethod<PerimeterProc>(__zz_cib_::Graphics::Rectangle::__zz_cib_methodid::Perimeter_5);
			return method(__zz_cib_obj);
		}
		static void Draw_6(__zz_cib_HANDLE* __zz_cib_obj, __zz_cib_HANDLE* ctx) {
			using DrawProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*, __zz_cib_HANDLE* ctx);
			auto method = instance().getMethod<DrawProc>(__zz_cib_::Graphics::Rectangle::__zz_cib_methodid::Draw_6);
			return method(__zz_cib_obj, ctx);
		}
		static __zz_cib_HANDLE* __zz_cib_cast_to___Graphics__Shape_7(__zz_cib_HANDLE* __zz_cib_obj) {
			using __zz_cib_cast_to___Graphics__ShapeProc = __zz_cib_HANDLE* (__zz_cib_decl *) (__zz_cib_HANDLE* h);
			auto method = instance().getMethod<__zz_cib_cast_to___Graphics__ShapeProc>(__zz_cib_::Graphics::Rectangle::__zz_cib_methodid::__zz_cib_cast_to___Graphics__Shape_7);
			return method(__zz_cib_obj);
		}
		__zz_cib_Helper()
			: __zz_cib_::__zz_cib_MethodTableHelper(
				__zz_cib_Graphics_GetMethodTable(
					__zz_cib_::__zz_cib_classid::__Graphics__Rectangle)) {}
		static const __zz_cib_Helper& instance() {
			static __zz_cib_Helper helper;
			return helper;
		}

		public:
			static __zz_cib_HANDLE* __zz_cib_handle(const ::Graphics::Rectangle* __zz_cib_obj) {
				return __zz_cib_obj->__zz_cib_h_;
			}
			static __zz_cib_HANDLE* __zz_cib_handle(const ::Graphics::Rectangle& __zz_cib_obj) {
				return __zz_cib_obj.__zz_cib_h_;
			}
			static ::Graphics::Rectangle __zz_cib_obj_from_handle(__zz_cib_HANDLE* h) {
				return ::Graphics::Rectangle(h);
			}
			static ::Graphics::Rectangle* __zz_cib_create_proxy(__zz_cib_HANDLE* h) {
				return new ::Graphics::Rectangle(h);
			}
			static __zz_cib_HANDLE* __zz_cib_release_handle(::Graphics::Rectangle* __zz_cib_obj) {
				auto h = __zz_cib_obj->__zz_cib_h_;
				__zz_cib_obj->__zz_cib_h_ = nullptr;
				__zz_cib_::Graphics::Shape::__zz_cib_Helper::__zz_cib_release_handle(__zz_cib_obj);
				return h;
			}
			static void __zz_cib_release_proxy(::Graphics::Rectangle* __zz_cib_obj) {
				if (__zz_cib_obj->__zz_cib_h_) {
					using __zz_cib_release_proxyProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*);
					auto method = instance().getMethod<__zz_cib_release_proxyProc>(__zz_cib_::Graphics::Rectangle::__zz_cib_methodid::__zz_cib_release_proxy_8);
					method(__zz_cib_obj->__zz_cib_h_);
				}
			}
		};
	}}}

inline Graphics::Rectangle::Rectangle(__zz_cib_::__zz_cib_HANDLE* h)
	: ::Graphics::Shape::Shape(__zz_cib_::Graphics::Rectangle::__zz_cib_Helper::__zz_cib_cast_to___Graphics__Shape_7(h))
	, __zz_cib_h_(h)
{}

inline Graphics::Rectangle::Rectangle(Rectangle&& rhs)
	: ::Graphics::Shape::Shape(std::move(rhs))
	, __zz_cib_h_(rhs.__zz_cib_h_)
{
	rhs.__zz_cib_h_ = nullptr;
}

inline Graphics::Rectangle::Rectangle(const ::Graphics::Rectangle& __zz_cib_param0)
	: Rectangle(__zz_cib_::Graphics::Rectangle::__zz_cib_Helper::__zz_cib_new_1(this, *__zz_cib_::Graphics::Rectangle::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

inline Graphics::Rectangle::~Rectangle() {
	__zz_cib_::Graphics::Rectangle::__zz_cib_Helper::__zz_cib_release_proxy(this);
	auto h = __zz_cib_::Graphics::Rectangle::__zz_cib_Helper::__zz_cib_release_handle(this);
	__zz_cib_::Graphics::Rectangle::__zz_cib_Helper::__zz_cib_delete_2(h);
}

inline Graphics::Rectangle::Rectangle(float left, float bottom, float right, float top)
	: Rectangle(__zz_cib_::Graphics::Rectangle::__zz_cib_Helper::__zz_cib_new_3(this, left, bottom, right, top))
{}

inline float Graphics::Rectangle::Area() const {
	return __zz_cib_::Graphics::Rectangle::__zz_cib_Helper::Area_4(__zz_cib_h_);
}

inline float Graphics::Rectangle::Perimeter() const {
	return __zz_cib_::Graphics::Rectangle::__zz_cib_Helper::Perimeter_5(__zz_cib_h_);
}

inline void Graphics::Rectangle::Draw(::Graphics::Context* ctx) const {
	__zz_cib_::Graphics::Rectangle::__zz_cib_Helper::Draw_6(__zz_cib_h_, __zz_cib_::Graphics::Context::__zz_cib_Helper::__zz_cib_handle(ctx));
}
