#include "__zz_cib_Graphics_ids.h"
#include <cassert>

	namespace __zz_cib_ { namespace Graphics {
		namespace Circle { class __zz_cib_Helper {
			friend class ::Graphics::Circle;
			using __zz_cib_newProc = __zz_cib_::HANDLE* (__stdcall *) (float Ox, float Oy, float radius);
			using AreaProc = float (__stdcall *) (__zz_cib_::HANDLE*);
			using PerimeterProc = float (__stdcall *) (__zz_cib_::HANDLE*);
			using DrawProc = void (__stdcall *) (__zz_cib_::HANDLE*, __zz_cib_::HANDLE* ctx);
			using __zz_cib_cast_to___Graphics__ShapeProc = __zz_cib_::HANDLE* (__stdcall *) (__zz_cib_::HANDLE* h);

			static __zz_cib_::HANDLE* __zz_cib_new(float Ox, float Oy, float radius) {
				auto proc = (__zz_cib_newProc) instance().mtbl[__zz_cib_::Graphics::Circle::__zz_cib_methodid::__zz_cib_new];
				return proc(Ox, Oy, radius);
			}
			static float Area(__zz_cib_::HANDLE* __zz_cib_obj) {
				auto proc = (AreaProc) instance().mtbl[__zz_cib_::Graphics::Circle::__zz_cib_methodid::Area];
				return proc(__zz_cib_obj);
			}
			static float Perimeter(__zz_cib_::HANDLE* __zz_cib_obj) {
				auto proc = (PerimeterProc) instance().mtbl[__zz_cib_::Graphics::Circle::__zz_cib_methodid::Perimeter];
				return proc(__zz_cib_obj);
			}
			static void Draw(__zz_cib_::HANDLE* __zz_cib_obj, __zz_cib_::HANDLE* ctx) {
				auto proc = (DrawProc) instance().mtbl[__zz_cib_::Graphics::Circle::__zz_cib_methodid::Draw];
				return proc(__zz_cib_obj, ctx);
			}
			static __zz_cib_::HANDLE* __zz_cib_cast_to___Graphics__Shape(__zz_cib_::HANDLE* __zz_cib_obj) {
				auto proc = (__zz_cib_cast_to___Graphics__ShapeProc) instance().mtbl[__zz_cib_::Graphics::Circle::__zz_cib_methodid::__zz_cib_cast_to___Graphics__Shape];
				return proc(__zz_cib_obj);
			}
		private:
			__zz_cib_::MethodTable mtbl;
			__zz_cib_Helper() {
				size_t mnum = 0;
				GraphicsLib_GetMethodTable(__zz_cib_::GraphicsLib::__zz_cib_classid::__Graphics__Circle, &mtbl, &mnum);
				assert(mnum >= __zz_cib_::Graphics::Circle::__zz_cib_methodid::__zz_cib_next_method_id);
			}
			static const __zz_cib_Helper& instance() {
				static __zz_cib_Helper bridgeIns;
				return bridgeIns;
			}

		public:
			static __zz_cib_::HANDLE* __zz_cib_handle(::Graphics::Circle* __zz_cib_obj) {
				return __zz_cib_obj->__zz_cib_h_;
			}
			static void __zz_cib_release_handle(::Graphics::Circle* __zz_cib_obj) {
				__zz_cib_obj->__zz_cib_h_ = nullptr;
			}
		};
	}}
}

inline ::Graphics::Circle::Circle(__zz_cib_::HANDLE* h)
	: ::Graphics::Shape::Shape(__zz_cib_::Graphics::Circle::__zz_cib_Helper::__zz_cib_cast_to___Graphics__Shape(h))
	, __zz_cib_h_(h)
{}

inline ::Graphics::Circle::Circle(float Ox, float Oy, float radius)
	: Circle(__zz_cib_::Graphics::Circle::__zz_cib_Helper::__zz_cib_new(Ox, Oy, radius))
{}

inline float ::Graphics::Circle::Area() const{
	return __zz_cib_::Graphics::Circle::__zz_cib_Helper::Area(__zz_cib_h_);
}

inline float ::Graphics::Circle::Perimeter() const{
	return __zz_cib_::Graphics::Circle::__zz_cib_Helper::Perimeter(__zz_cib_h_);
}

inline void ::Graphics::Circle::Draw(Context* ctx) const{
	__zz_cib_::Graphics::Circle::__zz_cib_Helper::Draw(__zz_cib_h_, __zz_cib_::Graphics::Context::__zz_cib_Helper::__zz_cib_handle(ctx));
}
