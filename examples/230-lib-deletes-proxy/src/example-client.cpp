#include "../../common/mem-listener.h"

#include "example.h"

#include <catch/catch.hpp>


#include <type_traits>

TEST_CASE("Proxy should get deleted when original lib object is deleted")
{
  bool isDeleted = false;
  const void* addrExpectedToBeDeleted = nullptr;
  DeleteListenerAccessor::getDeleteListener() = [&addrExpectedToBeDeleted, &isDeleted](void* p) {
    if (p == addrExpectedToBeDeleted)
      isDeleted = true;
  };

  {
    A a;
    const auto& i = a.f();
    addrExpectedToBeDeleted = &i;
  }
  DeleteListenerAccessor::getDeleteListener() = nullptr;

  REQUIRE(isDeleted == true);
}
