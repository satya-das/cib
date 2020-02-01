#include "template.h"

#include <iostream>

#include <catch/catch.hpp>

TEST_CASE("Template with single parameter tests")
{
  TemplateTest x;
  CHECK(x.getTemplateClassWithOneParam().get() == 102);
}

TEST_CASE("Template with 2 parameter tests")
{
  TemplateTest x;
  const auto y = x.getTemplateClassWithTwoParams();
  CHECK(y.get1() == 102);
  CHECK(y.get2() == 100.0);
}
