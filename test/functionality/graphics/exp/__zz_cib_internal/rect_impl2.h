#include "__zz_cib_Graphics_ids.h"
#include <cassert>

	namespace __zz_cib_ { namespace Graphics {
		namespace Rectangle { class __zz_cib_Helper {
			friend class ::Graphics::Rectangle;
			static __zz_cib_::MethodTable __zz_cib_get_proxy_method_table();

			static __zz_cib_::HANDLE* __zz_cib_new_1(::Graphics::Rectangle* __zz_cib_proxy, float left, float top, float right, float bottom) {
				using __zz_cib_newProc = __zz_cib_::HANDLE* (__stdcall *) (::Graphics::Rectangle*, __zz_cib_::MethodTable, float left, float top, float right, float bottom);
				auto proc = (__zz_cib_newProc) instance().mtbl[__zz_cib_::Graphics::Rectangle::__zz_cib_methodid::__zz_cib_new_1];
				return proc(__zz_cib_proxy, __zz_cib_get_proxy_method_table(), left, top, right, bottom);
			}
			static float Area_2(__zz_cib_::HANDLE* __zz_cib_obj) {
				using AreaProc = float (__stdcall *) (__zz_cib_::HANDLE*);
				auto proc = (AreaProc) instance().mtbl[__zz_cib_::Graphics::Rectangle::__zz_cib_methodid::Area_2];
				return proc(__zz_cib_obj);
			}
			static float Perimeter_3(__zz_cib_::HANDLE* __zz_cib_obj) {
				using PerimeterProc = float (__stdcall *) (__zz_cib_::HANDLE*);
				auto proc = (PerimeterProc) instance().mtbl[__zz_cib_::Graphics::Rectangle::__zz_cib_methodid::Perimeter_3];
				return proc(__zz_cib_obj);
			}
			static void Draw_4(__zz_cib_::HANDLE* __zz_cib_obj, __zz_cib_::HANDLE* ctx) {
				using DrawProc = void (__stdcall *) (__zz_cib_::HANDLE*, __zz_cib_::HANDLE* ctx);
				auto proc = (DrawProc) instance().mtbl[__zz_cib_::Graphics::Rectangle::__zz_cib_methodid::Draw_4];
				return proc(__zz_cib_obj, ctx);
			}
			static void __zz_cib_delete_5(__zz_cib_::HANDLE* __zz_cib_obj) {
				if (__zz_cib_obj) {
					using __zz_cib_deleteProc = void (__stdcall *) (__zz_cib_::HANDLE*);
					auto proc = (__zz_cib_deleteProc) instance().mtbl[__zz_cib_::Graphics::Rectangle::__zz_cib_methodid::__zz_cib_delete_5];
					return proc(__zz_cib_obj);
				}
			}
			static __zz_cib_::HANDLE* __zz_cib_cast_to___Graphics__Shape_6(__zz_cib_::HANDLE* __zz_cib_obj) {
				using __zz_cib_cast_to___Graphics__ShapeProc = __zz_cib_::HANDLE* (__stdcall *) (__zz_cib_::HANDLE* h);
				auto proc = (__zz_cib_cast_to___Graphics__ShapeProc) instance().mtbl[__zz_cib_::Graphics::Rectangle::__zz_cib_methodid::__zz_cib_cast_to___Graphics__Shape_6];
				return proc(__zz_cib_obj);
			}
		private:
			__zz_cib_::MethodTable mtbl;
			__zz_cib_Helper() {
				mtbl = GraphicsLib_GetMethodTable(__zz_cib_::GraphicsLib::__zz_cib_classid::__Graphics__Rectangle);
			}
			static const __zz_cib_Helper& instance() {
				static __zz_cib_Helper helper;
				return helper;
			}

		public:
			static __zz_cib_::HANDLE* __zz_cib_handle(::Graphics::Rectangle* __zz_cib_obj) {
				return __zz_cib_obj->__zz_cib_h_;
			}
			static ::Graphics::Rectangle* __zz_cib_from_handle(__zz_cib_::HANDLE* h) {
				return new ::Graphics::Rectangle(h);
			}
			static __zz_cib_::HANDLE* __zz_cib_release_handle(::Graphics::Rectangle* __zz_cib_obj) {
				auto h = __zz_cib_obj->__zz_cib_h_;
				__zz_cib_obj->__zz_cib_h_ = nullptr;
				__zz_cib_::Graphics::Shape::__zz_cib_Helper::__zz_cib_release_handle(__zz_cib_obj);
				return h;
			}
			static void __zz_cib_release_proxy(::Graphics::Rectangle* __zz_cib_obj) {
				if (__zz_cib_obj->__zz_cib_h_) {
					using __zz_cib_release_proxyProc = void (__stdcall *) (__zz_cib_::HANDLE*);
					auto proc = (__zz_cib_release_proxyProc) instance().mtbl[__zz_cib_::Graphics::Rectangle::__zz_cib_methodid::__zz_cib_release_proxy_7];
					proc(__zz_cib_obj->__zz_cib_h_);
				}
			}
		};
	}}
}

inline Graphics::Rectangle::Rectangle(__zz_cib_::HANDLE* h)
	: ::Graphics::Shape::Shape(__zz_cib_::Graphics::Rectangle::__zz_cib_Helper::__zz_cib_cast_to___Graphics__Shape_6(h))
	, __zz_cib_h_(h)
{}

inline Graphics::Rectangle::Rectangle(float left, float top, float right, float bottom)
	: Rectangle(__zz_cib_::Graphics::Rectangle::__zz_cib_Helper::__zz_cib_new_1(this, left, top, right, bottom))
{}

inline float Graphics::Rectangle::Area() const {
	return __zz_cib_::Graphics::Rectangle::__zz_cib_Helper::Area_2(__zz_cib_h_);
}

inline float Graphics::Rectangle::Perimeter() const {
	return __zz_cib_::Graphics::Rectangle::__zz_cib_Helper::Perimeter_3(__zz_cib_h_);
}

inline void Graphics::Rectangle::Draw(::Graphics::Context* ctx) const {
	__zz_cib_::Graphics::Rectangle::__zz_cib_Helper::Draw_4(__zz_cib_h_, __zz_cib_::Graphics::Context::__zz_cib_Helper::__zz_cib_handle(ctx));
}

inline Graphics::Rectangle::~Rectangle() {
	__zz_cib_::Graphics::Rectangle::__zz_cib_Helper::__zz_cib_release_proxy(this);
	auto h = __zz_cib_::Graphics::Rectangle::__zz_cib_Helper::__zz_cib_release_handle(this);
	__zz_cib_::Graphics::Rectangle::__zz_cib_Helper::__zz_cib_delete_5(h);
}
