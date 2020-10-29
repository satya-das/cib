#pragma  once
#include <functional>

#include "__zz_cib_internal/example-predef.h"

class Interface
{
public:
  Interface(Interface&& rhs);
public:
  //! Just to disrupt vtable.
  virtual int Gunc() = 0;
  virtual int Func() = 0;
  virtual ~Interface();
protected:
  Interface();

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(Interface, Interface);
};

class A
{
public:
  A(A&& rhs);
public:
  A(const A&);
  ~A();
  A();
  int UseInterface(Interface* pInterface) const;

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(A, A);
};

#include "__zz_cib_internal/example-postdef.h"
