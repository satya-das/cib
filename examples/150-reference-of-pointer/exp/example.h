#pragma  once

#include "__zz_cib_internal/example-predef.h"

class A
{
public:
  A(A&& rhs);
public:
  A();
  A(const A& );
  virtual int VirtualFunction() const;
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
  B();
  virtual ~B();
  virtual int VirtualFunction() const;
  // A*& getA()
  // {
  //   return mpA;
  // }

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(B, B);
};

int GetNewA(A*& pA);
int GetNewB(A*& pA);
int GetNewA(const A*& pA);
int GetNewB(const A*& pA);
#include "__zz_cib_internal/example-postdef.h"
