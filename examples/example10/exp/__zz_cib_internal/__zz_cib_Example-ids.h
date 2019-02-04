#pragma once

namespace __zz_cib_ { namespace __zz_cib_Example_Global {
  //#= FullClassName: ::
  enum { __zz_cib_classid = 1 };
}}

namespace __zz_cib_ { namespace A {
  //#= FullClassName: ::A
  enum { __zz_cib_classid = 2 };
}}

namespace __zz_cib_ { namespace A { namespace __zz_cib_GenericProxy {
  //#= FullClassName: ::A::__zz_cib_GenericProxy
  enum { __zz_cib_classid = 4 };
}}}

namespace __zz_cib_ { namespace B {
  //#= FullClassName: ::B
  enum { __zz_cib_classid = 3 };
}}

namespace __zz_cib_ { namespace Example {
  enum { __zz_cib_next_class_id = 5 };
}}

namespace __zz_cib_ { namespace __zz_cib_Example_Global { namespace __zz_cib_methodid {
  enum {
    //#= int GetNewA(::A*&);
    GetNewA_0 = 0,
    //#= int GetNewB(::A*&);
    GetNewB_1 = 1,
    __zz_cib_next_method_id = 2
  };
}}}

namespace __zz_cib_ { namespace A { namespace __zz_cib_methodid {
  enum {
    //#= A();
    __zz_cib_new_0 = 0,
    //#= A(::A const &);
    __zz_cib_copy_1 = 1,
    //#= ~A();
    __zz_cib_delete_2 = 2,
    //#= int VirtualFunction() const;
    VirtualFunction_3 = 3,
    //#= __zz_cib_get_class_id
    __zz_cib_get_class_id_4 = 4,
    //#= __zz_cib_release_proxy
    __zz_cib_release_proxy_5 = 5,
    __zz_cib_next_method_id = 6
  };
}}}

namespace __zz_cib_ { namespace A { namespace __zz_cib_GenericProxy { namespace __zz_cib_methodid {
  enum {
    //#= int VirtualFunction() const;
    VirtualFunction_0 = 0,
    //#= ~A();
    __zz_cib_delete_1 = 1,
    __zz_cib_next_method_id = 2
  };
}}}}

namespace __zz_cib_ { namespace B { namespace __zz_cib_methodid {
  enum {
    //#= B();
    __zz_cib_new_0 = 0,
    //#= B(::B const &);
    __zz_cib_copy_1 = 1,
    //#= ~B();
    __zz_cib_delete_2 = 2,
    //#= int VirtualFunction() const;
    VirtualFunction_3 = 3,
    //#= __zz_cib_cast_to___A
    __zz_cib_cast_to___A_4 = 4,
    __zz_cib_next_method_id = 5
  };
}}}

