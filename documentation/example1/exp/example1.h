#pragma  once

#include "__zz_cib_internal/example1-predef.h"

namespace Example
{
	class A
	{
	public:
		A(A&& rhs);
	public:
		void SomeFunc();
		A();
		A(const ::Example::A& __zz_cib_param0);
		~A();

	private:
		__ZZ_CIB_CLASS_INTERNAL_DEF(A, Example::A);
	};
}

#include "__zz_cib_internal/example1-impl.h"
