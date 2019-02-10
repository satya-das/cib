#pragma  once

#include "__zz_cib_internal/example-predef.h"

class Interface1;
class Interface2;
class Interface3;
class Interface2
{
public:
  Interface2(Interface2&& rhs);
public:
  virtual int f() = 0;
  virtual ~Interface2();
protected:
  Interface2();

private:
  __ZZ_CIB_CLASS_INTERNAL_DEF(Interface2, Interface2);
};
class Interface3
{
public:
  Interface3(Interface3&& rhs);
public:
  virtual int g() = 0;
  virtual ~Interface3();
protected:
  Interface3();

private:
  __ZZ_CIB_CLASS_INTERNAL_DEF(Interface3, Interface3);
};
class Interface1
{
public:
  Interface1(Interface1&& rhs);
public:
  virtual Interface2* p() = 0;
  virtual Interface3& r() = 0;
  virtual ~Interface1();
protected:
  Interface1();

private:
  __ZZ_CIB_CLASS_INTERNAL_DEF(Interface1, Interface1);
};
class A
{
public:
  A(A&& rhs);
public:
  A(A const & );
  ~A();
  A();
  int SetInterface(Interface1* pInterface1) const;

private:
  __ZZ_CIB_CLASS_INTERNAL_DEF(A, A);
};

#include "__zz_cib_internal/example-impl.h"
