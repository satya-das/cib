#include "Circle.h"

#include <iostream>

void TestClientCallingLibrary(Circle* pCircle)
{
  std::cout << "Radius of circle = " << pCircle->Radius() << std::endl;
  std::cout << "Area of circle   = " << pCircle->Area() << std::endl;

  std::cout << std::endl;
}

int main(int argc, char* argv[])
{
  Circle c(10);
  TestClientCallingLibrary(&c);
  return 0;
}
