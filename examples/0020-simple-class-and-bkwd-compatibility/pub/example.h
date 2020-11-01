#pragma once


//! A vividly trivial class
//! Contains just a simple method.
class A
{
public:
  A();
  A(const A& a);
  A(A&&) = delete;
  ~A();
  //! Doesn't do anything meaningful
  //! @note It is just for explaining how cib works.
  int SomeFunc(int x) { return m + x; }
  
private:
  double f {0.0};
  int m {1};
};

