#include "A.h"

#include <assert.h>
#include <iostream>

struct M : I {
  int F() override { return 100; }
};

int main() {
  M m;
  A a;
  assert(a.UseI(&m) == 100);
}
