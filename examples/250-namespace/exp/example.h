#pragma  once

#include "__zz_cib_internal/example-predef.h"

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
        A(A&& rhs);
      public:
        A(A const & );
        ~A();
        A();
        ::Example::Int i() const;
        ::Example::Outer::Inner::Float f() const;

      private:
        __ZZ_CIB_CLASS_INTERNAL_DEF(A, Example::Outer::Inner::A);
      };
    }
  }
}

#include "__zz_cib_internal/example-postdef.h"
