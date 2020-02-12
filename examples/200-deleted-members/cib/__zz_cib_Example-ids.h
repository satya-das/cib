#pragma once

namespace __zz_cib_ { namespace A {
  //#= FullClassName: ::A
  enum { __zz_cib_classid = 257 };
}}

namespace __zz_cib_ { namespace B {
  //#= FullClassName: ::B
  enum { __zz_cib_classid = 258 };
}}

namespace __zz_cib_ { namespace Example {
  enum { __zz_cib_next_class_id = 259 };
  enum { __zz_cib_internal_class_id = 1 };
}}

namespace __zz_cib_ { namespace A {
  enum __zz_cib_methodid {
    //#= ~A();
    __zz_cib_delete = 0,
    //#= A();
    __zz_cib_new = 1,
    //#= int f();
    f = 2,
    __zz_cib_next_method_id = 3
  };
}}

namespace __zz_cib_ { namespace B {
  enum __zz_cib_methodid {
    //#= ~B();
    __zz_cib_delete = 0,
    //#= B();
    __zz_cib_new = 1,
    //#= int g();
    g = 2,
    __zz_cib_next_method_id = 3
  };
}}

