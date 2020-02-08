#pragma once

namespace __zz_cib_ { namespace A {
  //#= FullClassName: ::A
  enum { __zz_cib_classid = 258 };
}}

namespace __zz_cib_ { namespace B {
  //#= FullClassName: ::B
  enum { __zz_cib_classid = 259 };
}}

namespace __zz_cib_ { namespace Example {
  enum { __zz_cib_next_class_id = 260 };
  enum { __zz_cib_internal_class_id = 1 };
}}

namespace __zz_cib_ { namespace A { namespace __zz_cib_methodid {
  enum {
    //#= A(::A const &);
    __zz_cib_copy = 0,
    //#= ~A();
    __zz_cib_delete = 1,
    //#= A(int);
    __zz_cib_new = 2,
    __zz_cib_next_method_id = 3
  };
}}}

namespace __zz_cib_ { namespace B { namespace __zz_cib_methodid {
  enum {
    //#= B();
    __zz_cib_new = 0,
    //#= B(::B const &);
    __zz_cib_copy = 1,
    //#= ~B();
    __zz_cib_delete = 2,
    //#= void SetA(::A*);
    SetA = 3,
    //#= ::A* GetA() const;
    GetA = 4,
    __zz_cib_next_method_id = 5
  };
}}}

