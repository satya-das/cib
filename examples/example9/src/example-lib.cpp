#include "example.h"

int GlobalFunction1()
{
  return 10;
}

int GlobalFunction2()
{
  return 20;
}

namespace Example {

int Function1()
{
  return 100;
}

int Function2()
{
  return 200;
}

}