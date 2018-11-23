#include "example.h"

int main()
{
  Example::Template<int> x(5);
  Example::A             a;
  a.Set(x);
}
