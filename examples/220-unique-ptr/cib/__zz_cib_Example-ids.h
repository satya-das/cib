#pragma once

namespace __zz_cib_ { namespace A {
  //#= FullClassName: ::A
  enum { __zz_cib_classid = 257 };
}}

namespace __zz_cib_ { namespace I {
  //#= FullClassName: ::I
  enum { __zz_cib_classid = 256 };
}}

namespace __zz_cib_ { namespace Example {
  enum { __zz_cib_next_class_id = 258 };
  enum { __zz_cib_internal_class_id = 1 };
}}

namespace __zz_cib_ { namespace A { namespace __zz_cib_methodid {
  enum {
    //#= A(::A const &);
    __zz_cib_copy = 0,
    //#= ~A();
    __zz_cib_delete = 1,
    //#= A();
    __zz_cib_new = 2,
    //#= std::unique_ptr<I> f() const;
    f = 3,
    //#= ::I* g();
    g = 4,
    __zz_cib_next_method_id = 5
  };
}}}

namespace __zz_cib_ { namespace I { namespace __zz_cib_methodid {
  enum {
    //#= ~I();
    __zz_cib_delete = 0,
    //#= int f() const;
    f = 1,
    //#= __zz_cib_get_class_id
    __zz_cib_get_class_id = 2,
    __zz_cib_next_method_id = 3
  };
}}}

