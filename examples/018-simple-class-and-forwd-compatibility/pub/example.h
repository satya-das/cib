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
    int SomeFunc() { return 2; }

    //! Adde method in new version
    int AnotherFunction() { return 109; }
  private:
    //! Make sure object layout is changed
    float x, y;
  };
}
