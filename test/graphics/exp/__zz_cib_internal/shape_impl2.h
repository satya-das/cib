#include "__zz_cib_Graphics_ids.h"
#include <cassert>

	namespace __zz_cib_ { namespace Graphics {
		namespace Shape { class __zz_cib_Helper {
			friend class ::Graphics::Shape;

			static void __zz_cib_delete_1(__zz_cib_::HANDLE* __zz_cib_obj) {
				using __zz_cib_deleteProc = void (__stdcall *) (__zz_cib_::HANDLE*);
				auto proc = (__zz_cib_deleteProc) instance().mtbl[__zz_cib_::Graphics::Shape::__zz_cib_methodid::__zz_cib_delete_1];
				return proc(__zz_cib_obj);
			}
		private:
			__zz_cib_::MethodTable mtbl;
			__zz_cib_Helper() {
				size_t mnum = 0;
				GraphicsLib_GetMethodTable(__zz_cib_::GraphicsLib::__zz_cib_classid::__Graphics__Shape, &mtbl, &mnum);
				assert(mnum >= __zz_cib_::Graphics::Shape::__zz_cib_methodid::__zz_cib_next_method_id);
			}
			static const __zz_cib_Helper& instance() {
				static __zz_cib_Helper bridgeIns;
				return bridgeIns;
			}

		public:
			static __zz_cib_::HANDLE* __zz_cib_handle(::Graphics::Shape* __zz_cib_obj) {
				return __zz_cib_obj->__zz_cib_h_;
			}
			static void __zz_cib_release_handle(::Graphics::Shape* __zz_cib_obj) {
				__zz_cib_obj->__zz_cib_h_ = nullptr;
			}
		};
	}}
}

inline Graphics::Shape::Shape(__zz_cib_::HANDLE* h)
	: __zz_cib_h_(h)
{}

inline Graphics::Shape::~Shape(){
	__zz_cib_::Graphics::Shape::__zz_cib_Helper::__zz_cib_delete_1(__zz_cib_h_);
}
