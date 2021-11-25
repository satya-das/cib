#pragma once

class Interface
{
public:
  virtual int Func() = 0;
  virtual ~Interface() {}
private:
  virtual int PrivateVirtualFunc() = 0;

  friend class A;
};

class A
{
public:
  A();
  int UseInterface(Interface* pInterface) const
  {
    return pInterface->Func() + pInterface->PrivateVirtualFunc();
  }
};
