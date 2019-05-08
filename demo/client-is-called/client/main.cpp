#include "A.h"

#include <iostream>

class A : public I {
public:
  int F() override { return 100; }
};

void TestLibraryCallingClient(C& c)
{
  A a;
  std::cout << "C::UseInterface() returns:" << c.UseInterface(&a) << std::endl;
}

int main(int argc, char* argv[])
{
  C c;
  TestLibraryCallingClient(c);
  return 0;
}
