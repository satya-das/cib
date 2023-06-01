#pragma once

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class256 {
  //#= FullClassName: ::Example
  enum { __zz_cib_classId = 256 };
}}}

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class256 { namespace __zz_cib_Class262 {
  //#= FullClassName: ::Example::A
  enum { __zz_cib_classId = 262 };
}}}}

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class256 { namespace __zz_cib_Class263 {
  //#= FullClassName: ::Example::Int
  enum { __zz_cib_classId = 263 };
}}}}

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class256 { namespace __zz_cib_Class258 {
  //#= FullClassName: ::Example::Value<::Example::Int>
  enum { __zz_cib_classId = 258 };
}}}}

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class256 { namespace __zz_cib_Class259 {
  //#= FullClassName: ::Example::Value<float>
  enum { __zz_cib_classId = 259 };
}}}}

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class256 { namespace __zz_cib_Class257 {
  //#= FullClassName: ::Example::Value<int>
  enum { __zz_cib_classId = 257 };
}}}}

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class260 {
  //#= FullClassName: ::__zz_cib_stl_helpers
  enum { __zz_cib_classId = 260 };
}}}

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class261 {
  //#= FullClassName: ::std
  enum { __zz_cib_classId = 261 };
}}}

namespace __zz_cib_ { namespace Example {
  enum { __zz_cib_nextClassId = 264 };
  enum { __zz_cib_internalClassId = 1 };
}}

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class256 { namespace __zz_cib_Class262 {
  enum __zz_cib_MethodId {
    //#= A();
    __zz_cib_New_0 = 0,
    //#= A(const A&);
    __zz_cib_Copy_1 = 1,
    //#= ~A();
    __zz_cib_Delete_2 = 2,
    //#= void Set(const ::Example::Value<int>&);
    Set_3 = 3,
    //#= ::Example::Value<int> Get() const;
    Get_4 = 4,
    //#= void SetInt(const ::Example::Value<::Example::Int>&);
    SetInt_5 = 5,
    //#= ::Example::Value<::Example::Int> GetInt() const;
    GetInt_6 = 6,
    //#= void SetFloat(::Example::Value<float>);
    SetFloat_7 = 7,
    //#= ::Example::Value<float> GetFloat() const;
    GetFloat_8 = 8,
    __zz_cib_nextMethodId = 9
  };
}}}}

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class256 { namespace __zz_cib_Class263 {
  enum __zz_cib_MethodId {
    //#= Int(const Int&);
    __zz_cib_Copy_0 = 0,
    //#= ~Int();
    __zz_cib_Delete_1 = 1,
    //#= Int(int);
    __zz_cib_New_2 = 2,
    //#= operator int () const;
    __zz_cib_Operator_3 = 3,
    __zz_cib_nextMethodId = 4
  };
}}}}

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class256 { namespace __zz_cib_Class258 {
  enum __zz_cib_MethodId {
    //#= Value(const Value<::Example::Int>&);
    __zz_cib_Copy_0 = 0,
    //#= ~Value();
    __zz_cib_Delete_1 = 1,
    //#= Value(::Example::Int);
    __zz_cib_New_2 = 2,
    //#= ::Example::Int GetValue() const;
    GetValue_3 = 3,
    //#= void SetValue(::Example::Int);
    SetValue_4 = 4,
    //#= bool operator ==(const ::Example::Value<::Example::Int>&) const;
    __zz_cib_OperatorCmpEq_5 = 5,
    __zz_cib_nextMethodId = 6
  };
}}}}

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class256 { namespace __zz_cib_Class259 {
  enum __zz_cib_MethodId {
    //#= Value(const Value<float>&);
    __zz_cib_Copy_0 = 0,
    //#= ~Value();
    __zz_cib_Delete_1 = 1,
    //#= Value(float);
    __zz_cib_New_2 = 2,
    //#= float GetValue() const;
    GetValue_3 = 3,
    //#= void SetValue(float);
    SetValue_4 = 4,
    //#= bool operator ==(const ::Example::Value<float>&) const;
    __zz_cib_OperatorCmpEq_5 = 5,
    __zz_cib_nextMethodId = 6
  };
}}}}

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class256 { namespace __zz_cib_Class257 {
  enum __zz_cib_MethodId {
    //#= Value(const Value<int>&);
    __zz_cib_Copy_0 = 0,
    //#= ~Value();
    __zz_cib_Delete_1 = 1,
    //#= Value(int);
    __zz_cib_New_2 = 2,
    //#= int GetValue() const;
    GetValue_3 = 3,
    //#= void SetValue(int);
    SetValue_4 = 4,
    //#= bool operator ==(const ::Example::Value<int>&) const;
    __zz_cib_OperatorCmpEq_5 = 5,
    __zz_cib_nextMethodId = 6
  };
}}}}

