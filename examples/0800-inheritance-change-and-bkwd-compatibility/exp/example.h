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

class I1
{
public:
  I1(I1&& rhs);
public:
  I1();
  I1(const I1& );
  virtual int F();
  virtual ~I1();

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(I1, I1);
};

class I2
{
public:
  I2(I2&& rhs);
public:
  I2();
  I2(const I2& );
  virtual int G();
  virtual ~I2();

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(I2, I2);
};

class B : public ::I1,public ::A,public ::I2
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
