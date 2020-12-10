#pragma once

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class260 {
  //#= FullClassName: ::A
  enum { __zz_cib_classId = 260 };
}}}

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class258 {
  //#= FullClassName: ::CustomBaseException
  enum { __zz_cib_classId = 258 };
}}}

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class259 {
  //#= FullClassName: ::CustomDerivedException
  enum { __zz_cib_classId = 259 };
}}}

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class256 {
  //#= FullClassName: ::__zz_cib_stl_helpers
  enum { __zz_cib_classId = 256 };
}}}

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class257 {
  //#= FullClassName: ::std
  enum { __zz_cib_classId = 257 };
}}}

namespace __zz_cib_ { namespace Example {
  enum { __zz_cib_nextClassId = 261 };
  enum { __zz_cib_internalClassId = 1 };
}}

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class260 {
  enum __zz_cib_MethodId {
    //#= A();
    __zz_cib_New_0 = 0,
    //#= A(const ::A&);
    __zz_cib_Copy_1 = 1,
    //#= ~A();
    __zz_cib_Delete_2 = 2,
    //#= int ThrowException(::ExceptionType) const;
    ThrowException_3 = 3,
    __zz_cib_nextMethodId = 4
  };
}}}

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class258 {
  enum __zz_cib_MethodId {
    //#= CustomBaseException(const ::CustomBaseException&);
    __zz_cib_Copy_0 = 0,
    //#= CustomBaseException(int, const char*);
    __zz_cib_New_1 = 1,
    //#= ~CustomBaseException();
    __zz_cib_Delete_2 = 2,
    //#= int GetError() const;
    GetError_3 = 3,
    //#= const char* GetDesc() const;
    GetDesc_4 = 4,
    __zz_cib_nextMethodId = 5
  };
}}}

namespace __zz_cib_ { namespace __zz_cib_ids { namespace __zz_cib_Class259 {
  enum __zz_cib_MethodId {
    //#= CustomDerivedException(const ::CustomDerivedException&);
    __zz_cib_Copy_0 = 0,
    //#= CustomDerivedException(int, const char*, const char*);
    __zz_cib_New_1 = 1,
    //#= ~CustomDerivedException();
    __zz_cib_Delete_2 = 2,
    //#= const char* GetSource() const;
    GetSource_3 = 3,
    //#= __zz_cib_CastTo__zz_cib_Class258
    __zz_cib_CastTo__zz_cib_Class258 = 4,
    //#= __zz_cib_CastFrom__zz_cib_Class258
    __zz_cib_CastFrom__zz_cib_Class258 = 5,
    __zz_cib_nextMethodId = 6
  };
}}}

