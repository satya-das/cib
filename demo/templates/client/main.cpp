#include "A.h"

#include <iostream>

void TestTemplateClass(A* pA)
{  
  std::cout << "A::setValue(const Value<int>&) returns:" << pA->setValue(Value<int>(1)) << std::endl;
  std::cout << "A::setValue(const Value<float>&) returns:" << pA->setValue(Value<float>(2.0)) << std::endl;

  std::cout << "A::getIntValue() returns:" << pA->getIntValue().get() << std::endl;
  std::cout << "A::getFloatValue() returns:" << pA->getFloatValue().get() << std::endl;
}

int main(int argc, char* argv[])
{
  A a;

  TestTemplateClass(&a);
  return 0;
}
