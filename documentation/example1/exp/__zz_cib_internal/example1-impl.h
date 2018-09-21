#include "__zz_cib_Example-ids.h"
#include "__zz_cib_Example-helper.h"

namespace __zz_cib_ { namespace Example { namespace A {
	class __zz_cib_Helper : public __zz_cib_::__zz_cib_Helper {
	private:
		friend class ::Example::A;

		static void SomeFunc_1(__zz_cib_HANDLE* __zz_cib_obj) {
			using SomeFuncProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*);
			auto method = instance().getMethod<SomeFuncProc>(__zz_cib_::Example::A::__zz_cib_methodid::SomeFunc_1);
			return method(__zz_cib_obj);
		}
		static __zz_cib_HANDLE* __zz_cib_new_2() {
			using __zz_cib_newProc = __zz_cib_HANDLE* (__zz_cib_decl *) ();
			auto method = instance().getMethod<__zz_cib_newProc>(__zz_cib_::Example::A::__zz_cib_methodid::__zz_cib_new_2);
			return method();
		}
		static void __zz_cib_delete_3(__zz_cib_HANDLE* __zz_cib_obj) {
			if (__zz_cib_obj) {
				using __zz_cib_deleteProc = void (__zz_cib_decl *) (__zz_cib_HANDLE*);
				auto method = instance().getMethod<__zz_cib_deleteProc>(__zz_cib_::Example::A::__zz_cib_methodid::__zz_cib_delete_3);
				return method(__zz_cib_obj);
			}
		}
		__zz_cib_Helper()
			: __zz_cib_::__zz_cib_Helper(
				__zz_cib_Example_GetMethodTable(
					__zz_cib_::__zz_cib_classid::__Example__A)) {}
		static const __zz_cib_Helper& instance() {
			static __zz_cib_Helper helper;
			return helper;
		}

	public:
		static __zz_cib_HANDLE* __zz_cib_handle(const ::Example::A* __zz_cib_obj) {
			return __zz_cib_obj->__zz_cib_h_;
		}
		static __zz_cib_HANDLE* __zz_cib_handle(const ::Example::A& __zz_cib_obj) {
			return __zz_cib_obj.__zz_cib_h_;
		}
		static ::Example::A* __zz_cib_from_handle(__zz_cib_HANDLE* h) {
			return new ::Example::A(h);
		}
		::Example::A& __zz_cib_from_handle(__zz_cib_HANDLE& h) {
			return *__zz_cib_from_handle(&h);
		}
		::Example::A const * __zz_cib_from_handle(const __zz_cib_HANDLE* h) {
			return __zz_cib_from_handle(const_cast<__zz_cib_HANDLE*>(h));
		}
		::Example::A const & __zz_cib_from_handle(const __zz_cib_HANDLE& h) {
			return *__zz_cib_from_handle(const_cast<__zz_cib_HANDLE*>(&h));
		}
		static __zz_cib_HANDLE* __zz_cib_release_handle(::Example::A* __zz_cib_obj) {
			auto h = __zz_cib_obj->__zz_cib_h_;
			__zz_cib_obj->__zz_cib_h_ = nullptr;
			return h;
		}
	};
}}}

inline Example::A::A(__zz_cib_::__zz_cib_HANDLE* h)
	: __zz_cib_h_(h)
{}

inline Example::A::A(A&& rhs)
	: __zz_cib_h_(rhs.__zz_cib_h_)
{
	rhs.__zz_cib_h_ = nullptr;
}

inline void Example::A::SomeFunc() {
	__zz_cib_::Example::A::__zz_cib_Helper::SomeFunc_1(__zz_cib_h_);
}

inline Example::A::A()
	: A(__zz_cib_::Example::A::__zz_cib_Helper::__zz_cib_new_2())
{}

inline Example::A::~A() {
	auto h = __zz_cib_::Example::A::__zz_cib_Helper::__zz_cib_release_handle(this);
	__zz_cib_::Example::A::__zz_cib_Helper::__zz_cib_delete_3(h);
}
