#pragma once

namespace __zz_cib_ { namespace A {
  //#= FullClassName: ::A
  enum { __zz_cib_classid = 1 };
}}

namespace __zz_cib_ { namespace B {
  //#= FullClassName: ::B
  enum { __zz_cib_classid = 2 };
}}

namespace __zz_cib_ { namespace Example {
  enum { __zz_cib_next_class_id = 3 };
}}

namespace __zz_cib_ { namespace A { namespace __zz_cib_methodid {
  enum {
    //#= A(::A const &);
    __zz_cib_copy = 0,
    //#= A();
    __zz_cib_new = 1,
    //#= int VirtFunc();
    VirtFunc = 2,
    //#= ~A();
    __zz_cib_delete = 3,
    //#= int AnotherVirtFunc();
    AnotherVirtFunc = 4,
    __zz_cib_next_method_id = 5
  };
}}}

namespace __zz_cib_ { namespace B { namespace __zz_cib_methodid {
  enum {
    //#= B(::B const &);
    __zz_cib_copy = 0,
    //#= ~B();
    __zz_cib_delete = 1,
    //#= B();
    __zz_cib_new = 2,
    //#= int VirtFunc();
    VirtFunc = 3,
    //#= ::B* Create();
    Create = 4,
    //#= __zz_cib_cast_to___A
    __zz_cib_cast_to___A = 5,
    //#= __zz_cib_get_class_id
    __zz_cib_get_class_id = 6,
    //#= int AnotherVirtFunc();
    AnotherVirtFunc = 7,
    __zz_cib_next_method_id = 8
  };
}}}

