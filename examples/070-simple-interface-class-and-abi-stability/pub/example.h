#pragma once

class Interface
{
public:
  //! Just to disrupt vtable.
  virtual int Gunc() { return 193; };
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
