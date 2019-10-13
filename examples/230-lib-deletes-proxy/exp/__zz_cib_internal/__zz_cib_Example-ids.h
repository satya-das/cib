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

namespace __zz_cib_ { namespace A { namespace __zz_cib_methodid {
  enum {
    //#= A(::A const &);
    __zz_cib_copy = 0,
    //#= ~A();
    __zz_cib_delete = 1,
    //#= A();
    __zz_cib_new = 2,
    //#= ::I const & f() const;
    __zz_cib_f = 3,
    //#= ::I const * g() const;
    __zz_cib_g = 4,
    //#= ::I* c() const;
    __zz_cib_c = 5,
    //#= void d(::I const *) const;
    __zz_cib_d = 6,
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
    __zz_cib_f = 2,
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
}}}

namespace __zz_cib_ { namespace I { namespace __zz_cib_GenericProxy { namespace __zz_cib_methodid {
  enum {
    //#= int f() const;
    __zz_cib_f = 0,
    //#= ~I();
    __zz_cib_delete = 1,
    __zz_cib_next_method_id = 2
  };
}}}}

