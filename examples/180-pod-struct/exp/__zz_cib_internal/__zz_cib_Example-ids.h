#pragma once

namespace __zz_cib_ { namespace A {
  //#= FullClassName: ::A
  enum { __zz_cib_classid = 266 };
}}

namespace __zz_cib_ { namespace NonPod1 {
  //#= FullClassName: ::NonPod1
  enum { __zz_cib_classid = 263 };
}}

namespace __zz_cib_ { namespace NonPod2 {
  //#= FullClassName: ::NonPod2
  enum { __zz_cib_classid = 264 };
}}

namespace __zz_cib_ { namespace NonPod3 {
  //#= FullClassName: ::NonPod3
  enum { __zz_cib_classid = 265 };
}}

namespace __zz_cib_ { namespace Example {
  enum { __zz_cib_next_class_id = 267 };
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
    //#= void setPod(::Pod&);
    setPod = 3,
    //#= void setPod(::Pod*);
    setPod_4 = 4,
    //#= void setNonPod1(::NonPod1&);
    setNonPod1 = 5,
    //#= void setNonPod2(::NonPod2&);
    setNonPod2 = 6,
    //#= void setNonPod3(::NonPod3&);
    setNonPod3 = 7,
    __zz_cib_next_method_id = 8
  };
}}}

namespace __zz_cib_ { namespace NonPod1 { namespace __zz_cib_methodid {
  enum {
    //#= NonPod1();
    __zz_cib_new = 0,
    //#= NonPod1(::NonPod1 const &);
    __zz_cib_copy = 1,
    //#= ~NonPod1();
    __zz_cib_delete = 2,
    __zz_cib_next_method_id = 3
  };
}}}

namespace __zz_cib_ { namespace NonPod2 { namespace __zz_cib_methodid {
  enum {
    //#= NonPod2();
    __zz_cib_new = 0,
    //#= NonPod2(::NonPod2 const &);
    __zz_cib_copy = 1,
    //#= ~NonPod2();
    __zz_cib_delete = 2,
    __zz_cib_next_method_id = 3
  };
}}}

namespace __zz_cib_ { namespace NonPod3 { namespace __zz_cib_methodid {
  enum {
    //#= NonPod3();
    __zz_cib_new = 0,
    //#= NonPod3(::NonPod3 const &);
    __zz_cib_copy = 1,
    //#= ~NonPod3();
    __zz_cib_delete = 2,
    __zz_cib_next_method_id = 3
  };
}}}

