#pragma  once

#include "__zz_cib_internal/example-predef.h"

//! Example to see what cib does for classes with virtual methods.
class A
{
public:
  A(A&& rhs);
public:
  A(const A&);
  A();
  virtual int AnotherVirtFunc();
  //! This is to know what cib does with virtual functions.
  virtual int VirtFunc();
  virtual ~A();

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(A, A);
};

class B : public ::A
{
public:
  B(B&& rhs);
public:
  B(const B&);
  ~B();
  B();
  virtual int VirtFunc();
  static B* Create();

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(B, B);
};

#include "__zz_cib_internal/example-postdef.h"
