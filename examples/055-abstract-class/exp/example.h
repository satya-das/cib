#pragma  once

#include "__zz_cib_internal/example-predef.h"

class I
{
public:
  I(I&& rhs);
public:
  virtual ~I();
  virtual int f() const = 0;

private:
  __ZZ_CIB_CLASS_INTERNAL_DEF(I, I);
};

class A
{
public:
  A(A&& rhs);
public:
  A(A const & );
  ~A();
  A();
  I* f() const;
  I* g();

private:
  __ZZ_CIB_CLASS_INTERNAL_DEF(A, A);
};

#include "__zz_cib_internal/example-postdef.h"
