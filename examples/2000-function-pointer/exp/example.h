#pragma  once

#include "__zz_cib_internal/example-predef.h"

class A
{
public:
  A(A&& rhs);
public:
  A(const A& );
  ~A();
  A();
  // int F1(int(*fptr)()) const {
  //   return fptr();
  // }
  using FPTR_ii = int (*) (int);
;
  int F2(FPTR_ii fptr) const;

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(A, A);
};

#include "__zz_cib_internal/example-postdef.h"
