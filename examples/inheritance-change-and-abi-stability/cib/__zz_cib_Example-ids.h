#pragma once

namespace __zz_cib_ { namespace A {
  //#= FullClassName: ::A
  enum { __zz_cib_classid = 1 };
}}

namespace __zz_cib_ { namespace B {
  //#= FullClassName: ::B
  enum { __zz_cib_classid = 2 };
}}

namespace __zz_cib_ { namespace I1 {
  //#= FullClassName: ::I1
  enum { __zz_cib_classid = 3 };
}}

namespace __zz_cib_ { namespace I2 {
  //#= FullClassName: ::I2
  enum { __zz_cib_classid = 4 };
}}

namespace __zz_cib_ { namespace Example {
  enum { __zz_cib_next_class_id = 5 };
}}

namespace __zz_cib_ { namespace A { namespace __zz_cib_methodid {
  enum {
    //#= A(::A const &);
    __zz_cib_copy_0 = 0,
    //#= A();
    __zz_cib_new_1 = 1,
    //#= int VirtFunc();
    VirtFunc_2 = 2,
    //#= int SomeFunc();
    SomeFunc_3 = 3,
    //#= ~A();
    __zz_cib_delete_4 = 4,
    //#= int AnotherVirtFunc();
    AnotherVirtFunc_5 = 5,
    __zz_cib_next_method_id = 6
  };
}}}

namespace __zz_cib_ { namespace B { namespace __zz_cib_methodid {
  enum {
    //#= B(::B const &);
    __zz_cib_copy_0 = 0,
    //#= ~B();
    __zz_cib_delete_1 = 1,
    //#= B();
    __zz_cib_new_2 = 2,
    //#= int VirtFunc();
    VirtFunc_3 = 3,
    //#= __zz_cib_cast_to___A
    __zz_cib_cast_to___A_4 = 4,
    //#= __zz_cib_cast_to___I1
    __zz_cib_cast_to___I1_5 = 5,
    //#= __zz_cib_cast_to___I2
    __zz_cib_cast_to___I2_6 = 6,
    __zz_cib_next_method_id = 7
  };
}}}

namespace __zz_cib_ { namespace I1 { namespace __zz_cib_methodid {
  enum {
    //#= I1();
    __zz_cib_new_0 = 0,
    //#= I1(::I1 const &);
    __zz_cib_copy_1 = 1,
    //#= int F();
    F_2 = 2,
    //#= ~I1();
    __zz_cib_delete_3 = 3,
    __zz_cib_next_method_id = 4
  };
}}}

namespace __zz_cib_ { namespace I2 { namespace __zz_cib_methodid {
  enum {
    //#= I2();
    __zz_cib_new_0 = 0,
    //#= I2(::I2 const &);
    __zz_cib_copy_1 = 1,
    //#= int G();
    G_2 = 2,
    //#= ~I2();
    __zz_cib_delete_3 = 3,
    __zz_cib_next_method_id = 4
  };
}}}

