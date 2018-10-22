#include "__zz_cib_Graphics-def.h"
#include "__zz_cib_Graphics-ids.h"
#include "__zz_cib_Graphics-mtable-helper.h"

namespace __zz_cib_ { namespace Graphics { namespace Composite {
	class __zz_cib_Helper : public __zz_cib_::__zz_cib_MethodTableHelper
		, public __zz_cib_::__zz_cib_HandleHelper<::Graphics::Composite, __zz_cib_Helper> {
	private:
		friend class ::Graphics::Composite;
		friend class __zz_cib_::__zz_cib_HandleHelper<::Graphics::Composite, __zz_cib_Helper>;
		static const __zz_cib_MethodTable* __zz_cib_get_proxy_method_table();

		static __zz_cib_HANDLE* __zz_cib_copy_0(::Graphics::Composite* __zz_cib_proxy, const __zz_cib_HANDLE* __zz_cib_param0) {
			using __zz_cib_copyProc = __zz_cib_HANDLE* (__zz_cib_decl *) (::Graphics::Composite*, const __zz_cib_MethodTable*, const __zz_cib_HANDLE* __zz_cib_param0);
			return instance().invoke<__zz_cib_copyProc>(
				__zz_cib_methodid::__zz_cib_copy_0,
				__zz_cib_proxy, __zz_cib_get_proxy_method_table(),
				__zz_cib_param0);
		}
		static void __zz_cib_delete_1(__zz_cib_HANDLE* __zz_cib_obj) {
			if (__zz_cib_obj) {
				using __zz_cib_deleteProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*);
				return instance().invoke<__zz_cib_deleteProc>(
					__zz_cib_methodid::__zz_cib_delete_1,
					__zz_cib_obj);
			}
		}
		static __zz_cib_HANDLE* __zz_cib_new_2(::Graphics::Composite* __zz_cib_proxy) {
			using __zz_cib_newProc = __zz_cib_HANDLE* (__zz_cib_decl *) (::Graphics::Composite*, const __zz_cib_MethodTable*);
			return instance().invoke<__zz_cib_newProc>(
				__zz_cib_methodid::__zz_cib_new_2,
				__zz_cib_proxy, __zz_cib_get_proxy_method_table());
		}
		static void Add_3(__zz_cib_HANDLE* __zz_cib_obj, __zz_cib_HANDLE* shape) {
			using AddProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*, __zz_cib_HANDLE* shape);
			return instance().invoke<AddProc>(
				__zz_cib_methodid::Add_3,
				__zz_cib_obj,
				shape);
		}
		static size_t NumShapes_4(__zz_cib_HANDLE* __zz_cib_obj) {
			using NumShapesProc = size_t (__zz_cib_decl *) (__zz_cib_HANDLE*);
			return instance().invoke<NumShapesProc>(
				__zz_cib_methodid::NumShapes_4,
				__zz_cib_obj);
		}
		static __zz_cib_HANDLE* ShapeAt_5(__zz_cib_HANDLE* __zz_cib_obj, size_t idxShape) {
			using ShapeAtProc = __zz_cib_HANDLE* (__zz_cib_decl *) (__zz_cib_HANDLE*, size_t idxShape);
			return instance().invoke<ShapeAtProc>(
				__zz_cib_methodid::ShapeAt_5,
				__zz_cib_obj,
				idxShape);
		}
		static float Area_6(__zz_cib_HANDLE* __zz_cib_obj) {
			using AreaProc = float (__zz_cib_decl *) (__zz_cib_HANDLE*);
			return instance().invoke<AreaProc>(
				__zz_cib_methodid::Area_6,
				__zz_cib_obj);
		}
		static float Perimeter_7(__zz_cib_HANDLE* __zz_cib_obj) {
			using PerimeterProc = float (__zz_cib_decl *) (__zz_cib_HANDLE*);
			return instance().invoke<PerimeterProc>(
				__zz_cib_methodid::Perimeter_7,
				__zz_cib_obj);
		}
		static void Draw_8(__zz_cib_HANDLE* __zz_cib_obj, __zz_cib_HANDLE* ctx) {
			using DrawProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*, __zz_cib_HANDLE* ctx);
			return instance().invoke<DrawProc>(
				__zz_cib_methodid::Draw_8,
				__zz_cib_obj,
				ctx);
		}
		static __zz_cib_HANDLE* CreateCompositeOfRectAndCircle_9() {
			using CreateCompositeOfRectAndCircleProc = __zz_cib_HANDLE* (__zz_cib_decl *) ();
			return instance().invoke<CreateCompositeOfRectAndCircleProc>(
				__zz_cib_methodid::CreateCompositeOfRectAndCircle_9);
		}
		static __zz_cib_HANDLE* __zz_cib_cast_to___Graphics__Shape_10(__zz_cib_HANDLE* __zz_cib_obj) {
			using __zz_cib_cast_to___Graphics__ShapeProc = __zz_cib_HANDLE* (__zz_cib_decl *) (__zz_cib_HANDLE* h);
			return instance().invoke<__zz_cib_cast_to___Graphics__ShapeProc>(
				__zz_cib_methodid::__zz_cib_cast_to___Graphics__Shape_10,
				__zz_cib_obj);
		}
		__zz_cib_Helper()
			: __zz_cib_::__zz_cib_MethodTableHelper(
				__zz_cib_Graphics_GetMethodTable(__zz_cib_classid))
		{}
		static const __zz_cib_Helper& instance() {
			static __zz_cib_Helper helper;
			return helper;
		}

