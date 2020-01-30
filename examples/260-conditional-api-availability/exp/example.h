#pragma  once

#include "__zz_cib_internal/example-predef.h"

class A
{
public:
  A(A&& rhs);
public:
  A(A const & );
  A();
  virtual ~A();
  int f0();
#if  COND // Start of a conditional group, also start of 1st subgroup
  int f1();
  int f2();
#elif  COND2 // OPTIONAL. Start of 2nd subgroup
  int f3();
#else 
  int f4();
  int f5();
  int f6();
#endif
  int f7();
  int func() const;
protected:
  virtual int DoFunc() const;

private:
  __ZZ_CIB_CLASS_INTERNAL_DEF(A, A);
};

#include "__zz_cib_internal/example-postdef.h"
