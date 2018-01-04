#include "__zz_cib_PerfTest_ids.h"
#include <cassert>

	namespace __zz_cib_ {
		namespace FuncCallClass { class __zz_cib_Helper {
			friend class ::FuncCallClass;

			static void SimplestFunc_1() {
				using SimplestFuncProc = void (__stdcall *) ();
				auto proc = (SimplestFuncProc) instance().mtbl[__zz_cib_::FuncCallClass::__zz_cib_methodid::SimplestFunc_1];
				return proc();
			}
			static void SimplestMethod_2(__zz_cib_::HANDLE* __zz_cib_obj) {
				using SimplestMethodProc = void (__stdcall *) (__zz_cib_::HANDLE*);
				auto proc = (SimplestMethodProc) instance().mtbl[__zz_cib_::FuncCallClass::__zz_cib_methodid::SimplestMethod_2];
				return proc(__zz_cib_obj);
			}
			static double FuncWith3Param_3(__zz_cib_::HANDLE* __zz_cib_obj, int x, double b, float c) {
				using FuncWith3ParamProc = double (__stdcall *) (__zz_cib_::HANDLE*, int x, double b, float c);
				auto proc = (FuncWith3ParamProc) instance().mtbl[__zz_cib_::FuncCallClass::__zz_cib_methodid::FuncWith3Param_3];
				return proc(__zz_cib_obj, x, b, c);
			}
			static __zz_cib_::HANDLE* __zz_cib_new_4() {
				using __zz_cib_newProc = __zz_cib_::HANDLE* (__stdcall *) ();
				auto proc = (__zz_cib_newProc) instance().mtbl[__zz_cib_::FuncCallClass::__zz_cib_methodid::__zz_cib_new_4];
				return proc();
			}
		private:
			__zz_cib_::MethodTable mtbl;
			__zz_cib_Helper() {
				std::uint32_t mnum = 0;
				PerfTestLib_GetMethodTable(__zz_cib_::PerfTestLib::__zz_cib_classid::__FuncCallClass, &mtbl, &mnum);
				assert(mnum >= __zz_cib_::FuncCallClass::__zz_cib_methodid::__zz_cib_next_method_id);
			}
			static const __zz_cib_Helper& instance() {
				static __zz_cib_Helper helper;
				return helper;
			}

		public:
			static __zz_cib_::HANDLE* __zz_cib_handle(::FuncCallClass* __zz_cib_obj) {
				return __zz_cib_obj->__zz_cib_h_;
			}
			static ::FuncCallClass* __zz_cib_from_handle(__zz_cib_::HANDLE* h) {
				return new ::FuncCallClass(h);
			}
			static __zz_cib_::HANDLE* __zz_cib_release_handle(::FuncCallClass* __zz_cib_obj) {
				auto h = __zz_cib_obj->__zz_cib_h_;
				__zz_cib_obj->__zz_cib_h_ = nullptr;
				return h;
			}
		};
	}
}

inline FuncCallClass::FuncCallClass(__zz_cib_::HANDLE* h)
	: __zz_cib_h_(h)
{}

inline void FuncCallClass::SimplestFunc() {
	__zz_cib_::FuncCallClass::__zz_cib_Helper::SimplestFunc_1();
}

inline void FuncCallClass::SimplestMethod() {
	__zz_cib_::FuncCallClass::__zz_cib_Helper::SimplestMethod_2(__zz_cib_h_);
}

inline double FuncCallClass::FuncWith3Param(int x, double b, float c) {
	return __zz_cib_::FuncCallClass::__zz_cib_Helper::FuncWith3Param_3(__zz_cib_h_, x, b, c);
}

inline FuncCallClass::FuncCallClass()
	: FuncCallClass(__zz_cib_::FuncCallClass::__zz_cib_Helper::__zz_cib_new_4())
{}
