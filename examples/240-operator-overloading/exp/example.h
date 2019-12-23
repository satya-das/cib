#pragma  once

#include "__zz_cib_internal/example-predef.h"

namespace Example
{
  class A
  {
  public:
    A(A&& rhs);
  public:
    A(A const & );
    ~A();
    A();
    A& operator <<(int x);
    A& operator >>(int& x);

  private:
    __ZZ_CIB_CLASS_INTERNAL_DEF(A, Example::A);
  };
}

#include "__zz_cib_internal/example-postdef.h"
