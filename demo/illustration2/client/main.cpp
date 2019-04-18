#include "A.h"

#include <iostream>

class A : public I {
public:
  int F() override { return 100; }
};

void TestLibraryCallingClient()
{
  A a;
  C c;
  std::cout << "C::SetI() returns:" << c.SetI(&a) << std::endl;
}

int main(int argc, char* argv[])
{
  TestLibraryCallingClient();
  return 0;
}
