#pragma once

namespace __zz_cib_ { namespace A {
  //#= FullClassName: ::A
  enum { __zz_cib_classid = 256 };
}}

namespace __zz_cib_ { namespace A { namespace __zz_cib_GenericProxy {
  //#= FullClassName: ::A::__zz_cib_GenericProxy
  enum { __zz_cib_classid = 257 };
}}}

namespace __zz_cib_ { namespace __zz_cib_Class258 {
  //#= FullClassName: ::Value<float>
  enum { __zz_cib_classid = 258 };
}}

namespace __zz_cib_ { namespace __zz_cib_Class259 {
  //#= FullClassName: ::Value<int>
  enum { __zz_cib_classid = 259 };
}}

namespace __zz_cib_ { namespace templates {
  enum { __zz_cib_next_class_id = 260 };
  enum { __zz_cib_internal_class_id = 1 };
}}

namespace __zz_cib_ { namespace A {
  enum __zz_cib_methodid {
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
}}

namespace __zz_cib_ { namespace A { namespace __zz_cib_GenericProxy {
  enum __zz_cib_methodid {
    //#= ::Value<int> getIntValue() const;
    getIntValue = 0,
    //#= ::Value<float> getFloatValue() const;
    getFloatValue = 1,
    //#= int setValue(::Value<int> const &) const;
    setValue = 2,
    //#= float setValue(::Value<float> const &) const;
    setValue_3 = 3,
    //#= ~A();
    __zz_cib_delete = 4,
    __zz_cib_next_method_id = 5
  };
}}}

namespace __zz_cib_ { namespace __zz_cib_Class258 {
  enum __zz_cib_methodid {
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
}}

namespace __zz_cib_ { namespace __zz_cib_Class259 {
  enum __zz_cib_methodid {
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
}}

