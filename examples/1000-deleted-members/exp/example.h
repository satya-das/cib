#pragma  once

#include "__zz_cib_internal/example-predef.h"

class A
{
public:
  A(A&& rhs);
public:
  ~A();
  A();
  A(const A&) = delete;
  const A& operator=(const A&) = delete;
  int f();

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(A, A);
};

class B
{
public:
  B(B&& rhs);
public:
  ~B();
  B();
  int g();

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(B, B);
};

#include "__zz_cib_internal/example-postdef.h"
