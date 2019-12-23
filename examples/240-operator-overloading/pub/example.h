#pragma once

namespace Example
{
  class A
  {
  public:
    A();

    A& operator << (int x) {
      m = x;
      return *this;
    }

    A& operator >> (int& x) {
      x = m;
      return *this;
    }

private:
  int m;
  };
}
