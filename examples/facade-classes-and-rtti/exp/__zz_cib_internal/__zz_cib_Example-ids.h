#pragma once

namespace __zz_cib_ { namespace A {
  //#= FullClassName: ::A
  enum { __zz_cib_classid = 3 };
}}

namespace __zz_cib_ { namespace Facade {
  //#= FullClassName: ::Facade
  enum { __zz_cib_classid = 1 };
}}

namespace __zz_cib_ { namespace PublicFacadeImpl {
  //#= FullClassName: ::PublicFacadeImpl
  enum { __zz_cib_classid = 2 };
}}

namespace __zz_cib_ { namespace Example {
  enum { __zz_cib_next_class_id = 4 };
}}

namespace __zz_cib_ { namespace A { namespace __zz_cib_methodid {
  enum {
    //#= A(::A const &);
    __zz_cib_copy_0 = 0,
    //#= ~A();
    __zz_cib_delete_1 = 1,
    //#= A();
    __zz_cib_new_2 = 2,
    //#= ::Facade* PublicFacade();
    PublicFacade_3 = 3,
    //#= ::Facade* PrivateFacade1();
    PrivateFacade1_4 = 4,
    //#= ::Facade* PrivateFacade2();
    PrivateFacade2_5 = 5,
    __zz_cib_next_method_id = 6
  };
}}}

namespace __zz_cib_ { namespace Facade { namespace __zz_cib_methodid {
  enum {
    //#= void F();
    F_0 = 0,
    //#= ~Facade();
    __zz_cib_delete_1 = 1,
    //#= __zz_cib_get_class_id
    __zz_cib_get_class_id_2 = 2,
    __zz_cib_next_method_id = 3
  };
}}}

namespace __zz_cib_ { namespace PublicFacadeImpl { namespace __zz_cib_methodid {
  enum {
    //#= PublicFacadeImpl(::PublicFacadeImpl const &);
    __zz_cib_copy_0 = 0,
    //#= ~PublicFacadeImpl();
    __zz_cib_delete_1 = 1,
    //#= PublicFacadeImpl();
    __zz_cib_new_2 = 2,
    //#= void F();
    F_3 = 3,
    //#= __zz_cib_cast_to___Facade
    __zz_cib_cast_to___Facade_4 = 4,
    __zz_cib_next_method_id = 5
  };
}}}

