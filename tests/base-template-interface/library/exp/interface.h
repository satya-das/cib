#pragma  once

#include "__zz_cib_internal/interface-predef.h"

class BaseInterface
{
public:
  BaseInterface(BaseInterface&& rhs);
public:
  virtual ~BaseInterface();
  virtual int F() = 0;
protected:
  BaseInterface();

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(BaseInterface, BaseInterface);
};

#include "__zz_cib_internal/interface-postdef.h"
