#include "__zz_cib_Graphics-ids.h"
#include "__zz_cib_Graphics-helper.h"
#include <cassert>

	namespace __zz_cib_ { namespace Graphics {
		namespace Circle {
			class __zz_cib_Helper : public __zz_cib_::Graphics::__zz_cib_Helper {
			private:
				friend class ::Graphics::Circle;
				static __zz_cib_MethodTable __zz_cib_get_proxy_method_table();

				static __zz_cib_HANDLE* __zz_cib_new_1(::Graphics::Circle* __zz_cib_proxy, float Ox, float Oy, float radius) {
					using __zz_cib_newProc = __zz_cib_HANDLE* (__zz_cib_decl *) (::Graphics::Circle*, __zz_cib_MethodTable, float Ox, float Oy, float radius);
					auto proc = instance().getProc<__zz_cib_newProc>(__zz_cib_::Graphics::Circle::__zz_cib_methodid::__zz_cib_new_1);
					return proc(__zz_cib_proxy, __zz_cib_get_proxy_method_table(), Ox, Oy, radius);
				}
				static float Area_2(__zz_cib_HANDLE* __zz_cib_obj) {
					using AreaProc = float (__zz_cib_decl *) (__zz_cib_HANDLE*);
					auto proc = instance().getProc<AreaProc>(__zz_cib_::Graphics::Circle::__zz_cib_methodid::Area_2);
					return proc(__zz_cib_obj);
				}
				static float Perimeter_3(__zz_cib_HANDLE* __zz_cib_obj) {
					using PerimeterProc = float (__zz_cib_decl *) (__zz_cib_HANDLE*);
					auto proc = instance().getProc<PerimeterProc>(__zz_cib_::Graphics::Circle::__zz_cib_methodid::Perimeter_3);
					return proc(__zz_cib_obj);
				}
				static void Draw_4(__zz_cib_HANDLE* __zz_cib_obj, __zz_cib_HANDLE* ctx) {
					using DrawProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*, __zz_cib_HANDLE* ctx);
					auto proc = instance().getProc<DrawProc>(__zz_cib_::Graphics::Circle::__zz_cib_methodid::Draw_4);
					return proc(__zz_cib_obj, ctx);
				}
				static __zz_cib_HANDLE* CreateCircle_5(float Ox, float Oy, float radius) {
					using CreateCircleProc = __zz_cib_HANDLE* (__zz_cib_decl *) (float Ox, float Oy, float radius);
					auto proc = instance().getProc<CreateCircleProc>(__zz_cib_::Graphics::Circle::__zz_cib_methodid::CreateCircle_5);
					return proc(Ox, Oy, radius);
				}
				static void __zz_cib_delete_6(__zz_cib_HANDLE* __zz_cib_obj) {
					if (__zz_cib_obj) {
						using __zz_cib_deleteProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*);
						auto proc = instance().getProc<__zz_cib_deleteProc>(__zz_cib_::Graphics::Circle::__zz_cib_methodid::__zz_cib_delete_6);
						return proc(__zz_cib_obj);
					}
				}
				static __zz_cib_HANDLE* __zz_cib_cast_to___Graphics__Shape_7(__zz_cib_HANDLE* __zz_cib_obj) {
					using __zz_cib_cast_to___Graphics__ShapeProc = __zz_cib_HANDLE* (__zz_cib_decl *) (__zz_cib_HANDLE* h);
					auto proc = instance().getProc<__zz_cib_cast_to___Graphics__ShapeProc>(__zz_cib_::Graphics::Circle::__zz_cib_methodid::__zz_cib_cast_to___Graphics__Shape_7);
					return proc(__zz_cib_obj);
				}
				__zz_cib_Helper()
					: __zz_cib_::Graphics::__zz_cib_Helper(
						__zz_cib_Graphics_GetMethodTable(
							__zz_cib_::__zz_cib_classid::__Graphics__Circle)) {}
				static const __zz_cib_Helper& instance() {
					static __zz_cib_Helper helper;
					return helper;
				}

			public:
				static __zz_cib_HANDLE* __zz_cib_handle(const ::Graphics::Circle* __zz_cib_obj) {
					return __zz_cib_obj->__zz_cib_h_;
				}
				static __zz_cib_HANDLE* __zz_cib_handle(const ::Graphics::Circle& __zz_cib_obj) {
					return __zz_cib_obj.__zz_cib_h_;
				}
				static ::Graphics::Circle* __zz_cib_from_handle(__zz_cib_HANDLE* h) {
					return new ::Graphics::Circle(h);
				}
				::Graphics::Circle& __zz_cib_from_handle(__zz_cib_HANDLE& h) {
					return *__zz_cib_from_handle(&h);
				}
				::Graphics::Circle const * __zz_cib_from_handle(const __zz_cib_HANDLE* h) {
					return __zz_cib_from_handle(const_cast<__zz_cib_HANDLE*>(h));
				}
				::Graphics::Circle const & __zz_cib_from_handle(const __zz_cib_HANDLE& h) {
					return *__zz_cib_from_handle(const_cast<__zz_cib_HANDLE*>(&h));
				}
				static __zz_cib_HANDLE* __zz_cib_release_handle(::Graphics::Circle* __zz_cib_obj) {
					auto h = __zz_cib_obj->__zz_cib_h_;
					__zz_cib_obj->__zz_cib_h_ = nullptr;
					__zz_cib_::Graphics::Shape::__zz_cib_Helper::__zz_cib_release_handle(__zz_cib_obj);
					return h;
				}
				static void __zz_cib_release_proxy(::Graphics::Circle* __zz_cib_obj) {
					if (__zz_cib_obj->__zz_cib_h_) {
						using __zz_cib_release_proxyProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*);
						auto proc = instance().getProc<__zz_cib_release_proxyProc>(__zz_cib_::Graphics::Circle::__zz_cib_methodid::__zz_cib_release_proxy_8);
						proc(__zz_cib_obj->__zz_cib_h_);
					}
				}
			};
		}}
	}

