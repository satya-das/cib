#include "example.h"

#include <iostream>

int Example::A::SomeFunc()
{
  return 5;
}

int Example::A::VirtFunc()
{
  return 10;
}

int Example::B::VirtFunc()
{
  return 15;
}
