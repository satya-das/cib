#pragma once

namespace __zz_cib_ { namespace A {
  //#= FullClassName: ::A
  enum { __zz_cib_classid = 256 };
}}

namespace __zz_cib_ { namespace B {
  //#= FullClassName: ::B
  enum { __zz_cib_classid = 257 };
}}

namespace __zz_cib_ { namespace I1 {
  //#= FullClassName: ::I1
  enum { __zz_cib_classid = 258 };
}}

namespace __zz_cib_ { namespace I2 {
  //#= FullClassName: ::I2
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
    //#= A();
    __zz_cib_new = 1,
    //#= int VirtFunc();
    VirtFunc = 2,
    //#= ~A();
    __zz_cib_delete = 3,
    //#= int AnotherVirtFunc();
    AnotherVirtFunc = 4,
    //#= int SomeFunc();
    SomeFunc = 5,
    __zz_cib_next_method_id = 6
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
    //#= __zz_cib_cast_to_A
    __zz_cib_cast_to_A = 5,
    //#= __zz_cib_get_class_id
    __zz_cib_get_class_id = 6,
    //#= int F();
    F = 7,
    //#= int AnotherVirtFunc();
    AnotherVirtFunc = 8,
    //#= int G();
    G = 9,
    //#= __zz_cib_cast_to_I1
    __zz_cib_cast_to_I1 = 10,
    //#= __zz_cib_cast_to_I2
    __zz_cib_cast_to_I2 = 11,
    __zz_cib_next_method_id = 12
  };
}}}

namespace __zz_cib_ { namespace I1 { namespace __zz_cib_methodid {
  enum {
    //#= I1();
    __zz_cib_new = 0,
    //#= I1(::I1 const &);
    __zz_cib_copy = 1,
    //#= int F();
    F = 2,
    //#= ~I1();
    __zz_cib_delete = 3,
    __zz_cib_next_method_id = 4
  };
}}}

namespace __zz_cib_ { namespace I2 { namespace __zz_cib_methodid {
  enum {
    //#= I2();
    __zz_cib_new = 0,
    //#= I2(::I2 const &);
    __zz_cib_copy = 1,
    //#= int G();
    G = 2,
    //#= ~I2();
    __zz_cib_delete = 3,
    __zz_cib_next_method_id = 4
  };
}}}

