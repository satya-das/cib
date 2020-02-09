#pragma once

namespace __zz_cib_ { namespace A {
  //#= FullClassName: ::A
  enum { __zz_cib_classid = 259 };
}}

namespace __zz_cib_ { namespace Interface1 {
  //#= FullClassName: ::Interface1
  enum { __zz_cib_classid = 256 };
}}

namespace __zz_cib_ { namespace Interface1 { namespace __zz_cib_GenericProxy {
  //#= FullClassName: ::Interface1::__zz_cib_GenericProxy
  enum { __zz_cib_classid = 260 };
}}}

namespace __zz_cib_ { namespace Interface2 {
  //#= FullClassName: ::Interface2
  enum { __zz_cib_classid = 257 };
}}

namespace __zz_cib_ { namespace Interface2 { namespace __zz_cib_GenericProxy {
  //#= FullClassName: ::Interface2::__zz_cib_GenericProxy
  enum { __zz_cib_classid = 261 };
}}}

namespace __zz_cib_ { namespace Interface3 {
  //#= FullClassName: ::Interface3
  enum { __zz_cib_classid = 258 };
}}

namespace __zz_cib_ { namespace Interface3 { namespace __zz_cib_GenericProxy {
  //#= FullClassName: ::Interface3::__zz_cib_GenericProxy
  enum { __zz_cib_classid = 262 };
}}}

namespace __zz_cib_ { namespace Example {
  enum { __zz_cib_next_class_id = 263 };
  enum { __zz_cib_internal_class_id = 1 };
}}

namespace __zz_cib_ { namespace A {
  enum __zz_cib_methodid {
    //#= A(::A const &);
    __zz_cib_copy = 0,
    //#= ~A();
    __zz_cib_delete = 1,
    //#= A();
    __zz_cib_new = 2,
    //#= int SetInterface(::Interface1*) const;
    SetInterface = 3,
    __zz_cib_next_method_id = 4
  };
}}

namespace __zz_cib_ { namespace Interface1 {
  enum __zz_cib_methodid {
    //#= Interface1();
    __zz_cib_new = 0,
    //#= ::Interface2* p();
    p = 1,
    //#= ::Interface3& r();
    r = 2,
    //#= ~Interface1();
    __zz_cib_delete = 3,
    //#= __zz_cib_release_proxy
    __zz_cib_release_proxy = 4,
    __zz_cib_next_method_id = 5
  };
}}

namespace __zz_cib_ { namespace Interface1 { namespace __zz_cib_GenericProxy {
  enum __zz_cib_methodid {
    //#= ::Interface3& r();
    r = 0,
    //#= ::Interface2* p();
    p = 1,
    //#= ~Interface1();
    __zz_cib_delete = 2,
    __zz_cib_next_method_id = 3
  };
}}}

namespace __zz_cib_ { namespace Interface2 {
  enum __zz_cib_methodid {
    //#= Interface2();
    __zz_cib_new = 0,
    //#= int f();
    f = 1,
    //#= ~Interface2();
    __zz_cib_delete = 2,
    //#= __zz_cib_get_class_id
    __zz_cib_get_class_id = 3,
    //#= __zz_cib_release_proxy
    __zz_cib_release_proxy = 4,
    __zz_cib_next_method_id = 5
  };
}}

namespace __zz_cib_ { namespace Interface2 { namespace __zz_cib_GenericProxy {
  enum __zz_cib_methodid {
    //#= int f();
    f = 0,
    //#= ~Interface2();
    __zz_cib_delete = 1,
    __zz_cib_next_method_id = 2
  };
}}}

namespace __zz_cib_ { namespace Interface3 {
  enum __zz_cib_methodid {
    //#= Interface3();
    __zz_cib_new = 0,
    //#= int g();
    g = 1,
    //#= ~Interface3();
    __zz_cib_delete = 2,
    //#= __zz_cib_get_class_id
    __zz_cib_get_class_id = 3,
    //#= __zz_cib_release_proxy
    __zz_cib_release_proxy = 4,
    __zz_cib_next_method_id = 5
  };
}}

namespace __zz_cib_ { namespace Interface3 { namespace __zz_cib_GenericProxy {
  enum __zz_cib_methodid {
    //#= int g();
    g = 0,
    //#= ~Interface3();
    __zz_cib_delete = 1,
    __zz_cib_next_method_id = 2
  };
}}}

