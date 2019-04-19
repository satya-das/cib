#pragma once

namespace __zz_cib_ { namespace C {
  //#= FullClassName: ::C
  enum { __zz_cib_classid = 2 };
}}

namespace __zz_cib_ { namespace C { namespace __zz_cib_GenericProxy {
  //#= FullClassName: ::C::__zz_cib_GenericProxy
  enum { __zz_cib_classid = 4 };
}}}

namespace __zz_cib_ { namespace I {
  //#= FullClassName: ::I
  enum { __zz_cib_classid = 1 };
}}

namespace __zz_cib_ { namespace I { namespace __zz_cib_GenericProxy {
  //#= FullClassName: ::I::__zz_cib_GenericProxy
  enum { __zz_cib_classid = 3 };
}}}

namespace __zz_cib_ { namespace illustration2 {
  enum { __zz_cib_next_class_id = 5 };
}}

namespace __zz_cib_ { namespace C { namespace __zz_cib_methodid {
  enum {
    //#= C();
    __zz_cib_new_0 = 0,
    //#= C(::C const &);
    __zz_cib_copy_1 = 1,
    //#= ~C();
    __zz_cib_delete_2 = 2,
    //#= int UseInterface(::I*);
    UseInterface_3 = 3,
    //#= __zz_cib_release_proxy
    __zz_cib_release_proxy_4 = 4,
    __zz_cib_next_method_id = 5
  };
}}}

namespace __zz_cib_ { namespace C { namespace __zz_cib_GenericProxy { namespace __zz_cib_methodid {
  enum {
    //#= int UseInterface(::I*);
    UseInterface_0 = 0,
    //#= ~C();
    __zz_cib_delete_1 = 1,
    __zz_cib_next_method_id = 2
  };
}}}}

namespace __zz_cib_ { namespace I { namespace __zz_cib_methodid {
  enum {
    //#= I();
    __zz_cib_new_0 = 0,
    //#= int F();
    F_1 = 1,
    //#= ~I();
    __zz_cib_delete_2 = 2,
    //#= __zz_cib_get_class_id
    __zz_cib_get_class_id_3 = 3,
    //#= __zz_cib_release_proxy
    __zz_cib_release_proxy_4 = 4,
    __zz_cib_next_method_id = 5
  };
}}}

namespace __zz_cib_ { namespace I { namespace __zz_cib_GenericProxy { namespace __zz_cib_methodid {
  enum {
    //#= int F();
    F_0 = 0,
    //#= ~I();
    __zz_cib_delete_1 = 1,
    __zz_cib_next_method_id = 2
  };
}}}}

