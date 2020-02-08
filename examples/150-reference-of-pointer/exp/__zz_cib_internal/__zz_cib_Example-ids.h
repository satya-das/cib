#pragma once

namespace __zz_cib_ { namespace __zz_cib_Example_Global {
  //#= FullClassName: ::
  enum { __zz_cib_classid = 258 };
}}

namespace __zz_cib_ { namespace A {
  //#= FullClassName: ::A
  enum { __zz_cib_classid = 256 };
}}

namespace __zz_cib_ { namespace A { namespace __zz_cib_GenericProxy {
  //#= FullClassName: ::A::__zz_cib_GenericProxy
  enum { __zz_cib_classid = 259 };
}}}

namespace __zz_cib_ { namespace B {
  //#= FullClassName: ::B
  enum { __zz_cib_classid = 257 };
}}

namespace __zz_cib_ { namespace B { namespace __zz_cib_GenericProxy {
  //#= FullClassName: ::B::__zz_cib_GenericProxy
  enum { __zz_cib_classid = 260 };
}}}

namespace __zz_cib_ { namespace Example {
  enum { __zz_cib_next_class_id = 261 };
  enum { __zz_cib_internal_class_id = 1 };
}}

namespace __zz_cib_ { namespace __zz_cib_Example_Global { namespace __zz_cib_methodid {
  enum {
    //#= int GetNewA(::A*&);
    GetNewA = 0,
    //#= int GetNewB(::A*&);
    GetNewB = 1,
    //#= int GetNewA(::A const *&);
    GetNewA_2 = 2,
    //#= int GetNewB(::A const *&);
    GetNewB_3 = 3,
    __zz_cib_next_method_id = 4
  };
}}}

namespace __zz_cib_ { namespace A { namespace __zz_cib_methodid {
  enum {
    //#= A();
    __zz_cib_new = 0,
    //#= A(::A const &);
    __zz_cib_copy = 1,
    //#= int VirtualFunction() const;
    VirtualFunction = 2,
    //#= ~A();
    __zz_cib_delete = 3,
    //#= __zz_cib_get_class_id
    __zz_cib_get_class_id = 4,
    //#= __zz_cib_release_proxy
    __zz_cib_release_proxy = 5,
    __zz_cib_next_method_id = 6
  };
}}}

namespace __zz_cib_ { namespace A { namespace __zz_cib_GenericProxy { namespace __zz_cib_methodid {
  enum {
    //#= int VirtualFunction() const;
    VirtualFunction = 0,
    //#= ~A();
    __zz_cib_delete = 1,
    __zz_cib_next_method_id = 2
  };
}}}}

namespace __zz_cib_ { namespace B { namespace __zz_cib_methodid {
  enum {
    //#= B();
    __zz_cib_new = 0,
    //#= B(::B const &);
    __zz_cib_copy = 1,
    //#= int VirtualFunction() const;
    VirtualFunction = 2,
    //#= ~B();
    __zz_cib_delete = 3,
    //#= __zz_cib_cast_to_A
    __zz_cib_cast_to_A = 4,
    //#= __zz_cib_release_proxy
    __zz_cib_release_proxy = 5,
    __zz_cib_next_method_id = 6
  };
}}}

namespace __zz_cib_ { namespace B { namespace __zz_cib_GenericProxy { namespace __zz_cib_methodid {
  enum {
    //#= int VirtualFunction() const;
    VirtualFunction = 0,
    //#= ~B();
    __zz_cib_delete = 1,
    __zz_cib_next_method_id = 2
  };
}}}}

