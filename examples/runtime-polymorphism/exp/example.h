#pragma  once

#include "__zz_cib_internal/example-predef.h"

//! Example to see what cib does for classes with virtual methods.
class A
{
public:
  A(A&& rhs);
public:
  A();
  A(A const & );
  //! This is to know what cib does with virtual functions.
  virtual int VirtFunc();
  //! Doesn't do anything meaningful
  //! @note It is just for explaining how cib works.
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
  B();
  B(B const & );
  ~B();
  virtual int VirtFunc();

private:
  __ZZ_CIB_CLASS_INTERNAL_DEF(B, B);
};

#include "__zz_cib_internal/example-impl.h"
