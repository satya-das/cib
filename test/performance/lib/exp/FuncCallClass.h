#pragma  once

#ifdef PERFLIB
#	define PERFTESTAPI	__declspec(dllexport)
#elif  !defined(CIBPERFTEST)
#	define PERFTESTAPI	__declspec(dllimport)
#else 
#	define PERFTESTAPI
#endif

#include "__zz_cib_internal/FuncCallClass_impl1.h"

class FuncCallClass
{
public:
	static void SimplestFunc();
	void SimplestMethod();
	double FuncWith3Param(int x, double b, float c);
	FuncCallClass();

private:
	__ZZ_CIB_CLASS_INTERNAL_DEF(FuncCallClass, ::FuncCallClass);
};


#include "__zz_cib_internal/FuncCallClass_impl2.h"
