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

private:
  int m {1};
};

class B
{
public:
  void SetA(A* pA);
  A*   GetA() const;

private:
  A* a_{nullptr};
};
