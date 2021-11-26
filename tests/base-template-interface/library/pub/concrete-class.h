#pragma once

#include "interface.h"
#include "template.h"

class StillAnAbstractClass : public ClassWithParameterizedBase<BaseInterface>
{
public:
  StillAnAbstractClass();

  int ImplF()
  {
    return 10;
  }
};

class DerivedClass : public StillAnAbstractClass
{
public:
  DerivedClass();

  int F() override
  {
    return ImplF();
  }
};
