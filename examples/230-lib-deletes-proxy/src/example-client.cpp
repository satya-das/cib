#include "../../common/mem-listener.h"

#include "example.h"

#include <catch/catch.hpp>


#include <type_traits>

DeleteListener gDeleteListener;

TEST_CASE("Proxy should get deleted when original lib object is deleted")
{
  bool isDeleted = false;
  {
    A a;
    const auto& i = a.f();
    gDeleteListener = [&i, &isDeleted](void* p) {
      if (p == &i)
        isDeleted = true;
    };
  }

  REQUIRE(isDeleted == true);
}