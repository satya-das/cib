#pragma once

namespace __zz_cib_ { namespace Example { namespace A {
  //#= FullClassName: ::Example::A
  enum { __zz_cib_classid = 1 };
}}}

namespace __zz_cib_ { namespace Example {
  enum { __zz_cib_next_class_id = 2 };
}}

namespace __zz_cib_ { namespace Example { namespace A { namespace __zz_cib_methodid {
  enum {
    //#= A(::Example::A const &);
    __zz_cib_copy = 0,
    //#= ~A();
    __zz_cib_delete = 1,
    //#= A();
    __zz_cib_new = 2,
    //#= int Func();
    Func = 3,
    //#= int Func(float);
    Func_4 = 4,
    __zz_cib_next_method_id = 5
  };
}}}}

