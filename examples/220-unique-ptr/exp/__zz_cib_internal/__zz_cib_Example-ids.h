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
    //#= std::unique_ptr<I> f() const;
    f = 3,
    //#= ::I* g();
    g = 4,
    //#= int h(std::unique_ptr<I>) const;
    h = 5,
    //#= int i(::I*) const;
    i = 6,
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
    //#= std::unique_ptr<int> g() const;
    g = 3,
    //#= __zz_cib_get_class_id
    __zz_cib_get_class_id = 4,
    //#= __zz_cib_release_proxy
    __zz_cib_release_proxy = 5,
    __zz_cib_next_method_id = 6
  };
}}}

namespace __zz_cib_ { namespace I { namespace __zz_cib_GenericProxy { namespace __zz_cib_methodid {
  enum {
    //#= int f() const;
    f = 0,
    //#= std::unique_ptr<int> g() const;
    g = 1,
    //#= ~I();
    __zz_cib_delete = 2,
    __zz_cib_next_method_id = 3
  };
}}}}

