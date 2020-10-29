#pragma  once

#include "__zz_cib_internal/example-predef.h"

class A
{
public:
  A(A&& rhs);
public:
  A(const A&);
  ~A();
  A(int i = 0);

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(A, A);
};

class B
{
public:
  B(B&& rhs);
public:
  B();
  B(const B&);
  ~B();
  void SetA(A* pA);
  A* GetA() const;

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(B, B);
};

#include "__zz_cib_internal/example-postdef.h"
