#pragma  once

#include "__zz_cib_internal/example-predef.h"

//! A vividly trivial class
//! Contains just a simple method.
class A
{
public:
  A();
  A(const A& a);
  A(A&&) = delete;
  ~A();
  //! Doesn't do anything meaningful
  //! @note It is just for explaining how cib works.
  int SomeFunc();
  //! Adde method in new version
  int AnotherFunction();

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(A, A);
};

#include "__zz_cib_internal/example-postdef.h"
