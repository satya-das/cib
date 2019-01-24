#include "example.h"

A::A(int i)
  : i_(i)
{
}

void B::SetA(A* pA)
{
  a_ = pA;
}

A* B::GetA() const
{
  return a_;
}
