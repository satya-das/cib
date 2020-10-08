#pragma  once

#include "__zz_cib_internal/example-predef.h"

class I
{
public:
  I(I&& rhs);
public:
  virtual ~I();
  virtual int f() const = 0;
protected:
  I();

private:
  __ZZ_CIB_FACADE_CLASS_INTERNALS(I, I);
};

class A
{
public:
  A(A&& rhs);
public:
  A(const A& );
  ~A();
  A();
  I* f() const;
  I* g();

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(A, A);
};

#include "__zz_cib_internal/example-postdef.h"
