#pragma once

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

      private:
        Int m {16};
        Float x {2.0};
      };
    }
  }
}
