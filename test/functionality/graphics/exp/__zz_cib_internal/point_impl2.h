#include "__zz_cib_Graphics_ids.h"
#include <cassert>

	namespace __zz_cib_ {
		namespace Point {
			class __zz_cib_Helper {
				friend class ::Point;

				static __zz_cib_::HANDLE* __zz_cib_new_1(float x, float y) {
					using __zz_cib_newProc = __zz_cib_::HANDLE* (__zz_cib_decl *) (float x, float y);
					auto proc = getProc<__zz_cib_newProc>(__zz_cib_::Point::__zz_cib_methodid::__zz_cib_new_1);
					return proc(x, y);
				}
				static float X_2(__zz_cib_::HANDLE* __zz_cib_obj) {
					using XProc = float (__zz_cib_decl *) (__zz_cib_::HANDLE*);
					auto proc = getProc<XProc>(__zz_cib_::Point::__zz_cib_methodid::X_2);
					return proc(__zz_cib_obj);
				}
				static void X_3(__zz_cib_::HANDLE* __zz_cib_obj, float x) {
					using XProc = void (__zz_cib_decl *) (__zz_cib_::HANDLE*, float x);
					auto proc = getProc<XProc>(__zz_cib_::Point::__zz_cib_methodid::X_3);
					return proc(__zz_cib_obj, x);
				}
				static float Y_4(__zz_cib_::HANDLE* __zz_cib_obj) {
					using YProc = float (__zz_cib_decl *) (__zz_cib_::HANDLE*);
					auto proc = getProc<YProc>(__zz_cib_::Point::__zz_cib_methodid::Y_4);
					return proc(__zz_cib_obj);
				}
				static void Y_5(__zz_cib_::HANDLE* __zz_cib_obj, float y) {
					using YProc = void (__zz_cib_decl *) (__zz_cib_::HANDLE*, float y);
					auto proc = getProc<YProc>(__zz_cib_::Point::__zz_cib_methodid::Y_5);
					return proc(__zz_cib_obj, y);
				}
				static __zz_cib_::HANDLE* operatorPlus_6(__zz_cib_::HANDLE* __zz_cib_obj, const __zz_cib_::HANDLE& p) {
					using operatorPlusProc = __zz_cib_::HANDLE* (__zz_cib_decl *) (__zz_cib_::HANDLE*, const __zz_cib_::HANDLE& p);
					auto proc = getProc<operatorPlusProc>(__zz_cib_::Point::__zz_cib_methodid::operatorPlus_6);
					return proc(__zz_cib_obj, p);
				}
				static __zz_cib_::HANDLE* operatorMinus_7(__zz_cib_::HANDLE* __zz_cib_obj, __zz_cib_::HANDLE* p) {
					using operatorMinusProc = __zz_cib_::HANDLE* (__zz_cib_decl *) (__zz_cib_::HANDLE*, __zz_cib_::HANDLE* p);
					auto proc = getProc<operatorMinusProc>(__zz_cib_::Point::__zz_cib_methodid::operatorMinus_7);
					return proc(__zz_cib_obj, p);
				}
			private:
				__zz_cib_::MethodTable mtbl;
				__zz_cib_Helper() {
					mtbl = __zz_cib_GraphicsLib_GetMethodTable(__zz_cib_::GraphicsLib::__zz_cib_classid::__Point);
				}
				static const __zz_cib_Helper& instance() {
					static __zz_cib_Helper helper;
					return helper;
				}
				template<typename _ProcType> static _ProcType getProc(std::uint32_t procId) {
					return reinterpret_cast<_ProcType>(__zz_cib_GetMethodEntry(instance().mtbl, procId));
				}

			public:
				static __zz_cib_::HANDLE* __zz_cib_handle(const ::Point* __zz_cib_obj) {
					return __zz_cib_obj->__zz_cib_h_;
				}
				static __zz_cib_::HANDLE* __zz_cib_handle(const ::Point& __zz_cib_obj) {
					return __zz_cib_obj.__zz_cib_h_;
				}
				static ::Point* __zz_cib_from_handle(__zz_cib_::HANDLE* h) {
					return new ::Point(h);
				}
				::Point& __zz_cib_from_handle(__zz_cib_::HANDLE& h) {
					return *__zz_cib_from_handle(&h);
				}
				::Point const * __zz_cib_from_handle(const __zz_cib_::HANDLE* h) {
					return __zz_cib_from_handle(const_cast<__zz_cib_::HANDLE*>(h));
				}
				::Point const & __zz_cib_from_handle(const __zz_cib_::HANDLE& h) {
					return *__zz_cib_from_handle(const_cast<__zz_cib_::HANDLE*>(&h));
				}
				static __zz_cib_::HANDLE* __zz_cib_release_handle(::Point* __zz_cib_obj) {
					auto h = __zz_cib_obj->__zz_cib_h_;
					__zz_cib_obj->__zz_cib_h_ = nullptr;
					return h;
				}
			};
		}
	}

inline Point::Point(__zz_cib_::HANDLE* h)
	: __zz_cib_h_(h)
{}

inline Point::Point(Point&& rhs)
	: __zz_cib_h_(rhs.__zz_cib_h_)
{	rhs.__zz_cib_h_ = nullptr;
}

inline Point::Point(float x, float y)
	: Point(__zz_cib_::Point::__zz_cib_Helper::__zz_cib_new_1(x, y))
{}

inline float Point::X() const {
	return __zz_cib_::Point::__zz_cib_Helper::X_2(__zz_cib_h_);
}

inline void Point::X(float x) {
	__zz_cib_::Point::__zz_cib_Helper::X_3(__zz_cib_h_, x);
}

inline float Point::Y() const {
	return __zz_cib_::Point::__zz_cib_Helper::Y_4(__zz_cib_h_);
}

inline void Point::Y(float y) {
	__zz_cib_::Point::__zz_cib_Helper::Y_5(__zz_cib_h_, y);
}

inline ::Point Point::operator +(const ::Point& p) const {
	return ::Point(
		__zz_cib_::Point::__zz_cib_Helper::operatorPlus_6(__zz_cib_h_, *__zz_cib_::Point::__zz_cib_Helper::__zz_cib_handle(p))
	);
}

inline ::Point Point::operator -(::Point p) const {
	return ::Point(
		__zz_cib_::Point::__zz_cib_Helper::operatorMinus_7(__zz_cib_h_, __zz_cib_::Point::__zz_cib_Helper::__zz_cib_handle(p))
	);
}
