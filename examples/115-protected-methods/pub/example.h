#pragma once

namespace Example
{
  class A
  {
  public:
    A();
  protected:
    int f() const { return x; }
    
  private:
    int x {101};
  };
}

