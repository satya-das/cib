#pragma  once

#include "__zz_cib_internal/example-predef.h"

class Interface
{
public:
  Interface(Interface&& rhs);
public:
  Interface(const Interface& );
  Interface();
  virtual ~Interface();
  int Func();
protected:
  virtual int DoFunc() const;

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(Interface, Interface);
};

#include "__zz_cib_internal/example-postdef.h"
