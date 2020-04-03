#pragma once

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class256 {
  //#= FullClassName: ::Example
  enum { __zz_cib_classid = 256 };
}}}

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class256 { namespace __zz_cib_Class261 {
  //#= FullClassName: ::Example::A
  enum { __zz_cib_classid = 261 };
}}}}

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class256 { namespace __zz_cib_Class262 {
  //#= FullClassName: ::Example::Int
  enum { __zz_cib_classid = 262 };
}}}}

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class256 { namespace __zz_cib_Class258 {
  //#= FullClassName: ::Example::Value<::Example::Int>
  enum { __zz_cib_classid = 258 };
}}}}

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class256 { namespace __zz_cib_Class259 {
  //#= FullClassName: ::Example::Value<float>
  enum { __zz_cib_classid = 259 };
}}}}

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class256 { namespace __zz_cib_Class257 {
  //#= FullClassName: ::Example::Value<int>
  enum { __zz_cib_classid = 257 };
}}}}

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class260 {
  //#= FullClassName: ::std
  enum { __zz_cib_classid = 260 };
}}}

namespace __zz_cib_ { namespace Example {
  enum { __zz_cib_next_class_id = 263 };
  enum { __zz_cib_internal_class_id = 1 };
}}

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class256 { namespace __zz_cib_Class261 {
  enum __zz_cib_methodid {
    //#= A();
    __zz_cib_new = 0,
    //#= A(const ::Example::A&);
    __zz_cib_copy = 1,
    //#= ~A();
    __zz_cib_delete = 2,
    //#= void Set(const ::Example::Value<int>&);
    Set = 3,
    //#= ::Example::Value<int> Get() const;
    Get = 4,
    //#= void SetInt(const ::Example::Value<::Example::Int>&);
    SetInt = 5,
    //#= ::Example::Value<::Example::Int> GetInt() const;
    GetInt = 6,
    //#= void SetFloat(::Example::Value<float>);
    SetFloat = 7,
    //#= ::Example::Value<float> GetFloat() const;
    GetFloat = 8,
    __zz_cib_next_method_id = 9
  };
}}}}

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class256 { namespace __zz_cib_Class262 {
  enum __zz_cib_methodid {
    //#= Int(const ::Example::Int&);
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

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class256 { namespace __zz_cib_Class258 {
  enum __zz_cib_methodid {
    //#= Value(const ::Example::Value<::Example::Int>&);
    __zz_cib_copy = 0,
    //#= ~Value();
    __zz_cib_delete = 1,
    //#= Value(::Example::Int);
    __zz_cib_new = 2,
    //#= ::Example::Int GetValue() const;
    GetValue = 3,
    //#= void SetValue(::Example::Int);
    SetValue = 4,
    //#= bool operator ==(const ::Example::Value<::Example::Int>&) const;
    __zz_cib_OperatorCmpEq = 5,
    __zz_cib_next_method_id = 6
  };
}}}}

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class256 { namespace __zz_cib_Class259 {
  enum __zz_cib_methodid {
    //#= Value(const ::Example::Value<float>&);
    __zz_cib_copy = 0,
    //#= ~Value();
    __zz_cib_delete = 1,
    //#= Value(float);
    __zz_cib_new = 2,
    //#= float GetValue() const;
    GetValue = 3,
    //#= void SetValue(float);
    SetValue = 4,
    //#= bool operator ==(const ::Example::Value<float>&) const;
    __zz_cib_OperatorCmpEq = 5,
    __zz_cib_next_method_id = 6
  };
}}}}

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class256 { namespace __zz_cib_Class257 {
  enum __zz_cib_methodid {
    //#= Value(const ::Example::Value<int>&);
    __zz_cib_copy = 0,
    //#= ~Value();
    __zz_cib_delete = 1,
    //#= Value(int);
    __zz_cib_new = 2,
    //#= int GetValue() const;
    GetValue = 3,
    //#= void SetValue(int);
    SetValue = 4,
    //#= bool operator ==(const ::Example::Value<int>&) const;
    __zz_cib_OperatorCmpEq = 5,
    __zz_cib_next_method_id = 6
  };
}}}}

