#pragma  once

#include "__zz_cib_internal/example-predef.h"

// Just by having a virtual function makes the class interface
// Because client can override virtual method and library can end up calling client code.
class Interface
{
public:
  Interface(Interface&& rhs);
public:
  Interface(Interface const & );
  Interface();
  virtual ~Interface();
  int Func();
protected:
  virtual int DoFunc() const;

private:
  __ZZ_CIB_CLASS_INTERNAL_DEF(Interface, Interface);
};

#include "__zz_cib_internal/example-postdef.h"
