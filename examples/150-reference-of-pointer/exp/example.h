#pragma  once

#include "__zz_cib_internal/example-predef.h"

class A
{
public:
  A(A&& rhs);
public:
  A();
  A(A const & );
  virtual int VirtualFunction() const;
  virtual ~A();

private:
  __ZZ_CIB_CLASS_INTERNAL_DEF(A, A);
};

class B : public ::A
{
public:
  B(B&& rhs);
public:
  B();
  B(B const & );
  virtual int VirtualFunction() const;
  virtual ~B();

private:
  __ZZ_CIB_CLASS_INTERNAL_DEF(B, B);
};

int GetNewA(A*& pA);
int GetNewB(A*& pA);
int GetNewA(A const *& pA);
int GetNewB(A const *& pA);
#include "__zz_cib_internal/example-postdef.h"
