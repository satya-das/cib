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
  __ZZ_CIB_CLASS_INTERNAL_DEF(Interface, Interface);
};
class A
{
public:
  A(A&& rhs);
public:
  A(A const & );
  ~A();
  A();
  int UseInterface(Interface* pInterface) const;

private:
  __ZZ_CIB_CLASS_INTERNAL_DEF(A, A);
};

#include "__zz_cib_internal/example-postdef.h"
