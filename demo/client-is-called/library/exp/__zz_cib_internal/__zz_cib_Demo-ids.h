#pragma once

namespace __zz_cib_ { namespace C {
  //#= FullClassName: ::C
  enum { __zz_cib_classid = 2 };
}}

namespace __zz_cib_ { namespace I {
  //#= FullClassName: ::I
  enum { __zz_cib_classid = 1 };
}}

namespace __zz_cib_ { namespace I { namespace __zz_cib_GenericProxy {
  //#= FullClassName: ::I::__zz_cib_GenericProxy
  enum { __zz_cib_classid = 3 };
}}}

namespace __zz_cib_ { namespace Demo {
  enum { __zz_cib_next_class_id = 4 };
}}

namespace __zz_cib_ { namespace C { namespace __zz_cib_methodid {
  enum {
    //#= C();
    __zz_cib_new = 0,
    //#= C(::C const &);
    __zz_cib_copy = 1,
    //#= ~C();
    __zz_cib_delete = 2,
    //#= int UseInterface(::I*);
    UseInterface = 3,
    __zz_cib_next_method_id = 4
  };
}}}

namespace __zz_cib_ { namespace I { namespace __zz_cib_methodid {
  enum {
    //#= I();
    __zz_cib_new = 0,
    //#= int F();
    F = 1,
    //#= ~I();
    __zz_cib_delete = 2,
    //#= __zz_cib_release_proxy
    __zz_cib_release_proxy = 3,
    __zz_cib_next_method_id = 4
  };
}}}

namespace __zz_cib_ { namespace I { namespace __zz_cib_GenericProxy { namespace __zz_cib_methodid {
  enum {
    //#= int F();
    F = 0,
    //#= ~I();
    __zz_cib_delete = 1,
    __zz_cib_next_method_id = 2
  };
}}}}

