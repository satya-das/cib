#include "example.h"

int main()
{
  A a;
  B b;
  b.SetA(&a);
  assert(b.GetA() == &a);
}
