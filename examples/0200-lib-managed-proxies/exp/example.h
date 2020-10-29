#pragma  once
#include <memory>

#include "__zz_cib_internal/example-predef.h"

class Facade
{
public:
  Facade(Facade&& rhs);
public:
  virtual ~Facade();
  virtual int f() const = 0;
protected:
  Facade();

private:
  __ZZ_CIB_FACADE_CLASS_INTERNALS(Facade, Facade);
};

struct Base
{
public:
  Base(Base&& rhs);
public:
  Base();
  Base(const Base&);
  ~Base();
    int f() const;

  private:
    __ZZ_CIB_PROXY_CLASS_INTERNALS(Base, Base);
  };

struct Derived : public ::Base
{
public:
  Derived(Derived&& rhs);
public:
  Derived();
  Derived(const Derived&);
  ~Derived();
    int f() const;

  private:
    __ZZ_CIB_PROXY_CLASS_INTERNALS(Derived, Derived);
  };

class A
{
public:
  A(A&& rhs);
public:
  A(const A&);
  ~A();
  A();
  const Facade& GetFacadeByRef() const;
  const Facade* GetFacadeByPtr() const;
  Facade* GetNewFacade() const;
  void DeleteFacade(const Facade* p) const;
  Base& GetBase();
  Derived& GetDerived();

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(A, A);
};

#include "__zz_cib_internal/example-postdef.h"
