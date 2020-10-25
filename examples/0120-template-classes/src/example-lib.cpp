#include "example.h"

#include <iostream>

void Example::A::Set(const Value<int>& x)
{
  x_ = x;
}

void Example::A::SetInt(const Value<Int>& y)
{
  y_ = y;
}

void       Example::A::SetFloat(const FloatValue f)
{
  f_ = f;
}
