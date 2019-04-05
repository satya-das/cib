#pragma  once

#include "__zz_cib_internal/example-predef.h"

class A
{
public:
  A(A&& rhs);
public:
  A(A const & );
  ~A();
  A();
  // int F1(int(*fptr)()) const {
  //   return fptr();
  // }
  int F2(FPTR_ii fptr) const;

private:
  __ZZ_CIB_CLASS_INTERNAL_DEF(A, A);
};

#include "__zz_cib_internal/example-impl.h"
