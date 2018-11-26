#include "example.h"

int main()
{
  Example::Number<int> x(5);
  x.Add(Example::Number<int>(10));
  Example::A a;
  a.Set(x);
  assert(a.Get().GetValue() == 15);
}
