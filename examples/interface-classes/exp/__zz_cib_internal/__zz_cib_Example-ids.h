#pragma once

namespace __zz_cib_ { namespace A {
  //#= FullClassName: ::A
  enum { __zz_cib_classid = 4 };
}}

namespace __zz_cib_ { namespace Interface1 {
  //#= FullClassName: ::Interface1
  enum { __zz_cib_classid = 3 };
}}

namespace __zz_cib_ { namespace Interface1 { namespace __zz_cib_GenericProxy {
  //#= FullClassName: ::Interface1::__zz_cib_GenericProxy
  enum { __zz_cib_classid = 7 };
}}}

namespace __zz_cib_ { namespace Interface2 {
  //#= FullClassName: ::Interface2
  enum { __zz_cib_classid = 1 };
}}

namespace __zz_cib_ { namespace Interface2 { namespace __zz_cib_GenericProxy {
  //#= FullClassName: ::Interface2::__zz_cib_GenericProxy
  enum { __zz_cib_classid = 5 };
}}}

namespace __zz_cib_ { namespace Interface3 {
  //#= FullClassName: ::Interface3
  enum { __zz_cib_classid = 2 };
}}

namespace __zz_cib_ { namespace Interface3 { namespace __zz_cib_GenericProxy {
  //#= FullClassName: ::Interface3::__zz_cib_GenericProxy
  enum { __zz_cib_classid = 6 };
}}}

namespace __zz_cib_ { namespace Example {
  enum { __zz_cib_next_class_id = 8 };
}}

namespace __zz_cib_ { namespace A { namespace __zz_cib_methodid {
  enum {
    //#= A(::A const &);
    __zz_cib_copy_0 = 0,
    //#= ~A();
    __zz_cib_delete_1 = 1,
    //#= A();
    __zz_cib_new_2 = 2,
    //#= int SetInterface(::Interface1*) const;
    SetInterface_3 = 3,
    __zz_cib_next_method_id = 4
  };
}}}

namespace __zz_cib_ { namespace Interface1 { namespace __zz_cib_methodid {
  enum {
    //#= Interface1();
    __zz_cib_new_0 = 0,
    //#= ::Interface2* p();
    p_1 = 1,
    //#= ::Interface3& r();
    r_2 = 2,
    //#= ~Interface1();
    __zz_cib_delete_3 = 3,
    //#= __zz_cib_release_proxy
    __zz_cib_release_proxy_4 = 4,
    __zz_cib_next_method_id = 5
  };
}}}

namespace __zz_cib_ { namespace Interface1 { namespace __zz_cib_GenericProxy { namespace __zz_cib_methodid {
  enum {
    //#= ::Interface2* p();
    p_0 = 0,
    //#= ::Interface3& r();
    r_1 = 1,
    //#= ~Interface1();
    __zz_cib_delete_2 = 2,
    __zz_cib_next_method_id = 3
  };
}}}}

namespace __zz_cib_ { namespace Interface2 { namespace __zz_cib_methodid {
  enum {
    //#= Interface2();
    __zz_cib_new_0 = 0,
    //#= int f();
    f_1 = 1,
    //#= ~Interface2();
    __zz_cib_delete_2 = 2,
    //#= __zz_cib_get_class_id
    __zz_cib_get_class_id_3 = 3,
    //#= __zz_cib_release_proxy
    __zz_cib_release_proxy_4 = 4,
    __zz_cib_next_method_id = 5
  };
}}}

namespace __zz_cib_ { namespace Interface2 { namespace __zz_cib_GenericProxy { namespace __zz_cib_methodid {
  enum {
    //#= int f();
    f_0 = 0,
    //#= ~Interface2();
    __zz_cib_delete_1 = 1,
    __zz_cib_next_method_id = 2
  };
}}}}

namespace __zz_cib_ { namespace Interface3 { namespace __zz_cib_methodid {
  enum {
    //#= Interface3();
    __zz_cib_new_0 = 0,
    //#= int g();
    g_1 = 1,
    //#= ~Interface3();
    __zz_cib_delete_2 = 2,
    //#= __zz_cib_get_class_id
    __zz_cib_get_class_id_3 = 3,
    //#= __zz_cib_release_proxy
    __zz_cib_release_proxy_4 = 4,
    __zz_cib_next_method_id = 5
  };
}}}

namespace __zz_cib_ { namespace Interface3 { namespace __zz_cib_GenericProxy { namespace __zz_cib_methodid {
  enum {
    //#= int g();
    g_0 = 0,
    //#= ~Interface3();
    __zz_cib_delete_1 = 1,
    __zz_cib_next_method_id = 2
  };
}}}}

