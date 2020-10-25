#pragma once

#include <memory>

namespace Example
{
  using Int = int;
  namespace Outer
  {
    namespace Inner
    {
      using Float = float;

      class A
      {
      public:
        A();

        Int i() const {
          return m;
        }

        Float f() const {
          return x;
        }

        std::unique_ptr<Int> pi() const {
          return std::make_unique<Int>(152);
        }

      private:
        Int m {16};
        Float x {2.0};
      };
    }
  }
}
