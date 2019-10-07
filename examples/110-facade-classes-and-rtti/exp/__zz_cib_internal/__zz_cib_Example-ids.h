#pragma once

namespace __zz_cib_ { namespace A {
  //#= FullClassName: ::A
  enum { __zz_cib_classid = 258 };
}}

namespace __zz_cib_ { namespace Facade {
  //#= FullClassName: ::Facade
  enum { __zz_cib_classid = 256 };
}}

namespace __zz_cib_ { namespace PublicFacadeImpl {
  //#= FullClassName: ::PublicFacadeImpl
  enum { __zz_cib_classid = 257 };
}}

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
    //#= ::Facade* PublicFacade();
    PublicFacade = 3,
    //#= ::Facade* PrivateFacade1();
    PrivateFacade1 = 4,
    //#= ::Facade* PrivateFacade2();
    PrivateFacade2 = 5,
    __zz_cib_next_method_id = 6
  };
}}}

namespace __zz_cib_ { namespace Facade { namespace __zz_cib_methodid {
  enum {
    //#= void F();
    F = 0,
    //#= ~Facade();
    __zz_cib_delete = 1,
    //#= __zz_cib_get_class_id
    __zz_cib_get_class_id = 2,
    __zz_cib_next_method_id = 3
  };
}}}

namespace __zz_cib_ { namespace PublicFacadeImpl { namespace __zz_cib_methodid {
  enum {
    //#= PublicFacadeImpl(::PublicFacadeImpl const &);
    __zz_cib_copy = 0,
    //#= ~PublicFacadeImpl();
    __zz_cib_delete = 1,
    //#= PublicFacadeImpl();
    __zz_cib_new = 2,
    //#= void F();
    F = 3,
    //#= __zz_cib_cast_to___Facade
    __zz_cib_cast_to___Facade = 4,
    __zz_cib_next_method_id = 5
  };
}}}

