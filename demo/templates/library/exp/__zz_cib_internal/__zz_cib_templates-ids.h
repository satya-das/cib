#pragma once

namespace __zz_cib_ { namespace A {
  //#= FullClassName: ::A
  enum { __zz_cib_classid = 1 };
}}

namespace __zz_cib_ { namespace A { namespace __zz_cib_GenericProxy {
  //#= FullClassName: ::A::__zz_cib_GenericProxy
  enum { __zz_cib_classid = 2 };
}}}

namespace __zz_cib_ { namespace __zz_cib_Class3 {
  //#= FullClassName: ::Value<float>
  enum { __zz_cib_classid = 3 };
}}

namespace __zz_cib_ { namespace __zz_cib_Class4 {
  //#= FullClassName: ::Value<int>
  enum { __zz_cib_classid = 4 };
}}

namespace __zz_cib_ { namespace templates {
  enum { __zz_cib_next_class_id = 5 };
}}

namespace __zz_cib_ { namespace A { namespace __zz_cib_methodid {
  enum {
    //#= A();
    __zz_cib_new = 0,
    //#= A(::A const &);
    __zz_cib_copy = 1,
    //#= ~A();
    __zz_cib_delete = 2,
    //#= int setValue(::Value<int> const &) const;
    setValue = 3,
    //#= float setValue(::Value<float> const &) const;
    setValue_4 = 4,
    //#= ::Value<int> getIntValue() const;
    getIntValue = 5,
    //#= ::Value<float> getFloatValue() const;
    getFloatValue = 6,
    //#= __zz_cib_release_proxy
    __zz_cib_release_proxy = 7,
    __zz_cib_next_method_id = 8
  };
}}}

namespace __zz_cib_ { namespace A { namespace __zz_cib_GenericProxy { namespace __zz_cib_methodid {
  enum {
    //#= int setValue(::Value<int> const &) const;
    setValue = 0,
    //#= float setValue(::Value<float> const &) const;
    setValue_1 = 1,
    //#= ::Value<int> getIntValue() const;
    getIntValue = 2,
    //#= ::Value<float> getFloatValue() const;
    getFloatValue = 3,
    //#= ~A();
    __zz_cib_delete = 4,
    __zz_cib_next_method_id = 5
  };
}}}}

namespace __zz_cib_ { namespace __zz_cib_Class3 { namespace __zz_cib_methodid {
  enum {
    //#= Value(::Value<float> const &);
    __zz_cib_copy = 0,
    //#= ~Value();
    __zz_cib_delete = 1,
    //#= Value(float);
    __zz_cib_new = 2,
    //#= float get() const;
    get = 3,
    __zz_cib_next_method_id = 4
  };
}}}

namespace __zz_cib_ { namespace __zz_cib_Class4 { namespace __zz_cib_methodid {
  enum {
    //#= Value(::Value<int> const &);
    __zz_cib_copy = 0,
    //#= ~Value();
    __zz_cib_delete = 1,
    //#= Value(int);
    __zz_cib_new = 2,
    //#= int get() const;
    get = 3,
    __zz_cib_next_method_id = 4
  };
}}}

