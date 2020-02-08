#pragma once

namespace __zz_cib_ { namespace A {
  //#= FullClassName: ::A
  enum { __zz_cib_classid = 257 };
}}

namespace __zz_cib_ { namespace Interface {
  //#= FullClassName: ::Interface
  enum { __zz_cib_classid = 256 };
}}

namespace __zz_cib_ { namespace Interface { namespace __zz_cib_GenericProxy {
  //#= FullClassName: ::Interface::__zz_cib_GenericProxy
  enum { __zz_cib_classid = 258 };
}}}

namespace __zz_cib_ { namespace Example {
  enum { __zz_cib_next_class_id = 259 };
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
    //#= int UseInterface(::Interface*) const;
    UseInterface = 3,
    __zz_cib_next_method_id = 4
  };
}}}

namespace __zz_cib_ { namespace Interface { namespace __zz_cib_methodid {
  enum {
    //#= Interface();
    __zz_cib_new = 0,
    //#= int Func();
    Func = 1,
    //#= ~Interface();
    __zz_cib_delete = 2,
    //#= __zz_cib_release_proxy
    __zz_cib_release_proxy = 3,
    //#= int Gunc();
    Gunc = 4,
    __zz_cib_next_method_id = 5
  };
}}}

namespace __zz_cib_ { namespace Interface { namespace __zz_cib_GenericProxy { namespace __zz_cib_methodid {
  enum {
    //#= int Func();
    Func = 0,
    //#= ~Interface();
    __zz_cib_delete = 1,
    //#= int Gunc();
    Gunc = 2,
    __zz_cib_next_method_id = 3
  };
}}}}

