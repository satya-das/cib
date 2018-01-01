#include "__zz_cib_Graphics_ids.h"
#include <cassert>

	namespace __zz_cib_ { namespace Graphics {
		namespace Shape { class __zz_cib_Helper {
			friend class ::Graphics::Shape;
			static __zz_cib_::MethodTable __zz_cib_get_proxy_method_table();

			static void __zz_cib_delete_1(__zz_cib_::HANDLE* __zz_cib_obj) {
				using __zz_cib_deleteProc = void (__stdcall *) (__zz_cib_::HANDLE*);
				auto proc = (__zz_cib_deleteProc) instance().mtbl[__zz_cib_::Graphics::Shape::__zz_cib_methodid::__zz_cib_delete_1];
				return proc(__zz_cib_obj);
			}
			static __zz_cib_::HANDLE* __zz_cib_new_2(::Graphics::Shape* __zz_cib_proxy) {
				using __zz_cib_newProc = __zz_cib_::HANDLE* (__stdcall *) (::Graphics::Shape*, __zz_cib_::MethodTable);
				auto proc = (__zz_cib_newProc) instance().mtbl[__zz_cib_::Graphics::Shape::__zz_cib_methodid::__zz_cib_new_2];
				return proc(__zz_cib_proxy, __zz_cib_get_proxy_method_table());
			}
		private:
			__zz_cib_::MethodTable mtbl;
			__zz_cib_Helper() {
				std::uint32_t mnum = 0;
				GraphicsLib_GetMethodTable(__zz_cib_::GraphicsLib::__zz_cib_classid::__Graphics__Shape, &mtbl, &mnum);
				assert(mnum >= __zz_cib_::Graphics::Shape::__zz_cib_methodid::__zz_cib_next_method_id);
			}
			static const __zz_cib_Helper& instance() {
				static __zz_cib_Helper helper;
				return helper;
			}

			static std::uint32_t __zz_cib_get_class_id(__zz_cib_::HANDLE* __zz_cib_obj) {
				using __zz_cib_get_class_idProc = std::uint32_t (__stdcall *) (__zz_cib_::HANDLE*);
				auto proc = (__zz_cib_get_class_idProc) instance().mtbl[__zz_cib_::Graphics::Shape::__zz_cib_methodid::__zz_cib_get_class_id_3];
				return proc(__zz_cib_obj);
			}
		public:
			static __zz_cib_::HANDLE* __zz_cib_handle(::Graphics::Shape* __zz_cib_obj) {
				return __zz_cib_obj->__zz_cib_h_;
			}
			static ::Graphics::Shape* __zz_cib_from_handle(__zz_cib_::HANDLE* h);
			static void __zz_cib_release_handle(::Graphics::Shape* __zz_cib_obj) {
				__zz_cib_obj->__zz_cib_h_ = nullptr;
			}
		};
	}}
}

inline Graphics::Shape::Shape(__zz_cib_::HANDLE* h)
	: __zz_cib_h_(h)
{}

inline Graphics::Shape::~Shape() {
	__zz_cib_::Graphics::Shape::__zz_cib_Helper::__zz_cib_delete_1(__zz_cib_h_);
}

inline Graphics::Shape::Shape()
	: Shape(__zz_cib_::Graphics::Shape::__zz_cib_Helper::__zz_cib_new_2(this))
{}
