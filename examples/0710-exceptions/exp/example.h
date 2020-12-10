#pragma  once
#include <stdexcept>

#include "__zz_cib_internal/example-predef.h"

enum class ExceptionType {
  None,
  StdRuntimeError,
  Int,
  CustomBaseException,
  CustomDerivedException,
};
class CustomBaseException
{
public:
  CustomBaseException(CustomBaseException&& rhs);
public:
  CustomBaseException(const CustomBaseException&);
  CustomBaseException(int error, const char* desc);
  ~CustomBaseException();
  int GetError() const;
  const char* GetDesc() const;

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(CustomBaseException, CustomBaseException);
};

class CustomDerivedException : public ::CustomBaseException
{
public:
  CustomDerivedException(CustomDerivedException&& rhs);
public:
  CustomDerivedException(const CustomDerivedException&);
  CustomDerivedException(int error, const char* desc, const char* source);
  ~CustomDerivedException();
  const char* GetSource() const;

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(CustomDerivedException, CustomDerivedException);
};

class A final
{
public:
  A();
  A(const A& a);
  A(A&&) = delete;
  ~A();
  int ThrowException(ExceptionType exceptionType) const;

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(A, A);
};

#include "__zz_cib_internal/example-postdef.h"
