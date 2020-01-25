#pragma  once

#include "__zz_cib_internal/example-predef.h"

class Facade
{
public:
  Facade(Facade&& rhs);
public:
  virtual void F() = 0;
  virtual ~Facade();
protected:
  Facade();

private:
  __ZZ_CIB_CLASS_INTERNAL_DEF(Facade, Facade);
};

class PublicFacadeImpl : public ::Facade
{
public:
  PublicFacadeImpl(PublicFacadeImpl&& rhs);
public:
  PublicFacadeImpl(PublicFacadeImpl const & );
  ~PublicFacadeImpl();
  PublicFacadeImpl();
  virtual void F();

private:
  __ZZ_CIB_CLASS_INTERNAL_DEF(PublicFacadeImpl, PublicFacadeImpl);
};

class A
{
public:
  A(A&& rhs);
public:
  A(A const & );
  ~A();
  A();
  Facade* PublicFacade();
  Facade* PrivateFacade1();
  Facade* PrivateFacade2();

private:
  __ZZ_CIB_CLASS_INTERNAL_DEF(A, A);
};

#include "__zz_cib_internal/example-postdef.h"
