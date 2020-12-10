#include "example.h"


CustomBaseException::CustomBaseException(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{}

CustomBaseException::CustomBaseException(CustomBaseException&& rhs)
  : __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

CustomBaseException::CustomBaseException(const ::CustomBaseException& __zz_cib_param0)
  : CustomBaseException(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

CustomBaseException::CustomBaseException(int error, const char* desc)
  : CustomBaseException(__zz_cib_MyHelper::__zz_cib_New_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(error)>(std::move(error)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(desc)>(std::move(desc))))
{}

CustomBaseException::~CustomBaseException() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_2(
    h
  );
}

int CustomBaseException::GetError() const {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::GetError_3<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}

const char* CustomBaseException::GetDesc() const {
  return __zz_cib_::__zz_cib_FromAbiType<const char*>(
    __zz_cib_MyHelper::GetDesc_4<__zz_cib_::__zz_cib_AbiType_t<const char*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}


CustomDerivedException::CustomDerivedException(__zz_cib_AbiType h)
  : ::CustomBaseException(__zz_cib_MyHelper::__zz_cib_CastTo__zz_cib_Class258(h))
  , __zz_cib_h_(h)
{}

CustomDerivedException::CustomDerivedException(CustomDerivedException&& rhs)
  : ::CustomBaseException(std::move(rhs))
  , __zz_cib_h_(rhs.__zz_cib_h_)
{
  rhs.__zz_cib_h_ = nullptr;
}

CustomDerivedException::CustomDerivedException(const ::CustomDerivedException& __zz_cib_param0)
  : CustomDerivedException(__zz_cib_MyHelper::__zz_cib_Copy_0(
        __zz_cib_::__zz_cib_ToAbiType<decltype(__zz_cib_param0)>(__zz_cib_param0)))
{}

CustomDerivedException::CustomDerivedException(int error, const char* desc, const char* source)
  : CustomDerivedException(__zz_cib_MyHelper::__zz_cib_New_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(error)>(std::move(error)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(desc)>(std::move(desc)),
    __zz_cib_::__zz_cib_ToAbiType<decltype(source)>(std::move(source))))
{}

CustomDerivedException::~CustomDerivedException() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_2(
    h
  );
}

const char* CustomDerivedException::GetSource() const {
  return __zz_cib_::__zz_cib_FromAbiType<const char*>(
    __zz_cib_MyHelper::GetSource_3<__zz_cib_::__zz_cib_AbiType_t<const char*>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this)
    )
  );
}


A::A(__zz_cib_AbiType h)
  : __zz_cib_h_(h)
{}

A::A()
  : A(__zz_cib_MyHelper::__zz_cib_New_0())
{}

A::A(const ::A& a)
  : A(__zz_cib_MyHelper::__zz_cib_Copy_1(
        __zz_cib_::__zz_cib_ToAbiType<decltype(a)>(a)))
{}

A::~A() {
  auto h = __zz_cib_MyHelper::__zz_cib_ReleaseHandle(this);
  __zz_cib_MyHelper::__zz_cib_Delete_2(
    h
  );
}

int A::ThrowException(::ExceptionType exceptionType) const {
  return __zz_cib_::__zz_cib_FromAbiType<int>(
    __zz_cib_MyHelper::ThrowException_3<__zz_cib_::__zz_cib_AbiType_t<int>>(
      __zz_cib_::__zz_cib_ToAbiType<decltype(this)>(this),
      __zz_cib_::__zz_cib_ToAbiType<decltype(exceptionType)>(std::move(exceptionType)),
      __zz_cib_::__zz_cib_ThrowOnError().Convert()
    )
  );
}

