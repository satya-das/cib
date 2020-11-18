#include "A.h"

#include <iostream>

class M : public I {
public:
  int F() override { return 100; }
};

void TestLibraryCallingClient(A& a)
{
  M m;
  std::cout << "C::UseI() returns:" << a.UseI(&m) << std::endl;
}

int main(int argc, char* argv[])
{
  A a;
  TestLibraryCallingClient(a);
  return 0;
}
