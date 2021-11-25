#pragma once

#include <functional>

class Interface
{
public:
  //! Just to disrupt vtable.
  virtual int Gunc() = 0;
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
    return pInterface->Func() + pInterface->PrivateVirtualFunc() + CallNewMethod(pInterface);
  }

private:
  int CallNewMethod(Interface* pInterface) const
  {
    try
    {
      // new client
      return pInterface->Gunc();
    }
    catch (const std::bad_function_call&)
    {
      // old client
      return 0;
    }
  }
};
