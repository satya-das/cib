#pragma  once

#include "__zz_cib_internal/example-predef.h"

namespace Example
{
  class A
  {
  public:
    A(A&& rhs);
  public:
    A(const A&);
    ~A();
    A();
  protected:
    int f() const;

  private:
    __ZZ_CIB_PROXY_CLASS_INTERNALS(A, Example::A);
  };
}

#include "__zz_cib_internal/example-postdef.h"
