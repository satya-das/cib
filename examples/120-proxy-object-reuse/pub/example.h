#pragma once

class A
{
public:
  A(int i = 0);

private:
  int i_;
};

class B
{
public:
  void SetA(A* pA);
  A*   GetA() const;

private:
  A* a_{nullptr};
};
