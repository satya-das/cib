#pragma once

namespace __zz_cib_ { namespace A {
  //#= FullClassName: ::A
  enum { __zz_cib_classid = 257 };
}}

namespace __zz_cib_ { namespace I {
  //#= FullClassName: ::I
  enum { __zz_cib_classid = 256 };
}}

namespace __zz_cib_ { namespace I { namespace __zz_cib_GenericProxy {
  //#= FullClassName: ::I::__zz_cib_GenericProxy
  enum { __zz_cib_classid = 258 };
}}}

namespace __zz_cib_ { namespace Example {
  enum { __zz_cib_next_class_id = 259 };
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
    //#= ::I const & f() const;
    f = 3,
    //#= ::I const * g() const;
    g = 4,
    //#= ::I* c() const;
    c = 5,
    //#= void d(::I const *) const;
    d = 6,
    __zz_cib_next_method_id = 7
  };
}}

namespace __zz_cib_ { namespace I {
  enum __zz_cib_methodid {
    //#= I();
    __zz_cib_new = 0,
    //#= ~I();
    __zz_cib_delete = 1,
    //#= int f() const;
    f = 2,
    //#= __zz_cib_get_class_id
    __zz_cib_get_class_id = 3,
    //#= __zz_cib_release_proxy
    __zz_cib_release_proxy = 4,
    //#= __zz_cib_find_proxy
    __zz_cib_find_proxy = 5,
    //#= __zz_cib_register_proxy
    __zz_cib_register_proxy = 6,
    //#= __zz_cib_unregister_proxy
    __zz_cib_unregister_proxy = 7,
    __zz_cib_next_method_id = 8
  };
}}

namespace __zz_cib_ { namespace I { namespace __zz_cib_GenericProxy {
  enum __zz_cib_methodid {
    //#= int f() const;
    f = 0,
    //#= ~I();
    __zz_cib_delete = 1,
    __zz_cib_next_method_id = 2
  };
}}}

