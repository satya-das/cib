#pragma  once

#include "__zz_cib_internal/example-predef.h"

class A
{
public:
  A(A&& rhs);
public:
  A(A const & );
  ~A();
  A(int i = 0);

private:
  __ZZ_CIB_CLASS_INTERNAL_DEF(A, A);
};

class B
{
public:
  B(B&& rhs);
public:
  B();
  B(B const & );
  ~B();
  void SetA(A* pA);
  A* GetA() const;

private:
  __ZZ_CIB_CLASS_INTERNAL_DEF(B, B);
};

#include "__zz_cib_internal/example-postdef.h"
