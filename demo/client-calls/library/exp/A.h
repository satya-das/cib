#pragma  once

#include "__zz_cib_internal/A-predef.h"

class A
{
public:
  A(A&& rhs);
public:
  A();
  A(A const & );
  virtual ~A();
  int F();
  int F(int );
  virtual int V();

private:
  __ZZ_CIB_CLASS_INTERNAL_DEF(A, A);
};

#include "__zz_cib_internal/A-postdef.h"