		static std::uint32_t __zz_cib_get_class_id(__zz_cib_HANDLE* __zz_cib_obj) {
			using __zz_cib_get_class_idProc = std::uint32_t (__zz_cib_decl *) (__zz_cib_HANDLE*);
			return instance().invoke<__zz_cib_get_class_idProc>(
				__zz_cib_methodid::__zz_cib_get_class_id_11,
				__zz_cib_obj);
		}
		static ::Graphics::Composite* __zz_cib_create_proxy(__zz_cib_HANDLE* h);
	public:
		static __zz_cib_HANDLE* __zz_cib_release_handle(::Graphics::Composite* __zz_cib_obj) {
			auto h = __zz_cib_obj->__zz_cib_h_;
			__zz_cib_obj->__zz_cib_h_ = nullptr;
			__zz_cib_::Graphics::Shape::__zz_cib_Helper::__zz_cib_release_handle(__zz_cib_obj);
			return h;
		}
		static void __zz_cib_release_proxy(::Graphics::Composite* __zz_cib_obj) {
			if (__zz_cib_obj->__zz_cib_h_) {
				using __zz_cib_release_proxyProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*);
				return instance().invoke<__zz_cib_release_proxyProc>(
					__zz_cib_methodid::__zz_cib_release_proxy_12,
					__zz_cib_obj->__zz_cib_h_);
			}
		}
	};
}}}

inline Graphics::Composite::Composite(__zz_cib_::__zz_cib_HANDLE* h)
	: ::Graphics::Shape::Shape(__zz_cib_::Graphics::Composite::__zz_cib_Helper::__zz_cib_cast_to___Graphics__Shape_10(h))
	, __zz_cib_h_(h)
{}

inline Graphics::Composite::Composite(Composite&& rhs)
	: ::Graphics::Shape::Shape(std::move(rhs))
	, __zz_cib_h_(rhs.__zz_cib_h_)
{
	rhs.__zz_cib_h_ = nullptr;
}

inline Graphics::Composite::Composite(const ::Graphics::Composite& __zz_cib_param0)
	: Composite(__zz_cib_::Graphics::Composite::__zz_cib_Helper::__zz_cib_copy_0(this, __zz_cib_::Graphics::Composite::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

inline Graphics::Composite::~Composite() {
	__zz_cib_::Graphics::Composite::__zz_cib_Helper::__zz_cib_release_proxy(this);
	auto h = __zz_cib_::Graphics::Composite::__zz_cib_Helper::__zz_cib_release_handle(this);
	__zz_cib_::Graphics::Composite::__zz_cib_Helper::__zz_cib_delete_1(h);
}

inline Graphics::Composite::Composite()
	: Composite(__zz_cib_::Graphics::Composite::__zz_cib_Helper::__zz_cib_new_2(this))
{}

inline void Graphics::Composite::Add(::Graphics::Shape* shape) {
	__zz_cib_::Graphics::Composite::__zz_cib_Helper::Add_3(__zz_cib_h_, __zz_cib_::Graphics::Shape::__zz_cib_Helper::__zz_cib_handle(shape));
}

inline size_t Graphics::Composite::NumShapes() const {
	return __zz_cib_::Graphics::Composite::__zz_cib_Helper::NumShapes_4(__zz_cib_h_);
}

inline ::Graphics::Shape* Graphics::Composite::ShapeAt(size_t idxShape) const {
	return __zz_cib_::Graphics::Shape::__zz_cib_Helper::__zz_cib_from_handle(
		__zz_cib_::Graphics::Composite::__zz_cib_Helper::ShapeAt_5(__zz_cib_h_, idxShape)
	);
}

inline float Graphics::Composite::Area() const {
	return __zz_cib_::Graphics::Composite::__zz_cib_Helper::Area_6(__zz_cib_h_);
}

inline float Graphics::Composite::Perimeter() const {
	return __zz_cib_::Graphics::Composite::__zz_cib_Helper::Perimeter_7(__zz_cib_h_);
}

inline void Graphics::Composite::Draw(::Graphics::Context* ctx) const {
	__zz_cib_::Graphics::Composite::__zz_cib_Helper::Draw_8(__zz_cib_h_, __zz_cib_::Graphics::Context::__zz_cib_Helper::__zz_cib_handle(ctx));
}

inline ::Graphics::Composite* Graphics::Composite::CreateCompositeOfRectAndCircle() {
	return __zz_cib_::Graphics::Composite::__zz_cib_Helper::__zz_cib_from_handle(
		__zz_cib_::Graphics::Composite::__zz_cib_Helper::CreateCompositeOfRectAndCircle_9()
	);
}
