#pragma once

class Interface
{
public:
  virtual int Func() = 0;
  virtual ~Interface() {}
};

class A
{
public:
  A();
  int UseInterface(Interface* pInterface) const
  {
    return pInterface->Func();
  }
};
