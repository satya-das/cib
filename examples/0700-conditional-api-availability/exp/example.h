#pragma  once

#include "__zz_cib_internal/example-predef.h"

class A
{
public:
  A(A&& rhs);
public:
  A(const A& );
  A();
  virtual ~A();
  int f0();
#if  COND // Start of a conditional group, also start of 1st subgroup
  int f1();
  int f2();
#elif  COND2 // OPTIONAL. Start of 2nd subgroup
  int f3();
#else 
  int f4();
  int f5();
  int f6();
#endif
  int f7();
  int func() const;
protected:
  virtual int DoFunc() const;

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(A, A);
};

class B
{
public:
  B(B&& rhs);
public:
  B(const B& );
  B();
  ~B();
#if  COND // Start of a conditional group, also start of 1st subgroup
  int f1();
  int f2();
#endif

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(B, B);
};

class C
{
public:
  C(C&& rhs);
public:
  C(const C& );
  C();
  ~C();
#if  COND // Start of a conditional group, also start of 1st subgroup
  int f1();
  int f2();
#endif
  int f3();

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(C, C);
};

class P
{
public:
  P(P&& rhs);
public:
  P(const P& );
  P();
  virtual ~P();
#if  COND // Start of a conditional group, also start of 1st subgroup
  virtual int f1();
  virtual int f2();
#endif
  virtual int f3();

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(P, P);
};

#include "__zz_cib_internal/example-postdef.h"
