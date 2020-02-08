#pragma once

namespace __zz_cib_ { namespace A {
  //#= FullClassName: ::A
  enum { __zz_cib_classid = 256 };
}}

namespace __zz_cib_ { namespace A { namespace __zz_cib_GenericProxy {
  //#= FullClassName: ::A::__zz_cib_GenericProxy
  enum { __zz_cib_classid = 258 };
}}}

namespace __zz_cib_ { namespace B {
  //#= FullClassName: ::B
  enum { __zz_cib_classid = 257 };
}}

namespace __zz_cib_ { namespace B { namespace __zz_cib_GenericProxy {
  //#= FullClassName: ::B::__zz_cib_GenericProxy
  enum { __zz_cib_classid = 259 };
}}}

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
    //#= __zz_cib_release_proxy
    __zz_cib_release_proxy = 4,
    __zz_cib_next_method_id = 5
  };
}}}

namespace __zz_cib_ { namespace A { namespace __zz_cib_GenericProxy { namespace __zz_cib_methodid {
  enum {
    //#= int VirtFunc();
    VirtFunc = 0,
    //#= ~A();
    __zz_cib_delete = 1,
    __zz_cib_next_method_id = 2
  };
}}}}

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
    //#= __zz_cib_release_proxy
    __zz_cib_release_proxy = 7,
    __zz_cib_next_method_id = 8
  };
}}}

namespace __zz_cib_ { namespace B { namespace __zz_cib_GenericProxy { namespace __zz_cib_methodid {
  enum {
    //#= int VirtFunc();
    VirtFunc = 0,
    //#= ~B();
    __zz_cib_delete = 1,
    __zz_cib_next_method_id = 2
  };
}}}}

