#include "template.h"

#include <iostream>

#include <catch/catch.hpp>

TEST_CASE("Template with single parameter tests")
{
  TemplateTest x;
  CHECK(x.getTemplateClassWithOneParam().get() == 102);
}