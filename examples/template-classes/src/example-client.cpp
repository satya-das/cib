#include "example.h"

#include <catch/catch.hpp>

TEST_CASE("Instances of template class can cross component boundary")
{
  Example::Value<int>          x(5);
  Example::Value<Example::Int> y(Example::Int(9));
  Example::A                   a;
  a.Set(x);
  a.SetInt(y);
  CHECK(a.Get().GetValue() == 5);
  CHECK(a.GetInt().GetValue() == 9);
}
