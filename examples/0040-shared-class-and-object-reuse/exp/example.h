#pragma  once

#include "__zz_cib_internal/example-predef.h"

//! A vividly trivial class
//! Contains just a simple method.
class A final
{
public:
  A();
  A(const A& a);
  A(A&&) = delete;
  ~A();
  //! Doesn't do anything meaningful
  //! @note It is just for explaining how cib works.
  int SomeFunc(int x);

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
