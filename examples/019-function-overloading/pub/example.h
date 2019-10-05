#pragma once

//! Contains example definitions to explain cib's functioning
namespace Example
{
  //! A vividly trivial class
  //! Contains just a simple method.
  class A
  {
  public:
    A();
    //! Doesn't do anything meaningful
    //! @note It is just for explaining how cib works.
    int Func() { return x; }
    int Func(float) { return 2*x; }
    
  private:
    int x {1};
  };
}

