#include "A.h"

#include <iostream>

void TestClientCallingLibrary(A* pA)
{
  std::cout << "a.F()  returned " << pA->F() << std::endl;
  std::cout << "a.F(5) returned " << pA->F(5) << std::endl;
  std::cout << "a.V()  returned " << pA->V() << std::endl;
}

int main(int argc, char* argv[])
{
  A a;
  TestClientCallingLibrary(&a);
  return 0;
}
