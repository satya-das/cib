#pragma  once

#include "__zz_cib_internal/example-predef.h"

class A
{
public:
  A(A&& rhs);
public:
  A(A const & );
  A();
  virtual int AnotherVirtFunc();
  virtual int VirtFunc();
  int SomeFunc();
  virtual ~A();

private:
  __ZZ_CIB_CLASS_INTERNAL_DEF(A, A);
};
class I1
{
public:
  I1(I1&& rhs);
public:
  I1();
  I1(I1 const & );
  virtual int F();
  virtual ~I1();

private:
  __ZZ_CIB_CLASS_INTERNAL_DEF(I1, I1);
};
class I2
{
public:
  I2(I2&& rhs);
public:
  I2();
  I2(I2 const & );
  virtual int G();
  virtual ~I2();

private:
  __ZZ_CIB_CLASS_INTERNAL_DEF(I2, I2);
};
class B : public ::I1,public ::A,public ::I2
{
public:
  B(B&& rhs);
public:
  B(B const & );
  ~B();
  B();
  virtual int VirtFunc();

private:
  __ZZ_CIB_CLASS_INTERNAL_DEF(B, B);
};

#include "__zz_cib_internal/example-impl.h"
