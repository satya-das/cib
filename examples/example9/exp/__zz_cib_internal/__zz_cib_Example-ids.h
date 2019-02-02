#pragma once

namespace __zz_cib_ { namespace __zz_cib_Example_Global {
  //#= FullClassName: ::
  enum { __zz_cib_classid = 1 };
}}

namespace __zz_cib_ { namespace Example {
  //#= FullClassName: ::Example
  enum { __zz_cib_classid = 2 };
}}

namespace __zz_cib_ { namespace Example {
  enum { __zz_cib_next_class_id = 3 };
}}

namespace __zz_cib_ { namespace __zz_cib_Example_Global { namespace __zz_cib_methodid {
  enum {
    //#= int GlobalFunction1();
    GlobalFunction1_0 = 0,
    //#= int GlobalFunction2();
    GlobalFunction2_1 = 1,
    __zz_cib_next_method_id = 2
  };
}}}

namespace __zz_cib_ { namespace Example { namespace __zz_cib_methodid {
  enum {
    //#= int Function1();
    Function1_0 = 0,
    //#= int Function2();
    Function2_1 = 1,
    __zz_cib_next_method_id = 2
  };
}}}

