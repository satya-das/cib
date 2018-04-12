#include "__zz_cib_Graphics_ids.h"
#include <cassert>

	namespace __zz_cib_ { namespace Graphics {
		namespace Composite {
			class __zz_cib_Helper {
				friend class ::Graphics::Composite;
				static __zz_cib_::MethodTable __zz_cib_get_proxy_method_table();

				static __zz_cib_::HANDLE* __zz_cib_new_1(::Graphics::Composite* __zz_cib_proxy) {
					using __zz_cib_newProc = __zz_cib_::HANDLE* (__zz_cib_decl *) (::Graphics::Composite*, __zz_cib_::MethodTable);
					auto proc = (__zz_cib_newProc) instance().mtbl[__zz_cib_::Graphics::Composite::__zz_cib_methodid::__zz_cib_new_1];
					return proc(__zz_cib_proxy, __zz_cib_get_proxy_method_table());
				}
				static void Add_2(__zz_cib_::HANDLE* __zz_cib_obj, __zz_cib_::HANDLE* shape) {
					using AddProc = void (__zz_cib_decl *) (__zz_cib_::HANDLE*, __zz_cib_::HANDLE* shape);
					auto proc = (AddProc) instance().mtbl[__zz_cib_::Graphics::Composite::__zz_cib_methodid::Add_2];
					return proc(__zz_cib_obj, shape);
				}
				static size_t NumShapes_3(__zz_cib_::HANDLE* __zz_cib_obj) {
					using NumShapesProc = size_t (__zz_cib_decl *) (__zz_cib_::HANDLE*);
					auto proc = (NumShapesProc) instance().mtbl[__zz_cib_::Graphics::Composite::__zz_cib_methodid::NumShapes_3];
					return proc(__zz_cib_obj);
				}
				static __zz_cib_::HANDLE* ShapeAt_4(__zz_cib_::HANDLE* __zz_cib_obj, size_t idxShape) {
					using ShapeAtProc = __zz_cib_::HANDLE* (__zz_cib_decl *) (__zz_cib_::HANDLE*, size_t idxShape);
					auto proc = (ShapeAtProc) instance().mtbl[__zz_cib_::Graphics::Composite::__zz_cib_methodid::ShapeAt_4];
					return proc(__zz_cib_obj, idxShape);
				}
				static float Area_5(__zz_cib_::HANDLE* __zz_cib_obj) {
					using AreaProc = float (__zz_cib_decl *) (__zz_cib_::HANDLE*);
					auto proc = (AreaProc) instance().mtbl[__zz_cib_::Graphics::Composite::__zz_cib_methodid::Area_5];
					return proc(__zz_cib_obj);
				}
				static float Perimeter_6(__zz_cib_::HANDLE* __zz_cib_obj) {
					using PerimeterProc = float (__zz_cib_decl *) (__zz_cib_::HANDLE*);
					auto proc = (PerimeterProc) instance().mtbl[__zz_cib_::Graphics::Composite::__zz_cib_methodid::Perimeter_6];
					return proc(__zz_cib_obj);
				}
				static void Draw_7(__zz_cib_::HANDLE* __zz_cib_obj, __zz_cib_::HANDLE* ctx) {
					using DrawProc = void (__zz_cib_decl *) (__zz_cib_::HANDLE*, __zz_cib_::HANDLE* ctx);
					auto proc = (DrawProc) instance().mtbl[__zz_cib_::Graphics::Composite::__zz_cib_methodid::Draw_7];
					return proc(__zz_cib_obj, ctx);
				}
				static __zz_cib_::HANDLE* CreateCompositeOfRectAndCircle_8() {
					using CreateCompositeOfRectAndCircleProc = __zz_cib_::HANDLE* (__zz_cib_decl *) ();
					auto proc = (CreateCompositeOfRectAndCircleProc) instance().mtbl[__zz_cib_::Graphics::Composite::__zz_cib_methodid::CreateCompositeOfRectAndCircle_8];
					return proc();
				}
				static void __zz_cib_delete_9(__zz_cib_::HANDLE* __zz_cib_obj) {
					if (__zz_cib_obj) {
						using __zz_cib_deleteProc = void (__zz_cib_decl *) (__zz_cib_::HANDLE*);
						auto proc = (__zz_cib_deleteProc) instance().mtbl[__zz_cib_::Graphics::Composite::__zz_cib_methodid::__zz_cib_delete_9];
						return proc(__zz_cib_obj);
					}
				}
				static __zz_cib_::HANDLE* __zz_cib_cast_to___Graphics__Shape_10(__zz_cib_::HANDLE* __zz_cib_obj) {
					using __zz_cib_cast_to___Graphics__ShapeProc = __zz_cib_::HANDLE* (__zz_cib_decl *) (__zz_cib_::HANDLE* h);
					auto proc = (__zz_cib_cast_to___Graphics__ShapeProc) instance().mtbl[__zz_cib_::Graphics::Composite::__zz_cib_methodid::__zz_cib_cast_to___Graphics__Shape_10];
					return proc(__zz_cib_obj);
				}
			private:
				__zz_cib_::MethodTable mtbl;
				__zz_cib_Helper() {
					mtbl = __zz_cib_GraphicsLib_GetMethodTable(__zz_cib_::GraphicsLib::__zz_cib_classid::__Graphics__Composite);
				}
				static const __zz_cib_Helper& instance() {
					static __zz_cib_Helper helper;
					return helper;
				}

			public:
				static __zz_cib_::HANDLE* __zz_cib_handle(::Graphics::Composite* __zz_cib_obj) {
					return __zz_cib_obj->__zz_cib_h_;
				}
				static ::Graphics::Composite* __zz_cib_from_handle(__zz_cib_::HANDLE* h) {
					return new ::Graphics::Composite(h);
				}
				static __zz_cib_::HANDLE* __zz_cib_release_handle(::Graphics::Composite* __zz_cib_obj) {
					auto h = __zz_cib_obj->__zz_cib_h_;
					__zz_cib_obj->__zz_cib_h_ = nullptr;
					__zz_cib_::Graphics::Shape::__zz_cib_Helper::__zz_cib_release_handle(__zz_cib_obj);
					return h;
				}
				static void __zz_cib_release_proxy(::Graphics::Composite* __zz_cib_obj) {
					if (__zz_cib_obj->__zz_cib_h_) {
						using __zz_cib_release_proxyProc = void (__zz_cib_decl *) (__zz_cib_::HANDLE*);
						auto proc = (__zz_cib_release_proxyProc) instance().mtbl[__zz_cib_::Graphics::Composite::__zz_cib_methodid::__zz_cib_release_proxy_11];
						proc(__zz_cib_obj->__zz_cib_h_);
					}
				}
			};
		}}
	}

