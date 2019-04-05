#pragma once

namespace __zz_cib_ { namespace A {
  //#= FullClassName: ::A
  enum { __zz_cib_classid = 2 };
}}

namespace __zz_cib_ { namespace Interface {
  //#= FullClassName: ::Interface
  enum { __zz_cib_classid = 1 };
}}

namespace __zz_cib_ { namespace Interface { namespace __zz_cib_GenericProxy {
  //#= FullClassName: ::Interface::__zz_cib_GenericProxy
  enum { __zz_cib_classid = 3 };
}}}

namespace __zz_cib_ { namespace Example {
  enum { __zz_cib_next_class_id = 4 };
}}

namespace __zz_cib_ { namespace A { namespace __zz_cib_methodid {
  enum {
    //#= A(::A const &);
    __zz_cib_copy_0 = 0,
    //#= ~A();
    __zz_cib_delete_1 = 1,
    //#= A();
    __zz_cib_new_2 = 2,
    //#= int UseInterface(::Interface*) const;
    UseInterface_3 = 3,
    __zz_cib_next_method_id = 4
  };
}}}

namespace __zz_cib_ { namespace Interface { namespace __zz_cib_methodid {
  enum {
    //#= Interface();
    __zz_cib_new_0 = 0,
    //#= int Func();
    Func_1 = 1,
    //#= ~Interface();
    __zz_cib_delete_2 = 2,
    //#= __zz_cib_release_proxy
    __zz_cib_release_proxy_3 = 3,
    __zz_cib_next_method_id = 4
  };
}}}

namespace __zz_cib_ { namespace Interface { namespace __zz_cib_GenericProxy { namespace __zz_cib_methodid {
  enum {
    //#= int Func();
    Func_0 = 0,
    //#= ~Interface();
    __zz_cib_delete_1 = 1,
    __zz_cib_next_method_id = 2
  };
}}}}

