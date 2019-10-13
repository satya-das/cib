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

namespace __zz_cib_ { namespace A { namespace __zz_cib_methodid {
  enum {
    //#= A(::A const &);
    __zz_cib_copy = 0,
    //#= ~A();
    __zz_cib_delete = 1,
    //#= A();
    __zz_cib_new = 2,
    //#= int SetInterface(::Interface1*) const;
    __zz_cib_SetInterface = 3,
    __zz_cib_next_method_id = 4
  };
}}}

namespace __zz_cib_ { namespace Interface1 { namespace __zz_cib_methodid {
  enum {
    //#= Interface1();
    __zz_cib_new = 0,
    //#= ::Interface2* p();
    __zz_cib_p = 1,
    //#= ::Interface3& r();
    __zz_cib_r = 2,
    //#= ~Interface1();
    __zz_cib_delete = 3,
    //#= __zz_cib_release_proxy
    __zz_cib_release_proxy = 4,
    //#= int disruptVTable();
    __zz_cib_disruptVTable = 5,
    __zz_cib_next_method_id = 6
  };
}}}

namespace __zz_cib_ { namespace Interface1 { namespace __zz_cib_GenericProxy { namespace __zz_cib_methodid {
  enum {
    //#= ::Interface2* p();
    __zz_cib_p = 0,
    //#= ::Interface3& r();
    __zz_cib_r = 1,
    //#= ~Interface1();
    __zz_cib_delete = 2,
    //#= int disruptVTable();
    __zz_cib_disruptVTable = 3,
    __zz_cib_next_method_id = 4
  };
}}}}

namespace __zz_cib_ { namespace Interface2 { namespace __zz_cib_methodid {
  enum {
    //#= Interface2();
    __zz_cib_new = 0,
    //#= int f();
    __zz_cib_f = 1,
    //#= ~Interface2();
    __zz_cib_delete = 2,
    //#= __zz_cib_get_class_id
    __zz_cib_get_class_id = 3,
    //#= __zz_cib_release_proxy
    __zz_cib_release_proxy = 4,
    //#= int disruptVTable();
    __zz_cib_disruptVTable = 5,
    __zz_cib_next_method_id = 6
  };
}}}

namespace __zz_cib_ { namespace Interface2 { namespace __zz_cib_GenericProxy { namespace __zz_cib_methodid {
  enum {
    //#= int f();
    __zz_cib_f = 0,
    //#= ~Interface2();
    __zz_cib_delete = 1,
    //#= int disruptVTable();
    __zz_cib_disruptVTable = 2,
    __zz_cib_next_method_id = 3
  };
}}}}

namespace __zz_cib_ { namespace Interface3 { namespace __zz_cib_methodid {
  enum {
    //#= Interface3();
    __zz_cib_new = 0,
    //#= int g();
    __zz_cib_g = 1,
    //#= ~Interface3();
    __zz_cib_delete = 2,
    //#= __zz_cib_get_class_id
    __zz_cib_get_class_id = 3,
    //#= __zz_cib_release_proxy
    __zz_cib_release_proxy = 4,
    //#= int disruptVTable();
    __zz_cib_disruptVTable = 5,
    __zz_cib_next_method_id = 6
  };
}}}

namespace __zz_cib_ { namespace Interface3 { namespace __zz_cib_GenericProxy { namespace __zz_cib_methodid {
  enum {
    //#= int g();
    __zz_cib_g = 0,
    //#= ~Interface3();
    __zz_cib_delete = 1,
    //#= int disruptVTable();
    __zz_cib_disruptVTable = 2,
    __zz_cib_next_method_id = 3
  };
}}}}

