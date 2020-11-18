#pragma once

class Interface
{
public:
  virtual int Func() { return 1001; };
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
