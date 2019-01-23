#include "example.h"

int main()
{
  Example::Value<int>          x(5);
  Example::Value<Example::Int> y(Example::Int(9));
  Example::A                   a;
  a.Set(x);
  a.SetInt(y);
  assert(a.Get().GetValue() == 5);
  assert(a.GetInt().GetValue() == 9);
}
