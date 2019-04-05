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
class B : public ::A
{
public:
  B(B&& rhs);
public:
  B(B const & );
  ~B();
  B();
  virtual int VirtFunc();
  static B* Create();

private:
  __ZZ_CIB_CLASS_INTERNAL_DEF(B, B);
};

#include "__zz_cib_internal/example-impl.h"
