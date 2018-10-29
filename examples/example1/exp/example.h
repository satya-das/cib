#pragma  once

#include "__zz_cib_internal/example-predef.h"

//! Contains example definitions to explain cib's functioning
namespace Example
{
	//! A vividly trivial class
	//! Contains just a simple method.
	class A
	{
	public:
		A(A&& rhs);
	public:
		A();
		A(const A& );
		~A();
		//! Doesn't do anything meaningful
		//! @note It is just for explaining how cib works.
		void SomeFunc();

	private:
		__ZZ_CIB_CLASS_INTERNAL_DEF(A, Example::A);
	};
}

#include "__zz_cib_internal/example-impl.h"
