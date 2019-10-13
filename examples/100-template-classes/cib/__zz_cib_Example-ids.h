#pragma once

namespace __zz_cib_ { namespace Example { namespace A {
  //#= FullClassName: ::Example::A
  enum { __zz_cib_classid = 256 };
}}}

namespace __zz_cib_ { namespace Example { namespace Int {
  //#= FullClassName: ::Example::Int
  enum { __zz_cib_classid = 257 };
}}}

namespace __zz_cib_ { namespace Example { namespace __zz_cib_Class258 {
  //#= FullClassName: ::Example::Value<::Example::Int>
  enum { __zz_cib_classid = 258 };
}}}

namespace __zz_cib_ { namespace Example { namespace __zz_cib_Class259 {
  //#= FullClassName: ::Example::Value<int>
  enum { __zz_cib_classid = 259 };
}}}

namespace __zz_cib_ { namespace Example {
  enum { __zz_cib_next_class_id = 260 };
  enum { __zz_cib_internal_class_id = 1 };
}}

namespace __zz_cib_ { namespace Example { namespace A { namespace __zz_cib_methodid {
  enum {
    //#= A();
    __zz_cib_new = 0,
    //#= A(::Example::A const &);
    __zz_cib_copy = 1,
    //#= ~A();
    __zz_cib_delete = 2,
    //#= void Set(::Example::Value<int> const &);
    __zz_cib_Set = 3,
    //#= ::Example::Value<int> Get() const;
    __zz_cib_Get = 4,
    //#= void SetInt(::Example::Value<::Example::Int> const &);
    __zz_cib_SetInt = 5,
    //#= ::Example::Value<::Example::Int> GetInt() const;
    __zz_cib_GetInt = 6,
    __zz_cib_next_method_id = 7
  };
}}}}

namespace __zz_cib_ { namespace Example { namespace Int { namespace __zz_cib_methodid {
  enum {
    //#= Int(::Example::Int const &);
    __zz_cib_copy = 0,
    //#= ~Int();
    __zz_cib_delete = 1,
    //#= Int(int);
    __zz_cib_new = 2,
    //#= operator int () const;
    __zz_cib_Operator = 3,
    __zz_cib_next_method_id = 4
  };
}}}}

namespace __zz_cib_ { namespace Example { namespace __zz_cib_Class258 { namespace __zz_cib_methodid {
  enum {
    //#= Value(::Example::Value<::Example::Int> const &);
    __zz_cib_copy = 0,
    //#= ~Value();
    __zz_cib_delete = 1,
    //#= Value(::Example::Int);
    __zz_cib_new = 2,
    //#= ::Example::Int GetValue() const;
    __zz_cib_GetValue = 3,
    //#= void SetValue(::Example::Int);
    __zz_cib_SetValue = 4,
    __zz_cib_next_method_id = 5
  };
}}}}

namespace __zz_cib_ { namespace Example { namespace __zz_cib_Class259 { namespace __zz_cib_methodid {
  enum {
    //#= Value(::Example::Value<int> const &);
    __zz_cib_copy = 0,
    //#= ~Value();
    __zz_cib_delete = 1,
    //#= Value(int);
    __zz_cib_new = 2,
    //#= int GetValue() const;
    __zz_cib_GetValue = 3,
    //#= void SetValue(int);
    __zz_cib_SetValue = 4,
    __zz_cib_next_method_id = 5
  };
}}}}

