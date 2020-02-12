#pragma once

namespace __zz_cib_ { namespace A {
  //#= FullClassName: ::A
  enum { __zz_cib_classid = 258 };
}}

namespace __zz_cib_ { namespace IF {
  //#= FullClassName: ::IF
  enum { __zz_cib_classid = 257 };
}}

namespace __zz_cib_ { namespace IF { namespace __zz_cib_GenericProxy {
  //#= FullClassName: ::IF::__zz_cib_GenericProxy
  enum { __zz_cib_classid = 259 };
}}}

namespace __zz_cib_ { namespace Example {
  enum { __zz_cib_next_class_id = 260 };
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
    //#= int SetIF(::IF*);
    SetIF = 3,
    //#= ::IF* GetIF() const;
    GetIF = 4,
    __zz_cib_next_method_id = 5
  };
}}

namespace __zz_cib_ { namespace IF {
  enum __zz_cib_methodid {
    //#= IF();
    __zz_cib_new = 0,
    //#= int ProtectedPureVirtual();
    ProtectedPureVirtual = 1,
    //#= int ProtectedVirtual();
    ProtectedVirtual = 2,
    //#= int ProtectedNonVirtual();
    ProtectedNonVirtual = 3,
    //#= int PublicPureVirtual();
    PublicPureVirtual = 4,
    //#= int PublicVirtual();
    PublicVirtual = 5,
    //#= int PublicNonVirtual();
    PublicNonVirtual = 6,
    //#= ~IF();
    __zz_cib_delete = 7,
    //#= int PrivatePureVirtual();
    PrivatePureVirtual = 8,
    //#= __zz_cib_get_class_id
    __zz_cib_get_class_id = 9,
    //#= __zz_cib_release_proxy
    __zz_cib_release_proxy = 10,
    __zz_cib_next_method_id = 11
  };
}}

namespace __zz_cib_ { namespace IF { namespace __zz_cib_GenericProxy {
  enum __zz_cib_methodid {
    //#= int ProtectedVirtual();
    ProtectedVirtual = 0,
    //#= int PublicPureVirtual();
    PublicPureVirtual = 1,
    //#= int ProtectedPureVirtual();
    ProtectedPureVirtual = 2,
    //#= int PublicVirtual();
    PublicVirtual = 3,
    //#= int PrivatePureVirtual();
    PrivatePureVirtual = 4,
    //#= ~IF();
    __zz_cib_delete = 5,
    __zz_cib_next_method_id = 6
  };
}}}

