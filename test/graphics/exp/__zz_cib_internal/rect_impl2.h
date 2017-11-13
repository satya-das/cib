#include "__zz_cib_Graphics_ids.h"
#include <cassert>

	namespace __zz_cib_ { namespace Graphics {
		namespace Rectangle { class __zz_cib_Helper {
			friend class ::Graphics::Rectangle;
			using __zz_cib_newProc = __zz_cib_::HANDLE* (__stdcall *) (float left, float top, float right, float bottom);
			using AreaProc = float (__stdcall *) (__zz_cib_::HANDLE*);
			using PerimeterProc = float (__stdcall *) (__zz_cib_::HANDLE*);
			using DrawProc = void (__stdcall *) (__zz_cib_::HANDLE*, __zz_cib_::HANDLE* ctx);
			using __zz_cib_cast_to___Graphics__ShapeProc = __zz_cib_::HANDLE* (__stdcall *) (__zz_cib_::HANDLE* h);

			static __zz_cib_::HANDLE* __zz_cib_new_1(float left, float top, float right, float bottom) {
				auto proc = (__zz_cib_newProc) instance().mtbl[__zz_cib_::Graphics::Rectangle::__zz_cib_methodid::__zz_cib_new_1];
				return proc(left, top, right, bottom);
			}
			static float Area_2(__zz_cib_::HANDLE* __zz_cib_obj) {
				auto proc = (AreaProc) instance().mtbl[__zz_cib_::Graphics::Rectangle::__zz_cib_methodid::Area_2];
				return proc(__zz_cib_obj);
			}
			static float Perimeter_3(__zz_cib_::HANDLE* __zz_cib_obj) {
				auto proc = (PerimeterProc) instance().mtbl[__zz_cib_::Graphics::Rectangle::__zz_cib_methodid::Perimeter_3];
				return proc(__zz_cib_obj);
			}
			static void Draw_4(__zz_cib_::HANDLE* __zz_cib_obj, __zz_cib_::HANDLE* ctx) {
				auto proc = (DrawProc) instance().mtbl[__zz_cib_::Graphics::Rectangle::__zz_cib_methodid::Draw_4];
				return proc(__zz_cib_obj, ctx);
			}
			static __zz_cib_::HANDLE* __zz_cib_cast_to___Graphics__Shape_5(__zz_cib_::HANDLE* __zz_cib_obj) {
				auto proc = (__zz_cib_cast_to___Graphics__ShapeProc) instance().mtbl[__zz_cib_::Graphics::Rectangle::__zz_cib_methodid::__zz_cib_cast_to___Graphics__Shape_5];
				return proc(__zz_cib_obj);
			}
		private:
			__zz_cib_::MethodTable mtbl;
			__zz_cib_Helper() {
				size_t mnum = 0;
				GraphicsLib_GetMethodTable(__zz_cib_::GraphicsLib::__zz_cib_classid::__Graphics__Rectangle, &mtbl, &mnum);
				assert(mnum >= __zz_cib_::Graphics::Rectangle::__zz_cib_methodid::__zz_cib_next_method_id);
			}
			static const __zz_cib_Helper& instance() {
				static __zz_cib_Helper bridgeIns;
				return bridgeIns;
			}

		public:
			static __zz_cib_::HANDLE* __zz_cib_handle(::Graphics::Rectangle* __zz_cib_obj) {
				return __zz_cib_obj->__zz_cib_h_;
			}
			static void __zz_cib_release_handle(::Graphics::Rectangle* __zz_cib_obj) {
				__zz_cib_obj->__zz_cib_h_ = nullptr;
			}
		};
	}}
}

inline ::Graphics::Rectangle::Rectangle(__zz_cib_::HANDLE* h)
	: ::Graphics::Shape::Shape(__zz_cib_::Graphics::Rectangle::__zz_cib_Helper::__zz_cib_cast_to___Graphics__Shape_5(h))
	, __zz_cib_h_(h)
{}

inline ::Graphics::Rectangle::Rectangle(float left, float top, float right, float bottom)
	: Rectangle(__zz_cib_::Graphics::Rectangle::__zz_cib_Helper::__zz_cib_new_1(left, top, right, bottom))
{}

inline float ::Graphics::Rectangle::Area() const{
	return __zz_cib_::Graphics::Rectangle::__zz_cib_Helper::Area_2(__zz_cib_h_);
}

inline float ::Graphics::Rectangle::Perimeter() const{
	return __zz_cib_::Graphics::Rectangle::__zz_cib_Helper::Perimeter_3(__zz_cib_h_);
}

inline void ::Graphics::Rectangle::Draw(Context* ctx) const{
	__zz_cib_::Graphics::Rectangle::__zz_cib_Helper::Draw_4(__zz_cib_h_, __zz_cib_::Graphics::Context::__zz_cib_Helper::__zz_cib_handle(ctx));
}
