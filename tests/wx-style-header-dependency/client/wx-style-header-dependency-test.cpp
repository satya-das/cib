#include "class-name.h"

#include <catch/catch.hpp>

TEST_CASE("wxClass should just work")
{
  wxClass wxObject;
  CHECK(wxObject.Func() == 9);
}
