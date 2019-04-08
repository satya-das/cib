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
    int SomeFunc() { return 1; }

  private:
    //! Just to ensure object layout gets disrupted.
    //! Old clients built with previous header should keep working.
    int x1, x2;
  };
}