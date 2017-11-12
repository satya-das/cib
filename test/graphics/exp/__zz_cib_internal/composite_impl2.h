#include "__zz_cib_Graphics_ids.h"
#include <cassert>

	namespace __zz_cib_ { namespace Graphics {
		namespace Composite { class __zz_cib_Helper {
			friend class ::Graphics::Composite;
			using __zz_cib_newProc = __zz_cib_::HANDLE* (__stdcall *) ();
			using AddProc = void (__stdcall *) (__zz_cib_::HANDLE*, __zz_cib_::HANDLE* shape);
			using NumShapesProc = size_t (__stdcall *) (__zz_cib_::HANDLE*);
			using ShapeAtProc = __zz_cib_::HANDLE* (__stdcall *) (__zz_cib_::HANDLE*, size_t idxShape);
			using AreaProc = float (__stdcall *) (__zz_cib_::HANDLE*);
			using PerimeterProc = float (__stdcall *) (__zz_cib_::HANDLE*);
			using DrawProc = void (__stdcall *) (__zz_cib_::HANDLE*, __zz_cib_::HANDLE* ctx);
			using CreateCompositeOfRectAndCircleProc = __zz_cib_::HANDLE* (__stdcall *) ();
			using __zz_cib_cast_to___Graphics__ShapeProc = __zz_cib_::HANDLE* (__stdcall *) (__zz_cib_::HANDLE* h);

			static __zz_cib_::HANDLE* __zz_cib_new() {
				auto proc = (__zz_cib_newProc) instance().mtbl[__zz_cib_::Graphics::Composite::__zz_cib_methodid::__zz_cib_new];
				return proc();
			}
			static void Add(__zz_cib_::HANDLE* __zz_cib_obj, __zz_cib_::HANDLE* shape) {
				auto proc = (AddProc) instance().mtbl[__zz_cib_::Graphics::Composite::__zz_cib_methodid::Add];
				return proc(__zz_cib_obj, shape);
			}
			static size_t NumShapes(__zz_cib_::HANDLE* __zz_cib_obj) {
				auto proc = (NumShapesProc) instance().mtbl[__zz_cib_::Graphics::Composite::__zz_cib_methodid::NumShapes];
				return proc(__zz_cib_obj);
			}
			static __zz_cib_::HANDLE* ShapeAt(__zz_cib_::HANDLE* __zz_cib_obj, size_t idxShape) {
				auto proc = (ShapeAtProc) instance().mtbl[__zz_cib_::Graphics::Composite::__zz_cib_methodid::ShapeAt];
				return proc(__zz_cib_obj, idxShape);
			}
			static float Area(__zz_cib_::HANDLE* __zz_cib_obj) {
				auto proc = (AreaProc) instance().mtbl[__zz_cib_::Graphics::Composite::__zz_cib_methodid::Area];
				return proc(__zz_cib_obj);
			}
			static float Perimeter(__zz_cib_::HANDLE* __zz_cib_obj) {
				auto proc = (PerimeterProc) instance().mtbl[__zz_cib_::Graphics::Composite::__zz_cib_methodid::Perimeter];
				return proc(__zz_cib_obj);
			}
			static void Draw(__zz_cib_::HANDLE* __zz_cib_obj, __zz_cib_::HANDLE* ctx) {
				auto proc = (DrawProc) instance().mtbl[__zz_cib_::Graphics::Composite::__zz_cib_methodid::Draw];
				return proc(__zz_cib_obj, ctx);
			}
			static __zz_cib_::HANDLE* CreateCompositeOfRectAndCircle() {
				auto proc = (CreateCompositeOfRectAndCircleProc) instance().mtbl[__zz_cib_::Graphics::Composite::__zz_cib_methodid::CreateCompositeOfRectAndCircle];
				return proc();
			}
			static __zz_cib_::HANDLE* __zz_cib_cast_to___Graphics__Shape(__zz_cib_::HANDLE* __zz_cib_obj) {
				auto proc = (__zz_cib_cast_to___Graphics__ShapeProc) instance().mtbl[__zz_cib_::Graphics::Composite::__zz_cib_methodid::__zz_cib_cast_to___Graphics__Shape];
				return proc(__zz_cib_obj);
			}
		private:
			__zz_cib_::MethodTable mtbl;
			__zz_cib_Helper() {
				size_t mnum = 0;
				GraphicsLib_GetMethodTable(__zz_cib_::GraphicsLib::__zz_cib_classid::__Graphics__Composite, &mtbl, &mnum);
				assert(mnum >= __zz_cib_::Graphics::Composite::__zz_cib_methodid::__zz_cib_next_method_id);
			}
			static const __zz_cib_Helper& instance() {
				static __zz_cib_Helper bridgeIns;
				return bridgeIns;
			}

		public:
			static __zz_cib_::HANDLE* __zz_cib_handle(::Graphics::Composite* __zz_cib_obj) {
				return __zz_cib_obj->__zz_cib_h_;
			}
			static void __zz_cib_release_handle(::Graphics::Composite* __zz_cib_obj) {
				__zz_cib_obj->__zz_cib_h_ = nullptr;
			}
		};
	}}
}

inline ::Graphics::Composite::Composite(__zz_cib_::HANDLE* h)
	: ::Graphics::Shape::Shape(__zz_cib_::Graphics::Composite::__zz_cib_Helper::__zz_cib_cast_to___Graphics__Shape(h))
	, __zz_cib_h_(h)
{}

inline ::Graphics::Composite::Composite()
	: Composite(__zz_cib_::Graphics::Composite::__zz_cib_Helper::__zz_cib_new())
{}

inline void ::Graphics::Composite::Add(Shape* shape){
	__zz_cib_::Graphics::Composite::__zz_cib_Helper::Add(__zz_cib_h_, __zz_cib_::Graphics::Shape::__zz_cib_Helper::__zz_cib_handle(shape));
}

inline size_t ::Graphics::Composite::NumShapes() const{
	return __zz_cib_::Graphics::Composite::__zz_cib_Helper::NumShapes(__zz_cib_h_);
}

inline ::Graphics::Shape* ::Graphics::Composite::ShapeAt(size_t idxShape) const{
	return ::Graphics::Shape::__zz_cib_from_handle(
		__zz_cib_::Graphics::Composite::__zz_cib_Helper::ShapeAt(__zz_cib_h_, idxShape)
	);
}

inline float ::Graphics::Composite::Area() const{
	return __zz_cib_::Graphics::Composite::__zz_cib_Helper::Area(__zz_cib_h_);
}

inline float ::Graphics::Composite::Perimeter() const{
	return __zz_cib_::Graphics::Composite::__zz_cib_Helper::Perimeter(__zz_cib_h_);
}

inline void ::Graphics::Composite::Draw(Context* ctx) const{
	__zz_cib_::Graphics::Composite::__zz_cib_Helper::Draw(__zz_cib_h_, __zz_cib_::Graphics::Context::__zz_cib_Helper::__zz_cib_handle(ctx));
}

inline ::Graphics::Composite* ::Graphics::Composite::CreateCompositeOfRectAndCircle(){
	return ::Graphics::Composite::__zz_cib_from_handle(
		__zz_cib_::Graphics::Composite::__zz_cib_Helper::CreateCompositeOfRectAndCircle()
	);
}
