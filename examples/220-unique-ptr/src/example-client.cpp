#include "example.h"

#include <catch/catch.hpp>

#include <type_traits>

TEST_CASE("Client receives unique_ptr from library")
{
  A a;
  auto p = a.f();
  CHECK(p->f() == 909);
}

TEST_CASE("Client passes unique_ptr to library")
{
  class N : public I {
    int f() const override {
      return 1023;
    }
  };

  auto p = std::make_unique<N>();
  A a;
  CHECK(a.h(std::move(p)) == 1023);
}
