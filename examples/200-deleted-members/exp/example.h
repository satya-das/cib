#pragma  once

#include "__zz_cib_internal/example-predef.h"

class A
{
public:
  A(A&& rhs);
public:
  ~A();
  A();
  A(A const & ) = delete;
  A const & operator=(A const & ) = delete;
  int f();

private:
  __ZZ_CIB_CLASS_INTERNAL_DEF(A, A);
};

#include "__zz_cib_internal/example-postdef.h"