inline Graphics::Circle::Circle(__zz_cib_::__zz_cib_HANDLE* h)
	: ::Graphics::Shape::Shape(__zz_cib_::Graphics::Circle::__zz_cib_Helper::__zz_cib_cast_to___Graphics__Shape_7(h))
	, __zz_cib_h_(h)
{}

inline Graphics::Circle::Circle(Circle&& rhs)
	: ::Graphics::Shape::Shape(std::move(rhs))
	, __zz_cib_h_(rhs.__zz_cib_h_)
{
	rhs.__zz_cib_h_ = nullptr;
}

inline Graphics::Circle::Circle(float Ox, float Oy, float radius)
	: Circle(__zz_cib_::Graphics::Circle::__zz_cib_Helper::__zz_cib_new_1(this, Ox, Oy, radius))
{}

inline float Graphics::Circle::Area() const {
	return __zz_cib_::Graphics::Circle::__zz_cib_Helper::Area_2(__zz_cib_h_);
}

inline float Graphics::Circle::Perimeter() const {
	return __zz_cib_::Graphics::Circle::__zz_cib_Helper::Perimeter_3(__zz_cib_h_);
}

inline void Graphics::Circle::Draw(::Graphics::Context* ctx) const {
	__zz_cib_::Graphics::Circle::__zz_cib_Helper::Draw_4(__zz_cib_h_, __zz_cib_::Graphics::Context::__zz_cib_Helper::__zz_cib_handle(ctx));
}

inline ::Graphics::Shape* Graphics::Circle::CreateCircle(float Ox, float Oy, float radius) {
	return __zz_cib_::Graphics::Shape::__zz_cib_Helper::__zz_cib_from_handle(
		__zz_cib_::Graphics::Circle::__zz_cib_Helper::CreateCircle_5(Ox, Oy, radius)
	);
}

inline Graphics::Circle::~Circle() {
	__zz_cib_::Graphics::Circle::__zz_cib_Helper::__zz_cib_release_proxy(this);
	auto h = __zz_cib_::Graphics::Circle::__zz_cib_Helper::__zz_cib_release_handle(this);
	__zz_cib_::Graphics::Circle::__zz_cib_Helper::__zz_cib_delete_6(h);
}