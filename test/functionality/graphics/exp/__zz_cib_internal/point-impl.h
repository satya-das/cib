#include "__zz_cib_Graphics-ids.h"
#include "__zz_cib_Graphics-helper.h"

namespace __zz_cib_ { namespace Point {
	class __zz_cib_Helper : public __zz_cib_::__zz_cib_Helper {
	private:
		friend class ::Point;

		static __zz_cib_HANDLE* __zz_cib_new_1(float x, float y) {
			using __zz_cib_newProc = __zz_cib_HANDLE* (__zz_cib_decl *) (float x, float y);
			auto method = instance().getMethod<__zz_cib_newProc>(__zz_cib_::Point::__zz_cib_methodid::__zz_cib_new_1);
			return method(x, y);
		}
		static float X_2(__zz_cib_HANDLE* __zz_cib_obj) {
			using XProc = float (__zz_cib_decl *) (__zz_cib_HANDLE*);
			auto method = instance().getMethod<XProc>(__zz_cib_::Point::__zz_cib_methodid::X_2);
			return method(__zz_cib_obj);
		}
		static void X_3(__zz_cib_HANDLE* __zz_cib_obj, float x) {
			using XProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*, float x);
			auto method = instance().getMethod<XProc>(__zz_cib_::Point::__zz_cib_methodid::X_3);
			return method(__zz_cib_obj, x);
		}
		static float Y_4(__zz_cib_HANDLE* __zz_cib_obj) {
			using YProc = float (__zz_cib_decl *) (__zz_cib_HANDLE*);
			auto method = instance().getMethod<YProc>(__zz_cib_::Point::__zz_cib_methodid::Y_4);
			return method(__zz_cib_obj);
		}
		static void Y_5(__zz_cib_HANDLE* __zz_cib_obj, float y) {
			using YProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*, float y);
			auto method = instance().getMethod<YProc>(__zz_cib_::Point::__zz_cib_methodid::Y_5);
			return method(__zz_cib_obj, y);
		}
		static __zz_cib_HANDLE* __zz_cib_OperatorPlus_6(__zz_cib_HANDLE* __zz_cib_obj, const __zz_cib_HANDLE& p) {
			using __zz_cib_OperatorPlusProc = __zz_cib_HANDLE* (__zz_cib_decl *) (__zz_cib_HANDLE*, const __zz_cib_HANDLE& p);
			auto method = instance().getMethod<__zz_cib_OperatorPlusProc>(__zz_cib_::Point::__zz_cib_methodid::__zz_cib_OperatorPlus_6);
			return method(__zz_cib_obj, p);
		}
		static __zz_cib_HANDLE* __zz_cib_OperatorMinus_7(__zz_cib_HANDLE* __zz_cib_obj, __zz_cib_HANDLE* p) {
			using __zz_cib_OperatorMinusProc = __zz_cib_HANDLE* (__zz_cib_decl *) (__zz_cib_HANDLE*, __zz_cib_HANDLE* p);
			auto method = instance().getMethod<__zz_cib_OperatorMinusProc>(__zz_cib_::Point::__zz_cib_methodid::__zz_cib_OperatorMinus_7);
			return method(__zz_cib_obj, p);
		}
		static __zz_cib_HANDLE* __zz_cib_new_8(const __zz_cib_HANDLE& __zz_cib_param0) {
			using __zz_cib_newProc = __zz_cib_HANDLE* (__zz_cib_decl *) (const __zz_cib_HANDLE& __zz_cib_param0);
			auto method = instance().getMethod<__zz_cib_newProc>(__zz_cib_::Point::__zz_cib_methodid::__zz_cib_new_8);
			return method(__zz_cib_param0);
		}
		static void __zz_cib_delete_9(__zz_cib_HANDLE* __zz_cib_obj) {
			if (__zz_cib_obj) {
				using __zz_cib_deleteProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*);
				auto method = instance().getMethod<__zz_cib_deleteProc>(__zz_cib_::Point::__zz_cib_methodid::__zz_cib_delete_9);
				return method(__zz_cib_obj);
			}
		}
		__zz_cib_Helper()
			: __zz_cib_::__zz_cib_Helper(
				__zz_cib_Graphics_GetMethodTable(
					__zz_cib_::__zz_cib_classid::__Point)) {}
		static const __zz_cib_Helper& instance() {
			static __zz_cib_Helper helper;
			return helper;
		}

	public:
		static __zz_cib_HANDLE* __zz_cib_handle(const ::Point* __zz_cib_obj) {
			return __zz_cib_obj->__zz_cib_h_;
		}
		static __zz_cib_HANDLE* __zz_cib_handle(const ::Point& __zz_cib_obj) {
			return __zz_cib_obj.__zz_cib_h_;
		}
		static ::Point* __zz_cib_from_handle(__zz_cib_HANDLE* h) {
			return new ::Point(h);
		}
		::Point& __zz_cib_from_handle(__zz_cib_HANDLE& h) {
			return *__zz_cib_from_handle(&h);
		}
		::Point const * __zz_cib_from_handle(const __zz_cib_HANDLE* h) {
			return __zz_cib_from_handle(const_cast<__zz_cib_HANDLE*>(h));
		}
		::Point const & __zz_cib_from_handle(const __zz_cib_HANDLE& h) {
			return *__zz_cib_from_handle(const_cast<__zz_cib_HANDLE*>(&h));
		}
		static __zz_cib_HANDLE* __zz_cib_release_handle(::Point* __zz_cib_obj) {
			auto h = __zz_cib_obj->__zz_cib_h_;
			__zz_cib_obj->__zz_cib_h_ = nullptr;
			return h;
		}
	};
}}

inline Point::Point(__zz_cib_::__zz_cib_HANDLE* h)
	: __zz_cib_h_(h)
{}

inline Point::Point(Point&& rhs)
	: __zz_cib_h_(rhs.__zz_cib_h_)
{
	rhs.__zz_cib_h_ = nullptr;
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
		__zz_cib_::Point::__zz_cib_Helper::__zz_cib_OperatorPlus_6(__zz_cib_h_, *__zz_cib_::Point::__zz_cib_Helper::__zz_cib_handle(p))
	);
}

inline ::Point Point::operator -(::Point p) const {
	return ::Point(
		__zz_cib_::Point::__zz_cib_Helper::__zz_cib_OperatorMinus_7(__zz_cib_h_, __zz_cib_::Point::__zz_cib_Helper::__zz_cib_handle(p))
	);
}

inline Point::Point(const ::Point& __zz_cib_param0)
	: Point(__zz_cib_::Point::__zz_cib_Helper::__zz_cib_new_8(*__zz_cib_::Point::__zz_cib_Helper::__zz_cib_handle(__zz_cib_param0)))
{}

inline Point::~Point() {
	auto h = __zz_cib_::Point::__zz_cib_Helper::__zz_cib_release_handle(this);
	__zz_cib_::Point::__zz_cib_Helper::__zz_cib_delete_9(h);
}
