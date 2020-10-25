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
  __ZZ_CIB_FACADE_CLASS_INTERNALS(Facade, Facade);
};

class PublicFacadeImpl : public ::Facade
{
public:
  PublicFacadeImpl(PublicFacadeImpl&& rhs);
public:
  PublicFacadeImpl(const PublicFacadeImpl& );
  ~PublicFacadeImpl();
  PublicFacadeImpl();
  virtual void F();

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(PublicFacadeImpl, PublicFacadeImpl);
};

class A
{
public:
  A(A&& rhs);
public:
  A(const A& );
  ~A();
  A();
  Facade* PublicFacade();
  Facade* PrivateFacade1();
  Facade* PrivateFacade2();

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(A, A);
};

#include "__zz_cib_internal/example-postdef.h"
