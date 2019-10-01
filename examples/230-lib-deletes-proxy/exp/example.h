#pragma  once
#include <memory>

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
  I const & f() const;
  I const * g() const;
  I* c() const;
  void d(I const * p) const;

private:
  __ZZ_CIB_CLASS_INTERNAL_DEF(A, A);
};

#include "__zz_cib_internal/example-postdef.h"
