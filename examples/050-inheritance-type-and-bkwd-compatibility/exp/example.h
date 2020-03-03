#pragma  once

#include "__zz_cib_internal/example-predef.h"

class A
{
public:
  A(A&& rhs);
public:
  A(const A& );
  A();
  virtual int AnotherVirtFunc();
  virtual int VirtFunc();
  int SomeFunc();
  virtual ~A();

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(A, A);
};

class B : public ::A
{
public:
  B(B&& rhs);
public:
  B(const B& );
  ~B();
  B();
  virtual int VirtFunc();
  static B* Create();

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(B, B);
};

#include "__zz_cib_internal/example-postdef.h"
