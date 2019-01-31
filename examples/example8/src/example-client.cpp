#include "example.h"

int main()
{
  RValueExample x(5);
  RValueExample y = std::move(x);
  assert(x.GetValue() == 0);
  assert(y.GetValue() == 5);
  RValueExample z(0);
  z = std::move(y);
  assert(y.GetValue() == 0);
  assert(z.GetValue() == 5);
}