inline Graphics::Composite::Composite(__zz_cib_::HANDLE* h)
	: ::Graphics::Shape::Shape(__zz_cib_::Graphics::Composite::__zz_cib_Helper::__zz_cib_cast_to___Graphics__Shape_10(h))
	, __zz_cib_h_(h)
{}

inline Graphics::Composite::Composite()
	: Composite(__zz_cib_::Graphics::Composite::__zz_cib_Helper::__zz_cib_new_1(this))
{}

inline void Graphics::Composite::Add(::Graphics::Shape* shape) {
	__zz_cib_::Graphics::Composite::__zz_cib_Helper::Add_2(__zz_cib_h_, __zz_cib_::Graphics::Shape::__zz_cib_Helper::__zz_cib_handle(shape));
}

inline size_t Graphics::Composite::NumShapes() const {
	return __zz_cib_::Graphics::Composite::__zz_cib_Helper::NumShapes_3(__zz_cib_h_);
}

inline ::Graphics::Shape* Graphics::Composite::ShapeAt(size_t idxShape) const {
	return __zz_cib_::Graphics::Shape::__zz_cib_Helper::__zz_cib_from_handle(
		__zz_cib_::Graphics::Composite::__zz_cib_Helper::ShapeAt_4(__zz_cib_h_, idxShape)
	);
}

inline float Graphics::Composite::Area() const {
	return __zz_cib_::Graphics::Composite::__zz_cib_Helper::Area_5(__zz_cib_h_);
}

inline float Graphics::Composite::Perimeter() const {
	return __zz_cib_::Graphics::Composite::__zz_cib_Helper::Perimeter_6(__zz_cib_h_);
}

inline void Graphics::Composite::Draw(::Graphics::Context* ctx) const {
	__zz_cib_::Graphics::Composite::__zz_cib_Helper::Draw_7(__zz_cib_h_, __zz_cib_::Graphics::Context::__zz_cib_Helper::__zz_cib_handle(ctx));
}

inline ::Graphics::Composite* Graphics::Composite::CreateCompositeOfRectAndCircle() {
	return __zz_cib_::Graphics::Composite::__zz_cib_Helper::__zz_cib_from_handle(
		__zz_cib_::Graphics::Composite::__zz_cib_Helper::CreateCompositeOfRectAndCircle_8()
	);
}

inline Graphics::Composite::~Composite() {
	__zz_cib_::Graphics::Composite::__zz_cib_Helper::__zz_cib_release_proxy(this);
	auto h = __zz_cib_::Graphics::Composite::__zz_cib_Helper::__zz_cib_release_handle(this);
	__zz_cib_::Graphics::Composite::__zz_cib_Helper::__zz_cib_delete_9(h);
}
