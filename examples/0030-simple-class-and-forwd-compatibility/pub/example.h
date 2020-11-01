#pragma once


//! A vividly trivial class
//! Contains just a simple method.
class A final
{
public:
  A();
  A(const A& a);
  A(A&&) = delete;
  ~A();
  //! Doesn't do anything meaningful
  //! @note It is just for explaining how cib works.
  int SomeFunc(int x) { return m + x; }

  //! Added method in new version
  int AnotherFunction() { return 109; }
  
private:
  char c {0x1f};
  int  m {2};
};
