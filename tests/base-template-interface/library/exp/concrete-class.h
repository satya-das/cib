#pragma  once
#include "interface.h"
#include "template.h"

#include "__zz_cib_internal/concrete-class-predef.h"

class StillAnAbstractClass : public ::ClassWithParameterizedBase<::BaseInterface>
{
public:
  StillAnAbstractClass(StillAnAbstractClass&& rhs);
public:
  int ImplF();

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(StillAnAbstractClass, StillAnAbstractClass);
};

class DerivedClass : public ::StillAnAbstractClass
{
public:
  DerivedClass(DerivedClass&& rhs);
public:
  DerivedClass(const DerivedClass&);
  ~DerivedClass();
  DerivedClass();
  virtual int F();

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(DerivedClass, DerivedClass);
};

#include "__zz_cib_internal/concrete-class-postdef.h"
