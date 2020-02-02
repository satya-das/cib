#include "example.h"

#include <catch/catch.hpp>

#include <type_traits>

TEST_CASE("Client receives unique_ptr from library")
{
  A a;
  auto p = a.f();
  CHECK(p->f() == 5);
}

TEST_CASE("Client passes unique_ptr to library")
{
  class N : public I {
  public:
    using I::I;
    int f() const override {
      return 1023;
    }

    std::unique_ptr<int> g() const override {
      return std::make_unique<int>(5);
    }
  };

  auto p = std::make_unique<N>(std::make_unique<int>(10));
  A a;
  CHECK(a.h(std::move(p)) == 1023);
}

TEST_CASE("Client passes pointer to unique ptr")
{
  std::unique_ptr<I> p;
  A a;
  CHECK(a.j(&p) == 25);
  CHECK(p->f() == 909);

}