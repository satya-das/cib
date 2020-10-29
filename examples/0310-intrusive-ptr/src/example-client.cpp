#include "example.h"

#include <catch/catch.hpp>

#include <type_traits>

TEST_CASE("Client receives intrusive_ptr from library")
{
  A a;
  auto p = a.f();
  CHECK(p->f() == 909);
}

TEST_CASE("Client passes intrusive_ptr to library")
{
  class N : public I {
    int f() const override {
      return 1023;
    }

    // std::unique_ptr<int> g() const override {
    //   return std::make_unique<int>(5);
    // }
  };

  auto p = sk_sp<N>(new N);
  // A a;
  // CHECK(a.h(p) == 1023);
}
