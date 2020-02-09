#pragma once

namespace __zz_cib_ { namespace Interface {
  //#= FullClassName: ::Interface
  enum { __zz_cib_classid = 256 };
}}

namespace __zz_cib_ { namespace Interface { namespace __zz_cib_GenericProxy {
  //#= FullClassName: ::Interface::__zz_cib_GenericProxy
  enum { __zz_cib_classid = 257 };
}}}

namespace __zz_cib_ { namespace Example {
  enum { __zz_cib_next_class_id = 258 };
  enum { __zz_cib_internal_class_id = 1 };
}}

namespace __zz_cib_ { namespace Interface {
  enum __zz_cib_methodid {
    //#= Interface(::Interface const &);
    __zz_cib_copy = 0,
    //#= Interface();
    __zz_cib_new = 1,
    //#= ~Interface();
    __zz_cib_delete = 2,
    //#= int Func();
    Func = 3,
    //#= int DoFunc() const;
    DoFunc = 4,
    //#= __zz_cib_release_proxy
    __zz_cib_release_proxy = 5,
    __zz_cib_next_method_id = 6
  };
}}

namespace __zz_cib_ { namespace Interface { namespace __zz_cib_GenericProxy {
  enum __zz_cib_methodid {
    //#= int DoFunc() const;
    DoFunc = 0,
    //#= ~Interface();
    __zz_cib_delete = 1,
    __zz_cib_next_method_id = 2
  };
}}}

