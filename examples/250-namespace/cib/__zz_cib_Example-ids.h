#pragma once

namespace __zz_cib_ { namespace Example { namespace Outer { namespace Inner { namespace A {
  //#= FullClassName: ::Example::Outer::Inner::A
  enum { __zz_cib_classid = 256 };
}}}}}

namespace __zz_cib_ { namespace Example {
  enum { __zz_cib_next_class_id = 257 };
  enum { __zz_cib_internal_class_id = 1 };
}}

namespace __zz_cib_ { namespace Example { namespace Outer { namespace Inner { namespace A { namespace __zz_cib_methodid {
  enum {
    //#= A(::Example::Outer::Inner::A const &);
    __zz_cib_copy = 0,
    //#= ~A();
    __zz_cib_delete = 1,
    //#= A();
    __zz_cib_new = 2,
    //#= ::Example::Int i() const;
    i = 3,
    //#= ::Example::Outer::Inner::Float f() const;
    f = 4,
    __zz_cib_next_method_id = 5
  };
}}}}}}

