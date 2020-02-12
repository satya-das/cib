#pragma once

namespace __zz_cib_ { namespace Example { namespace A {
  //#= FullClassName: ::Example::A
  enum { __zz_cib_classid = 260 };
}}}

namespace __zz_cib_ { namespace Example { namespace Int {
  //#= FullClassName: ::Example::Int
  enum { __zz_cib_classid = 261 };
}}}

namespace __zz_cib_ { namespace Example { namespace __zz_cib_Class258 {
  //#= FullClassName: ::Example::Value<::Example::Int>
  enum { __zz_cib_classid = 258 };
}}}

namespace __zz_cib_ { namespace Example { namespace __zz_cib_Class259 {
  //#= FullClassName: ::Example::Value<float>
  enum { __zz_cib_classid = 259 };
}}}

namespace __zz_cib_ { namespace Example { namespace __zz_cib_Class257 {
  //#= FullClassName: ::Example::Value<int>
  enum { __zz_cib_classid = 257 };
}}}

namespace __zz_cib_ { namespace Example {
  enum { __zz_cib_next_class_id = 262 };
  enum { __zz_cib_internal_class_id = 1 };
}}

namespace __zz_cib_ { namespace Example { namespace A {
  enum __zz_cib_methodid {
    //#= A();
    __zz_cib_new = 0,
    //#= A(::Example::A const &);
    __zz_cib_copy = 1,
    //#= ~A();
    __zz_cib_delete = 2,
    //#= void Set(::Example::Value<int> const &);
    Set = 3,
    //#= ::Example::Value<int> Get() const;
    Get = 4,
    //#= void SetInt(::Example::Value<::Example::Int> const &);
    SetInt = 5,
    //#= ::Example::Value<::Example::Int> GetInt() const;
    GetInt = 6,
    //#= void SetFloat(::Example::Value<float> const );
    SetFloat = 7,
    //#= ::Example::Value<float> GetFloat() const;
    GetFloat = 8,
    __zz_cib_next_method_id = 9
  };
}}}

namespace __zz_cib_ { namespace Example { namespace Int {
  enum __zz_cib_methodid {
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
}}}

namespace __zz_cib_ { namespace Example { namespace __zz_cib_Class258 {
  enum __zz_cib_methodid {
    //#= Value(::Example::Value<::Example::Int> const &);
    __zz_cib_copy = 0,
    //#= ~Value();
    __zz_cib_delete = 1,
    //#= Value(::Example::Int);
    __zz_cib_new = 2,
    //#= ::Example::Int GetValue() const;
    GetValue = 3,
    //#= void SetValue(::Example::Int);
    SetValue = 4,
    //#= bool operator ==(::Example::Value<::Example::Int> const &) const;
    __zz_cib_OperatorCmpEq = 5,
    __zz_cib_next_method_id = 6
  };
}}}

namespace __zz_cib_ { namespace Example { namespace __zz_cib_Class259 {
  enum __zz_cib_methodid {
    //#= Value(::Example::Value<float> const &);
    __zz_cib_copy = 0,
    //#= ~Value();
    __zz_cib_delete = 1,
    //#= Value(float);
    __zz_cib_new = 2,
    //#= float GetValue() const;
    GetValue = 3,
    //#= void SetValue(float);
    SetValue = 4,
    //#= bool operator ==(::Example::Value<float> const &) const;
    __zz_cib_OperatorCmpEq = 5,
    __zz_cib_next_method_id = 6
  };
}}}

namespace __zz_cib_ { namespace Example { namespace __zz_cib_Class257 {
  enum __zz_cib_methodid {
    //#= Value(::Example::Value<int> const &);
    __zz_cib_copy = 0,
    //#= ~Value();
    __zz_cib_delete = 1,
    //#= Value(int);
    __zz_cib_new = 2,
    //#= int GetValue() const;
    GetValue = 3,
    //#= void SetValue(int);
    SetValue = 4,
    //#= bool operator ==(::Example::Value<int> const &) const;
    __zz_cib_OperatorCmpEq = 5,
    __zz_cib_next_method_id = 6
  };
}}}

