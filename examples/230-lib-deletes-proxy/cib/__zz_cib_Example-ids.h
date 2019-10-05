#pragma once

namespace __zz_cib_ { namespace A {
  //#= FullClassName: ::A
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

namespace __zz_cib_ { namespace Example {
  enum { __zz_cib_next_class_id = 4 };
}}

namespace __zz_cib_ { namespace A { namespace __zz_cib_methodid {
  enum {
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
}}}

namespace __zz_cib_ { namespace I { namespace __zz_cib_methodid {
  enum {
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
    __zz_cib_next_method_id = 5
  };
}}}

namespace __zz_cib_ { namespace I { namespace __zz_cib_GenericProxy { namespace __zz_cib_methodid {
  enum {
    //#= int f() const;
    f = 0,
    //#= ~I();
    __zz_cib_delete = 1,
    __zz_cib_next_method_id = 2
  };
}}}}

