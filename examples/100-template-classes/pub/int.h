#pragma once

namespace Example
{

class Int
{
public:
  Int(int x = 0)
    : v_(x)
  {
  }
  operator int() const
  {
    return v_;
  }

private:
  int v_;
};

}