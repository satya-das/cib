#include "example.h"

#include <catch/catch.hpp>

#include <type_traits>

TEST_CASE("POD kind of structs should not be binded by cib")
{
  CHECK(std::is_standard_layout<Pod>::value == true);

  Pod pod = {5, 0.9, nullptr};
  CHECK(pod.i == 5);
  CHECK(pod.d == 0.9);
  CHECK(pod.pObj == nullptr);
}

TEST_CASE("Non POD structs should be binded by cib")
{
  /* These 3 checks fail, most certainly is_standard_layout is behaving incorrectly.
  CHECK(std::is_standard_layout<NonPod1>::value == false);
  CHECK(std::is_standard_layout<NonPod2>::value == false);
  CHECK(std::is_standard_layout<NonPod3>::value == false);
  */
}
