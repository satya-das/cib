#include "B.h"
#include "example.h"

A::A()
{
}

A::A(const A&)
{
}

A::~A()
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
