#pragma once

#include <functional>

class Interface
{
public:
  //! Just to disrupt vtable.
  virtual int Gunc() = 0;
  virtual int Func() = 0;

  virtual ~Interface() {}
};

class A
{
public:
  A();
  int UseInterface(Interface* pInterface) const
  {
    return pInterface->Func() + CallNewMethod(pInterface);
  }

private:
  int CallNewMethod(Interface* pInterface) const
  {
    try
    {
      // new client
      return pInterface->Gunc();
    }
    catch (std::bad_function_call&)
    {
      // old client
      return 0;
    }
  }
};
