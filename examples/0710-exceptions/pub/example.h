#pragma once

#include <stdexcept>

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
  CustomBaseException(int error, const char* desc) noexcept
    : mError(error)
    , mDesc(desc)
  {}

  ~CustomBaseException();

  int GetError() const noexcept { return mError; }
  const char* GetDesc() const noexcept { return mDesc; }

private:
  int mError;
  const char* mDesc;
};

class CustomDerivedException : public CustomBaseException
{
public:
  CustomDerivedException(int error, const char* desc, const char* source) noexcept
    : CustomBaseException(error, desc)
    , mSource(source)
  {}

  ~CustomDerivedException();

  const char* GetSource() const noexcept { return mSource; }

private:
  const char* mSource;
};

class A final
{
public:
  A() noexcept;
  A(const A& a) noexcept;
  A(A&&) = delete;
  ~A();

  int ThrowException(ExceptionType exceptionType) const {
    switch (exceptionType)
    {
    case ExceptionType::None:
      break;

    case ExceptionType::StdRuntimeError:
      throw std::runtime_error("runtime error occurred");

    case ExceptionType::Int:
      throw 999;

    case ExceptionType::CustomBaseException:
      throw CustomBaseException(193, "custom base exception occurred");

    case ExceptionType::CustomDerivedException:
      throw CustomDerivedException(193, "custom derived exception occurred", "Example library");
    }

    return 111;
  }
};
