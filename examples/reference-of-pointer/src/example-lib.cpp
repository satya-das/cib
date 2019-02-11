#include "example.h"

int A::VirtualFunction() const
{
  return 5;
}

int B::VirtualFunction() const
{
  return 10;
}

int GetNewA(A*& pA)
{
  pA = new A;

  return 50;
}

int GetNewB(A*& pA)
{
  pA = new B;

  return 100;
}

int GetNewA(const A*& pA)
{
  pA = new A;

  return 500;
}

int GetNewB(const A*& pA)
{
  pA = new B;

  return 1000;
}
